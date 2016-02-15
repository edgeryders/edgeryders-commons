<?php
/**
 * @file
 * Views join handler for taxonomy edge.
 */

class views_join_term_edge extends views_join {
  /**
   * Override build_join.
   */
  function build_join($select_query, $table, $view_query) {
    $this->extra = $table['alias'] . '.vid = ' . $this->left_table . '.vid';
    $found = FALSE;

    // If there's a condition on parent, then let it be unless it's blank.
    // If it's blank we set it to the root of the tree.
    foreach ($view_query->where as $data) {
      foreach ($data['conditions'] as $condition) {
        if (preg_match('/^' . $table['alias'] . '.parent($|\s*=)/', $condition['field'])) {
          if ($condition['value'] == '') {
            $condition['value'] = 0;
          }
          else {
            $found = TRUE;
            break;
          }
        }
      }
    }

    // If there wasn't any where conditions on the parent, go through all joins
    // to check if there is a join on the parent.
    if (!$found) {
      foreach ($view_query->table_queue as $queue_table) {
        if ($queue_table['table'] == 'taxonomy_term_data') {
          if (!empty($queue_table['join']) && $queue_table['join']->left_field == 'parent') {
            $found = TRUE;
            break;
          }
        }
        elseif ($queue_table['table'] == 'taxonomy_term_edge') {
          if (!empty($queue_table['join']) && $queue_table['join']->field == 'parent') {
            $found = TRUE;
            break;
          }
        }
      }
    }

    // If no condition on parent was found, add the root pid as a condition.
    if (!$found) {
      $view_query->add_where_expression(0, $table['alias'] . '.parent = :parent', array(':parent' => 0));
    }
    parent::build_join($select_query, $table, $view_query);
  }
}
