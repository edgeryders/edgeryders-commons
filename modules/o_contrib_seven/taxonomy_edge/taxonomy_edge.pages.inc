<?php
/**
 * @file
 * Page callbacks for Taxonomy Edge.
 */

/**
 * Menu callback; displays all nodes associated with a term.
 *
 * @param object $term
 *   The taxonomy term.
 *
 * @return string
 *   The page content.
 */
function taxonomy_edge_term_page($term, $depth = '0') {
  $real_depth = $depth;
  if ($depth === 'all') {
    $real_depth = taxonomy_edge_get_max_depth($term->vid);
  }
  elseif (!is_numeric($depth)) {
    $real_depth = 0;
  }

  // Assign the term name as the page title.
  drupal_set_title($term->name);

  // Build breadcrumb based on the hierarchy of the term.
  $current = (object) array(
    'tid' => $term->tid,
  );
  // @todo This overrides any other possible breadcrumb and is a pure hard-coded
  //   presumption. Make this behavior configurable per vocabulary or term.
  $breadcrumb = array();
  while ($parents = taxonomy_get_parents($current->tid)) {
    $current = array_shift($parents);
    $breadcrumb[] = l($current->name, 'taxonomy/term/' . $current->tid . '/' . $depth);
  }
  $breadcrumb[] = l(t('Home'), NULL);
  $breadcrumb = array_reverse($breadcrumb);
  drupal_set_breadcrumb($breadcrumb);
  drupal_add_feed('taxonomy/term/' . $term->tid . '/' . $depth . '/feed', 'RSS - ' . $term->name);

  $build = array();

  $build['term_heading'] = array(
    '#prefix' => '<div class="term-listing-heading">',
    '#suffix' => '</div>',
    'term' => taxonomy_term_view($term, 'full'),
  );

  if ($nids = taxonomy_edge_select_nodes($term->tid, TRUE, variable_get('default_nodes_main', 10), $real_depth)) {
    $nodes = node_load_multiple($nids);
    $build += node_view_multiple($nodes);
    $build['pager'] = array(
      '#theme' => 'pager',
      '#weight' => 5,
    );
  }
  else {
    $build['no_content'] = array(
      '#prefix' => '<p>',
      '#markup' => t('There is currently no content classified with this term.'),
      '#suffix' => '</p>',
    );
  }
  return $build;
}

/**
 * Generate the content feed for a taxonomy term.
 *
 * @param object $term
 *   The taxonomy term.
 */
function taxonomy_edge_term_feed($term, $depth = '0') {
  $real_depth = $depth;
  if ($depth === 'all') {
    $real_depth = taxonomy_edge_get_max_depth($term->vid);
  }
  elseif (!is_numeric($depth)) {
    $real_depth = 0;
  }

  $channel['link'] = url('taxonomy/term/' . $term->tid . '/' . $depth, array('absolute' => TRUE));
  $channel['title'] = variable_get('site_name', 'Drupal') . ' - ' . $term->name;
  // Only display the description if we have a single term, to avoid clutter and confusion.
  // HTML will be removed from feed description.
  $channel['description'] = check_markup($term->description, $term->format, '', TRUE);
  $nids = taxonomy_edge_select_nodes($term->tid, FALSE, variable_get('feed_default_items', 10), $real_depth);

  node_feed($nids, $channel);
}
