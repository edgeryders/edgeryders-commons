<?php

/**
 * Log OAuth requests
 * 
 * @version $Id: LingotekOAuthRequestLogger.php 98 2010-03-08 12:48:59Z brunobg@corollarium.com $
 * @author Marc Worrell <marcw@pobox.com>
 * @date  Dec 7, 2007 12:22:43 PM
 * 
 * 
 * The MIT License
 * 
 * Copyright (c) 2007-2008 Mediamatic Lab
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

class LingotekOAuthRequestLogger 
{
	static private $logging			= 0;
	static private $enable_logging	= null;
	static private $store_log		= null;
	static private $note 			= '';
	static private $user_id			= null;
	static private $request_object	= null;
	static private $sent			= null;
	static private $received		= null;
	static private $log				= array();
	
	/**
	 * Start any logging, checks the system configuration if logging is needed.
	 * 
	 * @param LingotekOAuthRequest  $request_object
	 */
	static function start ( $request_object = null )
	{
		if (defined('OAUTH_LOG_REQUEST'))
		{
			if (is_null(LingotekOAuthRequestLogger::$enable_logging))
			{
				LingotekOAuthRequestLogger::$enable_logging = true;
			}
			if (is_null(LingotekOAuthRequestLogger::$store_log))
			{
				LingotekOAuthRequestLogger::$store_log = true;
			}
		}

		if (LingotekOAuthRequestLogger::$enable_logging && !LingotekOAuthRequestLogger::$logging)
		{
			LingotekOAuthRequestLogger::$logging        = true;
			LingotekOAuthRequestLogger::$request_object = $request_object;
			ob_start();

			// Make sure we flush our log entry when we stop the request (eg on an exception)
			register_shutdown_function(array('LingotekOAuthRequestLogger','flush'));		
		}
	}
	

	/**
	 * Force logging, needed for performing test connects independent from the debugging setting.
	 * 
	 * @param boolean  store_log		(optional) true to store the log in the db
	 */
	static function enableLogging ( $store_log = null )
	{
		LingotekOAuthRequestLogger::$enable_logging = true;
		if (!is_null($store_log))
		{
			LingotekOAuthRequestLogger::$store_log = $store_log;
		}
	}	


	/**
	 * Logs the request to the database, sends any cached output.
	 * Also called on shutdown, to make sure we always log the request being handled.
	 */
	static function flush ()
	{
		if (LingotekOAuthRequestLogger::$logging)
		{
			LingotekOAuthRequestLogger::$logging = false;

			if (is_null(LingotekOAuthRequestLogger::$sent))
			{
				// What has been sent to the user-agent?
				$data  = ob_get_contents();
				if (strlen($data) > 0)
				{
					ob_end_flush();
				}
				elseif (ob_get_level())
				{
					ob_end_clean();
				}
				$hs    = headers_list();
				$sent  = implode("\n", $hs) . "\n\n" . $data;
			}
			else
			{
				// The request we sent
				$sent  = LingotekOAuthRequestLogger::$sent;
			}
			
			if (is_null(LingotekOAuthRequestLogger::$received))
			{
				// Build the request we received
				$hs0   = self::getAllHeaders();
				$hs    = array();
				foreach ($hs0 as $h => $v)
				{
					$hs[] = "$h: $v";
				}

				$data  = '';
				$fh    = @fopen('php://input', 'r');
				if ($fh)
				{
					while (!feof($fh))
					{
						$s = fread($fh, 1024);
						if (is_string($s))
						{
							$data .= $s;
						}
					}
					fclose($fh);
				}
				$received = implode("\n", $hs) . "\n\n" . $data;
			}
			else
			{
				// The answer we received
				$received  = LingotekOAuthRequestLogger::$received;
			}

			// The request base string
			if (LingotekOAuthRequestLogger::$request_object)
			{
				$base_string = LingotekOAuthRequestLogger::$request_object->signatureBaseString();
			}
			else
			{
				$base_string = '';
			}

			// Figure out to what keys we want to log this request
			$keys = array();
			if (LingotekOAuthRequestLogger::$request_object)
			{
				$consumer_key = LingotekOAuthRequestLogger::$request_object->getParam('oauth_consumer_key', true);
				$token        = LingotekOAuthRequestLogger::$request_object->getParam('oauth_token',        true);

				switch (get_class(LingotekOAuthRequestLogger::$request_object))
				{
				// tokens are access/request tokens by a consumer
				case 'LingotekOAuthServer':
				case 'LingotekOAuthRequestVerifier':
					$keys['ocr_consumer_key'] = $consumer_key;
					$keys['oct_token']        = $token;
					break;

				// tokens are access/request tokens to a server
				case 'LingotekOAuthRequester':
				case 'LingotekOAuthRequestSigner':
					$keys['osr_consumer_key'] = $consumer_key;
					$keys['ost_token']        = $token;
					break;
				}
			}
			
			// Log the request
			if (LingotekOAuthRequestLogger::$store_log)
			{
				$store = OAuthStore::instance();
				$store->addLog($keys, $received, $sent, $base_string, LingotekOAuthRequestLogger::$note, LingotekOAuthRequestLogger::$user_id);
			}
			
			LingotekOAuthRequestLogger::$log[] = array(
					'keys'    		=> $keys,
					'received'		=> $received,
					'sent'			=> $sent,
					'base_string'	=> $base_string,
					'note'			=> LingotekOAuthRequestLogger::$note
					);
		}
	}


	/**
	 * Add a note, used by the OAuthException2 to log all exceptions.
	 * 
	 * @param string note
	 */
	static function addNote ( $note )
	{
		LingotekOAuthRequestLogger::$note .= $note . "\n\n";
	}

	/**
	 * Set the OAuth request object being used
	 * 
	 * @param LingotekOAuthRequest request_object
	 */
	static function setRequestObject ( $request_object )
	{
		LingotekOAuthRequestLogger::$request_object = $request_object;
	}


	/**
	 * Set the relevant user (defaults to the current user)
	 * 
	 * @param int user_id
	 */
	static function setUser ( $user_id )
	{
		LingotekOAuthRequestLogger::$user_id = $user_id;
	}
	
	
	/**
	 * Set the request we sent
	 * 
	 * @param string request
	 */
	static function setSent ( $request )
	{
		LingotekOAuthRequestLogger::$sent = $request;
	}

	/**
	 * Set the reply we received
	 * 
	 * @param string request
	 */
	static function setReceived ( $reply )
	{
		LingotekOAuthRequestLogger::$received = $reply;
	}
	
	
	/**
	 * Get the the log till now
	 * 
	 * @return array
	 */
	static function getLog ()
	{
		return LingotekOAuthRequestLogger::$log;
	}


	/**
	 * helper to try to sort out headers for people who aren't running apache,
	 * or people who are running PHP as FastCGI.
	 *
	 * @return array of request headers as associative array.
	 */
	public static function getAllHeaders() {
		$retarr = array();
		$headers = array();
		
		if (function_exists('apache_request_headers')) {
			$headers = apache_request_headers();
			ksort($headers);
			return $headers;
		} else {
			$headers = array_merge($_ENV, $_SERVER);
			
			foreach ($headers as $key => $val) {
				//we need this header
				if (strpos(strtolower($key), 'content-type') !== FALSE)
					continue;
				if (strtoupper(substr($key, 0, 5)) != "HTTP_")
					unset($headers[$key]);
			}
		}
		
		//Normalize this array to Cased-Like-This structure.
		foreach ($headers AS $key => $value) {
			$key = preg_replace('/^HTTP_/i', '', $key);
			$key = str_replace(
					" ",
					"-",
					ucwords(strtolower(str_replace(array("-", "_"), " ", $key)))
				);
			$retarr[$key] = $value;
		}
		ksort($retarr);
		
		return $retarr;
	}
}

/* vi:set ts=4 sts=4 sw=4 binary noeol: */

?>