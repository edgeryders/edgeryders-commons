<?php
/**
 * ESI prepare, render and flush hooks.
 */


/**
 * Prepare an ESI panels pane for rendering.
 * Defined in hook_esi_component_info().
 *
 * @see esi_panels_esi_component_info().
 */
function esi_panels__esi_pane_prepare($component_key) {
  // The URL pattern approximately corresponds to the function arguments:
  // 1. A component key, which is a colon-separated set of pieces of
  //    information: the theme name, the display ID and the pane ID.
  // 2. An optional task name.
  // 3. A variable number of arguments to the display.
  // 4. The original URL.

  // Use the parameters to reconstruct:
  // - Display
  // - Pane
  // - Contexts
  list($theme, $did, $pid) = explode(':', $component_key);

  // Check for optional args.
  $args = array_slice(func_get_args(), 1);
  // The URL is always the last argument.
  $url = array_pop($args);

  // Task-name and context identifier are next in the URL, if context is used
  // by the pane.
  $display = panels_load_display($did);
  $pane = $display->content[$pid];

  $pane->esi_meta = array(
    'display_contexts' => array(),
  );

  // If the pane has context, attempt to load the context from the display
  // data.
  if (!empty($pane->configuration['context'])) {
    // The task name is always the first of the optional arguments.
    $task_name = array_shift($args);
    list($task, $subtask) = _esi_panels__get_task_identifier($task_name);

    $pane->esi_meta['task'] = $task;
    $pane->esi_meta['subtask'] = $subtask;
  }

  $pane->esi_meta += array(
    'display' => $display,
    'theme' => $theme,
    'display_args' => $args,
    'url' => base64_decode($url),
  );

  esi_panels__restore_context($pane);

  return $pane;
}

/**
 * Restore the original context that was used when a block was displayed.
 */
function esi_panels__restore_context(&$pane) {
  // Restore the theme.
  global $theme;
  $theme = $pane->esi_meta['theme'];

  $_GET['q'] = $pane->esi_meta['url'];
  $_SERVER['REQUEST_URI'] = $pane->esi_meta['url'];
  drupal_static_reset('drupal_get_destination');

  // Load up contexts. Owch.
  if (!empty($pane->configuration['context'])) {
    ctools_include('context');
    ctools_include('context-task-handler');

    // Load the task/subtask plugins.
    $task = page_manager_get_task($pane->esi_meta['task']);
    $subtask = (empty($pane->esi_meta['subtask'])) ? '' : page_manager_get_subtask($task, $pane->esi_meta['subtask']);

    // Use the task-name and the original display arguments to generate the
    // arguments that were passed to the context constructor.
    // E.g. The node_view task takes "1" and returns node_load(1).
    $base_context_arguments = esi_panels__get_base_context_arguments($pane->esi_meta['task'], $pane->esi_meta['subtask'], $pane->esi_meta['display_args']);
    $base_contexts = ctools_context_handler_get_task_contexts($task, $subtask, $base_context_arguments);

    // The base contexts are then typically used in the task plugin as render
    // information:
    // $output = ctools_context_handler_render($task, '', $contexts, array($node->nid));

    // Other contexts are usually loaded by the panel_context task_handler
    // plugin in the render function panels_panel_context_render():
    // $contexts = ctools_context_handler_get_handler_contexts($base_contexts, $handler);

    // Load the relevant handler
    $handlers = page_manager_load_sorted_handlers($task, $subtask ? $subtask['name'] : '', TRUE);
    $id = ctools_context_handler_get_render_handler($task, $subtask, $handlers, $base_contexts, $pane->esi_meta['display_args']);
    if ($id) {
      $handler = $handlers[$id];
      $contexts = ctools_context_handler_get_handler_contexts($base_contexts, $handler);
    }

    $pane->esi_meta['display_contexts'] = $contexts;
  }
}

/**
 * Render the HTML for a single block.
 * Defined in hook_esi_component_info().
 *
 * @see esi_panels_esi_component_info()
 */
function esi_panels__esi_pane_render($pane) {
  // Much of this is from the "standard" display renderer:
  // see panels_renderer_standard::prepare().
  ctools_include('content');
  $content_type = ctools_get_content_type($pane->type);

  // Check access control; if the user doesn't have access, simply return an
  // empty string.
  // ctools_include('context');
  // if ($pane->access && !empty($pane->display_contexts) && ctools_access($pane->access, $pane->display_contexts)) {
  //   return '';
  // }
  $content = ctools_content_render($pane->type, $pane->subtype, $pane->configuration, array(), $pane->esi_meta['display_args'], $pane->esi_meta['display_contexts']);

  if (empty($content)) {
    return '';
  }

  foreach (module_implements('panels_pane_content_alter') as $module) {
    $function = $module . '_panels_pane_content_alter';
    $function($content, $pane, $pane->esi_meta['display_args'], $pane->esi_meta['display_contexts']);
  }

  esi_panels_set_http_headers($pane);

  // Pass long the css_id that is usually available.
  if (!empty($pane->css['css_id'])) {
    $content->css_id = check_plain($pane->css['css_id']);
  }

  // Pass long the css_class that is usually available.
  if (!empty($pane->css['css_class'])) {
    $content->css_class = check_plain($pane->css['css_class']);
  }

  if (!empty($content->content)) {
    if (!empty($pane->style['style'])) {
      $style = panels_get_style($pane->style['style']);

      if (isset($style) && isset($style['render pane'])) {
        $output = theme($style['render pane'], array('content' => $content, 'pane' => $pane, 'display' => $this->display, 'style' => $style, 'settings' => $pane->style['settings']));

        // This could be null if no theme function existed.
        if (isset($output)) {
          return $output;
        }
      }
    }

    // Fallback.
    return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $pane->esi_meta['display']));
  }
}

/**
 * Set HTTP headers to control caching of ESI fragments.
 */
function esi_panels_set_http_headers($pane) {
  $ttl = $pane->cache['settings']['esi_ttl'];

  $headers = array();
  $headers[] = array('Cache-Control', "private, max-age=$ttl");

  // Allow other modules to alter the headers.
  // @see hook_esi_block_cache_headers_alter().
  drupal_alter('esi_panels_cache_headers', $headers);

  foreach ($headers as $header) {
    drupal_add_http_header($header[0], $header[1]);
  }
}

/**
 * Flush the ESI block caches.
 * Defined in hook_esi_component_info().
 *
 * @see esi_panels_esi_component_info()
 */
function esi_panels__esi_pane_flush() {
  // @TODO.
}
