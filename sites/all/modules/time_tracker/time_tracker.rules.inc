<?php
/**
 * @file
 * Rules events.
 */

function time_tracker_rules_event_info() {
  $events = array();

  $entity_types = entity_get_info();
  foreach($entity_types as $key => $type) {
    if (!in_array($key, array('time_tracker_activity', 'time_tracker_entry', 'comment'))){
      foreach($type['bundles'] as $bkey => $bundle){
        if(time_tracker_is_tracking_time($key, $bkey)){
          $events['time_tracker_new_' . $key . '-' . $bkey . '_entry'] = array(
            'label' => t('A time entry was entered on @entity bundle @bundle',
                        array('@entity' => $type['label'], '@bundle' => $bundle['label'])),
            'group' => t('Time Tracker'),
            'variables' => array(
              'user' => array(
                'type' => 'user',
                'label' => t('The user who entered the time entry'),
               ),
              $key => array(
                'type' => $key,
                'label' => t('The @label the time entry was entered on.', array('@label' => $bundle['label'])),
               ),
            ),
            'access callback' => 'time_tracker_rules_access',
          );
        }
      }
    }
  }

  return $events;
}

/**
 * Rules access callback.
 */
function time_tracker_rules_access() {
  return user_access('administer time tracker');
}
