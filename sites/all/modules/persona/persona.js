/**
 * @file
 * JavaScript for communicating with navigator.id
 *
 * @see https://developer.mozilla.org/en-US/docs/DOM/navigator.id
 */

(function ($) {

"use strict";

Drupal.behaviors.persona = {
  attach: function (context, settings) {
    // If navigator.id is not available then do nothing.
    if (!navigator.id) {
      return;
    }

    var instanceId = Math.random();
    var changeEmail = false;
    var actionedSignOut = false;

    /**
     * Stores instanceId in a session cookie.
     */
    function setInstanceId() {
      document.cookie = "personaInstanceId=" + instanceId + "; path=" + settings.basePath;
    }

    /**
     * Checks that instanceId matches the session cookie.
     */
    function checkInstanceId() {
      var parts = document.cookie.split("personaInstanceId=");
      if (parts.length == 2) {
        return parts.pop().split(";").shift() == instanceId;
      }
    }

    /**
     * Generates a relative URL for the given Drupal path. Optionally adds
     * destination path that Drupal will redirect to if a form is submitted.
     *
     * @param string path
     * @param string destination
     *
     * @return string
     *   Relative URL.
     */
    function relativeUrl(path, destination) {
      var url = settings.basePath;
      url += settings.persona.cleanUrls ? '' : '?q=';
      url += path;
      if (destination != null) {
        url += settings.persona.cleanUrls ? '?' : '&';
        url += 'destination=' + Drupal.encodePath(destination);
      }
      return url;
    }

    /**
     * Gets the XSRF token if it isn't defined.
     */
    function getToken(async) {
      if (!settings.persona.token) {
        $.ajax({
          type: 'GET',
          async: async,
          contentType: 'application/json',
          url: relativeUrl('user/persona/token'),
          dataType: 'json',
          success: function (data, textStatus, jqXHR) {
            settings.persona.token = data.token;
          }
        });
      }
    }

    /**
     * Request sign in.
     */
    function signIn() {
      setInstanceId();
      navigator.id.request(settings.persona.request);
      // Get the token asynchronously if necessary.
      getToken(true);
    }

    /**
     * Request sign out.
     */
    function signOut() {
      // Is the user signed in with Persona?
      if (settings.persona.email) {
        actionedSignOut = true;
        setInstanceId();
        navigator.id.logout();
      }
      // Is the user signed in without Persona?
      else if (settings.persona.uid > 0) {
        window.location = relativeUrl('user/logout');
      }
    }

    /**
     * Reloads the page.
     */
    function reload() {
      // This technique will not resend a POST, will not bypass the cache, and
      // will remove any anchors that would prevent the page from reloading.
      window.location = relativeUrl(settings.persona.currentPath);
    }

    /**
     * Fades out the page while preserving body background styling.
     */
    function fade(duration) {
      if (settings.persona.fadeOut) {
        $('body').fadeTo(duration, 0, function () {
          $('body').children().hide();
        });
      }
    }

    setInstanceId();
    // Determine when the current tab has the focus.
    $(window).focus(function () {
      setInstanceId();
    });
    // Register callbacks to be invoked when a user signs in or out.
    navigator.id.watch({
      loggedInUser: settings.persona.email,
      onlogin: function (assertion) {
        fade('slow');
        if (checkInstanceId()) {
          // Get the token synchronously if necessary.
          getToken(false);
          // Attempt to sign in to the site and then reload the page.
          $.ajax({
            type: 'POST',
            contentType: 'application/json',
            url: relativeUrl(changeEmail ? 'user/persona/change-email' : 'user/persona/sign-in'),
            data: JSON.stringify({
              token: settings.persona.token,
              assertion: assertion
            }),
            dataType: 'json',
            success: function (data, textStatus, jqXHR) {
              // Redirect if path provided, otherwise just reload the page.
              if (jqXHR.status == 201 && data.redirect) {
                window.location = relativeUrl(data.redirect, settings.persona.currentPath);
              }
              else {
                reload();
              }
            },
            error: function (jqXHR, textStatus, errorThrown) {
              // Tell Persona that it didn't work out.
              navigator.id.logout();
            }
          });
        }
        else {
          window.setTimeout(reload, 4000);
        }
      },
      onlogout: function () {
        fade('fast');
        if (checkInstanceId()) {
          // Only sign out from the website if it is already signed in. This
          // prevents unnecessary sign out requests when verification fails.
          if (settings.persona.email) {
            $.ajax({
              type: 'POST',
              contentType: 'application/json',
              url: relativeUrl('user/persona/sign-out'),
              data: JSON.stringify({
                token: settings.persona.token
              }),
              dataType: 'json',
              complete: function (jqXHR, textStatus) {
                // Redirect the current tab to the homepage only if sign out
                // button was clicked. This avoids breaking the back button.
                if (actionedSignOut) {
                  window.location = settings.basePath;
                }
                else {
                  reload();
                }
              }
            });
          }
          else {
            reload();
          }
        }
        else {
          window.setTimeout(reload, 1000);
        }
      }
    });
    // Attach the buttons.
    $('.persona-styled').click(function (event) {
      $(this).blur();
    });
    $('.persona-sign-in, .persona-change-email').click(function (event) {
      event.preventDefault();
      changeEmail = $(this).hasClass('persona-change-email');
      signIn();
    });
    $('.persona-sign-out').click(function (event) {
      event.preventDefault();
      signOut();
    });
    // Add compatibility with user switching.
    $('.persona-forget').click(function (event) {
      settings.persona.email = null;
      navigator.id.logout();
    });
    // Attach keyboard shortcuts.
    $(document).keydown(function(event) {
      if (event.ctrlKey == true) {
        switch (event.keyCode) {
          // Ctrl + Backspace.
          case 8:
            signOut();
            break;
          // Ctrl + Enter.
          case 13:
            signIn();
            break;
        }
      }
    });
  }
};

})(jQuery);
