<?php
/**
 * @file
 * The Media RSS Feed builder object to make exports for channels into this
 * format.
 */

/**
 * Implements IK mrss Export class used to create channel feeds. 
 */
class IKMRSSExport {

  private $entity = NULL;
  private $token = NULL;
  private $slides = NULL;
  private $xml = NULL;
  private $root = NULL;

  /**
   * Constructor to create the object that takes a channel token and entity.
   *  
   * @param string $token
   * @param object $entity 
   */
  public function __construct($token, $entity) {
    $this->entity = $entity;
    $this->token = $token;

    // Get slids for the channel.
    $this->slides = ik_frontend_get_slides($token, $entity);
    $this->build();
  }

  /**
   * Returns the XML build.
   */
  public function getXML() {
    return $this->xml->saveXML();
  }

  /**
   * Builds the XML as a Media RSS feed. 
   */
  private function build() {
    // Create new XML document and make it print pretty.
    $this->xml = new DOMDocument('1.0', 'utf-8');
    $this->xml->formatOutput = true;

    // Set namespaces.
    $this->root = $this->xml->createElement('rss');
    $this->root->setAttribute('version', '2.0');
    $this->root->setAttribute('xmlns:media', 'http://search.yahoo.com/mrss/');
    $this->root->setAttribute('xmlns:atom', 'http://www.w3.org/2005/Atom');
    $this->xml->appendChild($this->root);

    // Create root element.
    $channel = $this->xml->createElement('channel');
    $this->root->appendChild($channel);

    // Basic information.
    $element = $this->xml->createElement('title', $this->entity->title);
    $channel->appendChild($element);

    $element = $this->xml->createElement('link', url('' , array('absolute' => TRUE)));
    $channel->appendChild($element);

    $data = field_get_items('node', $this->entity, 'field_channel_description');
    $element = $this->xml->createElement('description', strip_tags($this->formatString($data)));
    $channel->appendChild($element);

    // Atom link
    $element = $this->xml->createElement('atom:link');
    $element->setAttribute('href', url('channels/' . $this->token . '/feed' , array('absolute' => TRUE)));
    $element->setAttribute('rel', 'self');
    $element->setAttribute('type', 'application/rss+xml');
    $channel->appendChild($element);

    // Build items
    foreach ($this->slides as $slide) {
      $channel->appendChild($this->createItem($slide->nid));
    }
  }

  /**
   * Helper function to clean entity strings.
   */
  private function formatString($data) {
    return check_markup(preg_replace('/\s\s+|\n|\r/', ' ', $data[0]['value']), $data[0]['format']);
  }
  
  /**
   * Create feed item.
   */
  private function createItem($sid) {
    // Load slide.
    $slide = ik_frontend_fetch_slide($this->token, $sid, FALSE);
    
    // Create item.
    $item = $this->xml->createElement('item');
    
    // Set basic information.
    $element = $this->xml->createElement('title', $slide->title);
    $item->appendChild($element);   
    $element = $this->xml->createElement('link', url('node/' . $sid , array('absolute' => TRUE)));
    $item->appendChild($element);
    $element = $this->xml->createElement('description', $slide->text);
    $item->appendChild($element);
    
    // Create GUID
    $element = $this->xml->createElement('guid', url('node/' . $sid , array('absolute' => TRUE)));
    $element->setAttribute('isPermaLink', 'false');
    $item->appendChild($element);
    
    foreach ($slide->media as $fid => $url) {
      $item->appendChild($this->createMedia($fid, $url));
    }
        
    return $item;
  }
  
  /**
   * Create media tag.
   */
  private function createMedia($fid, $url) {
    $media = $this->xml->createElement('media:content');
    $media->setAttribute('url', $url);
    
    $style = image_style_load('slide_images');
    
    $file = file_load($fid);
    $info = image_get_info($file->uri);
    $media->setAttribute('type', $info['mine_type']);
    $media->setAttribute('height', $style['effects'][1]['data']['height']);
    $media->setAttribute('width', $style['effects'][1]['data']['width']);
    $media->setAttribute('medium', 'image');
    $media->setAttribute('isDefault', 'false');
    
    $extra = basename($url, '.' . $info['extension']);
    $element = $this->xml->createElement('media:title', $extra);
    $media->appendChild($element);

    $element = $this->xml->createElement('media:description', $extra);
    $media->appendChild($element);
    
    return $media;
  }
}
