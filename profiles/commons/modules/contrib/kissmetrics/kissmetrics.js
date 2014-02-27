(function ($) {

/**
 * Provide the summary information for the KISSmetrics settings vertical tabs.
 */
Drupal.behaviors.kissmetricsSettingsSummary = {
  attach: function (context) {
    // The drupalSetSummary method required for this behavior is not available
    // on the KISSmetrics administration page, so we need to make sure this
    // behavior is processed only if drupalSetSummary is defined.
    if (typeof jQuery.fn.drupalSetSummary == 'undefined') {
      return;
    }

    $('fieldset#edit-path', context).drupalSetSummary(function (context) {
      if (!$('textarea[name="kissmetrics_visibility_pages"]', context).val()) {
        return Drupal.t('Not restricted');
      }
      else {
        return Drupal.t('Restricted to certain pages');
      }
    });
  }
};

})(jQuery);
