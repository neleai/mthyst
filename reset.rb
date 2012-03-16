#!/usr/bin/env ruby
require './settings'
Dir["compiled/*.rb"].each{|f|  fn = File.basename(f)[0..-4]
  puts fn
  if Dir["compiled/#{fn}_c.c"]!=[]
    `git checkout compiled/#{fn}_c.c`
    `git checkout compiled/#{fn}.rb`
    cc_compile_file(fn) 
  end
}

puts `cd lib/c/;#{$ruby_binary} extconf.rb;make clean;make`
`cp lib/c/Ame.so compiled/#{RUBY_VERSION}`
