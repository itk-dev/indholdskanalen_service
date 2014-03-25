<?php
/**
 * @file
 * ik_mrss_feed_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ik_mrss_feed_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ik_mrss_feed_importer_node_info() {
  $items = array(
    'media_rss_slide_import' => array(
      'name' => t('Media RSS slide import'),
      'base' => 'node_content',
      'description' => t('Importer slides fra et Media RSS Image feed, f.eks. http://flickr.com/services/feeds/photos_public.gne?id=57329149@N07&lang=en-us&format=rss_200.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
