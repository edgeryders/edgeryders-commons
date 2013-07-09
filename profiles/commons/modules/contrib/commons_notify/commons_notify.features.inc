<?php
/**
 * @file
 * commons_notify.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commons_notify_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function commons_notify_default_message_type() {
  $items = array();
  $items['commons_notify_comment_created'] = entity_import('message_type', '{
    "name" : "commons_notify_comment_created",
    "description" : "Commons Notify: Comment created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "commons_notify",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "Edgeryders: New comment \\u0022[message:field-target-nodes:0:title]\\u0022",
          "format" : "source",
          "safe_value" : "Edgeryders: New comment \\u0022[message:field-target-nodes:0:title]\\u0022"
        },
        {
          "value" : "Hi [message:user:name],\\r\\n\\r\\n[message:field-target-comments:0:author] commented [commons-groups:in-groups-text]\\r\\non [message:field-target-nodes:0:title]:\\r\\n\\r\\n\\u0022[message:field-target-comments:0:title]\\u0022\\r\\n[message:field-target-comments:0:body]\\r\\n\\r\\n([message:field-target-comments:0:created])\\r\\n\\r\\nRead \\u0026 respond: [message:field-target-comments:0:url]\\r\\n\\r\\n\\r\\n---------------\\r\\nWHY DO YOU GET THIS? You received this e-mail because you are subscribed to notifications on edgeryders.eu. You change your notifications at [site:url]user\\/[message:user:uid]\\/notification-settings , or learn more about notifications at [site:url]edgeryders-dev\\/user-manual\\r\\n\\r\\nIMPRINT Edgeryders, company #8506384, registered in England and Wales, UK. Reg. office: The Meridian, Copthall House, 4 Station Square, Coventry CV1 2FL, UK. User content in this e-mail CC-BY 3.0 by [message:field-target-comments:0:author] ([message:field-target-comments:0:author:url]).",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHi [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comments:0:author] commented [commons-groups:in-groups-text]\\u003Cbr \\/\\u003E\\non [message:field-target-nodes:0:title]:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u0026quot;[message:field-target-comments:0:title]\\u0026quot;\\u003Cbr \\/\\u003E\\n[message:field-target-comments:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E([message:field-target-comments:0:created])\\u003C\\/p\\u003E\\n\\u003Cp\\u003ERead \\u0026amp; respond: [message:field-target-comments:0:url]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E---------------\\u003Cbr \\/\\u003E\\nWHY DO YOU GET THIS? You received this e-mail because you are subscribed to notifications on edgeryders.eu. You change your notifications at [site:url]user\\/[message:user:uid]\\/notification-settings , or learn more about notifications at [site:url]edgeryders-dev\\/user-manual\\u003C\\/p\\u003E\\n\\u003Cp\\u003EIMPRINT Edgeryders, company #8506384, registered in England and Wales, UK. Reg. office: The Meridian, Copthall House, 4 Station Square, Coventry CV1 2FL, UK. User content in this e-mail CC-BY 3.0 by [message:field-target-comments:0:author] ([message:field-target-comments:0:author:url]).\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['commons_notify_node_created'] = entity_import('message_type', '{
    "name" : "commons_notify_node_created",
    "description" : "Commons Notify: Node created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "commons_notify",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "Edgeryders: New [message:field-target-nodes:0:content-type]: \\u0022[message:field-target-nodes:0:title]\\u0022",
          "format" : "source",
          "safe_value" : "Edgeryders: New [message:field-target-nodes:0:content-type]: \\u0022[message:field-target-nodes:0:title]\\u0022"
        },
        {
          "value" : "Hi [message:user:name],\\r\\n\\r\\n[message:field-target-nodes:0:author] created a new [message:field-target-nodes:0:content-type] [commons-groups:in-groups-text]:\\r\\n\\r\\n\\u0022[message:field-target-nodes:0:title]\\u0022\\r\\n[message:field-target-nodes:0:body]\\r\\n\\r\\n([message:field-target-nodes:0:created])\\r\\n\\r\\n\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nAdd a comment at [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\n---------------\\r\\nWHY DO YOU GET THIS? You received this e-mail because you are subscribed to notifications on edgeryders.eu. You change your notifications at [site:url]user\\/[message:user:uid]\\/notification-settings , or learn more about notifications at [site:url]edgeryders-dev\\/user-manual\\r\\n\\r\\nIMPRINT Edgeryders, company #8506384, registered in England and Wales, UK. Reg. office: The Meridian, Copthall House, 4 Station Square, Coventry CV1 2FL, UK. User content in this e-mail CC-BY 3.0 by [message:field-target-nodes:0:author] ([message:field-target-nodes:0:author:url]).",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHi [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] created a new [message:field-target-nodes:0:content-type] [commons-groups:in-groups-text]:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u0026quot;[message:field-target-nodes:0:title]\\u0026quot;\\u003Cbr \\/\\u003E\\n[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E([message:field-target-nodes:0:created])\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nAdd a comment at [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003E---------------\\u003Cbr \\/\\u003E\\nWHY DO YOU GET THIS? You received this e-mail because you are subscribed to notifications on edgeryders.eu. You change your notifications at [site:url]user\\/[message:user:uid]\\/notification-settings , or learn more about notifications at [site:url]edgeryders-dev\\/user-manual\\u003C\\/p\\u003E\\n\\u003Cp\\u003EIMPRINT Edgeryders, company #8506384, registered in England and Wales, UK. Reg. office: The Meridian, Copthall House, 4 Station Square, Coventry CV1 2FL, UK. User content in this e-mail CC-BY 3.0 by [message:field-target-nodes:0:author] ([message:field-target-nodes:0:author:url]).\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['commons_notify_node_created_no_groups'] = entity_import('message_type', '{
    "name" : "commons_notify_node_created_no_groups",
    "description" : "Commons Notify: Groupless node created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "commons_notify",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "Edgeryders: New [message:field-target-nodes:0:content-type]: \\u0022[message:field-target-nodes:0:title]\\u0022",
          "format" : "source",
          "safe_value" : "Edgeryders: New [message:field-target-nodes:0:content-type]: \\u0022[message:field-target-nodes:0:title]\\u0022"
        },
        {
          "value" : "Hi [message:user:name],\\r\\n\\r\\n[message:field-target-nodes:0:author] created a new [message:field-target-nodes:0:content-type] [commons-groups:in-groups-text]:\\r\\n\\r\\n\\u0022[message:field-target-nodes:0:title]\\u0022\\r\\n[message:field-target-nodes:0:body]\\r\\n\\r\\n([message:field-target-nodes:0:created])\\r\\n\\r\\n\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nAdd a comment at [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\n---------------\\r\\nWHY DO YOU GET THIS? You received this e-mail because you are subscribed to notifications on edgeryders.eu. You change your notifications at [site:url]user\\/[message:user:uid]\\/notification-settings , or learn more about notifications at [site:url]edgeryders-dev\\/user-manual\\r\\n\\r\\nIMPRINT Edgeryders, company #8506384, registered in England and Wales, UK. Reg. office: The Meridian, Copthall House, 4 Station Square, Coventry CV1 2FL, UK. User content in this e-mail CC-BY 3.0 by [message:field-target-nodes:0:author] ([message:field-target-nodes:0:author:url]).",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EHi [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] created a new [message:field-target-nodes:0:content-type] [commons-groups:in-groups-text]:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u0026quot;[message:field-target-nodes:0:title]\\u0026quot;\\u003Cbr \\/\\u003E\\n[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E([message:field-target-nodes:0:created])\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nAdd a comment at [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003E---------------\\u003Cbr \\/\\u003E\\nWHY DO YOU GET THIS? You received this e-mail because you are subscribed to notifications on edgeryders.eu. You change your notifications at [site:url]user\\/[message:user:uid]\\/notification-settings , or learn more about notifications at [site:url]edgeryders-dev\\/user-manual\\u003C\\/p\\u003E\\n\\u003Cp\\u003EIMPRINT Edgeryders, company #8506384, registered in England and Wales, UK. Reg. office: The Meridian, Copthall House, 4 Station Square, Coventry CV1 2FL, UK. User content in this e-mail CC-BY 3.0 by [message:field-target-nodes:0:author] ([message:field-target-nodes:0:author:url]).\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_message_type_category().
 */
function commons_notify_default_message_type_category() {
  $items = array();
  $items['commons_notify'] = entity_import('message_type_category', '{
    "category" : "commons_notify",
    "description" : "Commons Notify",
    "language" : "und",
    "rdf_mapping" : []
  }');
  return $items;
}
