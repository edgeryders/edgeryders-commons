<?php
/**
 * @file
 * Filter handler for taxonomy terms with depth using Taxonomy Edge.
 *
 * @see views_handler_filter_term_node_tid_depth_modifier.inc
 */
class views_handler_filter_term_edge_node_tid_depth extends views_handler_filter_term_node_tid_depth {
  function query() {
    return parent::query();
  }
}
