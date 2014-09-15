<?php
/**
 * @file
 * commons_tasks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commons_tasks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function commons_tasks_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function commons_tasks_node_info() {
  $items = array(
    'task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => 'Start a collaboration by listing what has to be done.',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
