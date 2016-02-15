<?php

/**
 * @file
 * Views Cache Bully include.
 */

/**
 * Returns flat array of views cache bully exempt views.
 *
 * @param object $view
 *   An initialized view object.
 *
 * @return bool
 *   TRUE if view should be exempted from bullying.
 */
function views_cache_bully_view_is_exempt($view) {
  $exemptions = array_filter(variable_get('views_cache_bully_exemptions', array()));

  // If administrative settings is enabled, exempt views with exposed filters.
  if (variable_get('views_cache_bully_exempt_exposed', TRUE)) {
    if (empty($view->inited)) {
      watchdog('views_cache_bully', 'Error, Views Cache Bully could not evaluate view exemption for view @view_name, view was not initialized.', array('@view_name' => $view->name));
    }
    elseif ($view->display[$view->current_display]->handler->uses_exposed()) {
      return TRUE;
    }
  }

  // If administrative settings is enabled, exempt views bulk operations views.
  if (isset($view->display[$view->current_display]->handler->handlers['field'])) {
    $fields = $view->display[$view->current_display]->handler->handlers['field'];
    if (array_key_exists('views_bulk_operations', $fields) && variable_get('views_cache_bully_exempt_vbo', TRUE)) {
      return TRUE;
    }
  }

  // If view is in exemption list, return TRUE.
  if (in_array($view->name, $exemptions)) {
    return TRUE;
  }

  // If view has tag in exemption list, return TRUE.
  $tag_exemptions = array_filter(variable_get('views_cache_bully_tag_exemptions', array()));
  $tags = drupal_explode_tags($view->tag);
  $matches = array_intersect($tag_exemptions, $tags);
  return !empty($matches);
}
