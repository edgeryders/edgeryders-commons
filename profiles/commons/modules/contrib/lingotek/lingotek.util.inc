<?php

/**
 * @file
 * Utility functions.
 */

/**
 * Drupal JSON Output - CORS - allows cross domain requests
 * (adapted from: drupal_json_output)
 * @param type $var
 */
function lingotek_json_output_cors($var = NULL, $status = "200", $params = array()) {
  // We are returning JSON, so tell the browser.
  $methods_allowed = isset($params['methods_allowed']) ? $params['methods_allowed'] : 'GET,PUT,POST,DELETE';
  drupal_add_http_header('Status', $status);
  drupal_add_http_header('Content-Type', 'application/json');
  drupal_add_http_header('Access-Control-Allow-Origin', "*");
  drupal_add_http_header('Access-Control-Allow-Methods', $methods_allowed);
  drupal_add_http_header('Access-Control-Allow-Headers', 'Content-Type');
  drupal_add_http_header('X-Powered-By', 'Lingotek');
  if (isset($var)) {
    echo drupal_json_encode($var);
  }
}

/*
 * Helper function, for storing additional information with an Entity.
 * Example usage (GET):
 *    lingotek_keystore($entity_type, 'all') - returns all entities and properties
 *    lingotek_keystore($entity_type, 5) - returns all properties for the specified Entity ID (i.e., 5)
 *    lingotek_keystore($entity_type, 5,'node_sync_status') - returns the value for the specified property (i.e., node_sync_status) for the specified Entity ID (i.e., 5)
 * Example usage (SET):
 *     lingotek_keystore($entity_type, 5,'node_sync_status','CURRENT') - sets the value to 'CURRENT' for the property 'node_sync_status' of Entity 5 of type $entity_type
 *
 * @param $nid
 *  Entity ID.
 * @param $key
 *  (optional) "" Key to look up in the database.  If no key is specified, then
 *  every key for the Entity is returned with it's value.
 * @param $value
 *  (optional) "" Value to save.  If "" or no value is given for $value, then
 *  it will return the $value of the first found instance of the specified $key
 *  in the database.  Returns FALSE if no value is found.
 */

function lingotek_keystore($entity_type, $entity_id, $key = "", $value = "") {
  if ($entity_id == 'all') {
    $lingo_node = array();
    $result = db_select('lingotek_entity_metadata', 'n')
      ->condition('entity_type', $entity_type)
      ->fields('n', array(db_escape_field('entity_id'), db_escape_field('entity_key'), db_escape_field('value')))
      ->execute();
    foreach ($result as $row) {
      $lingo_node[$row->nid][$row->entity_key] = check_plain($row->value);
    }
    return $lingo_node;
  }
  if ($entity_id == -1) {
    LingotekLog::error("Invalid -1 entity ID passed to lingotek_keystore().", array('@nid' => $entity_id, '@key' => $key, '@value' => $value));
    return FALSE;
  }
  if (is_numeric($entity_id) && $entity_id) {
    //Return an array with all of the keys and values.
    if ($key === "") {
      $lingo_node = array();

      $result = db_select('lingotek_entity_metadata', 'n')
        ->fields('n', array(db_escape_field('entity_key'), db_escape_field('value')))
        ->condition('entity_type', $entity_type)
        ->condition(db_escape_field('entity_id'), $entity_id)
        ->execute();
      foreach ($result as $row) {
        $lingo_node[$row->entity_key] = check_plain($row->value);
      }

      return $lingo_node;
    }
    //Get value for the specified key, only returns the first match
    elseif ($value === "") {
      $result = db_select('lingotek_entity_metadata', 'n')
        ->fields('n', array(db_escape_field('value')))
        ->condition('entity_type', $entity_type)
        ->condition(db_escape_field('entity_id'), $entity_id)
        ->condition(db_escape_field('entity_key'), $key)
        ->execute();
      $row = $result->fetchObject();

      if ($row) {
        return check_plain($row->value);
      }
      else {
        return FALSE;
      }
    }
    //Insert/Update the specified key and value
    else {
      $row = array(
        db_escape_field('entity_type') => $entity_type,        
        db_escape_field('entity_id') => $entity_id,
        db_escape_field('entity_key') => $key,
        db_escape_field('value') => $value,
      );

      if (lingotek_keystore($entity_type, $entity_id, $key) === FALSE) { //Insert
        drupal_write_record('lingotek_entity_metadata', $row);
        return "$entity_id : $key => $value INSERTED";
      }
      else { //Update
        drupal_write_record('lingotek_entity_metadata', $row, array(db_escape_field('entity_type'), db_escape_field('entity_id'), db_escape_field('entity_key')));
        return "$entity_id : $key => $value UPDATED";
      }
    }
  }
  else {
    LingotekLog::error("Invalid entity ID (@entity_id) passed to lingotek_keystore().", array('@entity_id' => $entity_id, '@key' => $key, '@value' => $value));
    return FALSE;
  }
}

/*
 * Helper function to delete a specified variable from the Lingotek table
 *
 * @param int $nid
 *    node id for the variable that needs to be deleted
 *
 * @param string $lingokey
 *    variable name to be deleted
 *
 */

function lingotek_keystore_delete($entity_type, $id, $key) {
  $query = db_delete('lingotek_entity_metadata');
  $query->condition('entity_type', $entity_type);
  $query->condition('entity_id', $id);
  $query->condition('entity_key', $key);
  $query->execute();
}

/**
 * Helper function to delete a specified variable from multiple nodes in the Lingotek table
 *
 * @param int array $nids
 *    array of node ids for the variable that needs to be deleted
 *    if a single nid is passed in, it will be converted to an array before processing
 *
 * @param string $lingokey
 *    variable name to be deleted
 *
 * @param string $condition
 *    additional condition checking (i.e. 'LIKE', '<' '=' '>', etc...)
 *    defaults to '='
 */
function lingotek_keystore_delete_multiple($entity_type, $nids = array(), $lingokey, $condition = '=') {
  if (!is_array($nids)) {
    $nids = array($nids);
  }

  $query = db_select('lingotek_entity_metadata', 'l') // Make sure that the variable exists in the table for every input nid
      ->fields('l', array('entity_id'))
      ->condition('entity_type', $entity_type)
      ->condition('entity_id', $nids, 'IN')
      ->condition('entity_key', $lingokey, $condition);
  $delete_nids = $query->execute()->fetchCol();

  if (!empty($delete_nids)) {
    $delete = db_delete('lingotek_entity_metadata') // delete for every input nid where the variable exists
        ->condition('entity_type', $entity_type)
        ->condition('entity_id', $delete_nids, 'IN')
        ->condition('entity_key', $lingokey, $condition)
        ->execute();
  }
}

function lingotek_keystore_delete_all($entity_type, $id) {
  db_delete('lingotek_entity_metadata')
    ->condition('entity_type', $entity_type)
    ->condition('entity_id', $id)->execute();
}

function lingotek_keystore_delete_all_multiple($entity_type, $ids) {
  db_delete('lingotek_entity_metadata')
    ->condition('entity_type', $entity_type)
    ->condition('entity_id', $ids, 'IN')->execute();
}

/*
 * Filter for removing unchecked checkboxes from an array for drupal forms
 */

function lingotek_unselected($var) {
  return ($var != "0");
}

