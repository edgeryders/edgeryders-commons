<?php
/**
 * @file
 * commons_tasks.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function commons_tasks_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:create task content'
  $permissions['node:group:create task content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:delete any task content'
  $permissions['node:group:delete any task content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:delete own task content'
  $permissions['node:group:delete own task content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update any task content'
  $permissions['node:group:update any task content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update own task content'
  $permissions['node:group:update own task content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
