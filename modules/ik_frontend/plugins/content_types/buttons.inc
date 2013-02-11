<?php

$plugin = array(
  'title' => t('IK frontend buttons'),
  'description' => t('Simple block with buttons'),
  'single' => TRUE,
  'required context' => array(
    new ctools_context_optional(t('Channel node'), 'node'),
  ),
  'category' => t('IK'),
);

/**
 * Callback function for the ctools content_type
 */
function ik_frontend_buttons_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();

  $buttons = array(
    'start' => array(
      'title' => t('Start'),
      'link' => token_replace('channels/[ik_channel:hash]/run', array('node' => $context[0]->data)),
    ),
    'bookmark' => array(
      'title' => t('Bookmark'),
      'link' => token_replace('channels/[ik_channel:hash]', array('node' => $context[0]->data)),
    ),
    'feed' => array(
      'title' => t('Feed (export)'),
      'link' => token_replace('channels/[ik_channel:hash]/feed', array('node' => $context[0]->data)),
    ),
  );

  $block->content = theme('ik_frontend_buttons', array('title' => t('Channel actions'), 'buttons' => $buttons));

  // Add javascript to handle buttons.
  drupal_add_js(drupal_get_path('module', 'ik_frontend') . '/js/ik.admin.js');

  return $block;
}

/**
 * Returns an edit form for settings
 */
function ik_frontend_buttons_content_type_edit_form($form, &$form_state) {
  return $form;
}
