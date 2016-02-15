<?php


/**
 * This function creates the settings page. It is a callback function for drupal_get_form()
 */
function force_password_change_settings($form, &$form_state)
{
	$form['#attached']['css'] = array
	(
		drupal_get_path('module', 'force_password_change') . '/css/force_password_change_settings.css',
	);
	$form['first_time_login_password_change'] = array
	(
		'#type' => 'checkbox',
		'#title' => t('Force password change on first-time login'),
		'#default_value' => variable_get('force_password_change_first_login_change', 0),
	);
	$form['force_password_change_login_or_init'] = array
	(
		'#type' => 'radios',
		'#title' => t('Check for pending password change'),
		'#options' => array(0 => t('on every page load'), 1 => t('on login only')),
		'#default_value' => variable_get('force_password_change_login_or_init', 0),
		'#description' => t('Select when to check if a user has a pending password change. Checking on every page load adds a little overhead to every page load, but is the most secure method. Checking on login will only check if a change is pending when the user first logs in, but on sites where users may stay logged in for lengthy periods of time, it may be a long time before they are forced to change their password.'),
	);
	// Get stats for each of the roles on the site
	$all_roles = user_roles(TRUE);
	foreach($all_roles as $rid => $role)
	{
		if($rid > 2)
		{
			$user_count = db_query('SELECT COUNT(uid) FROM {users_roles} WHERE rid = :rid', array(':rid' => $rid))->fetchCol();
			$pending_count = db_query
			(
				'SELECT COUNT(u.uid) ' .
				'FROM {users} AS u ' .
				'JOIN {users_roles} AS ur ' .
				'ON ur.uid = u.uid ' .
				'WHERE u.force_password_change = 1 AND u.uid > 0 AND ur.rid = :rid',
				array(':rid' => $rid)
			)->fetchCol();
		}
		elseif($rid == 2)
		{
			$user_count = db_query('SELECT COUNT(uid) FROM {users} WHERE uid > 0')->fetchCol();
			$pending_count = db_query('SELECT COUNT(uid) FROM {users} WHERE force_password_change = 1 AND uid > 0')->fetchCol();
		}
		$roles[$rid] = $role;
		$stats[$rid] = array
		(
			'user_count' => $user_count[0],
			'pending_count' => $pending_count[0],
		);
	}
	$form['roles'] = array
	(
		'#type' => 'checkboxes',
		'#options' => $roles,
		'#title' => t('Force users in the following roles to change their password'),
		'#description' => t('Users will be forced to change their password either on their next page load, or on their next login, depending on the setting in "Check for pending password change". If pending password changes are checked on every page load, logged in users will be forced to immediately change their password, and after changing it will be redirected back to the page they were attempting to access.') . '<br />' . t('Note: When you return to this page, no roles will be selected. This is because this setting is a trigger, not a persistant state.'),
	);
	$expiry_data = db_query('SELECT rid, expiry, weight from {force_password_change_expiry} ORDER BY weight ASC, rid ASC');
	$expiry = array();
	foreach($expiry_data  as $data)
	{
		$expiry[$data->rid] = array
		(
			'expiry' => $data->expiry,
			'weight' => $data->weight,
		);
	}
	$form['expiry_data'] = array
	(
		'#type' => 'value',
		'#value' => $expiry,
	);
	$form['expiry'] = array
	(
		'#type' => 'fieldset',
		'#title' => t('Password Expiry'),
		'#collapsible' => TRUE,
	);
	$form['expiry']['expire_password'] = array
	(
		'#type' => 'checkbox',
		'#title' => t('Enable password expiration'),
		'#default_value' => variable_get('force_password_change_expire_password', FALSE),
		'#description' => t('When this box is checked, passwords will be set to expire according to the rules set out below. If this box is un-checked, password expiry will be disabled, and the password expiry options below will be ignored.'),
	);
	$form['expiry']['header'] = array
	(
		'#markup' => '<p>' . t('Select the amount of time after which you would like users in a role to be automatically forced to change their password. Any users who do not change their password in this amount of time will be forced to change their password on their next login or page load (depending on the setting in "Check for pending password change"). If you do not wish passwords to expire for a certain role, leave/set the value for that role to zero.') . '</p>',
	);
	$form['expiry']['table'] = array
	(
		'#tree' => TRUE,
		'#theme' => 'force_password_change_expiry',
	);
	$time_period = array
	(
		'hours',
		'days',
		'weeks',
		'years',
	);
	$heaviest_weight = 0;
	if(count($expiry))
	{
		foreach($expiry as $rid => $data)
		{
			$form['expiry']['table'][$rid]['role'] = array
			(
				'#markup' => $roles[$rid],
			);
			if($data['expiry'] != '' && $data['expiry'])
			{
				$expires = $data['expiry'];
				$year = 60 * 60 * 24 * 365;
				if($expires % $year === 0)
				{
					$time_period_default = 3;
					$time_quantity_default = $expires / $year;
				}
				else
				{
					$week = 60 * 60 * 24 * 7;
					if($expires % $week === 0)
					{
						$time_period_default = 2;
						$time_quantity_default = $expires / $week;
					}
					else
					{
						$day = 60 * 60 * 24;
						if($expires % $day === 0)
						{
							$time_period_default = 1;
							$time_quantity_default = $expires / $day;
						}
						else
						{
							$hour = 60 * 60;
							$time_period_default = 0;
							if($expires % $hour === 0)
							{
								$time_quantity_default = $expires / $hour;
							}
							else
							{
								$time_quantity_default = 0;
							}
						}
					}
				}
			}
			else
			{
				$time_period_default = 0;
				$time_quantity_default = 0;
			}
			$form['expiry']['table'][$rid]['time_quantity'] = array
			(
				'#type' => 'textfield',
				'#default_value' => $time_quantity_default,
			);
			$form['expiry']['table'][$rid]['time_period'] = array
			(
				'#type' => 'select',
				'#options' => $time_period,
				'#default_value' => $time_period_default,
			);
			$form['expiry']['table'][$rid]['weight'] = array
			(
				'#type' => 'weight',
				'#delta' => count($roles),
				'#default_value' => ($data['weight'] != '') ? $data['weight'] : 0,
			);
			$heaviest_weight = ($data['weight'] != '') ? $data['weight'] : 0;
		}
	}
	foreach($roles as $rid => $r)
	{
		if(!isset($form['expiry']['table'][$rid]))
		{
			$heaviest_weight++;
			$form['expiry']['table'][$rid]['role'] = array
			(
				'#markup' => $r,
			);
			$form['expiry']['table'][$rid]['time_quantity'] = array
			(
				'#type' => 'textfield',
				'#default_value' => 0,
			);
			$form['expiry']['table'][$rid]['time_period'] = array
			(
				'#type' => 'select',
				'#options' => $time_period,
			);
			$form['expiry']['table'][$rid]['weight'] = array
			(
				'#type' => 'textfield',
				'#default_value' => $heaviest_weight,
			);
		}
	}
	$form['expiry']['footer'] = array
	(
		'#markup' => '<p>' . t('Drag and drop the rows to set the priority for password expiry. The roles with the highest priority should be placed at the top of the list. If a user is a member of more than one role, then the time after which their password expires will be determined by whichever of their roles has the highest priority (highest in the list). Expiry rules for any roles of lower priority (lower in the list) will be ignored. As such, any roles lower in priority (below) the authenticated user role will effectively be ignored, since all users are members of the authenticated users role.') . '</p>',
	);
	$form['stats'] = array
	(
		'#type' => 'value',
		'#value' => $stats,
	);
	$form['change_password_url'] = array
	(
		'#type' => 'textfield',
		'#title' => t('Path to password change URL'),
		'#description' => t('Only change this URL you have implemented a module that changes the user password URL from user/[UID]/edit to something else. Use !uid in place of the user id') . '<br />' . t('WARNING: if you set this URL to an invalid URL, you could break your site, so backup your files first, and double check the path before setting it.'),
		'#default_value' => variable_get('force_password_change_change_password_url', 'user/!uid/edit'),
	);

	$form['submit'] = array
	(
		'#type' => 'submit',
		'#value' => t('Submit'),
	);
	return $form;
}

