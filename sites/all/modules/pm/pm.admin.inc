<?php

/**
 * @file
 */

function pm_attribute_list() {
  $i = new stdClass();
  $i->type = 'pm_attribute';

  $header = array(
    array(
      'data' => t('Domain'),
      'field' => 'domain',
    ),
    array(
      'data' => t('Key'),
      'field' => 'akey',
    ),
    array(
      'data' => t('Value'),
      'field' => 'avalue',
    ),
    array(
      'data' => t('Active'),
    ),
    array(
      'data' => t('Default'),
    ),
    array(
      'data' => t('Weight'),
      'field' => 'weight',
      'sort' => 'asc',
    ),
    array(
      'data' => pm_icon_add('pm/attributes/add', $i, $_GET),
      'class' => 'pm_list_operations',
    ),
  );

  $query = db_select('pmattribute', 'sa')
    ->fields('sa');

  $where = array();
  $args = array();
  $filterfields = array();

  if (isset($_SESSION['pmattribute_list_filter']['domain']) && $_SESSION['pmattribute_list_filter']['domain'] != '') {
    $where[] = "domain='%s'";
    $args[] = $_SESSION['pmattribute_list_filter']['domain'];
    $filterfields[] = t('Domain');
  }

  if (isset($_SESSION['pmattribute_list_filter']['akey']) && $_SESSION['pmattribute_list_filter']['akey'] != '') {
    $where[] = "LOWER(akey) LIKE LOWER('%s')";
    $args[] = $_SESSION['pmattribute_list_filter']['akey'];
    $filterfields[] = t('Key');
  }

  if (isset($_SESSION['pmattribute_list_filter']['avalue']) && $_SESSION['pmattribute_list_filter']['avalue'] != '') {
    $where[] = "LOWER(avalue) LIKE LOWER('%s')";
    $args[] = $_SESSION['pmattribute_list_filter']['avalue'];
    $filterfields[] = t('Value');
  }

  if (isset($_SESSION['pmattribute_list_filter']['isactive']) && ($_SESSION['pmattribute_list_filter']['isactive'] != '-')) {
    $where[] = "isactive = %d";
    $args[] = $_SESSION['pmattribute_list_filter']['isactive'];
    $filterfields[] = t('Active');
  }

  if (isset($_SESSION['pmattribute_list_filter']['isdefault']) && ($_SESSION['pmattribute_list_filter']['isdefault'] != '-')) {
    $where[] = "isdefault = %d";
    $args[] = $_SESSION['pmattribute_list_filter']['isdefault'];
    $filterfields[] = t('Default');
  }

  $itemsperpage = isset($_SESSION['pmattribute_list_filter']['itemsperpage']) ? $_SESSION['pmattribute_list_filter']['itemsperpage'] : variable_get('pm_default_items_per_page', 10);

  $query = $query
    ->extend('TableSort')
    ->orderByHeader($header);

  if (count($filterfields) == 0) {
    $filterdesc = t('Not filtered');
  }
  else {
    $filterdesc = t('Filtered by !fields', array('!fields' => implode(", ", array_unique($filterfields))));
  }
  $filterdesc .= ' | '. t('!items items per page', array('!items' => $itemsperpage));

  $pm_attribute_list_filter = drupal_get_form('pm_attribute_list_filter', $filterdesc);

  $o = drupal_render($pm_attribute_list_filter);

  $result = $query->execute();

  $attributes = array();
  while ($attribute = $result->fetchObject()) {
    $attributes[] = $attribute;
  }

  $pm_attribute_list_form = drupal_get_form('pm_attribute_list_form', $header, $attributes);

  $o .= drupal_render($pm_attribute_list_form);
  $o .= theme('pager', array());
  return $o;
}

