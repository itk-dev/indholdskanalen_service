<?php
/**
 * @file
 * ik_groups_configuration.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function ik_groups_configuration_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:organisation:editor'.
  $roles['node:organisation:editor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'organisation',
    'name' => 'editor',
  );

  return $roles;
}
