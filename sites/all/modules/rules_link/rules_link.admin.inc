<?php

/**
 * @file
 * Generate a admin UI.
 */

/**
 * UI controller.
 */
class RulesLinkUIController extends EntityDefaultUIController {

  /**
   * Overrides EntityDefaultUIController::hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $id_count = count(explode('/', $this->path));
    $wildcard = isset($this->entityInfo['admin ui']['menu wildcard']) ? $this->entityInfo['admin ui']['menu wildcard'] : '%entity_object';

    $items[$this->path]['description'] = 'Manage links that trigger rules.';
    $items[$this->path . '/manage/' . $wildcard . '/components'] = array(
      'title' => t('Configure rules'),
      'page callback' => 'drupal_get_form',
      'page arguments' => array('rules_link_component_form', $this->entityType, $id_count + 1),
      'load arguments' => array($this->entityType),
      'access callback' => 'entity_access',
      'access arguments' => array('update', $this->entityType, $id_count + 1),
      'file' => 'rules_link.admin.inc',
      'file path' => drupal_get_path('module', 'rules_link'),
      'type' => MENU_LOCAL_TASK,
      'weight' => 2,
    );
    return $items;
  }

  /**
   * Overrides EntityDefaultUIController::overviewTableHeaders().
   */
  protected function overviewTableHeaders($conditions, $rows, $additional_header = array()) {
    $additional_header[] = t('Entity');
    return parent::overviewTableHeaders($conditions, $rows, $additional_header);
  }

  /**
   * Overrides EntityDefaultUIController::overviewTableRow().
   */
  protected function overviewTableRow($conditions, $id, $entity, $additional_cols = array()) {
    // Add a column showing the entity type.
    $entity_info = entity_get_info($entity->entity_type);
    $additional_cols[] = $entity_info['label'];

    return parent::overviewTableRow($conditions, $id, $entity, $additional_cols);
  }

  /**
   * Overrides EntityDefaultUIController::entityFormSubmitBuildEntity().
   */
  public function entityFormSubmitBuildEntity($form, &$form_state) {
    $rules_link = $form_state[$this->entityType];
    $values = $form_state['values'];

    $rules_link->name = $values['name'];
    $rules_link->label = $values['label'];
    $rules_link->entity_type = $values['entity_type'];
    $rules_link->path = $values['path'];
    $rules_link->settings['text'] = $values['text'];
    $rules_link->settings['link_type'] = $values['link_type'];
    $rules_link->settings['bundles'] = $values['bundles'];
    $rules_link->settings['entity_link'] = isset($values['entity_link']) ? $values['entity_link'] : '';
    if ($rules_link->settings['link_type'] == 'confirm') {
      $rules_link->settings['confirm_question'] = $values['question'];
      $rules_link->settings['confirm_description'] = $values['description'];
    }
    return $rules_link;
  }
}

/**
 * Generates the rules link editing form.
 */
