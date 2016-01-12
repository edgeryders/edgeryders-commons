<?php
/**
 * @file
 * This file is a copy/override of the default views taxonomy argument handler.
 *
 * Argument handler for modifying depth for a previous term using Taxonomy Edge.
 *
 * @see views_handler_argument_term_node_tid_depth_modifier.inc
 */

class views_handler_argument_term_edge_node_tid_depth_modifier extends views_handler_argument_term_node_tid_depth_modifier {
  function pre_query() {
    // We don't know our argument yet, but it's based upon our position:
    $argument = isset($this->view->args[$this->position]) ? $this->view->args[$this->position] : NULL;
    if (!is_numeric($argument) && $argument !== 'all' && $argument != 'root') {
      return;
    }

    // Figure out which argument preceded us.
    $keys = array_reverse(array_keys($this->view->argument));
    $skip = TRUE;
    foreach ($keys as $key) {
      if ($key == $this->options['id']) {
        $skip = FALSE;
        continue;
      }

      if ($skip) {
        continue;
      }

      if (empty($this->view->argument[$key])) {
        continue;
      }

      if (isset($handler)) {
        unset($handler);
      }

      $handler = &$this->view->argument[$key];
      if (empty($handler->definition['accept depth modifier'])) {
        continue;
      }

      // Finally!
      $handler->options['depth'] = $argument;
    }
  }
}

