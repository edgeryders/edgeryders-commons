// $Id$

function elfinder_tinymce_browse_callback(field_name, url, type, win) {
  var w = window.open(tinymce.settings.file_browser_url, null, 'toolbar=yes,menubar=yes,width=600,height=500');
  w.tinymceFileField = field_name;
  w.tinymceFileWin = win;
}
