<?php
/**
 * @file
 * ik_channels.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ik_channels_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_channel_categories'
  $field_bases['field_channel_categories'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_channel_categories',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'ik_channel_filter',
    'settings' => array(
      'ik_search' => array(
        'fields' => 'field_ik_slide_category',
        'og' => array(
          'department' => 0,
          'organisation' => 0,
        ),
        'operation' => 0,
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
    'translatable' => 0,
    'type' => 'ik_channel_filter_search',
  );

  // Exported field_base: 'field_channel_department'
  $field_bases['field_channel_department'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_channel_department',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
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
        'operation' => 0,
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
    'translatable' => 0,
    'type' => 'ik_channel_filter_search',
  );

  // Exported field_base: 'field_channel_description'
  $field_bases['field_channel_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_channel_orgnization'
  $field_bases['field_channel_orgnization'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_channel_orgnization',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
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
        'operation' => 0,
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
    'translatable' => 0,
    'type' => 'ik_channel_filter_search',
  );

  // Exported field_base: 'field_channel_preview'
  $field_bases['field_channel_preview'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_channel_preview',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'ik_channel_filter_preview',
  );

  // Exported field_base: 'field_channel_relevance'
  $field_bases['field_channel_relevance'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_channel_relevance',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nej',
        1 => 'Ja',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_channel_slides'
  $field_bases['field_channel_slides'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_channel_slides',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
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
        'operation' => 1,
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
    'translatable' => 0,
    'type' => 'ik_channel_filter_search',
  );

  // Exported field_base: 'field_channel_tags'
  $field_bases['field_channel_tags'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_channel_tags',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'ik_channel_filter',
    'settings' => array(
      'ik_search' => array(
        'fields' => 'field_ik_slide_tags',
        'og' => array(
          'department' => 0,
          'organisation' => 0,
        ),
        'operation' => 0,
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
    'translatable' => 0,
    'type' => 'ik_channel_filter_search',
  );

  return $field_bases;
}
