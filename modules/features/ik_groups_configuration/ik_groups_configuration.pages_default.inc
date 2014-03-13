<?php
/**
 * @file
 * ik_groups_configuration.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ik_groups_configuration_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Organisation node',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'organisation-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'organisation' => 'organisation',
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
  $display->uuid = '3ca3a4b9-c60a-431c-979c-c843fa2a853e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cf7e2cba-986d-4f3e-8a2d-075412ec00d4';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'ik_groups_content-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf7e2cba-986d-4f3e-8a2d-075412ec00d4';
    $display->content['new-cf7e2cba-986d-4f3e-8a2d-075412ec00d4'] = $pane;
    $display->panels['bottom'][0] = 'new-cf7e2cba-986d-4f3e-8a2d-075412ec00d4';
    $pane = new stdClass();
    $pane->pid = 'new-532232a9-ecf1-4dec-a956-184c2091f6bc';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ik_org_descp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '532232a9-ecf1-4dec-a956-184c2091f6bc';
    $display->content['new-532232a9-ecf1-4dec-a956-184c2091f6bc'] = $pane;
    $display->panels['left'][0] = 'new-532232a9-ecf1-4dec-a956-184c2091f6bc';
    $pane = new stdClass();
    $pane->pid = 'new-6b1f0d36-9961-455d-a3aa-462c55a2e1bb';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ik_org_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'image_style' => 'medium',
        'image_link' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6b1f0d36-9961-455d-a3aa-462c55a2e1bb';
    $display->content['new-6b1f0d36-9961-455d-a3aa-462c55a2e1bb'] = $pane;
    $display->panels['right'][0] = 'new-6b1f0d36-9961-455d-a3aa-462c55a2e1bb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Department node',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'department-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Organisation [field_ik_og_organisation_ref])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_ik_og_organisation_ref-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'department' => 'department',
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
  $display->uuid = '1a01b562-2994-402d-8f3e-6ee84b35043f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-da2a3e77-2e52-48ff-b280-5853c914a6a5';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'ik_groups_content-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'da2a3e77-2e52-48ff-b280-5853c914a6a5';
    $display->content['new-da2a3e77-2e52-48ff-b280-5853c914a6a5'] = $pane;
    $display->panels['bottom'][0] = 'new-da2a3e77-2e52-48ff-b280-5853c914a6a5';
    $pane = new stdClass();
    $pane->pid = 'new-025406f5-1ed4-4ce5-9fb0-cf35605176c3';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'ik_groups_content-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '025406f5-1ed4-4ce5-9fb0-cf35605176c3';
    $display->content['new-025406f5-1ed4-4ce5-9fb0-cf35605176c3'] = $pane;
    $display->panels['bottom'][1] = 'new-025406f5-1ed4-4ce5-9fb0-cf35605176c3';
    $pane = new stdClass();
    $pane->pid = 'new-59be2bd6-6c1c-4abf-9105-88f94f3fa7f4';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ik_department_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '59be2bd6-6c1c-4abf-9105-88f94f3fa7f4';
    $display->content['new-59be2bd6-6c1c-4abf-9105-88f94f3fa7f4'] = $pane;
    $display->panels['left'][0] = 'new-59be2bd6-6c1c-4abf-9105-88f94f3fa7f4';
    $pane = new stdClass();
    $pane->pid = 'new-7e02a1d4-44bc-4cae-91fb-b7cf34125d52';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ik_org_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'thumbnail',
        'image_link' => 'content',
      ),
      'context' => 'relationship_entity_from_field:field_ik_og_organisation_ref-node-node_1',
      'override_title' => 0,
      'override_title_text' => 'A department under',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e02a1d4-44bc-4cae-91fb-b7cf34125d52';
    $display->content['new-7e02a1d4-44bc-4cae-91fb-b7cf34125d52'] = $pane;
    $display->panels['right'][0] = 'new-7e02a1d4-44bc-4cae-91fb-b7cf34125d52';
    $pane = new stdClass();
    $pane->pid = 'new-246ec7d8-0505-49a1-84b6-ca0e81628518';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_members-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Members',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '246ec7d8-0505-49a1-84b6-ca0e81628518';
    $display->content['new-246ec7d8-0505-49a1-84b6-ca0e81628518'] = $pane;
    $display->panels['right'][1] = 'new-246ec7d8-0505-49a1-84b6-ca0e81628518';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
