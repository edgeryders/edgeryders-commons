function elfinder_ffs_callback(arg1) {

          var fieldName = Drupal.settings.elfinder.field_name;
          var fieldId = Drupal.settings.elfinder.filepath_id;
          
          var url = arg1;
          
          if (typeof arg1 == 'object') {
            url = arg1.url;
          }

          var filePath =  url;

          window.opener.jQuery('input#'+fieldId).val(filePath).change();
          window.opener.focus();
          window.close();
}
