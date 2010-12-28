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
	c=Communize_Or.new
	t=AmethystTranslator.new
	i=Inliner.new
	d=Detect_Variables.new
	a=Analyze_Variables.new
	par=p.parse(:igrammar,s)
	time("parsing")
#	opt=o.parse(:itrans,par)
	inl=par
#	inl=i.parse(:inlineit,["spaces",inl])
#	inl=i.parse(:inlineit,["space",inl])
#	inl=i.parse(:inlineit,["char",inl])
#	inl=i.parse(:inlineit,["regch",inl])
#pp par
	inl=d.parse(:itrans,inl)
#pp inl
	inl=a.parse(:itrans,inl)
#pp inl
time("inlining")
	inl=opt if inl==FAIL
#	opt=c.parse(:itrans,inl)
	opt=o.parse(:itrans,inl)
time("andor")
	ruby=t.parse(:itrans,opt)
time("ruby")
	ruby
end
o=File.open("bootstrap.rb","w")
["amethyst.ame","parser.ame","optimizer_null.ame","optimizer_and_or.ame","detect_variables.ame","analyze_variables.ame","dead_code_elimination.ame","inliner.ame","translator.ame"].each{|file|
o.puts a2ruby(File.new("amethyst/#{file}").read)
}
o.close
`cp bootstrap.rb lib/bootstrap.rb`
tot=0
$tot.each{|k,v| puts "#{k} #{v}";tot+=v}
puts "total #{tot}"