/*
 * COALESCE(LingotekVariable, DrupalVariable, Default)
 */

function lingotek_variable_get($var, $drupal, $default) {
  if ($var === FALSE) {
    return variable_get($drupal, $default);
  }
  else {
    return $var;
  }
}

/*
 * Get a string representation of an object
 *
 * @param $obj
 *  Object to be var_dump'ed
 * @return
 *  String with the output of var_dump
 */

function lingotek_dump($obj) {
  ob_start();
  var_dump($obj);
  $string = ob_get_contents();
  ob_end_clean();
  return $string;
}

/**
 * Formats a complex object for presentation in a watchdog message.
 */
function watchdog_format_object($object) {
  return '<pre>' . htmlspecialchars(var_export($object, TRUE)) . '</pre>';
}

function lingotek_oneoff_translate($node) {
  // TODO: Run checks on this if necessary
  // (It appears this is currently unnecessary, as all nodes
  // that make it to this point are already requested for
  // translation.)
  return TRUE;
}

function lingotek_get_translatable_field_types() {
  // What types of fields DO we translate?
  $included_fields = array('text', 'text_long', 'text_textfield', 'text_textarea', 'text_textarea_with_summary', 'field_collection_embed');
  if (module_exists('link')) {
    $included_fields[] = 'link_field';
  }
  return $included_fields;
}

function lingotek_get_translatable_fields_by_content_type($entity_type, $type) {
  $all_fields = field_info_instances($entity_type, $type);
  $translatable_field_types = lingotek_get_translatable_field_types();
  $desired_fields = array();
  foreach ($all_fields as $field_name => $field_info) {
    if (in_array($field_info['widget']['type'], $translatable_field_types)) {
      $desired_fields[$field_name] = $field_name;
    }
  }
  return $desired_fields;
}

function lingotek_get_enabled_fields($entity_type, $bundle) {
  $translate = variable_get('lingotek_enabled_fields', array());
  $fields_desired = isset($translate[$entity_type][$bundle]) ? $translate[$entity_type][$bundle] : array();
  if (empty($fields_desired)) {
    //this won't work for anything more than nodes yet
    $fields_desired = lingotek_get_translatable_fields_by_content_type($bundle);
  }

  return $fields_desired;
}

/**
 * Return the xml representation of the source content for a node.
 *
 * @param object $node
 *   A Drupal node.
 *
 * @return string
 *   The XML representation of the node in Lingotek format.
 */
function lingotek_entity_xml_body($entity_type, $entity) {
  $translatable = array();

  $translate = variable_get('lingotek_enabled_fields', array());
  list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);
  $fields_desired = isset($translate[$entity_type][$bundle]) ? $translate[$entity_type][$bundle] : array();
  if (empty($fields_desired) && lingotek_oneoff_translate($entity)) {
    $fields_desired = lingotek_get_translatable_fields_by_content_type($entity_type, $bundle);
  }

  foreach ($fields_desired as $value) {
    $field = field_info_field($value);
    if (isset($field)) {
      array_push($translatable, $value);
    }
  }

  $content = lingotek_xml_fields($entity, $translatable, $entity->language);
  
  /* deprecated with config translation
    //Menus related to the page:
    // Do we still want this? Config translation translates these items
    $menu = menu_link_get_preferred('node/' . $entity->nid);
    $txt = $menu['link_title'];
    if ($txt != "") {
    $content = $content . "<menu_title><![CDATA[$txt]]></menu_title>\n";
    } */

  //URL Alias related to the page:
  $url_alias_translation = $entity->lingotek['url_alias_translation'];
  if ($url_alias_translation == 1) {
    $conditions = array('source' => 'node/' . $entity->nid);
    if ($entity->language != LANGUAGE_NONE) {
      $conditions['language'] = $entity->language;
    }
    $path = path_load($conditions);
    if ($path !== FALSE) {
      $url = $path['alias'];
      $content = $content . "<url_alias><![CDATA[$url]]></url_alias>\n";
    }
  }

  return "<?xml version=\"1.0\" encoding=\"UTF-8\"?><contents>$content</contents>";
}

function lingotek_xml_fields($entity, $translatable, $language) {
  $content = '';
  
  foreach ($translatable as $field) {
    $content_container = & $entity->$field;

    $field_language = is_array($content_container) && array_key_exists($language, $content_container) ? $language : LANGUAGE_NONE;

    // Deal with not being initialized right, such as pre-existing titles.
    if (!isset($content_container[$field_language])) {
      continue;
    }

    // We may split compound Drupal fields into several Lingotek fields.
    $target_keys = array(
      'value' => '', // Most text fields
      'summary' => 'summary', // "Long text with summary" fields have this sub-field value as well.
    );
    if (module_exists('link')) {
      $target_keys['link'] = array(
        'url' => '',
        'title' => '',
      );
    }

    // Create fields from all target keys.
    foreach ($target_keys as $target_key => $element_suffix) {
      $array_key = NULL;
      if (is_array($element_suffix)) {
        foreach ($element_suffix as $tarkey => $val) {
          $array_key = $tarkey;
          continue;
        }
      }
      foreach ($content_container[$field_language] as $delta) {
        if (!empty($delta[$target_key]) || (isset($array_key) && !empty($delta[$array_key]))) {
          $element_name = $field;
          if ($target_key == 'value' && isset($delta['revision_id']) && module_exists('field_collection')) {
            $current_field = '<' . $element_name . '>';
            $enabled_fields = variable_get('lingotek_enabled_fields');
            $sub_entity = lingotek_entity_load_single('field_collection_item', $delta['value']);
            $sub_fields = field_info_instances('field_collection_item', $field);
            $translatable_field_types = lingotek_get_translatable_field_types();
            $translatable_sub_fields = array();
            foreach ($sub_fields as $sub_field => $f) {
              if (in_array($f['widget']['type'], $translatable_field_types) && isset($enabled_fields['field_collection_item'][$field]) && in_array($sub_field, $enabled_fields['field_collection_item'][$field])) {
                $translatable_sub_fields[] = $sub_field;
              }
            }
            $current_field .= lingotek_xml_fields($sub_entity, $translatable_sub_fields, $field_language);
            $current_field .= '</' . $element_name . '>';
            $content .= $current_field;
            continue;
          }
          if (!is_array($element_suffix) && !empty($element_suffix)) {
            $element_name .= '__' . $element_suffix;
          }
          $current_field = '<' . $element_name . '>';
          if (is_array($element_suffix)) {
            foreach ($element_suffix as $t_key => $t_val) {
              $delta[$t_key] = lingotek_filter_placeholders($delta[$t_key]);
              $current_field .= '<element><![CDATA[' . $delta[$t_key] . ']]></element>' . "\n";
            }
          }
          else {
            $delta[$target_key] = lingotek_filter_placeholders($delta[$target_key]);
            $current_field .= '<element><![CDATA[' . $delta[$target_key] . ']]></element>' . "\n";
          }
          $current_field .= '</' . $element_name . '>';
          $content .= $current_field;
        }
      }
    }
  }

  return $content;
}

/**
 * Outputs the support footer renderable array.
 */
function lingotek_support_footer() {
  return array(
    '#type' => 'markup',
    '#markup' => theme('table', array('header' => array(), 'rows' => array(
        array(t('<strong>Support Hours:</strong><br>9am - 6pm MDT'),
          t('<strong>Phone:</strong><br> (801) 331-7777'),
          t('<strong>Email:</strong><br> <a href="mailto:support@lingotek.com">support@lingotek.com</a>')
        )),
      'attributes' => array(
        'style' => 'width:500px; margin-top: 20px;'
      )
    ))
  );
}

