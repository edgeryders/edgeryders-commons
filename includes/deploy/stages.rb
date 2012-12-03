desc "deploy to developemnt environment"
task :development do
  set :stage_name, "development"
  set :application, "edgeryders3"
  set :deploy_to,  "/var/apps/#{application}"
  
  # Remote GIT repository (ex: git://github.com/drupal/drupal.git)
  set :repository,  "git@bitbucket.org:edgeryders/edgeryders-3.git"
  set :branch, "dev"
  
  # Remote WEB [IP|HOST][:PORT] (ex: 127.0.0.1:8888 or twinbitlabs.com:8888)
  role :web, "176.9.102.162:8888", :primary => true
  # Remote DBMS SERVER [IP|HOST][:PORT] (ex: 127.0.0.1:8888 or twinbitlabs.com:8888)
  role :db, "176.9.102.162:8888", :primary => true, :no_release => true

  # Remote Drush override 
  set :remote_drush, "cd #{current_path}; sudo drush"

  # SSH Configurations (user, pass) (is highly suggested to use ssh key authentication)
  set :user, "deploy"
  set :use_sudo, false

  # Drupal domains to deploy (keep "default" domain or at least one domain to use)
  # Ex: "sites/all/app1 sites/all/app2" --> set :domains, ["app1", "app2"]
  set :domains, ["lote2"]
  
  # Specify which domain needs to be used as default (optional)
  # This is useful for single site environment to have a different default dir rather than standard "default" dir
  # Ex: set :default_domain, "app1"
  set :default_domain, "lote2"
  
  # create virtual host symlinks
  set :virtual_host, ["lote2.edgeryders.eu"]
end