/**
 * Submit function for the settings form
 */
function force_password_change_settings_submit($form, &$form_state)
{
	$selected_roles = array();
	// First set some variable defaults
	variable_set('force_password_change_change_password_url', $form_state['values']['change_password_url']);
	variable_set('force_password_change_first_login_change', $form_state['values']['first_time_login_password_change']);
	variable_set('force_password_change_login_or_init', $form_state['values']['force_password_change_login_or_init']);
	$au = FALSE;
	foreach($form_state['values']['roles'] as $rid)
	{
		// Selected roles other than authenticated user
		if($rid > 2)
		{
			// Get the RID to be used for logging later
			$selected_roles[] = $rid;
			// Only execute the following code if the authenticated users role was not selected
			if(!$au)
			{
				// Get a list of UIDs for the users in that role
				$db_uids = db_query
				(
					'SELECT uid ' .
					'FROM {users_roles} ' .
					'WHERE rid = :rid',
					array(':rid' => $rid)
				);
				$uids = array();
				foreach($db_uids as $uid)
				{
					$uids[] = $uid->uid;
				}
				// If the role has any users, force them to change their password
				if(isset($uids[0]))
				{
					force_password_change_force_users($uids);
				}
			}
		}
		// The authenticated user role. All users on the site will have a password change forced
		elseif($rid == 2)
		{
			// Update all user's {user} table
			force_password_change_force_users();
			$selected_roles[] = $rid;
			// Since all users on the site have had their password change forced,
			// no other queries need to be run on the users table. However, we do want
			// to log the rid for each role. In order to set up this functionality,
			// a flag is set indicating that the authenticated users role was selected.
			$au = TRUE;
		}
	}
	// If any roles have had a forced password change, enter the following conditional
	if(isset($selected_roles[0]))
	{
		// Log the time of the force for the role
		$query = db_update('force_password_change_roles')
			->fields(array('last_force' => REQUEST_TIME))
			->condition('rid', $selected_roles, 'IN')
			->execute();
		// Build an list of the names of the roles that had their password change forced
		$roles = user_roles(TRUE);
		$list = '<ul>';
		foreach($selected_roles as $sr)
		{
			$list .= '<li>' . $roles[$sr] . '</li>';
		}
		$list .= '</ul>';
		// Set a message informing the user of the roles that had a forced password change
		if($form_state['values']['force_password_change_login_or_init'])
		{
			drupal_set_message(t('Users in the following roles will be required to change their password on their next login: !list', array('!list' => $list)), 'status');
		}
		else
		{
			drupal_set_message(t('Users in the following roles will be required to immediately change their password: !list', array('!list' => $list)), 'status');
		}
	}
	variable_set('force_password_change_expire_password', $form_state['values']['expire_password']);
	// Prepare the insert query for new roles that have not had their password expiry set
	$query = db_insert('force_password_change_expiry')
		->fields(array('rid', 'expiry', 'weight'));
	// Set a flag as the insert query will only need to be executed if new roles exist
	$execute_query = FALSE;
	// Loop through the roles and either update their row in the expiry table, or add to the
	// insert query
	foreach($form_state['values']['table'] as $rid => $expiry)
	{
		// Convert the selected time period into a UNIX timestamp
		// that will be used to calculate whether or not the password has expired.
		$multiplier = array(60 * 60, 60 * 60 * 24, 60 * 60 * 24 * 7, 60 * 60 * 24 * 365);
		$time_period = $expiry['time_quantity'] * $multiplier[$expiry['time_period']];
		// If the role already exists in the database, and the value has changed,
		if(isset($form_state['values']['expiry_data'][$rid]) && $time_period != $form_state['values']['expiry_data'][$rid]['expiry'])
		{
			$update_query = db_update('force_password_change_expiry')
				->fields(array('expiry' => $time_period, 'weight' => $expiry['weight']))
				->condition('rid', $rid)
				->execute();
		}
		// If the role doesn't have a row in the database, add to the insert query
		elseif(!isset($form_state['values']['expiry_data'][$rid]))
		{
			$query->values(array('rid' => $rid, 'expiry' => $time_period, 'weight' => $expiry['weight']));
			// Set the flag indicating that the query should be executed
			$execute_query = TRUE;
		}
	}
	// Execute the query only if new roles were found
	if($execute_query)
	{
		$query->execute();
	}
}