function rules_link_form($form, &$form_state, $rules_link, $op = 'edit') {
  drupal_add_css(drupal_get_path('module', 'rules_link') . '/rules_link.css', 'file');

  if ($op == 'clone') {
    $rules_link->label .= ' (cloned)';
    $rules_link->name .= '_cloned';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => isset($rules_link->label) ? $rules_link->label : '',
    '#description' => t('The human-readable name of this rules link'),
    '#required' => TRUE,
    '#size' => 30,
  );

  $form['name'] = array(
    '#type' => 'machine_name',
    '#description' => t('A unique machine-readable name for this rules link. It must only contain lowercase letters, numbers, and underscores and must not begin with a number.'),
    '#default_value' => isset($rules_link->name) ? $rules_link->name : '',
    '#disabled' => $rules_link->hasStatus(ENTITY_IN_CODE) && $op != 'clone',
    '#required' => TRUE,
    '#maxlength' => 32,
    '#machine_name' => array(
      'exists' => 'rules_link_get_links',
      'source' => array('label'),
    ),
  );

  $entity_options = array();
  $entities = entity_get_info();
  foreach ($entities as $key => $entity) {
    $entity_options[$key] = t($entity['label']);
  }

  $default_entity = isset($form_state['values']['entity_type']) ? $form_state['values']['entity_type'] : (isset($rules_link->entity_type) ? $rules_link->entity_type : 'node');

  $form['entity_type'] = array(
    '#title' => t('Entity Type'),
    '#description' => t('Enity type to which the link should be attached to.'),
    '#default_value' => $default_entity,
    '#options' => $entity_options,
    '#required' => TRUE,
    '#type' => 'select',
    '#maxlength' => 32,
    '#ajax' => array(
      'callback' => 'rules_link_bundle_js_callback',
      'wrapper' => 'rules-link-bundle',
      'speed' => 'fast',
    ),
  );


  $bundle_options = array();
  if (isset($form_state['clicked_button']) && $form_state['clicked_button']['#parents'][0] == 'show_all') {
    foreach ($entities as $key => $entity) {
      foreach ($entity['bundles'] as $key => $bundle) {
        $bundle_options[$key] = $bundle['label'];
      }
    }
  }
  else {
    foreach ($entities[$default_entity]['bundles'] as $key => $bundle) {
      $bundle_options[$key] = isset($bundle['label']) ? $bundle['label'] : $key;
    }
  }

  $form['bundle_wrapper'] = array(
    '#prefix' => '<div id="rules-link-bundle">',
    '#suffix' => '</div>',
  );

  $form['bundle_wrapper']['bundles'] = array(
    '#title' => t('Bundles'),
    '#description' => t('Bundles to which the link should be attached to. If left empty, the link is not restricted for any bundles.'),
    '#type' => 'select',
    '#options' => $bundle_options,
    '#default_value' => isset($rules_link->settings['bundles']) ? $rules_link->settings['bundles'] : array(),
    '#multiple' => TRUE,
  );
  // If the entity type does not make use of bundles, make sure we are not
  // restricting by bundle.
  $entity_info = entity_get_info($default_entity);
  if (empty($entity_info['entity keys']['bundle'])) {
    $form['bundle_wrapper']['bundles']['#access'] = FALSE;
    $form['bundle_wrapper']['bundles']['#value'] = array();
  }

  $html_id_show_all= drupal_html_id('rules-link-show-all-wrapper');

  // Button for users without js.
  $form['show_all'] = array(
    '#type' => 'button',
    '#value' => t('Show All'),
    '#prefix' => "<div id='$html_id_show_all'>",
    '#suffix' => '</div>'
  );

  // Hide the button for users with javascript.
  drupal_add_js('(function ($) { $("#' . $html_id_show_all . '").hide() }(jQuery));',
    array('type' => 'inline', 'scope' => 'footer')
  );


  $form['text'] = array(
    '#title' => t('Link text'),
    '#type' => 'textfield',
    '#default_value' => isset($rules_link->settings['text']) ? $rules_link->settings['text'] : '',
    '#description' => t('The text of the link.'),
    '#required' => TRUE,
    '#size' => 30,
  );



  $form['link_type'] = array(
    '#type' => 'radios',
    '#title' => t('Link type'),
    '#default_value' => isset($rules_link->settings['link_type']) ? $rules_link->settings['link_type'] : 'token',
    '#options' => array('javascript' => t('Javascript'), 'token' => t('Normal'), 'confirm' => t('Confirmation')),
  );

  $form['confirm']['confirm_question'] = array(
    '#type' => 'textfield',
    '#title' => t('Confirm question'),
    '#default_value' => isset($rules_link->settings['confirm_text']) ? $rules_link->settings['confirm_text'] : '',
    '#required' => TRUE,
    '#weight' => 50,
    '#states' => array(
      // Show the form only when the link type is confirm.
      'visible' => array(
        'input[name="link_type"]' => array('value' => 'confirm'),
      ),
    ),
  );

  $form['confirm'] = array(
    '#type' => 'fieldset',
    '#title' => 'Confirmation form settings.',
    '#states' => array(
      // Show the form only when the link type is confirm.
      'visible' => array(
        'input[name="link_type"]' => array('value' => 'confirm'),
      ),
    ),

  );
  $form['confirm']['question'] = array(
    '#type' => 'textfield',
    '#title' => t('Confirm question'),
    '#description' => t('The question that should appear, when confirmation form is shown.'),
    '#default_value' => isset($rules_link->settings['confirm_question']) ? $rules_link->settings['confirm_question'] : '',
  );

  $form['confirm']['description'] = array(
    '#type' => 'textfield',
    '#title' => t('Confirm description'),
    '#description' => t('The description that should appear, when confirmation form is shown.'),
    '#default_value' => isset($rules_link->settings['confirm_description']) ? $rules_link->settings['confirm_description'] : '',
  );

  global $base_url;
  $form['path'] = array(
    '#title' => t('Path'),
    '#description' => t('(Optional) Path for the link. It not set a default link will be generated.'),
    '#default_value' => isset($rules_link->path) ? $rules_link->path : '',
    '#type' => 'textfield',
    '#field_prefix' => $base_url . '/',
  );

  $form['entity_link'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show link when entity is rendered'),
    '#description' => t('If checked, the link is shown when viewing an entity to which the bundle and the visibility conditions apply. Only applies to displayed entity types and if no addition variables were added.'),
    '#default_value' => isset($rules_link->settings['entity_link']) ? $rules_link->settings['entity_link'] : FALSE,
  );

  if ($op == 'add') {
    RulesPluginUI::formDefaults($form, $form_state);
    $rules_link_temp_component = rules_plugin_factory('and');
    $rules_link_temp_component->form($form['variables'], $form_state, array('show settings' => TRUE, 'button' => TRUE, 'init' => TRUE));
    unset($form['variables']['settings']['label']);
    unset($form['variables']['settings']['name']);
    unset($form['variables']['settings']['tags']);

    $form['variables']['settings']['vars']['#title'] = t('Additional Variables');
    $form['variables']['settings']['vars']['#description'] = t('Here you can add additional variable, which should be used apart from the entity type by the access conditions and the rule sets.') . ' ' . $form['variables']['settings']['vars']['#description'];

    $form['variables']['settings']['#collapsible'] = FALSE;
    $form['variables']['settings']['#type'] = 'container';
    $form['variables']['settings']['label']['#default_value'] = '';
    $form['variables']['settings']['#weight'] = -1;

    // Add JS file that sets the correct type, label and machine name for the
    // selected entity type.
    drupal_add_js(drupal_get_path('module', 'rules_link') . '/rules_link.admin.js', 'file');
    $form['variables']['settings']['vars']['items'][0]['type']['#default_value'] = 'node';
    $form['variables']['settings']['vars']['items'][0]['type']['#disabled'] = TRUE;
    //$form['variables']['settings']['vars']['items'][0]['type']

    $form['variables']['settings']['vars']['items'][0]['label']['#default_value'] = 'node';
    $form['variables']['settings']['vars']['items'][0]['label']['#disabled'] = TRUE;

    $form['variables']['settings']['vars']['items'][0]['name']['#default_value'] = 'node';
    $form['variables']['settings']['vars']['items'][0]['name']['#disabled'] = TRUE;

    // Hide the rule elements stuff for now.
    foreach (array('elements', 'negate') as $key) {
      $form[$key]['#access'] = FALSE;
    }
    foreach (array('active', 'weight') as $key) {
      $form['settings'][$key]['#access'] = FALSE;
    }
    unset($form['variables']['negate']);

    $form_state['rules_link_temp_component'] = &$rules_link_temp_component;

    $form['entity_link']['#states'] = array(
      // Disable this form if additional variables were added.
      'disabled' => array(
        'input[name="settings[vars][items][1][name]"]' => array('filled' => TRUE),
      ),
      'unchecked' => array(
        'input[name="settings[vars][items][1][name]"]' => array('filled' => TRUE),
      ),
    );
  }
  else {
    $condition_set = rules_link_load_condition_set($rules_link);
    $condition_vars = $condition_set->componentVariables();
    $form['entity_link']['#disabled'] = count($condition_vars) > 1 ? TRUE : FALSE;

    $form['actions']['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Save Rules Link'),
      '#weight' => 40,
    );
  }
  return $form;
}

