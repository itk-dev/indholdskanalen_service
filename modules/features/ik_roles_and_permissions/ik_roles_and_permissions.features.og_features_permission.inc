<?php
/**
 * @file
 * ik_roles_and_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function ik_roles_and_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:department:administer taxonomy'
  $permissions['node:department:administer taxonomy'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:create channel content'
  $permissions['node:department:create channel content'] = array(
    'roles' => array(
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:department:create slide content'
  $permissions['node:department:create slide content'] = array(
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:department:delete any channel content'
  $permissions['node:department:delete any channel content'] = array(
    'roles' => array(
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:department:delete any slide content'
  $permissions['node:department:delete any slide content'] = array(
    'roles' => array(
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:department:delete own channel content'
  $permissions['node:department:delete own channel content'] = array(
    'roles' => array(
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:department:delete own slide content'
  $permissions['node:department:delete own slide content'] = array(
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:department:delete terms'
  $permissions['node:department:delete terms'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:edit terms'
  $permissions['node:department:edit terms'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:update any channel content'
  $permissions['node:department:update any channel content'] = array(
    'roles' => array(
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:department:update any slide content'
  $permissions['node:department:update any slide content'] = array(
    'roles' => array(
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:department:update own channel content'
  $permissions['node:department:update own channel content'] = array(
    'roles' => array(
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:department:update own slide content'
  $permissions['node:department:update own slide content'] = array(
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
  );

  // Exported og permission: 'node:organisation:administer taxonomy'
  $permissions['node:organisation:administer taxonomy'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:create channel content'
  $permissions['node:organisation:create channel content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:create slide content'
  $permissions['node:organisation:create slide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete any channel content'
  $permissions['node:organisation:delete any channel content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete any slide content'
  $permissions['node:organisation:delete any slide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete own channel content'
  $permissions['node:organisation:delete own channel content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete own slide content'
  $permissions['node:organisation:delete own slide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete terms'
  $permissions['node:organisation:delete terms'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:edit terms'
  $permissions['node:organisation:edit terms'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update any channel content'
  $permissions['node:organisation:update any channel content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update any slide content'
  $permissions['node:organisation:update any slide content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
