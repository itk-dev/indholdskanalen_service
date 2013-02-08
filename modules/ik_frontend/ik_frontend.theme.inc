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
  $vars['css'] = '';
  $csses = array(
    '/css/styles.css',
    '/js/skitterslideshow/css/skitter.styles.css',
  );
  $path = drupal_get_path('module', 'ik_frontend');
  foreach ($csses as $css) {
    $vars['css'] .= ' <link href="/' . $path . $css . '" type="text/css" media="all" rel="stylesheet" />';
  }

  // Build settings extension.
  $element = array(
    '#tag' => 'script',
    '#attributes' => array(
      'type' => 'text/javascript',
    ),
  );
  $js_element = $element;
  $js_element['#value'] = 'jQuery.extend(IKFrontend.settings, ' . drupal_json_encode($vars['settings']) . ");";
  $vars['js_settings'] = theme('html_tag', array('element' => $js_element));

  // Add script files.
  $vars['scripts'] = '';
  $scripts = array(
    'jquery-1.8.3.min.js',
    'pure_min.js',
    'ik_frontend.js',
    'skitterslideshow/js/jquery.easing.1.3.js',
    'skitterslideshow/js/jquery.animate-colors-min.js',
    'skitterslideshow/js/jquery.skitter.js',
  );
  $path = drupal_get_path('module', 'ik_frontend') . '/js/';
  foreach ($scripts as $script) {
    $vars['scripts'] .= '<script type="text/javascript" src="/' . $path . $script . '"></script>';
  }

  // Should the slide show load and start. We may not want this for slide
  // preview etc.
  if ($vars['start']) {
    $vars['run_script'] =
      '(function($){
          $(document).ready(function() {
            IK.start("' . $vars['settings']['token'] . '");
          });
       })(jQuery);';
  }
  else {
    // Slide preview.
    $vars['run_script'] =
      '(function($){
          $(window).load(function() {
            IK.showSlide(IKFrontend.settings.content);
          });
       })(jQuery);';
  }
}

