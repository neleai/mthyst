require './lib/amethyst'
Compiler::compile('regreg.ame')
def parseexp(expr)
  wrap= "amethyst Foo { exp = #{expr} }"
  rule= AmethystParser.new._file(wrap)[0].rules[0]
  rule=Analyze_Variables2.new._root(rule)
  rule.body
end
expr= '"a"|"b"'
puts parseexp( '"a"|"b"').inspect

