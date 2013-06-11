<?php

class time_tracker_views_handler_relationship extends views_handler_relationship {

  function query() {
    // Figure out what base table this relationship brings to the party.
    $table_data = views_fetch_data($this->definition['base']);

    $def = $this->definition;
    $def['table'] = $this->definition['base'];
    $def['field'] = $this->definition['base field'];
    $def['left_table'] = $this->table;
    $def['left_field'] = 'entity_id';
    if (!empty($this->options['required'])) {
      $def['type'] = 'INNER';
    }

    if (!empty($def['join_handler']) && class_exists($def['join_handler'])) {
      $join = new $def['join_handler'];
    }
    else {
      $join = new views_join();
    }

    // use a short alias for this:
    $alias = $def['table'] . '_' . $def['left_table'];

    $join->definition = $def;
    $join->construct();

    $this->ensure_my_table();

    $this->alias = $this->query->add_relationship($alias, $join, $this->definition['base'], $this->relationship);
  }
}
