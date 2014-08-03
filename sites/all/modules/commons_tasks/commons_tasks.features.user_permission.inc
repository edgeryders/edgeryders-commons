<?php
/**
 * @file
 * commons_tasks.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function commons_tasks_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create task content'.
  $permissions['create task content'] = array(
    'name' => 'create task content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any task content'.
  $permissions['delete any task content'] = array(
    'name' => 'delete any task content',
    'roles' => array(
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own task content'.
  $permissions['delete own task content'] = array(
    'name' => 'delete own task content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any task content'.
  $permissions['edit any task content'] = array(
    'name' => 'edit any task content',
    'roles' => array(
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own task content'.
  $permissions['edit own task content'] = array(
    'name' => 'edit own task content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
