<?php

/**
 * @file
 * Page callbacks for the Editor CKEditor module.
 */

/**
 * Form callback: Display a form for inserting/editing a link.
 */
function editor_ckeditor_link_dialog_form($form, &$form_state, $format) {
  editor_format_ensure_additional_properties($format);

  // The default values are set directly from \Drupal::request()->request,
  // provided by the editor plugin opening the dialog.
  $user_input = $form_state['input'];
  $input = isset($user_input['editor_object']) ? $user_input['editor_object'] : array();

  // Set the dialog title.
  if (!empty($values['href'])) {
    drupal_set_title(t('Edit link'));
  }
  else {
    drupal_set_title(t('Insert link'));
  }

  $form['#tree'] = TRUE;
  $form['#prefix'] = '<div id="editor-ckeditor-link-dialog-form">';
  $form['#suffix'] = '</div>';

  // Everything under the "attributes" key is merged directly into the
  // generated link tag's attributes.
  $form['attributes']['href'] = array(
    '#title' => t('URL'),
    '#type' => 'textfield',
    '#default_value' => isset($input['href']) ? $input['href'] : '',
    '#maxlength' => 2048,
  );

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    // No regular submit-handler. This form only works via JavaScript.
    '#submit' => array(),
    '#ajax' => array(
      'callback' => 'editor_ckeditor_link_dialog_save',
      'event' => 'click',
    ),
    '#attributes' => array(
      'class' => array('button--primary'),
    ),
  );

  return $form;
}

/**
 * Form AJAX callback. Sends the save editor AJAX command and closes the dialog.
 *
 * @see filter_format_editor_link_form()
 * @see filter_format_editor_image_form()
 */
function editor_ckeditor_link_dialog_save($form, &$form_state) {
  $commands = array();

  if (form_get_errors()) {
    unset($form['#prefix'], $form['#suffix']);
    $status_messages = array('#theme' => 'status_messages');
    $output = drupal_render($form);
    $output = '<div>' . drupal_render($status_messages) . $output . '</div>';
    $commands[] = ajax_command_html('#editor-ckeditor-link-dialog-form', $output);
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
 * Form callback: Display a form for inserting/editing a link.
 */
function editor_ckeditor_image_dialog_form($form, &$form_state, $format) {
  editor_format_ensure_additional_properties($format);

  // This form is special, in that the default values do not come from the
  // server side, but from the client side, from a text editor. We must cache
  // this data in form state, because when the form is rebuilt, we will be
  // receiving values from the form, instead of the values from the text
  // editor. If we don't cache it, this data will be lost.
  if (isset($form_state['input']['editor_object'])) {
    // By convention, the data that the text editor sends to any dialog is in
    // the 'editor_object' key. And the image dialog for text editors expects
    // that data to be the attributes for an <img> element.
    $image_element = $form_state['input']['editor_object'];
    $form_state['image_element'] = $image_element;
  }
  else {
    // Retrieve the image element's attributes from form state.
    $image_element = $form_state['image_element'] ? $form_state['image_element'] : array();
  }

  // Set the dialog title.
  if (!empty($image_element['src'])) {
    drupal_set_title(t('Edit image'));
  }
  else {
    drupal_set_title(t('Insert image'));
  }

  $form['#tree'] = TRUE;
  $form['#prefix'] = '<div id="editor-ckeditor-image-dialog-form">';
  $form['#suffix'] = '</div>';

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
  $existing_file = !empty($image_element['data-entity-id']) ? file_load($image_element['data-entity-id']) : NULL;
  $fid = $existing_file ? $existing_file->fid : NULL;

  $form['fid'] = array(
    '#title' => t('Image'),
    '#type' => 'managed_file',
    '#upload_location' => $upload_settings['scheme'] . '://' . $upload_settings['directory'],
    '#default_value' => $fid ? $fid : NULL,
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg'),
      'file_validate_size' => array($max_filesize),
      'file_validate_image_resolution' => array($max_dimensions),
    ),
    '#required' => TRUE,
  );

  $form['attributes']['src'] = array(
    '#title' => t('URL'),
    '#type' => 'textfield',
    '#default_value' => isset($image_element['src']) ? $image_element['src'] : '',
    '#maxlength' => 2048,
    '#required' => TRUE,
  );

  // If the editor has image uploads enabled, show a managed_file form item,
  // otherwise show a (file URL) text form item.
  if ($upload_settings['status']) {
    $form['attributes']['src']['#access'] = FALSE;
    $form['attributes']['src']['#required'] = FALSE;
  }
  else {
    $form['fid']['#access'] = FALSE;
    $form['fid']['#required'] = FALSE;
  }

  // The alt attribute is *required*, but we allow users to opt-in to empty
  // alt attributes for the very rare edge cases where that is valid by
  // specifying two double quotes as the alternative text in the dialog.
  // However, that *is* stored as an empty alt attribute, so if we're editing
  // an existing image (which means the src attribute is set) and its alt
  // attribute is empty, then we show that as two double quotes in the dialog.
  // @see https://www.drupal.org/node/2307647
  $alt = isset($image_element['alt']) ? $image_element['alt'] : '';

  if ($alt === '' && !empty($image_element['src'])) {
    $alt = '""';
  }

  $form['attributes']['alt'] = array(
    '#title' => t('Alternative text'),
    '#attributes' => array(
      'placeholder' => t('Short description for the visually impaired'),
    ),
    '#type' => 'textfield',
    '#required' => TRUE,
    '#description' => t('Alternative text is required.<br />(Only in rare cases should this be left empty. To create empty alternative text, enter <code>""</code> — two double quotes without any content).'),
    '#default_value' => $alt,
    '#parents' => array('attributes', 'alt'),
    '#maxlength' => 2048,
  );

  // When Drupal core's filter_align is being used, the text editor may
  // offer the ability to change the alignment.
  if (isset($image_element['data-align']) && $format->filters['editor_align']->status) {
    $form['align'] = array(
      '#title' => t('Align'),
      '#type' => 'radios',
      '#options' => array(
        'none' => t('None'),
        'left' => t('Left'),
        'center' => t('Center'),
        'right' => t('Right'),
      ),
      '#default_value' => $image_element['data-align'] === '' ? 'none' : $image_element['data-align'],
      '#attributes' => array('class' => array('container-inline')),
      '#parents' => array('attributes', 'data-align'),
    );
  }

  // When Drupal core's filter_caption is being used, the text editor may
  // offer the ability to in-place edit the image's caption: show a toggle.
  if (isset($image_element['hasCaption']) && $format->filters['editor_caption']->status) {
    $form['caption'] = array(
      '#title' => t('Caption'),
      '#type' => 'checkbox',
      '#default_value' => $image_element['hasCaption'] === 'true',
      '#parents' => array('attributes', 'hasCaption'),
    );
  }

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    // No regular submit-handler. This form only works via JavaScript.
    '#submit' => array(),
    '#ajax' => array(
      'callback' => 'editor_ckeditor_image_dialog_save',
      'event' => 'click',
    ),
    '#attributes' => array(
      'class' => array('button--primary'),
    ),
  );

  return $form;
}

