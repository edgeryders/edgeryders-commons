<?php
/**
 * @file
 * Field handler to provide simple renderer that allows using a themed user link.
 */

/**
 * Class mentions_views_handler_field_auid
 */
class mentions_views_handler_field_auid extends views_handler_field_user_name {
  /**
   * Add uid in the query so we can test for anonymous if needed.
   */
  function init(&$view, &$data) {
    parent::init($view, $data);
  }

  function option_definition() {
    $options = parent::option_definition();

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function render_link($data, $values) {
    $account = user_load($this->get_value($values));
    if (!empty($this->options['link_to_user']) || !empty($this->options['overwrite_anonymous'])) {
      if (!empty($this->options['overwrite_anonymous']) && !$account->uid) {
        // This is an anonymous user, and we're overriting the text.
        return check_plain($this->options['anonymous_text']);
      }
      elseif (!empty($this->options['link_to_user'])) {
        return theme('username', array('account' => $account));
      }
    }
    // If we want a formatted username, do that.
    if (!empty($this->options['format_username'])) {
      return format_username($account);
    }

    // Otherwise, there's no special handling, so return the data directly.
    return $data;
  }
}
