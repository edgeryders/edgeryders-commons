<?php
/**
 * @file
 * views_accelerator.views.inc
 *
 * Plugins for Views.
 */

/**
 * Implements hook_views_plugins().
 */
function views_accelerator_views_plugins() {
  $plugins = array(
    'cache' => array(
      'none-accelerated' => array(
        'title' => t('None. Post-execution optimized by Views Accelerator. Detailed stats, if requested.'),
        'help' => t('Accelerates post-execution of Views field functions.'),
        'handler' => 'views_plugin_cache_none_accelerated',
        'uses options' => FALSE,
        'help topic' => 'views accelerator',
      ),
      'none-debug' => array(
        'title' => t('None. Displays detailed performance stats, if requested.'),
        'help' => t('Does not accelerate, but shows Views performance statistics for before/afater comparisons.'),
        'handler' => 'views_plugin_cache_none_debug',
        'uses options' => FALSE,
        'help topic' => 'views accelerator',
      ),
    ),
  );
  return $plugins;
}