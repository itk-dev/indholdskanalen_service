<?php
/**
 * @file
 * ik_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ik_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__dialog_theme';
  $strongarm->value = 'indholdskanalen';
  $export['media__dialog_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_browser_plugins';
  $strongarm->value = array(
    0 => 'upload',
    1 => 'media_browser_plus--media_browser_thumbnails',
    2 => 'media_browser_plus--media_browser_my_files',
  );
  $export['media__wysiwyg_browser_plugins'] = $strongarm;

  return $export;
}
