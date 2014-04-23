// $Id: elfinder.bueditor.js,v 1.1 2010/10/06 09:44:51 ph0enix Exp $

Drupal.elfinder.editor.bueditor = {
  fn : { 
    attach: Drupal.wysiwyg.editor.attach.bueditor
  }
}

Drupal.wysiwyg.editor.attach.bueditor = function(context, params, settings) {
  Drupal.settings.BUE.imceURL = Drupal.settings.elfinder.moduleUrl;  
  Drupal.elfinder.editor.bueditor.fn.attach.apply(this, arguments); 
}
