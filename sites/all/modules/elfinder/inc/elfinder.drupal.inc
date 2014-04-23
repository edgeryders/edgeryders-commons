<?php
/**
 * @file
 * 
 * elFinder conenctor class 
 */
class elFinderDrupal extends elFinder {

	public function __construct($opts) {

		$this->time  = $this->utime();
		$this->debug = (isset($opts['debug']) && $opts['debug'] ? true : false);
		
		setlocale(LC_ALL, !empty($opts['locale']) ? $opts['locale'] : 'en_US.UTF-8');

		// bind events listeners
		if (!empty($opts['bind']) && is_array($opts['bind'])) {
			foreach ($opts['bind'] as $cmd => $handler) {
				$this->bind($cmd, $handler);
			}
		}

		if (!isset($opts['roots']) || !is_array($opts['roots'])) {
			$opts['roots'] = array();
		}

		// check for net volumes stored in session
    if (method_exists($this, 'getNetVolumes')) {
      foreach ($this->getNetVolumes() as $root) {
        $opts['roots'][] = $root;
      }
    }

		// "mount" volumes
		foreach ($opts['roots'] as $i => $o) {
			$class = 'elFinderVolume'.(isset($o['driver']) ? $o['driver'] : '');

			if (class_exists($class)) {
				$volume = new $class();

				if ($volume->mount($o)) {
					// unique volume id (ends on "_") - used as prefix to files hash
					$id = $volume->id();
					
					$this->volumes[$id] = $volume;
					if (!$this->default && $volume->isReadable()) {
						$this->default = $this->volumes[$id]; 
					}
				} else {
					$this->mountErrors[] = 'Driver "'.$class.'" : '.implode(' ', $volume->error());
				}
			} else {
				$this->mountErrors[] = 'Driver "'.$class.'" does not exists';
			}
		}

		// if at least one redable volume - ii desu >_<
		$this->loaded = !empty($this->default);
		
    /* Adding new command */
    $this->commands['desc'] = array('target' => TRUE, 'content' => FALSE);
    $this->commands['owner'] = array('target' => TRUE, 'content' => FALSE);
    $this->commands['downloadcount'] = array('target' => TRUE);
	}

  /* Overriding search query argument name 'q' since it's already used in Drupal */

  public function commandArgsList($cmd) {
    $this->commands['search']['elfinder_search_q'] = TRUE;
    return $this->commandExists($cmd) ? $this->commands[$cmd] : array();
  }

  protected function search($args) {
    $q = trim($args['elfinder_search_q']);
    $mimes = !empty($args['mimes']) && is_array($args['mimes']) ? $args['mimes'] : array();
    $result = array();

    foreach ($this->volumes as $volume) {
      $result = array_merge($result, $volume->search($q, $mimes));
    }

    return array('files' => $result);
  }

  protected function desc($args) {
    $target = $args['target'];
    $desc = $args['content'];
    $error = array(self::ERROR_UNKNOWN, '#' . $target);

    if (($volume = $this->volume($target)) == FALSE
            || ($file = $volume->file($target)) == FALSE) {
      return array('error' => $this->error($error, self::ERROR_FILE_NOT_FOUND));
    }

    $error[1] = $file['name'];
    
 		if ($volume->driverId() == 'f') {
			return array('desc' => '');
		}

    if ($volume->commandDisabled('desc')) {
      return array('error' => $this->error($error, self::ERROR_ACCESS_DENIED));
    }

    if (($desc = $volume->desc($target, $desc)) == -1) {
      return array('error' => $this->error($error, $volume->error()));
    }

    return array('desc' => $desc);
  }

  protected function owner($args) {
    $target = $args['target'];

    $error = array(self::ERROR_UNKNOWN, '#' . $target);

    if (($volume = $this->volume($target)) == FALSE
            || ($file = $volume->file($target)) == FALSE) {
      return array('error' => $this->error($error, self::ERROR_FILE_NOT_FOUND));
    }

    $error[1] = $file['name'];
    
 		if ($volume->driverId() == 'f') {
			return array('owner' => '');
		}

    if ($volume->commandDisabled('owner')) {
      return array('error' => $this->error($error, self::ERROR_ACCESS_DENIED));
    }

    if (($owner = $volume->owner($target)) == FALSE) {
      return array('error' => $this->error($error, $volume->error()));
    }

    return array('owner' => $owner);
  }

