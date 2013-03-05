<?php
/**
 * @file
 * ik_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ik_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'Administrator',
    'weight' => '5',
  );

  return $roles;
}
