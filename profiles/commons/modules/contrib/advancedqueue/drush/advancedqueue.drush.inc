<?php

/**
 * @file
 * Drush worker for Advanced-queue.
 */

/**
 * Implements hook_drush_command().
 */
function advancedqueue_drush_command() {
  $items = array();
  $items['advancedqueue-process-queue'] = array(
    'description' => 'Run a processing job for a queue.',
    'arguments' => array(
      'queue' => dt('The name of the queue to process.'),
    ),
    'options' => array(
      'timeout' => 'The maximum execution time of the script. Be warned that this is a rough estimate as the time is only checked between two items.',
      'all' => 'Process all queues.',
    ),
    'aliases' => array('advancedqueue'),
  );
  return $items;
}

function drush_advancedqueue_process_queue() {
  // Load information about the registred queues, and sort them by weight.
  $all_queue_info = module_invoke_all('advanced_queue_info');
  drupal_alter('advanced_queue_info', $all_queue_info);
  uasort($all_queue_info, 'drupal_sort_weight');

  $all_option = drush_get_option('all');
  $queues = drush_get_option('queue');
  if (!$all_option && !$queues) {
    return drush_set_error(dt('You have to specify either a set of queues or the --all parameter.'));
  }

  if ($all_option) {
    $queues = $all_queue_info;
  }
  else {
    // Validate queues.
    $queues = array_combine($queues, $queues);
    $invalid_queues = array_diff_key($queues, $all_queue_info);
    if ($invalid_queues) {
      return drush_set_error(dt('The following queues are invalid: !queues. Aborting.', array('!queues' => implode(', ', $invalid_queues))));
    }
    $queues = array_intersect_key($all_queue_info, $queues);
  }

  if (!$queues) {
    return drush_set_error(dt('No queues exist.'));
  }

  // Run the worker for a certain period of time before killing it.
  $timeout = drush_get_option('timeout');
  $end = $timeout ? time() + $timeout : 0;

  drush_log(dt('Starting processing loop.'));

  while (!$end || time() < $end) {
    foreach ($queues as $queue_name => $queue_info) {
      // Add default values.
      $queue_info += array(
        'delete when completed' => TRUE,
      );

      $queue = DrupalQueue::get($queue_name);

      if ($item = $queue->claimItem()) {
        drush_advancedqueue_process_item($queue, $queue_name, $queue_info, $item, $end);
        continue 2;
      }
    }

    // No item processed in that round, let the CPU rest.
    sleep(1);
  }

  drush_log(dt('Timeout: exiting processing loop.'));
}

/**
 * Process a queue item.
 *
 * @param $queue
 *   The queue object.
 * @param $queue_name
 *   The queue name.
 * @param $queue_info
 *   The queue info.
 * @param $item
 *   The item to process.
 * @param $end_time
 *   (Optional) The time the process should end.
 */
function drush_advancedqueue_process_item($queue, $queue_name, $queue_info, $item, $end_time = FALSE) {
  $function = $queue_info['worker callback'];
  $params =  array(
    '@queue' => $queue_name,
    '@id' => $item->item_id,
    '@title' => !empty($item->title) ? $item->title : dt('untitled'),
  );
  drush_log(dt('[@queue:@id] Starting processing item @title.', $params));

  try {
    // Pass the claimed item itself and end date along to the worker
    // callback.
    $output = $function($item, $end_time);
    if (is_array($output)) {
      $item->status = $output['status'];
      $item->result = $output['result'];
    }
    else {
      $item->status = $output ? ADVANCEDQUEUE_STATUS_SUCCESS : ADVANCEDQUEUE_STATUS_FAILURE;
    }
  }
  catch (Exception $e) {
    $item->status = ADVANCEDQUEUE_STATUS_FAILURE;
    $params['!message'] = (string) $e;
    drush_log(dt('[!queue:!id] failed processing: !message', $params));
  }

  $params['@status'] = $item->status;
  drush_log(dt('[@queue:@id] Processing ended with result @status.', $params));

  if ($queue_info['delete when completed']) {
    // Item was processed, so we can "delete" it. This is not removing the
    // item from the database, but rather updates it with the status.
    $queue->deleteItem($item);
  }
}
