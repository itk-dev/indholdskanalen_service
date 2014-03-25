<?php
/**
 * @file
 * ik_mrss_feed_importer.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ik_mrss_feed_importer_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ik_mrss_text_feed'
  $field_bases['field_ik_mrss_text_feed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ik_mrss_text_feed',
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
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
