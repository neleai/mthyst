#!/usr/bin/env ruby1.9.1
require './settings'

if Dir["#{Amethyst_path}/compiled/#{RUBY_VERSION}"]==[]
  Dir.mkdir "#{Amethyst_path}/compiled/#{RUBY_VERSION}"
end

Dir.chdir("lib/c")
require './extconf.rb'
puts `make clean;make`

File.open("Makefile","a"){|f|
  f.puts "cflags:
\t@echo $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) 
lflags:
\t@echo  $(LDSHARED)  $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)"
}
Amethyst::Settings.compile=`make cflags`.chomp
Amethyst::Settings.link   =`make lflags`.chomp
File.open(Amethyst_path+"/compiled/#{RUBY_VERSION}/cflags.rb","w"){|f|
f.puts "Amethyst::Settings.compile='#{Amethyst::Settings.compile}'"
f.puts "Amethyst::Settings.link   ='#{Amethyst::Settings.link}'"
}
Dir.chdir("../..")

require Amethyst_path+"/compiled/#{RUBY_VERSION}/cflags.rb"

Dir["compiled/*.rb"].each{|f|  fn = File.basename(f)[0..-4]
  puts fn
  `git checkout compiled/#{fn}.rb`
  if Dir["compiled/#{fn}_c.c"]!=[]
    `git checkout compiled/#{fn}_c.c`
    cc_compile_file(fn) 
  end
}

`cp lib/c/Ame.so compiled/#{RUBY_VERSION}`
