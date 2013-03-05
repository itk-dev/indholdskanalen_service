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

  // Exported OG Role: 'node:department:Bidragyder'.
  $roles['node:department:Bidragyder'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'department',
    'name' => 'Bidragyder',
  );

  // Exported OG Role: 'node:department:Gruppe administrator'.
  $roles['node:department:Gruppe administrator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'department',
    'name' => 'Gruppe administrator',
  );

  // Exported OG Role: 'node:department:Redaktør'.
  $roles['node:department:Redaktør'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'department',
    'name' => 'Redaktør',
  );

  // Exported OG Role: 'node:organisation:Gruppe administrator'.
  $roles['node:organisation:Gruppe administrator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'organisation',
    'name' => 'Gruppe administrator',
  );

  return $roles;
}
