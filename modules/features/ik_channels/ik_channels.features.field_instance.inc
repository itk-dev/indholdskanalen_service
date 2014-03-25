<?php
/**
 * @file
 * ik_channels.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ik_channels_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-channel-field_channel_categories'
  $field_instances['node-channel-field_channel_categories'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'ik_filter_search_formatter',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_channel_categories',
    'label' => 'Filter on categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'ik_channel_filter',
      'settings' => array(),
      'type' => 'ik_filter_search_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-channel-field_channel_department'
  $field_instances['node-channel-field_channel_department'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'ik_filter_search_formatter',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_channel_department',
    'label' => 'Filter on department',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'ik_channel_filter',
      'settings' => array(),
      'type' => 'ik_filter_search_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-channel-field_channel_description'
  $field_instances['node-channel-field_channel_description'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Angiv en beskrivelse af kanalen (benyttes kun i administrationen).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_channel_description',
    'label' => 'Beskrivelse',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-channel-field_channel_orgnization'
  $field_instances['node-channel-field_channel_orgnization'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'ik_filter_search_formatter',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_channel_orgnization',
    'label' => 'Filter on orgnization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'ik_channel_filter',
      'settings' => array(),
      'type' => 'ik_filter_search_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-channel-field_channel_preview'
  $field_instances['node-channel-field_channel_preview'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'ik_channel_filter',
        'settings' => array(),
        'type' => 'ik_channel_filter_preview_formatter',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_channel_preview',
    'label' => 'Preview',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'ik_channel_filter',
      'settings' => array(),
      'type' => 'ik_filter_search_preview',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-channel-field_channel_relevance'
  $field_instances['node-channel-field_channel_relevance'] = array(
    'bundle' => 'channel',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_channel_relevance',
    'label' => 'Har national relevans',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-channel-field_channel_slides'
  $field_instances['node-channel-field_channel_slides'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'ik_filter_search_formatter',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_channel_slides',
    'label' => 'Slides',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'ik_channel_filter',
      'settings' => array(),
      'type' => 'ik_filter_search_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-channel-field_channel_tags'
  $field_instances['node-channel-field_channel_tags'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'ik_filter_search_formatter',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_channel_tags',
    'label' => 'Filter on tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'ik_channel_filter',
      'settings' => array(),
      'type' => 'ik_filter_search_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-channel-field_ik_og_department_ref'
  $field_instances['node-channel-field_ik_og_department_ref'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg hvilken afdeling denne kanal skal tilhøre (Du kan kun tilknytte til den/de afdeling(er) som du er en del af).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ik_og_department_ref',
    'label' => 'Afdeling',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'og_complex',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Afdeling');
  t('Angiv en beskrivelse af kanalen (benyttes kun i administrationen).');
  t('Beskrivelse');
  t('Filter on categories');
  t('Filter on department');
  t('Filter on orgnization');
  t('Filter on tags');
  t('Har national relevans');
  t('Preview');
  t('Slides');
  t('Vælg hvilken afdeling denne kanal skal tilhøre (Du kan kun tilknytte til den/de afdeling(er) som du er en del af).');

  return $field_instances;
}
