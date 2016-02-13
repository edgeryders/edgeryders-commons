<?php

$plugin = array(
  'title' => t('Edge Message Digest for testing'),
  'description' => t('Send Message via Edgeryders custom message digest.'),
  'class' => 'MessageDigestCustom',
  'view_modes' => array(
    'message_notify_edge_digest' => array('label' => t('Notify - Custom digest')),
  ),
);