function pm_attribute_list_form($form, &$form_state, $header, $attributes) {
  $form = array();

  $form['attributes']['#theme'] = 'pm_attribute_list';

  $form['attributes']['header'] = array(
    '#value' => $header,
  );

  foreach ($attributes as $attribute) {
    $i = new stdClass();
    $i->type = 'pm_attribute';

    $form['attributes']['attributes'][$attribute->aid]['attribute_domain_'. $attribute->aid] = array(
      '#value' => $attribute->domain,
    );

    $form['attributes']['attributes'][$attribute->aid]['attribute_akey_'. $attribute->aid] = array(
      '#value' => $attribute->akey,
    );

    $form['attributes']['attributes'][$attribute->aid]['attribute_avalue_'. $attribute->aid] = array(
      '#value' => $attribute->avalue,
    );

    $form['attributes']['attributes'][$attribute->aid]['attribute_isactive_'. $attribute->aid] = array(
      '#type' => 'checkbox',
      '#default_value' => $attribute->isactive,
    );

    $form['attributes']['attributes'][$attribute->aid]['attribute_default_'. $attribute->aid] = array(
      '#default_value' => $attribute->isdefault,
    );

    $form['attributes']['attributes'][$attribute->aid]['attribute_weight_'. $attribute->aid] = array(
      '#type' => 'weight',
      '#default_value' => $attribute->weight,
    );

    $form['attributes']['attributes'][$attribute->aid]['attribute_operations_'. $attribute->aid] = array(
      '#value' => pm_icon_edit('pm/attributes/edit/'. $attribute->aid, $i, $_GET) .'&nbsp;'.  pm_icon_delete('pm/attributes/delete/'. $attribute->aid, $i, $_GET),
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#submit' => array('pm_attribute_list_submit'),
    '#value' => t('Save'),
  );

  return $form;
}

function pm_attribute_list_submit($form, &$form_state) {
  $attributes = array();
  $default_for_domain = array();
  foreach ($_POST as $key => $value) {
    $ar = explode('_', $key);
    if ($ar[0]=='attribute') {
      if ($ar[1]=='weight') $attributes[$ar[2]]['weight'] = $value;
      if ($ar[1]=='isactive') $attributes[$ar[2]]['isactive'] = $value;
      if ($ar[1]=='default') {
        $domain = str_replace('|', ' ', $ar[2]);
        $default_for_domain[$domain] = $value;
      }
    }
  }

  foreach ($attributes as $aid => $values) {
    db_update('pmattribute')
      ->fields(array(
        'isactive' => array_key_exists('isactive', $values) ? $values['isactive'] : 0,
        'weight' => $values['weight'],
      ))
      ->condition('aid', $aid, '=')
      ->execute();
  }

  foreach ($default_for_domain as $domain => $aid) {
    db_update('pmattribute')
      ->fields(array(
        'isdefault' => 0,
      ))
      ->condition('domain', $domain, '=')
      ->execute();

    db_update('pmattribute')
      ->fields(array(
        'isdefault' => 1,
      ))
      ->condition('aid', $aid, '=')
      ->execute();
  }

  drupal_set_message(t('Attributes saved'));
}

function pm_attribute_list_filter($form, &$form_state, $filterdesc = 'Filter') {
  $domain = isset($_SESSION['pmattribute_list_filter']['domain']) ? $_SESSION['pmattribute_list_filter']['domain'] : '';
  $akey = isset($_SESSION['pmattribute_list_filter']['akey']) ? $_SESSION['pmattribute_list_filter']['akey'] : '';
  $avalue = isset($_SESSION['pmattribute_list_filter']['avalue']) ? $_SESSION['pmattribute_list_filter']['avalue'] : '';
  $isactive = isset($_SESSION['pmattribute_list_filter']['isactive']) ? $_SESSION['pmattribute_list_filter']['isactive'] : TRUE;
  $isdefault = isset($_SESSION['pmattribute_list_filter']['isdefault']) ? $_SESSION['pmattribute_list_filter']['isdefault'] : FALSE;

  $itemsperpage = isset($_SESSION['pmattribute_list_filter']['itemsperpage']) ? $_SESSION['pmattribute_list_filter']['itemsperpage'] : variable_get('pm_default_items_per_page', 10);
  $_SESSION['pmattribute_list_filter']['itemsperpage'] = $itemsperpage;

  $form['filter'] = array(
    '#type' => 'fieldset',
    '#title' => $filterdesc,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['filter']['group1'] = array(
    '#type' => 'markup',
    '#theme' => 'pm_form_group',
  );

  $form['filter']['group1']['domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Domain'),
    '#default_value' => $domain,
    '#size' => 30,
    '#autocomplete_path' => 'pm/attributes/domain/autocomplete',
  );

  $form['filter']['group1']['akey'] = array(
    '#type' => 'textfield',
    '#title' => t('Key'),
    '#default_value' => $akey,
    '#size' => 20,
  );

  $form['filter']['group1']['avalue'] = array(
    '#type' => 'textfield',
    '#title' => t('Value'),
    '#default_value' => $avalue,
    '#size' => 20,
  );

  $form['filter']['group2'] = array(
    '#type' => 'markup',
    '#theme' => 'pm_form_group',
  );

  $form['filter']['group2']['isactive'] = array(
    '#type' => 'select',
    '#title' => t('Active'),
    '#default_value' => $isactive,
    '#options' => array('-' => '-', '0' => t('No'), '1' => t('Yes')),
  );

  $form['filter']['group2']['isdefault'] = array(
    '#type' => 'select',
    '#title' => t('Default'),
    '#default_value' => $isdefault,
    '#options' => array('-' => '-', '0' => t('No'), '1' => t('Yes')),
  );

  $form['filter']['group3'] = array(
    '#type' => 'markup',
    '#theme' => 'pm_form_group',
  );

  $form['filter']['group3']['itemsperpage'] = array(
    '#type' => 'textfield',
    '#title' => t('Items'),
    '#size' => 10,
    '#default_value' => $itemsperpage,
    '#prefix' => '<div class="container-inline">',
    '#suffix' => '</div>',
  );

  $form['filter']['group3']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Filter'),
    '#submit' => array('pm_attribute_list_filter_filter'),
  );

  $form['filter']['group3']['reset'] = array(
    '#type' => 'submit',
    '#value' => t('Reset'),
    '#submit' => array('pm_attribute_list_filter_reset'),
  );

  return $form;
}

