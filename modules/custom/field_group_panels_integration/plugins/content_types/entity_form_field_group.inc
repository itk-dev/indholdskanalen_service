<?php

/**
 * @file
 * Handle rendering fieldgroup form elements
 */
$plugin = array(
  'title' => t('Entity field group'),
  'defaults' => array('label' => '', 'formatter' => ''),
  'content type' => 'field_group_panels_entity_form_field_group_content_type_content_type',
);

/**
 * Just one subtype.
 *
 * Ordinarily this function is meant to get just one subtype. However, we are
 * using it to deal with the fact that we have changed the subtype names. This
 * lets us translate the name properly.
 */
function field_group_panels_entity_form_field_group_content_type_content_type($subtype) {
  $types = field_group_panels_entity_form_field_group_content_type_content_types();
  if (isset($types[$subtype])) {
    return $types[$subtype];
  }
}

/**
 * return all field group content types availible
 */
function field_group_panels_entity_form_field_group_content_type_content_types() {
  $groups = field_group_read_groups();
  $types = array();
  foreach ($groups as $entity_type => $bundles) {
    foreach ($bundles as $bundle => $modes) {
      foreach ($modes as $mode => $fieldgroups) {
        foreach ($fieldgroups as $group_name => $field_group) {
          // Only use form field groups
          if ($field_group->mode == 'form') {
            $types[$entity_type . ':' . $group_name] = array(
              'title' => t('Field Group Form: @widget_label', array(
                '@widget_label' => t($field_group->label),
              )),
              'required context' => new ctools_context_required(t('Form'), $entity_type . '_form', array('type' => $bundle)),
              'category' => t('Form'),
                    //A icon is missing yet
                    //'icon' => 'icon_field_group.png',
            );
          }
        }
      }
    }
  }
  return $types;
}

/**
 * Render the custom content type.
 */
function field_group_panels_entity_form_field_group_content_type_render($subtype, $conf, $panel_args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  // Get a shortcut to the entity.
  $entity = $context->data;
  list($entity_type, $group_name) = explode(':', $subtype, 2);

  // Load the entity type's information where the fieldgroup is placed
  $ids = entity_extract_ids($entity_type, $entity);
  $bundle = $entity->type;

  $list = field_group_read_groups(array('bundle' => $bundle, 'entity_type' => $entity_type, 'mode' => 'form'));

  $group = $list[$entity_type][$bundle]['form'][$group_name];

  // Do not render if the entity type does not have this fieldgroup.
  if (empty($group)) {
    return;
  }

  if (isset($context->form)) {

    if (isset($context->form['#pre_render'])) {
      foreach ($context->form['#pre_render'] as $function) {
        if (function_exists($function)) {
          $context->form = $function($context->form);
        }
      }
      unset($context->form['#pre_render']);
    }

    $block->content[$group_name] = $context->form[$group_name];
    unset($context->form[$group_name]);
  }
  else {
    $block->content = t('Entity info.');
  }
  return $block;
}

/**
 * Returns the administrative title for a type.
 */
function field_group_panels_entity_form_field_group_content_type_admin_title($subtype, $conf, $context) {
  list($entity_type, $group_name) = explode(':', $subtype, 2);
  return t('"@s" @group_name', array('@s' => $context->identifier, '@group_name' => $group_name));
}

function field_group_panels_entity_form_field_group_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to have context setting.
  return $form;
}