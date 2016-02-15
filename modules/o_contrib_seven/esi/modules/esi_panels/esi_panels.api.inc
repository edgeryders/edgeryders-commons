<?php
/**
 * @file
 * API documentation for hooks defined by ESI Panels.
 */

/**
 * Alter the URL used in an ESI include tag.
 *
 * @param string $url
 *   The URL used in the ESI include tag.
 */
function hook_esi_panels_url_alter(&$url) {
  // Add the timestamp to the URL.
  $url .= '/' . time();
}

/**
 * Translate task plugin arguments into arguments to pass to a ctools context
 * handler. For example, turn '1' into the fully-loaded node object for node 1.
 *
 * Every 'task' plugin should implement this hook. An implementation for the
 * default page manager tasks is already provided.
 */
function hook_esi_panels_context_arguments($task, $subtask = '', $args = array()) {
  if ($task == 'node_view' && $subtask == '') {
    $nid = array_shift($args);
    return node_load($nid);
  }
}
