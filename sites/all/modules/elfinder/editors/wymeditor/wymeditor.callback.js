// $Id$

function elfinder_wymeditor_callback(url) {
          window.opener.jQuery('input.wym_src').val(url);
          window.close();
}
