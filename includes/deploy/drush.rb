namespace :drush do
  task :default do
  end

  desc "Drush cache clear"
  task :cc, :except => { :no_release => true } do
    domains.each do |domain|
      run "#{remote_drush} --uri=#{domain} cc all"
    end
  end


  namespace :web do
    desc "Set Drupal maintainance mode to online."
    task :enable, :except => { :no_release => true } do
      set(:domain) do
        Capistrano::CLI.ui.ask("Domain? (all or #{domains}) ") { |q| q.validate = /\A\w+\Z/ }
      end unless exists?(:q)

      php = 'variable_set("site_offline", FALSE)'

      if domain == 'all'
        domains.each do |domain|
          run "cd #{current_path}; #{remote_drush} --uri=#{domain} php-eval '#{php}'"
        end
      else
        run "cd #{current_path}; #{remote_drush} --uri=#{domain} php-eval '#{php}'"
      end
    end

    desc "Set Drupal maintainance mode to off-line."
    task :disable, :except => { :no_release => true } do
      set(:domain) do
        Capistrano::CLI.ui.ask("Domain? (all or #{domains}) ") { |q| q.validate = /\A\w+\Z/ }
      end unless exists?(:q)

      php = 'variable_set("site_offline", TRUE)'
      if domain == 'all'
        domains.each do |domain|
          run "#cd #{current_path}; {remote_drush} --uri=#{domain} php-eval '#{php}'"
        end
      else
        run "cd #{current_path}; #{remote_drush} --uri=#{domain} php-eval '#{php}'"
      end
    end

    desc "Drush custom command"
    task :custom, :except => { :no_release => true } do
      set(:command) do
        Capistrano::CLI.ui.ask("Command to execute:")
      end unless exists?(:command)
      set(:domain) do
        Capistrano::CLI.ui.ask("Domain? (all or #{domains}) ") { |q| q.validate = /\A\w+\Z/ }
      end unless exists?(:q)
      if domain == 'all'
        domains.each do |domain|
          run "#{remote_drush} --uri=#{domain} #{command}"
        end
      else
        run "#{remote_drush} --uri=#{domain} #{command}"
      end
    end
  end
  
  namespace :files do 
    desc "Create files backup"
    task :default do
      domains.each do |domain|
        dump_path = "#{shared_path}/files_backup/#{domain}"
        filename = "#{domain}_files_dump_#{Time.now.to_i.to_s}.tar.bz2"
        run "mkdir -p #{dump_path}"
        run "cd #{shared_path}/#{domain}/files; tar cjf #{dump_path}/#{filename} *"
      end
    end
    
    desc "Download files backup"
    task :dl, :except => { :no_release => true } do
      drush::files::default
      domains.each do |domain|
         dump_path = "#{shared_path}/files_backup/#{domain}"         
         dumps = capture("ls -xt #{dump_path}").split.reverse
         get("#{dump_path}/#{dumps.last}", "./#{dumps.last}")
      end
    end
  end

  namespace :db do
    desc "Database backup"
    task :default, :except => { :no_release => true } do
      run "mkdir -p #{shared_path}/db_dumps/"
      domains.each do |domain|
        run "mkdir -p #{shared_path}/db_dumps/#{domain}"
        filename = "#{domain}_db_dump_#{Time.now.to_i.to_s}.sql"
        dump_path = "#{shared_path}/db_dumps/#{domain}"
        run "cd #{current_path}; #{remote_drush} --uri=#{domain} sql-dump --structure-tables-key=common > #{dump_path}/#{filename}"
        run "cd #{dump_path}; bzip2 #{filename}"
      end
    end

   desc "Database Download backup"
    task :dl, :except => { :no_release => true } do
      drush::db::default
      domains.each do |domain|
         dump_path = "#{shared_path}/db_dumps/#{domain}"
         dumps = capture("ls -xt #{dump_path}").split.reverse
         get("#{dump_path}/#{dumps.last}", "./#{dumps.last}")
      end
    end
  end
  
end