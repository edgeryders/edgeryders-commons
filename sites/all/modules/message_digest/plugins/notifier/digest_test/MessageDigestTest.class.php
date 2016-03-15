<?php

/**
 * Digest test email notifier.
 */
class MessageDigestTest extends MessageDigest {
  public function getInterval() {
    return '15 minutes';
  }
}
