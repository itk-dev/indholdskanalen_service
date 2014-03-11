<?php

$plugin = array(
  'title' => t('Live slide preview'),
  'description' => t('Display jQuery UI dialog with slide preview.'),
  'single' => TRUE,
  'required context' => array(
    new ctools_context_optional(t('Slide node'), 'node'),
  ),
  'category' => t('IK'),
);

/**
 * Callback function for the ctools content_type.
 */
function ik_slide_preview_slide_buttons_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();

  if (isset($context[0]->data)) {
    $buttons = array(
      'preview_live_slide' => array(
        'title' => t('Live slide'),
        'link' => 'slide/' . $context[0]->data->nid . '/preview',
      ),
    );
    $block->content = theme('ik_frontend_buttons', array('title' => t('Channel actions'), 'buttons' => $buttons));

    // Add javascript to handle buttons.
    drupal_add_library('system', 'ui.dialog');
    drupal_add_js(drupal_get_path('module', 'ik_slide_preview') . '/js/slide_preview.js');
  }

  return $block;
}

/**
 * Returns an edit form for settings.
 */
function ik_slide_preview_slide_buttons_content_type_edit_form($form, &$form_state) {
  return $form;
}
