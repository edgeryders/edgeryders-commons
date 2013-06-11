<?php

/**
 * @file
 */

function _pmperson_organization_people_js($organization_nid=0) {
  $people = array();

  if ($organization_nid) {
      $query = db_select('node', 'n')
        ->fields('n', array('nid', 'title'))
        ->condition('n.status', 1)
        ->condition('n.type', 'organization')
        ->condition('spe.organization', $organization_nid)
        ->join('pmperson', 'spe', 'n.vid = spe.vid')
        ->addTag('node_access');

  $result = $query->execute();
    foreach($result as $row) {
      $nid = $row->name;
      $people[$nid] = $row->title;
    }
  }
  print drupal_json_encode($people);
  exit();
}

