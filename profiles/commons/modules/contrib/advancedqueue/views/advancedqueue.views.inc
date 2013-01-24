<?php

/**
 * Implements hook_views_data()
 */
function advancedqueue_views_data() {
  $data['advancedqueue']['table']['group']  = t('Queue');

  $data['advancedqueue']['table']['base'] = array(
    'field' => 'item_id',
    'title' => t('Queued item'),
    'help' => t('A queued item.'),
  );

  $data['advancedqueue']['item_id'] = array(
    'title' => t('Item ID'),
    'help' => t('The unique identifier of this item.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['advancedqueue']['name'] = array(
    'title' => t('Queue name'),
    'help' => t('The queue name of the item'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['advancedqueue']['uid'] = array(
    'title' => t('Item Owner'),
    'help' => t('Relate a queue item to its owner.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'field' => 'uid',
      'label' => t('Product creator'),
    ),
  );

  $data['advancedqueue']['title'] = array(
    'title' => t('Item title'),
    'help' => t('The title of a queue item'),
    'field' => array(
      'handler' => 'advancedqueue_handler_field_title',
      'click sortable' => TRUE,
      'additional fields' => array('item_id', 'name', 'data', 'result', 'uid'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['advancedqueue']['status'] = array(
    'title' => t('Item status'),
    'help' => t('The status of a queue item'),
    'field' => array(
      'handler' => 'advancedqueue_handler_field_status',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'advancedqueue_handler_filter_status',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['advancedqueue']['created'] = array(
    'title' => t('Created date'),
    'help' => t('The date the queued item was created.'),
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

  $data['advancedqueue']['processed'] = array(
    'title' => t('Processed date'),
    'help' => t('The date the queued item was processed.'),
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

  $data['advancedqueue_tags']['table']['group']  = t('Queue');

  $data['advancedqueue_tags']['table']['join'] = array(
    'advancedqueue' => array(
      'left_field' => 'item_id',
      'field' => 'item_id',
    ),
  );

  $data['advancedqueue_tags']['tag'] = array(
    'title' => t('Tag'),
    'help' => t('A tag associated with the queued item.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  return $data;
}
