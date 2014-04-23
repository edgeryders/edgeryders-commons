<?php

/**
 * @file
 * file manager admin profile settings page
 */
function elfinder_admin_profile($form, &$form_state) {

  global $user, $language;

  $action = $form_state['build_info']['args'][0];
  $profile_name = $form_state['build_info']['args'][1];

  drupal_add_css(drupal_get_path('module', 'elfinder') . '/css/elfinder.admin.css');

  $profiles = elfinder_admin_profile_get();

  $allroles = user_roles();
  $roles = array(0 => t('Select One'));
  $roles = array_merge($roles, $allroles);
  $p = NULL;

  if (!is_array($profiles)) {
    $profiles = array($profiles);
  }

  foreach ($profiles as $prof) {
    if (is_object($prof) && $prof->name == $profile_name && $p == NULL) {
      $p = $prof;
    }
  }

  foreach ($profiles as $prof) {
    if (isset($prof->settings['profile_role']) && isset($p->settings['profile_role'])) {
      $rid = $prof->settings['profile_role'];
      if (isset($roles[$rid]) && $rid != $p->settings['profile_role'] && $rid != 0)
        unset($roles[$rid]);
    }
  }

  $profile = isset($p->settings) ? $p->settings : NULL;

  if ($action == 'profile_add') {
    $form['profile_name'] = array(
        '#type' => 'textfield',
        '#title' => t('Profile Name'),
        '#default_value' => '',
        '#size' => 14,
    );
  }
  else {
    $form['profile_name_label'] = array(
        '#title' => t('Profile Name'),
        '#markup' => $profile_name,
        '#size' => 14,
        '#type' => 'item',
    );

    $form['profile_name'] = array(
        '#default_value' => $profile_name,
        '#type' => 'hidden',
    );
  }

  $form['profile_description'] = array(
      '#type' => 'textarea',
      '#title' => t('Description'),
      '#default_value' => isset($p->description) ? $p->description : '',
  );

  $roles = user_roles();
  
	$rolelist = array();
	
	$rolelist[0] = t('Select One');
	
	foreach (array_keys($roles) as $rid) {
		$rolelist[$rid] = $roles[$rid];
	}

  $form['profile_role'] = array(
      '#type' => 'select',
      '#title' => t('Role'),
      '#default_value' => isset($profile['profile_role']) ? $profile['profile_role'] : '',
      '#options' => $rolelist,
      '#description' => t('Role for which profile settings will be appied'),
  );

  $form['profile_action'] = array(
      '#default_value' => $action,
      '#type' => 'hidden',
  );

  $form['filesystem_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('File system'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
  );

  $form['volumes'] = array(
      '#type' => 'fieldset',
      '#title' => t('Volumes'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
  );

  $form['volumes']['volumes_wrapper'] = array(
      '#weight' => -4,
      '#prefix' => '<div class="clear-block" id="poll-choice-wrapper">',
      '#suffix' => '</div>',
  );

  $form['volumes']['volumes_wrapper']['volume'] = array(
      '#prefix' => '<div id="profile-volumes">',
      '#suffix' => '</div>',
      '#type' => 'markup',
      '#value' => '&nbsp;',
  );


  $dirs = $profile['volume'];

  if (isset($form_state['values']['volume'])) {
    $choices = $form_state['values']['volume'];
    $lasti = 0;

    for ($i = 0; $i < count($choices); $i++) {
      $form['volumes']['volumes_wrapper']['volume'][$i] = elfinder_admin_dir_form($i, $choices[$i], 0);
      $lasti = $i;
    }

    if (isset($form_state['clicked_button']['#name']) && $form_state['clicked_button']['#name'] == 'addfield') {
      $form['volumes']['volumes_wrapper']['volume'][] = elfinder_admin_dir_form(count($choices), '', 0);
    }
  }
  else {

    for ($i = 0; $i < count($dirs); $i++) {
      $form['volumes']['volumes_wrapper']['volume'][$i] = elfinder_admin_dir_form($i, $dirs[$i], 0);
    }

    if (isset($form_state['clicked_button']['#name']) && $form_state['clicked_button']['#name'] == 'addfield') {
      $form['volumes']['volumes_wrapper']['volume'][] = elfinder_admin_dir_form(count($dirs), '', 0);
    }
  }

  $ckeditor_volumes = array('' => t('Select One'));

  $i = 0;

  foreach ($form['volumes']['volumes_wrapper']['volume'] as $volume) {
    if (is_array($volume) && isset($volume['volume_settings'])) {
      $ckeditor_volumes[] = t('Volume @i (@path)', array(
          '@i' => $i,
          '@path' => $volume['volume_settings']['path']['#default_value'],
              ));
      $i++;
    }
  }

  $form['volumes']['volumes_wrapper']['volume_add'] = array(
      '#type' => 'submit',
      '#value' => t('Add volume'),
      '#weight' => 1,
      '#name' => 'addfield',
      '#submit' => array('elfinder_admin_profile_change_volume'),
      '#ajax' => array(
          'wrapper' => 'profile-volumes',
          'callback' => 'elfinder_admin_profile_callback',
          'method' => 'replace',
          'effect' => 'fade',
      ),
  );


  $form['filesystem_settings']['mime_detect'] = array(
      '#type' => 'radios',
      '#title' => t('File type detection'),
      '#default_value' => isset($profile['mimedetect']) ? $profile['mimedetect'] : 'auto',
      '#options' => array(
          'auto' => t('Automatical detection'),
      ),
  );

  if (function_exists('finfo_open')) {
    $form['filesystem_settings']['mime_detect']['#options']['finfo'] = t('php finfo');
  }

  if (function_exists('mime_content_type')) {
    $form['filesystem_settings']['mime_detect']['#options']['php'] = t('php mime_content_type()');
  }

  $form['filesystem_settings']['mime_detect']['#options']['linux'] = t('file -ib (linux)');
  $form['filesystem_settings']['mime_detect']['#options']['bsd'] = t('file -Ib (bsd)');
  $form['filesystem_settings']['mime_detect']['#options']['internal'] = t('By file extension (built-in)');
  $form['filesystem_settings']['mime_detect']['#options']['drupal'] = t('Drupal API');


  $form['filesystem_settings']['file_url_type'] = array(
      '#type' => 'radios',
      '#title' => t('Selected file url type'),
      '#default_value' => $profile['file_url_type'] == 'true' ? 'true' : 'false',
      '#options' => array(
          'true' => t('Absolute'),
          'false' => t('Relative'),
      ),
  );

  $form['filesystem_settings']['file_perm'] = array(
      '#type' => 'textfield',
      '#title' => t('Created file permissions'),
      '#default_value' => isset($profile['file_perm']) ? $profile['file_perm'] : '0666',
      '#size' => 4,
  );

  $form['filesystem_settings']['dir_perm'] = array(
      '#type' => 'textfield',
      '#title' => t('Created directory permissions'),
      '#default_value' => isset($profile['dir_perm']) ? $profile['dir_perm'] : '0777',
      '#size' => 4,
  );


  $form['filesystem_settings']['max_filesize'] = array(
      '#type' => 'textfield',
      '#title' => t('Maximum upload size'),
      '#default_value' => isset($profile['max_filesize']) ? $profile['max_filesize'] : '',
      '#description' => t('Enter a value like "512" (bytes), "80 KB" (kilobytes) or "50 MB" (megabytes) in order to restrict the allowed file size. If left empty the file sizes will be limited only by PHP\'s maximum post and file upload sizes (current limit <strong>%limit</strong>).', array('%limit' => format_size(file_upload_max_size()))),
      '#size' => 10,
      '#weight' => 5,
  );

  $form['filesystem_settings']['user_quota'] = array(
      '#type' => 'textfield',
      '#title' => t('User quota'),
      '#default_value' => isset($profile['user_quota']) ? $profile['user_quota'] : '',
      '#description' => t('Enter a value like "512" (bytes), "80 KB" (kilobytes) or "50 MB" (megabytes) in order to restrict the allowed file size. If left empty the file sizes will be unlimited.'),
      '#size' => 10,
      '#weight' => 5,
  );

  $form['thumbnail_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Thumbnails'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
  );

  $form['thumbnail_settings']['tmbsize'] = array(
      '#type' => 'textfield',
      '#title' => t('Thumbnail size'),
      '#default_value' => isset($profile['tmbsize']) ? $profile['tmbsize'] : '48',
      '#size' => 4,
  );

  $form['thumbnail_settings']['tmbdirname'] = array(
      '#type' => 'textfield',
      '#title' => t('Thumbnail directory name'),
      '#default_value' => isset($profile['tmbdirname']) ? $profile['tmbdirname'] : 'tmb',
      '#size' => 10,
  );

  $form['thumbnail_settings']['imglib'] = array(
      '#type' => 'radios',
      '#title' => t('Image manipulation library'),
      '#default_value' => isset($profile['imglib']) ? $profile['imglib'] : 'auto',
      '#options' => array(
          'auto' => t('Automatical detection'),
          'imagick' => t('Image Magick'),
          'gd' => t('GD'),
      ),
  );

  $form['thumbnail_settings']['tmbcrop'] = array(
      '#type' => 'radios',
      '#title' => t('Image crop'),
      '#default_value' => $profile['tmbcrop'] == 'true' ? 'true' : 'false',
      '#options' => array(
          'true' => t('Yes'),
          'false' => t('No'),
      ),
      '#description' => t('Crop image to fit thumbnail size. Yes - crop, No - scale image to fit thumbnail size.'),
  );

  $form['misc_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Miscellaneous'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
  );

  $form['misc_settings']['rememberlastdir'] = array(
      '#type' => 'radios',
      '#title' => t('Remember last opened directory'),
      '#default_value' => $profile['rememberlastdir'] == 'true' ? 'true' : 'false',
      '#options' => array(
          'true' => t('Yes'),
          'false' => t('No'),
      ),
      '#description' => t('Creates a cookie. Disable if you have issues with caching.'),
  );


  $form['misc_settings']['manager_width'] = array(
      '#type' => 'textfield',
      '#title' => t('File manager width'),
      '#default_value' => isset($profile['manager_width']) ? $profile['manager_width'] : '',
      '#size' => 4,
  );

  $form['misc_settings']['manager_height'] = array(
      '#type' => 'textfield',
      '#title' => t('File manager height'),
      '#default_value' => isset($profile['manager_height']) ? $profile['manager_height'] : '',
      '#size' => 4,
  );

  $form['misc_settings']['ckeditor_upload_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('CKEditor/FCKeditor Upload Settings'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#description' => t('CKEditor and FCKeditor allowing to upload and insert image files directly from Insert Image dialog.'),
  );

  $form['misc_settings']['ckeditor_upload_settings']['ckeditor_upload_directory'] = array(
      '#type' => 'textfield',
      '#title' => t('Path'),
      '#default_value' => isset($profile['ckeditor_upload_directory']) ? $profile['ckeditor_upload_directory'] : '',
      '#size' => 40,
      '#description' => t('Image upload path. Default file uri is used if no uri prefix specified. Examples: public://ckeditor - image will be uploaded into public://ckeditor; images/ckeditor - image will be uploaded to :uriimages/ckeditor', array(':uri' => file_build_uri(''))),
  );

  $form['submit'] = array(
      '#type' => 'submit',
      '#name' => 'save_profile',
      '#value' => t('Save configuration')
  );

  $form['#submit'][] = 'elfinder_admin_submit';

  return $form;
}

function elfinder_admin_profile_callback($form, $form_state) {
  $form_state['rebuild'] = TRUE;
  return $form['volumes']['volumes_wrapper']['volume'];
}

/**
 * Settings form callback
 */
function elfinder_admin_profiles($action = '', $profile_name = '') {
  $obj = NULL;

  if ($action == 'profile_delete') {
    $obj = drupal_get_form('elfinder_admin_profiles_delete_form', $action, $profile_name);
  }
  else {
    $obj = drupal_get_form('elfinder_admin_profile', $action, $profile_name);
  }

  return drupal_render($obj);
}

function elfinder_admin_profiles_delete_form($form_id, &$form_state, $action, $profile_name) {
  $form = array();
  $form['profile_name'] = array(
      '#type' => 'hidden',
      '#default_value' => $profile_name,
  );


  $form['#submit'][] = 'elfinder_admin_profile_delete_submit';
  return confirm_form($form, t('Are you sure you want to delete the profile %profile?', array('%profile' => $profile_name)), 'admin/config/media/elfinder', '', t('Delete'), t('Cancel')
  );
  return $form;
}

function elfinder_admin_profile_delete_submit($form, &$form_state) {
  if ($form_state['values']['confirm'] == 1) {
    drupal_set_message(t('Profile deleted'));
    $pid = elfinder_admin_profile_get_pid($form_state['values']['profile_name']);
    if ($pid > 0) {
      db_query('DELETE FROM {elfinder_profile} WHERE pid = :pid', array(':pid' => $pid));
    }
  }
  drupal_goto('admin/config/media/elfinder');
}

function elfinder_admin_dir_form($delta, $values = array(), $votes = 0) {
  $form = array();

  $pvtfiles = file_stream_wrapper_get_instance_by_uri('private://');
  $pubfiles = file_stream_wrapper_get_instance_by_uri('public://');

  if (is_object($pvtfiles)) {
    $defaulturl = $pvtfiles->getExternalUrl();
  }
  elseif (is_object($pubfiles)) {
    $defaulturl = $pubfiles->getExternalUrl();
  }


  $form['volume_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Volume @n (@p)', array('@n' => ($delta + 1), '@p' => $values['path'])),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
  );

  $form['volume_settings']['path'] = array(
      '#type' => 'textfield',
      '#title' => t('Path'),
      '#default_value' => isset($values['path']) ? $values['path'] : '',
      '#parents' => array('volume', $delta, 'path'),
      '#prefix' => '<div class="elfinder-field-wrapper-volume-path">',
      '#suffix' => '</div>',
      '#size' => 40,
  );

  $form['volume_settings']['label'] = array(
      '#type' => 'textfield',
      '#title' => t('Label'),
      '#size' => 15,
      '#default_value' => isset($values['label']) ? $values['label'] : '',
      '#description' => t('Root directory label in directory tree'),
      '#parents' => array('volume', $delta, 'label'),
  );

  $form['volume_settings']['url'] = array(
      '#type' => 'textfield',
      '#title' => t('URL'),
      '#default_value' => isset($values['url']) ? $values['url'] : '',
      '#parents' => array('volume', $delta, 'url'),
      '#prefix' => '<div class="elfinder-field-wrapper-volume-path">',
      '#suffix' => '</div>',
      '#description' => t('Custom URL prefix (default %def)', array('%def' => $defaulturl)),
      '#size' => 40,
  );

  $form['volume_settings']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#name' => 'rmfield-' . $delta,
      '#submit' => array('elfinder_admin_profile_change_volume'),
      '#ajax' => array(
          'callback' => 'elfinder_admin_profile_callback',
          'wrapper' => 'profile-volumes',
          'method' => 'replace',
          'effect' => 'fade',
      ),
  );

  return $form;
}

