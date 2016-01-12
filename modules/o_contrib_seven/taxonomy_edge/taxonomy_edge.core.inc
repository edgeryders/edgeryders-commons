<?php
/**
 * @file
 * This file contains the core override functions
 */

/**
 * Reimplementation of taxonomy_get_tree().
 *
 * Limit db fetch to only specified parent.
 * @see taxonomy_get_tree()
 */
function taxonomy_edge_get_tree_generic($vid, $parent = 0, $max_depth = NULL, $load_entities = FALSE) {
  $exclude_root = variable_get('taxonomy_edge_exclude_root', TRUE);
  $static_cache = variable_get('taxonomy_edge_static_caching', TAXONOMY_EDGE_STATIC_CACHING);

  // @todo Optimize this. Currently we cannot use the static cache when using
  //       parent, because it's expected that the entire vocabulary is present
  //       in the static cache.
  $static_cache = $static_cache && !$parent;

  if ($static_cache) {
    $children = &drupal_static('taxonomy_get_tree', array());
    $parents = &drupal_static('taxonomy_get_tree:parents', array());
    $terms = &drupal_static('taxonomy_get_tree:terms', array());
  }
  else {
    $children = $parents = $terms = array();
  }

  // We cache trees, so it's not CPU-intensive to call get_tree() on a term
  // and its children, too.
  if (!isset($children[$vid])) {
    $children[$vid] = array();
    $parents[$vid] = array();
    $terms[$vid] = array();

    $query = db_select('taxonomy_term_data', 't');
    $query->join('taxonomy_term_hierarchy', 'h', 'h.tid = t.tid');
    $query
      ->addTag('translatable')
      ->addTag('term_access')
      ->fields('t')
      ->fields('h', array('parent'))
      ->condition('t.vid', $vid)
      ->orderBy('t.weight')
      ->orderBy('t.name');

    if ($exclude_root && $parent) {
      $subquery = db_select('taxonomy_term_edge', 'e')
                    ->fields('e', array('tid'))
                    ->condition('e.vid', $vid)
                    ->condition('e.parent', $parent)
                    ->condition('e.distance', 0, '>');
      $query->condition('t.tid', $subquery, 'IN');
    }

    $result = $query->execute();

    foreach ($result as $term) {
      $children[$vid][$term->parent][] = $term->tid;
      $parents[$vid][$term->tid][] = $term->parent;
      $terms[$vid][$term->tid] = $term;
    }
  }

  // Load full entities, if necessary. The entity controller statically
  // caches the results.
  if ($load_entities) {
    $term_entities = taxonomy_term_load_multiple(array_keys($terms[$vid]));
  }

  $max_depth = (!isset($max_depth)) ? count($children[$vid]) : $max_depth;
  $tree = array();

  // Keeps track of the parents we have to process, the last entry is used
  // for the next processing step.
  $process_parents = array();
  $process_parents[] = $parent;

  // Loops over the parent terms and adds its children to the tree array.
  // Uses a loop instead of a recursion, because it's more efficient.
  while (count($process_parents)) {
    $parent = array_pop($process_parents);
    // The number of parents determines the current depth.
    $depth = count($process_parents);
    if ($max_depth > $depth && !empty($children[$vid][$parent])) {
      $has_children = FALSE;
      $child = current($children[$vid][$parent]);
      do {
        if (empty($child)) {
          break;
        }
        $term = $load_entities ? $term_entities[$child] : $terms[$vid][$child];
        if (isset($parents[$vid][$term->tid])) {
          // Clone the term so that the depth attribute remains correct
          // in the event of multiple parents.
          $term = clone $term;
        }
        $term->depth = $depth;
        unset($term->parent);
        $term->parents = $parents[$vid][$term->tid];
        $tree[] = $term;
        if (!empty($children[$vid][$term->tid])) {
          $has_children = TRUE;

          // We have to continue with this parent later.
          $process_parents[] = $parent;
          // Use the current term as parent for the next iteration.
          $process_parents[] = $term->tid;

          // Reset pointers for child lists because we step in there more often
          // with multi parents.
          reset($children[$vid][$term->tid]);
          // Move pointer so that we get the correct term the next time.
          next($children[$vid][$parent]);
          break;
        }
      } while ($child = next($children[$vid][$parent]));

      if (!$has_children) {
        // We processed all terms in this hierarchy-level, reset pointer
        // so that this function works the next time it gets called.
        reset($children[$vid][$parent]);
      }
    }
  }

  return $tree;
}

