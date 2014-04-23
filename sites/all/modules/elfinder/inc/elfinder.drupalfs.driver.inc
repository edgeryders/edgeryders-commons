<?php

/**
 * @file
 * 
 * elFinder driver for Drupal filesystem.
 *
 * @author Alexey Sukhotin
 * */
class elFinderVolumeDrupal extends elFinderVolumeLocalFileSystem {

  protected $DrupalFilesACL = NULL;

  /**
   * Create Drupal file object
   *
   * @param  string  $path  file path
   * @return object
   * @author Alexey Sukhotin
   * */
  protected function _drupalfileobject($path) {
    $uri = $this->drupalpathtouri($path);
    return elfinder_get_drupal_file_obj($uri);
  }

  /**
   * Convert path to Drupal file URI
   *
   * @param  string  $path  file path
   * @return string
   * @author Alexey Sukhotin
   * */
  public function drupalpathtouri($path) {

    $relpath = $this->_relpath($path);
    $pvtpath = drupal_realpath('private://');
    $pubpath = drupal_realpath('public://');
    $uri = '';

    $rc = strpos($path, $pvtpath);

    if ($rc == 0 && is_numeric($rc)) {
      $uri = 'private://' . substr($path, strlen($pvtpath));
    }
    else {
      $uri = 'public://' . substr($path, strlen($pubpath));
    }

    return @file_stream_wrapper_uri_normalize($uri);
  }
  
  /**
   * Check if file extension is allowed
   *
   * @param stdClass  $file  file object
   * @return array
   * @author Alexey Sukhotin
   **/
  protected function CheckExtension(stdClass $file) {

    $allowed_extensions = variable_get('elfinder_settings_filesystem_allowed_extensions', '');
    
    if (!empty($allowed_extensions)) {
      
      $errors =  file_validate_extensions($file, $allowed_extensions);
      
      if (!empty($errors)) {
        $this->setError(implode(' ', $errors));
        return FALSE;
      }
      
    }
    return TRUE;
  }

  /**
   * Create dir
   *
   * @param  string  $path  parent dir path
   * @param string  $name  new directory name
   * @return bool
   * @author Alexey Sukhotin
   * */
  protected function _mkdir($path, $name) {
    $path = $path . DIRECTORY_SEPARATOR . $name;

    if (@drupal_mkdir($path)) {
      return $path;
    }
    return FALSE;
  }

  /**
   * Create file
   *
   * @param  string  $path  parent dir path
   * @param string  $name  new file name
   * @return bool
   * @author Alexey Sukhotin   
   * */
  protected function _mkfile($path, $name) {
    $path = $path . DIRECTORY_SEPARATOR . $name;
    $uri = $this->drupalpathtouri($path);
    
    if (!$this->CheckExtension($this->_drupalfileobject($path))) {
      return FALSE;
    }
    
    $file = file_save_data("", $uri);
    
    $this->FileUsageAdd($file);

    if (isset($file->fid)) {
      return $path;
    }

    return FALSE;
  }

  /**
   * Copy file into another file
   *
   * @param  string  $source     source file path
   * @param  string  $targetDir  target directory path
   * @param  string  $name       new file name
   * @return bool
   * @author Alexey Sukhotin   
   * */
  protected function _copy($source, $targetDir, $name) {

    $target = $targetDir . DIRECTORY_SEPARATOR . (!empty($name) ? $name : basename($source));

    if (!is_dir($target) && !$this->CheckExtension($this->_drupalfileobject($target))) {
      return FALSE;
    }
    
    if (!$this->CheckUserQuota()) {
      return FALSE;
    }

    if (file_copy($this->_drupalfileobject($source), $this->drupalpathtouri($target))) {
      return TRUE;
    }

    return FALSE;
  }

