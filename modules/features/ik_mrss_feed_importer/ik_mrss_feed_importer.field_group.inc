<?php
/**
 * @file
 * ik_mrss_feed_importer.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ik_mrss_feed_importer_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_mrss_categories|node|media_rss_slide_import|form';
  $field_group->group_name = 'group_ik_mrss_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_rss_slide_import';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '5',
    'children' => array(
      0 => 'field_ik_slide_category',
      1 => 'field_ik_slide_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_mrss_categories|node|media_rss_slide_import|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_mrss_department|node|media_rss_slide_import|form';
  $field_group->group_name = 'group_ik_mrss_department';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_rss_slide_import';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afdeling',
    'weight' => '7',
    'children' => array(
      0 => 'field_ik_og_department_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_mrss_department|node|media_rss_slide_import|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_mrss_design|node|media_rss_slide_import|form';
  $field_group->group_name = 'group_ik_mrss_design';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_rss_slide_import';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Design',
    'weight' => '2',
    'children' => array(
      0 => 'field_ik_slide_logo',
      1 => 'field_ik_slide_color_theme',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_mrss_design|node|media_rss_slide_import|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_mrss_feed_group|node|media_rss_slide_import|form';
  $field_group->group_name = 'group_ik_mrss_feed_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_rss_slide_import';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feed information',
    'weight' => '1',
    'children' => array(
      0 => 'field_ik_mrss_text_feed',
      1 => 'feeds',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_mrss_feed_group|node|media_rss_slide_import|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_mrss_images|node|media_rss_slide_import|form';
  $field_group->group_name = 'group_ik_mrss_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_rss_slide_import';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '3',
    'children' => array(
      0 => 'field_ik_slide_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_mrss_images|node|media_rss_slide_import|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_mrss_layout|node|media_rss_slide_import|form';
  $field_group->group_name = 'group_ik_mrss_layout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_rss_slide_import';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ik_mrss_template';
  $field_group->data = array(
    'label' => 'Layout',
    'weight' => '13',
    'children' => array(
      0 => 'field_layout',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Layout',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ik_mrss_layout|node|media_rss_slide_import|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_mrss_template|node|media_rss_slide_import|form';
  $field_group->group_name = 'group_ik_mrss_template';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'media_rss_slide_import';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Template',
    'weight' => '6',
    'children' => array(
      0 => 'field_ik_slide_exposure',
      1 => 'group_ik_mrss_layout',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_mrss_template|node|media_rss_slide_import|form'] = $field_group;

  return $export;
}
