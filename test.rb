$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'lib/compiler'
["dead_code_elimination2","inliner2"].each{|n|
  compile_to_c(n)
}


