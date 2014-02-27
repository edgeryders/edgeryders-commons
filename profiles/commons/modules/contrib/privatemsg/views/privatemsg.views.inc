<?php
/**
 * @file
 * Provide views data and handlers for privatemsg.module
 */

/**
 * Implements hook_views_data().
 */
function privatemsg_views_data() {
  $data['users']['privatemsg_link'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'uid',
    'title' => t('Send message'),
    'field' => array(
      'title' => t('Send Privatemsg link'),
      'help' => t('Displays a link to send a private message to a user.'),
      'handler' => 'views_handler_field_privatemsg_link',
    ),
  );

  $data['pm_message']['table']['group'] = t('Privatemsg');

  $data['pm_message']['table']['base'] = array(
    'field' => 'mid',
    'title' => t('Privatemsg Message'),
    'defaults' => array(
      'field' => 'privatemsg_body',
    ),
  );

  $data['pm_message']['table']['entity type'] = 'privatemsg_message';

  $data['pm_message']['table']['join'] = array(
    'pm_index' => array(
      'left_table' => 'pm_index',
      'left_field' => 'mid',
      'field' => 'mid',
    ),
  );

  $data['pm_message']['privatemsg_id'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'mid',
    'title' => t('Message ID'),
    'help' => t('The message ID of the privatemsg.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'pm_index',
      'field' => 'mid',
      'label' => t('Message index'),
      'handler' => 'views_handler_relationship',
      'help' => t('Relate the message to threading info'),
    ),
  );

  $data['pm_message']['privatemsg_author'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'author',
    'title' => t('Message author'),
    'field' => array(
      'title' => t('Message Author'),
      'help' => t('The UID of the privatemsg author.'),
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'users',
      'field' => 'author',
      'handler' => 'views_handler_relationship',
      'label' => t('Privatemsg author'),
      'help' => t('Relate to the user who sent the privatemsg.'),
    ),
  );

  $data['pm_message']['privatemsg_subject'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'subject',
    'title' => t('Subject'),
    'help' => t('The text subject of the privatemsg.'),
    'field' => array(
      'title' => t('Subject'),
      'handler' => 'views_handler_field_pm_markup',
      'format' => 'full_html',
    ),
   'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['pm_message']['privatemsg_body'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'body',
    'title' => t('Body'),
    'help' => t('The text of the body of the privatemsg.'),
    'field' => array(
      'title' => t('Message'),
      'handler' => 'views_handler_field_pm_markup',
      'format' => 'full_html',
    ),
   'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['pm_message']['privatemsg_senddate'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'timestamp',
    'title' => t('Send Date'),
    'help' => t('The date that the privatemsg was sent.'),
    'field' => array(
      'title' => t('Privatemsg Send Date'),
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  $data['pm_index']['table']['group'] = t('Privatemsg');

  $data['pm_index']['table']['base'] = array(
    'field' => 'mid',
    'title' => t('Privatemsg Threading Index'),
    'defaults' => array(
      'field' => 'privatemsg_thread',
    ),
  );

   $data['pm_index']['table']['join'] = array(
    'pm_message' => array(
      'left_table' => 'pm_message',
      'left_field' => 'mid',
      'field' => 'mid',
    ),
  );

  $data['pm_index']['table']['entity type'] = 'privatemsg_message';

  $data['pm_index']['thread_id'] = array(
    'real field' => 'thread_id',
    'title' => t('Thread ID'),
    'help' => t('The ID of the Privatemsg thread'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'argument' => array(
      'help' => t('Filter according to the thread privatemsgs belong to.'),
      'handler' => 'views_handler_argument_many_to_one',
    ),
  );
  $data['pm_index']['thread_link'] = array(
    'real field' => 'thread_id',
    'title' => t('Link to Thread'),
    'help' => t('A link to the privatemsg thread.'),
    'field' => array(
      'handler' => 'views_handler_field_pm_thread_link',
    ),
  );
  $data['pm_index']['recipient'] = array(
    'title' => t('Recipient'),
    'field' => array(
      'help' => t('The UID of the privatemsg recipient'),
      'handler' => 'views_handler_field_numeric',
    ),
    'argument' => array(
      'help' => t('Filter according to the recipient\'s uid'),
      'handler' => 'views_handler_argument_user_uid',
    ),
    'relationship' => array(
      'base' => 'users',
      'field' => 'recipient',
      'handler' => 'views_handler_relationship',
      'label' => t('Privatemsg Recipient'),
      'help' => t('Relate to the user receiving the privatemsg'),
    ),
  );

  $data['pm_index']['is_new'] = array(
    'title' => t('Has Been Read'),
    'help' => t('Whether the privatemsg has been read'),
    'field' => array(
      'handler' => 'views_handler_field_pm_new',
    ),
    'filter' => array(
      'help' => t('Filter to privatemsgs that have/have not been read'),
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['pm_index']['deleted'] = array(
    'title' => t('Is Deleted'),
    'filter' => array(
      'help' => t('Filter to privatemsgs that have/have not been deleted'),
      'handler' => 'views_handler_filter_pm_deleted',
    ),
  );

  return $data;
}
