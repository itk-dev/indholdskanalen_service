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

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access media backend.
  $permissions['access media backend'] = array(
    'name' => 'access media backend',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer feeds.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'feeds',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer media folders.
  $permissions['administer media folders'] = array(
    'name' => 'administer media folders',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'user',
  );

  // Exported permission: administer scheduler.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'user',
  );

  // Exported permission: clear mrss_feed_importer feeds.
  $permissions['clear mrss_feed_importer feeds'] = array(
    'name' => 'clear mrss_feed_importer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clone node.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'clone',
  );

  // Exported permission: clone own nodes.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'clone',
  );

  // Exported permission: create channel content.
  $permissions['create channel content'] = array(
    'name' => 'create channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: create department content.
  $permissions['create department content'] = array(
    'name' => 'create department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: create media_rss_slide_import content.
  $permissions['create media_rss_slide_import content'] = array(
    'name' => 'create media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: create organisation content.
  $permissions['create organisation content'] = array(
    'name' => 'create organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: create slide content.
  $permissions['create slide content'] = array(
    'name' => 'create slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: create static_page content.
  $permissions['create static_page content'] = array(
    'name' => 'create static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any channel content.
  $permissions['delete any channel content'] = array(
    'name' => 'delete any channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any department content.
  $permissions['delete any department content'] = array(
    'name' => 'delete any department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any media_rss_slide_import content.
  $permissions['delete any media_rss_slide_import content'] = array(
    'name' => 'delete any media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any organisation content.
  $permissions['delete any organisation content'] = array(
    'name' => 'delete any organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any slide content.
  $permissions['delete any slide content'] = array(
    'name' => 'delete any slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any static_page content.
  $permissions['delete any static_page content'] = array(
    'name' => 'delete any static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own channel content.
  $permissions['delete own channel content'] = array(
    'name' => 'delete own channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own department content.
  $permissions['delete own department content'] = array(
    'name' => 'delete own department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own media_rss_slide_import content.
  $permissions['delete own media_rss_slide_import content'] = array(
    'name' => 'delete own media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own organisation content.
  $permissions['delete own organisation content'] = array(
    'name' => 'delete own organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own slide content.
  $permissions['delete own slide content'] = array(
    'name' => 'delete own slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own static_page content.
  $permissions['delete own static_page content'] = array(
    'name' => 'delete own static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: download files.
  $permissions['download files'] = array(
    'name' => 'download files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: edit any channel content.
  $permissions['edit any channel content'] = array(
    'name' => 'edit any channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any department content.
  $permissions['edit any department content'] = array(
    'name' => 'edit any department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any media_rss_slide_import content.
  $permissions['edit any media_rss_slide_import content'] = array(
    'name' => 'edit any media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any organisation content.
  $permissions['edit any organisation content'] = array(
    'name' => 'edit any organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any slide content.
  $permissions['edit any slide content'] = array(
    'name' => 'edit any slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any static_page content.
  $permissions['edit any static_page content'] = array(
    'name' => 'edit any static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own channel content.
  $permissions['edit own channel content'] = array(
    'name' => 'edit own channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own department content.
  $permissions['edit own department content'] = array(
    'name' => 'edit own department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own media_rss_slide_import content.
  $permissions['edit own media_rss_slide_import content'] = array(
    'name' => 'edit own media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own organisation content.
  $permissions['edit own organisation content'] = array(
    'name' => 'edit own organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own slide content.
  $permissions['edit own slide content'] = array(
    'name' => 'edit own slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own static_page content.
  $permissions['edit own static_page content'] = array(
    'name' => 'edit own static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: filter media.
  $permissions['filter media'] = array(
    'name' => 'filter media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'media',
  );

  // Exported permission: import mrss_feed_importer feeds.
  $permissions['import mrss_feed_importer feeds'] = array(
    'name' => 'import mrss_feed_importer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'feeds',
  );

  // Exported permission: media grid view.
  $permissions['media grid view'] = array(
    'name' => 'media grid view',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: media list view.
  $permissions['media list view'] = array(
    'name' => 'media list view',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: preview media.
  $permissions['preview media'] = array(
    'name' => 'preview media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: publish any channel content.
  $permissions['publish any channel content'] = array(
    'name' => 'publish any channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any content.
  $permissions['publish any content'] = array(
    'name' => 'publish any content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any department content.
  $permissions['publish any department content'] = array(
    'name' => 'publish any department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any media_rss_slide_import content.
  $permissions['publish any media_rss_slide_import content'] = array(
    'name' => 'publish any media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any organisation content.
  $permissions['publish any organisation content'] = array(
    'name' => 'publish any organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any slide content.
  $permissions['publish any slide content'] = array(
    'name' => 'publish any slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any static_page content.
  $permissions['publish any static_page content'] = array(
    'name' => 'publish any static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable channel content.
  $permissions['publish editable channel content'] = array(
    'name' => 'publish editable channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable department content.
  $permissions['publish editable department content'] = array(
    'name' => 'publish editable department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable media_rss_slide_import content.
  $permissions['publish editable media_rss_slide_import content'] = array(
    'name' => 'publish editable media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable organisation content.
  $permissions['publish editable organisation content'] = array(
    'name' => 'publish editable organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable slide content.
  $permissions['publish editable slide content'] = array(
    'name' => 'publish editable slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable static_page content.
  $permissions['publish editable static_page content'] = array(
    'name' => 'publish editable static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own channel content.
  $permissions['publish own channel content'] = array(
    'name' => 'publish own channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own department content.
  $permissions['publish own department content'] = array(
    'name' => 'publish own department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own media_rss_slide_import content.
  $permissions['publish own media_rss_slide_import content'] = array(
    'name' => 'publish own media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own organisation content.
  $permissions['publish own organisation content'] = array(
    'name' => 'publish own organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own slide content.
  $permissions['publish own slide content'] = array(
    'name' => 'publish own slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own static_page content.
  $permissions['publish own static_page content'] = array(
    'name' => 'publish own static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: schedule (un)publishing of nodes.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: unlock mrss_feed_importer feeds.
  $permissions['unlock mrss_feed_importer feeds'] = array(
    'name' => 'unlock mrss_feed_importer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unpublish any channel content.
  $permissions['unpublish any channel content'] = array(
    'name' => 'unpublish any channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any content.
  $permissions['unpublish any content'] = array(
    'name' => 'unpublish any content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any department content.
  $permissions['unpublish any department content'] = array(
    'name' => 'unpublish any department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any media_rss_slide_import content.
  $permissions['unpublish any media_rss_slide_import content'] = array(
    'name' => 'unpublish any media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any organisation content.
  $permissions['unpublish any organisation content'] = array(
    'name' => 'unpublish any organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any slide content.
  $permissions['unpublish any slide content'] = array(
    'name' => 'unpublish any slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any static_page content.
  $permissions['unpublish any static_page content'] = array(
    'name' => 'unpublish any static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable channel content.
  $permissions['unpublish editable channel content'] = array(
    'name' => 'unpublish editable channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable department content.
  $permissions['unpublish editable department content'] = array(
    'name' => 'unpublish editable department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable media_rss_slide_import content.
  $permissions['unpublish editable media_rss_slide_import content'] = array(
    'name' => 'unpublish editable media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable organisation content.
  $permissions['unpublish editable organisation content'] = array(
    'name' => 'unpublish editable organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable slide content.
  $permissions['unpublish editable slide content'] = array(
    'name' => 'unpublish editable slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable static_page content.
  $permissions['unpublish editable static_page content'] = array(
    'name' => 'unpublish editable static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own channel content.
  $permissions['unpublish own channel content'] = array(
    'name' => 'unpublish own channel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own department content.
  $permissions['unpublish own department content'] = array(
    'name' => 'unpublish own department content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own media_rss_slide_import content.
  $permissions['unpublish own media_rss_slide_import content'] = array(
    'name' => 'unpublish own media_rss_slide_import content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own organisation content.
  $permissions['unpublish own organisation content'] = array(
    'name' => 'unpublish own organisation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own slide content.
  $permissions['unpublish own slide content'] = array(
    'name' => 'unpublish own slide content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own static_page content.
  $permissions['unpublish own static_page content'] = array(
    'name' => 'unpublish own static_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: upload media.
  $permissions['upload media'] = array(
    'name' => 'upload media',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: use text format editor_html.
  $permissions['use text format editor_html'] = array(
    'name' => 'use text format editor_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
      'Superbruger' => 'Superbruger',
    ),
    'module' => 'node',
  );

  return $permissions;
}
