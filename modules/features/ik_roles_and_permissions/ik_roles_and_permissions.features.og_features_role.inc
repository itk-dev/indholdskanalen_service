<?php
/**
 * @file
 * ik_roles_and_permissions.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function ik_roles_and_permissions_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:department:contributor'.
  $roles['node:department:contributor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'department',
    'name' => 'contributor',
  );

  // Exported OG Role: 'node:department:editor'.
  $roles['node:department:editor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'department',
    'name' => 'editor',
  );

  // Exported OG Role: 'node:organisation:contributor'.
  $roles['node:organisation:contributor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'organisation',
    'name' => 'contributor',
  );

  return $roles;
}
