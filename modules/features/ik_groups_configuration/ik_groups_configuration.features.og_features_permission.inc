<?php
/**
 * @file
 * ik_groups_configuration.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function ik_groups_configuration_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:department:add user'
  $permissions['node:department:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:administer group'
  $permissions['node:department:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:approve and deny subscription'
  $permissions['node:department:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:create department content'
  $permissions['node:department:create department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:delete any department content'
  $permissions['node:department:delete any department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:delete own department content'
  $permissions['node:department:delete own department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:manage members'
  $permissions['node:department:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:manage permissions'
  $permissions['node:department:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:manage roles'
  $permissions['node:department:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:subscribe'
  $permissions['node:department:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:department:subscribe without approval'
  $permissions['node:department:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:unsubscribe'
  $permissions['node:department:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:department:update any department content'
  $permissions['node:department:update any department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:update body field'
  $permissions['node:department:update body field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:update field_ik_department_description field'
  $permissions['node:department:update field_ik_department_description field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:update field_ik_department_logo field'
  $permissions['node:department:update field_ik_department_logo field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:update group'
  $permissions['node:department:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:update group_group field'
  $permissions['node:department:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:update og_group_ref field'
  $permissions['node:department:update og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:update og_user_node field'
  $permissions['node:department:update og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:update own department content'
  $permissions['node:department:update own department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:view body field'
  $permissions['node:department:view body field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:view field_ik_department_description field'
  $permissions['node:department:view field_ik_department_description field'] = array(
    'roles' => array(
      'member' => 'member',
      'administrator member' => 'administrator member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:department:view field_ik_department_logo field'
  $permissions['node:department:view field_ik_department_logo field'] = array(
    'roles' => array(
      'member' => 'member',
      'administrator member' => 'administrator member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:department:view group_group field'
  $permissions['node:department:view group_group field'] = array(
    'roles' => array(
      'non-member' => 'non-member',
      'member' => 'member',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:department:view og_group_ref field'
  $permissions['node:department:view og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:view og_user_node field'
  $permissions['node:department:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'non-member' => 'non-member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:organisation:add user'
  $permissions['node:organisation:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:organisation:administer group'
  $permissions['node:organisation:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:organisation:approve and deny subscription'
  $permissions['node:organisation:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:organisation:create department content'
  $permissions['node:organisation:create department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete any department content'
  $permissions['node:organisation:delete any department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete own department content'
  $permissions['node:organisation:delete own department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:manage members'
  $permissions['node:organisation:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:organisation:manage permissions'
  $permissions['node:organisation:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:organisation:manage roles'
  $permissions['node:organisation:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:organisation:subscribe'
  $permissions['node:organisation:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:subscribe without approval'
  $permissions['node:organisation:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:unsubscribe'
  $permissions['node:organisation:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:organisation:update any department content'
  $permissions['node:organisation:update any department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update body field'
  $permissions['node:organisation:update body field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update field_ik_department_description field'
  $permissions['node:organisation:update field_ik_department_description field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update field_ik_department_logo field'
  $permissions['node:organisation:update field_ik_department_logo field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update group'
  $permissions['node:organisation:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:organisation:update group_group field'
  $permissions['node:organisation:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:organisation:update og_group_ref field'
  $permissions['node:organisation:update og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update og_user_node field'
  $permissions['node:organisation:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update own department content'
  $permissions['node:organisation:update own department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:view body field'
  $permissions['node:organisation:view body field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:view field_ik_department_description field'
  $permissions['node:organisation:view field_ik_department_description field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:view field_ik_department_logo field'
  $permissions['node:organisation:view field_ik_department_logo field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:view group_group field'
  $permissions['node:organisation:view group_group field'] = array(
    'roles' => array(
      'non-member' => 'non-member',
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:organisation:view og_group_ref field'
  $permissions['node:organisation:view og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:view og_user_node field'
  $permissions['node:organisation:view og_user_node field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
