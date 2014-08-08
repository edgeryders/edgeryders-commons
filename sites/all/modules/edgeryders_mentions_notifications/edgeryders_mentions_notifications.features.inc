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
    "language" : "en",
    "arguments" : null,
    "message_text" : {
      "en" : [
        {
          "value" : "[Edgeryders] You have been mentioned.\\r\\n",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[Edgeryders] You have been mentioned.\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hi [message:user:name],\\r\\n\\r\\nYou have been mentioned by \\u0022[message:field-target-nodes:0:author]\\u0022 on \\u0022[message:field-target-nodes:0:title_field]\\u0022.\\r\\n\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nAdd a comment at [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\nChange email notifications at [site:url]user\\/[message:user:uid]\\/notification-settings\\r\\n\\r\\n--\\r\\n[site:name]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHi [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003EYou have been mentioned by \\u0026quot;[message:field-target-nodes:0:author]\\u0026quot; on \\u0026quot;[message:field-target-nodes:0:title_field]\\u0026quot;.\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nAdd a comment at [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003EChange email notifications at [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/p\\u003E\\n\\u003Cp\\u003E--\\u003Cbr \\/\\u003E\\n[site:name]\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "New mentions\\n",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ENew mentions\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Mentions body",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EMentions body\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
