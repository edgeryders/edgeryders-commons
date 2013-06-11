<?php

/**
 * @file
 * Provides theme functions for Project Management modules
 */

function theme_pm_form_group($variables) {
  $element = $variables['element'];

  drupal_add_css(drupal_get_path('module', 'pm') .'/pm.css');

  $row = array();
  foreach (element_children($element) as $key) {
    array_push($row, drupal_render($element[$key]));
  }

  $rows = array(
    array(
      'data' => $row,
      'class' => array('formgroup'),
      'no_striping' => TRUE,
    )
  );

  return theme('table', array(
    'header' => array(),
    'rows' => $rows,
    'attributes' => array('class' => array('formgroup'))
  ));
}

/**
 * Provides theming for the datetime element.
 */
function theme_datetime($element) {
  return theme('form_element', $element, '<div class="container-inline">' . $element['#children'] . '</div>');
}

/**
 * Provides theming for the dateext element.
 */
function theme_dateext($element) {
  return theme('form_element', $element, '<div class="container-inline">' . $element['#children'] . '</div>');
}

/**
 * Provides HTML to theme Project Management fields.
 */
function theme_pm_view_item($variables) {
  $o = '<div class="label"><span class="label">' . $variables['label'] . ':&nbsp;</span></div><div class="value">' . $variables['value'] . '&nbsp;</div>';
  return $o;
}

function theme_pm_dashboard($link_blocks) {
  $content = '<div id="pmdashboard">';
  if (!empty($link_blocks)) {
    $content .= '<dl class="pmdashboard clear-block">';
    foreach ($link_blocks as $block_id => $link_block_array) {
      $content .= '<div class="pmdashboard">';
      if (!empty($link_block_array)) {
        foreach ($link_block_array as $key => $link_array) {
          if (!empty($link_array['theme'])) {
            $content .= theme($link_array['theme'], $link_array);
          }
          else {
            $content .= theme('pm_dashboard_link', $link_array);
          }
        }
      }
      $content .= '</div>';
    }
    $content .= '</dl>';
  }
  else {
    $content .= t('No dashboard links available');
  }
  $content .= '</div>';

  return $content;
}

function theme_pm_dashboard_block($link_blocks) {
  $content = '<div id="pmdashboard-block">';
  if (!empty($link_blocks)) {
    foreach ($link_blocks as $block_id => $link_block_array) {
      if (!empty($link_block_array)) {
        foreach ($link_block_array as $key => $link_array) {
          $content .= '<div class="pmdashboard-icon">';
          if (!empty($link_array['theme'])) {
            $content .= theme($link_array['theme'], $link_array);
          }
          else {
            $content .= theme('pm_dashboard_link', $link_array);
          }
          $content .= '</div>';
        }
      }
    }
  }
  else {
    // no links, hide block
    return '';
  }
  $content .= '</div>';
  return $content;
}

function theme_pm_dashboard_link($link_array) {

  $content = '';

  // DEFAULT ICON
  if (empty($link_array['icon'])) {
    $dt_id = 'pmexpenses';
  }
  else {
    $dt_id = $link_array['icon'];
  }

  $params = array();
  if (!empty($link_array['nid'])) {
    $params_key = $link_array['node_type'] .'_nid';
    $params['query'] = array($params_key => $link_array['nid']);
  }

  $link = l($link_array['title'], $link_array['path'], $params);

  // ADD PLUS SIGN (node/add)
  if (!empty($link_array['add_type'])) {
    $item = new stdClass();
    $item->type = $link_array['add_type'];
    if (empty($link_array['params'])) {
      $link_array['params'] = array();
    }
    $link .= pm_icon_add('node/add/'. str_replace('_', '-', $link_array['add_type']), $item, $link_array['params']);
  }


  if (empty($link_array['nid']) || 0 == $link_array['nid']) {
    if (variable_get('pm_icons_display', TRUE)) {
      $content .= '<dt id="'. $dt_id .'" class="pmcomponent">';
    }
    else {
      $content .= '<dt class="pmcomponent">';
    }
    $content .= $link;
    $content .= '</dt>';
  }
  else {
    $content = array(
      '#prefix' => variable_get('pm_icons_display', TRUE) ? '<dt id="'. $dt_id .'" class="pmcomponent">' : '<dt class="pmcomponent">',
      '#suffix' => '</dt>',
      '#value' => $link,
      '#weight' => $link_array['weight'],
    );
  }


  return $content;
}

