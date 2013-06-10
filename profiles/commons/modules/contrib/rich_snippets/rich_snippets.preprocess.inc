<?php

/**
 * @file
 * Rich Snippets preprocess hook implementations.
 */

/**
 * Default preprocessor when the result isn't associated with a schema.
 *
 * @param array &$variables
 *   An associative array of template variables.
 */
function rich_snippets_default_preprocessor(&$variables) {

  // Build the date, remove it from search info.
  if (isset($variables['result']['date'])) {
    $date = theme('rich_snippets_date', array('date' => $variables['result']['date']));
    $variables['snippet'] = $date . ' ' . $variables['snippet'];
    unset($variables['info_split']['date']);
  }
  // Re-format the author info.
  if (isset($variables['info_split']['user'])) {
    $user_args = array('!user' => $variables['info_split']['user']);
    $variables['info_split']['user'] = t('By !user', $user_args);
  }
}

/**
 * Implements preprocess_search_result_SCHEMA_schema() for event.
 *
 * Supported properties:
 * - image
 * - startDate
 * - location
 *
 * Unsupported properties:
 * - attendee
 * - attendees
 * - duration
 * - endDate
 * - offers
 * - performer
 * - performers
 * - subEvent
 * - subEvents
 * - superEvent
 */
function rich_snippets_preprocess_search_result_event_schema(&$variables, Drupal_RichSnippets_SchemaPreprocessorInterface $preprocessor) {
  $preprocessor->addImage('image');
  $preprocessor->addDateToInfo('startDate');
  $preprocessor->addTextToInfo('location');
}
