<?php
/**
 * @file
 * edgeryders_notify.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function edgeryders_notify_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function edgeryders_notify_default_message_type() {
  $items = array();
  $items['edgeryders_notify_comment_created'] = entity_import('message_type', '{
    "name" : "edgeryders_notify_comment_created",
    "description" : "Edgeryders Notify: Comment created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "edgeryders_notify",
    "data" : {
       "token options" : { "clear" : 1 },
       "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "\u003Cp\u003E[message:field-target-comments:0:title]\u003Cbr \/\u003E\r\n\u003Csmall\u003E[message:field-target-comments:0:body]\u003C\/small\u003E\u003C\/p\u003E\r\n\r\n\u003Cp\u003E\u003Csmall\u003E\u003Cem\u003E\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022 [message:field-target-comments:0:url]\u0022\u003ERead \u0026amp; respond\u003C\/a\u003E\u003C\/em\u003E\u003C\/small\u003E\u003C\/p\u003E\r\n",
          "format" : "full_html",
          "safe_value" : "\u003Cp\u003E[message:field-target-comments:0:title]\u003Cbr \/\u003E\n\u003Csmall\u003E[message:field-target-comments:0:body]\u003C\/small\u003E\u003C\/p\u003E\n\n\u003Cp\u003E\u003Csmall\u003E\u003Cem\u003E\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022 [message:field-target-comments:0:url]\u0022\u003ERead \u0026amp; respond\u003C\/a\u003E\u003C\/em\u003E\u003C\/small\u003E\u003C\/p\u003E\n"
        }
      ]
    },
      "message_header" : { "en" : [
        {
          "value" : "\u003Cp\u003EDear [current-user:field_name_first],\u003C\/p\u003E\r\n\r\n\u003Cp\u003EBelow you find a short overview of all new posts and comments on content you follow on Edgeryders!\u003C\/p\u003E\r\n\r\n\u003Cp\u003ETo interact with the community \u003Ca href=\u0022https:\/\/edgeryders.eu\u0022\u003Elogin to our site\u003C\/a\u003E.\u003C\/p\u003E\r\n",
          "format" : "filtered_html",
          "safe_value" : "\n\u003Cp\u003EDear [current-user:field_name_first],\u003C\/p\u003E\n\u003Cp\u003EBelow you find a short overview of all new posts and comments on content you follow on Edgeryders!\u003C\/p\u003E\n\u003Cp\u003ETo interact with the community \u003Ca href=\u0022https:\/\/edgeryders.eu\u0022\u003Elogin to our site\u003C\/a\u003E.\u003C\/p\u003E\n"
        }
      ]
    },
  "message_footer" : [],
  "rdf_mapping" : []
  }');
  $items['edgeryders_notify_comment_created_no_groups'] = entity_import('message_type', '{
    "name" : "edgeryders_notify_comment_created_no_groups",
    "description" : "Edgeryders Notify: Comment created no groups",
    "argument_keys" : [],
    "argument" : [],
    "category" : "edgeryders_notify",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "\u003Cp\u003E[message:field-target-comments:0:title]\u003Cbr \/\u003E\r\n\u003Csmall\u003E[message:field-target-comments:0:body]\u003C\/small\u003E\u003C\/p\u003E\r\n\r\n\u003Cp\u003E\u003Csmall\u003E\u003Cem\u003E\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022 [message:field-target-comments:0:url]\u0022\u003ERead \u0026amp; respond\u003C\/a\u003E\u003C\/em\u003E\u003C\/small\u003E\u003C\/p\u003E\r\n",
          "format" : "full_html",
          "safe_value" : "\u003Cp\u003E[message:field-target-comments:0:title]\u003Cbr \/\u003E\n\u003Csmall\u003E[message:field-target-comments:0:body]\u003C\/small\u003E\u003C\/p\u003E\n\n\u003Cp\u003E\u003Csmall\u003E\u003Cem\u003E\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022 [message:field-target-comments:0:url]\u0022\u003ERead \u0026amp; respond\u003C\/a\u003E\u003C\/em\u003E\u003C\/small\u003E\u003C\/p\u003E\n"
        }
      ]
    },
      "message_header" : { "en" : [
        {
          "value" : "\u003Cp\u003EDear [current-user:field_name_first],\u003C\/p\u003E\r\n\r\n\u003Cp\u003EBelow you find a short overview of all new posts and comments on content you follow on Edgeryders!\u003C\/p\u003E\r\n\r\n\u003Cp\u003ETo interact with the community \u003Ca href=\u0022https:\/\/edgeryders.eu\u0022\u003Elogin to our site\u003C\/a\u003E.\u003C\/p\u003E\r\n",
          "format" : "filtered_html",
          "safe_value" : "\n\u003Cp\u003EDear [current-user:field_name_first],\u003C\/p\u003E\n\u003Cp\u003EBelow you find a short overview of all new posts and comments on content you follow on Edgeryders!\u003C\/p\u003E\n\u003Cp\u003ETo interact with the community \u003Ca href=\u0022https:\/\/edgeryders.eu\u0022\u003Elogin to our site\u003C\/a\u003E.\u003C\/p\u003E\n"
        }
      ]
    },
  "message_footer" : [],
  "rdf_mapping" : []
  }');
  $items['edgeryders_notify_node_created'] = entity_import('message_type', '{
    "name" : "edgeryders_notify_node_created",
    "description" : "The notification sent when a user creates a node.",
    "argument_keys" : [],
    "argument" : [],
    "category" : "edgeryders_notify",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "en" : [
      {
        "value" : "\u003Ch3 class=\u0022content-subsection\u0022\u003E\u003Cstrong\u003E[message:field-target-nodes:0:title_field]\u003C\/strong\u003E\u003C\/h3\u003E\r\n\r\n\u003Cp\u003E\u003Cem\u003E[message:field-target-nodes:0:created]\u003C\/em\u003E\u003C\/p\u003E\r\n\r\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E[commons-groups:in-groups-text]\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\r\n\r\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E[message:field-target-nodes:0:content-type] created by [message:field-target-nodes:0:author]\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\r\n\r\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E\u003Csmall\u003E[message:field-target-nodes:0:summary]\u003C\/small\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\r\n\r\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E\u003Cem\u003E\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022[message:field-target-nodes:0:url]\u0022\u003ERead more\u003C\/a\u003E \u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022[message:field-target-nodes:0:url]#comment-form\u0022\u003EAdd a comment\u003C\/a\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\r\n\r\n\u003Chr \/\u003E",
        "format" : "full_html",
        "safe_value" : "\u003Ch3 class=\u0022content-subsection\u0022\u003E\u003Cstrong\u003E[message:field-target-nodes:0:title_field]\u003C\/strong\u003E\u003C\/h3\u003E\n\n\u003Cp\u003E\u003Cem\u003E[message:field-target-nodes:0:created]\u003C\/em\u003E\u003C\/p\u003E\n\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E[commons-groups:in-groups-text]\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\n\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E[message:field-target-nodes:0:content-type] created by [message:field-target-nodes:0:author]\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\n\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E\u003Csmall\u003E[message:field-target-nodes:0:summary]\u003C\/small\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\n\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E\u003Cem\u003E\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022[message:field-target-nodes:0:url]\u0022\u003ERead more\u003C\/a\u003E \u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022[message:field-target-nodes:0:url]#comment-form\u0022\u003EAdd a comment\u003C\/a\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\n\n\u003Chr \/\u003E"
      }
    ]
    },
    "message_header" : { "en" : [
      {
        "value" : "\u003Cp\u003EDear [current-user:field_name_first],\u003C\/p\u003E\r\n\r\n\u003Cp\u003EBelow you find a short overview of all new posts and comments on content you follow on Edgeryders!\u003C\/p\u003E\r\n\r\n\u003Cp\u003ETo interact with the community \u003Ca href=\u0022https:\/\/edgeryders.eu\u0022\u003Elogin to our site\u003C\/a\u003E.\u003C\/p\u003E\r\n",
        "format" : "filtered_html",
        "safe_value" : "\n\u003Cp\u003EDear [current-user:field_name_first],\u003C\/p\u003E\n\u003Cp\u003EBelow you find a short overview of all new posts and comments on content you follow on Edgeryders!\u003C\/p\u003E\n\u003Cp\u003ETo interact with the community \u003Ca href=\u0022https:\/\/edgeryders.eu\u0022\u003Elogin to our site\u003C\/a\u003E.\u003C\/p\u003E\n"
      }
    ]
  },
  "message_footer" : [],
  "rdf_mapping" : []
  }');
  $items['edgeryders_notify_node_created_no_groups'] = entity_import('message_type', '{
    "name" : "edgeryders_notify_node_created_no_groups",
    "description" : "The notification sent when a user creates a node that is not in any groups",
    "argument_keys" : [],
    "argument" : [],
    "category" : "edgeryders_notify",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "en" : [
      {
        "value" : "\u003Ch3 class=\u0022content-subsection\u0022\u003E\u003Cstrong\u003E[message:field-target-nodes:0:title_field]\u003C\/strong\u003E\u003C\/h3\u003E\r\n\r\n\u003Cp\u003E\u003Cem\u003E[message:field-target-nodes:0:created]\u003C\/em\u003E\u003C\/p\u003E\r\n\r\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E[commons-groups:in-groups-text]\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\r\n\r\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E[message:field-target-nodes:0:content-type] created by [message:field-target-nodes:0:author]\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\r\n\r\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E\u003Csmall\u003E[message:field-target-nodes:0:summary]\u003C\/small\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\r\n\r\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E\u003Cem\u003E\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022[message:field-target-nodes:0:url]\u0022\u003ERead more\u003C\/a\u003E \u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022[message:field-target-nodes:0:url]#comment-form\u0022\u003EAdd a comment\u003C\/a\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\r\n\r\n\u003Chr \/\u003E",
        "format" : "full_html",
        "safe_value" : "\u003Ch3 class=\u0022content-subsection\u0022\u003E\u003Cstrong\u003E[message:field-target-nodes:0:title_field]\u003C\/strong\u003E\u003C\/h3\u003E\n\n\u003Cp\u003E\u003Cem\u003E[message:field-target-nodes:0:created]\u003C\/em\u003E\u003C\/p\u003E\n\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E[commons-groups:in-groups-text]\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\n\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E[message:field-target-nodes:0:content-type] created by [message:field-target-nodes:0:author]\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\n\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E\u003Csmall\u003E[message:field-target-nodes:0:summary]\u003C\/small\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\n\n\u003Cp\u003E\u003Cem\u003E\u003Cem\u003E\u003Cem\u003E\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022[message:field-target-nodes:0:url]\u0022\u003ERead more\u003C\/a\u003E \u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp;\u0026nbsp; \u003Ca href=\u0022[message:field-target-nodes:0:url]#comment-form\u0022\u003EAdd a comment\u003C\/a\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/em\u003E\u003C\/p\u003E\n\n\u003Chr \/\u003E"
      }
    ]
    },
    "message_header" : { "en" : [
      {
        "value" : "\u003Cp\u003EDear [current-user:field_name_first],\u003C\/p\u003E\r\n\r\n\u003Cp\u003EBelow you find a short overview of all new posts and comments on content you follow on Edgeryders!\u003C\/p\u003E\r\n\r\n\u003Cp\u003ETo interact with the community \u003Ca href=\u0022https:\/\/edgeryders.eu\u0022\u003Elogin to our site\u003C\/a\u003E.\u003C\/p\u003E\r\n",
        "format" : "filtered_html",
        "safe_value" : "\n\u003Cp\u003EDear [current-user:field_name_first],\u003C\/p\u003E\n\u003Cp\u003EBelow you find a short overview of all new posts and comments on content you follow on Edgeryders!\u003C\/p\u003E\n\u003Cp\u003ETo interact with the community \u003Ca href=\u0022https:\/\/edgeryders.eu\u0022\u003Elogin to our site\u003C\/a\u003E.\u003C\/p\u003E\n"
      }
    ]
  },
  "message_footer" : [],
  "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_message_type_category().
 */
function edgeryders_notify_default_message_type_category() {
  $items = array();
  $items['edgeryders_notify'] = entity_import('message_type_category', '{
    "category" : "edgeryders_notify",
    "description" : "Edgeryders Notify",
    "language" : "und",
    "rdf_mapping" : []
  }');
  return $items;
}
