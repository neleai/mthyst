$:.unshift 'lib'
$t=Time.now
$tot=Hash.new(0)
def time(m)
	puts "#{m} #{Time.now-$t}"
	$tot[m]+=Time.now-$t
	$t=Time.now
end
require 'pp'
require 'amethyst'
def a2ruby(s)
	p=AmethystParser.new
	o=AmethystOptimizer2.new
	t=AmethystTranslator.new
	i=Inliner.new
	par=p.parse(:igrammar,s)
	time("parsing")
#	opt=o.parse(:itrans,par)
	opt=par
	inl=i.parse(:inlineit,["spaces",opt])
	inl=i.parse(:inlineit,["space",inl])
	inl=i.parse(:inlineit,["char",inl])
time("inlining")
	inl=opt if inl==FAIL
	opt=o.parse(:itrans,inl)
time("andor")
	ruby=t.parse(:itrans,opt)
time("ruby")
	ruby
end
o=File.open("bootstrap.rb","w")
["amethyst.ame","amethyst_parser.ame","amethyst_optimizer.ame","amethyst_optimizer2.ame","inliner.ame","amethyst_translator.ame"].each{|file|
o.puts a2ruby(File.new("amethyst/#{file}").read)
}
o.close
`cp bootstrap.rb lib/bootstrap.rb`
tot=0
$tot.each{|k,v| puts "#{k} #{v}";tot+=v}
puts "total #{tot}"
