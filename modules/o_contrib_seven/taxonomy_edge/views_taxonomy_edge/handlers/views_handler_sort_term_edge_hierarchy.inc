<?php
/**
 * @file
 * Views sort handler to sort by taxonomy terms' hierarchy order.
 */

/**
 * Views sort handler to sort by taxonomy terms' hierarchy order.
 */
class views_handler_sort_term_edge_hierarchy extends views_handler_sort {
  /**
   * Overridden to add the ORDER BY clause and join required tables.
   */
  function query() {
    $edge = $this->query->ensure_table('taxonomy_term_edge');

    if (taxonomy_edge_is_order_invalid()) {
      $sort_path = _taxonomy_edge_generate_term_path_query("$edge.tid");
      $alias = $this->query->add_field(NULL, $sort_path, 'sort_path');
      $this->query->add_orderby(NULL, NULL, $this->options['order'], 'sort_path');
    }
    else {
      $sort_path = "(SELECT o.oid FROM taxonomy_term_edge_order o WHERE o.eid = $edge.eid)";
      $alias = $this->query->add_field(NULL, $sort_path, 'oid');
      $this->query->add_orderby(NULL, NULL, $this->options['order'], 'oid');
    }
  }
}
