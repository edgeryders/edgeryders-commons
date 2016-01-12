(function ($) {

  Drupal.behaviors.esi = {
    attach: function (context, settings) {
      var contextualize_urls = (typeof Drupal.settings.ESI !== 'undefined') && Drupal.settings.ESI.contextualize_URLs;
      if (contextualize_urls) {
        $().esiTags().DrupalESIContextualizeURL().handleESI();
      }
      else {
        $().esiTags().handleESI();
      }
    }
  };

  // Add the ESI context from the cookie to the ESI URL.
  $.fn.DrupalESIContextualizeURL = function() {
    // Regex to find the ESI context from an ESI src URL.
    var esi_context_regexp = /\/CACHE%3D([^\/]+)$/;

    $(this).each(function() {
      src = $(this).attr('src');
      
      // Get the context key from the ESI src attribute.
      // Contexts are provided in the last element: e.g. /CACHE=FOO.
      if (match = $(this).attr('src').match(esi_context_regexp)) {
        context_key = match[1];
        context_val = esi_get_user_context(context_key);
        new_src = src.replace(esi_context_regexp, '/CACHE=' + context_val);
        $(this).attr('src', new_src);
      }
    });
    return this;
  }

  // Attach to ajax request, find block that was created and
  // attachBehaviours to it.
  $( document ).ajaxSuccess(function( event, request, settings ) {
    if (event.target.nodeName.toLowerCase() == 'esi:include') {
      var returned = $('<div></div>').html($.trim(request.responseText)).contents();
      if (returned[0] !== undefined) {
        var elem = $('#' + returned[0].id);
        if (elem !== undefined) {
          Drupal.attachBehaviors(elem[0], Drupal.settings);
        }
      }
    }
  });

})(jQuery);

/**
 * Get the value of a particular context.
 */
function esi_get_user_context(context_key) {
  // Transform a context string (e.g. 'USER') into the actual cookie name.
  cookie_name = Drupal.settings.ESI.cookie_prefix + context_key + Drupal.settings.ESI.cookie_suffix;
  return esi_get_value_from_cookie(cookie_name);
}

/**
 * Get the value of a named cookie.
 */
function esi_get_value_from_cookie(cookie_name) {
  var all_cookies = document.cookie.split(';');
  for (var i=0; i < all_cookies.length; i++) {
    if (all_cookies[i].indexOf(cookie_name) === 1) {
      var values = all_cookies[i].split('=');
      return values[1];
    }
  }
  return '';
}
