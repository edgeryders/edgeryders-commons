<?php

/**
 * Daily email notifier.
 */
class MessageDigestDay extends MessageDigest {
  public function getInterval() {
    return '5 minutes';
  }
}
