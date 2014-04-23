// $Id$

function elfinder_yui_callback(url) {
          var editorId = window.opener.Drupal.wysiwyg.activeId;
          window.opener.jQuery('input#' + editorId + '_insertimage_url').val(url);
          window.close();
}
