<?php
/**
 * @file
 * ESI handlers for ESI Block.
 */

/**
 * Prepare an ESI block for rendering.
 * Defined in hook_esi_component_info().
 *
 * @see esi_block_esi_component_info().
 */
function esi_block__esi_block_prepare($component_key) {
  list($theme, $region, $module, $delta) = explode(':', $component_key);

  $block = block_load($module, $delta);
  // Validate that the module/delta combination is valid.
  if (empty($block->esi_enabled)) {
    return FALSE;
  }

  $block->theme = $theme;
  $block->region = $region;

  // Check for optional arguments (page, user/role cache control).
  $args = array_slice(func_get_args(), 1);
  if (count($args)) {
    // Check for user/role contexts.
    if (preg_match('/CACHE=(USER|ROLE)/', $args[count($args)-1], $matches)) {
      $block->esi_cache_context = $matches[1];
      array_pop($args);
    }
    // Check for a page context.
    if (count($args) && $page = base64_decode($args[0])) {
      $block->esi_page_context = $page;
    }
  }

  // Allow other modules to alter the context information here.
  // @see hook_esi_block_context_alter().
  drupal_alter('esi_block_context', $block);

  // Restore the original context.
  esi_block__restore_context($block);

  return $block;
}

/**
 * Restore the original context that was used when a block was displayed.
 */
function esi_block__restore_context($block) {
  // Restore the theme.
  global $theme;
  $theme = $block->theme;

  // Restore the page context.
  if (!empty($block->esi_page_context)) {
    $_SERVER['REQUEST_URI'] = $block->esi_page_context;
    $_GET['q'] = $block->esi_page_context;
    drupal_static_reset('drupal_get_destination');
  }
}

/**
 * Render the HTML for a single block.
 * Defined in hook_esi_component_info().
 *
 * @see esi_block_esi_component_info()
 */
function esi_block__esi_block_render($block) {
  $build = array();

  // Reproduce functionality of _block_render_blocks().
  $array = module_invoke($block->module, 'block_view', $block->delta);

  // Allow modules to modify the block before it is viewed, via either
  // hook_block_view_alter() or hook_block_view_MODULE_DELTA_alter().
  drupal_alter(array('block_view', "block_view_{$block->module}_{$block->delta}"), $array, $block);

  if (isset($array) && is_array($array)) {
    foreach ($array as $k => $v) {
      $block->$k = $v;
    }
  }

  if (isset($block->content) && $block->content) {
    // Normalize to the drupal_render() structure.
    if (is_string($block->content)) {
      $block->content = array('#markup' => $block->content);
    }
    // Override default block title if a custom display title is present.
    if ($block->title) {
      // Check plain here to allow module generated titles to keep any
      // markup.
      $block->subject = $block->title == '<none>' ? '' : check_plain($block->title);
    }
    if (!isset($block->subject)) {
      $block->subject = '';
    }

    // Reproduce functionality of _block_get_renderable_array().
    $key = "{$block->module}_{$block->delta}";

    $build[$key] = $block->content;
    unset($block->content);
    if ($key != 'system_main' && $key != 'system_help') {
      $build[$key]['#contextual_links']['block'] = array('admin/structure/block/manage', array($block->module, $block->delta));
    }
    $build[$key] += array(
      '#block' => $block,
      // @TODO: is weight really an issue here?
      // '#weight' => ++$weight,
    );
    $build[$key]['#theme_wrappers'][] ='block';
  }

  esi_block_set_http_headers($block);

  return $build;
}

/**
 * Set HTTP headers to control caching of ESI fragments.
 */
function esi_block_set_http_headers($block) {
  // Nginx follows rfc2616 section 14.9.1 correctly and will not cache if
  // header is set to private.
  // The example Varnish VCL does not follow the RFC, and for ajax private
  // should be used.

  // $user_cache_control_header = variable_get('esi_mode', ESI_MODE) == ESI__CONFIG_SSI ? 'public' : 'private';
  $user_cache_control_header = 'private';
  $ttl = $block->esi_ttl;

  $headers = array();
  if ($block->cache == DRUPAL_NO_CACHE) {
    $headers[] = array('Cache-Control', 'must-revalidate, max-age=0');
  }
  elseif ($block->cache & DRUPAL_CACHE_PER_ROLE || $block->cache & DRUPAL_CACHE_PER_USER) {
    $headers[] = array('Cache-Control', "$user_cache_control_header, max-age=$ttl");
    $headers[] = array('X-BLOCK-CACHE', ($block->cache & DRUPAL_CACHE_PER_USER ? 'USER' : 'ROLE'));
  }
  else {
    $headers[] = array('Cache-Control', "public, max-age=$ttl");
  }

  // Allow other modules to alter the headers.
  // @see hook_esi_block_cache_headers_alter().
  drupal_alter('esi_block_cache_headers', $headers);

  foreach ($headers as $header) {
    drupal_add_http_header($header[0], $header[1]);
  }
}

/**
 * Flush the ESI block caches.
 * Defined in hook_esi_component_info().
 *
 * @see esi_block_esi_component_info()
 */
function esi_block__esi_block_flush() {
  // @TODO.

}
