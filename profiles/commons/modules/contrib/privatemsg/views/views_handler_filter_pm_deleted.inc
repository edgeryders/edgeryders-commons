<?php
/**
 * @file
 * Contains \views_handler_filter_pm_deleted.
 */

/**
 * Defines a filter handler, that filters deleted private messages.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_pm_deleted extends views_handler_filter_boolean_operator {

  /**
   * {@inheritdoc}
   */
  function construct() {
    parent::construct();

    $this->definition['label'] = 'Show deleted messages';
    $this->definition['type'] = 'yes-no';
  }

}