/**
 * Menu access callback.
 *
 * Only display Lingotek tab for node types, which have translation enabled
 * and where the current node is not language neutral (which should span
 * all languages).
 */
function lingotek_access($node, $permission) {
  if (Lingotek::isSupportedLanguage($node->language) && node_access('update', $node) && $node->lingotek['profile'] != LingotekSync::PROFILE_DISABLED) {
    return user_access($permission);
  }
  return FALSE;
}

/*
 * Top-level menu item
 */

function lingotek_access_tlmi($permission) {
  $hide_top_level_menu_item = variable_get('lingotek_hide_tlmi', 0);
  if ($hide_top_level_menu_item)
    return FALSE;
  else
    return user_access($permission);
}

function lingotek_access_by_plan_type($types, $permission = NULL) {
  $account = LingotekAccount::instance();
  $access = FALSE;
  if (is_string($types)) {
    $types = array($types);
  }
  if (!is_array($types)) {
    return $access;
  }
  foreach ($types as $type) {
    $access = TRUE;
    if (!$account->isPlanType($type)) {
      return FALSE;
    }
  }
  return is_null($permission) ? $access : user_access($permission);
}

function lingotek_access_dev_tools($node, $permission) {
  // Special case:  hide the Lingotek Developer Tools when the node is managed by entity translation and has not been pushed to Lingotek
  // OR when not showing advanced features

  $user_access = user_access($permission);
  if (($user_access && module_exists('entity_translation') && entity_translation_node_supported_type($node->type) && !lingotek_node_pushed($node)) || !LingotekAccount::instance()->showAdvanced()) {
    return FALSE;
  }
  // Default: Standard user access
  return $user_access;
}

function lingotek_enabled_bundle($entity_type, $bundle) {
  $setting = variable_get('lingotek_entity_profiles');
  return isset($setting[$entity_type][$bundle]) && $setting[$entity_type][$bundle] != LingotekSync::PROFILE_DISABLED;
}

/**
 * Returns an array of disabled bundles for a given entity_type
 *
 * @return
 *   Array of bundle key values (e.g., 'article', 'page').
 */
function lingotek_get_disabled_bundles($entity_type) {
  return lingotek_get_bundles_by_profile($entity_type, LingotekSync::PROFILE_DISABLED);
}

function lingotek_get_bundles_by_profile($entity_type, $profile) {
  $entities = variable_get('lingotek_entity_profiles');
  $profiled_bundles = array();
  if (isset($entities[$entity_type])) {
    foreach ($entities[$entity_type] as $bundle_name => $cur_profile) {
      if ((string)$profile === $cur_profile) {
        $profiled_bundles[] = $bundle_name;
      }
    }
  }
  return $profiled_bundles;
}

/**
 * Returns whether the given node type has support for translations.
 *
 * @return
 *   Boolean value.
 */
function lingotek_supported_type($type) {
  $lingotek_supported_explicitly = variable_get('language_content_type_' . $type, NULL) != '0';
  return ($lingotek_supported_explicitly && lingotek_enabled_bundle('node', $type));
}

function lingotek_supported_node($node) {
  return $node->lingotek['profile'] != LingotekSync::PROFILE_DISABLED;
}

/**
 * Returns if the node type an entity_translation managed node
 *
 * @return
 *   Boolean value.
 */
function lingotek_managed_by_entity_translation($type) {
  return module_exists('entity_translation') ? entity_translation_node_supported_type($type) : FALSE;
}

/**
 * Returns whether the given node type is an entity_translation node and has been pushed to lingotek.
 *
 * @return
 *   Boolean value.
 */
function lingotek_node_pushed($node) {
  return isset($node->lingotek['document_id']) && !empty($node->lingotek['document_id']);
}

/**
 * Returns whether the given field type has support for translations.
 *
 * @return
 *   Boolean value.
 */
function lingotek_supported_field_type($type) {
  return in_array($type, array('text_long', 'text_with_summary', 'text')); //'taxonomy_term_reference'));
}

/**
 * Returns whether caching is enabled.
 *
 * @return
 *   Boolean value.
 */
function lingotek_do_cache() {
  return !(variable_get('lingotek_flush_cache', FALSE) && user_access('use lingotek developer tools'));
}

/**
 * Gets the phase ID of the "current" phase for a translation target.
 *
 * @param array $phases
 *   An array of phase data from the result of a getTranslationTarget Lingotek API call.
 *
 * @return int
 *   The Phase ID of the current phase. Note that if all phases are marked as complete,
 *   the ID of the last phase will be returned.
 */
function lingotek_current_phase($phases) {
  $phase_id = -1;

  $current_phase = 0;

  foreach ($phases as $phase) {
    if (!$phase->isMarkedComplete) {
      $phase_id = $phase->id;
      break;
    }
    $current_phase++;
  }

  // All phases are complete, use last phase as current.
  if (!empty($phases) && $phase_id == -1) {
    $last_phase = end($phases);
    $phase_id = $last_phase->id;
  }

  return $phase_id;
}

/**
 * Gets the Lingotek Source Language ( Drupal variable: lingotek_source_language).
 * Returns a language code (ie:  en / es / de)
 * Uses the Drupal default language as a fallback.
 */
function lingotek_get_source_language() {

  $source_language = variable_get('lingotek_source_language', NULL);
  if (empty($source_language)) {
    $drupal_default_language = language_default();
    $source_language = $drupal_default_language->language;
  }

  return $source_language;
}

// END:  lingotek_get_source_language()


/**
 * Return a whitelist of entity types supported for translation by the Lingotek module
 */
function lingotek_managed_entity_types($include_all = FALSE) {
  $type_info = entity_get_info();
  //$types = array_keys($type_info);

  $whitelist = array('node', 'comment', 'message_type'); // supported types
  if ($include_all) {
    // include the entities that should not normally be managed separately
    if (module_exists('field_collection')) {
      $whitelist[] = 'field_collection_item';
    }
  }
  $whitelist = array_flip($whitelist);
  $enabled_types = array_intersect_key($type_info, $whitelist);

  // labels
  if (isset($enabled_types['comment'])) {
    $enabled_types['comment']['label'] = 'Comments';
  }
  if (isset($enabled_types['node'])) {
    $enabled_types['node']['label'] = 'Nodes';
  }
  if (isset($enabled_types['message_type'])) {
    $enabled_types['message_type']['label'] = 'Message Types';
  }
  if (isset($enabled_types['field_collection_item'])) {
    $enabled_types['field_collection_item']['label'] = 'Field Collections';
  }

  return $enabled_types;
}

/**
 * Content node types linked to 'translatable' fields.
 */
function lingotek_translatable_node_types() {

  $types = array();

  $fields = lingotek_translatable_node_field_details();
  foreach ($fields as $field) {
    foreach ($field['bundles'] as $bundle) {
      $types[$bundle] = $bundle;
    }
  }

  if (count($types) > 0) {
    $types = array_keys($types);
  }

  return $types;
}

/**
 * Goes though ALL the fields in the system and gets the details about the ones that are marked 'translatable'.
 */
