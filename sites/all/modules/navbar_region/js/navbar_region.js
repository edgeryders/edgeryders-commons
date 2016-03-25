(function($) {
  Drupal.behaviors.navbarRegion = {
    attach: function(context) {
      $('.navbar-region .menu').drupalNavbarMenu();
    }
  }
})(jQuery);
