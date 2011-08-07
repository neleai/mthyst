$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
#require 'compiled/amethyst'
#require 'compiled/parser'
#require 'compiled/optimizer_null'
#require 'compiled/optimizer_and_or'
require 'amecomp'

puts a2ruby("amethyst Foo{
	f(x,y) = {x+y}
}")
o=File.open("bootstrap.rb","w")
["amethyst.ame","parser.ame","optimizer_null.ame","traverser.ame","optimizer_and_or.ame","detect_variables2.ame","dead_code_elimination.ame","translator.ame"].each{|file|
puts file
o.puts a2ruby(File.new("amethyst/#{file}").read)
}
o.close
`cp bootstrap.rb lib/bootstrap.rb`

