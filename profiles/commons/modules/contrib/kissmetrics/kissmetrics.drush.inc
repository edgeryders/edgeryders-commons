<?php

/**
 * @file
 * Drush integration for KISSmetrics.
 */

/**
 * Implements hook_drush_command().
 */
function kissmetrics_drush_command() {
  $items['kissmetrics-send-logged-queries'] = array(
    'description' => dt('Sends logged queries to KISSmetrics.'),
    'aliases' => array('kissmetrics-send', 'kms'),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function kissmetrics_drush_help($command) {
  switch ($command) {
    case 'drush:kissmetrics-send-logged-queries':
      return dt('Sends logged queries to KISSmetrics.');
  }
}

/**
 * Sends logged queries to KISSmetrics.
 */
function drush_kissmetrics_send_logged_queries() {
  kissmetrics_send_logged_queries();

  drush_log(dt('Sent logged queries to KISSmetrics.'), 'success');
}
