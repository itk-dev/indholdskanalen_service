<?php
/**
 * @file
 * ik_roles_and_permissions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ik_roles_and_permissions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_og_membership_type().
 */
function ik_roles_and_permissions_default_og_membership_type() {
  $items = array();
  $items['contributor'] = entity_import('og_membership_type', '{
    "name" : "contributor",
    "description" : "Contributor",
    "language" : "",
    "rdf_mapping" : []
  }');
  $items['editor'] = entity_import('og_membership_type', '{
    "name" : "editor",
    "description" : "Editor",
    "language" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