function lingotek_translatable_node_field_details() {

  $fields = field_info_fields();
  $translatable_fields = array();

  foreach ($fields as $field_id => $field) {
    foreach ($field['bundles'] as $type => $instance) {
      /*
        echo '<br>FieldID: ' . $field_id;
        echo '<br>Field: ' . $field;
        echo '<br>Type: ' . $type;
        echo '<br>Instance: ' . $instance;
       */

      if (field_is_translatable($type, $field)) {
        //echo '<br>Translatable: YES!' ;
        $field_db_table = array_keys($field['storage']['details']['sql']['FIELD_LOAD_CURRENT']);
        $field_db_table = array_shift($field_db_table);
        $translatable_fields[] = array(
          'entity_type' => $type,
          'machine_name' => $field['field_name'],
          'db_table' => $field_db_table,
          'bundles' => $field['bundles'][$type],
        );
      }
      //echo '<br>';
    }
  }

  /* Return data format
    array (
    0 =>
    array (
    'entity_type' => 'node',
    'machine_name' => 'body',
    'db_table' => 'field_data_body',
    'bundles' =>
    array (
    0 => 'page',
    1 => 'article',
    ),
    ),
    1 =>
    array (
    'entity_type' => 'node',
    'machine_name' => 'title_field',
    'db_table' => 'field_data_title_field',
    'bundles' =>
    array (
    0 => 'article',
    1 => 'page',
    ),
    ),
    )
   */
  return $translatable_fields;
}

// END:  lingotek_translatable_node_field_details()
// --- Active and Target Language management Functions

/**
 * Get the currently active languages for this Drupal installation.
 */
function lingotek_get_active_languages($get_details = FALSE) {
  $active_languages = current(language_list('enabled'));

  if ($get_details === FALSE) {
    $active_languages = array_keys($active_languages);
  }
  /*
    Get_Details -> FALSE
    array (
    0 => 'en',
    1 => 'es',
    )

    Get_Details -> TRUE
    array (
    'en' =>
    stdClass::__set_state(array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => '0',
    'javascript' => '',
    )),
   */

  return $active_languages;
}

/**
 * Get numbered array with all node source languages
 */
function lingotek_get_node_source_languages() {
  $lingo_langs = array();
  $query = db_select('node', 'n')->distinct()
      ->fields('n', array('language'));
  $query = $query->execute();
  $result = $query->fetchCol(0);
  foreach ($result as $lang) {
    $lingo_lang = Lingotek::convertDrupal2Lingotek($lang);
    if ($lingo_lang) {
      $lingo_langs[$lingo_lang] = $lingo_lang;
    }
  }
  return $lingo_langs;
}

// END:  lingotek_get_active_languages()

/**
 * Flags a target language as active:FALSE in the Target Language tracking.
 */
function lingotek_delete_target_language($lingotek_locale) {
  $result = FALSE;

  if (is_string($lingotek_locale) && strlen($lingotek_locale)) {

    if (Lingotek::convertDrupal2Lingotek(language_default()->language, FALSE) <> $lingotek_locale) {
      db_update('languages')
          ->fields(array(
            //'enabled' => 0,
            'lingotek_enabled' => 0,
          ))
          ->condition('lingotek_locale', $lingotek_locale) //->condition('language',  $drupal_language_code)
          ->execute();
      LingotekLog::info("Target language removed: @lingotek_locale"
          , array(
        '@lingotek_locale' => $lingotek_locale)
      );
    }

    // Removes the node sync target language entries from the lingotek table
    // and removes config chunk target language entries from lingotek_config_metadata.
    // LingotekSync::deleteTargetEntriesForAllDocs($lingotek_locale); // We leave the last updated statuses for reporting

    // Remove the Target Language from the Lingotek Project.
    $project_id = variable_get('lingotek_project', '');
    $api = LingotekApi::instance();
    $result = $api->removeTranslationTarget(NULL, $project_id, $lingotek_locale);
  }

  return $result;
}

/**
 * Sets the extended target language locale in the languages table and whether or not it is enabled
 * 
 * @param $drupal_language_code
 * @param $lingotek_enable whether or not to enable the language on TMS (default: 1)
 * @param $lingotek_locale the lingotek locale that the drupal code should be associated with (it will try to pick the right one when not passed in)
 * @param $api_add boolean whether or not to add the language to all documents in the project (default: TRUE)
 * 
 */
function lingotek_set_target_language($drupal_language_code, $lingotek_enable = 1, $lingotek_locale = NULL, $api_add = TRUE) {
  $result = FALSE;

  if (is_string($drupal_language_code) && strlen($drupal_language_code)) {
    $lingotek_locale = is_null($lingotek_locale) ? Lingotek::convertDrupal2Lingotek($drupal_language_code, FALSE) : $lingotek_locale;
    db_update('languages')
        ->fields(array(
          'enabled' => 1,
          'lingotek_enabled' => $lingotek_enable ? 1 : 0,
          'lingotek_locale' => $lingotek_locale
        ))
        ->condition('language', $drupal_language_code)
        ->execute();
    drupal_static_reset('language_list');
    LingotekLog::info("Target language added: @drupal_language_code (@lingotek_locale)", array(
      '@drupal_language_code' => $drupal_language_code,
      '@lingotek_locale' => $lingotek_locale));

    if ($lingotek_enable && $lingotek_locale && $api_add) { // Add the Target Language to the Lingotek Project.
      $api = LingotekApi::instance();
      $projects = LingotekSync::getSyncProjects();
      foreach ($projects as $project_id) {
        $result = $api->addTranslationTarget(NULL, $project_id, $lingotek_locale);
      }
    }
  }

  return $result;
}

function lingotek_lookup_language_by_locale($lingotek_locale) {
  $languages = language_list();
  foreach ($languages as $language) {
    if (isset($language->lingotek_locale) && strcmp($language->lingotek_locale, $lingotek_locale) == 0) {
      return $language;
    }
  }
  return FALSE;
}

function lingotek_lookup_locale_exists($drupal_language_code) {
  $languages = language_list();
  foreach ($languages as $target) {
    if (isset($target->language) && strcmp($target->language, $drupal_language_code) == 0) {
      return TRUE;
    }
  }
  return FALSE;
}

/**
 * Adds the target language as being enabled.
 */
function lingotek_add_target_language($lingotek_locale, $call_api = TRUE) {
  if (is_null($lingotek_locale)) {
    return FALSE;
  }
  lingotek_add_missing_locales(); // fills in any missing lingotek_locale values to the languages table
  $language = lingotek_lookup_language_by_locale($lingotek_locale);

  if ($language) {
    // ALREADY EXISTS IN LANGUAGE TABLE
    // If already in the languages table then just tack on the lingotek_locale and enable it
    $drupal_language_code = $language->language;
  }
  else {
    // DOES NOT EXIST, INSERT NEW INTO LANGUAGE TABLE
    // If not add it to the languages table first and then tack on the lingotek_locale and enable it
    $drupal_language_code = Lingotek::convertLingotek2Drupal($lingotek_locale, FALSE);
    if (lingotek_lookup_locale_exists($drupal_language_code)) { // drupal code is already being used, generate another
      $errors = array($drupal_language_code);
      $drupal_language_code = strtolower(str_replace("_", "-", $lingotek_locale));
      if (lingotek_lookup_locale_exists($drupal_language_code)) {
        $errors[] = $drupal_language_code;
        LingotekLog::error("Cannot add language code.  Attempted language codes already being used: !errors", array('!errors' => $errors));
        return FALSE; // do not add the language.
      }
    }

    $name = isset($_POST['language']) ? $_POST['language'] : NULL;
    $native = isset($_POST['native']) ? $_POST['native'] : NULL;
    $direction = isset($_POST['direction']) && (strcasecmp('RTL', $_POST['direction']) == 0 ) ? LANGUAGE_RTL : LANGUAGE_LTR;
    $domain = '';
    $prefix = '';
    locale_add_language($drupal_language_code, $name, $native, $direction, $domain, $prefix); // Function from the Locale module.
  }

  return lingotek_set_target_language($drupal_language_code, 1, $lingotek_locale, $call_api);
}