/**
 * Callback for the select box for bundles.
 */
function rules_link_bundle_js_callback($form, $form_state) {
  return $form['bundle_wrapper'];
}

/**
 * Validation form for editing form.
 */
function rules_link_form_validate(&$form, &$form_state) {
  $rules_link = entity_ui_form_submit_build_entity($form, $form_state);

  if (!entity_property_verify_data_type($rules_link->name, 'token')) {
    form_error($form['name'], t('The name "%name" is not a valid name. Please select a different name.', array('%name' => $rules_link->name)));
  }

  $path = empty($rules_link->path) ? $rules_link->name : $rules_link->path;

  $menu_item = menu_get_item($path);
  $lookup_path = drupal_lookup_path('source', $path);

  if (!empty($menu_item) || !empty($lookup_path)) {
    form_error($form['path'], t('The path "%path" is already in use. This system cannot override existing paths. Please select a different name or enter a different path.', array('%path' => $path)));
  }

  foreach (rules_link_get_links() as $link) {
    if ($link->path == $path && $link->name != $rules_link->name) {
      form_error($form['path'], t('The path "%path" is taken by the rules link "%link". This system cannot override existing paths.',
        array(
          '%path' => $path,
          '%link' => $link->name,
        )
      ));
    }
  }
}

/**
 * Form API submit callback for the type form.
 */
