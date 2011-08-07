$:.unshift 'lib'
require 'graph'
require 'pp'
require 'amethyst'
require 'amecomp'
File.open("inliner.rb","w"){|o|
p=AmethystParser.new
r=p.parse(:igrammar,"amethyst Foo{ a = ~b a:vars @Result } foo bla")
puts Analyze_Variables2.new.parse(:itrans,r).inspect
#o.puts a2ruby(File.new("amethyst/detect_variables.ame").read)
#o.puts a2ruby(File.new("amethyst/traverser.ame").read)
o.puts a2ruby(File.new("amethyst/dead_code_elimination2.ame").read)
o.puts a2ruby(File.new("amethyst/detect_variables2.ame").read)
o.puts a2ruby(File.new("amethyst/inliner2.ame").read)
}
require 'inliner.rb'
t = And[And[Act["aaa"],Act["bbb"],And[Act["ccc"],Or[Or[And[And[[Act['a']]]]]]]]]
pp t
res= AmethystTranslator.new.parse(:itrans,t)
pp res
