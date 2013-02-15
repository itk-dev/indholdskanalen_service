<?php
/**
 * @file
 *
 */

/**
 * Find slide titles and nids for a given filters values.
 *
 * @param mixed $raw_values
 * @return array
 *  Database result with the found nid's and there titles.
 */
function ik_channel_filter_get_slides($raw_values) {
  if (empty($raw_values)) {
    // It may happen when creating a new node or make AJAX callbacks.
    return $raw_values;
  }

  // User an array to store temporary tables.
  $tables_and = array();
  $tables_or = array();

  // Loop over fields and get configuration
  foreach ($raw_values as $fieldname => $values) {
    // Get values and covert them into sql frendly string. Another
    // solution would be to use the query build...
    $values = explode(',', check_plain($values));
    $values_str = "'" . implode("', '", $values) . "'";

    // Get information about the fields configuration.
    $field_info = field_info_field($fieldname);

    // Get operation type between this field and other fields.
    $operation = $field_info['settings']['ik_search']['operation'];

    switch ($field_info['settings']['ik_search']['type']) {
      case 'types':
        // Get select content types.
        $types = array_filter($field_info['settings']['ik_search']['types']);
        $query = "SELECT n.nid, n.title
                    FROM node n
                  WHERE n.title IN (" . $values_str . ")
                    AND n.type = 'slide'
                    AND n.status = 1";
        break;

      case 'og':
        // We are searching on two levels and this is fixed in some what a
        // hacked way. But it works for now :-|
        //  * department -> slide and
        //  * orgranistaion -> department -> slide
        $og_type = array_filter($field_info['settings']['ik_search']['og']);
        if (!isset($og_type['organisation'])) {
          // One level OG search.
          $query = "SELECT n.nid, n.title FROM node n
                    INNER JOIN (
                      SELECT etid FROM og_membership WHERE gid IN (
                        SELECT n.nid
                        FROM node n
                        WHERE type = '" . array_shift($og_type) . "'
                        AND n.title IN (" . $values_str . ")
                      )
                      AND entity_type = 'node'
                    ) inner_og ON n.nid = inner_og.etid
                    AND n.type = 'slide'
                    AND n.status = 1";
        }
        else {
          // Two level OG search.
          $query = "SELECT n.nid, n.title
                    FROM {og_membership} ogm
                    INNER JOIN (
                      SELECT etid
                      FROM {node} n
                      INNER JOIN {og_membership} ogm ON n.nid = ogm.gid
                      WHERE n.title IN (" . $values_str . ")
                      AND ogm.entity_type = 'node') inner_ogm
                    ON ogm.gid = inner_ogm.etid
                    INNER JOIN {node} n ON ogm.etid = n.nid
                    WHERE ogm.entity_type = 'node'
                    AND n.type = 'slide'
                    AND n.status = 1";
        }
        break;

      case 'vocabulary':
        $vocabulary = $field_info['settings']['ik_search']['vocabulary'];
        $term_field = $field_info['settings']['ik_search']['fields'];

        // This have to be done foreach vocabulary and join to gether.
        $query = "SELECT DISTINCT n.nid, n.title
                  FROM node n
                  INNER JOIN (
                  SELECT entity_id AS nid
                    FROM field_data_" . $term_field . "
                    WHERE " . $term_field . "_tid IN (
                      SELECT ttd.tid
                      FROM taxonomy_term_data ttd
                      INNER JOIN taxonomy_vocabulary tv ON tv.vid = ttd.vid
                      WHERE machine_name = '" . $vocabulary . "'
                      AND ttd.name IN (" . $values_str . ")
                    )
                    GROUP BY entity_id
                    HAVING count(1) = " . count($values) . "
                  ) AS inner_nid ON inner_nid.nid = n.nid
                  WHERE n.type = 'slide'
                  AND n.status = 1";
        break;
    }

    // Excute query into temporary table and store it base on its
    // operation in relation to other fields.
    if ($operation) {
      $tables_or[] = db_query_temporary($query);
    }
    else {
      $tables_and[] = db_query_temporary($query);
    }
  }

  // Union temporary tables that are and'ed.
  $query = FALSE;
  if (!empty($tables_and)) {
    $base = array_shift($tables_and);
    $query = db_select($base, 'base')->fields('base', array('nid', 'title'));
    foreach ($tables_and as $table) {
      $query->join($table, $table, 'base.nid = ' . $table . '.nid');
    }
  }

  // Union temporary tables that are or'ed.
  $or_query = FALSE;
  if (!empty($tables_or)) {
    $base = array_shift($tables_or);
    $or_query = db_select($base, 'base')->fields('base', array('nid', 'title'));
    foreach ($tables_or as $table) {
      $or_query->union($table, 'DISTINCT');
    }
  }

  // Base on the querys created above (union the query and or querys).
  if ($query && $or_query) {
    $query->union($or_query, 'DISTINCT');
  }
  elseif (!$query && $or_query) {
    $query = $or_query;
  }

  // Get the final result.
  return $query->execute()->fetchAll();
}

/**
 * Channel filter preview. 
 */
function _ik_channel_preview_update() {
  $raw_values = array();
  if (isset($_POST['ik_preview_values'])) {
    foreach ($_POST['ik_preview_values'] as $fieldname => $values) {
      if (!empty($values)) {
        $raw_values[check_plain($fieldname)] = check_plain($values);
      }
    }
  }

  $slides = ik_channel_filter_get_slides($raw_values);

  // Theme the slides as a list for now.
  $items = array();
  foreach ($slides as $slide) {
    $items[] = $slide->title;
  }

  drupal_json_output(array(
    'slides' => $slides,
    'markup' => t('@count slides found', array('@count' => count($slides))) . theme('item_list', array('items' => $items)),
  ));
}