def prompt_with_default(var, default)
  set(var) do
	Capistrano::CLI.ui.ask "#{var} [#{default}] : "
  end
  set var, default if eval("#{var.to_s}.empty?")
end
