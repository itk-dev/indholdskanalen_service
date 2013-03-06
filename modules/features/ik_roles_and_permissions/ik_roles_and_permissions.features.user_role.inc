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

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => '5',
  );

  // Exported role: Bidragyder.
  $roles['Bidragyder'] = array(
    'name' => 'Bidragyder',
    'weight' => '2',
  );

  // Exported role: Redaktør.
  $roles['Redaktør'] = array(
    'name' => 'Redaktør',
    'weight' => '3',
  );

  // Exported role: Superbruger.
  $roles['Superbruger'] = array(
    'name' => 'Superbruger',
    'weight' => '4',
  );

  return $roles;
}
