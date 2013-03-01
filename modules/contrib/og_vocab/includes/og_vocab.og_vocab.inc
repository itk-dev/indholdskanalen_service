<?php

/**
 * @file
 * A class used for messages.
 */


class OgVocab extends Entity {

  /**
   * The entity type.
   *
   * @var string
   */
  public $entity_type;

  /**
   * The bundle.
   *
   * @var string
   */
  public $bundle;

  /**
   * The OG-vocab settings.
   *
   * @var array
   */
  public $settings = array();

  public function __construct($values = array()) {
    $values += array(
    );
    parent::__construct($values, 'og_vocab');
  }

  /**
   * Return form element.
   */
  public function getFormElement($entity_type, $entity, &$form, &$form_state) {
    $vid = $this->vid;
    $vocabulary = taxonomy_vocabulary_load($vid);

    // Create a dummy entity that only holds the legal values for the
    // selected vocabulary. This is needed for autocomplete fields.
    $dummy_entity = clone $entity;
    $wrapper = entity_metadata_wrapper($entity_type, $dummy_entity);
    foreach ($wrapper->{OG_VOCAB_FIELD}->value() as $delta => $term) {
      if ($term->vid != $this->vid) {
        $wrapper->{OG_VOCAB_FIELD}->offsetUnset($delta);
      }
    }

    ctools_include('fields');
    $mocked_field = $this->getMockedField();
    $field_instance = $mocked_field['instance'];
    $field_instance['field'] = $mocked_field['field'];

    $options = array(
      'default' => TRUE,
    );

    $new_element = ctools_field_invoke_field($field_instance, 'form', $entity_type, $dummy_entity, $form, $form_state, $options);
    $element = $new_element[OG_VOCAB_FIELD][LANGUAGE_NONE];

    if ($this->settings['widget_type'] ==  'entityreference_autocomplete') {
      $element['#vid'] = $vid;

      // Change the "Add more" button name so it adds only the needed
      // element.
      $element['add_more']['#name'] .= '__' . $vid;

      foreach (array_keys($element) as $delta) {
        if (!is_numeric($delta)) {
          continue;
        }

        $sub_element = &$element[$delta]['target_id'];
        $this->prepareAutoComplete($sub_element);
      }
    }
    elseif ($this->settings['widget_type'] == 'entityreference_autocomplete_tags') {
      $element['#vid'] = $vid;
      $this->prepareAutoComplete($element);
      // Add own validate handler, that will be able to add "autocreate"
      // values.
      $element['#element_validate'] = array('_og_vocab_autocomplete_tags_validate');
    }

    $element['#element_validate'][] = 'og_vocab_sub_widget_cardinality_validate';
    $element['#og_vocab'] = $this;

    form_load_include($form_state, 'inc', 'og_vocab', '/includes/og_vocab.og_vocab');
    $form['#after_build']['og_vocab'] = 'og_vocab_element_after_build';
    $form['#validate']['og_vocab'] = 'og_vocab_element_validate';

    return $element;
  }

  /**
   * Helper function to return the field and instance settings mocked.
   *
   * Mocking the fields is done be getting the original field values, and
   * overidding them based on the "settings" key of the OG-vocab entity.
   *
   * @return
   *   Array with the field and instance arrays.
   */
  public function getMockedField() {
    $vocabulary = taxonomy_vocabulary_load($this->vid);
    $field = field_info_field(OG_VOCAB_FIELD);
    $instance = field_info_instance($this->entity_type, OG_VOCAB_FIELD, $this->bundle);

    $mocked_field = $mocked_instance = array();

    $widget_type = $this->settings['widget_type'];
    $mocked_instance['widget']['type'] = $widget_type;

    // Set the widget's module.
    $widget_info = field_info_widget_types($widget_type);
    $mocked_instance['widget']['module'] = $widget_info['module'];
    $mocked_instance['widget']['settings'] = drupal_array_merge_deep($widget_info['settings'], $instance['widget']['settings']);

    // Set widget's auto complete path if needed.
    if (in_array($this->settings['widget_type'], array('entityreference_autocomplete', 'entityreference_autocomplete_tags'))) {
      $mocked_instance['widget']['settings']['autocomplete_path'] = 'og-vocab/autocomplete/single/%entity_object';
    }

    // Set required.
    $mocked_instance['required'] = $this->settings['required'];
    $instance['label'] = check_plain($vocabulary->name);

    // Set cardinality.
    $mocked_field['cardinality'] = $this->settings['cardinality'];

    // Restrict the mocked field to the target bundle.
    $mocked_field['settings']['handler_settings']['target_bundles'][$vocabulary->machine_name] = $vocabulary->machine_name;

    $field = drupal_array_merge_deep($field, $mocked_field);
    $instance = drupal_array_merge_deep($instance, $mocked_instance);

    return array('field' => $field, 'instance' => $instance);
  }

