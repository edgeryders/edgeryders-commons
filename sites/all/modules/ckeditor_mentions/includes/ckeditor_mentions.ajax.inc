<?php

/**
 * @file
 * Callback which request the view 'ckeditor_mentions' and inject the typed value as a realname filter.
 */

function ckeditor_mentions_getpeople() {
  $typed = $_REQUEST['typed'];

  if (strlen($typed) <= 12 && $typed[0] == '@') {
    $typed = substr($typed, 1);

    //watchdog('ckeditor_mentions', 'typed = %typed', array('%typed' => $typed), WATCHDOG_DEBUG);

    $view = views_get_view('ckeditor_mentions');
    $view->set_display('block');
    $filter = $view->get_item('block', 'filter', 'realname');
    $filter['value'] = $typed;
    $view->set_item('block', 'filter', 'realname', $filter);
    $view->execute();
    $count = count($view->result);
    if ($count > 0) {
      $html = $view->render();
      drupal_json_output(array('html' => $html));
      drupal_exit();
    }
  }
}