function theme_pm_dashboard_links_weight_table($form = array()) {
  $type = $form['#infix'];
  $rows = array();
  foreach ($form as $id => &$value) {
    if ($id[0] == '#') {
      continue;
    }
    $value[$type .'_pm_dashboard_link_weight_'. $id]['#attributes']['class'] = $type .'dashboard-link-table-weight';

    $row = array();
    $row[] = $value['#value'];
    $row[] = drupal_render($value[$type .'_pm_dashboard_link_active_'. $id]);
    $row[] = drupal_render($value[$type .'_pm_dashboard_link_weight_'. $id]);
    unset($value['#value']);
    if (!empty($row)) {
      $rows[] = array(
        'data' => $row,
        'class' => 'draggable',
      );
    }
  }
  $headers = array(t('Link'), t('Active'), t('Weight'));

  $output = theme('table', array('headers' => $headers, 'rows' => $rows, 'attributes' => array('id' => $type .'dashboard-link-table')));

  drupal_add_tabledrag($type .'dashboard-link-table', 'order', 'sibling', $type .'dashboard-link-table-weight');

  $output .= drupal_render($form);

  return $output;
}

function theme_pm_link($source_module='', $destination_module='', $node_nid=0, $weight=0) {
  switch ($source_module) {

    case "pmorganization":
      $params_key = 'organization_nid';
      break;

    case "pmproject":
      $params_key = 'project_nid';
      break;

    case "pmtask":
      $params_key = 'task_nid';
      break;

    case "pmticket":
      $params_key = 'ticket_nid';
      break;
  }



  switch ($destination_module) {
    case "pmattribute":
      $user_access_check = 'Project Management: access administration pages';
      $list_text = t('Attributes');
      $list_path = 'pm/attributes';
      $add_icon_type = 'pmattribute';
      $add_path = 'pm/attributes/add';
      $dt_id = 'pmattributes';
      break;

    case "pmconfiguration":
      $user_access_check = 'Project Management: access administration pages';
      $list_text = t('Configuration');
      $list_path = 'admin/settings/pm';
      $add_icon_type = '';
      $add_path = '';
      $dt_id = 'pmconfiguration';
      break;

    case "pmexpense":
      $user_access_check = 'Project Management expense: access';
      $list_text = t('Expenses');
      $list_path = 'pm/expenses';
      $add_icon_type = 'pmexpense';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pmexpenses';
      break;

    case "pminvoice":
      $user_access_check = 'Project Management invoice: access';
      $list_text = t('Invoices');
      $list_path = 'pm/invoices';
      $add_icon_type = 'pminvoice';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pminvoices';
      break;

    case "pmknowledgebase":
      $user_access_check = 'Project Management knowledgebase: access';
      $list_text = t('Knowledge base');
      $list_path = 'pm/knowledgebase';
      $add_icon_type = 'pmknowledgebase';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pmknowledgebase';
      break;

    case "pmnote":
      $user_access_check = 'Project Management note: access';
      $list_text = t('Notes');
      $list_path = 'pm/notes/';
      $add_icon_type = 'pmnote';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pmnotes';
      break;

    case "pmorganization":
      $user_access_check = 'Project Management organization: access';
      $list_text = t('Organizations');
      $list_path = 'pm/organizations';
      $add_icon_type = 'pmorganization';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pmorganizations';
      break;

    case "pmperson":
      $user_access_check = 'Project Management person: access';
      $list_text = t('People');
      $list_path = 'pm/people/';
      $add_icon_type = 'pmperson';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pmpeople';
      break;

    case "pmproject":
      $user_access_check = 'Project Management project: access';
      $list_text = t('Projects');
      $list_path = 'pm/projects';
      $add_icon_type = 'pmproject';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pmprojects';
      break;

    case "pmtask":
      $user_access_check = 'Project Management task: access';
      $list_text = t('Tasks');
      $list_path = 'pm/tasks/';
      $add_icon_type = 'pmtask';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pmtasks';
      break;

    case "pmteam":
      $user_access_check = 'Project Management team: access';
      $list_text = t('Teams');
      $list_path = 'pm/teams';
      $add_icon_type = 'pmteam';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pmteams';
      break;

    case "pmticket":
      $user_access_check = 'Project Management ticket: access';
      $list_text = t('Tickets');
      $list_path = 'pm/tickets/';
      $add_icon_type = 'pmticket';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pmtickets';
      break;

    case "pmtimetracking":
      $user_access_check = 'Project Management timetracking: access';
      $list_text = t('Timetrackings');
      $list_path = 'pm/timetrackings';
      $add_icon_type = 'pmtimetracking';
      $node_links_key = 'timetrackings';
      $add_path = 'node/add/'. $destination_module;
      $dt_id = 'pmtimetrackings';
      break;
  }

  if (($destination_module=='pmconfiguration' && user_access($user_access_check)) || (module_exists($destination_module) && user_access($user_access_check))) {
    if ($node_nid == 0) {
      $params = array();
    }
    else {
      $params = array('query' => array($params_key => $node_nid));
    }
    $v = l($list_text, $list_path, $params);

    if (!$add_icon_type=='') {
      $i = new stdClass();
      $i->type = $add_icon_type;
      if ($node_nid == 0) {
        $params = $_GET;
      }
      else {
        $params = $_GET;
        $params[$params_key] = $node_nid;
      }
      $nmb_itms = _pm_number_of_items($source_module, $destination_module, $node_nid);
      $nmb_itms = theme('pm_number_items', $nmb_itms);
      $v .= $nmb_itms . pm_icon_add($add_path, $i, $params);
    }

    if ($node_nid == 0) {
      $r = variable_get('pm_icons_display', TRUE) ? '<dt id="'. $dt_id .'" class="pmcomponent">' : '<dt class="pmcomponent">';
      $r .= $v;
      $r .= '</dt>';
    }
    else {
      $r = array(
        '#prefix' => variable_get('pm_icons_display', TRUE) ? '<dt id="'. $dt_id .'" class="pmcomponent">' : '<dt class="pmcomponent">',
        '#suffix' => '</dt>',
        '#value' => $v,
        '#weight' => $weight,
      );
    }
    return $r;
  }
}