/**
 * Details page for a particular role, as it relates to the Force Password Change module
 */
function force_password_change_list($rid)
{
	$roles = user_roles(TRUE);
	// Check to see if the supplied RID is valid
	if($rid < 2 || !$rid)
	{
		drupal_set_title(t("Error: role doesn't exist"));
		return t("Error: role doesn't exist.");
	}
	else
	{
		$exists = db_query('SELECT 1 FROM {role} WHERE rid = :rid', array(':rid' => $rid))->fetchCol();
		if(!isset($exists[0]))
		{
			drupal_set_title(t("Error: role doesn't exist"));
			return t("Error: role doesn't exist.");
		}
	}
	// Set the title for the page
	drupal_set_title(t('Force Password Change details for !role', array('!role' => $roles[$rid])));
	// Get the time of the last forced change for the role
	$last_change = db_query('SELECT last_force FROM {force_password_change_roles} WHERe rid = :rid', array(':rid' => $rid))->fetchCol();
	// Format the date into a usable string
	$last_change = ($last_change[0] != '') ? format_date($last_change[0], 'small') : t('Never');
	$variables['last_change'] = $last_change;

	// Get a list of users that have a pending forced password change
	$pending_query = db_select('users', 'u')->extend('PagerDefault')->extend('TableSort')->element(0);
	$alias = $pending_query->join('force_password_change_users', 'fpcu', 'fpcu.uid = u.uid');
	$pending_query
		->addTag('force_password_change_pending_users')
		->fields('u', array('uid', 'name', 'created'))
		->fields($alias, array('last_force', 'last_password_change'))
		->limit(100)
		->condition('u.force_password_change', 1);
	// If the role is anything other than the authenticated users role, we need to
	// limit the users to the members of that role
	if($rid > 2)
	{
		$alias2 = $pending_query->join('users_roles', 'ur', 'ur.uid = u.uid');
		$pending_query->condition($alias2 . '.rid', $rid);
	}
	// build the header for the table
	$pending_header = array
	(
		array('data' => t('Username'), 'field' => 'u.name', 'sort' => 'asc'),
		array('data' => t('Last Forced Password Change'), 'field' => $alias . '.last_force'),
		array('data' => t('Last Password Change'), 'field' => $alias . '.last_password_change'),
	);
	$pending_query->orderByHeader($pending_header);

	$pending_user_data = $pending_query->execute();
	
	// Next build the rows of the table, and the stats that will be included for each user shown
	$rows = array();
	$force_password_change_installation_date = variable_get('force_password_change_installation_date', 0);
	$forced_uids = variable_get('force_password_change_first_time_uids', array());
	foreach($pending_user_data as $pending_user)
	{
		$row = array();
		$row[] = (user_access('access user profiles')) ? l($pending_user->name, 'user/' . $pending_user->uid) : $pending_user->name;
		if($pending_user->last_force != '')
		{
			$last_force = format_date($pending_user->last_force, 'small');
		}
		elseif(variable_get('force_password_change_first_login_change', FALSE) && $pending_user->created > $force_password_change_installation_date)
		{
			$last_force = t('Their first login');
		}
		else
		{
			if(count($forced_uids) && isset($forced_uids[$pending_user->uid]))
			{
				$last_force = t('Their first login');
			}
			elseif($pending_user->last_password_change != '')
			{
				$last_force = t('Their first login');
			}
			else
			{
				$last_force = t('Never');
			}
		}
		$row[] = $last_force;
		$row[] = ($pending_user->last_password_change != '') ? format_date($pending_user->last_password_change, 'small') : t('Never');
		$rows[] = $row;
	}
	// In the case that there are no users found, we set a default empty row
	if(!count($rows))
	{
		$row = array();
		$row[] = array('data' => t('No users found'), 'colspan' => 3);
		$rows[] = $row;
	}
	// Build the table containing the retreived data
	$variables['pending_users_table'] = theme('table', array('header' => $pending_header, 'rows' => $rows)) . theme('pager');

	// Perform the same steps as the previous table, for users who do not have a pending forced password change
	$nonpending_query = db_select('users', 'u')->extend('PagerDefault')->extend('TableSort')->element(1);
	$alias = $nonpending_query->join('force_password_change_users', 'fpcu', 'fpcu.uid = u.uid');

	$nonpending_query
		->addTag('force_password_change_nonpending_users')
		->fields('u', array('uid', 'name', 'created'))
		->fields($alias, array('last_force', 'last_password_change'))
		->limit(100)
		->condition('u.force_password_change', 0);
	if($rid > 2)
	{
		$alias2 = $nonpending_query->join('users_roles', 'ur', 'ur.uid = u.uid');
		$nonpending_query->condition($alias2 . '.rid', $rid);
	}
	$nonpending_header = array
	(
		array('data' => t('Username'), 'field' => 'u.name', 'sort' => 'asc'),
		array('data' => t('Last Forced Password Change'), 'field' => $alias . '.last_force'),
		array('data' => t('Last Password Change'), 'field' => $alias . '.last_password_change'),
	);
	$nonpending_query->orderByHeader($nonpending_header);
	
	$nonpending_user_data = $nonpending_query->execute();

	$rows = array();
	foreach($nonpending_user_data as $nonpending_user)
	{
		$row = array();
		$row[] = l($nonpending_user->name, 'user/' . $nonpending_user->uid);
		if($nonpending_user->last_force != '')
		{
			$last_force = format_date($nonpending_user->last_force, 'small');
		}
		elseif(variable_get('force_password_change_first_login_change', FALSE) && $nonpending_user->created > $force_password_change_installation_date)
		{
			$last_force = t('Their first login');
		}
		else
		{
			if(count($forced_uids) && isset($forced_uids[$nonpending_user->uid]))
			{
				$last_force = t('Their first login');
			}
			elseif($nonpending_user->last_password_change != '')
			{
				$last_force = t('Their first login');
			}
			else
			{
				$last_force = t('Never');
			}
		}
		$row[] = $last_force;
		$row[] = ($nonpending_user->last_password_change != '') ? format_date($nonpending_user->last_password_change, 'small') : t('Never');
		$rows[] = $row;
	}
	if(!count($rows))
	{
		$row = array();
		$row[] = array('data' => t('No users found'), 'colspan' => 3);
		$rows[] = $row;
	}
	// Build the table containing the retrieved data
	$variables['nonpending_users_table'] = theme('table', array('header' => $nonpending_header, 'rows' => $rows)) . theme('pager');
	// Get the form allowing users to force all members of the role to change their password
	$variables['force_password_change_form'] = drupal_render(drupal_get_form('force_password_change_single_role', $rid));

	// Build the back button. Since this page can be accessed from two separate locations, the back button
	// will depend on the page the user is coming from.
	if(arg(6))
	{
		if(arg(6) == 'settings')
		{
			$back_button = l(t('Back to settings page'), 'admin/config/people/force_password_change');
		}
		elseif(arg(6) == 'roles')
		{
			$back_button = l(t('Back to roles page'), 'admin/people/permissions/roles');
		}
	}
	else
	{
		$back_button = '';
	}
	$variables['back_button'] = $back_button;

	// Theme the page and return it
	return theme('force_password_change_list', $variables);
}

