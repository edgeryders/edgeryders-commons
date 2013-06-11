<?php
/**
 * @file
 * Views handler to show attribute values rather than keys in views.
 */
class pm_handler_field_attributes_domain extends views_handler_field {

  function render($values) {
    $key = $values->{$this->field_alias};
    $value = pm_attribute_value($this->definition['domain'], $key);
    if (!empty($this->definition['icon'])) {
      return pm_icon($this->definition['icon'] .'_'. $key, $value);
    }
    return check_plain($value);
  }

}
