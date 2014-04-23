// $Id: elfinder.wymeditor.js,v 1.1.2.2 2010/12/11 11:53:49 ph0enix Exp $

(function($) {

Drupal.elfinder.editor.wymeditor = {
  fn : { 
    attach: Drupal.wysiwyg.editor.attach.wymeditor
  }
}

Drupal.wysiwyg.editor.attach.wymeditor = function(context, params, settings) {

  Drupal.elfinder.editor.wymeditor.fn.attach.apply(this, arguments); 

  var $field = $('#' + params.field);
  var index = $field.data(WYMeditor.WYM_INDEX);
  
  if (typeof index != 'undefined') {
    var instance = WYMeditor.INSTANCES[index];

    var imgHtml = instance._options.dialogImageHtml;
    
    var oImgHtml = $('<div>'+imgHtml+'</div>');
    
        
    //$('body', oImgHtml).addClass('wym_dialog wym_dialog_image');
    //$('body', oImgHtml).attr('omload', 'WYMeditor.INIT_DIALOG(' + index + ')');
    
    var oUrl = $("input.wym_src", oImgHtml);
    var browsebutton = $('<input type="button">');
    browsebutton.attr('value', Drupal.t('Browse Server'));

    /* FIXME: url parameters duplicates for some reason */
    var tmp = Drupal.settings.elfinder.file_browser_url;
    var bugpos = tmp.indexOf(",");
    
    var elfinderUrl = '';
    
    if (bugpos != -1) {
      elfinderUrl = tmp.slice(0, bugpos);
    }
    else {
      elfinderUrl = tmp;
    }

    /*  */
 
    browsebutton.attr('onclick', 'var w = window; w.open("' + elfinderUrl + '","","toolbar=no,menubar=no,width=600,height=600")');
    browsebutton.insertAfter(oUrl);
    
    
    ImgHtml = '<body class="wym_dialog wym_dialog_image" onload="WYMeditor.INIT_DIALOG(' + index + ')">' + oImgHtml.html() + '</body>';
    
    instance._options.dialogImageHtml = ImgHtml;
  }
}

})(jQuery);
