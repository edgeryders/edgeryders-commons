/**
 * @file
 * Behaviours for the Block Attributes module.
 */

(function ($) {

  /**
   * Provide the summary information for the block attributes vertical tabs.
   */
  Drupal.behaviors.blockAttributesOptionsSummary = {
    attach: function (context) {
      // Block title attribute.
      $('fieldset#edit-title', context).drupalSetSummary(function (context) {
        if (!$('input[type="checkbox"]:checked', context).val()) {
          return Drupal.t('Disabled');
        }
        var value = $('.form-textarea', context).val();
        if (!value) {
          return Drupal.t('No title');
        }
        else {
          return Drupal.checkPlain(value);
        }
      });

      // Block HTML ID attribute.
      $('fieldset#edit-id', context).drupalSetSummary(function (context) {
        if (!$('input[type="checkbox"]:checked', context).val()) {
          return Drupal.t('Disabled');
        }
        var value = $('.form-text', context).val();
        if (!value) {
          return Drupal.t('No ID');
        }
        else {
          return Drupal.checkPlain(value);
        }
      });

      // Block HTML align attribute.
      $('fieldset#edit-align', context).drupalSetSummary(function (context) {
        if (!$('input[type="checkbox"]:checked', context).val()) {
          return Drupal.t('Disabled');
        }
        var value = $('.form-select', context).val();
        if (!value) {
          return Drupal.t('None selected');
        }
        else {
          return Drupal.checkPlain(value);
        }
      });

      // Block classes.
      $('fieldset#edit-class', context).drupalSetSummary(function (context) {
        if (!$('input[type="checkbox"]:checked', context).val()) {
          return Drupal.t('Disabled');
        }
        var value = $('.form-text', context).val();
        if (!value) {
          return Drupal.t('No classes');
        }
        else {
          return Drupal.checkPlain(value.replace(/\s/g, ', '));
        }
      });

      // Block HTML style attribute.
      $('fieldset#edit-style', context).drupalSetSummary(function (context) {
        if (!$('input[type="checkbox"]:checked', context).val()) {
          return Drupal.t('Disabled');
        }
        var value = $('.form-text', context).val();
        if (!value) {
          return Drupal.t('No style');
        }
        else {
          return Drupal.checkPlain(value);
        }
      });

      // Block HTML access key attribute.
      $('fieldset#edit-accesskey', context).drupalSetSummary(function (context) {
        if (!$('input[type="checkbox"]:checked', context).val()) {
          return Drupal.t('Disabled');
        }
        var value = $('.form-text', context).val();
        if (!value) {
          return Drupal.t('No access key');
        }
        else {
          return Drupal.checkPlain(value);
        }
      });

    }
  };

})(jQuery);