/**
 * Fills in any missing lingotek_locale values to the languages table
 */
function lingotek_add_missing_locales() {
  LingotekLog::trace(__METHOD__);
  $languages = language_list();
  $default_language = language_default();
  $update_static_language_list = FALSE;
  //$source_language = variable_get( 'lingotek_source_language', $default_language->language );
  foreach ($languages as $target) {
    if (isset($target->lingotek_locale) && !strlen($target->lingotek_locale)) {
      $drupal_language_code = $target->language;
      $lingotek_locale = Lingotek::convertDrupal2Lingotek($drupal_language_code, FALSE);
      lingotek_enable_language_by_code($drupal_language_code, $lingotek_locale);
      $update_static_language_list = TRUE;
    }
  }
  if ($update_static_language_list) {
    drupal_static_reset('language_list');
  }
}

/**
 * Add lingotek_locale and lingotek_enable to the language table for the passed in drupal_language_code 
 */
function lingotek_enable_language_by_code($drupal_language_code, $lingotek_locale = NULL) {
  $field_data = array(
    'enabled' => 1,
    //'lingotek_enabled' => $lingotek_enabled ? 1 : 0,
  );
  if (!is_null($lingotek_locale)) {
    $field_data['lingotek_locale'] = $lingotek_locale;
  }
  db_update('languages')
      ->fields($field_data)
      ->condition('language', $drupal_language_code)
      ->execute();
  return $lingotek_locale;
}

/**
 * Get only the languages that are enabled
 */
function lingotek_get_target_locales($codes_only = TRUE) {
  $target_languages = db_query("SELECT * FROM {languages} WHERE enabled = :enabled", array(':enabled' => 1))->fetchAll();
  $target_codes = array();
  foreach ($target_languages as $target_language) {
    $target_codes[] = $target_language->lingotek_locale;
  }
  return $codes_only ? $target_codes : $target_languages;
}

/**
 * Get only the languages that are enabled
 */
function lingotek_get_target_languages($codes_only = TRUE) {
  $target_languages = db_query("SELECT * FROM {languages} WHERE enabled = :enabled", array(':enabled' => 1))->fetchAll();
  $target_codes = array();
  foreach ($target_languages as $target_language) {
    $target_codes[] = $target_language->language;
  }
  return $codes_only ? $target_codes : $target_languages;
}

/*
 * Get the Lingotek Content Types - returns the content types OR ids only
 *
 * @param $ids_only
 *  Boolean - return ids only rather than associative array of content type definitions
 * @return
 *  Mixed - associative array (or an array of keys when ids_only is TRUE)
 */

function lingotek_get_content_types() {
  $fields = variable_get('lingotek_enabled_fields');
  return array_keys($fields['node']);
}

/*
 * Custom unix timestamp formatter
 *
 * @param int $unix_timestamp
 *    Unix timestamp to format
 *
 * @param bool $as_array
 *    if true, return string formatted like '[number] [time interval]'.  For example, '22 hours'.
 *    if false, returns number and time interval as an array where the array is ('number' => [number], 'interval' => [time interval]).
 */

function lingotek_human_readable_timestamp($unix_timestamp, $as_array = FALSE) {
  $time = time() - $unix_timestamp;

  $intervals = array(
    31536000 => t('year'),
    2592000 => t('month'),
    604800 => t('week'),
    86400 => t('day'),
    3600 => t('hour'),
    60 => t('minute'),
    1 => t('second')
  );

  foreach ($intervals as $unit => $text) {
    if ($time < $unit) {
      continue;
    }
    $number = floor($time / $unit);
    if ($as_array) {
      return array('number' => $number, 'interval' => $text . (($number > 1) ? 's' : ''));
    }
    else {
      return $number . ' ' . $text . (($number > 1) ? 's' : '');
    }
  }
  if ($as_array) {
    return array('number' => 0, 'interval' => t('seconds'));
  }
  else {
    return '0 ' . t('seconds');
  }
}

/**
 * Returns the site name, or base url if that isn't set.
 * */
function lingotek_get_site_name() {
  $site_name = variable_get('site_name', NULL);
  if (empty($site_name)) {
    global $base_root;
    $site_url = parse_url($base_root);
    $site_name = $site_url['host'];
  }
  return $site_name;
}

function lingotek_get_module_info($field = NULL) {
  $result = db_query("SELECT info FROM {system} WHERE type = :type AND name = :name", array(':type' => 'module', ':name' => 'lingotek'))->fetchObject();
  $info = unserialize(current($result));
  return is_null($field) ? $info : (isset($info[$field]) ? $info[$field] : NULL);
}

/**
 * Clean-up utility
 */
function lingotek_cleanup_utility($show_messages = TRUE, $autoset_batch = TRUE) {
  LingotekLog::trace(__METHOD__);

  lingotek_set_priority();
  lingotek_set_defaults();
  lingotek_migration_1();
  lingotek_migration_2();
  lingotek_add_missing_locales(); // fills in any missing lingotek_locale values to the languages table
  if (module_exists('field_collection')) {
    lingotek_add_default_lang_to_field_collections(); // a temp solution, setting 'und' values for field collections
    lingotek_add_neutral_lang_to_field_collections();
  }
  
  $cleanup_batch = lingotek_field_language_data_cleanup_batch_create($autoset_batch = $autoset_batch);
  if ($show_messages) {
    drupal_set_message(t('The field data cleanup utility completed.'));
  }

  if ($cleanup_batch && is_array($cleanup_batch)) {
    return $cleanup_batch;
  }
}

function lingotek_add_default_lang_to_field_collections() {
  lingotek_fix_field_collection_languages($to_lang_neutral=FALSE);
}

function lingotek_add_neutral_lang_to_field_collections() {
  lingotek_fix_field_collection_languages($to_lang_neutral=TRUE);
}

