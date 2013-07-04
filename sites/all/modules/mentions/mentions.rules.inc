<?php
/**
 * @file
 * Rules module integration.
 */

/**
 * Implements hook_rules_data_info().
 */
function mentions_rules_data_info() {
  return array(
    'mentions' => array(
      'label' => t('mentions'),
      'group' => t('Mentions'),
      'wrap' => TRUE,
      'property info' => array(
        'mid' => array(
          'type' => 'decimal',
          'label' => t('Mention ID'),
        ),
        'entity_type' => array(
          'type' => 'text',
          'label' => t('Mention source entity type')
        ),
        'entity' => array(
          'type' => 'entity',
          'label' => t('Mention source entity')
        ),
        'user' => array(
          'type' => 'user',
          'label' => t('Mentioned user'),
        ),
        'author' => array(
          'type' => 'user',
          'label' => t('Mention author user'),
        ),
        'created' => array(
          'type' => 'date',
          'label' => t('Created date'),
        ),
        'updated' => array(
          'type' => 'date',
          'label' => t('Updated date'),
        ),
      ),
    ),
  );
}

/**
 * Implements hook_rules_event_info().
 */
function mentions_rules_event_info() {
  $items = array();

  $items['mentions_insert'] = array(
    'label' => t('After a new mention is created'),
    'group' => t('Mentions'),
    'variables' => array(
      'mention' => array(
        'label' => t('Mention'),
        'type' => 'mentions',
      ),
    ),
  );

  $items['mentions_update'] = array(
    'label' => t('After a mention is updated'),
    'group' => t('Mentions'),
    'variables' => array(
      'mention' => array(
        'label' => t('Mention'),
        'type' => 'mentions',
      ),
    ),
  );

  $items['mentions_delete'] = array(
    'label' => t('After a mention is deleted'),
    'group' => t('Mentions'),
    'variables' => array(
      'mention' => array(
        'label' => t('Mention'),
        'type' => 'mentions',
      ),
    ),
  );

  return $items;
}

