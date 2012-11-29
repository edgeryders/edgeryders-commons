<?php

/**
 * @file
 * Admin interface for Queue Mail.
 */

/**
 * The admin settings form for Queue Mail.
 */
function queue_mail_settings_form() {

  $form['queue_status'] = array(
    '#type' => 'item',
    '#title' => t('Queue status'),
    '#markup' => format_plural(_queue_mail_get_queue()->numberOfItems(), '1 mail currently queued for sending.', '@count mails currently queued for sending.'),
    '#description' => t('Sending of queued mails happens on cron. You can <a href="@cron_link">run cron manually</a>.', array('@cron_link' => url('admin/reports/status/run-cron', array('query' => drupal_get_destination())))),
  );

  $form['queue_mail_keys'] = array(
    '#type' => 'textarea',
    '#title' => t('Mail IDs to queue'),
    '#description' => t('Enter each mail ID to queue on a separate line. Use <strong>*</strong> to do a wildcard match.') .'<br/>'. t('Mail IDs are a combination of the first and second arguments sent to <em>drupal_mail</em> when a module sends an email. E.g. <em>user_mail</em>, <em>register_pending_approval_admin</em>') . '<br />' . t('For example, to queue all mails sent by the User module, enter: <em>user_*</em> above, to just queue password recovery emails enter: <em>user_password_reset</em>'),
    '#default_value' => variable_get('queue_mail_keys', ''),
  );

  // Get a list of modules that implement hook_mail.
  $mail_modules = module_implements('mail');
  $all_modules = system_list('module_enabled');
  $rows = array();
  foreach ($mail_modules as $module) {
    $row = array();
    $row[] = check_plain(isset($all_modules[$module]->info['name']) ? $all_modules[$module]->info['name'] : $module);
    $row[] = check_plain($module . '_*');
    $rows[] = $row;
  }
  $headers = array(
    t('Module name'),
    t('Mail ID prefix'),
  );
  $form['queue_mail_keys_help'] = array(
    '#type' => 'item',
    '#title' => t('Modules that send emails'),
    '#markup' => t('The following modules send emails. The contents of the second column can be used in the options above to queue the sending of those emails.') . theme('table', array('header' => $headers, 'rows' => $rows)),
  );

  return system_settings_form($form);
}
