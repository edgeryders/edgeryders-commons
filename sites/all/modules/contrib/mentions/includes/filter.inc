<?php

/**
 * @file
 * Filter module integration.
 */

/**
 * Implements hook_filter_info().
 */
function mentions_filter_info() {
  $filters = array();

  $filters['filter_mentions'] = array(
    'title'             => t('Mentions filter'),
    'description'       => t('Configure via the <a href="@url">Mention types</a> page.', array('@url' => url('admin/structure/mentions'))),
    'settings callback' => 'mentions_filter_filter_mentions_settings',
    'process callback'  => 'mentions_filter_filter_mentions_process',
    'tips callback'     => 'mentions_filter_filter_mentions_tips',
  );

  return $filters;
}

/**
 * Settings callback for Mentions filter.
 *
 * @param $form
 * @param $form_state
 * @param $filter
 * @param $format
 * @param $defaults
 *
 * @return array
 */
function mentions_filter_filter_mentions_settings($form, &$form_state, $filter, $format, $defaults) {
  $filter->settings += $defaults;

  $bundles = field_info_bundles('mention');
  $options = array();
  foreach ($bundles as $bundle_name => $info) {
    $options[$bundle_name] = $info['label'];
  }
  $settings['mention_types'] = array(
    '#title'         => t('Mention types'),
    '#type'          => 'checkboxes',
    '#options'       => $options,
    '#default_value' => isset($filter->settings['mention_types']) ? $filter->settings['mention_types'] : array(),
  );

  return $settings;
}

/**
 * Process callback for Mentions filter.
 *
 * @param $text
 * @param $filter
 *
 * @return mixed
 */
function mentions_filter_filter_mentions_process($text, $filter) {
  if (isset($filter->settings['mention_types']) && is_array($filter->settings['mention_types'])) {
    foreach ($filter->settings['mention_types'] as $mention_type) {
      mentions_replace_mentions($text, $mention_type);
    }
  }

  return $text;
}

/**
 * Tips callback for Mentions filter.
 *
 * @param            $format
 * @param bool|FALSE $long
 *
 * @return string
 */
function mentions_filter_filter_mentions_tips($format, $long = FALSE) {
  if (isset($format->settings['mention_types'])) {
    $mentions = array();

    foreach ($format->settings['mention_types'] as $mention_type) {
      $mentions[] = mentions_get_input_pattern($mention_type, FALSE);
    }

    return t('Mentions: @mentions', array('@mentions' => implode(', ', $mentions)));
  }

  return NULL;
}

