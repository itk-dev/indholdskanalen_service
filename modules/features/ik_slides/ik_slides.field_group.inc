<?php
/**
 * @file
 * ik_slides.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ik_slides_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_basic_information|node|slide|form';
  $field_group->group_name = 'group_ik_basic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic information',
    'weight' => '0',
    'children' => array(
      0 => 'field_ik_slide_subheading',
      1 => 'field_ik_slide_text',
      2 => 'field_ik_slide_relevance',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-ik-basic-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_basic_information|node|slide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_slide_categories|node|slide|form';
  $field_group->group_name = 'group_ik_slide_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '4',
    'children' => array(
      0 => 'field_ik_slide_category',
      1 => 'field_ik_slide_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-ik-slide-categories field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_slide_categories|node|slide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_slide_department|node|slide|form';
  $field_group->group_name = 'group_ik_slide_department';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
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
        'classes' => ' group-ik-slide-department field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_slide_department|node|slide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_slide_design|node|slide|form';
  $field_group->group_name = 'group_ik_slide_design';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Design',
    'weight' => '1',
    'children' => array(
      0 => 'field_ik_slide_logo',
      1 => 'field_ik_slide_color_theme',
      2 => 'field_ik_slide_font_size',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-ik-slide-design field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_slide_design|node|slide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_slide_images|node|slide|form';
  $field_group->group_name = 'group_ik_slide_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '3',
    'children' => array(
      0 => 'field_ik_slide_media',
      1 => 'field_ik_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-ik-slide-images field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ik_slide_images|node|slide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_slide_import|node|slide|form';
  $field_group->group_name = 'group_ik_slide_import';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Import',
    'weight' => '6',
    'children' => array(
      0 => 'field_ik_slide_import_node',
      1 => 'field_ik_slide_imported',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Import',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-ik-slide-import field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ik_slide_import|node|slide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_slide_layout|node|slide|form';
  $field_group->group_name = 'group_ik_slide_layout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ik_slide_template';
  $field_group->data = array(
    'label' => 'Layout',
    'weight' => '16',
    'children' => array(
      0 => 'field_layout',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Layout',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-ik-slide-layout field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ik_slide_layout|node|slide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ik_slide_template|node|slide|form';
  $field_group->group_name = 'group_ik_slide_template';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Template',
    'weight' => '5',
    'children' => array(
      0 => 'field_ik_slide_exposure',
      1 => 'group_ik_slide_layout',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-ik-slide-template field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ik_slide_template|node|slide|form'] = $field_group;

  return $export;
}
