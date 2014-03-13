<?php
/**
 * @file
 * ik_slides.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ik_slides_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Slide node',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'slide' => 'slide',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0f31dbeb-a0ee-4ecd-bb27-d8b40a2e1c60';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c25e7b6e-6b35-4420-a8fb-c370848fa3e3';
    $pane->panel = 'bottom';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medium',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c25e7b6e-6b35-4420-a8fb-c370848fa3e3';
    $display->content['new-c25e7b6e-6b35-4420-a8fb-c370848fa3e3'] = $pane;
    $display->panels['bottom'][0] = 'new-c25e7b6e-6b35-4420-a8fb-c370848fa3e3';
    $pane = new stdClass();
    $pane->pid = 'new-eedbcb0a-b6d5-44cd-9ad9-2a0eb125e551';
    $pane->panel = 'bottom';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eedbcb0a-b6d5-44cd-9ad9-2a0eb125e551';
    $display->content['new-eedbcb0a-b6d5-44cd-9ad9-2a0eb125e551'] = $pane;
    $display->panels['bottom'][1] = 'new-eedbcb0a-b6d5-44cd-9ad9-2a0eb125e551';
    $pane = new stdClass();
    $pane->pid = 'new-b6dc66c2-57a8-4348-af01-611f27ab0cdb';
    $pane->panel = 'bottom';
    $pane->type = 'token';
    $pane->subtype = 'node:field_ik_og_department_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b6dc66c2-57a8-4348-af01-611f27ab0cdb';
    $display->content['new-b6dc66c2-57a8-4348-af01-611f27ab0cdb'] = $pane;
    $display->panels['bottom'][2] = 'new-b6dc66c2-57a8-4348-af01-611f27ab0cdb';
    $pane = new stdClass();
    $pane->pid = 'new-c074854a-80f4-4139-bb53-8809a35b931a';
    $pane->panel = 'top';
    $pane->type = 'token';
    $pane->subtype = 'node:flag-favorites-link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c074854a-80f4-4139-bb53-8809a35b931a';
    $display->content['new-c074854a-80f4-4139-bb53-8809a35b931a'] = $pane;
    $display->panels['top'][0] = 'new-c074854a-80f4-4139-bb53-8809a35b931a';
    $pane = new stdClass();
    $pane->pid = 'new-3697309d-7645-45c0-a471-f1492ba25c14';
    $pane->panel = 'top';
    $pane->type = 'slide_buttons';
    $pane->subtype = 'slide_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3697309d-7645-45c0-a471-f1492ba25c14';
    $display->content['new-3697309d-7645-45c0-a471-f1492ba25c14'] = $pane;
    $display->panels['top'][1] = 'new-3697309d-7645-45c0-a471-f1492ba25c14';
    $pane = new stdClass();
    $pane->pid = 'new-e8598001-b604-4a85-8363-38f846359ce4';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ik_slide_preview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ik_slide_preview_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'slide_preview_large',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e8598001-b604-4a85-8363-38f846359ce4';
    $display->content['new-e8598001-b604-4a85-8363-38f846359ce4'] = $pane;
    $display->panels['top'][2] = 'new-e8598001-b604-4a85-8363-38f846359ce4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
