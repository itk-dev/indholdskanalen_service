<?php
/**
 * @file
 * ik_channels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ik_channels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Channel',
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
              'channel' => 'channel',
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
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a5b4d5b-5fc5-4566-8613-e9beb17760c4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-862b6696-f953-43db-a3d7-3e42f031c20c';
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
    $pane->uuid = '862b6696-f953-43db-a3d7-3e42f031c20c';
    $display->content['new-862b6696-f953-43db-a3d7-3e42f031c20c'] = $pane;
    $display->panels['left'][0] = 'new-862b6696-f953-43db-a3d7-3e42f031c20c';
    $pane = new stdClass();
    $pane->pid = 'new-ee85976a-9b23-435b-8202-415e26ba356d';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_channel_description';
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
    $pane->uuid = 'ee85976a-9b23-435b-8202-415e26ba356d';
    $display->content['new-ee85976a-9b23-435b-8202-415e26ba356d'] = $pane;
    $display->panels['left'][1] = 'new-ee85976a-9b23-435b-8202-415e26ba356d';
    $pane = new stdClass();
    $pane->pid = 'new-04d4d157-6e86-4ee4-921e-871b892aa7b4';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_channel_orgnization';
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
    $pane->uuid = '04d4d157-6e86-4ee4-921e-871b892aa7b4';
    $display->content['new-04d4d157-6e86-4ee4-921e-871b892aa7b4'] = $pane;
    $display->panels['left'][2] = 'new-04d4d157-6e86-4ee4-921e-871b892aa7b4';
    $pane = new stdClass();
    $pane->pid = 'new-393727ee-4e79-433c-966a-4a23d6b0917b';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_channel_department';
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
    $pane->uuid = '393727ee-4e79-433c-966a-4a23d6b0917b';
    $display->content['new-393727ee-4e79-433c-966a-4a23d6b0917b'] = $pane;
    $display->panels['left'][3] = 'new-393727ee-4e79-433c-966a-4a23d6b0917b';
    $pane = new stdClass();
    $pane->pid = 'new-f93d2531-0e79-4633-b9d3-fd43eeff8853';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_channel_tags';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f93d2531-0e79-4633-b9d3-fd43eeff8853';
    $display->content['new-f93d2531-0e79-4633-b9d3-fd43eeff8853'] = $pane;
    $display->panels['left'][4] = 'new-f93d2531-0e79-4633-b9d3-fd43eeff8853';
    $pane = new stdClass();
    $pane->pid = 'new-7d7af165-6085-4e96-bc4f-dcb886b595f6';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_channel_categories';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '7d7af165-6085-4e96-bc4f-dcb886b595f6';
    $display->content['new-7d7af165-6085-4e96-bc4f-dcb886b595f6'] = $pane;
    $display->panels['left'][5] = 'new-7d7af165-6085-4e96-bc4f-dcb886b595f6';
    $pane = new stdClass();
    $pane->pid = 'new-f2356315-5fb5-4586-be36-53a201db4e77';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_channel_slides';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f2356315-5fb5-4586-be36-53a201db4e77';
    $display->content['new-f2356315-5fb5-4586-be36-53a201db4e77'] = $pane;
    $display->panels['left'][6] = 'new-f2356315-5fb5-4586-be36-53a201db4e77';
    $pane = new stdClass();
    $pane->pid = 'new-ec6e3b56-38d9-4e08-b942-4baa21d4189c';
    $pane->panel = 'right';
    $pane->type = 'form';
    $pane->subtype = 'form';
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
    $pane->uuid = 'ec6e3b56-38d9-4e08-b942-4baa21d4189c';
    $display->content['new-ec6e3b56-38d9-4e08-b942-4baa21d4189c'] = $pane;
    $display->panels['right'][0] = 'new-ec6e3b56-38d9-4e08-b942-4baa21d4189c';
    $pane = new stdClass();
    $pane->pid = 'new-76ea1bcd-0a7b-43e5-bfee-87d38fd360c2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '76ea1bcd-0a7b-43e5-bfee-87d38fd360c2';
    $display->content['new-76ea1bcd-0a7b-43e5-bfee-87d38fd360c2'] = $pane;
    $display->panels['right'][1] = 'new-76ea1bcd-0a7b-43e5-bfee-87d38fd360c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Channel node',
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
              'channel' => 'channel',
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
  $display->uuid = '75545239-f8f8-4899-bfc8-e87c3b7b428b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9f59043-5b30-4f46-969c-046891688a62';
    $pane->panel = 'bottom';
    $pane->type = 'buttons';
    $pane->subtype = 'buttons';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b9f59043-5b30-4f46-969c-046891688a62';
    $display->content['new-b9f59043-5b30-4f46-969c-046891688a62'] = $pane;
    $display->panels['bottom'][0] = 'new-b9f59043-5b30-4f46-969c-046891688a62';
    $pane = new stdClass();
    $pane->pid = 'new-1d6e1c4c-0ae2-4bdf-84d9-3d8ae28f171a';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_channel_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->uuid = '1d6e1c4c-0ae2-4bdf-84d9-3d8ae28f171a';
    $display->content['new-1d6e1c4c-0ae2-4bdf-84d9-3d8ae28f171a'] = $pane;
    $display->panels['left'][0] = 'new-1d6e1c4c-0ae2-4bdf-84d9-3d8ae28f171a';
    $pane = new stdClass();
    $pane->pid = 'new-d3936c04-03fa-4d1d-8bdc-d2e71326bcd0';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_channel_preview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'ik_channel_filter_preview_images_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'slide_preview_small',
        'limit' => 0,
        'link' => 1,
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
    $pane->uuid = 'd3936c04-03fa-4d1d-8bdc-d2e71326bcd0';
    $display->content['new-d3936c04-03fa-4d1d-8bdc-d2e71326bcd0'] = $pane;
    $display->panels['right'][0] = 'new-d3936c04-03fa-4d1d-8bdc-d2e71326bcd0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  return $export;
}
