(function ($) {

  /**
   * Ensure only a single default is selected.
   */
  Drupal.behaviors.registration = {
    attach:function (context, settings) {
      $('.reg-default').click(function () {
        var $checked = $(this);
        $('.reg-default').each(function () {
          if ($(this).attr('id') !== $checked.attr('id')) {
            $(this).removeAttr('checked');
          }
        });
      });
    }
  };

})(jQuery);
