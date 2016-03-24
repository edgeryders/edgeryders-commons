<?php
/**
 * @file
 * edgeryders_challenges.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function edgeryders_challenges_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create challenge content'.
  $permissions['create challenge content'] = array(
    'name' => 'create challenge content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create challenge_chain content'.
  $permissions['create challenge_chain content'] = array(
    'name' => 'create challenge_chain content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create challenge_response content'.
  $permissions['create challenge_response content'] = array(
    'name' => 'create challenge_response content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any challenge content'.
  $permissions['delete any challenge content'] = array(
    'name' => 'delete any challenge content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any challenge_chain content'.
  $permissions['delete any challenge_chain content'] = array(
    'name' => 'delete any challenge_chain content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any challenge_response content'.
  $permissions['delete any challenge_response content'] = array(
    'name' => 'delete any challenge_response content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own challenge content'.
  $permissions['delete own challenge content'] = array(
    'name' => 'delete own challenge content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own challenge_chain content'.
  $permissions['delete own challenge_chain content'] = array(
    'name' => 'delete own challenge_chain content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own challenge_response content'.
  $permissions['delete own challenge_response content'] = array(
    'name' => 'delete own challenge_response content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any challenge content'.
  $permissions['edit any challenge content'] = array(
    'name' => 'edit any challenge content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any challenge_chain content'.
  $permissions['edit any challenge_chain content'] = array(
    'name' => 'edit any challenge_chain content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any challenge_response content'.
  $permissions['edit any challenge_response content'] = array(
    'name' => 'edit any challenge_response content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own challenge content'.
  $permissions['edit own challenge content'] = array(
    'name' => 'edit own challenge content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own challenge_chain content'.
  $permissions['edit own challenge_chain content'] = array(
    'name' => 'edit own challenge_chain content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own challenge_response content'.
  $permissions['edit own challenge_response content'] = array(
    'name' => 'edit own challenge_response content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
