<?php
/**
 * @file
 * ik_channels.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ik_channels_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_channel_basic|node|channel|form';
  $field_group->group_name = 'group_channel_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic information',
    'weight' => '0',
    'children' => array(
      0 => 'field_channel_description',
      1 => 'title',
      2 => 'field_channel_relevance',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basic information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_channel_basic|node|channel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_channel_filter|node|channel|form';
  $field_group->group_name = 'group_channel_filter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Filter',
    'weight' => '1',
    'children' => array(
      0 => 'field_channel_department',
      1 => 'field_channel_orgnization',
      2 => 'field_channel_slides',
      3 => 'field_channel_categories',
      4 => 'field_channel_tags',
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
  $export['group_channel_filter|node|channel|form'] = $field_group;

  return $export;
}
