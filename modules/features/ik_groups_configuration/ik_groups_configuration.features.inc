<?php
/**
 * @file
 * ik_groups_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ik_groups_configuration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ik_groups_configuration_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ik_groups_configuration_node_info() {
  $items = array(
    'department' => array(
      'name' => t('Department'),
      'base' => 'node_content',
      'description' => t('A department belong to an organisation and is where users are organized. Slides and Channels are posted in a department.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organisation' => array(
      'name' => t('Organisation'),
      'base' => 'node_content',
      'description' => t('An organisation is a group container for departments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
