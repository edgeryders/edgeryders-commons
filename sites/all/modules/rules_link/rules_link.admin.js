/**
 * @file
 * Ui Tweaks for rules link admin ui.
 */

(function($) {
  Drupal.behaviors.rules_link = {
    attach: function(context) {
      $('#edit-entity-type').change(function() {
        $('#edit-settings-vars-items-0-type').val($(this).val());
        $('#edit-settings-vars-items-0-label').val($('#edit-entity-type option:selected').text());
        $('#edit-settings-vars-items-0-name').val($(this).val());
      });
    }
  };

})(jQuery);