<?php
/**
 * @file
 * Tokens functions for Mentions module.
 */

/**
 * Implements hook_token_info().
 */
function mentions_token_info() {
  $type = array(
    'name'        => t('Mentions'),
    'description' => t('Tokens related to individual mentions.'),
    'needs-data'  => 'mentions',
  );

  // Core tokens for mentions.
  $mentions['mid'] = array(
    'name'        => t('Mention ID'),
    'description' => t('The unique ID of the mention'),
  );

  // Chained tokens for mentions.
  $mentions['author'] = array(
    'name'        => t('Author'),
    'description' => t('The mention\'s author.'),
    'type'        => 'user',
  );

  $mention['created'] = array(
    'name'        => t('Date created'),
    'description' => t('The date the mention was created.'),
    'type'        => 'date',
  );

  $mention['changed'] = array(
    'name'        => t('Date changed'),
    'description' => t('The date the mention was last changed.'),
    'type'        => 'date',
  );

  return array(
    'types'  => array('mentions' => $type),
    'tokens' => array('mentions' => $mentions),
  );
}

/**
 * Implements hook_tokens().
 */
function mentions_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $url_options = array('absolute' => TRUE);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code           = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }
  $sanitize = !empty($options['sanitize']);

  $replacements = array();

  if ($type == 'mentions' && !empty($data['mentions'])) {
    $mention = $data['mentions'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        // Simple key values on the metnion.
        case 'mid':
          $replacements[$original] = $mention->mid;
          break;

        // Default values for the chained tokens handled below.
        case 'author':
          $user                    = user_load($mention->uid);
          $name                    = ($mention->uid == 0) ? variable_get('anonymous', t('Anonymous')) : $user->name;
          $replacements[$original] = $sanitize ? filter_xss($name) : $name;
          break;

        case 'created':
          $replacements[$original] = format_date($mention->created, 'medium', '', NULL, $language_code);
          break;

        case 'changed':
          $date                    = !empty($mention->changed) ? $mention->changed : $mention->created;
          $replacements[$original] = format_date($date, 'medium', '', NULL, $language_code);
          break;
      }
    }

    $author_tokens = token_find_with_prefix($tokens, 'author');
    if ($author_tokens) {
      $author = user_load($mention->uid);
      $replacements += token_generate('user', $author_tokens, array('user' => $author), $options);
    }

    $created_tokens = token_find_with_prefix($tokens, 'created');
    if ($created_tokens) {
      $replacements += token_generate('date', $created_tokens, array('date' => $mention->created), $options);
    }

    $changed_tokens = token_find_with_prefix($tokens, 'changed');
    if ($changed_tokens) {
      $date = !empty($mention->changed) ? $mention->changed : $mention->created;
      $replacements += token_generate('date', $changed_tokens, array('date' => $date), $options);
    }

    $entity_tokens = token_find_with_prefix($tokens, 'entity');
    if ($entity_tokens) {
      $replacements += token_generate($mention->entity_type, $entity_tokens, array($mention->entity_type => $mention->entity), $options);
    }
  }

  return $replacements;
}

