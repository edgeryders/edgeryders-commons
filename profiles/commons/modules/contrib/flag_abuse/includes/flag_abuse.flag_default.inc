<?php

function _flag_abuse_abuse_node_flags(&$flags) {
 $flags = array();
  // Exported flag: "Node Abuse".
  $flags['abuse_node'] = array(
    'content_type' => 'node',
    'title' => 'Node Abuse',
    'global' => 0,
    'types' => array(
    ),
    'flag_short' => 'Flag as offensive',
    'flag_long' => 'Flag this content as offensive.',
    'flag_message' => '',
    'unflag_short' => 'Flag as non-offensive',
    'unflag_long' => 'Flag this content as non-offensive.',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure you want to flag this content as offensive?',
    'unflag_confirmation' => 'Are you sure you want to flag this content as non-offensive?',
    'module' => 'flag_abuse',
    'locked' => array(
      'name' => 'name',
      'global' => 'global',
    ),
    'api_version' => 2,
  );
  return $flags;
}

function _flag_abuse_abuse_comment_flags(&$flags) {
 $flags = array();
  // Exported flag: "Comment Abuse".
  $flags['abuse_comment'] = array(
    'content_type' => 'comment',
    'title' => 'Comment Abuse',
    'global' => 0,
    'types' => array(
    ),
    'flag_short' => 'Flag as offensive',
    'flag_long' => 'Flag this content as offensive.',
    'flag_message' => '',
    'unflag_short' => 'Flag as non-offensive',
    'unflag_long' => 'Flag this content as non-offensive.',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_comment' => 1,
    'flag_confirmation' => 'Are you sure you want to flag this content as offensive?',
    'unflag_confirmation' => 'Are you sure you want to flag this content as non-offensive?',
    'module' => 'flag_abuse',
    'locked' => array(
      'name' => 'name',
      'global' => 'global',
    ),
    'api_version' => 2,
  );
return $flags;

}

function _flag_abuse_abuse_user_flags(&$flags) {
  $flags = array();
  // Exported flag: "User Abuse".
  $flags['abuse_user'] = array(
    'content_type' => 'user',
    'title' => 'User Abuse',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Report User',
    'flag_long' => 'Report this user as offensive.',
    'flag_message' => '',
    'unflag_short' => 'Remove Report',
    'unflag_long' => 'Remove your report about this user.',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_profile' => 1,
    'access_uid' => '',
    'flag_confirmation' => 'Are you sure you want to report this user as offensive?',
    'unflag_confirmation' => 'Are you sure you want to remove your report of this user?',
    'module' => 'flag_abuse',
    'locked' => array(
      'name' => 'name',
      'global' => 'global',
    ),
    'api_version' => 2,
  );
  return $flags;
}
