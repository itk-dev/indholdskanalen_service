<?php
/**
 * @file
 * ik_slides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ik_slides_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ik_slides_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('A slide is used to create the individual elements for presenting information.'),
      'has_title' => '1',
      'title_label' => t('Heading'),
      'help' => '',
    ),
  );
  return $items;
}
