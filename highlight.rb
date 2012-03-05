require './lib/amethyst'
def ast2ame_compiled_by; "42";end
["ast2ame"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)

require "./compiled/#{f}"
}

wrap="amethyst Foo{
  foo=foo|bar:x (bla | as:[foo] 'xxx') baz(4,`a|b`) \"yyy\" <abc> {4+2}
  bar= foo:bar baz[ aa ] {2+2}=>foo
}"
wrap=File.new("amethyst/amethyst.ame").read
s=AmethystParser.new.parse(:file,wrap)
puts s.inspect

r= Syntax_Highligth.new.parse(:root,s)
f=File.new("test.html","w")
def synchronize_whitespace(s,trans)
end
puts r.inspect
f.puts "<body bgcolor=black> <pre><div style=\"color:white\">"
f.puts(r)
f.puts "</pre></div></body>"
