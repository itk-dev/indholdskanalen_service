<?php

class SlideProcessor extends FeedsNodeProcessor {

  /**
   * Save a node.
   */
  public function entitySave($entity) {
    // If nid is set and a node with that id doesn't exist, flag as new.
    if (!empty($entity->nid) && !node_load($entity->nid)) {
      $entity->is_new = TRUE;
    }
    else {
      if (isset($entity->field_ik_slide_preview)) {
        // Get information about the slide.
        $info = field_info_instances('node', $entity->type);
        $instance = $info['field_ik_slide_preview'];
        $field = field_info_field('field_ik_slide_preview');

        // Create screenshot of the newly imported slide.
        $dest = $field['settings']['uri_scheme'] . '://' . $instance['settings']['file_directory'];
        $url = url('slide/' . $entity->nid . '/preview', array('absolute' => TRUE));
        $entity->language = isset($entity->language) ? $entity->language : 'und';
        $file = drupal_realpath($entity->field_ik_slide_preview[$entity->language][0]['image']);
        if (!file_exists($file)) {
          // Capture new screenshot.
          if (!phantomjs_capture_screen($url, $dest, basename($file))) {
            drupal_set_message(t('PhantomJS chould not create screenshot of the slide'), 'error');
          }
        }
      }
    }

    node_save($entity);
  }
}