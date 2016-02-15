<?php

/**
 * @file
 * Contains \views_handler_field_pm_new.
 */

/**
 * Defines a field handler to display whether a pm message is new.
 *
 * @ingroup privatemsg
 * @ingroup views_field_handlers
 */
class views_handler_field_pm_new extends views_handler_field_markup {

  /**
   * {@inheritdoc}
   */
  function construct() {
    $this->definition['format'] = '';
    parent::construct();
  }

  /**
   * {@inheritdoc}
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['new_text'] = array('default' => 'New!', 'translatable' => TRUE);
    $options['not'] = array('default' => FALSE, 'bool' => TRUE);

    return $options;
  }

  /**
   * {@inheritdoc}
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['new_text'] = array(
      '#type' => 'textfield',
      '#title' => t('New Text'),
      '#description' => t('Text to show if the message has not been read'),
      '#default_value' => (isset($this->options['new_text'])) ? $this->options['new_text'] : '',
    );
    $form['not'] = array(
      '#type' => 'checkbox',
      '#title' => t('Reverse'),
      '#description' => t('If checked, true will be displayed as false.'),
      '#default_value' => $this->options['not'],
    );
  }

  /**
   * {@inheritdoc}
   */
  function render($values) {
    $value = (bool) $this->get_value($values);
    if (!empty($this->options['not'])) {
      $value = !$value;
    }

    return $value ? $this->options['new_text'] : '';
  }

}
