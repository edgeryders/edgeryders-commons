# after trigger
after "deploy", "deploy:cleanup", "drush:cc" #, "drush:db"
after 'deploy:setup', 'drupal:setup'
after 'deploy:symlink', 'drupal:symlink'
after 'deploy:create_symlink', 'drupal:symlink'
after "deploy:update_code", 'drupal:remove_git_directories', 'drupal:htaccess', 'drupal:default_dir', 'drupal:virtualhost', 'drupal:robots'

namespace :deploy do
  desc "Group writable permission"
  task :finalize_update, :except => { :no_release => true } do
    "chmod -R g+w #{latest_release}" if fetch(:group_writable, true)
  end

  # Each of the following tasks are Rails specific. They're removed.
  task :migrate do
  end

  task :migrations do
  end

  task :cold do
  end

  task :start do
  end

  task :stop do
  end

  task :restart do
  end

end
