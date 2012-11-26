<?php
/**
 * @file
 * ik_favorites.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ik_favorites_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ik_favorites_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorites".
  $flags['favorites'] = array(
    'content_type' => 'node',
    'title' => 'Favorites',
    'global' => '0',
    'types' => array(
      0 => 'channel',
      1 => 'slide',
    ),
    'flag_short' => 'Favorite this',
    'flag_long' => 'Add this post to your favorites',
    'flag_message' => 'This post has been added to your favorites',
    'unflag_short' => 'Unfavor this',
    'unflag_long' => 'Remove this post from your favorites',
    'unflag_message' => 'This post has been removed from your favorites',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '3',
        2 => '4',
        3 => '5',
      ),
      'unflag' => array(
        0 => '2',
        1 => '3',
        2 => '4',
        3 => '5',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 1,
    'i18n' => 0,
    'module' => 'ik_favorites',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