/**
 * Form to force a password change on a single role. Used on the details page
 */
function force_password_change_single_role($form, &$form_state, $rid)
{
	if(variable_get('force_password_change_login_or_init', 0))
	{
		$description = t('Users who are not signed in will be required to change their password immediately upon login. Users who are currently signed in will be required to change their password upon their next page click, but after changing their password will be redirected back to the page they were attempting to access.');
	}
	else
	{
		$description = t('Users will be required to change their password upon their next login.');
	}
	$description .= '<br />' . t('Note: When you return to this page, this box will be unchecked. This is because this setting is a trigger, not a persistant state.');
	$form['force_password_change'] = array
	(
		'#type' => 'checkbox',
		'#title' => t('Force users in this role to change their password'),
		'#description' => $description,
		'#weight' => -1,
	);
	$form['rid'] = array
	(
		'#type' => 'value',
		'#value' => $rid,
	);
	$form['submit'] = array
	(
		'#type' => 'submit',
		'#value' => t('Force Password Change'),
	);
	return $form;
}

/**
 * Submission function for the form that forces a password change on a single role
 */
function force_password_change_single_role_submit($form, &$form_state)
{
	// Only execute the code if the checkbox was selected
	if($form_state['values']['force_password_change'])
	{
		$uids = array();
		$rid = $form_state['values']['rid'];
		// Execute the following code if the role is anything other than
		// the authenticated users role
		if($rid > 2)
		{
			// Get all UIDS for all members of the role
			$db_uids = db_query
			(
				'SELECT uid ' .
				'FROM {users_roles} ' .
				'WHERE rid = :rid',
				array(':rid' => $rid)
			);
			foreach($db_uids as $uid)
			{
				$uids[] = $uid->uid;
			}
			// If any users are found, force their password change
			if(isset($uids[0]))
			{
				force_password_change_force_users($uids);
			}
		}
		// If the role is the authenticated users role, force the change for
		// for all users
		else
		{
			force_password_change_force_users();
		}
		// Log the force time for the role for statistics sake
		$query = db_update('force_password_change_roles')
			->fields(array('last_force' => REQUEST_TIME))
			->condition('rid', $rid)
			->execute();
		// Set a message depending on the site settings
		if(variable_get('force_password_change_login_or_init', 0))
		{
			drupal_set_message(t('Users in this role will be required to change their password on next login'));
		}
		else
		{
			drupal_set_message(t('Users in this role will be required to immediately change their password'));
		}
	}
}

