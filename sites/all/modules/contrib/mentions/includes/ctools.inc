<?php

/**
 * @file
 * Chaos tools module integration.
 */

/**
 * Implements hook_ctools_plugin_type().
 *
 * @return mixed
 */
function mentions_ctools_plugin_type() {
  $plugins['mention_type'] = array();

  return $plugins;
}

/**
 * Implements hook_ctools_plugin_directory().
 *
 * @param $owner
 * @param $plugin_type
 *
 * @return string
 */
function mentions_ctools_plugin_directory($owner, $plugin_type) {
  if ($owner == 'mentions' && !empty($plugin_type)) {
    return "plugins/{$plugin_type}";
  }

  return NULL;
}
