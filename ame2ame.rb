$:.unshift 'lib'
require 'pp'
require 'amethyst'
def a2ruby(s)
	p=AmethystParser.new
	o=AmethystOptimizer2.new
	t=AmethystTranslator.new
	i=Inliner.new
	par=p.parse(:igrammar,s)
	opt=o.parse(:itrans,par)
	inl=i.parse(:inlineit,["spaces",opt])
	ruby=t.parse(:itrans,opt)
end
o=File.open("bootstrap.rb","w")
["amethyst.ame","amethyst_parser.ame","amethyst_optimizer.ame","amethyst_optimizer2.ame","inliner.ame","amethyst_translator.ame"].each{|file|
o.puts a2ruby(File.new("amethyst/#{file}").read)
}
o.close
`cp bootstrap.rb lib/bootstrap.rb`