  /**
   * Helper function; Re-create the autocomplete path.
   *
   * @param $sub_element
   *   The element that should be changed, passed by reference.
   */
  public function prepareAutoComplete(&$sub_element) {
    // Rebuild the autocomplete path.
    $path = explode('/', $sub_element['#autocomplete_path']);
    $sub_element['#autocomplete_path'] = 'og-vocab/autocomplete';

    // Add autocomplete type
    $sub_element['#autocomplete_path'] .= "/$path[2]";

    // Add the OG-vocab entity ID.
    $sub_element['#autocomplete_path'] .= "/$this->id";

    // Add the entity ID.
    $sub_element['#autocomplete_path'] .= "/$path[6]";
    if (!empty($path[7])) {
      // Add the text.
      $sub_element['#autocomplete_path'] .= "/$path[7]";
    }
  }

  /**
   * Overrides Entity::save().
   */
  public function save() {
    parent::save();

    // Add the OG-vocabulary field in the group-content, in case it
    // doesn't already exist.
    og_create_field(OG_VOCAB_FIELD, $this->entity_type, $this->bundle);
  }
}

/**
 * After build; Remove the "Add more" button.
 */
function og_vocab_element_after_build($form, &$form_state) {
  $form[OG_VOCAB_FIELD][LANGUAGE_NONE]['#theme'] = '';
  unset($form[OG_VOCAB_FIELD][LANGUAGE_NONE]['add_more']);
  unset($form[OG_VOCAB_FIELD][LANGUAGE_NONE][0]['_weight']);

  $form[OG_VOCAB_FIELD][LANGUAGE_NONE]['#theme_wrappers'] = array('fieldset');
  $form[OG_VOCAB_FIELD][LANGUAGE_NONE]['#title'] = '';
  return $form;
}

/**
 * Element validate; Check cardinality of sub-widget.
 */
function og_vocab_sub_widget_cardinality_validate($element, &$form_state) {
  $og_vocab = $element['#og_vocab'];
  $cardinality = $og_vocab->settings['cardinality'];

  if ($cardinality == FIELD_CARDINALITY_UNLIMITED) {
    return;
  }

  if (empty($form_state['values'][OG_VOCAB_FIELD][LANGUAGE_NONE][0])) {
    return;
  }

  $vid = $og_vocab->vid;

  $count = 0;

  foreach ($form_state['values'][OG_VOCAB_FIELD][LANGUAGE_NONE][0][$vid] as $value) {
    if (!empty($value['target_id'])) {
      ++$count;
      if ($count > $cardinality) {
        $vocabulary = taxonomy_vocabulary_load($vid);
        $params = array(
          '@name' => $vocabulary->name,
          '@cardinality' => $cardinality,
        );
        form_error($element, t('@name: this field cannot hold more than @cardinality values', $params));
        return;
      }
    }
  }
}


/**
 * Validate handler; Re-build the submited values.
 *
 * TODO: Deal with non-accessible by the user values -- re add them.
 */
function og_vocab_element_validate($form, &$form_state) {
  if (empty($form_state['values'][OG_VOCAB_FIELD][LANGUAGE_NONE][0])) {
    return;
  }

  $ids = array();

  foreach ($form_state['values'][OG_VOCAB_FIELD][LANGUAGE_NONE][0] as $vid => &$values) {
    if (!is_numeric($vid)) {
      continue;
    }
    foreach ($values as $key => &$value) {
      if (!is_numeric($key)) {
        // "_weight" field.
        continue;
      }

      if (isset($value['target_id']) && empty($value['target_id'])) {
        // Empty field.
        continue;
      }
      $ids[] = $value;
    }
  }
  form_set_value($form[OG_VOCAB_FIELD][LANGUAGE_NONE], $ids, $form_state);
}

