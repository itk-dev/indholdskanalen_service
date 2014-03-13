<?php
/**
 * @file
 * ik_groups_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ik_groups_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ik_groups_configuration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ik_groups_configuration_node_info() {
  $items = array(
    'department' => array(
      'name' => t('Afdeling'),
      'base' => 'node_content',
      'description' => t('En afdeling benyttes til at gruppere brugere og indhold. En afdeling tilknyttes en organisation.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'organisation' => array(
      'name' => t('Organisation'),
      'base' => 'node_content',
      'description' => t('En organisation benyttes til at organisere afdelinger under.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
