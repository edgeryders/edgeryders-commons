desc "deploy to development environment"
task :development do
  set :stage_name, "development"
  set :application, "edgeryders3"
  set :deploy_to,  "/var/apps/#{application}"
  
  # Remote GIT repository (ex: git://github.com/drupal/drupal.git)
  set :repository, "git@bitbucket.org:twinbit/edgeryders-3.git"
  set :branch, "dev"
  
  # Remote WEB [IP|HOST][:PORT] (ex: 127.0.0.1:8888 or twinbitlabs.com:8888)
  role :web, "46.4.103.93:8888", :primary => true
  # Remote DBMS SERVER [IP|HOST][:PORT] (ex: 127.0.0.1:8888 or twinbitlabs.com:8888)
  role :db, "46.4.103.93:8888", :primary => true, :no_release => true

  # Remote Drush override 
  set :remote_drush, "cd #{current_path}; drush"

  # SSH Configurations (user, pass) (is highly suggested to use ssh key authentication)
  set :user, "twinbit"
#  set :pass, 'deploy'
  set :use_sudo, false

  # Drupal domains to deploy (keep "default" domain or at least one domain to use)
  # Ex: "sites/all/app1 sites/all/app2" --> set :domains, ["app1", "app2"]
  # set :domains, ["antinori", "minisito1", "minisito2"]
  # set :domains, ["antinori", "cantinetta", "fontedeimedici", "passignano", "procacci"]
  set :domains, ["tim"]
  
  # Specify which domain needs to be used as default (optional)
  # This is useful for single site environment to have a different default dir rather than standard "default" dir
  # Ex: set :default_domain, "app1"
  set :default_domain, "tim"
  
  # create virtual host symlinks // it works only for default domain
  set :virtual_host, ["tim.twinbitlabs.com"]
end

