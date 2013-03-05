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
    'name' => 'administrator',
    'weight' => '5',
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => '2',
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '3',
  );

  return $roles;
}
