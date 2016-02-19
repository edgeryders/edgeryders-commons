<?php
/**
 * @file
 * Field handler to present a link to mention.
 */

/**
 * Class mentions_views_handler_field_link
 */
class mentions_views_handler_field_link extends views_handler_field {
  function construct() {
    parent::construct();
    $this->additional_fields['entity_type'] = 'entity_type';
    $this->additional_fields['entity_id']   = 'entity_id';
    $this->additional_fields['mid']         = 'mid';

    // Invoke mentions_hook_views_handler_field_link_fields().
    foreach (module_list() as $module) {
      $function = 'mentions_' . $module . '_views_handler_field_link_fields';
      if (function_exists($function)) {
        $function($this);
      }
    }
  }

  function option_definition() {
    $options = parent::option_definition();

    $options['text'] = array('default' => '', 'translatable' => TRUE);

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['text'] = array(
      '#type'          => 'textfield',
      '#title'         => t('Text to display'),
      '#default_value' => $this->options['text'],
    );
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    $link = array('options' => array());

    // Invoke mentions_hook_views_handler_field_link().
    $function = 'mentions_' . $values->{$this->aliases['entity_type']} . '_views_handler_field_link';
    if (function_exists($function)) {
      $function($this, $values, $link);
    }

    // Generic function for any entity.
    else {
      $entities = entity_load($values->{$this->aliases['entity_type']}, array($values->{$this->aliases['entity_id']}));
      if (isset($entities[$values->{$this->aliases['entity_id']}])) {
        $entity = $entities[$values->{$this->aliases['entity_id']}];
        $uri    = entity_uri($values->{$this->aliases['entity_type']}, $entity);
        if (!empty($uri)) {
          $link['url']     = $uri['path'];
          $link['options'] = $uri['options'];
        }
      }
    }

    if (!empty($link['url'])) {
      $text = !empty($this->options['text']) ? $this->options['text'] : t('view');

      return l($text, $link['url'], $link['options']);
    }

    return FALSE;
  }
}
