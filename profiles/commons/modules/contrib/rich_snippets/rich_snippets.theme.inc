<?php

/**
 * @file
 * Theme hook implementations.
 */

/**
 * Returns HTML for result dates.
 *
 * @param $variables
 *   An associative array containing:
 *   - date: The unix timestamp of the date the result was created.
 *
 * @ingroup themeable
 */
function theme_rich_snippets_date($variables) {
  $date = format_date($variables['date'], 'rich_snippets_published_date');
  return '<span class="search-result-date">' . check_plain($date) . ' –</span>';
}
