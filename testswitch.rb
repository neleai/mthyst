$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'compiler'

compile_to_c("detect_switch")
r=Seq[Or[Or[Or[Apply["seq","\"\\naa\""],Apply["seq","\"bb\""]],Apply["seq","'c'"]],Apply["seq","'d'"]]]
require 'compiled/detect_switch'
res=Detect_Switch.new.parse(:root,r)
puts res.inspect
res=Seq_Or_Optimizer.new.parse(:root,res)
puts res.inspect
c=AmethystCTranslator.new
c.resetlabels
res= c.parse(:trans,res)
puts res.inspect