  protected function downloadcount($args) {
    $target = $args['target'];

    $error = array(self::ERROR_UNKNOWN, '#' . $target);

    if (($volume = $this->volume($target)) == FALSE
            || ($file = $volume->file($target)) == FALSE) {
      return array('error' => $this->error($error, self::ERROR_FILE_NOT_FOUND));
    }

    $error[1] = $file['name'];
    
 		if ($volume->driverId() == 'f') {
			return array('downloadcount' => '');
		}

    if ($volume->commandDisabled('downloadcount')) {
      return array('error' => $this->error($error, self::ERROR_ACCESS_DENIED));
    }

    if (($downloadcount = $volume->downloadcount($target)) == FALSE) {
      return array('error' => $this->error($error, $volume->error()));
    }

    return array('downloadcount' => $downloadcount);
  }

  /**
   * Required to output file in browser when volume URL is not set 
   * Return array contains opened file pointer, root itself and required headers
   *
   * @param  array  command arguments
   * @return array
   * @author Dmitry (dio) Levashov
   * */
  protected function file($args) {
    $target = $args['target'];
    $download = !empty($args['download']);
    $h403 = 'HTTP/1.x 403 Access Denied';
    $h404 = 'HTTP/1.x 404 Not Found';

    if (($volume = $this->volume($target)) == FALSE) {
      return array('error' => self::$errors[self::ERROR_FILE_NOT_FOUND], 'header' => $h404, 'raw' => TRUE);
    }

    if (($file = $volume->file($target)) == FALSE) {
      return array('error' => self::$errors[self::ERROR_FILE_NOT_FOUND], 'header' => $h404, 'raw' => TRUE);
    }

    if (!$file['read']) {
      return array('error' => self::$errors[self::ERROR_ACCESS_DENIED], 'header' => $h403, 'raw' => TRUE);
    }

    if ($volume->driverId() != 'f' && (($fp = $volume->open($target)) == FALSE)) {
      return array('error' => self::$errors[self::ERROR_FILE_NOT_FOUND], 'header' => $h404, 'raw' => TRUE);
    }

    $mime = ($download) ? 'application/octet-stream' : $file['mime'];

    $result = array(
        'volume' => $volume,
        'pointer' => $fp,
        'info' => $file,
        'header' => array(
            "Content-Type: " . $mime,
            "Content-Disposition: " . $this->GetContentDisposition($file['name'], $mime, $download),
            "Content-Location: " . $file['name'],
            'Content-Transfer-Encoding: binary',
            "Content-Length: " . $file['size'],
            "Connection: close"
        )
    );
    
    $real_path = $this->realpath($target);
    module_invoke_all('file_download', $volume->drupalpathtouri($real_path));
    
    return $result;
  }

  /**
   * Generating Content-Disposition HTTP header
   *
   * @param  string  $file     Filename
   * @param  string  $filemime MIME Type
   * @param  bool    $download Disposition type (true = download file, false = open file in browser)
   * @return string
   * @author Dmitry (dio) Levashov, Alexey Sukhotin
   * */
  public function GetContentDisposition($file, $filemime, $download = FALSE) {

    $disp = '';
    $filename = $file;
    $ua = $_SERVER["HTTP_USER_AGENT"];
    $mime = $filemime;

    if ($download) {
      $disp = 'attachment';
      $mime = 'application/octet-stream';
    }
    else {
      $disp = preg_match('/^(image|text)/i', $mime)
              || $mime == 'application/x-shockwave-flash' ? 'inline' : 'attachment';
    }

    $disp .= '; ';

    if (preg_match("/MSIE ([0-9]{1,}[\.0-9]{0,})/", $ua)) {
      $filename = rawurlencode($filename);
      $filename = str_replace("+", "%20", $filename);
      //$filename = str_replace(" ", "%20", $filename);
      $disp .= "filename=" . $filename;
    }
    elseif (preg_match("/Firefox\/(\d+)/", $ua, $m)) {
      if ($m[1] >= 8) {
        $disp .= "filename*=?UTF-8''" . rawurlencode($filename);
      }
      else {
        $disp .= "filename*=\"?UTF-8''" . rawurlencode($filename) . "\";";
      }
    }
    else {
      $disp .= "filename=" . $filename;
    }

    return $disp;
  }

}