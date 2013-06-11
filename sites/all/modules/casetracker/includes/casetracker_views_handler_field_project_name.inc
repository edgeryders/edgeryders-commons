<?php

/**
 * Field handler to show Selective state.
 *
 * @ingroup views_field_handlers
 */
class casetracker_views_handler_field_project_name extends views_handler_field {

  function render($values) {
    $node = db_select('node', 'n')
      ->fields('n', array('nid', 'title'))
      //->condition('n.nid', $values->{$this->field_alias})
      ->condition('n.nid', $values->$this->field_alias)
      ->addTag('views')
      ->execute();
dpm($node);
    if ($node->nid) {
      return l($node->title, "node/$node->nid");
    } // returns a linked case tracker project title.
  }
}
