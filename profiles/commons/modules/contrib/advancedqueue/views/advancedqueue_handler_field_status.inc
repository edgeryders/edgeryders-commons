<?php

/**
 * Field handler for item status.
 */
class advancedqueue_handler_field_status extends views_handler_field {
  function render($values) {
    $options = array(
      ADVANCEDQUEUE_STATUS_QUEUED => t('Queued'),
      ADVANCEDQUEUE_STATUS_PROCESSING => t('Processing'),
      ADVANCEDQUEUE_STATUS_SUCCESS => t('Processed'),
      ADVANCEDQUEUE_STATUS_FAILURE => t('Failed'),
    );

    $classes = array(
      ADVANCEDQUEUE_STATUS_QUEUED => 'queued',
      ADVANCEDQUEUE_STATUS_PROCESSING => 'processing',
      ADVANCEDQUEUE_STATUS_SUCCESS => 'processed',
      ADVANCEDQUEUE_STATUS_FAILURE => 'failed',
    );

    $output = array(
      '#attached' => array(
        'css' => array(drupal_get_path('module', 'advancedqueue') . '/css/advancedqueue.css'),
      ),
      '#markup' => '<span class="' . check_plain($values->{$this->field_alias}) . ' advancedqueue-status-' . $classes[$values->{$this->field_alias}] . '">' . $options[$values->{$this->field_alias}] . '</span>',
    );

    return drupal_render($output);
  }
}
