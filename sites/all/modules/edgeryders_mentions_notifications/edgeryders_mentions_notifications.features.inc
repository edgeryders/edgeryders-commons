<?php
/**
 * @file
 * edgeryders_mentions_notifications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function edgeryders_mentions_notifications_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function edgeryders_mentions_notifications_default_message_type() {
  $items = array();
  $items['edgeryders_mentions_comment'] = entity_import('message_type', '{
    "name" : "edgeryders_mentions_comment",
    "description" : "Edgeryders mentions: Comment",
    "argument_keys" : [],
    "argument" : [],
    "category" : "commons_notify",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "und",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "New comment on [message:field-target-nodes:0:title_field]",
          "format" : "filtered_html",
          "safe_value" : "New comment on [message:field-target-nodes:0:title_field]"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['edgeryders_mentions_node'] = entity_import('message_type', '{
    "name" : "edgeryders_mentions_node",
    "description" : "Edgeryders mentions: Node",
    "argument_keys" : [],
    "argument" : [],
    "category" : "commons_notify",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "und",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]",
          "format" : "filtered_html",
          "safe_value" : "New [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
