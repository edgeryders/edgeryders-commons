<?php
/**
 * @file
 * This file is a copy/override of the default views taxonomy argument handler.
 *
 * Argument handler for taxonomy terms with depth using Taxonomy Edge.
 *
 * @see views_handler_argument_term_node_tid_depth.inc
 * @ingroup views_argument_handlers
 */
class views_handler_argument_term_edge_node_tid_depth extends views_handler_argument_term_node_tid_depth {
  function query($group_by = FALSE) {
    if ($this->options['depth'] == 'all') {
      $this->options['depth'] = db_query("SELECT MAX(distance) FROM {taxonomy_term_edge} WHERE parent = 0")->fetchField();
    }
    elseif ($this->options['depth'] == 'root') {
      $this->options['depth'] = -db_query("SELECT MAX(distance) FROM {taxonomy_term_edge} WHERE parent = 0")->fetchField();
    }
    return parent::query($group_by);
  }
}