function theme_pm_number_items($number) {
  $content = '';
  if ($number !== '') {
    $content .= '<span class="pmlinks-count">('. $number .')</span>';
  }
  return $content;
}

function theme_pm_attribute_list($form) {
  drupal_add_tabledrag('attributes', 'order', 'sibling', 'attribute-weight');

  $header = array();
  $row = array();
  $rows = array();

  $header = $form['form']['header']['#value'];
  unset($form['form']['header']);

  if (isset($form['form']['attributes'])) {
    foreach (element_children($form['form']['attributes']) as $key) {
      $form['form']['attributes'][$key]['attribute_weight_'. $key]['#attributes']['class'] = array('attribute-weight');
      $domain = check_markup($form['form']['attributes'][$key]['attribute_domain_'. $key]['#value']);
      $isdefault = $form['form']['attributes'][$key]['attribute_default_'. $key]['#default_value'];
      if ($isdefault) {
        $ischecked = 'checked="checked"';
      }
      else {
        $ischecked = '';
      }
      $domain_name = 'attribute_default_'. str_replace(' ', '|', $domain);
      $default_ctl = '<input type="radio" name="'. $domain_name .'" value="'. $key .'" '. $ischecked .'"/>';
      $data = array(
        $domain,
        check_markup($form['form']['attributes'][$key]['attribute_akey_'. $key]['#value']),
        check_markup($form['form']['attributes'][$key]['attribute_avalue_'. $key]['#value']),
        drupal_render($form['form']['attributes'][$key]['attribute_isactive_'. $key]),
        $default_ctl,
        drupal_render($form['form']['attributes'][$key]['attribute_weight_'. $key]),
        array(
          'data' => $form['form']['attributes'][$key]['attribute_operations_'. $key]['#value'],
          'class' => 'pm_list_operations',
        ),
      );
      $row['data'] = $data;
//      $row['class'] = empty($row['class']) ? array('draggable') : $row['class'][] = ' draggable';
      $rows[] = $row;
    }
  }
  $o = theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => 'attributes')));
  return $o;
}
