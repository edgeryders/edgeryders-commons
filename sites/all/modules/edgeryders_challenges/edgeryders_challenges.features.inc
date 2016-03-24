<?php
/**
 * @file
 * edgeryders_challenges.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function edgeryders_challenges_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function edgeryders_challenges_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function edgeryders_challenges_field_default_field_instances_alter(&$data) {
  if (isset($data['node-challenge-field_group_logo'])) {
    $data['node-challenge-field_group_logo']['display']['default']['weight'] = 5; /* WAS: 0 */
    unset($data['node-challenge-field_group_logo']['display']['default']['module']);
    unset($data['node-challenge-field_group_logo']['display']['default']['settings']['image_style']);
  }
  if (isset($data['node-challenge-field_og_access_default_value'])) {
    $data['node-challenge-field_og_access_default_value']['display']['default']['weight'] = 8; /* WAS: 5 */
  }
  if (isset($data['node-challenge-field_og_subscribe_settings'])) {
    $data['node-challenge-field_og_subscribe_settings']['display']['default']['type'] = 'hidden'; /* WAS: 'list_default' */
    $data['node-challenge-field_og_subscribe_settings']['display']['default']['weight'] = 9; /* WAS: 4 */
  }
  if (isset($data['node-challenge-group_access'])) {
    $data['node-challenge-group_access']['display']['default']['weight'] = 6; /* WAS: 4 */
  }
  if (isset($data['node-challenge-group_group'])) {
    $data['node-challenge-group_group']['display']['default']['type'] = 'hidden'; /* WAS: 'commons_groups_group_subscribe' */
    $data['node-challenge-group_group']['display']['default']['weight'] = 4; /* WAS: 0 */
  }
  if (isset($data['node-challenge-og_roles_permissions'])) {
    $data['node-challenge-og_roles_permissions']['display']['default']['type'] = 'hidden'; /* WAS: 'list_default' */
    $data['node-challenge-og_roles_permissions']['display']['default']['weight'] = 7; /* WAS: 1 */
  }
  if (isset($data['node-challenge-title_field'])) {
    $data['node-challenge-title_field']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-challenge-title_field']['display']['default']['module'] = 'text'; /* WAS: '' */
    $data['node-challenge-title_field']['display']['default']['type'] = 'text_default'; /* WAS: 'hidden' */
    $data['node-challenge-title_field']['display']['default']['weight'] = 0; /* WAS: -50 */
  }
  if (isset($data['node-challenge_chain-field_challenges'])) {
    $data['node-challenge_chain-field_challenges']['display_label'] = ''; /* WAS: '' */
    $data['node-challenge_chain-field_challenges']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-challenge_chain-field_challenges']['display']['default']['module'] = 'edgeryders_challenges'; /* WAS: 'entityreference' */
    $data['node-challenge_chain-field_challenges']['display']['default']['type'] = 'progress_bar'; /* WAS: 'entityreference_label' */
    $data['node-challenge_chain-field_challenges']['display']['default']['weight'] = 1; /* WAS: 2 */
    $data['node-challenge_chain-field_challenges']['widget']['settings']['match_operator'] = 'CONTAINS'; /* WAS: 'STARTS_WITH' */
    unset($data['node-challenge_chain-field_challenges']['display']['default']['settings']['link']);
  }
  if (isset($data['node-challenge_chain-title_field'])) {
    $data['node-challenge_chain-title_field']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-challenge_chain-title_field']['display']['default']['module'] = 'text'; /* WAS: '' */
    $data['node-challenge_chain-title_field']['display']['default']['type'] = 'text_default'; /* WAS: 'hidden' */
    $data['node-challenge_chain-title_field']['display']['default']['weight'] = 0; /* WAS: -50 */
  }
  if (isset($data['node-challenge_response-field_audience_collaborators'])) {
    $data['node-challenge_response-field_audience_collaborators']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-challenge_response-field_audience_collaborators']['display']['default']['weight'] = 6; /* WAS: 9 */
    unset($data['node-challenge_response-field_audience_collaborators']['display']['default']['module']);
  }
  if (isset($data['node-challenge_response-field_audience_multiplicators'])) {
    $data['node-challenge_response-field_audience_multiplicators']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-challenge_response-field_audience_multiplicators']['display']['default']['weight'] = 7; /* WAS: 10 */
    unset($data['node-challenge_response-field_audience_multiplicators']['display']['default']['module']);
  }
  if (isset($data['node-challenge_response-field_audience_supporters'])) {
    $data['node-challenge_response-field_audience_supporters']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-challenge_response-field_audience_supporters']['display']['default']['weight'] = 5; /* WAS: 8 */
    unset($data['node-challenge_response-field_audience_supporters']['display']['default']['module']);
  }
  if (isset($data['node-challenge_response-field_request_experiences'])) {
    $data['node-challenge_response-field_request_experiences']['display_in_partial_form'] = 0; /* WAS: '' */
    $data['node-challenge_response-field_request_experiences']['display_label'] = ''; /* WAS: '' */
    $data['node-challenge_response-field_request_experiences']['display']['default']['type'] = 'hidden'; /* WAS: 'list_default' */
    $data['node-challenge_response-field_request_experiences']['display']['default']['weight'] = 8; /* WAS: 11 */
    $data['node-challenge_response-field_request_experiences']['required'] = 0; /* WAS: 1 */
    unset($data['node-challenge_response-field_request_experiences']['display']['default']['module']);
  }
  if (isset($data['node-challenge_response-field_request_help'])) {
    $data['node-challenge_response-field_request_help']['display_label'] = ''; /* WAS: '' */
    $data['node-challenge_response-field_request_help']['display']['default']['type'] = 'hidden'; /* WAS: 'list_default' */
    $data['node-challenge_response-field_request_help']['display']['default']['weight'] = 9; /* WAS: 12 */
    $data['node-challenge_response-field_request_help']['required'] = 0; /* WAS: 1 */
    unset($data['node-challenge_response-field_request_help']['display']['default']['module']);
  }
  if (isset($data['node-challenge_response-field_request_other'])) {
    $data['node-challenge_response-field_request_other']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-challenge_response-field_request_other']['display']['default']['weight'] = 10; /* WAS: 13 */
    unset($data['node-challenge_response-field_request_other']['display']['default']['module']);
  }
  if (isset($data['node-challenge_response-field_response_image'])) {
    $data['node-challenge_response-field_response_image']['display_label'] = ''; /* WAS: '' */
    $data['node-challenge_response-field_response_image']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-challenge_response-field_response_image']['display']['default']['settings']['image_style'] = 'challenge_response_node'; /* WAS: '' */
    $data['node-challenge_response-field_response_image']['display']['default']['weight'] = 1; /* WAS: 3 */
    $data['node-challenge_response-field_response_image']['settings']['file_extensions'] = 'jpg jpeg'; /* WAS: 'png gif jpg jpeg' */
    $data['node-challenge_response-field_response_image']['settings']['max_filesize'] = '4 MB'; /* WAS: '1 MB' */
    $data['node-challenge_response-field_response_image']['widget']['module'] = 'dragndrop_upload_image'; /* WAS: 'image' */
    $data['node-challenge_response-field_response_image']['widget']['settings']['allow_replace'] = 1; /* WAS: '' */
    $data['node-challenge_response-field_response_image']['widget']['settings']['droppable_area_text'] = 'Drag & drop your cover image here'; /* WAS: '' */
    $data['node-challenge_response-field_response_image']['widget']['settings']['media_browser'] = 0; /* WAS: '' */
    $data['node-challenge_response-field_response_image']['widget']['settings']['multiupload'] = 0; /* WAS: '' */
    $data['node-challenge_response-field_response_image']['widget']['settings']['preview_image_style'] = 'challenge_response_node'; /* WAS: 'medium' */
    $data['node-challenge_response-field_response_image']['widget']['settings']['standard_upload'] = 1; /* WAS: '' */
    $data['node-challenge_response-field_response_image']['widget']['settings']['upload_button_text'] = 'Upload'; /* WAS: '' */
    $data['node-challenge_response-field_response_image']['widget']['settings']['upload_event'] = 'auto'; /* WAS: '' */
    $data['node-challenge_response-field_response_image']['widget']['type'] = 'dragndrop_upload_image'; /* WAS: 'image_image' */
    $data['node-challenge_response-field_response_image']['widget']['weight'] = 3; /* WAS: 0 */
    unset($data['node-challenge_response-field_response_image']['widget']['settings']['filefield_sources']);
  }
  if (isset($data['node-challenge_response-title_field'])) {
    $data['node-challenge_response-title_field']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-challenge_response-title_field']['display']['default']['module'] = 'text'; /* WAS: '' */
    $data['node-challenge_response-title_field']['display']['default']['type'] = 'text_default'; /* WAS: 'hidden' */
    $data['node-challenge_response-title_field']['display']['default']['weight'] = 0; /* WAS: -50 */
    $data['node-challenge_response-title_field']['widget']['weight'] = 4; /* WAS: -50 */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function edgeryders_challenges_strongarm_alter(&$data) {
  if (isset($data['comment_form_location_challenge'])) {
    $data['comment_form_location_challenge']->value = 0; /* WAS: 1 */
  }
  if (isset($data['comment_form_location_challenge_chain'])) {
    $data['comment_form_location_challenge_chain']->value = 0; /* WAS: 1 */
  }
  if (isset($data['comment_preview_challenge'])) {
    $data['comment_preview_challenge']->value = 0; /* WAS: 1 */
  }
  if (isset($data['comment_preview_challenge_chain'])) {
    $data['comment_preview_challenge_chain']->value = 0; /* WAS: 1 */
  }
  if (isset($data['field_bundle_settings_node__challenge'])) {
    $data['field_bundle_settings_node__challenge']->value['extra_fields']['display']['sharethis'] = array(
      'default' => array(
        'weight' => 3,
        'visible' => TRUE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__challenge']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 5,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__challenge']->value['extra_fields']['form']['path'] = array(
      'weight' => 3,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__challenge']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 4,
    ); /* WAS: '' */
    unset($data['field_bundle_settings_node__challenge']->value['extra_fields']['form']['title']);
  }
  if (isset($data['field_bundle_settings_node__challenge_chain'])) {
    $data['field_bundle_settings_node__challenge_chain']->value['extra_fields']['display']['sharethis'] = array(
      'default' => array(
        'weight' => 2,
        'visible' => TRUE,
      ),
      'token' => array(
        'weight' => 10,
        'visible' => FALSE,
      ),
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__challenge_response'])) {
    $data['field_bundle_settings_node__challenge_response']->value['extra_fields']['display']['sharethis'] = array(
      'default' => array(
        'weight' => 4,
        'visible' => TRUE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__challenge_response']->value['extra_fields']['form']['additional_settings']['weight'] = 3; /* WAS: 13 */
    $data['field_bundle_settings_node__challenge_response']->value['extra_fields']['form']['metatags']['weight'] = 5; /* WAS: 17 */
    $data['field_bundle_settings_node__challenge_response']->value['extra_fields']['form']['path']['weight'] = 4; /* WAS: 16 */
    $data['field_bundle_settings_node__challenge_response']->value['extra_fields']['form']['redirect']['weight'] = 3; /* WAS: 15 */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function edgeryders_challenges_image_default_styles() {
  $styles = array();

  // Exported image style: challenge_response_list.
  $styles['challenge_response_list'] = array(
    'label' => 'Challenge Response: header image in lists',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 148,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: challenge_response_node.
  $styles['challenge_response_node'] = array(
    'label' => 'Challenge Response: header image',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 445,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function edgeryders_challenges_node_info() {
  $items = array(
    'challenge' => array(
      'name' => t('Challenge'),
      'base' => 'node_content',
      'description' => t('Set up a challenge (question / theme) as engagement magnet for your site\'s users, then drive them to repond to it (using the "Challenge Response" content  type).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'challenge_chain' => array(
      'name' => t('Challenge Chain'),
      'base' => 'node_content',
      'description' => t('Combine several challenges into a chain with a progress bar and one active challenge. Use one challenge chain per project to show its progress and let users navigate to the challenges of this project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'challenge_response' => array(
      'name' => t('Challenge Response'),
      'base' => 'node_content',
      'description' => t('Post a free-text article and metadata as response to a "Challenge" (content type "Challenge", acting as the OG group containing this content.)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function edgeryders_challenges_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: comment_node_challenge
  $schemaorg['comment']['comment_node_challenge'] = array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:Comment',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'comment_body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'pid' => array(
      'predicates' => array(
        0 => 'sioc:reply_of',
      ),
      'type' => 'rel',
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
  );

  // Exported RDF mapping: comment_node_challenge_chain
  $schemaorg['comment']['comment_node_challenge_chain'] = array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:Comment',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'comment_body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'pid' => array(
      'predicates' => array(
        0 => 'sioc:reply_of',
      ),
      'type' => 'rel',
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
  );

  // Exported RDF mapping: comment_node_challenge_response
  $schemaorg['comment']['comment_node_challenge_response'] = array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:Comment',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'comment_body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'pid' => array(
      'predicates' => array(
        0 => 'sioc:reply_of',
      ),
      'type' => 'rel',
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
  );

  // Exported RDF mapping: challenge
  $schemaorg['node']['challenge'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  );

  // Exported RDF mapping: challenge_chain
  $schemaorg['node']['challenge_chain'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  );

  // Exported RDF mapping: challenge_response
  $schemaorg['node']['challenge_response'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  );

  // Exported RDF mapping: channels
  $schemaorg['taxonomy_term']['channels'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
  );

  // Exported RDF mapping: collaborators
  $schemaorg['taxonomy_term']['collaborators'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
  );

  // Exported RDF mapping: multiplicators
  $schemaorg['taxonomy_term']['multiplicators'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
  );

  // Exported RDF mapping: supporters
  $schemaorg['taxonomy_term']['supporters'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}