/**
 * Form AJAX callback. Sends the save editor AJAX command and closes the dialog.
 *
 * @see filter_format_editor_link_form()
 * @see filter_format_editor_image_form()
 */
function editor_ckeditor_image_dialog_save($form, &$form_state) {
  $commands = array();

  // Convert any uploaded files from the FID values to data-entity-uuid
  // attributes and set data-entity-type to 'file'.
  $fid = isset($form_state['values']['fid']) ? $form_state['values']['fid'] : 0;

  if (!empty($fid)) {
    $file = file_load($fid);

    // Transform absolute image URLs to relative image URLs: prevent problems
    // on multisite set-ups and prevent mixed content errors.
    $scheme = file_uri_scheme($file->uri);

    if ($scheme && file_stream_wrapper_valid_scheme($scheme)) {
      $wrapper = file_stream_wrapper_get_instance_by_scheme($scheme);
      // Transform absolute image URLs to relative image URLs: prevent problems
      // on multisite set-ups and prevent mixed content errors.
      $file_url = base_path() . $wrapper->getDirectoryPath() . '/' . file_uri_target($file->uri);

      $form_state['values']['attributes']['src'] = $file_url;
      $form_state['values']['attributes']['data-entity-id'] = $fid;
      $form_state['values']['attributes']['data-entity-type'] = 'file';
    }
  }

  // When the alt attribute is set to two double quotes, transform it to the
  // empty string: two double quotes signify "empty alt attribute". See above.
  if (trim($form_state['values']['attributes']['alt']) === '""') {
    $form_state['attributes']['alt'] = '';
  }

  if (form_get_errors()) {
    unset($form['#prefix'], $form['#suffix']);
    $status_messages = array('#theme' => 'status_messages');
    $output = drupal_render($form);
    $output = '<div>' . drupal_render($status_messages) . $output . '</div>';
    $commands[] = ajax_command_html('#editor-ckeditor-image-dialog-form', $output);
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
