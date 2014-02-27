<?php

/**
 * @file
 * Contains \views_handler_field_pm_markup.
 */

/**
 * Defines a field handler that renderes a privatemsg.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_pm_markup extends views_handler_field_markup {

  /**
   * {@inheritdoc}
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['pmid'] = array('default' => '');
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['pmid'] = array(
      '#type' => 'textfield',
      '#title' => t('ID of the Current Privatemsg (REQUIRED for token replacement)'),
      '#description' => t('Enter the replacement-pattern (SEE THEM BELOW) for the field corresponding to the privatemsg id. If this field is not set correctly, then token replacement will not work for the private msg'),
      '#default_value' => $this->options['pmid'],
    );
  }

  /**
   * {@inheritdoc}
   */
  function render($values) {
    $value = $this->get_value($values);
    if ($value) {
      // Only can do token replacement if there is an mid field
      // exposed.
      $pmid = $this->tokenize_value($this->options['pmid']);
      if ($privatemsg = privatemsg_message_load($pmid)) {
        $value = privatemsg_token_replace($value, array('privatemsg_message' => $privatemsg));
      }
      $value = str_replace('<!--break-->', '', $value);
      return check_markup($value, is_array($this->get_value($values)) ? $this->get_value($values, 'format') : NULL, '');
    }
  }

}
