Amethyst_path=File.expand_path(File.dirname(__FILE__))

require Amethyst_path+'/lib/settings.rb'

$ruby_binary="ruby1.9.1"

Amethyst::Settings.profiling=false
Amethyst::Settings.compile_for=["1_9_3"]
Amethyst::Settings.cflags="-march=core2 "
Amethyst::Settings.debug=1
