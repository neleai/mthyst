require '../lib/amethyst'
require './RegReg'
require './types'

class Closure
  def nul
   nil
  end
end
$closureno=0
def addcb(s)
  $closureno+=1;
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
  RegReg.translate(Amethyst2RegReg.trans(rules))
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

add_rule("foo={puts '42';42} 'a' ('a'|'b'|'c') 'c'")
#t=RRule["foo",parseexp("{puts '42';42} 'a' ('a'|'b'|'c') 'c' ")]
#puts t.inspect
#RegReg.translate(t)
puts RegReg.match(parseexp("foo"),"abc")
add_rule("ac= 'a' 'c' {puts 'ac';42}")
add_rule("bc= 'b' 'c' {puts 'b'}")
add_rule("cc= ac:x {puts 1+1}|bc|ac")
add_rule("a='a'")
puts RegReg.match(parseexp("cc"),"acb")

puts "lookahead"
puts RegReg.match(parseexp("&('a' 'b') 'a' {puts 'wont happen'}"),"ac")

puts 'memo'
puts RegReg.match(parseexp("cc 'c' | cc | cc | cc | cc"),"acb")

puts "iteration"
puts RegReg.match(parseexp("(a {@x||=0;@x+=1;puts @x})* 'b' 'c'{42} " ),"aaaabc")

puts "nested iteration"
#puts RegReg.match(parseexp("( ( (a* 'b'| a)* 'b' | a)* 'b' )* 'b'"),'a'*700)

puts "nested"
puts RegReg.match(parseexp("nested('foo','foo','foo')"),"abc")
