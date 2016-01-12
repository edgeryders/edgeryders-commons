<?php
/**
 * @file
 */

/**
 * Implements hook_esi_panels_context_arguments().
 *
 * Implementation provided on behalf of page_manager, which defines these task
 * plugins.
 */
function page_manager_esi_panels_context_arguments($task, $subtask = '', $args = array()) {
  switch ($task) {
    // The blog, poll, and contact_site tasks don't provide default context.
    case 'blog':
    case 'poll':
    case 'contact_site':
      return array();

    // The blog_user, and contact_user tasks provide a user-object.
    case 'blog_user':
    case 'contact_user':
      $uid = array_shift($args);
      $account = user_load($uid);
      return array($account);

    // The comment_reply task provide a node object and a comment CID.
    case 'comment_reply':
      // Path is comment/reply/%node
      $nid = array_shift($args);
      $pid = array_shift($args);
      $node = node_load($nid);
      return array($node, $pid);

      // The node_edit and node_view tasks provide a node object.
    case 'node_edit':
    case 'node_view':
      $nid = array_shift($args);
      $node = node_load($nid);
      return array($node);

    case 'search':
      // @TODO.
      // return array($keys);

    case 'term_view':
      // @TODO.
      //  return array($terms, $depth);

    case 'user_view':
      $uid = array_shift($args);
      $account = user_load($uid);
      return array($account);
  }
}