function elfinder_admin_profile_change_volume($form, &$form_state) {

  $clickedbutton = $form_state['clicked_button']['#name'];

  if (preg_match("/^rmfield-(\d+)/", $clickedbutton, $m)) {
    $itemid = $m[1];
    unset($form_state['values']['volume'][$itemid]);
    $form_state['values']['volume'] = array_values($form_state['values']['volume']);
    unset($form_state['input']['volume'][$itemid]);
    $form_state['input']['volume'] = array_values($form_state['input']['volume']);
  }
  elseif ($clickedbutton = 'addfield') {
    $form_state['input']['volume'][] = '';
  }

  $form_state['rebuild'] = TRUE;
}

function elfinder_admin_profile_get_pid($name) {
  $pid = db_select('elfinder_profile', 'p')->condition('name', $name)->fields('p', array('pid'))->execute()->fetchField();
  return $pid;
}

/**
 * Save form data
 */
function elfinder_admin_submit($form, &$form_state) {

  $settings = array('profile_role', 'tmbsize', 'tmbdirname', 'mime_detect', 'file_url_type', 'imglib', 'file_perm', 'dir_perm', 'rememberlastdir', 'usesystemjquery', 'tmbcrop', 'max_filesize', 'manager_width', 'manager_height', 'volume', 'user_quota', 'ckeditor_upload_volume', 'ckeditor_upload_directory');

  $profile_settings = array();

  foreach ($settings as $setting) {
    if (isset($form_state['values'][$setting])) {
      
      /* Excluding empty volumes */
	    if ($setting == 'volume') {
		    for ($i = 0; $i < count($form_state['values']['volume']); $i++) {
			    if (empty($form_state['values']['volume'][$i]['path'])) {
				    unset($form_state['values']['volume'][$i]);
			    }
		    }
	    }
      
      $profile_settings[$setting] = $form_state['values'][$setting];
    }
  }

  $profile_name = $form_state['values']['profile_name'];
  $profile_description = $form_state['values']['profile_description'];

  $pid = 0;

  if ($form_state['values']['profile_action'] == 'profile_edit' && $profile_name) {
    $pid = elfinder_admin_profile_get_pid($profile_name);
  }

  $profile = new StdClass;
  $profile->pid = $pid;
  $profile->name = $profile_name;
  $profile->description = $profile_description;
  $profile->settings = serialize($profile_settings);

  if (isset($form_state['values']['save_profile'])) {
    drupal_write_record('elfinder_profile', $profile, $pid > 0 ? array('pid') : array());
    drupal_set_message(t('Profile have been saved.'));
    drupal_goto('admin/config/media/elfinder');
  }
}