function rules_link_form_submit(&$form, &$form_state) {
  $rules_link = entity_ui_form_submit_build_entity($form, $form_state);
  $form_state['redirect'] = 'admin/config/workflow/rules_links';


  if (empty($rules_link->path)) {
    $rules_link->path = $rules_link->name;
  }

  if ($form_state['op'] == 'add') {
    $form_state['redirect'] = 'admin/config/workflow/rules_links/manage/' . $rules_link->name;
    $rule_set = rules_link_load_rules_set($rules_link);
    $condition_set = rules_link_load_condition_set($rules_link);
    $rules_set_vars = &$rule_set->componentVariables();
    $condition_vars = &$condition_set->componentVariables();

    // Remove the first element, since it is decoration only and it might be
    // wrong in case Javascript is disabled.
    array_shift($form_state['values']['settings']['vars']['items']);
    foreach ($form_state['values']['settings']['vars']['items'] as $var) {
      if ($var['type'] !== '0') {
        $val = array(
          'label' => $var['label'],
          'type' => $var['type'],
        );
        $rules_set_vars[$var['name']] = $val;
        $condition_vars[$var['name']] = $val;
      }
    }

    $condition_set->label = 'Rules link: ' . $rules_link->label . ' condition';
    $condition_set->save(rules_link_get_condition_set_name($rules_link), 'rules_link');
    $rule_set->label = 'Rules link: ' . $rules_link->label . ' rules set';
    $rule_set->save(rules_link_get_rules_set_name($rules_link), 'rules_link');

    drupal_set_message(t('Your Rules Link has been created along with the required components. Please remember to set <a href="!url">%link</a> for your link and to add actions to your reactions rule.', array('%link' => t('the permissions'), '!url' => url('admin/people/permissions', array('fragment' => 'module-rules_link')))));
  }
  else {
    drupal_set_message(t('Your Rules Link has been saved.'));
  }

  // Save and go back.
  $rules_link->save();
}


/**
 * Form function for the rules link components.
 */
