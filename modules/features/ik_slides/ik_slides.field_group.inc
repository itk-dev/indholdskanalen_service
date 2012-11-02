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
      2 => 'title',
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
  $export['group_ik_basic_information|node|slide|form'] = $field_group;

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
      0 => 'field_ik_slide_color',
      1 => 'field_ik_slide_text_color',
      2 => 'field_ik_slide_logo',
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
  $export['group_ik_slide_design|node|slide|form'] = $field_group;

  return $export;
}
