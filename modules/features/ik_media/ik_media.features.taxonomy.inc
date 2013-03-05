<?php
/**
 * @file
 * ik_media.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ik_media_taxonomy_default_vocabularies() {
  return array(
    'media_folders' => array(
      'name' => 'Media Folders',
      'machine_name' => 'media_folders',
      'description' => 'Use media folders to organize your media',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-8',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
