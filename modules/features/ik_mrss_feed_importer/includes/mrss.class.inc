<?php

/**
 * @file
 * Feed parser for data feeds from globus data about team events. This feed
 * parser can be used by the feeds module.
 */

class MediaRSSParser extends FeedsParser {

  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {

    // Load library helper functions.
    feeds_include_library('common_syndication_parser.inc', 'common_syndication_parser');

    // Parser data
    $xml = new SimpleXMLElement($fetcher_result->getRaw());

    // Build result object.
    $result = new FeedsParserResult();
    $result->title = 'Yahoo Media RSS';
    $result->description = 'Parse Yahoo Media RSS feed';

    // Run through news items
    foreach ($xml->channel->item as $item) {
      $data = array();
      $data['guid'] = (string)$item->guid;
      $data['title'] = (string)$item->title;
      $data['link'] = (string)$item->link;
      $data['description'] = urldecode((string)$item->description);

      $namespaces = $item->getNameSpaces(true);
      $media = $item->children($namespaces['media']);
      $data['media_title'] = urldecode((string)$media->content->title);
      $data['media_description'] = urldecode((string)$media->content->description);
      $data['media_url'] = (string)$media->attributes()->url;
      $data['media_image'] = $this->downloadImage($data['media_url'], basename($data['media_url']));


      // Add feed item
      $result->items[] = $data;
    }

    return $result;
  }

  /**
   * Helper function to download image from remote server.
   *
   * @param string $url
   *  Remote URL to download image.
   * @param string $id
   *  Id or name to store the image under.
   */
  private function downloadImage($url, $id) {
    // Download and save the image.
    $photo = file_get_contents($url);
    $file = file_save_data($photo, 'public://' . $id, FILE_EXISTS_REPLACE);

    if (is_object($file) && file_exists($file->uri)) {
      return $file->uri;
    }
    return FALSE;
  }

  public function getMappingSources() {
    return array(
      'guid' => array(
        'name' => t('GUID'),
        'description' => t('GUID'),
      ),
      'title' => array(
        'name' => t('Title'),
        'description' => t('Title'),
      ),
      'link' => array(
        'name' => t('Link'),
        'description' => t('Link'),
      ),
      'description' => array(
        'name' => t('Description'),
        'description' => t('Description'),
      ),
      'media_title' => array(
        'name' => t('Media title'),
        'description' => t('Media title'),
      ),
      'media_url' => array(
        'name' => t('Media URL'),
        'description' => t('Media URL'),
      ),
      'media_description' => array(
        'name' => t('Media description'),
        'description' => t('Media description'),
      ),
      'media_image' => array(
        'name' => t('Downloaded image'),
        'description' => t('Downloaded image'),
      ),
      'parent:layout:exposure' => array(
        'name' => t('Feed node: Exposure'),
        'description' => t('The feed node exposure value.'),
      ),
      'parent:layout' => array(
        'name' => t('Feed node: Layout'),
        'description' => t('The feed node Layout value.'),
      ),
      'parent:design:textcolor' => array(
        'name' => t('Feed node: Text Color'),
        'description' => t('The feed node text color value.'),
      ),
      'parent:design:color' => array(
        'name' => t('Feed node: Color'),
        'description' => t('The feed node color value.'),
      ),
      'parent:design:logo' => array(
        'name' => t('Feed node: Logo URI'),
        'description' => t('The feed node logo URI value.'),
      ),
      'parent:og:department' => array(
        'name' => t('Feed node: OG Department'),
        'description' => t('The feed node OG department value.'),
      ),
    ) + parent::getMappingSources();
  }

  public function getSourceElement(FeedsSource $source, FeedsParserResult $result, $element_key) {

    // Load feed node.
    $node = node_load($source->feed_nid);

    switch ($element_key) {

      case 'parent:layout:exposure':
        if ($source->feed_nid && $node) {
          $value = field_get_items('node', $node, 'field_ik_slide_exposure');
          return $value[0]['value'];
        }
        break;

      case 'parent:layout':
        if ($source->feed_nid && $node) {
          $value = field_get_items('node', $node, 'field_layout');
          return $value[0]['value'];
        }
        break;

      case 'parent:design:textcolor':
        if ($source->feed_nid && $node) {
          $value = field_get_items('node', $node, 'field_ik_slide_text_color');
          return $value[0]['jquery_colorpicker'];
        }
        break;

      case 'parent:design:color':
        if ($source->feed_nid && $node) {
          $value = field_get_items('node', $node, 'field_ik_slide_color');
          return $value[0]['jquery_colorpicker'];
        }
        break;

      case 'parent:design:logo':
        if ($source->feed_nid && $node) {
          $value = field_get_items('node', $node, 'field_ik_slide_log');
          return $value[0]['uri'];
        }
        break;

      case 'parent:og:department':
        if ($source->feed_nid && $node) {
          $value = field_get_items('node', $node, 'field_ik_slide_department_ref');
          return $value[0]['target_id'];
        }
        break;

      case 'parent:uid':
        if ($source->feed_nid && $node) {
          return $node->uid;
        }
        break;

      case 'parent:nid':
        return $source->feed_nid;

    }

    $item = $result->currentItem();
    return isset($item[$element_key]) ? $item[$element_key] : '';
  }
}