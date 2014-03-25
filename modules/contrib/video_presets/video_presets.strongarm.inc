<?php
/**
 * @file
 * video_presets.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function video_presets_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_convert_on_save';
  $strongarm->value = 1;
  $export['video_convert_on_save'] = $strongarm;

  return $export;
}
