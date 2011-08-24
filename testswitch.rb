$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'

compile_to_c("detect_switch")
r=Seq[Or[Apply["seq","'aa'"],Apply["seq","'bb'"]]]
require 'compiled/detect_switch'
res=Detect_Switch.new.parse(:root,r)
puts res.inspect
