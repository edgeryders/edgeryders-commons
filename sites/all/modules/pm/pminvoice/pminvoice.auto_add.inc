<?php
/**
 * @file
 * Contains functions relating to the Project Management Invoice auto_add functionality
 * (creating invoices based on other Project Management nodes)
 */
function pminvoice_auto_add($node, $invoice = NULL) {
  switch ($node->type) {
    case 'pmorganization':
      $invoice_nid = pmorganization_pminvoice_auto_add($node, $invoice);
      break;
    case 'pmproject':
      $invoice_nid = pmproject_pminvoice_auto_add($node, $invoice);
      break;
    case 'pmtask':
      $invoice_nid = pmtask_pminvoice_auto_add($node, $invoice);
      break;
    case 'pmticket':
      $invoice_nid = pmticket_pminvoice_auto_add($node, $invoice);
      break;
    case 'pmtimetracking':
      $invoice_nid = pmtimetracking_pminvoice_auto_add($node, $invoice);
      break;
    case 'pmexpense':
      $invoice_nid = pmexpense_pminvoice_auto_add($node, $invoice);
      break;
    default:
      drupal_set_message(t('This type of node cannot be automatically added to an invoice'), 'error');
      // watchdog - add link to record error in more detail?
      drupal_goto('node/'. $node->nid);
  }
  if ($invoice) {
    drupal_set_message(t('The @type has been added to the selected invoice.', array('@type' => $node->type)));
  }
  else {
    drupal_set_message(t('This invoice was created automatically from the selected @type.', array('@type' => $node->type)));
  }
  drupal_goto('node/'. $invoice_nid);
}

function pminvoice_auto_add_select() {
  $form['node'] = array(
    '#title' => t('Node'),
    '#type' => 'hidden',
    '#value' => arg(4),
  );

  $form['invoice'] = array(
    '#title' => t('Invoice'),
    '#type' => 'select',
    '#options' => array(),
    '#description' => t('Please choose the invoice that you would like to add to'),
  );

  // THIS CODE LOADS OPTIONS INTO THE INVOICE SELECTOR
  // Load the node object, but don't know how to handle it yet because it could be a node of several types.
  $node = node_load(arg(4));
  /* This function does not know the type of node that is being billed for. To avoid recording all relationships between the Project Management nodes,
    * we simply check for the existance of a parent node (perhaps project, task, ticket etc). Organization will always be set.
    * The invoices we show in the list are those that match these parents or where these attributes are not set.
    */

  if (($node->type == 'pmorganization') && !($node->organization_nid)) {
    $node->organization_nid = $node->nid;
  }
  elseif (($node->type == 'pmproject') && !($node->project_nid)) {
    $node->project_nid = $node->nid;
  }

  $sql = "SELECT n.nid, n.title, sin.* FROM {node} AS n INNER JOIN {pminvoice} AS sin ON n.nid=sin.nid";
  // Ensure node is published, correct type. Always filter by Organization
  $sql .= " WHERE n.status=1 AND n.type='pminvoice' AND sin.organization_nid=". $node->organization_nid;

  if ($node->project_nid) {
    $sql .= " AND (sin.project_nid=". $node->project_nid ." OR sin.project_nid=0)";
  }

  $sql = pminvoice_access_sql($sql);
  $sql = db_rewrite_sql($sql);
  $r = db_query($sql);
  while ($r_invoice = db_fetch_object($r)) {
    $form['invoice']['#options'][$r_invoice->nid] = $r_invoice->number ." | ". $r_invoice->title;
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Select'),
  );

  return $form;
}

function pminvoice_auto_add_select_submit($form_id, $form_state) {
  $node = node_load($form_state['values']['node']);
  $invoice = $form_state['values']['invoice'];
  pminvoice_auto_add($node, $invoice);
}
