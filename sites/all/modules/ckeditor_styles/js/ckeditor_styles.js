/**
 * @file
 *  Helper JS to set dynamically generated styles for CKEditor.
 */

var CKEDITOR = CKEDITOR || false;

if (CKEDITOR) {
  // Add each styleset (defined by the module) to CKEDITOR.
  jQuery.each(Drupal.settings.ckeditor_styles, function(styleset, specs) {
    CKEDITOR.stylesSet.add(styleset, specs);
  });
}
