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
  $strongarm->name = 'media__file_extensions';
  $strongarm->value = 'jpg jpeg gif png';
  $export['media__file_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_browser_plugins';
  $strongarm->value = array(
    'upload' => 'upload',
    'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
    'library_plus' => 'library_plus',
    'library' => 0,
    'media_default--media_browser_1' => 0,
    'media_internet' => 0,
  );
  $export['media__wysiwyg_browser_plugins'] = $strongarm;

  return $export;
}
