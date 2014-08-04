<?php
/**
 * @file
 * edgeryders_users_overrides.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function edgeryders_users_overrides_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer realname'.
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(
      'content manager' => 'content manager',
      'site admin' => 'site admin',
    ),
    'module' => 'realname',
  );

  // Exported permission: 'execute realname_action_realname_update'.
  $permissions['execute realname_action_realname_update'] = array(
    'name' => 'execute realname_action_realname_update',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'actions_permissions',
  );

  return $permissions;
}
