<?php
/**
 * @file
 * ik_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ik_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: clone node.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'clone',
  );

  // Exported permission: clone own nodes.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'clone',
  );

  // Exported permission: create channel content.
  $permissions['create channel content'] = array(
    'name' => 'create channel content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create department content.
  $permissions['create department content'] = array(
    'name' => 'create department content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create organisation content.
  $permissions['create organisation content'] = array(
    'name' => 'create organisation content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create slide content.
  $permissions['create slide content'] = array(
    'name' => 'create slide content',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create static_page content.
  $permissions['create static_page content'] = array(
    'name' => 'create static_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any channel content.
  $permissions['delete any channel content'] = array(
    'name' => 'delete any channel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any department content.
  $permissions['delete any department content'] = array(
    'name' => 'delete any department content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any organisation content.
  $permissions['delete any organisation content'] = array(
    'name' => 'delete any organisation content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any slide content.
  $permissions['delete any slide content'] = array(
    'name' => 'delete any slide content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any static_page content.
  $permissions['delete any static_page content'] = array(
    'name' => 'delete any static_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own channel content.
  $permissions['delete own channel content'] = array(
    'name' => 'delete own channel content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own department content.
  $permissions['delete own department content'] = array(
    'name' => 'delete own department content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own organisation content.
  $permissions['delete own organisation content'] = array(
    'name' => 'delete own organisation content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own slide content.
  $permissions['delete own slide content'] = array(
    'name' => 'delete own slide content',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own static_page content.
  $permissions['delete own static_page content'] = array(
    'name' => 'delete own static_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any channel content.
  $permissions['edit any channel content'] = array(
    'name' => 'edit any channel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any department content.
  $permissions['edit any department content'] = array(
    'name' => 'edit any department content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any organisation content.
  $permissions['edit any organisation content'] = array(
    'name' => 'edit any organisation content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any slide content.
  $permissions['edit any slide content'] = array(
    'name' => 'edit any slide content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any static_page content.
  $permissions['edit any static_page content'] = array(
    'name' => 'edit any static_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit file.
  $permissions['edit file'] = array(
    'name' => 'edit file',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own channel content.
  $permissions['edit own channel content'] = array(
    'name' => 'edit own channel content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own department content.
  $permissions['edit own department content'] = array(
    'name' => 'edit own department content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own organisation content.
  $permissions['edit own organisation content'] = array(
    'name' => 'edit own organisation content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own slide content.
  $permissions['edit own slide content'] = array(
    'name' => 'edit own slide content',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own static_page content.
  $permissions['edit own static_page content'] = array(
    'name' => 'edit own static_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'media',
  );

  // Exported permission: use text format editor_html.
  $permissions['use text format editor_html'] = array(
    'name' => 'use text format editor_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'contributor',
      4 => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: view file.
  $permissions['view file'] = array(
    'name' => 'view file',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