/**
 * Reimplementation of taxonomy_get_tree().
 *
 * Limit db fetch to only specified parent AND use presorting.
 * @see taxonomy_get_tree()
 */
function taxonomy_edge_get_tree_optimized($vid, $parent = 0, $max_depth = NULL, $load_entities = FALSE) {
  $vocabulary = taxonomy_vocabulary_load($vid);

  // Optimized version does not work with multiple parents.
  if ($vocabulary->hierarchy == 2) {
    return taxonomy_edge_get_tree_generic($vid, $parent, $max_depth, $load_entities);
  }

  $valid_order = taxonomy_edge_is_order_valid($vid);

  // Use generic if entire tree is queried and we don't have a presorted tree.
  if (!$parent && !$valid_order) {
    return taxonomy_edge_get_tree_generic($vid, $parent, $max_depth, $load_entities);
  }

  // Setup static cache if applicable.
  $static_cache = variable_get('taxonomy_edge_static_caching', TAXONOMY_EDGE_STATIC_CACHING);
  $cache = &drupal_static('taxonomy_edge_tree_cache', array());


  // Return cache if present.
  if ($static_cache) {
    // Cache per vocabulary.
    if (!isset($cache[$vid])) {
      $cache[$vid] = array();
    }
    $cache = &$cache[$vid];

    if (isset($cache[$parent])) {
      $tree = array();
      for ($i = $cache[$parent]['offset']; $i < $cache[$parent]['offset'] + $cache[$parent]['count']; $i++) {
        $clone = clone $cache[$parent]['data'][$i];
        $clone->depth -= $cache[$parent]['depth'];
        if ($clone->depth < 0) {
          break;
        }
        if (!$max_depth || $clone->depth < $max_depth) {
          $tree[] = $clone;
        }
      }
      return $tree;
    }
  }

  // No cache, let's fetch from db.
  $query = db_select('taxonomy_term_edge', 'e');
  $query->join('taxonomy_term_data', 'd', 'd.tid = e.tid');

  $query
    ->addTag('translatable')
    ->addTag('term_access')
    ->fields('e', array('parent', 'distance'))
    ->fields('d')
    ->condition('e.parent', $parent)
    ->condition('e.distance', 0, '>')
    ->condition('e.vid', $vid);

  if ($max_depth) {
    $query->condition('e.distance', $max_depth, '<=');
  }

  if ($valid_order) {
    $query->join('taxonomy_term_edge_order', 'o', 'o.eid = e.eid AND o.parent = e.parent AND o.vid = ' . intval($vid));
    $query->orderBy('o.oid');
  }
  else {
    $query->addExpression(_taxonomy_edge_generate_term_path_query('e.tid'), 'sort_path');
    $query->orderBy('sort_path');
  }

  $result = $query->execute();

  $tree = array();
  if ($static_cache) {
    $cache[$parent]['offset'] = 0;
    $cache[$parent]['count'] = 0;
    $cache[$parent]['depth'] = 0;
  }
  foreach ($result as $term) {
    $term->depth = $term->distance - 1;
    $term->parents = array($term->parent);
    unset($term->distance);
    unset($term->parent);
    unset($term->sort_path);
    $tree[$term->tid] = $term;

    if ($static_cache) {
      $cache[$parent]['data'][] = &$tree[$term->tid];
      $cache[$term->tid]['data'] = &$cache[$parent]['data'];
      $cache[$term->tid]['count'] = $cache[$parent]['count'];
      $cache[$term->tid]['offset'] = ++$cache[$parent]['count'];
      $cache[$term->tid]['depth'] = $term->depth + 1;
    }
  }

  // Load full entities, if necessary. The entity controller statically
  // caches the results.
  if ($load_entities) {
    $term_entities = taxonomy_term_load_multiple(array_keys($tree));
  }

  // Original taxonomy_get_tree() has an incremental index. Let's do this as well in a memory efficient way.
  $clean_tree = array();
  foreach ($tree as &$term) {
    if ($load_entities) {
      // Store values depth and parents, because the entity which overwrites
      // does not carry these.
      $t_depth = $term->depth;
      $t_parents = $term->parents;
      $term = $term_entities[$term->tid];
      // Re-add depth and parents to the term (entity).
      $term->depth = $t_depth;
      $term->parents = $t_parents;
    }
    if (!$max_depth || $term->depth < $max_depth) {
      $clean_tree[] = $term;
    }
  }
  unset($tree);

  return $clean_tree;
}