/**
 * Theme function for the details page for a particular role
 */
function theme_force_password_change_list($variables)
{
	$output = '<p><strong>' . t('Last forced password change for this role:') . '</strong> ';
	$output .= $variables['last_change'];
	$output .= '</p>';

	$output .= '<h3>' . t('Users with a pending password change') . '</h3>';
	$output .= $variables['pending_users_table'];

	$output .= '<h3>' . t('Users without a pending password change') . '</h3>';
	$output .= $variables['nonpending_users_table'];

	$output .= $variables['force_password_change_form'];
	$output .= '<p>' . $variables['back_button'] . '</p>';

	return $output;
}


/**
 * Theme function that effectively rebuilds the add new role form (Administer -> User management -> Roles)
 * This function adds a link from each role the force password change details page for that role. Most
 * of this code is taken directly from the core theme for this page, with one addition for this module.
 */
function theme_force_password_change_user_admin_roles_form($variables)
{
	$form = &$variables['form'];
	$header = array(t('Name'), t('Weight'), array('data' => t('Operations'), 'colspan' => 3));
	foreach (element_children($form['roles']) as $rid)
	{
		$name = $form['roles'][$rid]['#role']->name;
		$row = array();
		$edit_permissions = l(t('edit permissions'), 'admin/user/permissions/'. $rid);
		if (in_array($rid, array(DRUPAL_ANONYMOUS_RID, DRUPAL_AUTHENTICATED_RID)))
		{
			$row[] = t('@name <em>(locked)</em>', array('@name' => $name));
			$row[] = drupal_render($form['roles'][$rid]['weight']);
			$row[] = '';
			$row[] = l(t('edit permissions'), 'admin/people/permissions/' . $rid);
		}
		else
		{
			$row[] = check_plain($name);
			$row[] = drupal_render($form['roles'][$rid]['weight']);
			$row[] = l(t('edit role'), 'admin/people/permissions/roles/edit/' . $rid);
			$row[] = l(t('edit permissions'), 'admin/people/permissions/' . $rid);
		}
		// The following code is the diversion from the original theme
		if($rid != DRUPAL_ANONYMOUS_RID)
		{
			$row[] = l(t('Force Password Change'), 'admin/config/people/force_password_change/list/' . $rid . '/roles');
		}
		else
		{
			$row[] = '';
		}
		$rows[] = array('data' => $row, 'class' => array('draggable'));
	}
	$rows[] = array
	(
		array
		(
			'data' => drupal_render($form['name']) . drupal_render($form['add']),
			'colspan' => 4,
			'class' => 'edit-name'
		)
	);

	drupal_add_tabledrag('user-roles', 'order', 'sibling', 'role-weight');

	$output = theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => 'user-roles')));
	$output .= drupal_render_children($form);
	return $output;
}

