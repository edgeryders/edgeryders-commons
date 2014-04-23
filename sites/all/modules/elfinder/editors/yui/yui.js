// $Id: elfinder.yui.js,v 1.1 2010/10/06 09:44:51 ph0enix Exp $

(function($) {

Drupal.elfinder.editor.yui = {
  fn : { 
    attach: Drupal.wysiwyg.editor.attach.yui
  }
}

Drupal.wysiwyg.editor.attach.yui = function(context, params, settings) {
  
  $('#' + params.field).parent().addClass('yui-skin-' + settings.theme);
  // Attach editor.
  var editor = new YAHOO.widget.Editor(params.field, settings);
  
  editor.on('windowInsertImageRender', function(e) {
	
	var dialogcode = $('#' + params.field + '-panel');
	
	
	 //var oImgHtml = $('<div>'+imgHtml+'</div>');
	var oUrl = $('input#' + params.field + '_insertimage_url');
	var browsebutton = $('<input type="button">');

	browsebutton.attr('value', Drupal.t('Browse Server'));
	browsebutton.attr('onclick', 'var w = window; w.open("' + Drupal.settings.elfinder.file_browser_url + '","","toolbar=no,menubar=no,width=600,height=600")');
	browsebutton.insertAfter(oUrl);

  }, editor, true);
  
  editor.render();
}

})(jQuery);