function pm_attribute_list_filter_filter($form, &$form_state) {
  $_SESSION['pmattribute_list_filter']['domain'] = $form_state['values']['domain'];
  $_SESSION['pmattribute_list_filter']['akey'] = $form_state['values']['akey'];
  $_SESSION['pmattribute_list_filter']['avalue'] = $form_state['values']['avalue'];
  $_SESSION['pmattribute_list_filter']['isactive'] = $form_state['values']['isactive'];
  $_SESSION['pmattribute_list_filter']['isdefault'] = $form_state['values']['isdefault'];
  $_SESSION['pmattribute_list_filter']['itemsperpage'] = $form_state['values']['itemsperpage'];
}

function pm_attribute_list_filter_reset($form, &$form_state) {
  unset($_SESSION['pmattribute_list_filter']);
}

function pm_attribute_add() {
  $attribute = new stdClass();
  return pm_attribute_form($attribute);
}

function pm_attribute_add_submit($form, &$form_state) {
  if ($form_state['values']['isdefault']) {
    db_query("UPDATE {pmattribute} SET isdefault=0 WHERE domain='%s'", $form_state['values']['domain']);
  }

  $query = db_insert('pmattribute')
    ->fields(array(
      'domain' => $form_state['values']['domain'],
      'akey' => $form_state['values']['akey'],
      'avalue' => $form_state['values']['avalue'],
      'parent_domain' => $form_state['values']['parent_domain'],
      'weight' => $form_state['values']['weight'],
      'isactive' => $form_state['values']['isactive'],
      'isdefault' => $form_state['values']['isdefault'],
    ))
    ->execute();

  if (isset($_REQUEST['destination'])) {
    $destination = urldecode($_REQUEST['destination']);
  }
  else {
    $destination = 'pm/attributes';
  }
  drupal_goto($destination);
}

function pm_attribute_edit($form, $form_state, $aid) {
  $attribute = array();
  if ($aid) {
    $result = db_select('pmattribute', 'sa')
      ->fields('sa')
      ->condition('sa.aid', $aid)
      ->execute();

    $attribute = $result->fetchObject();
  }

  return pm_attribute_form($attribute);
}

