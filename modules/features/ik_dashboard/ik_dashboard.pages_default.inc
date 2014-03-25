<?php
/**
 * @file
 * ik_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ik_dashboard_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Slide',
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
        'type' => 'slide',
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
              'slide' => 'slide',
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
  $display->uuid = '30aacb9e-47c5-40cf-9cf9-4142e144a79b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7413032a-0963-4de2-88e9-1671bb270df3';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_basic_information';
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
    $pane->uuid = '7413032a-0963-4de2-88e9-1671bb270df3';
    $display->content['new-7413032a-0963-4de2-88e9-1671bb270df3'] = $pane;
    $display->panels['left'][0] = 'new-7413032a-0963-4de2-88e9-1671bb270df3';
    $pane = new stdClass();
    $pane->pid = 'new-64d2ca92-cc0d-42a6-9ba7-bff9ceb8f9ff';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_slide_design';
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
    $pane->uuid = '64d2ca92-cc0d-42a6-9ba7-bff9ceb8f9ff';
    $display->content['new-64d2ca92-cc0d-42a6-9ba7-bff9ceb8f9ff'] = $pane;
    $display->panels['left'][1] = 'new-64d2ca92-cc0d-42a6-9ba7-bff9ceb8f9ff';
    $pane = new stdClass();
    $pane->pid = 'new-34da949c-767b-48b4-bd2d-d89377da69db';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_slide_images';
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
    $pane->uuid = '34da949c-767b-48b4-bd2d-d89377da69db';
    $display->content['new-34da949c-767b-48b4-bd2d-d89377da69db'] = $pane;
    $display->panels['left'][2] = 'new-34da949c-767b-48b4-bd2d-d89377da69db';
    $pane = new stdClass();
    $pane->pid = 'new-e422e3de-a34e-4e39-bef9-1c8ea2a79e19';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_slide_categories';
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
    $pane->uuid = 'e422e3de-a34e-4e39-bef9-1c8ea2a79e19';
    $display->content['new-e422e3de-a34e-4e39-bef9-1c8ea2a79e19'] = $pane;
    $display->panels['right'][0] = 'new-e422e3de-a34e-4e39-bef9-1c8ea2a79e19';
    $pane = new stdClass();
    $pane->pid = 'new-5fa37a38-442a-41bb-9def-f10b5ec55144';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_slide_template';
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
    $pane->uuid = '5fa37a38-442a-41bb-9def-f10b5ec55144';
    $display->content['new-5fa37a38-442a-41bb-9def-f10b5ec55144'] = $pane;
    $display->panels['right'][1] = 'new-5fa37a38-442a-41bb-9def-f10b5ec55144';
    $pane = new stdClass();
    $pane->pid = 'new-ef9609c8-7efb-43d3-979a-4d91882c9596';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field_group';
    $pane->subtype = 'node:group_ik_slide_department';
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
    $pane->uuid = 'ef9609c8-7efb-43d3-979a-4d91882c9596';
    $display->content['new-ef9609c8-7efb-43d3-979a-4d91882c9596'] = $pane;
    $display->panels['right'][2] = 'new-ef9609c8-7efb-43d3-979a-4d91882c9596';
    $pane = new stdClass();
    $pane->pid = 'new-e6259ff9-48f0-4f31-be43-9976ba84cd35';
    $pane->panel = 'right';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e6259ff9-48f0-4f31-be43-9976ba84cd35';
    $display->content['new-e6259ff9-48f0-4f31-be43-9976ba84cd35'] = $pane;
    $display->panels['right'][3] = 'new-e6259ff9-48f0-4f31-be43-9976ba84cd35';
    $pane = new stdClass();
    $pane->pid = 'new-142b047e-38b2-438c-89f0-3d5b3c7027df';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '142b047e-38b2-438c-89f0-3d5b3c7027df';
    $display->content['new-142b047e-38b2-438c-89f0-3d5b3c7027df'] = $pane;
    $display->panels['right'][4] = 'new-142b047e-38b2-438c-89f0-3d5b3c7027df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ik_dashboard_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ik_dashboard';
  $page->task = 'page';
  $page->admin_title = 'IK Dashboard';
  $page->admin_description = 'The dashboard is the sites frontpage where users get an overview of content.';
  $page->path = 'dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 3,
            2 => 4,
            3 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ik_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ik_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'dashboard',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5e5fd8cf-dc14-43bd-822b-b2482974b925';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-86a6446b-ac08-4c37-b22b-367e30c7feba';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ik_dashboard-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '86a6446b-ac08-4c37-b22b-367e30c7feba';
    $display->content['new-86a6446b-ac08-4c37-b22b-367e30c7feba'] = $pane;
    $display->panels['left'][0] = 'new-86a6446b-ac08-4c37-b22b-367e30c7feba';
    $pane = new stdClass();
    $pane->pid = 'new-77e2454a-e4a4-4ef9-bfca-4068a707a7b8';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ik_dashboard-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77e2454a-e4a4-4ef9-bfca-4068a707a7b8';
    $display->content['new-77e2454a-e4a4-4ef9-bfca-4068a707a7b8'] = $pane;
    $display->panels['right'][0] = 'new-77e2454a-e4a4-4ef9-bfca-4068a707a7b8';
    $pane = new stdClass();
    $pane->pid = 'new-ff2753c6-c3aa-42de-8fdb-0111d30a51f7';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'ik_dashboard-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff2753c6-c3aa-42de-8fdb-0111d30a51f7';
    $display->content['new-ff2753c6-c3aa-42de-8fdb-0111d30a51f7'] = $pane;
    $display->panels['top'][0] = 'new-ff2753c6-c3aa-42de-8fdb-0111d30a51f7';
    $pane = new stdClass();
    $pane->pid = 'new-c038f030-0a01-4486-b001-c2891df85b60';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'ik_dashboard-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c038f030-0a01-4486-b001-c2891df85b60';
    $display->content['new-c038f030-0a01-4486-b001-c2891df85b60'] = $pane;
    $display->panels['top'][1] = 'new-c038f030-0a01-4486-b001-c2891df85b60';
    $pane = new stdClass();
    $pane->pid = 'new-73574899-8845-4458-ad7d-5b8c4739b41a';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'ik_dashboard-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '73574899-8845-4458-ad7d-5b8c4739b41a';
    $display->content['new-73574899-8845-4458-ad7d-5b8c4739b41a'] = $pane;
    $display->panels['top'][2] = 'new-73574899-8845-4458-ad7d-5b8c4739b41a';
    $pane = new stdClass();
    $pane->pid = 'new-0c79f7d3-09ba-4bbe-b540-66394095bbdf';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'ik_dashboard-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0c79f7d3-09ba-4bbe-b540-66394095bbdf';
    $display->content['new-0c79f7d3-09ba-4bbe-b540-66394095bbdf'] = $pane;
    $display->panels['top'][3] = 'new-0c79f7d3-09ba-4bbe-b540-66394095bbdf';
    $pane = new stdClass();
    $pane->pid = 'new-74abc449-9d9c-4cd5-80bd-62728514c540';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'ik_dashboard-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '74abc449-9d9c-4cd5-80bd-62728514c540';
    $display->content['new-74abc449-9d9c-4cd5-80bd-62728514c540'] = $pane;
    $display->panels['top'][4] = 'new-74abc449-9d9c-4cd5-80bd-62728514c540';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ik_dashboard'] = $page;

  return $pages;

}
