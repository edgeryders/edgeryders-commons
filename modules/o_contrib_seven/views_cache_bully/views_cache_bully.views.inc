<?php
/**
 * @file
 * Alters views cache plugins.
 */

/**
 * Implements hook_views_plugins_alter().
 */
function views_cache_bully_views_plugins_alter(&$plugins) {
  $plugins['cache']['none']['title'] = t('Views Cache Bully');
}
