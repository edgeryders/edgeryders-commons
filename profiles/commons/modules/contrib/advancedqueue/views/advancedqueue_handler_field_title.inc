<?php

/**
 * Field handler for title.
 *
 * Build the translated version of the title, with placeholders from result
 * (preferably) and the data replaced.
 */
class advancedqueue_handler_field_title extends views_handler_field {
  function render($values) {
    $data = $values->{$this->aliases['data']} ? unserialize($values->{$this->aliases['data']}) : array();
    $result = $values->{$this->aliases['result']} ? unserialize($values->{$this->aliases['result']}) : array();

    $placeholders = array();
    foreach ((array) $result + (array) $data as $key => $value) {
      $name = in_array($key[0], array('%', '@', '!')) ? $key : '@' . $key;
      if (!isset($placeholders[$name]) && is_scalar($value)) {
        $placeholders[$name] = $value;
      }
    }

    // Add additional default placeholders.
    $placeholders += array(
      '@item_id' => $values->{$this->aliases['item_id']},
      '@item_queue_name' => $values->{$this->aliases['name']},
      '@item_uid' => $values->{$this->aliases['uid']},
    );

    return format_string($values->{$this->field_alias}, $placeholders);
  }
}