function lingotek_fix_field_collection_languages($to_lang_neutral=TRUE) {
  // find the difference between all entities and the und ones
  // for each table:
  //   find all entries containing the default language but no 'und' language
  //   for each entry:
  //     insert a corresponding 'und' line

  $language = language_default();
  $langcode = $language->language;

  if ($to_lang_neutral == TRUE) {
    $from_lang = $langcode;
    $to_lang = LANGUAGE_NONE;
  }
  else {
    $from_lang = LANGUAGE_NONE;
    $to_lang = $langcode;
  }
  
  $fc_str = 'field_collection_item';
 
  $bundles = field_info_bundles($fc_str);
  foreach ($bundles as $bundle_key => $bundle_val) {
   
    $instances = field_info_instances($fc_str, $bundle_key);
   
    foreach ($instances as $instance_key => $instance_val) {
     
      $query = new EntityFieldQuery;
     
      $fc_full_entities = $query
        ->entityCondition('entity_type', $fc_str)
        ->entityCondition('bundle', $bundle_key)
        ->entityCondition('deleted', 0)
        ->fieldLanguageCondition($instance_key, $from_lang)
        ->execute();
     
      if (empty($fc_full_entities)) {
        continue;
      }
      
      $fc_und_entities = $query
        ->entityCondition('entity_type', $fc_str)
        ->entityCondition('bundle', $bundle_key)
        ->entityCondition('deleted', 0)
        ->fieldLanguageCondition($instance_key, $to_lang)
        ->execute();
     
      foreach ($fc_full_entities[$fc_str] as $fc_key => $fc_obj) {
       
        // if the entity isn't in the list of entities that have 'und', then add it!
        if (empty($fc_und_entities) || !array_key_exists($fc_key, $fc_und_entities[$fc_str])) {
          // add an entry with the new langcode to the database
          $entity = entity_load($fc_str, array($fc_obj->item_id));          
          foreach ($entity[$fc_obj->item_id]->{$instance_key}[$from_lang] as $delta => $delta_content) {
            try {
              $submission = array(
                    'entity_type' => $fc_str,
                    'bundle' => $bundle_key,
                    'entity_id' => $fc_obj->item_id,
                    'revision_id' => $fc_obj->revision_id,
                    'language' => $to_lang,
                    'delta' => $delta,
                    );
              foreach ($delta_content as $dc_key => $dc_val) {
                if ($dc_key == 'safe_value') { // this is just a sanitized version of value, which we don't need
                  continue;
                }
                if (is_array($dc_val)) {
                  $submission[$instance_key . '_' . $dc_key] = serialize($dc_val);
                }
                else {
                  $submission[$instance_key . '_' . $dc_key] = $dc_val;
                }
              }
              db_insert('field_data_' . $instance_key)
                  ->fields($submission)
                  ->execute();
            }
            catch (Exception $e) {
              // pass, as one or more deltas probably already have the undefined language set
            }
          }
        }
      }
    }
  }
}

/**
 * lingotek_refresh_api_cache utility
 */
function lingotek_refresh_api_cache($show_messages = TRUE) {
  LingotekLog::trace(__METHOD__);

  $api = LingotekApi::instance();

  // Call methods with $reset = TRUE to update our locally cached values.
  $api->listProjects(TRUE);
  $api->listWorkflows(TRUE);
  $api->listVaults(TRUE);

  if ($show_messages) {
    drupal_set_message(t('Project, workflow, and vault information has been refreshed.'));
  }
}

/**
 * Sets the priority of the Lingotek Translation module
 */
function lingotek_set_priority() {
  db_update('system')->fields(array('weight' => 12))->condition('name', 'lingotek')->execute();
}

/**
 * Gets the default profile info, mapped by entity type
 */
function lingotek_load_profile_defaults($entity_type) {
  $profile_defaults = lingotek_get_profiles();
  $entity_profile_defaults = variable_get('lingotek_entity_profiles', array());
  $profile_map = array();
  if (array_key_exists($entity_type, $entity_profile_defaults)) {
    foreach ($entity_profile_defaults[$entity_type] as $k => $v) {
      $profile_map[$k] = is_numeric($v) ? $profile_defaults[$v] : array();
      $profile_map[$k]['profile'] = $v;
      unset($profile_map[$k]['name']);
    }
    return $profile_map;
  }
  return array();
}

/**
 * Sets the global defaults for the Lingotek Translation module
 */
function lingotek_set_defaults() {
  LingotekLog::trace(__METHOD__);
  $defaults = array(
    'lingotek_advanced_parsing' => TRUE
  );

  // Check if vars are set.  If so, use what is already set.  If not, set them using the defaults provided above.
  foreach ($defaults as $k => $default_value) {
    variable_set($k, variable_get($k, $default_value));
  }

  lingotek_set_default_advanced_xml();
}

/**
 * Migration 1
 */
function lingotek_migration_1() {
  $spec = array(
    'type' => 'int',
    'description' => "Lingotek enabled",
    'not null' => TRUE,
    'default' => 0
  );
  try {
    db_add_field('languages', 'lingotek_enabled', $spec);
  } catch (DatabaseSchemaObjectExistsException $e) {
    // already exists (no need to do anything)
  }

  // store lingotek enabled fields in languages table rather than variable table
  $target_languages = array_filter(explode('|', variable_get('lingotek_target_languages', '')));
  foreach ($target_languages as $drupal_language_code) {
    lingotek_enable_language_by_code($drupal_language_code);
  }
  variable_del('lingotek_target_languages');
  drupal_static_reset('language_list');
}

/**
 * Migration 2
 */
function lingotek_migration_2() {
  $spec = array(
    'type' => 'varchar',
    'description' => "Locale mapping",
    'length' => 10,
    'not null' => TRUE,
    'default' => ''
  );
  try {
    db_add_field('languages', 'lingotek_locale', $spec);
  } catch (DatabaseSchemaObjectExistsException $e) {
    // already exists (no need to do anything)
  }
  drupal_static_reset('language_list');
}

/**
 * Migration 3 - Upgrade lingotek table entries from drupal_codes to lingotek_locales (whenever applicable) 
 */
function lingotek_migration_3() {
  $ret = array();
  $field_name_prefix = 'target_sync_status_';
  $result = db_query("SELECT lingokey, COUNT(*) as num FROM {lingotek} WHERE lingokey LIKE :pattern GROUP BY lingokey"
      , array(':pattern' => db_like($field_name_prefix) . '%'));

  $total_affected_rows = 0;
  foreach ($result as $record) {
    $old_key = $record->lingokey;
    $code = @end(explode("_", $old_key));
    $lingotek_locale = Lingotek::convertDrupal2Lingotek($code, FALSE); //will return FALSE when lingotek_locales are passed in (so, they'll be skipped)
    if ($lingotek_locale) {
      $new_key = $field_name_prefix . $lingotek_locale;
      $query = db_update('lingotek', $ret)
          ->fields(array('lingokey' => $new_key))
          ->condition('lingokey', $old_key, '=');
      try {
        $affected_rows = $query->execute();
      } catch (PDOException $e) {
        // skip these:  manually delete for later rows that key violation constraint issues (if it already exists it need not succeed)
        $affected_rows = 0;
      }
      $total_affected_rows += $affected_rows;
    }
  }
  $ret['total_affected_rows'] = $total_affected_rows;
  //drupal_set_message("fields updated");
  return $ret;
}

function lingotek_profile_condition($entity_type, $table_alias, $table_profile, $profile_id) {
  $or = db_or();
  
  $fields = variable_get('lingotek_enabled_fields');
  $types = array();
  foreach (lingotek_load_profile_defaults($entity_type) as $content_type => $profile) {
    if ($profile['profile'] == (string)$profile_id && isset($fields[$entity_type][$content_type])) {
      $types[] = $content_type;
    }
  }
  
  if (!empty($types)) {
    $an = db_and();
    $an->condition($table_alias . '.type', $types, 'IN');
    $an->condition($table_profile . '.value', NULL);
    $or->condition($an);
  }
  $or->condition($table_profile . '.value', $profile_id);
  
  return $or;
}

