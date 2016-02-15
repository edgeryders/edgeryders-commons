<?php

/**
 * @file
 * Declares hooks on behalf of filter.module.
 */

/**
 * Implements hook_library() on behalf of filter.module.
 *
 * Filter does not register its own assets as libraries, so we do so here.
 */
function filter_library() {
  $path = drupal_get_path('module', 'editor');

  $libraries['filter'] = array(
    'version' => VERSION,
    'js' => array(
      $path . '/js/filter/filter.js' => array(),
    ),
    'css' => array(
      $path . '/css/filter/filter.css' => array(),
    ),
    'dependencies' => array(
      array('system', 'drupal.ajax'),
    ),
  );

  $libraries['filter.filtered_html.admin'] = array(
    'version' => VERSION,
    'js' => array(
      $path . '/js/filter/filter.filtered_html.admin.js' => array('group' => JS_THEME, 'aggregate' => FALSE,),
    ),
    'dependencies' => array(
      array('filter', 'filter.admin'),
    ),
  );

  // Filter admin is put in the JS_THEME group to force it after tabledrag.js.
  $libraries['filter.admin'] = array(
    'version' => VERSION,
    'js' => array(
      $path . '/js/filter/filter.admin.js' => array('group' => JS_THEME, 'aggregate' => FALSE,),
    ),
    'css' => array(
      $path . '/css/filter/filter.css' => array(),
    ),
  );

  return $libraries;
}

/**
 * Implements hook_js_alter() on behalf of filter.module.
 *
 * Replace Filter's JS files with more fully-featured alternatives.
 */
function filter_js_alter(&$javascript) {
  // Replace filter.js.
  $path = drupal_get_path('module', 'filter') . '/filter.js';

  if (isset($javascript[$path])) {
    $javascript[$path]['data'] = drupal_get_path('module', 'editor') . '/js/filter/filter.js';
    $javascript[$path]['type'] = 'file';
  }

  // Replace filter.admin.js.
  $path = drupal_get_path('module', 'filter') . '/filter.admin.js';

  if (isset($javascript[$path])) {
    $javascript[$path]['data'] = drupal_get_path('module', 'editor') . '/js/filter/filter.admin.js';
    $javascript[$path]['type'] = 'file';
  }
}

/**
 * Implements hook_css_alter() on behalf of filter.module.
 *
 * Replace Filter's CSS files with more fully-featured alternatives.
 */
function filter_css_alter(&$css) {
  // Replace filter.css.
  $path = drupal_get_path('module', 'filter') . '/filter.css';

  if (isset($javascript[$path])) {
    $css[$path]['data'] = drupal_get_path('module', 'editor') . '/css/filter.css';
    $css[$path]['type'] = 'file';
  }
}
