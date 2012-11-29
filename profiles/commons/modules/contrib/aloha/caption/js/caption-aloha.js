/**
 * @file
 * Provides the ability to render image captions in JavaScript.
 */

(function ($, Drupal, window, document, undefined) {

"use strict";

// Just before the initialization of Aloha Editor, set the CaptionedImage
// plugin's render method.
$(document).bind('aloha-before-init', function(e, settings) {
  settings.plugins.captionedImage.render = Drupal.caption.render;
});


Drupal.caption = Drupal.caption || {};

/**
 * Render callback for Aloha Editor's CaptionedImage plug-in.
 */
Drupal.caption.render = function(variables, callback) {
  callback({
    content: Drupal.theme('caption', variables),
    // Selector for image.
    image  : 'img',
    // Selector for caption.
    caption: '.caption-text'
  });
};

/**
 * Returns HTML for a captioned image.
 *
 * This is a JS version of caption.module/theme_caption().
 *
 * @ingroup themeable
 */
Drupal.theme.prototype.caption = function(variables) {
  var image   = variables.image,
      caption = variables.caption,
      align   = variables.align,
      width   = variables.width;
  return '<div class="caption caption-' + align + '">' +
         '<div class="caption-inner" style="width: ' + width + ';">' +
         image +
         '<div class="caption-text">' + caption + '</div>' +
         '</div></div>';
};

})(jQuery, Drupal, this, this.document);
