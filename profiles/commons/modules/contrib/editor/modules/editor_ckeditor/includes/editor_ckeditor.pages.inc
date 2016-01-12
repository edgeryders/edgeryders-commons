<?php

/**
 * @file
 * Page callbacks for the Editor CKEditor module.
 */

/**
 * Form callback: Display a form for inserting/editing a link.
 */
function editor_ckeditor_editor_dialog_link_form($form, &$form_state, $format) {
  editor_format_ensure_additional_properties($format);

  $form_state['format'] = $format;

  // Pull in any default values set by the editor.
  $values = array();

  if (isset($form_state['input']['editor_object'])) {
    $values = $form_state['input']['editor_object'];
  }

  // Set the dialog title.
  if (!empty($values['href'])) {
    drupal_set_title(t('Edit link'));
  }
  else {
    drupal_set_title(t('Insert link'));
  }

  // Use a "textfield" rather than "url" to allow relative paths.
  $form['href'] = array(
    '#title' => t('URL'),
    '#type' => 'textfield',
    '#element_validate' => array('_editor_ckeditor_editor_dialog_link_url_validate'),
    '#default_value' => isset($values['href']) ? $values['href'] : FALSE,
    '#parents' => array('attributes', 'href'),
  );
  $form['target'] = array(
    '#title' => t('Open in new window'),
    '#type' => 'checkbox',
    '#return_value' => '_blank',
    '#default_value' => isset($values['target']) ? $values['target'] : FALSE,
    '#parents' => array('attributes', 'target'),
  );
  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#ajax' => array(
      'callback' => 'editor_ckeditor_editor_dialog_save',
      'event' => 'click',
    ),
    '#attributes' => array(
      'class' => array('button--primary'),
    ),
  );

  return $form;
}

/**
 * Form callback: Display a form for inserting/editing a link.
 */
function editor_ckeditor_editor_dialog_image_form($form, &$form_state, $format) {
  $form['#attached'] = array(
    'library' => array(
      array('editor_ckeditor', 'drupal.editor_ckeditor.image.admin'),
    ),
  );
  $form['#prefix'] = '<div id="editor-ckeditor-dialog-form">';
  $form['#suffix'] = '</div>';

  editor_format_ensure_additional_properties($format);

  $form_state['format'] = $format;

  // Pull in any default values set by the editor.
  $values = array();

  if (isset($form_state['input']['editor_object'])) {
    $values = $form_state['input']['editor_object'];
  }

  // Set the dialog title.
  if (!empty($values['src'])) {
    drupal_set_title(t('Edit image'));
  }
  else {
    drupal_set_title(t('Insert image'));
  }

  // Construct strings to use in the upload validators.
  $upload_settings = isset($format->editor_settings['image_upload']) ? $format->editor_settings['image_upload'] : array();
  $upload_settings += array(
    'status' => 0,
    'dimensions' => array('max_width' => '', 'max_height' => ''),
    'max_size' => NULL,
    'scheme' => 'public',
    'directory' => 'inline-images',
  );

  if (!empty($upload_settings['max_dimensions']['width']) && !empty($upload_settings['max_dimensions']['height'])) {
    $max_dimensions = $upload_settings['max_dimensions']['width'] . 'x' . $upload_settings['max_dimensions']['height'];
  }
  else {
    $max_dimensions = 0;
  }

  $max_filesize = !empty($upload_settings['max_size']) ? min(parse_size($upload_settings['max_size']), file_upload_max_size()) : file_upload_max_size();
  $existing_file = !empty($values['data-entity-id']) ? file_load($values['data-entity-id']) : NULL;
  $fid = $existing_file ? $existing_file->fid : NULL;

  $form['image']['fid'] = array(
    '#title' => t('Image upload'),
    '#type' => 'managed_file',
    '#upload_location' => $upload_settings['scheme'] . '://' . $upload_settings['directory'],
    '#default_value' => $fid ? $fid : NULL,
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg'),
      'file_validate_size' => array($max_filesize),
      'file_validate_image_resolution' => array($max_dimensions),
    ),
    '#image_toggle' => t('Image upload'),
    '#post_render' => array('_editor_ckeditor_editor_dialog_image_toggle'),
    '#parents' => array('fid'),
    '#weight' => -10,
  );

  $form['image']['src'] = array(
    '#title' => t('Image URL'),
    '#type' => module_exists('elements') ? 'urlfield' : 'textfield',
    '#placeholder' => '/example/image.jpg',
    '#default_value' => isset($values['src']) ? $values['src'] : NULL,
    '#size' => 60,
    '#attributes' => array('class' => array('editor-image-src')),
    '#parents' => array('attributes', 'src'),
    '#image_toggle' => t('Image URL'),
    '#post_render' => array('_editor_ckeditor_editor_dialog_image_toggle'),
    '#weight' => -2,
  );

  // If no current value or an existing file exists, default to showing
  // the uploading interface.
  if ($fid || empty($form['image']['src']['#default_value'])) {
    $form['image']['fid']['#weight'] = -10;
    $form['image']['src']['#default_value'] = '';
  }
  // Otherwise if editing an unmanaged file, show the raw URL field.
  else {
    $form['image']['src']['#weight'] = -10;
  }

  // The alt attribute is *required*, but we allow users to opt-in to empty
  // alt attributes for the very rare edge cases where that is valid by
  // specifying two double quotes as the alternative text in the dialog.
  // However, that *is* stored as an empty alt attribute, so if we're editing
  // an existing image (which means the src attribute is set) and its alt
  // attribute is empty, then we show that as two double quotes in the dialog.
  // @see https://www.drupal.org/node/2307647
  $alt = isset($values['alt']) ? $values['alt'] : '';
  if ($alt === '' && !empty($values['src'])) {
    $alt = '""';
  }
  $form['alt'] = array(
    '#title' => t('Alternative text'),
    '#type' => 'textfield',
    '#required' => TRUE,
    '#description' => t('Alternative text is required.<br />(Only in rare cases should this be left empty. To create empty alternative text, enter <code>""</code> — two double quotes without any content).'),
    '#default_value' => $alt,
    '#attributes' => array(
      'placeholder' => t('Short description for the visually impaired')
    ),
    '#parents' => array('attributes', 'alt'),
  );
  $form['size'] = array(
    '#type' => 'fieldset',
    '#title' => t('Image size'),
    '#attributes' => array('class' => array('container-inline')),
  );
  $form['size']['width'] = array(
    '#title' => t('Width'),
    '#title_display' => 'attribute',
    '#type' => module_exists('elements') ? 'numberfield' : 'textfield',
    '#default_value' => isset($values['width']) ? $values['width'] : NULL,
    '#min' => 1,
    '#max' => 99999,
    '#attributes' => array(
      'placeholder' => t('width')
    ),
    '#parents' => array('attributes', 'width'),
    '#field_suffix' => ' &times; ',
  );
  $form['size']['height'] = array(
    '#title' => t('Height'),
    '#title_display' => 'attribute',
    '#type' => module_exists('elements') ? 'numberfield' : 'textfield',
    '#default_value' => isset($values['height']) ? $values['height'] : NULL,
    '#min' => 1,
    '#max' => 99999,
    '#attributes' => array(
      'placeholder' => t('height')
    ),
    '#parents' => array('attributes', 'height'),
    '#field_suffix' => ' ' . t('pixels')
  );

  // Retrieve available filters and load all configured filters.
  $filters = !empty($format->format) ? filter_list_format($format->format) : array();

  $form['align'] = array(
    '#title' => t('Align'),
    '#type' => 'radios',
    '#default_value' => isset($values['data-align']) ? $values['data-align'] : 'none',
    '#options' => array(
      'none' => t('None'),
      'left' => t('Left'),
      'center' => t('Center'),
      'right' => t('Right'),
    ),
    '#attributes' => array('class' => array('container-inline')),
    '#parents' => array('attributes', 'data-align'),
    '#access' => !empty($filters['editor_align']->status),
  );
  $form['caption'] = array(
    '#title' => t('Add a caption'),
    '#type' => 'checkbox',
    '#default_value' => (isset($values['hasCaption']) && strcmp($values['hasCaption'], 'false') !== 0) ? (bool) $values['hasCaption'] : FALSE,
    '#parents' => array('attributes', 'hasCaption'),
    '#access' => !empty($filters['editor_caption']->status),
  );

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#ajax' => array(
      'callback' => 'editor_ckeditor_editor_dialog_save',
      'event' => 'click',
    ),
    '#attributes' => array(
      'class' => array('button--primary'),
    ),
  );

  return $form;
}