function pm_attribute_edit_submit($form, &$form_state) {
  if ($form_state['values']['isdefault']) {
    $query = db_update('pmattribute')
      ->fields(array('isdefault' => 0))
      ->condition('domain', $form_state['values']['domain'])
      ->execute();
  }

  $query_main = db_update('pmattribute')
    ->fields(array(
      'domain' => $form_state['values']['domain'],
      'akey' => $form_state['values']['akey'],
      'avalue' => $form_state['values']['avalue'],
      'parent_domain' => $form_state['values']['parent_domain'],
      'weight' => $form_state['values']['weight'],
      'isactive' => $form_state['values']['isactive'],
      'isdefault' => $form_state['values']['isdefault']))
    ->condition('aid', $form_state['values']['aid'])
    ->execute();

  if (isset($_REQUEST['destination'])) {
    $destination = urldecode($_REQUEST['destination']);
  }
  else {
    $destination = 'pm/attributes';
  }
  drupal_goto($destination);
}

function pm_attribute_form_delete($form, &$form_state) {
  $destination = drupal_get_destination();
  if (array_key_exists('destination', $_REQUEST)) unset($_REQUEST['destination']);
  drupal_goto('pm/attributes/delete/'. $form_state['values']['aid'], $destination);
}

function pm_attribute_delete($form, $form_state, $aid) {
  $destination = drupal_get_destination();
  if (array_key_exists('destination', $_REQUEST)) {
    $destination = $_REQUEST['destination'];
    unset($_REQUEST['destination']);
    $form['destination'] = array('#type' => 'value', '#value' => $destination);
  }

  $form['aid'] = array('#type' => 'value', '#value' => $aid);
  $result = db_select('pmattribute', 'sa')
    ->fields('sa')
    ->condition('sa.aid', $aid)
    ->execute();

  $a = $result->fetchObject();
  $title = $a->domain .' : '. $a->avalue;

  return confirm_form($form,
  t('Are you sure you want to delete the attribute %title?', array('%title' => $title)),
  array('path' => 'pm/attributes/edit/'. $aid, 'query' => $destination),
  t('This action cannot be undone.'),
  t('Delete'), t('Cancel'));
}

function pm_attribute_delete_submit($form, &$form_state) {
  if ($form_state['values']['aid']) {
    $query = db_delete('pmattribute')
      ->condition('aid', $form_state['values']['aid'])
      ->execute();

    drupal_set_message(t('Project Management attribute deleted'));
    if ($form_state['values']['destination']) {
      $destination = $form_state['values']['destination'];
    }
    else {
      $destination = 'pm/attributes';
    }
    drupal_goto($destination);
  }
}

