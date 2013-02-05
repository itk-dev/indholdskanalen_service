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
    ) + parent::getMappingSources();
  }
}