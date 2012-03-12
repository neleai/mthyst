require './lib/amethyst'
["amethyst","parser"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)
require "compiled/#{f}.rb"
}
puts AmethystParser.new.parse(:file,"aa (| \"x\" |)").inspect
_result=nil
puts $test_lambda._expr("a")
puts $test_lambda._expr("c")
