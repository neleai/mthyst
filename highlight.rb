require './lib/amethyst'
def parser_highlight_compiled_by; "42";end
["amethyst","parser_highlight"].each{|f|
Compiler::compile("amethyst/#{f}.ame","compiled/#{f}.rb",f)

require "./compiled/#{f}"
}

wrap="amethyst Foo{
  foo=foo|bar:x (bla | as:[foo] 'xxx') baz(4,`a|b`) \"yyy\" <abc> {4+2}
  bar= foo:bar baz[ aa ] {2+2}=>foo
}"
wrap=File.new("amethyst/amethyst.ame").read
$colors=[]
AmethystParser_Highligth.new.parse(:file,wrap)
r=""
wrap.size.times{|i|
  c=wrap[i]
  case c
  when "<"
    c="&lt;"
  when ">"
    c="&gt;"
  when "&"
    c="&amp;"
  end
  c="<span style=\"color:#{$colors[i]}\">#{c}</span>" if $colors[i]
  
  r<<c
}
puts r.inspect
f=File.new("test.html","w")
f.puts "<body bgcolor=black> <pre><div style=\"color:white\">"
f.puts(r)
f.puts "</pre></div></body>"