function lingotek_entity_translation_save_status($node, $language_codes, $status_request = NULL) {
  $handler = entity_translation_get_handler('node', $node);
  $languages_updated = array();
  $updates = 0;

  foreach ($language_codes as $langcode) {
    if ($langcode !== 0) {
      // set node (source or target as specified) flag (in the entity_translation table) as published or unpublished
      $et_params = array(
        'language' => $langcode,
        );
      if ($langcode != $node->language) {
        $et_params['source'] = $node->language;
      }
      if ($status_request !== NULL) {
        $et_params['status'] = $status_request;
      }
      else {
        // check for the current status, if any, and set to published as a default
        if (isset($node->translations->data[$node->language])
            && !isset($node->translations->data[$langcode])) {
          $et_params['status'] = $node->translations->data[$node->language]['status'];
        }
        else {
          $et_params['status'] = 1; // published
        }
      }
      $handler->setTranslation($et_params);
      $languages_updated[$langcode] = lingotek_language_name($langcode);
      $updates++;
    }
  }
  $handler->saveTranslations();
  return array($languages_updated, $updates);
}

function lingotek_workbench_icon($entity_type, $id, $lingotek_locale, $tooltip = 'Edit this translation') {
  drupal_add_css(drupal_get_path('module', 'lingotek') . '/style/workbench-link.css', array('group' => CSS_DEFAULT));
  
  $text = '<img src="' . base_path() . drupal_get_path('module', 'lingotek') . '/images/ico_chevs_dd.png" >';
  $url = 'lingotek/workbench/' . $entity_type . '/' . $id . '/' . $lingotek_locale;
  return l($text, $url, array('attributes' => array('class' => array('lingotek-translation-link'), 'target' => '_blank', 'title' => $tooltip), 'html' => TRUE));
}

function lingotek_list_entities_with_language($entity_type, $bundle, $language) {
  $ids = array();
  $fields = field_info_instances($entity_type, $bundle);
  foreach ($fields as $name => $field_info) {
    $ids = $ids + lingotek_list_entities_with_field_in_language($entity_type, $bundle, $name, $language);
  }

  return $ids;
}

function lingotek_list_nodes_translated_in_language($bundle, $language) {

  $query = db_select('node')
      ->fields('node', array('tnid'))
      ->condition('node.type', $bundle)
      ->condition('node.tnid', 0, '<>')
      ->condition('language', $language)
      ->execute();

  $nodes = $query->fetchCol();

  return $nodes;
}

function lingotek_list_entities_with_field_in_language($entity_type, $bundle, $field, $language) {
  $query = new EntityFieldQuery;

  $entities = $query
      ->entityCondition('entity_type', $entity_type)
      ->entityCondition('bundle', $bundle)
      ->entityCondition('deleted', 0)
      ->fieldLanguageCondition($field, $language)
      ->execute();

  return isset($entities['node']) ? array_keys($entities['node']) : array();
}

/**
 * Gets a list of fields with translation enabled.
 *
 * @return array
 *   An array of the machine names for translatable fields in the system.
 */
function lingotek_translatable_node_fields() {
  $fields = field_info_fields();
  $translatable_fields = array();
  foreach ($fields as $field_id => $field) {
    foreach ($field['bundles'] as $type => $instance) {
      if (field_is_translatable($type, $field)) {
        $translatable_fields[] = $field['field_name'];
      }
    }
  }

  return $translatable_fields;
}

/**
 * Wrap placeholder tags in specific tags that will be ignored by Lingotek
 *
 * @param $segment_text
 *   a string containing the segment to be translated
 *
 * @return string
 *   the original input plus any additional reference tags to be ignored.
 */
function lingotek_filter_placeholders($segment_text, $protect_vars = FALSE) {
  // NOTE: This regex is only a generalization of the variable names possible using
  // the t-function's variable interpolation.  This finds all sets of word
  // characters (A-Z, a-z, - or _) that begin with either !, @, or %, that do not
  // fall between angle brackets (which would indicate being on the inside
  // of an HTML tag).  It also protects everything inside square brackets
  // that do not fall inside angle brackets.
  $patterns = array(
    '/(\[[!@%\w:=\/\s_-]+\]\s*)(?![^<]*\>)/', // wrap everything in square brackets
  );
  if ($protect_vars) {
    $patterns[] = '/([!@%][\w_-]+\s*)(?![^<]*\>)/'; // wrap everything beginning with !,@,%
  }
  $replacement = '<drupalvar>${1}</drupalvar>';
  foreach ($patterns as $p) {
    $segment_text = preg_replace($p, $replacement, $segment_text);
  }
  return $segment_text;
}

/**
 * Unwrap placeholder tags in specific tags that will be ignored by Lingotek
 *
 * @param $segment_text
 *   a string containing the segment that potentially contains drupal variables
 *
 * @return string
 *   the original input less any additional reference tags added prior to upload
 */
function lingotek_unfilter_placeholders($segment_text) {
  $pattern = '/<\/?drupalvar>/';
  $replacement = '';
  return preg_replace($pattern, $replacement, $segment_text);
}

/**
 * Return redirect-path information by entity type for Lingotek-supported entities
 *
 * @param $entity_type
 *   a string containing the name of the given entity type
 *
 * @param $next
 *   whether to redirect to the next setup destination or just return the current one
 */
function lingotek_get_entity_setup_path($entity_type, $next=FALSE) {
  $entities = array(
    'node' => array('current' => 'admin/config/lingotek/node-translation-settings',
      'next' => 'admin/config/lingotek/comment-translation-settings'),
    'comment' => array('current' => 'admin/config/lingotek/comment-translation-settings',
      'next' => 'admin/config/lingotek/additional-translation-settings'),
    'config' => array('current' => 'admin/config/lingotek/additional-translation-settings',
      'next' => 'admin/settings/lingotek'),
  );
  if (isset($entities[$entity_type])) {
    if ($next) {
      return $entities[$entity_type]['next'];
    }
    else {
      return $entities[$entity_type]['current'];
    }
  }
  return NULL;
}

/**
 * Return the number of entities
 *
 * @param $entity_type
 *   a string containing the name of the given entity type
 */
function lingotek_get_entity_count($entity_type) {
  $query = db_select($entity_type, 'n')
    ->fields('n')
    ->execute();
  $num_results = $query->rowCount();
  return $num_results;
}

/*
 * Return an associative array of entity types, with an array of bundles
 * enabled for the given profile.
 */
function lingotek_get_bundles_by_profile_id($profile_id) {
  $bundles = array();
  if (is_array($profile_id)) { // allow profile_ids to be an array of profiles to find bundles for
    $mapped_results = array_map('lingotek_get_bundles_by_profile_id', $profile_id);
    foreach ($mapped_results as $result) {
      $bundles = array_merge_recursive($result, $bundles);
    }
    return $bundles;
  }
  $entities = entity_get_info();
  $lentities = variable_get('lingotek_entity_profiles');
  foreach ($entities as $entity_name => $entity) {
    if (!isset($lentities[$entity_name])) {
      unset($entities[$entity_name]);
    }
    foreach ($entity['bundles'] as $bundle_name => $bundle) {
      if (isset($lentities[$entity_name][$bundle_name]) && $lentities[$entity_name][$bundle_name] === (string)$profile_id) {
        if (!isset($bundles[$entity_name])) {
          $bundles[$entity_name] = array();
        }
        $bundles[$entity_name][$bundle_name] = TRUE;
      }
    }
  }
  return $bundles;
}