  /**
   * Move file into another parent dir
   *
   * @param  string  $source  source file path
   * @param  string  $target  target dir path
   * @param  string  $name    file name
   * @return bool
   * @author Alexey Sukhotin   
   * */
  protected function _move($source, $targetDir, $name) {

    $target = $targetDir . DIRECTORY_SEPARATOR . (!empty($name) ? $name : basename($source));
    
    if (!is_dir($target) && !$this->CheckExtension($this->_drupalfileobject($target))) {
      return FALSE;
    }

    if (is_dir($source)) {
      $srcuri = $this->drupalpathtouri($source);
      $dsturi = $this->drupalpathtouri($target);

      $children = db_select('file_managed', 'f')
              ->condition('uri', $srcuri . '/%', 'LIKE')
              ->fields('f', array('fid', 'uri'))
              ->execute()
              ->fetchAll();

      foreach ($children as $child) {
        $newuri = str_replace("$srcuri/", "$dsturi/", $child->uri);
        db_update('file_managed')->fields(array('uri' => $newuri))->condition('fid', $child->fid)->execute();
      }

      return @rename($source, $target);
    }
    elseif (@file_move($this->_drupalfileobject($source), $this->drupalpathtouri($target))) {
      return TRUE;
    }

    return FALSE;
  }