/**
 * Theme function for statistics on the module settings page. This is used to place the stats for a role beside the checkbox,
 * without having to include the stats in the label for the checkbox
 */
function theme_force_password_change_settings($variables)
{
	$form = $variables['form'];
	$output = drupal_render($form['first_time_login_password_change']);
	foreach(element_children($form['roles']) as $rid)
	{
		$form['roles'][$rid]['#suffix'] = '<p>(' . t('Users in role: !user_count | Users with pending forced password change: !pending_count | !details', array('!user_count' => $form['stats']['#value'][$rid]['user_count'], '!pending_count' => $form['stats']['#value'][$rid]['pending_count'], '!details' => l(t('Details'), 'admin/config/people/force_password_change/list/' . $rid . '/settings'))) . ')</p>';
	}
	$output .= drupal_render($form['roles']);
	$output .= drupal_render_children($form);
	return $output;
}

/**
 * Theme function for password expiry on the settings page. This is used add the tabledrag for the roles
 */
function theme_force_password_change_expiry($variables)
{
	$form = $variables['form'];

	$header = array(t('Role'), t('Expire password after:'), t('Weight'));
	$rows = array();
	foreach(element_children($form) as $key)
	{
		$row = array();
		$element = &$form[$key];
		$row[] = drupal_render($element['role']);
		$row[] = drupal_render($element['time_quantity']) . drupal_render($element['time_period']);
		$element['weight']['#attributes']['class'] = array('password-expiry-weight');
		$row[] = array('data' => drupal_render($element['weight']), 'class' => array());
		$rows[] = array('data' => $row, 'class' => array('draggable'));
	}
	drupal_add_tabledrag('password-expiry-table', 'order', 'sibling', 'password-expiry-weight');
	$output = theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => 'password-expiry-table'))) . drupal_render_children($form);
	return $output;
}

/**
 * Theme function for the stats on user's account pages.
 */
function theme_force_password_change_stats($variables)
{
	$items[] = t('User has a pending forced password change: !pending', array('!pending' => $variables['pending_change']));
	$items[] = t('User was last forced to change their password on: !last_force', array('!last_force' => $variables['last_force']));
	$items[] = t("User's password was last changed on: !last_change", array('!last_change' => $variables['last_change']));

	$password_stats = '<p><strong>' . t('Password Stats:') . '</strong></p>';
	$password_stats .= theme('item_list', array('items' => $items));

	return $password_stats;
}