<?php
/**
 * @file
 * Contains views data and handlers for the Mentions module.
 */

/**
 * Implements hook_views_handlers().
 */
function mentions_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'mentions') . '/includes/views/handlers',
    ),
    'handlers' => array(
      // 'mentions_views_handler_field_content' => array(
      //   'parent' => 'views_handler_field',
      // ),
      // 'mentions_views_handler_field_link' => array(
      //   'parent' => 'views_handler_field',
      // ),
      // 'mentions_views_handler_field_title' => array(
      //   'parent' => 'views_handler_field',
      // ),
      // 'mentions_views_handler_field_user_name' => array(
      //   'parent' => 'views_handler_field_user_name',
      // ),
    ),
  );
}

/**
 * Implements hook_views_data().
 */
function mentions_views_data() {
  $data['mentions']['table']['group'] = t('Mentions');

  $data['mentions']['table']['base'] = array(
    'field' => 'uid',
    'title' => t('Mentions'),
    'help' => t('References made to @username.'),
    'weight' => 10,
  );

  // Content.
  // $data['mentions']['content'] = array(
  //   'title' => t('Content'),
  //   'help' => t('The contents of the mention.'),
  //   'field' => array(
  //     'handler' => 'mentions_views_handler_field_content',
  //   ),
  // );

  // // Link.
  // $data['mentions']['link'] = array(
  //   'title' => t('Link'),
  //   'help' => t('The link to the mention.'),
  //   'field' => array(
  //     'handler' => 'mentions_views_handler_field_link',
  //   ),
  // );

  // Timestamp.
  $data['mentions']['timestamp'] = array(
    'title' => t('Date'),
    'help' => t('The date of the mention.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  // // Title.
  // $data['mentions']['title'] = array(
  //   'title' => t('Title'),
  //   'help' => t('The title of the mention.'),
  //   'field' => array(
  //     'handler' => 'mentions_views_handler_field_title',
  //   ),
  // );

  // User name - Author.
  $data['mentions']['auid'] = array(
    'title' => t('Author uid'),
    'help' => t('The user authoring the mention. If you need more fields than the uid add the mention: author relationship'),
    'relationship' => array(
      'title' => t('Author'),
      'help' => t('Relate mention to the user who created it.'),
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'field' => 'auid',
      'label' => 'author',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_user_name',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
    'field' => array(
      'handler' => 'views_handler_field_user',
    ),
  );

  // User name - Mentioned.
  $data['mentions']['uid'] = array(
    'title' => t('Mentioned user uid'),
    'help' => t('The user mentioned. If you need more fields than the uid add the mention: user mentioned relationship'),
    'relationship' => array(
      'title' => t('Mentioned user'),
      'help' => t('Relate mention to the user who was mentioned.'),
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'field' => 'uid',
      'label' => 'mentioned user',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_user_name',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
    'field' => array(
      'handler' => 'views_handler_field_user',
    ),
  );

  return $data;
}
