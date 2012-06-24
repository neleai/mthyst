require './regreg.rb'

add_rule("foo={puts '42';42} 'a' ('a'|'b'|'c') 'c'")
#t=RRule["foo",parseexp("{puts '42';42} 'a' ('a'|'b'|'c') 'c' ")]
#puts t.inspect
#RegReg.translate(t)
puts RegReg.match(parseexp("foo"),"abc")
add_rule("ac = 'a' 'c' {puts 'ac';42}")
add_rule("bc = 'b' 'c' {puts 'b'}")
add_rule("cc = ac:x {puts x+1}|bc|ac")
add_rule("a  = 'a'")
add_rule("par(x,y,z) = {0+1}:f {f+x+y+z}")
add_rule("partest    = {0+1}:a par(1+0,2+0,3+0):z {puts z}")
puts RegReg.match(parseexp("cc"),"acb")

puts "lookahead"
puts RegReg.match(parseexp("&('a' 'b') 'a' {puts 'wont happen'}"),"ac")

puts 'memo'
puts RegReg.match(parseexp("cc 'c' | cc | cc | cc | cc"),"acb")

puts "iteration"
puts RegReg.match(parseexp("(a {@x||=0;@x+=1;puts @x})* 'b' 'c'{42} " ),"aaaabc")

puts "nested iteration"
#puts RegReg.match(parseexp("('a'* 'b'| a)*"),"a"*100)
puts RegReg.match(parseexp("( ( (a* 'b'| a)* 'b' | a)* 'b' )* 'b'"),'a'*500)

puts "parametrized"
puts RegReg.match(parseexp("partest"),"abc")

puts "nested"
puts RegReg.match(parseexp("nested('foo','foo','foo')"),"abc")

puts "lambda"
puts RegReg.match(parseexp("{(|foo foo|)}:l call(l)"),"abc")
