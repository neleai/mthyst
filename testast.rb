require './lib/amethyst'
def ast2ame_compiled_by; "42";end
["ast2ame"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)

require "./compiled/#{f}"
}

exp="foo|bar:x (bla | as 'xxx') baz(4,`a|b`) \"yyy\" <abc> {4+2}"
wrap="amethyst Foo{foo=#{exp} }"
s=AmethystParser.new.parse(:file,wrap)
#s=s[0].rules[0].body
puts s.inspect

r= Syntax_Highligth.new.parse(:root,s)
f=File.new("test.html","w")
puts r.inspect
f.puts "<body bgcolor=black> <pre><div style=\"color:white\">"
f.puts(r)
f.puts "</pre></div></body>"
