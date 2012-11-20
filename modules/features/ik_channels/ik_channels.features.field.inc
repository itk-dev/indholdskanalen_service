<?php
/**
 * @file
 * ik_channels.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function ik_channels_field_default_fields() {
  $fields = array();

  // Exported field: 'node-channel-field_channel_categories'.
  $fields['node-channel-field_channel_categories'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_channel_categories',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ik_channel_filter',
      'settings' => array(
        'ik_search' => array(
          'fields' => 'field_ik_slide_category',
          'og' => array(
            'department' => 0,
            'organisation' => 0,
          ),
          'operation' => '0',
          'type' => 'vocabulary',
          'types' => array(
            'channel' => 0,
            'department' => 0,
            'organisation' => 0,
            'slide' => 0,
            'static_page' => 0,
          ),
          'vocabulary' => 'subject',
        ),
      ),
      'translatable' => '0',
      'type' => 'ik_channel_filter_search',
    ),
    'field_instance' => array(
      'bundle' => 'channel',
      'default_value' => NULL,
      'deleted' => '0',
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
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-channel-field_channel_department'.
  $fields['node-channel-field_channel_department'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_channel_department',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ik_channel_filter',
      'settings' => array(
        'ik_search' => array(
          'fields' => array(
            'field_ik_slide_category' => 0,
            'field_ik_slide_tags' => 0,
            'field_subject' => 0,
            'field_tags' => 0,
          ),
          'og' => array(
            'department' => 'department',
            'organisation' => 0,
          ),
          'operation' => '0',
          'type' => 'og',
          'types' => array(
            'channel' => 0,
            'department' => 0,
            'organisation' => 0,
            'slide' => 0,
            'static_page' => 0,
          ),
          'vocabulary' => array(
            'subject' => 0,
            'tags' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'ik_channel_filter_search',
    ),
    'field_instance' => array(
      'bundle' => 'channel',
      'default_value' => NULL,
      'deleted' => '0',
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
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-channel-field_channel_description'.
  $fields['node-channel-field_channel_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_channel_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'channel',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
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
      'label' => 'Description',
      'required' => 1,
      'settings' => array(
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-channel-field_channel_orgnization'.
  $fields['node-channel-field_channel_orgnization'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_channel_orgnization',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ik_channel_filter',
      'settings' => array(
        'ik_search' => array(
          'fields' => array(
            'field_ik_slide_category' => 0,
            'field_ik_slide_tags' => 0,
            'field_subject' => 0,
            'field_tags' => 0,
          ),
          'og' => array(
            'department' => 0,
            'organisation' => 'organisation',
          ),
          'operation' => '0',
          'type' => 'og',
          'types' => array(
            'channel' => 0,
            'department' => 0,
            'organisation' => 0,
            'slide' => 0,
            'static_page' => 0,
          ),
          'vocabulary' => array(
            'subject' => 0,
            'tags' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'ik_channel_filter_search',
    ),
    'field_instance' => array(
      'bundle' => 'channel',
      'default_value' => NULL,
      'deleted' => '0',
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
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-channel-field_channel_preview'.
  $fields['node-channel-field_channel_preview'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_channel_preview',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ik_channel_filter',
      'settings' => array(
        'ik_search' => array(
          'types' => array(
            'field_channel_categories' => 'field_channel_categories',
            'field_channel_department' => 'field_channel_department',
            'field_channel_orgnization' => 'field_channel_orgnization',
            'field_channel_slides' => 'field_channel_slides',
            'field_channel_tags' => 'field_channel_tags',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'ik_channel_filter_preview',
    ),
    'field_instance' => array(
      'bundle' => 'channel',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => NULL,
          'settings' => array(),
          'type' => 'ik_filter_search_preview_formatter',
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
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-channel-field_channel_slides'.
  $fields['node-channel-field_channel_slides'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_channel_slides',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ik_channel_filter',
      'settings' => array(
        'ik_search' => array(
          'fields' => array(
            'field_ik_slide_category' => 0,
            'field_ik_slide_tags' => 0,
            'field_subject' => 0,
            'field_tags' => 0,
          ),
          'og' => array(
            'department' => 0,
            'organisation' => 0,
          ),
          'operation' => '1',
          'type' => 'types',
          'types' => array(
            'channel' => 0,
            'department' => 0,
            'organisation' => 0,
            'slide' => 'slide',
            'static_page' => 0,
          ),
          'vocabulary' => array(
            'subject' => 0,
            'tags' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'ik_channel_filter_search',
    ),
    'field_instance' => array(
      'bundle' => 'channel',
      'default_value' => NULL,
      'deleted' => '0',
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
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-channel-field_channel_tags'.
  $fields['node-channel-field_channel_tags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_channel_tags',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ik_channel_filter',
      'settings' => array(
        'ik_search' => array(
          'fields' => 'field_ik_slide_tags',
          'og' => array(
            'department' => 0,
            'organisation' => 0,
          ),
          'operation' => '0',
          'type' => 'vocabulary',
          'types' => array(
            'channel' => 0,
            'department' => 0,
            'organisation' => 0,
            'slide' => 0,
            'static_page' => 0,
          ),
          'vocabulary' => 'tags',
        ),
      ),
      'translatable' => '0',
      'type' => 'ik_channel_filter_search',
    ),
    'field_instance' => array(
      'bundle' => 'channel',
      'default_value' => NULL,
      'deleted' => '0',
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
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-channel-field_ik_og_department_ref'.
  $fields['node-channel-field_ik_og_department_ref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ik_og_department_ref',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'og',
        'handler_settings' => array(
          'behaviors' => array(
            'og_behavior' => array(
              'status' => TRUE,
            ),
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'membership_type' => 'og_membership_type_default',
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'department' => 'department',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'channel',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
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
      'label' => 'Department',
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
        'settings' => array(),
        'type' => 'og_complex',
        'weight' => '4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Department');
  t('Description');
  t('Filter on categories');
  t('Filter on department');
  t('Filter on orgnization');
  t('Filter on tags');
  t('Preview');
  t('Slides');

  return $fields;
}
