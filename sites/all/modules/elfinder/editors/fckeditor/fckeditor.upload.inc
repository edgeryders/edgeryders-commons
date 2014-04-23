<?php
/**
 * @file
 *  
 * FCKeditor Upload tab support
 */

function elfinder_editor_upload_fckeditor() {
    
  $p = elfinder_get_user_profile();

  $dest = file_build_uri('');

	if (!strpos($p->settings['ckeditor_upload_directory'], '://')) {
		$dest .= $p->settings['ckeditor_upload_directory'];
	} else {
	  $dest = $p->settings['ckeditor_upload_directory'];
	}
	
	$dest = elfinder_parse_path_tokens($dest);
	
	$destabs = drupal_realpath($dest);	
	
	if (!file_prepare_directory($destabs, FILE_CREATE_DIRECTORY)) {
    drupal_set_message(t('Error. Cannot initialize directory %dir', array('%dir' => $destabs)), 'error');
  }

  $tmf = $_FILES;
 
  foreach (array_keys($_FILES['NewFile']) as $key) {
    $tmpf['files'][$key]['NewFile'] = $_FILES['NewFile'][$key];
  }
 
  $_FILES = $tmpf;

  $file = file_save_upload('NewFile', array(), $dest);
  

  header('Content-Type: text/html');

  print '<script type="text/javascript">';
  
  if ($file) {
    print "window.parent.OnUploadCompleted(0, '" . file_create_url($file->uri) . "', '" . $file->filename . "', '') ;";
  }
  else {
    print 'window.parent.OnUploadCompleted(1,"","", "' . t('Error uploading file!') . '") ;';
  }
  
  print '</script>';

  exit();
}