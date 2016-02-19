<?php
/**
 * @file
 * Views module integration.
 */

/**
 * Implements hook_views_api().
 */
function mentions_views_api() {
  return array(
    'api' => 3,
  );
}

/**
 * Implements hook_views_data().
 */
function mentions_views_data() {
  $data['mentions']['table']['group'] = t('Mentions');

  $data['mentions']['table']['base'] = array(
    'field'  => 'uid',
    'title'  => t('Mentions'),
    'help'   => t('References made to @username.'),
    'weight' => 10,
  );

  // ID.
  $data['mentions']['mid'] = array(
    'title' => t('ID'),
    'help'  => t('The ID of the mention.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
  );

  // Entity type.
  $data['mentions']['entity_type'] = array(
    'title' => t('Entity type'),
    'help'  => t('The type of entity containing the mention.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );

  // Entity id.
  $data['mentions']['entity_id'] = array(
    'title' => t('Entity id'),
    'help'  => t('The ID of entity containing the mention.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
  );

  // User id.
  $data['mentions']['uid'] = array(
    'title'        => t('Mentioned user id'),
    'help'         => t('The user mentioned. If you need more fields than the uid add the mention: user mentioned relationship'),
    'relationship' => array(
      'title'   => t('Mentioned user'),
      'help'    => t('Relate mention to the user who was mentioned.'),
      'handler' => 'views_handler_relationship',
      'base'    => 'users',
      'field'   => 'uid',
      'label'   => 'mentioned user',
    ),
    'filter'       => array(
      'handler' => 'views_handler_filter_user_name',
    ),
    'argument'     => array(
      'handler' => 'views_handler_argument_numeric',
    ),
    'field'        => array(
      'handler' => 'views_handler_field_user',
    ),
  );

  // Author user id.
  $data['mentions']['auid'] = array(
    'title'        => t('Author user id'),
    'help'         => t('The user authoring the mention. If you need more fields than the uid add the mention: author relationship'),
    'relationship' => array(
      'title'   => t('Author'),
      'help'    => t('Relate mention to the user who created it.'),
      'handler' => 'views_handler_relationship',
      'base'    => 'users',
      'field'   => 'auid',
      'label'   => 'author',
    ),
    'filter'       => array(
      'handler' => 'views_handler_filter_user_name',
    ),
    'argument'     => array(
      'handler' => 'views_handler_argument_numeric',
    ),
    'field'        => array(
      'handler' => 'mentions_views_handler_field_auid',
    ),
  );

  // Created.
  $data['mentions']['created'] = array(
    'title'  => t('Date'),
    'help'   => t('The date of the mention.'),
    'field'  => array(
      'handler'        => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort'   => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  // Updated.
  $data['mentions']['updated'] = array(
    'title'  => t('Date'),
    'help'   => t('Date mention was last udpated.'),
    'field'  => array(
      'handler'        => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort'   => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  // Title.
  $data['mentions']['title'] = array(
    'title' => t('Title'),
    'help'  => t('The title of the mention.'),
    'field' => array(
      'handler' => 'mentions_views_handler_field_title',
    ),
  );

  // Content.
  // @TODO - Re-implement this handler.
  //$data['mentions']['content'] = array(
  //  'title' => t('Content'),
  //  'help'  => t('The contents of the mention.'),
  //  'field' => array(
  //    'handler' => 'mentions_views_handler_field_content',
  //  ),
  //);

  // Link.
  $data['mentions']['link'] = array(
    'title' => t('Link'),
    'help'  => t('The link to the mention.'),
    'field' => array(
      'handler' => 'mentions_views_handler_field_link',
    ),
  );

  return $data;
}
