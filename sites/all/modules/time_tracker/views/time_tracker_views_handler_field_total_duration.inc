<?php

class time_tracker_views_handler_field_total_duration extends time_tracker_views_handler_field_numeric {
  function query() {
    $table_alias = $this->query->tables[$this->view->base_table][$this->table]['alias'];
    $this->field_alias = 'time_tracker_' . $this->field;
    $query = "(" . $table_alias . ".duration - " . $table_alias . ".deductions)";
    $this->query->add_field(NULL, $query, $this->field_alias);
  }
}
