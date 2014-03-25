<?php
/**
 * @file
 * ik_mrss_feed_importer.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ik_mrss_feed_importer_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_3';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Slide importer',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node add form',
        'keyword' => 'node_add',
        'name' => 'node_add_form',
        'type' => 'media_rss_slide_import',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'media_rss_slide_import' => 'media_rss_slide_import',
            ),
          ),
          'context' => 'argument_node_edit_1',
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
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cb6c7d21-bf72-4a11-bc5d-68cccb5c05c9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1411c691-8b55-4e44-a8ee-132912bcb5b3';
    $pane->panel = 'bottom';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '1411c691-8b55-4e44-a8ee-132912bcb5b3';
    $display->content['new-1411c691-8b55-4e44-a8ee-132912bcb5b3'] = $pane;
    $display->panels['bottom'][0] = 'new-1411c691-8b55-4e44-a8ee-132912bcb5b3';
    $pane = new stdClass();
    $pane->pid = 'new-01fa6894-924a-4bfc-b194-a9330bc01179';
    $pane->panel = 'left';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '01fa6894-924a-4bfc-b194-a9330bc01179';
    $display->content['new-01fa6894-924a-4bfc-b194-a9330bc01179'] = $pane;
    $display->panels['left'][0] = 'new-01fa6894-924a-4bfc-b194-a9330bc01179';
    $pane = new stdClass();
    $pane->pid = 'new-bccda97f-30b8-49f1-8ba4-ea919059e4e8';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_mrss_feed_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'bccda97f-30b8-49f1-8ba4-ea919059e4e8';
    $display->content['new-bccda97f-30b8-49f1-8ba4-ea919059e4e8'] = $pane;
    $display->panels['left'][1] = 'new-bccda97f-30b8-49f1-8ba4-ea919059e4e8';
    $pane = new stdClass();
    $pane->pid = 'new-9a5b67d2-1b74-417d-bc06-3d1953274af6';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_mrss_design';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '9a5b67d2-1b74-417d-bc06-3d1953274af6';
    $display->content['new-9a5b67d2-1b74-417d-bc06-3d1953274af6'] = $pane;
    $display->panels['left'][2] = 'new-9a5b67d2-1b74-417d-bc06-3d1953274af6';
    $pane = new stdClass();
    $pane->pid = 'new-5f3655d6-b300-46fb-84cf-d30f4d9b10ed';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_mrss_template';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5f3655d6-b300-46fb-84cf-d30f4d9b10ed';
    $display->content['new-5f3655d6-b300-46fb-84cf-d30f4d9b10ed'] = $pane;
    $display->panels['left'][3] = 'new-5f3655d6-b300-46fb-84cf-d30f4d9b10ed';
    $pane = new stdClass();
    $pane->pid = 'new-4dcfa223-eda4-40f8-81b7-58376545c4c4';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_mrss_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '4dcfa223-eda4-40f8-81b7-58376545c4c4';
    $display->content['new-4dcfa223-eda4-40f8-81b7-58376545c4c4'] = $pane;
    $display->panels['right'][0] = 'new-4dcfa223-eda4-40f8-81b7-58376545c4c4';
    $pane = new stdClass();
    $pane->pid = 'new-ca6d35e6-8286-43a3-ba21-522d491bb829';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_mrss_department';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'ca6d35e6-8286-43a3-ba21-522d491bb829';
    $display->content['new-ca6d35e6-8286-43a3-ba21-522d491bb829'] = $pane;
    $display->panels['right'][1] = 'new-ca6d35e6-8286-43a3-ba21-522d491bb829';
    $pane = new stdClass();
    $pane->pid = 'new-a16ae70a-32e1-4702-a0ad-0c5459bc377b';
    $pane->panel = 'right';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'a16ae70a-32e1-4702-a0ad-0c5459bc377b';
    $display->content['new-a16ae70a-32e1-4702-a0ad-0c5459bc377b'] = $pane;
    $display->panels['right'][2] = 'new-a16ae70a-32e1-4702-a0ad-0c5459bc377b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_3'] = $handler;

  return $export;
}
