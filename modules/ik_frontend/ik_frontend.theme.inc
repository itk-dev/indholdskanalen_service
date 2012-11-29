<?php
/**
 * @file
 * Handles the theme related functions for the frontend.
 */

/**
 * Default implementation of preprocess ik_frontend theme function. It ensures
 * that the right css and script are available in the template file.
 */
function template_preprocess_ik_frontend(&$vars) {
  // Add style sheets.
  $vars['css'] = '/' . drupal_get_path('theme', 'indholdskanalen') . '/css/styles.css';

  // Build settings.
  $settings = array(
    'token' => $vars['token'],
  );
  $vars['settings'] = '<script type="text/javascript">jQuery.extend(IKFrontend.settings, '. drupal_json_encode($settings) .');</script>';

  // Add script files.
  $vars['scripts'] = '';
  $scripts = array(
    'pure_min.js',
    'jquery-1.8.3.min.js',
    'ik_frontend.js',
  );
  $path = drupal_get_path('module', 'ik_frontend') . '/js/';
  foreach ($scripts as $script) {
    $vars['scripts'] .= '<script type="text/javascript" src="/' . $path . $script . '"></script>';
  }
}