/*
 * Return an array tree of entity_types -> entity_ids -> document_ids
 */
function lingotek_get_document_id_tree() {
  $query = db_select('lingotek_entity_metadata', 'lem')
      ->fields('lem', array('entity_id', 'entity_type', 'value'))
      ->condition('lem.entity_key', 'document_id')
      ->execute();
  $results = $query->fetchAll();
  $doc_id_tree = array();
  foreach ($results as $r) {
    if (!isset($doc_id_tree[$r->entity_type])) {
      $doc_id_tree[$r->entity_type] = array();
    }
    $doc_id_tree[$r->entity_type][$r->entity_id] = $r->value;    
  }
  return $doc_id_tree;
}

/*
 * Get all entities that are enabled for lingotek translation, by profile
 * 
 * Return an array of entity-specific arrays containing document_id, type, and id
 */
function lingotek_get_entities_by_profile_id($profile_id, $entity_type = 'all', $uploaded_only = FALSE) {
  // get all bundles that belong to the given profile
  $bundles = lingotek_get_bundles_by_profile_id($profile_id); // this function accepts an id or an array of ids

  $entities = array();
  
  if ($entity_type != 'all') {
    if (isset($bundles[$entity_type])) {
      $bundles = array($entity_type => $bundles[$entity_type]);
    }
    else {
      $bundles = array();
    }
  }
  
  // get all entities that belond to those bundles
  foreach ($bundles as $et => $entity_bundles) {
    /*  THE SLOW BUT CORRECT WAY TO EXTRACT INFO
    $tmp_entities = entity_load($et);
    foreach ($tmp_entities as $tid => $tinfo) {
      list($entity_id, $vid, $bundle_name) = entity_extract_ids($et, $tinfo);
      if (isset($bundles[$et][$bundle_name])) {
        $entities[] = array('id' => $tid, 'type' => $et);
      }
    }
    */
    // THE OPTIMIZED WAY
    if ($et == 'comment') {
      $ref_tables = array();
      foreach (array_keys($entity_bundles) as $key) {
        $tmp_array = explode('_', $key);
        $key = implode('_', array_slice($tmp_array, 2));
        $ref_tables[] = $key;
      }
      $query = db_select($et, 'e')
          ->fields('e', array('cid'));
      $query->join('node', 'n', "n.nid = e.nid AND n.type IN ('" . implode("','", $ref_tables) . "')");
    }
    else {
      $entity_info = entity_get_info($et);
      $bundle_field_name = $entity_info['entity keys']['bundle'];
      $id_field_name = $entity_info['entity keys']['id'];
      $query = db_select($et, 'e')
          ->fields('e', array($id_field_name))
          ->condition('e.' . $bundle_field_name, array_keys($entity_bundles), 'IN');
    }
    $results = $query->execute()->fetchCol();
    foreach ($results as $id) {
      $entities[] = array('id' => $id, 'type' => $et);
    }
    // END OPTIMIZED WAY
  }
  
  // subtract all entities specifically *not* set to the given profile
  $query = db_select('lingotek_entity_metadata', 'lem')
      ->fields('lem', array('entity_id', 'entity_type'))
      ->condition('lem.entity_key', 'profile')
      ->condition('lem.value', $profile_id, is_array($profile_id) ? 'NOT IN' : '!=');
  if ($entity_type != 'all') {
    $query->condition('lem.entity_type', $entity_type);
  }
  $result = $query->execute();
  $subtract_entity_ids = $result->fetchAll();
  
  $doc_ids = lingotek_get_document_id_tree();
  $subtractions = array();
  foreach ($subtract_entity_ids as $sei) {
    if (!isset($subtractions[$sei->entity_type])) {
      $subtractions[$sei->entity_type] = array();
    }
    $subtractions[$sei->entity_type][$sei->entity_id] = TRUE;
  }
  $filtered_entities = array();
  foreach ($entities as $e) {
    if (!isset($subtractions[$e['type']][$e['id']])) {
      if (isset($doc_ids[$e['type']][$e['id']])) {
        $e['document_id'] = $doc_ids[$e['type']][$e['id']];
        $filtered_entities[] = $e;
      }
      elseif (!$uploaded_only) {
        $filtered_entities[] = $e;
      }
    }
  }

  // add all entities specifically set to the given profile
  $query = db_select('lingotek_entity_metadata', 'lem')
      ->fields('lem', array('entity_id', 'entity_type'))
      ->condition('lem.entity_key', 'profile')
      ->condition('lem.value', $profile_id,  is_array($profile_id) ? 'IN' : '=');
  if ($entity_type != 'all') {
    $query->condition('lem.entity_type', $entity_type);
  }
  $result = $query->execute();
  $add_entity_ids = $result->fetchAll();
  foreach ($add_entity_ids as $aei) {
    $addition = array('id' => $aei->entity_id, 'type' => $aei->entity_type);
    if (isset($doc_ids[$aei->entity_type][$aei->entity_id])) {
      $addition['document_id'] = $doc_ids[$aei->entity_type][$aei->entity_id];
    }
    $filtered_entities[] = $addition;
  }
  
  return $filtered_entities;
}

/*
 * Clean up field-collection fields
 */

function lingotek_cleanup_field_collection_fields() {
  $field_collection_field_types = field_read_fields(array('type' => 'field_collection'));

  // update all lines in field-collection field tables to be undefined,
  // ignoring duplicates, then delete all lines in field-collection
  // field tables that aren't undefined.
  foreach (array_keys($field_collection_field_types) as $fc_field_name) {
    db_query("UPDATE IGNORE {field_data_" . $fc_field_name . "} SET language = '" . LANGUAGE_NONE . "'");
    db_query("DELETE FROM {field_data_" . $fc_field_name . "} WHERE language <> '" . LANGUAGE_NONE . "'");
    db_query("UPDATE IGNORE {field_revision_" . $fc_field_name . "} SET language = '" . LANGUAGE_NONE . "'");
    db_query("DELETE FROM {field_revision_" . $fc_field_name . "} WHERE language <> '" . LANGUAGE_NONE . "'");
  }
  drupal_set_message(t('Updated Field-Collection fields.'));
}

function lingotek_has_unconventional_fc_translations() {
  $field_collection_field_types = field_read_fields(array('type' => 'field_collection'));
  $query_join_items = array(
    'fca.entity_type = fcb.entity_type',
    'fca.bundle = fcb.bundle',
    'fca.deleted = fcb.deleted',
    'fca.entity_id = fcb.entity_id',
    'fca.revision_id = fcb.revision_id',
    'fca.delta = fcb.delta',
    'fca.language != fcb.language',
  );
  foreach (array_keys($field_collection_field_types) as $fc_field_name) {
    $query = db_select('field_data_' . $fc_field_name, 'fca');
    $query->join('field_data_' . $fc_field_name, 'fcb', implode(' AND ', $query_join_items) . ' AND fca.' . $fc_field_name . '_value != fcb.' . $fc_field_name . '_value');
    $query->groupBy('fca.entity_id');
    $query->fields('fca', array('entity_id'));
    $result = $query->execute();
    if ($result && $unconventional_fc = $result->fetchAll()) {
      return $unconventional_fc;
    }
    return FALSE;
  }
}
