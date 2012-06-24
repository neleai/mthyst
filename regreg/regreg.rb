require '../lib/amethyst'
require './RegReg'
require './types'

class Closure
  def nul
   nil
  end
  def _append(a,e)
    a<<e
    a
  end
end
$closureno=0
def addcb(s)
  $closureno+=1;
  puts s.inspect
  eval("class Closure;def cb#{$closureno};#{s};end;end")
  "cb#{$closureno}"
end
class RSeq
  def inspect
    "RSeq[#{@head.inspect},#{@tail.inspect}]"
  end
end
def RSeq.[](*ary)
  ary=ary.flatten
  return ary[0] if ary.size==1
  return Rseq.create({:head=>ary[0],:tail=>RSeq[ary[1..-1]]})
end
class RRule
end
def RRule.[](name,*e)
  Rrule.create({:name=>name,:body=>RSeq[*e],:locals=>10})
end


Compiler::compile('./regreg.ame')
def parseexp(expr)
  wrap= "amethyst Foo { exp = #{expr} }"
  rule= AmethystParser.file(wrap)[0].rules[0]
  puts rule.inspect
  rule=Analyze_Variables2.root(rule)
  puts rule.inspect
  t=Amethyst2RegReg.trans([rule.body])
  puts t.inspect
  t
  #add_grammar("amethyst Foo { exp = #{expr} }")
end
def add_grammar(g)
  puts g.inspect
  rules=AmethystParser.file(g)[0].rules
  puts rules.inspect
  rules=rules.map{|r| Analyze_Variables2.root(r)}
  puts rules.inspect
  RegReg.translate(r=Amethyst2RegReg.trans(rules))
  puts r.inspect
end
def add_rule(r)
  add_grammar("amethyst Foo { #{r} }")
end
$anon_rules=0
def match(exp,s)
  $anon_rules+=1
  add_grammar("amethyst Foo { anon#{$anon_rules} = #{exp} }")
  RegReg.match_rule("anon#{$anon_rules}",s)
end

expr= "'a'|'b' {abc}"
expr=parseexp(expr)
puts expr.inspect

#t=RRule["empty",parseexp("{nil}")]
#RegReg.translate(t)
add_rule("empty={nil}")
t=RRule["fail",Rreturn.create({:state=>0})]
RegReg.translate(t)
t=RRule["call",RSeq[Ract.create(:vars=>[],:arg=>"unwrap_lambda"),Ruse_lambda.create({})]]
RegReg.translate(t)