/**
 * Submit handler for filter_format_editor_image_form().
 */
function editor_ckeditor_editor_dialog_image_form_submit($form, &$form_state) {
  // Image source overrides file uploads, as the values are emptied out when
  // hidden by JavaScript.
  if (!empty($form_state['values']['attributes']['src'])) {
    $form_state['values']['fid'] = NULL;
    $form_state['values']['attributes']['data-entity-id'] = NULL;
  }

  // Convert any uploaded files from the FID values to the src attribute.
  if (!empty($form_state['values']['fid'])) {
    $fid = $form_state['values']['fid'];
    $file = file_load($fid);
    $form_state['values']['attributes']['src'] = file_create_url($file->uri);
    $form_state['values']['attributes']['data-entity-id'] = $fid;
    $form_state['values']['attributes']['data-entity-type'] = 'file';

    unset($form_state['values']['fid']);
  }

  // When the alt attribute is set to two double quotes, transform it to the
  // empty string: two double quotes signify "empty alt attribute". See above.
  if (trim($form_state['values']['attributes']['alt']) === '""') {
    $form_state['values']['attributes']['alt'] = '';
  }
}

/**
 * Form AJAX callback. Sends the save editor AJAX command and closes the dialog.
 *
 * @see filter_format_editor_link_form()
 * @see filter_format_editor_image_form()
 */
function editor_ckeditor_editor_dialog_save($form, &$form_state) {
  $commands = array();

  if (form_get_errors()) {
    unset($form['#prefix'], $form['#suffix']);
    $status_messages = array('#theme' => 'status_messages');
    $output = drupal_render($form);
    $output = '<div>' . drupal_render($status_messages) . $output . '</div>';
    $commands[] = ajax_command_html('#editor-ckeditor-dialog-form', $output);
  }
  else {
    $commands[] = editor_command_editor_dialog_save($form_state['values']);
    $commands[] = dialog_command_close_modal_dialog();
  }

  return array(
    '#type' => 'ajax',
    '#commands' => $commands,
  );
}

/**
 * Element validation function.
 */
function _editor_ckeditor_editor_dialog_link_url_validate(&$element, &$form_state) {
  $value = trim($element['#value']);

  form_set_value($element, $value, $form_state);

  // Unlike
  if ($value !== '' && !valid_url($value, TRUE) && !valid_url($value, FALSE)) {
    form_error($element, t('The URL %url is not valid.', array('%url' => $value)));
  }
}

/**
 * Post render callback for wrapping an element in "toggle" markup.
 */
function _editor_ckeditor_editor_dialog_image_toggle($content, $element) {
  $html = '';
  $html .= '<div data-editor-image-toggle="' . $element['#image_toggle'] . '">';
  $html .= $content;
  $html .= '</div>';

  return $html;
}
