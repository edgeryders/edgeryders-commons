<?php
/**
 * @file
 * API documentation for hooks defined by ESI Block.
 */

/**
 * Alter the URL used in an ESI include tag.
 *
 * @param String $url
 * The URL used in the ESI include tag.
 */
function hook_esi_block_url_alter(&$url) {
  // Add the timestamp to the URL.
  $url .= '/' . time();
}

/**
 * Alter the parameters of $block before having the context restored by
 * esi_block__restore_context().
 *
 * @param Object $block
 * A populated block object.
 */
function hook_esi_block_context_alter(&$block) {
  // Prevent all caching.
  $block->cache = DRUPAL_NO_CACHE;
}

/**
 * Alter the headers used when delivering the ESI block.
 *
 * @param Array $headers
 * Each header is an array where the first value is the header name, and the
 * second value is the header's value.
 */
function hook_esi_block_cache_headers_alter(&$headers) {
  // Add a header to show where the ESI is generated.
  $headers[] = array('X-BLOCK', 'TRUE');
}