function pm_attribute_form($attribute = NULL) {
  $breadcrumb = array();
  $breadcrumb[] = l(t('Project Management'), 'pm');
  $breadcrumb[] = l(t('Attributes'), 'pm/attributes');
  drupal_set_breadcrumb($breadcrumb);

  if (arg(2)=='add') {
    if (array_key_exists('domain', $_GET) && !isset($attribute->domain)) {
      $attribute->domain = $_GET['domain'];
    }

    if (isset($_SESSION['pmattribute_list_filter']['domain']) && !isset($attribute->domain)) {
      $attribute->domain = $_SESSION['pmattribute_list_filter']['domain'];
    }
  }

  $form = array();
  if (isset($attribute->aid)) {
    $form['aid'] = array(
      '#type' => 'value',
      '#value' => $attribute->aid,
    );
  }

  $form['group1'] = array(
    '#type' => 'markup',
    '#theme' => 'pm_form_group',
  );

  $form['group1']['domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Domain'),
    '#required' => TRUE,
    '#default_value' => isset($attribute->domain) ? $attribute->domain : '',
    '#autocomplete_path' => 'pm/attributes/domain/autocomplete',
    '#size' => 40,
  );

  $domains = array();
  $result = db_select('pmattribute', 'sa')
    ->fields('sa', array('domain'))
    ->orderBy('domain', 'ASC')
    ->distinct()
    ->execute();

  foreach ($result as $i) {
    $domains[$i->domain] = $i->domain;
  }
  $form['group1']['parent_domain'] = array(
    '#type' => 'select',
    '#title' => t('Parent domain'),
    '#required' => FALSE,
    '#default_value' => isset($attribute->parent_domain) ? $attribute->parent_domain : '',
    '#options' => array('' => '-') + $domains,
  );

  $form['group2'] = array(
    '#type' => 'markup',
    '#theme' => 'pm_form_group',
  );

  $form['group2']['akey'] = array(
    '#type' => 'textfield',
    '#title' => t('Key'),
    '#required' => TRUE,
    '#default_value' => isset($attribute->akey) ? $attribute->akey : '',
    '#size' => 25,
    '#maxlength' => 100,
  );

  $form['group2']['avalue'] = array(
    '#type' => 'textfield',
    '#title' => t('Value'),
    '#required' => TRUE,
    '#default_value' => isset($attribute->avalue) ? $attribute->avalue : '',
    '#size' => 25,
  );

  $form['group2']['weight'] = array(
    '#type' => 'weight',
    '#title' => t('Weight'),
    '#default_value' => isset($attribute->weight) ? $attribute->weight : 0,
  );

  $form['group3'] = array(
    '#type' => 'markup',
    '#theme' => 'pm_form_group',
  );

  $form['group3']['isactive'] = array(
    '#type' => 'checkbox',
    '#title' => t('Active'),
    '#default_value' => isset($attribute->isactive) ? $attribute->isactive : TRUE,
  );

  $form['group3']['isdefault'] = array(
    '#type' => 'checkbox',
    '#title' => t('Default'),
    '#default_value' => isset($attribute->isdefault) ? $attribute->isdefault : FALSE,
  );

  $form['save'] = array(
    '#type' => 'submit',
    '#value' => t('Save')
  );

  if (isset($attribute->aid)) {
    $form['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('pmattribute_form_delete'),
    );
  }

  return $form;
}

function _pm_attibute_domain_options() {
  static $options;
  if (!$options) {
    $query = db_select('pmattribute', 'att')
      ->fields('att', array('domain'))
      ->distinct()
      ->orderBy('domain', 'ASC');
    $result = $query->execute();

    $options = array();
    foreach ($result as $d) {
      $options[$d->domain_name] = $d->domain;
    }
  }
  return $options;
}

function _pm_attribute_domain_autocomplete($string = '') {
  static $default_domains;
  if (!$default_domains) {
    $default_domains = array(
      'Country' => 'Country',
      'Currency' => 'Currency',
      'Task status' => 'Task status',
      'Project category' => 'Project category',
      'Project status search' => 'Project status search',
      'Project status' => 'Project status',
      'Ticket priority search' => 'Ticket priority search',
      'Ticket priority' => 'Ticket priority',
      'Ticket category' => 'Ticket category',
      'Ticket status search' => 'Ticket status search',
      'Ticket status' => 'Ticket status',
      'Task status search' => 'Task status search',
      'Price mode' => 'Price mode',
      'Project priority' => 'Project priority',
      'Project priority search' => 'Project priority search',
      'Task category' => 'Task category',
      'Task priority' => 'Task priority',
      'Task priority search' => 'Task priority search',
      'Duration unit' => 'Duration unit',
    );
  }

  $matches = array();
  if ($string) {
    $query = db_select('pmattribute', 'att')
      ->fields('att', array('domain'))
      ->distinct()
      ->where('LOWER(domain) LIKE LOWER(:search)', array(':search' => '%'. $string .'%'));
    $result = $query->execute();

    foreach ($result as $a) {
      $matches[$a->domain] = check_plain($a->domain);
    }
  }

  foreach ($default_domains as $domain) {
    if (strpos(drupal_strtoupper($domain), drupal_strtoupper($string))===FALSE) {
    }
    else {
      $matches[$domain] = $domain;
    }
  }

  $matches = array_slice($matches, 0, 10);

  drupal_json_output($matches);
}