/**
 * Validate form data
 */
function elfinder_admin_form_validate($form, &$form_state) {
  $tmbsize = $form_state['values']['tmbsize'];
  $mwidth = $form_state['values']['manager_width'];
  $mheight = $form_state['values']['manager_height'];

  if ($form_state['values']['filesystem_root'] == 'custom') {
    $customroot = $form_state['values']['filesystem_root_custom'];

    if ($customroot == '') {
      form_set_error('filesystem_root_custom', t('Filesystem root cannot be empty'));
    }

    $customroot = elfinder_parse_path_tokens($customroot);

    // checking directory accessibility by creating test file
    if (!elfinder_prepare_directory($customroot)) {
      form_set_error('filesystem_root_custom', t('Filesystem root is not writable'));
    }
  }

  if (!preg_match('/^\d{3,4}$/', $form_state['values']['file_perm'])) {
    form_set_error('file_perm', t('Created file permissions should be a numeric'));
  }

  if (!preg_match('/^\d{3,4}?$/', $form_state['values']['dir_perm'])) {
    form_set_error('dir_perm', t('Created directory permissions should be a numeric'));
  }

  if (!empty($form_state['values']['max_filesize']) && !is_numeric(parse_size($form_state['values']['max_filesize']))) {
    form_set_error('max_filesize', t('The file size option must contain a valid value. You may either leave the text field empty or enter a string like "512" (bytes), "80 KB" (kilobytes) or "50 MB" (megabytes).'));
  }

  if (!empty($form_state['values']['user_quota']) && !is_numeric(parse_size($form_state['values']['user_quota']))) {
    form_set_error('user_quota', t('The file size option must contain a valid value. You may either leave the text field empty or enter a string like "512" (bytes), "80 KB" (kilobytes) or "50 MB" (megabytes).'));
  }

  if ($mwidth && !is_numeric($mwidth)) {
    form_set_error('manager_width', t('Manager width size should be a number'));
  }

  if ($mheight && !is_numeric($mheight)) {
    form_set_error('manager_height', t('Manager height size should be a number'));
  }

  if ($tmbsize && !is_numeric($tmbsize)) {
    form_set_error('tmbsize', t('Thumbnail size should be a number'));
  }
}
