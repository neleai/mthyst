class Amethyst < AmethystCore
def regch(regex_1)
 c_1 = ((nil))
_result_1 = ((nil))
c_1 = ((it=(char());return FAIL if it==FAIL;it))
(it=((regex_1.match(c_1))||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((c_1))
(_result_1)  
end
def eof()
 _result_1 = ((nil))
_result_1 = ((it=(_lookahead(true){(it=(anything());next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it))
(_result_1)  
end
def empty()
 _result_1 = ((nil))
_result_1 = ((nil))
(_result_1)  
end
def char()
 c_1 = ((nil))
_result_1 = ((nil))
c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((c_1))
(_result_1)  
end
def endline()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(seq("\r\n"));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("\r"));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("\n"));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def space()
 _result_1 = ((nil))
_result_1 = ((it=(regch(/[\s\t\r\n\f]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def spaces()
 autovar_1 = ((nil))
()
_result_1 = ((nil))
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(space());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_2
_result_1 = ((autovar_1))
(_result_1)  
end
def _()
 _result_1 = ((nil))
_result_1 = ((it=(space());return FAIL if it==FAIL;it))
(_result_1)  
end
def digit()
 _result_1 = ((nil))
_result_1 = ((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def lower()
 _result_1 = ((nil))
_result_1 = ((it=(regch(/[a-z]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def upper()
 _result_1 = ((nil))
_result_1 = ((it=(regch(/[A-Z]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def letter()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(lower());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(upper());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def letterOrDigit()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(letter());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(digit());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def alpha()
 _result_1 = ((nil))
_result_1 = ((it=(letter());return FAIL if it==FAIL;it))
(_result_1)  
end
def alnum()
 _result_1 = ((nil))
_result_1 = ((it=(letterOrDigit());return FAIL if it==FAIL;it))
(_result_1)  
end
def xdigit()
 _result_1 = ((nil))
_result_1 = ((it=(regch(/[0-9a-fA-F]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def word()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(alpha());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("_"));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def listOf(rule_1,delim_1)
 f_1 = ((nil))
autovar_1 = ((nil))
()
_result_1 = ((nil))
(it=(_or(proc{it=((it=(apply(rule_1));next FAIL if it==FAIL;it))
 f_1||=[];_append(f_1,it)
autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(apply(delim_1));break FAIL if it==FAIL;it)
it=((it=(apply(rule_1));break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
end;@input=autovar_2
it=((autovar_1))
 f_1||=[];_append(f_1,it)
_result_1 = ((f_1)) },proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = (([])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def exactly(wanted_1)
 got_1 = ((nil))
_result_1 = ((nil))
got_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((wanted_1 == got_1)||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((wanted_1))
(_result_1)  
end
def _true()
 _result_1 = ((nil))
_result_1 = ((it=(exactly(true));return FAIL if it==FAIL;it))
(_result_1)  
end
def _false()
 _result_1 = ((nil))
_result_1 = ((it=(exactly(false));return FAIL if it==FAIL;it))
(_result_1)  
end
def clas(cls_1)
 i_1 = ((nil))
_result_1 = ((nil))
i_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((i_1.is_a?(cls_1))||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((i_1))
(_result_1)  
end
def token(s_1)
 _result_1 = ((nil))
(it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
(_result_1)  
end
def many1(s_1)
 a_1 = ((nil))
autovar_1 = ((nil))
()
_result_1 = ((nil))
it=((it=(apply(s_1));return FAIL if it==FAIL;it))
 a_1||=[];_append(a_1,it)
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(apply(s_1));break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_2
_result_1 = (it=((autovar_1))
 a_1||=[];_append(a_1,it))
(_result_1)  
end

end

require 'ast'

class AmethystParser < Amethyst
def igrammar()
 autovar_1 = ((nil))
()
it_1 = ((nil))
autovar_2 = ((nil))
()
a_1 = ((nil))
_result_1 = ((nil))
autovar_2 = (([]))
while true
autovar_4=@input;r=(it=(_or(proc{autovar_1 = (([]))
(it=(_lookahead(true){(it=(seq("amethyst"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(anything());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
while true
autovar_3=@input;r=(it=(_lookahead(true){(it=(seq("amethyst"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
end;@input=autovar_3
it_1 = ((autovar_1))
it=((it_1*""))
 autovar_2||=[];_append(autovar_2,it) },proc{it=((it=(grammar());next FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_4
a_1 = ((autovar_2))
_result_1 = ((a_1))
(_result_1)  
end
def grammar()
 name_1 = ((nil))
parent_1 = ((nil))
autovar_1 = ((nil))
()
rules_1 = ((nil))
_result_1 = ((nil))
(it=(token("amethyst"));return FAIL if it==FAIL;it)
name_1 = ((it=(name());return FAIL if it==FAIL;it))
(it=(_or(proc{(it=(token("<"));next FAIL if it==FAIL;it)
parent_1 = ((it=(name());next FAIL if it==FAIL;it)) },proc{(it=(empty());next FAIL if it==FAIL;it)
(parent_1="Amethyst") }));return FAIL if it==FAIL;it)
(it=(token("{"));return FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(rule());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_2
rules_1 = ((autovar_1))
(it=(token("}"));return FAIL if it==FAIL;it)
_result_1 = (Grammar[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1 }])
(_result_1)  
end
def rule()
 name_1 = ((nil))
args_1 = ((nil))
body_1 = ((nil))
locals_1 = ((nil))
_result_1 = ((nil))
(@locals=[])
name_1 = ((it=(name());return FAIL if it==FAIL;it))
args_1 = ((it=(ruleargs());return FAIL if it==FAIL;it))
(it=(token("="));return FAIL if it==FAIL;it)
body_1 = ((it=(expression());return FAIL if it==FAIL;it))
body_1 = ((_body(body_1)))
locals_1 = ((@locals.uniq))
_result_1 = (Rule[ {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }])
(_result_1)  
end
def expression()
 _result_1 = ((nil))
_result_1 = ((it=(choice());return FAIL if it==FAIL;it))
(_result_1)  
end
def choice()
 _result_1 = ((nil))
ary_1 = ((nil))
ary_1 = ((it=(listOf('sequence',proc{_result_1 = ((it=(token("|"));return FAIL if it==FAIL;it))
(_result_1) }));return FAIL if it==FAIL;it))
_result_1 = (Or[ {:ary=>ary_1 }])
(_result_1)  
end
def sequence()
 autovar_1 = ((nil))
()
ary_1 = ((nil))
_result_1 = ((nil))
autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(nr());break FAIL if it==FAIL;it)
it=((it=(prefixed());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
end;@input=autovar_2
ary_1 = ((autovar_1))
_result_1 = (Seq[ {:ary=>ary_1 }])
(_result_1)  
end
def prefixed()
 m_1 = ((nil))
expr_1 = ((nil))
from_1 = ((nil))
it_1 = ((nil))
()
()
()
()
()
()
_result_1 = ((nil))
(it=(_or(proc{(it=(token("~"));next FAIL if it==FAIL;it)
m_1 = ((it=(prefixed());next FAIL if it==FAIL;it))
_result_1 = ((_Not(m_1))) },proc{(it=(token("&"));next FAIL if it==FAIL;it)
expr_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
_result_1 = ((_Pred(expr_1))) },proc{(it=(token("&"));next FAIL if it==FAIL;it)
(it=(_lookahead(true){expr_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
m_1 = ((it=(prefixed());next FAIL if it==FAIL;it))
_result_1 = ((_Lookahead(m_1))) },proc{from_1 = ((it=(modifier());next FAIL if it==FAIL;it))
()
while true
autovar_3=@input;r=(it=(_or(proc{(it=(seq("=>"));next FAIL if it==FAIL;it)
it_1 = ((it=(modifier());next FAIL if it==FAIL;it))
(from_1=_Pass(from_1,it_1))
from_1 = ((it=(optIter(from_1));next FAIL if it==FAIL;it))
()
while true
autovar_1=@input;r=(it=(_lookahead(true){(it=(space());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
from_1 = ((it=(binding(from_1));break FAIL if it==FAIL;it)) 
 break FAIL if r==FAIL
end;@input=autovar_1
() },proc{(it=(seq("["));next FAIL if it==FAIL;it)
it_1 = ((it=(expression());next FAIL if it==FAIL;it))
(from_1=Enter[from_1,it_1])
(it=(token("]"));next FAIL if it==FAIL;it)
from_1 = ((it=(optIter(from_1));next FAIL if it==FAIL;it))
()
while true
autovar_2=@input;r=(it=(_lookahead(true){(it=(space());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
from_1 = ((it=(binding(from_1));break FAIL if it==FAIL;it)) 
 break FAIL if r==FAIL
end;@input=autovar_2
() }));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_3
()
_result_1 = ((from_1)) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def modifier()
 t_1 = ((nil))
()
()
autovar_1 = ((nil))
()
c_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{t_1 = ((it=(term());next FAIL if it==FAIL;it))
t_1 = ((it=(optIter(t_1));next FAIL if it==FAIL;it))
()
while true
autovar_2=@input;r=(it=(_lookahead(true){(it=(space());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
t_1 = ((it=(binding(t_1));break FAIL if it==FAIL;it)) 
 break FAIL if r==FAIL
end;@input=autovar_2
()
_result_1 = ((t_1)) },proc{_result_1 = ((it=(binding(Apply["anything"]));next FAIL if it==FAIL;it))},proc{(it=(token("#"));next FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_3=@input;r=(it=(_lookahead(true){(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
end;@input=autovar_3
c_1 = ((autovar_1))
_result_1 = ((Comment[c_1])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def optIter(t_1)
 _result_1 = ((nil))
(it=(_or(proc{(it=(token("*"));next FAIL if it==FAIL;it)
_result_1 = ((_Many(t_1))) },proc{(it=(token("+"));next FAIL if it==FAIL;it)
_result_1 = ((_Many1(t_1))) },proc{(it=(token("?"));next FAIL if it==FAIL;it)
_result_1 = ((Or[t_1,Apply["empty"]])) },proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = ((t_1)) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def binding(exp_1)
 expr_1 = ((nil))
name_1 = ((nil))
append_1 = ((nil))
e_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{expr_1 = ((exp_1))
(it=(token(":"));next FAIL if it==FAIL;it)
name_1 = ((it=(name());next FAIL if it==FAIL;it))
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
append_1 = ((true)) },proc{(it=(empty());next FAIL if it==FAIL;it)
append_1 = ((false)) }));next FAIL if it==FAIL;it)
_result_1 = ((_Set(name_1,expr_1,append_1))) },proc{(it=(token(":"));next FAIL if it==FAIL;it)
e_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
_result_1 = ((Seq[_Set("it",exp_1) , _Act(e_1) ])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def term()
 cls_1 = ((nil))
expr_1 = ((nil))
x_1 = ((nil))
autovar_1 = ((nil))
()
s_1 = ((nil))
autovar_2 = ((nil))
()
it_1 = ((nil))
autovar_3 = ((nil))
()
to_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{cls_1 = ((it=(className());next FAIL if it==FAIL;it))
_result_1 = ((Apply["clas",cls_1])) },proc{(it=(token("nested"));next FAIL if it==FAIL;it)
(it=(seq("("));next FAIL if it==FAIL;it)
expr_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
_result_1 = ((Nested[expr_1])) },proc{_result_1 = ((it=(application());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(key());next FAIL if it==FAIL;it))},proc{(it=(_or(proc{(it=(token("->"));next FAIL if it==FAIL;it)
x_1 = ((it=(atomicHostExpr());next FAIL if it==FAIL;it)) },proc{(it=(token(""));next FAIL if it==FAIL;it)
x_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it)) }));next FAIL if it==FAIL;it)
_result_1 = ((_Act(x_1))) },proc{(it=(token("\""));next FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_4=@input;r=(it=(_lookahead(true){(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(eChar());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
end;@input=autovar_4
s_1 = ((autovar_1))
(it=(seq("\""));next FAIL if it==FAIL;it)
_result_1 = ((Apply["token" ,quote(s_1)])) },proc{(it=(token("'"));next FAIL if it==FAIL;it)
autovar_2 = (([]))
while true
autovar_5=@input;r=(it=(_lookahead(true){(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(eChar());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it) 
 break FAIL if r==FAIL
end;@input=autovar_5
s_1 = ((autovar_2))
(it=(seq("\'"));next FAIL if it==FAIL;it)
_result_1 = ((Apply["seq",quote(s_1)])) },proc{it_1 = ((it=(number());next FAIL if it==FAIL;it))
_result_1 = ((Apply["exactly",it_1])) },proc{(it=(token("<"));next FAIL if it==FAIL;it)
autovar_3 = (([]))
(it=(_lookahead(true){(it=(token(">"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(eChar());next FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)
while true
autovar_6=@input;r=(it=(_lookahead(true){(it=(token(">"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(eChar());break FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it) 
 break FAIL if r==FAIL
end;@input=autovar_6
x_1 = ((autovar_3))
(it=(token(">"));next FAIL if it==FAIL;it)
_result_1 = ((Apply["regch","/[#{x_1}]/"])) },proc{(it=(token("["));next FAIL if it==FAIL;it)
to_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token("]"));next FAIL if it==FAIL;it)
_result_1 = ((Enter[Apply["anything"],to_1])) },proc{(it=(token("("));next FAIL if it==FAIL;it)
x_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
_result_1 = ((it=(collect(x_1));next FAIL if it==FAIL;it)) },proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = ((x_1)) }));next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def application()
 klas_1 = ((nil))
rule_1 = ((nil))
arg_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(token("."));next FAIL if it==FAIL;it)
_result_1 = ((Apply["anything"])) },proc{(it=(_or(proc{klas_1 = ((it=(name());next FAIL if it==FAIL;it))
(it=(seq("::"));next FAIL if it==FAIL;it)
rule_1 = ((it=(name());next FAIL if it==FAIL;it))
rule_1 = (([klas_1,rule_1])) },proc{rule_1 = ((it=(name());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)
arg_1 = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
_result_1 = ((Apply[rule_1,arg_1])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def key()
 name_1 = ((nil))
args_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_1 = ((it=(className());next FAIL if it==FAIL;it))
args_1 = ((it=(argsOpt('[',']'));next FAIL if it==FAIL;it))
_result_1 = (Result[ {:name=>name_1,:args=>args_1 }]) },proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_1 = ((it=(name());next FAIL if it==FAIL;it))
_result_1 = (Key[ {:name=>name_1,:args=>args_1 }]) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def collect(ors_1)
 _result_1 = ((nil))
_result_1 = ((a=autovar; Seq[Or[{:ary=>ors_1.ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],_Act(a)]))
(_result_1)  
end
def eChar()
 c_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(seq("\\"));next FAIL if it==FAIL;it)
c_1 = ((it=(char());next FAIL if it==FAIL;it))
_result_1 = (("\\#{c_1}")) },proc{_result_1 = ((it=(_args('#{','}'));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(char());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def ruleargs()
 autovar_1 = ((nil))
_result_1 = ((nil))
autovar_1 = ((it=(argsOpt('(',')'));return FAIL if it==FAIL;it))
(it=(_pass(false,autovar_1){autovar_2 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){_result_1 = ((it=(addargs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(_result_1)  
end
def addargs()
 name_1 = ((nil))
result_1 = ((nil))
()
()
_result_1 = ((nil))
()
while true
autovar_2=@input;r=autovar_1 = ((it=(clas(Args));break FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
it=((_Local(name_1) ))
 result_1||=[];_append(result_1,it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
end;@input=autovar_2
()
_result_1 = ((result_1 || []))
(_result_1)  
end
def nr()
 _result_1 = ((nil))
_result_1 = ((it=(_lookahead(true){(it=(name());next FAIL if it==FAIL;it)
(it=(argsOpt('(',')'));next FAIL if it==FAIL;it)
(it=(token("="));next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it))
(_result_1)  
end
def argsOpt(o_1,c_1)
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(args(o_1,c_1));next FAIL if it==FAIL;it))},proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = (([])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def args(o_1,c_1)
 r_1 = ((nil))
_result_1 = ((nil))
r_1 = ((it=(__args(o_1,c_1));return FAIL if it==FAIL;it))
_result_1 = ((r_1<< ','
							ary=[]
							tmp=[]
							r_1.each{|a|
								if a==','
									ary<<Args[{:ary=>tmp}];tmp=[]
								else
									tmp<<a
								end
							}
							ary
						))
(_result_1)  
end
def _args(o_1,c_1)
 r_1 = ((nil))
_result_1 = ((nil))
r_1 = ((it=(__args(o_1,c_1));return FAIL if it==FAIL;it))
_result_1 = ((Args[{:ary=>([o_1]+r_1+[c_1])}]))
(_result_1)  
end
def __args(o_1,c_1)
 autovar_1 = ((nil))
()
r_1 = ((nil))
_result_1 = ((nil))
(it=(seq(o_1));return FAIL if it==FAIL;it)
(it=(token(""));return FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(rubyarg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_2
r_1 = ((autovar_1))
(it=(seq(c_1));return FAIL if it==FAIL;it)
_result_1 = ((r_1))
(_result_1)  
end
def rubyarg()
 e_1 = ((nil))
autovar_1 = ((nil))
()
s_1 = ((nil))
autovar_2 = ((nil))
()
n_1 = ((nil))
autovar_3 = ((nil))
()
autovar_4 = ((nil))
()
k_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(seq("`"));next FAIL if it==FAIL;it)
e_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(seq("`"));next FAIL if it==FAIL;it)
_result_1 = ((Exp[_body(e_1)])) },proc{_result_1 = ((it=(_args('(',')'));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(_args('[',']'));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(_args('{','}'));next FAIL if it==FAIL;it))},proc{(it=(seq("\""));next FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_5=@input;r=(it=(_lookahead(true){(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(eChar());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
end;@input=autovar_5
s_1 = ((autovar_1))
(it=(seq("\""));next FAIL if it==FAIL;it)
_result_1 = ((Strin[['"']+ s_1+['"']])) },proc{(it=(seq("\'"));next FAIL if it==FAIL;it)
autovar_2 = (([]))
while true
autovar_6=@input;r=(it=(_lookahead(true){(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(eChar());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it) 
 break FAIL if r==FAIL
end;@input=autovar_6
s_1 = ((autovar_2))
(it=(seq("\'"));next FAIL if it==FAIL;it)
_result_1 = ((Strin[['\'']+s_1+['\'']])) },proc{(it=(_or(proc{it=((it=(regch(/[$.:]/));next FAIL if it==FAIL;it))
 n_1||=[];_append(n_1,it)},proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
autovar_3 = (([]))
it=((it=(regch(/[a-zA-Z_]/));next FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)
while true
autovar_7=@input;r=it=((it=(regch(/[a-zA-Z_]/));break FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)
 break FAIL if r==FAIL
end;@input=autovar_7
it=((autovar_3))
 n_1||=[];_append(n_1,it)
_result_1 = ((n_1*"")) },proc{(it=(seq("@@"));next FAIL if it==FAIL;it)
autovar_4 = (([]))
it=((it=(regch(/[a-zA-Z_]/));next FAIL if it==FAIL;it))
 autovar_4||=[];_append(autovar_4,it)
while true
autovar_8=@input;r=it=((it=(regch(/[a-zA-Z_]/));break FAIL if it==FAIL;it))
 autovar_4||=[];_append(autovar_4,it)
 break FAIL if r==FAIL
end;@input=autovar_8
it=((autovar_4))
 n_1||=[];_append(n_1,it)
_result_1 = ((Global[n_1*""])) },proc{k_1 = ((it=(key());next FAIL if it==FAIL;it))
_result_1 = ((Key[k_1] )) },proc{_result_1 = ((it=(regch(/[^`{}()'"\[\]]/));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def nameFirst()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(regch(/[_$^]/));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(letter());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def nameRest()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(nameFirst());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(digit());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def className()
 ()
()
autovar_1 = ((nil))
()
autovar_2 = ((nil))
it_1 = ((nil))
_result_1 = ((nil))
()
while true
autovar_3=@input;r=(it=(_());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_3
()
it=((it=(upper());return FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
it=((autovar_1))
 autovar_2||=[];_append(autovar_2,it)
it_1 = ((autovar_2))
_result_1 = ((leterize(it_1*"")))
(_result_1)  
end
def name()
 ()
()
autovar_1 = ((nil))
()
autovar_2 = ((nil))
it_1 = ((nil))
_result_1 = ((nil))
()
while true
autovar_3=@input;r=(it=(_());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_3
()
it=((it=(nameFirst());return FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
it=((autovar_1))
 autovar_2||=[];_append(autovar_2,it)
it_1 = ((autovar_2))
_result_1 = ((leterize(it_1*"")))
(_result_1)  
end
def inlineHostExpr()
 _result_1 = ((nil))
_result_1 = ((it=(args('{','}'));return FAIL if it==FAIL;it))
(_result_1)  
end
def number()
 autovar_1 = ((nil))
()
_result_1 = ((nil))
autovar_1 = (([]))
it=((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
while true
autovar_2=@input;r=it=((it=(regch(/[0-9]/));break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_2
_result_1 = ((autovar_1))
(_result_1)  
end
def atomicHostExpr()
 autovar_1 = ((nil))
()
s_1 = ((nil))
autovar_2 = ((nil))
_result_1 = ((nil))
autovar_1 = (([]))
while true
autovar_3=@input;r=(it=(_lookahead(true){(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
end;@input=autovar_3
s_1 = ((autovar_1))
autovar_2 = (("{#{s_1*""}}"))
(it=(_pass(false,autovar_2){autovar_4 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){_result_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(_result_1)  
end

end

class AmethystOptimizer < Amethyst
def itrans()
 autovar_1 = ((nil))
()
r_1 = ((nil))
_result_1 = ((nil))
autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(_or(proc{it=((it=(char());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)},proc{it=((it=(trans());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_2
r_1 = ((autovar_1))
_result_1 = ((r_1))
(_result_1)  
end
def trans()
 name_1 = ((nil))
parent_1 = ((nil))
rules_1 = ((nil))
autovar_1 = ((nil))
args_1 = ((nil))
autovar_2 = ((nil))
body_1 = ((nil))
autovar_3 = ((nil))
locals_1 = ((nil))
autovar_4 = ((nil))
()
ary_1 = ((nil))
autovar_5 = ((nil))
()
autovar_6 = ((nil))
()
o_1 = ((nil))
autovar_7 = ((nil))
expr_1 = ((nil))
autovar_8 = ((nil))
append_1 = ((nil))
pred_1 = ((nil))
autovar_9 = ((nil))
vars_1 = ((nil))
autovar_10 = ((nil))
autovar_11 = ((nil))
()
to_1 = ((nil))
autovar_12 = ((nil))
var_1 = ((nil))
autovar_13 = ((nil))
enter_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_14 = ((it=(clas(Grammar));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_14){name_1 = ( self['name'])
parent_1 = ( self['parent'])
autovar_1 = ( self['rules'])
(it=(_pass(false,autovar_1){rules_1 = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Grammar[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_15 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_15){name_1 = ( self['name'])
autovar_2 = ( self['args'])
(it=(_pass(false,autovar_2){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_3 = ( self['body'])
(it=(_pass(false,autovar_3){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ( self['locals']) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_16 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_16){autovar_4 = (([]))
while true
autovar_17=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_4||=[];_append(autovar_4,it)
 break FAIL if r==FAIL
end;@input=autovar_17
ary_1 = ((autovar_4)) });next FAIL if it==FAIL;it)
_result_1 = (Or[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_18 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_18){autovar_5 = (([]))
while true
autovar_19=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
end;@input=autovar_19
ary_1 = ((autovar_5)) });next FAIL if it==FAIL;it)
_result_1 = (Seq[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_20 = ((it=(clas(Not));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_20){it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
_result_1 = (Not[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_21 = ((it=(clas(Lookahead));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_21){it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
_result_1 = (Lookahead[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_22 = ((it=(clas(Comment));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_22){autovar_6 = (([]))
while true
autovar_23=@input;r=it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_6||=[];_append(autovar_6,it)
 break FAIL if r==FAIL
end;@input=autovar_23
ary_1 = ((autovar_6)) });next FAIL if it==FAIL;it)
_result_1 = (Comment[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_24 = ((it=(clas(Many));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_24){it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
o_1 = ( self['o']) });next FAIL if it==FAIL;it)
_result_1 = (Many[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_25 = ((it=(clas(Apply));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_25){it=((it=(anything());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
it=((it=(args());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it) });next FAIL if it==FAIL;it)
_result_1 = (Apply[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_26 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_26){autovar_7 = ( self['name'])
(it=(_pass(false,autovar_7){name_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_8 = ( self['expr'])
(it=(_pass(false,autovar_8){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( self['append']) });next FAIL if it==FAIL;it)
_result_1 = (Set[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_27 = ((it=(clas(Act));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_27){ary_1 = ((it=(args());next FAIL if it==FAIL;it))
pred_1 = ( self['pred']) });next FAIL if it==FAIL;it)
_result_1 = (Act[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_28 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_28){name_1 = ( self['name'])
autovar_9 = ( self['args'])
(it=(_pass(false,autovar_9){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_10 = ( self['vars'])
(it=(_pass(false,autovar_10){vars_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Result[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_29 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_29){autovar_11 = (([]))
while true
autovar_30=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_11||=[];_append(autovar_11,it)
 break FAIL if r==FAIL
end;@input=autovar_30
ary_1 = ((autovar_11)) });next FAIL if it==FAIL;it)
_result_1 = (Args[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_31 = ((it=(clas(Key));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_31){name_1 = ( self['name'])});next FAIL if it==FAIL;it)
_result_1 = (Key[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) },proc{autovar_32 = ((it=(clas(Pass));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_32){autovar_12 = ( self['to'])
(it=(_pass(false,autovar_12){to_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_13 = ( self['var'])
(it=(_pass(false,autovar_13){var_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
enter_1 = ( self['enter']) });next FAIL if it==FAIL;it)
_result_1 = (Pass[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1,:o=>o_1,:expr=>expr_1,:append=>append_1,:pred=>pred_1,:vars=>vars_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }]) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def transfn()
 _result_1 = ((nil))
_result_1 = ((it=(trans());return FAIL if it==FAIL;it))
(_result_1)  
end
def transs()
 autovar_1 = ((nil))
()
t_1 = ((nil))
_result_1 = ((nil))
autovar_2 = ((it=(anything());return FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){autovar_1 = (([]))
while true
autovar_3=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_3
t_1 = ((autovar_1)) });return FAIL if it==FAIL;it)
_result_1 = ((t_1))
(_result_1)  
end
def args()
 autovar_1 = ((nil))
()
a_1 = ((nil))
autovar_2 = ((nil))
()
_result_1 = ((nil))
(it=(_or(proc{autovar_3 = ((it=(clas(Array));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
a_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1)) },proc{autovar_2 = (([]))
while true
autovar_5=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_5
_result_1 = ((autovar_2)) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 autovar_1 = ((nil))
()
ary_1 = ((nil))
autovar_2 = ((nil))
()
_result_1 = ((nil))
(it=(_or(proc{autovar_3 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
ary_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
_result_1 = (Args[ {:ary=>ary_1 }]) },proc{autovar_5 = ((it=(clas(Strin));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){autovar_2 = (([]))
while true
autovar_6=@input;r=(it=(_or(proc{it=((it=(char());next FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)},proc{it=((it=(arg());next FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_6
ary_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = (Strin[ {:ary=>ary_1 }]) },proc{autovar_7 = ((it=(clas(Exp));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_7){it=((it=(transfn());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
_result_1 = (Exp[ {:ary=>ary_1 }]) },proc{_result_1 = ((it=(anything());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end



class AmethystOptimizer2 < AmethystOptimizer
def trans()
 autovar_1 = ((nil))
()
ary_1 = ((nil))
autovar_2 = ((nil))
()
_result_1 = ((nil))
(it=(_or(proc{autovar_3 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
ary_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
(ary_1=ary_1.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten)
(it=(_or(proc{(it=((ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
_result_1 = ((ary_1[0])) },proc{_result_1 = (Or[ {:ary=>ary_1 }])}));next FAIL if it==FAIL;it) },proc{autovar_5 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){autovar_2 = (([]))
while true
autovar_6=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_6
ary_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
(ary_1=ary_1.map{|a| (a.is_a?(Seq)) ? a.ary : a}.flatten)
(it=(_or(proc{(it=((ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
_result_1 = ((ary_1[0])) },proc{_result_1 = (Seq[ {:ary=>ary_1 }])}));next FAIL if it==FAIL;it) },proc{_result_1 = ((super))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end




class Detect_Variables < AmethystOptimizer
def trans()
 argnames_1 = ((nil))
name_1 = ((nil))
args_1 = ((nil))
body_1 = ((nil))
autovar_1 = ((nil))
locals_1 = ((nil))
l_1 = ((nil))
r_1 = ((nil))
ary_1 = ((nil))
()
()
autovar_2 = ((nil))
vars_1 = ((nil))
expr_1 = ((nil))
autovar_3 = ((nil))
append_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_4 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){argnames_1 = ((@argnames=[]))
(@locals=[])
name_1 = ( self['name'])
args_1 = ( self['args'])
(args_1.each{|v| @argnames<<v[0]})
autovar_1 = ( self['body'])
(it=(_pass(false,autovar_1){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ((@locals.uniq))
((locals_1-argnames_1).each{|l_1| body_1=Seq[Set[{:name=>l_1,:expr=>Act["nil"] }],body_1] };) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:argnames=>argnames_1,:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:l=>l_1,:r=>r_1,:ary=>ary_1,:vars=>vars_1,:expr=>expr_1,:append=>append_1 }]) },proc{autovar_5 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){l_1 = ((@locals))
r_1 = (([]))
()
while true
autovar_6=@input;r=(@locals=l_1.clone)
it=((it=(trans());break FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
(r_1=(r_1+@locals).uniq) 
 break FAIL if r==FAIL
end;@input=autovar_6
()
(@locals=r_1) });next FAIL if it==FAIL;it)
_result_1 = (Or[ {:argnames=>argnames_1,:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:l=>l_1,:r=>r_1,:ary=>ary_1,:vars=>vars_1,:expr=>expr_1,:append=>append_1 }]) },proc{autovar_7 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_7){name_1 = ( self['name'])
autovar_2 = ( self['args'])
(it=(_pass(false,autovar_2){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_1 = ((@locals.select{|a| a[0]!= "autovar"&&a!="_result"&&a!="it"}.uniq)) });next FAIL if it==FAIL;it)
_result_1 = (Result[ {:argnames=>argnames_1,:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:l=>l_1,:r=>r_1,:ary=>ary_1,:vars=>vars_1,:expr=>expr_1,:append=>append_1 }]) },proc{autovar_8 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_8){name_1 = ( self['name'])
(@locals<<name_1)
autovar_3 = ( self['expr'])
(it=(_pass(false,autovar_3){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( self['append']) });next FAIL if it==FAIL;it)
_result_1 = (Set[ {:argnames=>argnames_1,:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:l=>l_1,:r=>r_1,:ary=>ary_1,:vars=>vars_1,:expr=>expr_1,:append=>append_1 }]) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end


class Analyze_Variables < AmethystOptimizer
def trans()
 name_1 = ((nil))
locals_1 = ((nil))
args_1 = ((nil))
body_1 = ((nil))
autovar_1 = ((nil))
autovar_2 = ((nil))
vars_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_3 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){name_1 = ( self['name'])
locals_1 = ( self['locals'])
(@variables={}; @locals=locals_1 ;(locals_1+ self['args']).each{|v| @variables[v[0]]=true})
args_1 = ( self['args'])
autovar_1 = ( self['body'])
(it=(_pass(false,autovar_1){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(body_1=Seq[{:ary=>(( self['locals']- self['args']).uniq.map{|v| Set[{:name=>v,:expr=>Act["nil"],:append=>false}]}+[body_1]) }]) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:name=>name_1,:locals=>locals_1,:args=>args_1,:body=>body_1,:vars=>vars_1 }]) },proc{autovar_4 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){name_1 = ( self['name'])
autovar_2 = ( self['args'])
(it=(_pass(false,autovar_2){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_1 = ((@locals.select{|a| a[0]!= "autovar"&&a[0]!="_result"&&a[0]!="it"}.uniq)) });next FAIL if it==FAIL;it)
_result_1 = (Result[ {:name=>name_1,:locals=>locals_1,:args=>args_1,:body=>body_1,:vars=>vars_1 }]) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 name_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{name_1 = ((it=(char());next FAIL if it==FAIL;it))
(it=((@variables[name_1])||FAIL);next FAIL if it==FAIL;it)
_result_1 = ((_Local(name_1))) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end

class Dead_Code_Detector < AmethystOptimizer
def trans()
 name_1 = ((nil))
args_1 = ((nil))
autovar_1 = ((nil))
autovar_2 = ((nil))
body_1 = ((nil))
locals_1 = ((nil))
reachable_1 = ((nil))
var_1 = ((nil))
autovar_3 = ((nil))
autovar_4 = ((nil))
this_1 = ((nil))
v_1 = ((nil))
autovar_5 = ((nil))
autovar_6 = ((nil))
autovar_7 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_8 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_8){name_1 = ( self['name'])
(@edges=Oriented_Graph.new ; @marked=[_Local("_result")])
autovar_1 = ( self['args'])
(it=(_pass(false,autovar_1){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_2 = ( self['body'])
(it=(_pass(false,autovar_2){(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
body_1 = ( self['body'])
locals_1 = ( self['locals'])
reachable_1 = ((@edges.reachable(@marked))) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:reachable=>reachable_1,:var=>var_1,:this=>this_1,:v=>v_1 }]) },proc{autovar_9 = ((it=(clas(Apply));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_9){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
var_1 = ((it=(vars_in());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((@marked +=var_1)) },proc{autovar_10 = ((it=(clas(Pass));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_10){autovar_3 = ( self['var'])
(it=(_pass(false,autovar_3){var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(@marked+=var_1)
autovar_4 = ( self['to'])
(it=(_pass(false,autovar_4){_result_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{autovar_11 = ((it=(clas(Act));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_11){this_1 = ( self['this'])
(@marked<<this_1 if self['pred'])
var_1 = ((it=(vars_in());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((var_1.each{|v_1| @edges.add(v_1,this_1); @edges.add(this_1,v_1); @marked<<this_1 if v_1.is_a? Global})) },proc{autovar_12 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_12){v_1 = ( self['name'])
autovar_5 = ( self['expr'])
(it=(_pass(false,autovar_5){(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_6 = ( self['expr'])
(it=(_pass(false,autovar_6){var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = ((var_1.each{|w| @edges.add(v_1,w)})) },proc{autovar_13 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_13){autovar_7 = ( self['vars'])
(it=(_pass(false,autovar_7){autovar_14 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_14){var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
v_1 = ( self['this']) });next FAIL if it==FAIL;it)
_result_1 = ((var_1.each{|w| @edges.add(v_1,w) })) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def vars_in()
 ary_1 = ((nil))
()
()
()
()
autovar_1 = ((nil))
()
()
()
_result_1 = ((nil))
(ary_1=[])
()
while true
autovar_12=@input;r=(it=(_or(proc{autovar_2 = ((it=(clas(Global));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){it=( self['this'])
 ary_1||=[];_append(ary_1,it)
()
while true
autovar_3=@input;r=(it=(anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_3
() });next FAIL if it==FAIL;it) },proc{autovar_4 = ((it=(clas(Act));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){it=( self['this'])
 ary_1||=[];_append(ary_1,it)
()
while true
autovar_5=@input;r=(it=(anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_5
() });next FAIL if it==FAIL;it) },proc{autovar_6 = ((it=(clas(Exp));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_6){(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) },proc{autovar_7 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_7){it=( self['this'])
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{autovar_8 = ((it=(clas(Strin));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_8){it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{autovar_9 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_9){it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{autovar_10 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_10){autovar_1 = ( self['name'])
(it=(_pass(false,autovar_1){it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{autovar_11 = ((it=(clas(Local));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_11){(it=(anything());next FAIL if it==FAIL;it)
it=( self['this'])
 ary_1||=[];_append(ary_1,it) });next FAIL if it==FAIL;it) },proc{(it=(anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_12
()
_result_1 = ((ary_1))
(_result_1)  
end

end


class Dead_Code_Deleter < AmethystOptimizer
def trans()
 name_1 = ((nil))
it_1 = ((nil))
args_1 = ((nil))
autovar_1 = ((nil))
body_1 = ((nil))
autovar_2 = ((nil))
locals_1 = ((nil))
this_1 = ((nil))
()
()
expr_1 = ((nil))
autovar_3 = ((nil))
append_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_4 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){name_1 = ( self['name'])
it_1 = ( self['reachable'])
(@reachable=it_1)
autovar_1 = ( self['args'])
(it=(_pass(false,autovar_1){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_2 = ( self['body'])
(it=(_pass(false,autovar_2){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ( self['locals']) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:this=>this_1,:expr=>expr_1,:append=>append_1 }]) },proc{autovar_5 = ((it=(clas(Act));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){this_1 = ( self['this'])
()
while true
autovar_6=@input;r=(it=(anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_6
() });next FAIL if it==FAIL;it)
_result_1 = ((@reachable[this_1] ? this_1 : Act[])) },proc{autovar_7 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_7){name_1 = ( self['name'])
autovar_3 = ( self['expr'])
(it=(_pass(false,autovar_3){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( self['append']) });next FAIL if it==FAIL;it)
_result_1 = ((@reachable[name_1] ? _Set(name_1,expr_1,append_1) : expr_1)) },proc{autovar_8 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_8){this_1 = ( self['this'])});next FAIL if it==FAIL;it)
_result_1 = ((@reachable[this_1] ? this_1 : Act[])) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end


class Constant_Propagator < AmethystOptimizer

end


class Communize_Or < AmethystOptimizer
def trans()
 first_1 = ((nil))
()
()
fst_1 = ((nil))
autovar_1 = ((nil))
()
rest_1 = ((nil))
ary_1 = ((nil))
()
()
_result_1 = ((nil))
(it=(_or(proc{autovar_2 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){(it=(_lookahead(){autovar_3 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){first_1 = ((it=(trans());next FAIL if it==FAIL;it))
()
while true
autovar_4=@input;r=(it=(anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_4
() });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
()
while true
autovar_7=@input;r=autovar_5 = ((it=(clas(Seq));break FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){fst_1 = ((it=(trans());next FAIL if it==FAIL;it))
(it=((first_1.isomorphic(fst_1))||FAIL);next FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_6=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_6
rest_1 = ((autovar_1))
it=((Seq[{:ary=>rest_1}]))
 ary_1||=[];_append(ary_1,it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
end;@input=autovar_7
() });next FAIL if it==FAIL;it)
_result_1 = ((Seq[first_1 ,Or[{:ary=>ary_1}] ])) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end


class Move_Assignments < AmethystOptimizer
def trans()
 name_1 = ((nil))
expr_1 = ((nil))
autovar_1 = ((nil))
append_1 = ((nil))
autovar_2 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_3 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){name_1 = ( self['name'])
autovar_1 = ( self['expr'])
(it=(_pass(false,autovar_1){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( self['append'])
autovar_2 = ((expr_1))
(it=(_pass(false,autovar_2){_result_1 = ((it=(move(append_1,name_1));next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def move(append_1,name_1)
 autovar_1 = ((nil))
()
ary_1 = ((nil))
el_1 = ((nil))
autovar_2 = ((nil))
autovar_3 = ((nil))
()
var_1 = ((nil))
to_1 = ((nil))
autovar_4 = ((nil))
enter_1 = ((nil))
it_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_5 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){autovar_1 = (([]))
while true
autovar_6=@input;r=it=((it=(move(append_1,name_1));break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_6
ary_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
_result_1 = (Or[ {:append=>append_1,:name=>name_1,:ary=>ary_1,:el=>el_1,:var=>var_1,:to=>to_1,:enter=>enter_1 }]) },proc{autovar_7 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_7){autovar_3 = (([]))
while true
autovar_8=@input;r=el_1 = ((it=(anything());break FAIL if it==FAIL;it))
(it=(_or(proc{(it=(_lookahead(){(it=(eof());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_2 = ((el_1))
(it=(_pass(false,autovar_2){it=((it=(move(append_1,name_1));next FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)});next FAIL if it==FAIL;it) },proc{it=((el_1))
 autovar_3||=[];_append(autovar_3,it)}));break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
end;@input=autovar_8
ary_1 = ((autovar_3)) });next FAIL if it==FAIL;it)
_result_1 = (Seq[ {:append=>append_1,:name=>name_1,:ary=>ary_1,:el=>el_1,:var=>var_1,:to=>to_1,:enter=>enter_1 }]) },proc{autovar_9 = ((it=(clas(Pass));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_9){var_1 = ( self['var'])
autovar_4 = ( self['to'])
(it=(_pass(false,autovar_4){to_1 = ((it=(move(append_1,name_1));next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
enter_1 = ( self['enter']) });next FAIL if it==FAIL;it)
_result_1 = (Pass[ {:append=>append_1,:name=>name_1,:ary=>ary_1,:el=>el_1,:var=>var_1,:to=>to_1,:enter=>enter_1 }]) },proc{it_1 = ((it=(anything());next FAIL if it==FAIL;it))
_result_1 = ((_Set(name_1,it_1,append_1))) }));return FAIL if it==FAIL;it)
(_result_1)  
end

end

class Renamer < AmethystOptimizer
def trans()
 name_1 = ((nil))
args_1 = ((nil))
autovar_1 = ((nil))
locals_1 = ((nil))
body_1 = ((nil))
autovar_2 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_3 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){(@newvars={})
name_1 = ( self['name'])
autovar_1 = ( self['args'])
(it=(_pass(false,autovar_1){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ( self['locals'])
autovar_2 = ( self['body'])
(it=(_pass(false,autovar_2){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:name=>name_1,:args=>args_1,:locals=>locals_1,:body=>body_1 }]) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 name_1 = ((nil))
this_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_1 = ((it=(clas(Local));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
this_1 = ( self['this']) });next FAIL if it==FAIL;it)
_result_1 = ((@newvars[this_1] ? @newvars[this_1] : ($av+=1; @newvars[this_1]=_Local(name_1,$av) ;@newvars[this_1] ))) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end

class Inliner < AmethystOptimizer
def inline(rule_1,grammar_1)
 autovar_1 = ((nil))
name_1 = ((nil))
args_1 = ((nil))
()
body_1 = ((nil))
autovar_2 = ((nil))
_result_1 = ((nil))
autovar_3 = ((nil))
autovar_1 = ((rule_1))
(it=(_pass(false,autovar_1){autovar_4 = ((it=(clas(Rule));next FAIL if it==FAIL;it))});return FAIL if it==FAIL;it)
(it=(_pass(true,autovar_4){name_1 = ( self['name'])
args_1 = ( self['args'])
 self['locals']
body_1 = ( self['body']) });return FAIL if it==FAIL;it)
(@result=autovar_3;@name=name_1;@args=args_1;@body=Set[{:name=>@result ,:expr=>body_1}] )
autovar_2 = ((grammar_1))
(it=(_pass(false,autovar_2){autovar_5 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){_result_1 = ((it=(itrans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(_result_1)  
end
def trans()
 name_1 = ((nil))
autovar_1 = ((nil))
()
args_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_2 = ((it=(clas(Apply));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
(it=((name_1==@name)||FAIL);next FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_3=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_3
args_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
_result_1 = ((body=@body; args_1.each_index{|i| body=Seq[Set[{:name=>@args[i],:expr=>Act[args_1[i]]}],body] } ; Seq[body,Act[@result]])) },proc{_result_1 = ((super))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def inlineit()
 name_1 = ((nil))
grammar_1 = ((nil))
rule_1 = ((nil))
_result_1 = ((nil))
name_1 = ((it=(anything());return FAIL if it==FAIL;it))
grammar_1 = ((it=(anything());return FAIL if it==FAIL;it))
rule_1 = ((it=(getrule(name_1,grammar_1));return FAIL if it==FAIL;it))
_result_1 = ((it=(inline(rule_1,grammar_1));return FAIL if it==FAIL;it))
(_result_1)  
end
def getrule(name_1,grammar_1)
 n_1 = ((nil))
rule_1 = ((nil))
()
()
autovar_1 = ((nil))
()
()
autovar_2 = ((nil))
_result_1 = ((nil))
autovar_2 = ((grammar_1))
(it=(_pass(false,autovar_2){autovar_3 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){()
while true
autovar_8=@input;r=(it=(_or(proc{autovar_4 = ((it=(clas(Grammar));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){autovar_1 = ( self['rules'])
(it=(_pass(false,autovar_1){autovar_5 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){()
while true
autovar_7=@input;r=autovar_6 = ((it=(clas(Rule));break FAIL if it==FAIL;it))
(it=(_pass(true,autovar_6){n_1 = ( self['name'])
(it=(_or(proc{(it=((n_1==name_1)||FAIL);next FAIL if it==FAIL;it)
rule_1 = ( self['this']) },proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
end;@input=autovar_7
() });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_8
() });next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
_result_1 = ((Renamer.new.parse(:trans, [rule_1])))
(_result_1)  
end

end

class AmethystTranslator < Amethyst
def itrans()
 autovar_1 = ((nil))
()
r_1 = ((nil))
_result_1 = ((nil))
autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(_or(proc{it=((it=(char());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)},proc{it=((it=(trans());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_2
r_1 = ((autovar_1))
_result_1 = ((r_1*""))
(_result_1)  
end
def trans()
 name_1 = ((nil))
parent_1 = ((nil))
body_1 = ((nil))
()
_result_1 = ((nil))
autovar_1 = ((nil))
argss_1 = ((nil))
autovar_2 = ((nil))
autovar_3 = ((nil))
()
()
ors_1 = ((nil))
autovar_4 = ((nil))
()
autovar_5 = ((nil))
()
t_1 = ((nil))
pred_1 = ((nil))
neg_1 = ((nil))
()
o_1 = ((nil))
autovar_6 = ((nil))
()
autovar_7 = ((nil))
expr_1 = ((nil))
autovar_8 = ((nil))
append_1 = ((nil))
autovar_9 = ((nil))
vars_1 = ((nil))
to_1 = ((nil))
()
var_1 = ((nil))
()
enter_1 = ((nil))
autovar_10 = ((nil))
autovar_11 = ((nil))
(it=(_or(proc{autovar_12 = ((it=(clas(Grammar));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_12){(it=(rw('return',proc{name_1 = ( self['name'])
parent_1 = ( self['parent'])
autovar_1 = ( self['rules'])
(it=(_pass(false,autovar_1){_result_1 = (body_1 = ((it=(transs());next FAIL if it==FAIL;it)))});next FAIL if it==FAIL;it)
(_result_1) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = (("class #{name_1} < #{parent_1}\n#{body_1}\nend\n")) },proc{autovar_13 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_13){(@varhash=Hash.new{|h,k| h[k]={}}  )
name_1 = ( self['name'])
autovar_2 = ( self['args'])
(it=(_pass(false,autovar_2){argss_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_3 = ( self['body'])
(it=(_pass(false,autovar_3){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (("def #{name_1}(#{argss_1})\n #{body_1} \nend\n")) },proc{autovar_14 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_14){(it=(rw('next', proc{autovar_4 = (([]))
while true
autovar_15=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_4||=[];_append(autovar_4,it)
 break FAIL if r==FAIL
end;@input=autovar_15
_result_1 = (ors_1 = ((autovar_4)))
(_result_1) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_or(#{ors_1*","})"));next FAIL if it==FAIL;it)) },proc{autovar_16 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_16){autovar_5 = (([]))
while true
autovar_17=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
end;@input=autovar_17
t_1 = ((autovar_5)) });next FAIL if it==FAIL;it)
_result_1 = (("#{t_1*"\n"} ")) },proc{autovar_18 = ((it=(clas(Not));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_18){(it=(rw('next',proc{_result_1 = (t_1 = ((it=(trans());next FAIL if it==FAIL;it)))
(_result_1) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_lookahead(true){#{t_1}}"));next FAIL if it==FAIL;it)) },proc{autovar_19 = ((it=(clas(Act));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_19){t_1 = ((it=(args());next FAIL if it==FAIL;it))
pred_1 = ( self['pred']) });next FAIL if it==FAIL;it)
_result_1 = ((pred_1 ?  failwrap("(#{t_1})||FAIL") : "(#{t_1})")) },proc{autovar_20 = ((it=(clas(Lookahead));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_20){neg_1 = ( self['neg'])
(it=(rw('next',proc{_result_1 = (t_1 = ((it=(trans());next FAIL if it==FAIL;it)))
(_result_1) }));next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_lookahead(#{neg_1}){#{t_1}}"));next FAIL if it==FAIL;it)) },proc{autovar_21 = ((it=(clas(Comment));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_21){(it=(anything());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = (("")) },proc{autovar_22 = ((it=(clas(Many));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_22){(it=(rw('break', proc{_result_1 = (t_1 = ((it=(trans());next FAIL if it==FAIL;it)))
(_result_1) } ));next FAIL if it==FAIL;it)
autovar_6 = ( self['o'])
(it=(_pass(false,autovar_6){o_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (("while true\n#{o_1}=@input;r=#{t_1}\n break FAIL if r==FAIL\nend;@input=#{o_1}")) },proc{autovar_23 = ((it=(clas(Apply));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_23){autovar_24 = ((it=(clas(Array));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_24){(it=(anything());next FAIL if it==FAIL;it)
name_1 = ((it=(anything());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
argss_1 = ((it=(args());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_foreign(:#{name_1 } #{argss_1!=[] ? ",#{argss}" : "" })"));next FAIL if it==FAIL;it)) },proc{autovar_25 = ((it=(clas(Apply));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_25){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
argss_1 = ((it=(args());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("#{name_1}(#{argss_1})"));next FAIL if it==FAIL;it)) },proc{autovar_26 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_26){autovar_7 = ( self['name'])
(it=(_pass(false,autovar_7){name_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_8 = ( self['expr'])
(it=(_pass(false,autovar_8){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( self['append']) });next FAIL if it==FAIL;it)
_result_1 = ((append_1 ? "it=(#{expr_1})\n #{name_1}||=[];_append(#{name_1},it)" : "#{name_1} = (#{expr_1})")) },proc{autovar_27 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_27){name_1 = ( self['name'])
autovar_9 = ( self['args'])
(it=(_pass(false,autovar_9){argss_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_1 = ( self['vars']) });next FAIL if it==FAIL;it)
_result_1 = (("#{name_1}[#{argss_1} {#{vars_1.map{|l| ":#{l[0]}=>#{l[0]}_#{l.number}" }*","} }]")) },proc{autovar_28 = ((it=(clas(Key));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_28){name_1 = ( self['name'])});next FAIL if it==FAIL;it)
_result_1 = ((" self['#{name_1}']")) },proc{autovar_29 = ((it=(clas(Pass));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_29){(it=(rw('next',proc{autovar_10 = ( self['to'])
(it=(_pass(false,autovar_10){to_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_11 = ( self['var'])
(it=(_pass(false,autovar_11){var_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
_result_1 = (enter_1 = ( self['enter']))
(_result_1) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_pass(#{enter_1},#{var_1}){#{to_1}}"));next FAIL if it==FAIL;it)) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def transfn()
 t_1 = ((nil))
_result_1 = ((nil))
t_1 = ((it=(trans());return FAIL if it==FAIL;it))
_result_1 = (("proc{#{t_1}}" ))
(_result_1)  
end
def transs()
 autovar_1 = ((nil))
()
t_1 = ((nil))
_result_1 = ((nil))
autovar_2 = ((it=(anything());return FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){autovar_1 = (([]))
while true
autovar_3=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_3
t_1 = ((autovar_1)) });return FAIL if it==FAIL;it)
_result_1 = ((t_1))
(_result_1)  
end
def args()
 autovar_1 = ((nil))
()
a_1 = ((nil))
autovar_2 = ((nil))
()
_result_1 = ((nil))
(it=(_or(proc{autovar_3 = ((it=(clas(Array));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
a_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1*",")) },proc{autovar_2 = (([]))
while true
autovar_5=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_5
a_1 = ((autovar_2))
_result_1 = ((a_1*",")) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 autovar_1 = ((nil))
()
a_1 = ((nil))
autovar_2 = ((nil))
()
t_1 = ((nil))
name_1 = ((nil))
number_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{autovar_3 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
a_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1*"")) },proc{autovar_5 = ((it=(clas(Strin));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){autovar_2 = (([]))
while true
autovar_6=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_6
a_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1*"")) },proc{autovar_7 = ((it=(clas(Exp));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_7){t_1 = ((it=(transfn());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
_result_1 = ((t_1)) },proc{autovar_8 = ((it=(clas(Key));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_8){t_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
_result_1 = ((t_1)) },proc{autovar_9 = ((it=(clas(Local));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_9){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
number_1 = ( self['number']) });next FAIL if it==FAIL;it)
_result_1 = ((@varhash[name_1][number_1]=@varhash[name_1].size+1 if !@varhash[name_1][number_1]  ; "#{name_1}_#{@varhash[name_1][number_1]}")) },proc{autovar_10 = ((it=(clas(Global));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_10){name_1 = ((it=(anything());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
_result_1 = (("@#{name_1}")) },proc{_result_1 = ((it=(anything());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def rw(word_1,prc_1)
 x_1 = ((nil))
_result_1 = ((nil))
(rwo=@returnword;@returnword=word_1)
x_1 = ((it=(apply(prc_1));return FAIL if it==FAIL;it))
_result_1 = ((@returnword=rwo;x_1))
(_result_1)  
end
def failwrap(s_1)
 _result_1 = ((nil))
_result_1 = (("(it=(#{s_1});#{@returnword} FAIL if it==FAIL;it)" ))
(_result_1)  
end

end