function rules_link_component_form($form, &$form_state, $entity_type, $rules_link) {
  $form = array();
  $form_state['rules_link'] = $rules_link;

  $condition = rules_link_load_condition_set($rules_link);
  $condition->form($form['condition_set'], $form_state);

  $form['condition_set']['elements']['#caption'] = '';
  $form['condition_set']['help']['#title'] = t('Access conditions');
  $form['condition_set']['help']['#type'] = 'item';
  $form['condition_set']['help']['#markup'] = t('The access conditions can additionally to <a href="!url">%link</a> specify, when to show the rules links.', array('%link' => t('the permissions'), '!url' => url('admin/people/permissions', array('fragment' => 'module-rules_link'))));


  // Since we never want to negate the result, we can hide the form.
  unset($form['condition_set']['negate']);
  $form['condition_set']['#tree'] = TRUE;

  $rule_set = rules_link_load_rules_set($rules_link);
  $rule_set->form($form['rule_set'], $form_state, array('show settings' => TRUE));

  // Correct the state setup - default ruleset form doesn't expect this structure
  $form['rule_set']['settings']['access']['permissions']['#states'] = array(
    'visible' => array(
      ':input[name="rule_set[settings][access][access_exposed]"]' => array('checked' => TRUE),
    ),
  );

  $form['rule_set']['elements']['#caption'] = '';
  $form['rule_set']['#tree'] = TRUE;

  $form['rule_set']['help']['#title'] = t('Reactions');
  $form['rule_set']['help']['#type'] = 'item';
  $form['rule_set']['help']['#markup'] = t('To output a system message, simply use the "Show a message on the site" action in one of your rules. Javascript links will replace the link with the text from the system message.');


  $form['rule_set']['settings']['vars']['#description'] .= '<br/>' . t('Please also note that Rules Link only checks if there are enough variables available, but not if the entities could be loaded. You will have to check that your self in your components.');
  $form['rule_set']['settings']['label']['#access'] = FALSE;
  $form['rule_set']['settings']['name']['#type'] = 'value';
  $form['rule_set']['settings']['tags']['#access'] = FALSE;
  $form['rule_set']['settings']['vars']['items'][$rules_link->entity_type]['#disabled'] = TRUE;

  $form_state['rules_link_condition_set'] = $condition;
  $form_state['rules_link_rules_set'] = $rule_set;


  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Rules Link'),
    '#weight' => 40,
  );
  return $form;
}

function rules_link_component_form_validate(&$form, &$form_state) {
  $form_state['rules_link_condition_set']->form_validate($form['condition_set'], $form_state);
  $form_state['rules_link_rules_set']->form_validate($form['rule_set'], $form_state);
}

/**
 * Form API submit callback for the type form.
 */
function rules_link_component_form_submit(&$form, &$form_state) {
  $rules_set_vars = $form_state['rules_link_rules_set']->componentVariables();
  $form_state['rules_link_rules_set']->form_submit($form['rule_set'], $form_state);

  $condition_vars = &$form_state['rules_link_condition_set']->componentVariables();
  foreach ($condition_vars as $key => $value) {
    unset($condition_vars[$key]);
  }
  foreach ($rules_set_vars as $key => $value) {
    $condition_vars[$key] = $value;
  }
  $form_state['rules_link_condition_set']->form_submit($form['condition_set'], $form_state);

  // If the rule is renamed, rename also the rules set.
  if ($form_state['rules_link_condition_set']->name != rules_link_get_condition_set_name($form_state['rules_link'])) {
    $form_state['rules_link_condition_set']->label = 'Rules link: ' . $form_state['rules_link']->label . ' condition';
    $form_state['rules_link_condition_set']->save(rules_link_get_condition_set_name($form_state['rules_link']), 'rules_link');
  }

  // If the rule is renamed, rename also the rules set.
  if ($form_state['rules_link_rules_set']->name != rules_link_get_rules_set_name($form_state['rules_link'])) {
    $form_state['rules_link_rules_set']->label = 'Rules link: ' . $form_state['rules_link']->label . ' rules set';
    $form_state['rules_link_rules_set']->save(rules_link_get_rules_set_name($form_state['rules_link']), 'rules_link');
  }

  // Save the permission matrix if access is exposed
  if (isset($form_state['values']['rule_set']['settings']['access']) && !empty($form_state['values']['rule_set']['settings']['access']['access_exposed'])) {
    // Save the permission matrix.
    foreach ($form_state['values']['rule_set']['settings']['access']['permissions']['matrix']['checkboxes'] as $rid => $value) {
      user_role_change_permissions($rid, $value);
    }
  }

  // If an additional variable was added, then disable 'show link in entity'.
  if (count($rules_set_vars) > 1) {
    $form_state['rules_link']->settings['entity_link'] = FALSE;
    $form_state['rules_link']->save();
  }

  drupal_set_message(t('Your Rules Link components has been saved.'));
}
