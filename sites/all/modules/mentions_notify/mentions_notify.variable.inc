<?php

/**
 * @file
 * Variable file for Commons tasks settings.
 */

/**
 * Implements hook_variable_group_info()
 */
function mentions_notify_variable_group_info() {
  $groups = array();
  $groups['mentions_notify'] = array(
    'title' => t('Mentions Notify'),
    'description' => t("Configuration options for e-mail notifications for mentions, via the mentions_notifications module."),
  );
  return $groups;
}

/**
 * Implements hook_variable_info().
 */
function mentions_notify_variable_info($options) {
  $variables = array();
  $variables['mentions_notify_check_access'] = array(
    'type' => 'boolean',
    'title' => t('Check entity access'),
    'description' => t('Check users mentioned have access to the entity (node, comment) before sending them notification e-mails.', array(), $options),
    'required' => FALSE,
    'default' => FALSE,
    'group' => 'mentions_notify',
  );
  $variables['mentions_notify_msg_subject'] = array(
    'type' => 'string',
    'title' => t('Mentions notification e-mail subject'),
    'description' => t('Mentions notification e-mail subject', array(), $options),
    'required' => TRUE,
    'default' => '[site:name]: You have been mentioned',
    'group' => 'mentions_notify',
  );
  $variables['mentions_notify_msg_body'] = array(
    'type' => 'text',
    'title' => t('Mentions notification e-mail body'),
    'description' => t("You can use the following tokens:<br/>" . 
        "[site:*] Information about the website; see <a href=\"https://www.drupal.org/node/390482#token-site\">documentation</a>.<br/>" .
        "[user:*] Information about the mentioned user; see <a href=\"https://www.drupal.org/node/390482#drupal7tokenslist-token-user\">documentation</a>.<br/>" .
        "[mentions:mid] The unique ID of the mention.<br/>" .
        "[mentions:source-type] The type of content containing the mention.<br/>" .
        "[mentions:source-title] The title of the content containing the mention.<br/>" .
        "[mentions:source-path] The URL path of the content containing the mention.<br/>" .
        "[mentions:author] Username of the mention's author.<br/>" .
        "[mentions:author:*] Information about the mention's author (chained token of type user).<br/>" .
        "[mentions:entity:*] Information about the entity where the mention ocurred (chained token of the respective entity type, for example node).<br/>" .
        "[mentions:created] Long-format date and time when the mention was created<br/>" .
        "[mentions:created:*] More information about when the mention was created (chained token of type date).<br/>" .
        "[mentions:changed] Long-format date and time when the mention was last updated<br/>" .
        "[mentions:changed:*] More information about when the mention was last updated (chained token of type date)." ,
      array(), $options),
    'required' => TRUE,
    'default callback' => 'mentions_notify_get_msg_body_default',
    'group' => 'mentions_notify',
  );
  return $variables;
}

/**
 * Return the default value for the e-mail body text in a notification about being mentioned.
 */
function mentions_notify_get_msg_body_default() {
  $text = 
    "Dear [user:name],\n\n" .
    "you got mentioned by [mentions:author] on [mentions:changed] in [mentions:source-type] " .
    "\"[mentions:source-title]\"\n\n" .
    "You can view the mention and react to it here:\n" .
    "[site:url]/[mentions:source-path]\n\n" .
    "best regards,\n" .
    "[site:name] team";

  return $text;
}

