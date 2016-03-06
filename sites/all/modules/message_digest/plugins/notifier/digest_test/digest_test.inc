<?php

$plugin = array(
  'title' => t('Test Message Digest'),
  'description' => t('Send Message via digest running every 15 minutes.'),
  'class' => 'MessageDigestTest',
  'view_modes' => array(
    'message_notify_daily_digest' => array('label' => t('Notify - Test digest')),
  ),
);