  /**
   * Remove file
   *
   * @param  string  $path  file path
   * @return bool
   * @author Alexey Sukhotin
   * */
  protected function _unlink($path) {
    
    $file = $this->_drupalfileobject($path);
    
    $this->FileUsageDelete($file);

    if (@file_delete($file) == TRUE) {
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  /**
   * Remove dir
   *
   * @param  string  $path  dir path
   * @return bool
   * @author Alexey Sukhotin
   * */
  protected function _rmdir($path) {
    return @drupal_rmdir($path);
  }

  /**
   * Create new file and write into it from file pointer.
   * Return new file path or false on error.
   *
   * @param  resource  $fp   file pointer
   * @param  string    $dir  target dir path
   * @param  string    $name file name
   * @return bool|string
   * @author Dmitry (dio) Levashov, Alexey Sukhotin
   * */
  protected function _save($fp, $dir, $name, $stat) {
    $tmpname = $name;
		
		$bu_ret = module_invoke_all('elfinder_beforeupload', array('name' => $name, 'dir' => $dir, 'stat' => $stat ));
		
		if (isset($bu_ret)) {
			if (!is_array($bu_ret)) {
				$bu_ret = array($bu_ret);
			}
      
      $tmpname = end($bu_ret);

		}
	
    $path = $dir . DIRECTORY_SEPARATOR . (!empty($tmpname) ? $tmpname : $name);

    if (!$this->CheckUserQuota()) {
      return FALSE;
    }
    
    if (!$this->CheckExtension($this->_drupalfileobject($path))) {
      return FALSE;
    }

    if (!($target = @fopen($path, 'wb'))) {
      return FALSE;
    }

    while (!feof($fp)) {
      fwrite($target, fread($fp, 8192));
    }


    fclose($target);
    @chmod($path, $this->options['fileMode']);
    
    $file = $this->_drupalfileobject($path);

    @file_save($file);
    $this->FileUsageAdd($file);
    
    return $path;
  }

  protected function CheckUserQuota() {
    $space = $this->CalculateUserAllowedSpace();

    if ($space == 0) {
      $this->setError(t('Quota exceeded'));
      return FALSE;
    }

    return TRUE;
  }

  /**
   * Return files list in directory.
   *
   * @param  string  $path  dir path
   * @return array
   * @author Dmitry (dio) Levashov
   * */
  protected function _scandir($path) {
    $files = array();

    foreach (scandir($path) as $name) {
      if ($name != '.' && $name != '..') {
        $files[] = $path . DIRECTORY_SEPARATOR . $name;
      }
    }
    return $files;
  }

  public function owner($target) {
    $path = $this->decode($target);


    $file = $this->_drupalfileobject($path);

    if ($file->fid) {
      $owneraccount = user_load($file->uid);

      /* AS */
      $owner = $owneraccount->name;

      $ownerformat = variable_get('elfinder_settings_filesystem_owner_format', '');

      if ($ownerformat != '') {
        $owner = token_replace($ownerformat, array('user' => $owneraccount));
      }

      return $owner;
    }
    return FALSE;
  }

  public function desc($target, $newdesc = NULL) {
    $path = $this->decode($target);

    $file = $this->_drupalfileobject($path);

    if ($file->fid) {
      $finfo = db_select('elfinder_file_extinfo', 'f')
              ->condition('fid', $file->fid)
              ->fields('f', array('fid', 'description'))
              ->execute()
              ->fetchObject();

      $descobj = new StdClass;
      $descobj->fid = $file->fid;
      $descobj->description = $newdesc;

      if ($newdesc != NULL && user_access('edit file description')) {
        if (($rc = drupal_write_record('elfinder_file_extinfo', $descobj, isset($finfo->fid) ? array('fid') : array())) == 0) {
          return -1;
        }
      }
      else {
        return $finfo->description;
      }
    }
    return $newdesc;
  }

  public function downloadcount($target) {
    $path = $this->decode($target);

    $file = $this->_drupalfileobject($path);

    if ($file->fid && module_exists('elfinder_stats')) {
      $downloads = db_select('elfinder_stats', 's')
              ->fields('s', array('fid'))
              ->condition('s.fid', $file->fid)
              ->condition('s.type', 'download')
              ->countQuery()
              ->execute()
              ->fetchField();
      return $downloads ? $downloads : 0;
    }
    return 0;
  }

  protected function _archive($dir, $files, $name, $arc) {

    if (!$this->CheckUserQuota()) {
      return FALSE;
    }

    $ret = parent::_archive($dir, $files, $name, $arc);

    if ($ret != FALSE) {
      $file = $this->_drupalfileobject($ret);
      @file_save($file);
      $this->FileUsageAdd($file);
    }

    return $ret;
  }

  public function extract($hash) {
    if (!$this->CheckUserQuota()) {
      return FALSE;
    }

    $fstat = parent::extract($hash);

    if ($fstat != FALSE) {
      $path = $this->decode($fstat['hash']);
      $this->AddToDrupalDB($path);
      $file = $this->_drupalfileobject($path);
      $this->FileUsageAdd($file);
    }

    return $fstat;
  }

  protected function AddToDrupalDB($path) {

    if (is_dir($path)) {
      $files = $this->_scandir($path);
      foreach ($files as $file) {
        $this->AddToDrupalDB($file);
      }
    }
    elseif (is_file($path)) {
      @file_save($this->_drupalfileobject($path));
    }
    return TRUE;
  }

  protected function CalculateUserAllowedSpace($checkuser = NULL) {
    global $user;

    $realUser = isset($checkuser) ? $checkuser : $user;

    $currentSpace = $this->CalculateUserUsedSpace($realUser);

    $maxSpace = isset($this->options['userProfile']->settings['user_quota']) ? parse_size($this->options['userProfile']->settings['user_quota']) : NULL;

    $diff = $maxSpace - $currentSpace;

    if (isset($maxSpace) && $maxSpace > 0) {

      if ($diff > 0) {
        return $diff;
      }
      else {
        return 0;
      }
    }

    return -1;
  }

  protected function CalculateUserUsedSpace($checkuser = NULL) {
    global $user;

    $realUser = isset($checkuser) ? $checkuser : $user;

    $q = db_query("SELECT sum(filesize) FROM {file_managed} WHERE uid = :uid", array(':uid' => $realUser->uid));

    $result = $q->fetchField();

    return $result;
  }
  
  protected function FileUsageAdd($file) {
    // Record that the module elfinder is using the file.
    @file_usage_add($file, 'elfinder', 'elfinderFileFetcher', 0); // 0 : means that there is no reference at the moment.
  }
  
  protected function FileUsageDelete($file) {
    // Delete record that the module elfinder is using the file.
    @file_usage_delete($file, 'elfinder', 'elfinderFileFetcher', 0); // 0 : means that there is no reference at the moment.
  }
  
  protected function _checkArchivers() {
    $this->archivers = variable_get('elfinder_settings_misc_archivers', array());

    if (count($this->archivers) == 0) {
      parent::_checkArchivers();
      variable_set('elfinder_settings_misc_archivers', $this->archivers);
    }
  }

}
