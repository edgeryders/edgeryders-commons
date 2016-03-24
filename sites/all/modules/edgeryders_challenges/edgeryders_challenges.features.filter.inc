<?php
/**
 * @file
 * edgeryders_challenges.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function edgeryders_challenges_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML (your normal choice).
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML (your normal choice)',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'editor' => 'ckeditor',
    'editor_settings' => 'a:3:{s:7:"toolbar";a:1:{i:0;a:6:{i:0;a:2:{s:4:"name";s:10:"Formatting";s:5:"items";a:2:{i:0;s:4:"Bold";i:1;s:6:"Italic";}}i:1;a:2:{s:4:"name";s:7:"Linking";s:5:"items";a:2:{i:0;s:4:"Link";i:1;s:6:"Unlink";}}i:2;a:2:{s:4:"name";s:9:"Alignment";s:5:"items";a:3:{i:0;s:11:"JustifyLeft";i:1;s:13:"JustifyCenter";i:2;s:12:"JustifyRight";}}i:3;a:2:{s:4:"name";s:5:"Lists";s:5:"items";a:2:{i:0;s:12:"BulletedList";i:1;s:12:"NumberedList";}}i:4;a:2:{s:4:"name";s:5:"Media";s:5:"items";a:2:{i:0;s:10:"Blockquote";i:1;s:11:"DrupalImage";}}i:5;a:2:{s:4:"name";s:5:"Tools";s:5:"items";a:2:{i:0;s:6:"Source";i:1;s:8:"Maximize";}}}}s:12:"image_upload";a:5:{s:6:"status";i:0;s:6:"scheme";s:6:"public";s:9:"directory";s:13:"inline-images";s:8:"max_size";s:0:"";s:14:"max_dimensions";a:2:{s:5:"width";s:0:"";s:6:"height";s:0:"";}}s:7:"plugins";a:1:{s:5:"style";a:1:{s:10:"style_list";a:0:{}}}}',
    'filters' => array(
      'filter_mentions' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'mention_types' => array(
            'at_mention' => 'at_mention',
          ),
        ),
      ),
      'filter_url' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 128,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'htmLawed' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(
          'htmLawed' => array(
            'config' => '\'tidy\' => 1, 
          \'elements\' => \'* -script -applet\', 
          \'deny_attribute\' => \'allowscriptaccess on*\', 
          \'comment\' => 2, 
          \'cdata\' => 2, 
          \'css_expression\' => 1',
            'spec' => 'span=property, resource;
          a=data-hovertext;',
            'help' => 'HTML filtering allows all tags except script and applet, all attributes except the "on*" JavaScript event attributes.
          Additionally allows &lt;span property=\'\' resource=\'\'&gt;&lt;/span&gt; for RDFa semantic markup.
          Additionally allows &lt;a data-hovertext=\'\'&gt;&lt;/a&gt;.',
          ),
        ),
      ),
      'editor_align' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
      'editor_caption' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
