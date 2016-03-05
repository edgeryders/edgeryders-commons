<?php

/**
 * @file
 * Views module integration.
 */

/**
 * Implements hook_views_data_alter().
 *
 * @param $data
 */
function mentions_views_data_alter(&$data) {
  $data['mentions']['uid'] = array(
    'title'        => t('Author uid'),
    'help'         => t('The user authoring the mention. If you need more fields than the uid add the mention: author relationship'),
    'relationship' => array(
      'title'   => t('Author'),
      'help'    => t('Relate mention to the user who created it.'),
      'handler' => 'views_handler_relationship',
      'base'    => 'users',
      'field'   => 'uid',
      'label'   => t('author'),
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

  $data['mentions']['source_title'] = array(
    'title'    => t('Title'),
    'help'     => t('The mention source title.'),
    'field'    => array(
      'field'                => 'source_title',
      'group'                => t('Mention'),
      'handler'              => 'views_handler_field',
      'click sortable'       => TRUE,
      'link_to_node default' => TRUE,
    ),
    'sort'     => array(
      'handler' => 'views_handler_sort',
    ),
    'filter'   => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['mentions']['created'] = array(
    'title'  => t('Created date'),
    'help'   => t('The date the mention was created.'),
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

  $data['mentions']['changed'] = array(
    'title'  => t('Updated date'),
    'help'   => t('The date the mention was last updated.'),
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
}
