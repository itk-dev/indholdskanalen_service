<?php
/**
 * @file
 * video_presets.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function video_presets_default_rules_configuration() {
  $items = array();
  $items['rules_video_conversion_success'] = entity_import('rules_config', '{ "rules_video_conversion_success" : {
      "LABEL" : "Video Conversion Success",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "video" ],
      "ON" : { "video_success" : [] },
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "node:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "entity_save" : { "data" : [ "entity-fetched" ] } }
      ]
    }
  }');
  return $items;
}
