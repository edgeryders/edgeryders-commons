<?php

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Respond to comment-triggered node updates.
 *
 * This hook is invoked from _comment_alter_submit_node_fields() after the
 * updated node got saved to let modules act upon altering node values from
 * comments.
 *
 * @param $node
 *   The updated node.
 * @param $comment
 *   The comment that was submitted with this change.
 */
function hook_comment_alter_node_postsave($node, $comment) {
  drupal_set_message(t('%user has updated !node by submitting a comment.', array('%user' => $comment->name, '!node' => l($node->title, 'node/' . $node->nid))));
}

/**
 * @} End of "addtogroup hooks".
 */
