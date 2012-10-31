<?php
/**
 * @file
 * ik_channels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ik_channels_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ik_channels_node_info() {
  $items = array(
    'channel' => array(
      'name' => t('Channel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
