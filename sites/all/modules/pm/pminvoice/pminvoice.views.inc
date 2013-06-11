<?php
/**
 * @file
 * Functions to expose Project Management Invoice module data to the views module
 */
function pminvoice_views_data() {
  // Invoice core fields
  $data['pminvoice']['table']['group']  = t('Project Management Invoice');
  $data['pminvoice']['table']['join'] = array(
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  $data['pminvoice']['number'] = array(
    'title' => t('Number'),
    'help' => t('Project Management Invoice Number'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice']['reference'] = array(
    'title' => t('Reference'),
    'help' => t('Project Management Invoice Reference'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['pminvoice']['organization_nid'] = array(
    'title' => t('Organization'),
    'help' => t('Invoice -> Organization'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Invoice -> Organization'),
    ),
  );

  $data['pminvoice']['organization_title'] = array(
    'title' => t('Organization'),
    'help' => t('Project Management Invoice Organization (title only)'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['pminvoice']['project_nid'] = array(
    'title' => t('Project'),
    'help' => t('Invoice -> Project'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Invoice -> Project'),
    ),
  );

  $data['pminvoice']['project_title'] = array(
    'title' => t('Project'),
    'help' => t('Project Management Invoice Project (title only)'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['pminvoice']['requestdate'] = array(
    'title' => t('Request date'),
    'help' => t('Project Management Invoice Request Date'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['pminvoice']['duedate'] = array(
    'title' => t('Due date'),
    'help' => t('Project Management Invoice Due Date'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['pminvoice']['paymentdate'] = array(
    'title' => t('Payment date'),
    'help' => t('Project Management Invoice Payment Date'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['pminvoice']['amount'] = array(
    'title' => t('Amount'),
    'help' => t('Project Management Invoice Amount'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice']['tax1'] = array(
    'title' => t('Tax 1'),
    'help' => t('Project Management Invoice Tax 1'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice']['tax2'] = array(
    'title' => t('Tax 2'),
    'help' => t('Project Management Invoice Tax 2'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice']['total'] = array(
    'title' => t('Total'),
    'help' => t('Project Management Invoice Total'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice']['totalcustomercurr'] = array(
    'title' => t('Total in customer currency'),
    'help' => t('Project Management Invoice Total in Customer Currency'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice']['taxexempt'] = array(
    'title' => t('Tax exempt'),
    'help' => t('Project Management Invoice Tax Exempt'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice']['invoice_status'] = array(
    'title' => t('Invoice status'),
    'help' => t('Project Management Invoice Status'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'pminvoice_handler_field_invoice_status'
    ),
    'filter' => array(
      'handler' => 'pminvoice_handler_filter_invoice_status',
    ),
  );

  // Invoice items
  $data['pminvoice_items']['table']['group']  = t('Project Management Invoice Item');
  $data['pminvoice_items']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'invoice_nid',
    ),
  );

  $data['pminvoice_items']['invoice_nid'] = array(
    'title' => t('Invoice'),
    'help' => t('Invoiceitem -> Invoice'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Invoiceitem -> Invoice'),
    ),
  );

  $data['pminvoice_items']['weight'] = array(
    'title' => t('Weight'),
    'help' => t('Project Management Invoiceitem Weight'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice_items']['amount'] = array(
    'title' => t('Amount'),
    'help' => t('Project Management Invoiceitem Amount'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice_items']['tax1percent'] = array(
    'title' => t('Tax 1 Percent'),
    'help' => t('Project Management Invoiceitem Tax 1 Percent'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice_items']['tax2percent'] = array(
    'title' => t('Tax 2 Percent'),
    'help' => t('Project Management Invoiceitem Tax 2 Percent'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice_items']['tax1'] = array(
    'title' => t('Tax 1'),
    'help' => t('Project Management Invoiceitem Tax 1'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice_items']['tax2'] = array(
    'title' => t('Tax 2'),
    'help' => t('Project Management Invoiceitem Tax 2'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice_items']['total'] = array(
    'title' => t('Total'),
    'help' => t('Project Management Invoiceitem Total'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['pminvoice']['operation'] = array(
    'field' => array(
      'title' => t('Edit/Delete link'),
      'help' => t('Provide a simple link to edit and delete the node.'),
      'handler' => 'pm_handler_field_operation',
      'type' => 'pminvoice',
    ),
  );

  return $data;
}

function pminvoice_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'pminvoice'),
    ),
    'handlers' => array(
      'pm_handler_filter_attributes_domain' => array(
        'parent' => 'views_handler_filter_in_operator',
        'path' => drupal_get_path('module', 'pm'),
      ),
      'pm_handler_field_operation' => array(
        'parent' => 'views_handler_field_node_link',
        'path' => drupal_get_path('module', 'pm'),
      ),
      'pminvoice_handler_field_invoice_status' => array(
        'parent' => 'views_handler_field',
      ),
      'pminvoice_handler_filter_invoice_status' => array(
        'parent' => 'views_handler_filter_in_operator',
      ),
    ),
  );
}

function pminvoice_date_api_fields($field) {
  $values = array(
    'sql_type' => DATE_UNIX,
    'tz_handling' => 'site',
    'timezone_field' => '',
    'offset_field' => '',
    'related_fields' => array(),
    'granularity' => array('year', 'month', 'day'),
  );

  switch ($field) {
    case 'pminvoice.paymentdate':
    case 'pminvoice.duedate':
    case 'pminvoice.requestdate':
      return $values;
  }

}

function pminvoice_date_api_tables() {
  return array('pminvoice');
}
