// $Id: elfinder.jwysiwyg.js,v 1.1 2010/10/06 09:44:51 ph0enix Exp $

(function($) {

Drupal.elfinder.editor.jwysiwyg = {
  fn : { 
    attach: Drupal.wysiwyg.editor.attach.jwysiwyg
  }
}

Drupal.wysiwyg.editor.attach.jwysiwyg = function(context, params, settings) {
  
  var imgHtml = null;
  
  if (jQuery.fn.wysiwyg.defaults) {
    imgHtml = jQuery.fn.wysiwyg.defaults.formImageHtml;
  }
  
  var oImgHtml = $('<div>'+imgHtml+'</div>');
  var oUrl = $("input[name=url]", oImgHtml);
  var browsebutton = $('<input type="button">');

  browsebutton.attr('value', Drupal.t('Browse Server'));
  browsebutton.attr('onclick', 'var w = window; w.open("' + Drupal.settings.elfinder.file_browser_url + '","","toolbar=no,menubar=no,width=600,height=600")');
  browsebutton.insertAfter(oUrl);
  
  if (jQuery.fn.wysiwyg.defaults) {
    jQuery.fn.wysiwyg.defaults.formImageHtml = oImgHtml.html();
  }

  Drupal.elfinder.editor.jwysiwyg.fn.attach.apply(this, arguments); 
}

})(jQuery);