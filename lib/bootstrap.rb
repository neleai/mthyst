class Amethyst < AmethystCore
def _()
 _result_1 = ((nil))
_result_1 = ((it=(space());return FAIL if it==FAIL;it))
(_result_1)  
end
def _dot_()
 _result_1 = ((nil))
_result_1 = ((it=(anything());return FAIL if it==FAIL;it))
(_result_1)  
end
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
_result_1 = ((it=(_not{(it=(_dot_());next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it))
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
c_1 = ((it=(_dot_());return FAIL if it==FAIL;it))
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
 autovar_1 = ((nil))
f_1 = ((nil))
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
 _result_1 = ((nil))
_result_1 = ((it=((@input.item.is_a?(cls_1))||FAIL);return FAIL if it==FAIL;it))
(_result_1)  
end
def is_a(cls_1)
 _result_1 = ((nil))
_result_1 = ((it=((@input.src.is_a?(cls_1))||FAIL);return FAIL if it==FAIL;it))
(_result_1)  
end
def token(s_1)
 _result_1 = ((nil))
(it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
(_result_1)  
end
def many1(s_1)
 autovar_1 = ((nil))
a_1 = ((nil))
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

makeclasses(Object,
    [:Args,:o,:c,:r],
    [:Key,:name,:expr,:args],
    [:Resul,:name,:expr,:args,:vars],
    [:Enter,:name,:cls,:expr],
    :Apply,
    :Nested,
    :Exp,
    :Foreign,
    [:Set,:name,:expr,:append],
    [:Many,:o],
    :Many1,
    :Comment,
    [:Act,:uses,:pred],
    :Lookahead,
    :Not,
    :Seq,
    :Or,
    :And,
		[:Strin],
		[:Variable,:number],
		[:Pass,:var,:to],
    [:Enter,:klas],
    [:Rule,:name,:args,:locals,:body],
    [:Grammar,:name,:parent,:rules],
		:Local
)

def quote(s)
  s=s*""
  '"'+s.gsub('\\"','"').gsub('"','\\"')+'"'
end

$av=0
def autovar
	$av+=1
	Variable[{:ary=>["autovar"],:number=>$av}]
end

def _Enter(to ,from=Apply["anything"],enter=true)
#  And[_Set("it",from), Enter[{:to=>to,:enter=>enter,:var=>Variable["it"]}]]
Enter[to]
end
def _Pass(from,to)
#  _Enter(to,from,false)
	enter=false
	a=autovar
	And[_Set(a,from), Pass[{:to=>to,:enter=>enter,:var=>a}]]
end


def _Set(name,expr,append=false)
  Set[{:name=>name,:expr=>expr,:append=>append}]
end
def _Append(name,expr)
  _Set(name,expr,true)
end

def _Many(expr,many1=false)
  a=autovar
  And[{:ary=>( [_Set(a, _Act("[]"))]+(many1 ? [_Append(a,expr)] : [])+[Many[{:ary=>[_Append(a,expr)],:o=>autovar}],_Act(a)])}]
end
def _Many1(expr)
  _Many(expr,true)
end

def _Act(expr,pred=false)
  Act[{:ary=>[expr],:pred=>pred}]
end
def _Pred(expr)
  _Act(expr,true)
end
def _body(body)
	And[_Set("_result",body), _Act("_result")]
end

$varhash=Hash.new{|h,k| h[k]=Variable[{:ary=>[k],:number=>1}]}
def _Variable(name)
 $varhash[name]
end
class AmethystParser < Amethyst
def igrammar()
 autovar_1 = ((nil))
it_1 = ((nil))
autovar_2 = ((nil))
a_1 = ((nil))
_result_1 = ((nil))
autovar_2 = (([]))
while true
autovar_4=@input;r=(it=(_or(proc{autovar_1 = (([]))
(it=(_not{(it=(seq("amethyst"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(_dot_());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
while true
autovar_3=@input;r=(it=(_not{(it=(seq("amethyst"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(_dot_());break FAIL if it==FAIL;it))
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
 autovar_1 = ((nil))
rules_1 = ((nil))
parent_1 = ((nil))
name_1 = ((nil))
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
 body_1 = ((nil))
args_1 = ((nil))
name_1 = ((nil))
_result_1 = ((nil))
name_1 = ((it=(name());return FAIL if it==FAIL;it))
args_1 = ((it=(ruleargs());return FAIL if it==FAIL;it))
(it=(token("="));return FAIL if it==FAIL;it)
body_1 = ((it=(expression());return FAIL if it==FAIL;it))
body_1 = ((_body(body_1)))
_result_1 = (Rule[ {:name=>name_1,:args=>args_1,:body=>body_1 }])
(_result_1)  
end
def expression()
 _result_1 = ((nil))
_result_1 = ((it=(choice());return FAIL if it==FAIL;it))
(_result_1)  
end
def choice()
 ary_1 = ((nil))
_result_1 = ((nil))
ary_1 = ((it=(listOf('sequence',proc{_result_1 = ((it=(token("|"));return FAIL if it==FAIL;it))
(_result_1) }));return FAIL if it==FAIL;it))
_result_1 = (Or[ {:ary=>ary_1 }])
(_result_1)  
end
def sequence()
 autovar_1 = ((nil))
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
_result_1 = (And[ {:ary=>ary_1 }])
(_result_1)  
end
def prefixed()
 to_1 = ((nil))
from_1 = ((nil))
expr_1 = ((nil))
m_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(token("~"));next FAIL if it==FAIL;it)
m_1 = ((it=(modifier());next FAIL if it==FAIL;it))
_result_1 = ((Not[m_1])) },proc{(it=(token("&"));next FAIL if it==FAIL;it)
expr_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
_result_1 = ((_Pred(expr_1))) },proc{(it=(token("&"));next FAIL if it==FAIL;it)
(it=(_not{expr_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
m_1 = ((it=(modifier());next FAIL if it==FAIL;it))
_result_1 = ((Lookahead[m_1])) },proc{from_1 = ((it=(modifier());next FAIL if it==FAIL;it))
(it=(token("=>"));next FAIL if it==FAIL;it)
to_1 = ((it=(modifier());next FAIL if it==FAIL;it))
_result_1 = ((_Pass(from_1,to_1))) },proc{_result_1 = ((it=(modifier());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def modifier()
 autovar_1 = ((nil))
c_1 = ((nil))
()
t_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{t_1 = ((it=(term());next FAIL if it==FAIL;it))
t_1 = ((it=(optIter(t_1));next FAIL if it==FAIL;it))
()
while true
autovar_2=@input;r=(it=(_not{(it=(space());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
t_1 = ((it=(binding(t_1));break FAIL if it==FAIL;it)) 
 break FAIL if r==FAIL
end;@input=autovar_2
()
_result_1 = ((t_1)) },proc{_result_1 = ((it=(binding(Apply["anything"]));next FAIL if it==FAIL;it))},proc{(it=(token("#"));next FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_3=@input;r=(it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(_dot_());break FAIL if it==FAIL;it))
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
 e_1 = ((nil))
append_1 = ((nil))
name_1 = ((nil))
expr_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{expr_1 = ((exp_1))
(it=(token(":"));next FAIL if it==FAIL;it)
(it=(_or(proc{name_1 = ((it=(key());next FAIL if it==FAIL;it))},proc{name_1 = ((it=(name());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
append_1 = ((true)) },proc{(it=(empty());next FAIL if it==FAIL;it)
append_1 = ((false)) }));next FAIL if it==FAIL;it)
_result_1 = ((_Set(name_1,expr_1,append_1))) },proc{(it=(token(":"));next FAIL if it==FAIL;it)
e_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
_result_1 = ((And[_Set("it",exp_1) , _Act(e_1) ])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def term()
 autovar_1 = ((nil))
it_1 = ((nil))
autovar_2 = ((nil))
autovar_3 = ((nil))
s_1 = ((nil))
x_1 = ((nil))
expr_1 = ((nil))
cls_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(_or(proc{cls_1 = ((it=(className());next FAIL if it==FAIL;it))},proc{(it=(token(""));next FAIL if it==FAIL;it)
cls_1 = (("Object")) }));next FAIL if it==FAIL;it)
(it=(seq("["));next FAIL if it==FAIL;it)
expr_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token("]"));next FAIL if it==FAIL;it)
_result_1 = ((And[Apply["clas",cls_1], _Enter(expr_1)])) },proc{cls_1 = ((it=(className());next FAIL if it==FAIL;it))
_result_1 = ((Apply["is_a",cls_1])) },proc{(it=(token("nested"));next FAIL if it==FAIL;it)
(it=(seq("("));next FAIL if it==FAIL;it)
expr_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
_result_1 = ((Nested[expr_1])) },proc{_result_1 = ((it=(application());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(key());next FAIL if it==FAIL;it))},proc{(it=(_or(proc{(it=(token("->"));next FAIL if it==FAIL;it)
x_1 = ((it=(atomicHostExpr());next FAIL if it==FAIL;it)) },proc{(it=(token(""));next FAIL if it==FAIL;it)
x_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it)) }));next FAIL if it==FAIL;it)
_result_1 = ((_Act(x_1))) },proc{(it=(token("\""));next FAIL if it==FAIL;it)
autovar_3 = (([]))
while true
autovar_4=@input;r=(it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(eChar());break FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it) 
 break FAIL if r==FAIL
end;@input=autovar_4
s_1 = ((autovar_3))
(it=(seq("\""));next FAIL if it==FAIL;it)
_result_1 = ((Apply["token" ,quote(s_1)])) },proc{(it=(token("'"));next FAIL if it==FAIL;it)
autovar_2 = (([]))
while true
autovar_5=@input;r=(it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(eChar());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it) 
 break FAIL if r==FAIL
end;@input=autovar_5
s_1 = ((autovar_2))
(it=(seq("\'"));next FAIL if it==FAIL;it)
_result_1 = ((Apply["seq",quote(s_1)])) },proc{it_1 = ((it=(number());next FAIL if it==FAIL;it))
_result_1 = ((Apply["exactly",it_1])) },proc{(it=(token("<"));next FAIL if it==FAIL;it)
autovar_1 = (([]))
(it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(eChar());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
while true
autovar_6=@input;r=(it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(eChar());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
end;@input=autovar_6
x_1 = ((autovar_1))
(it=(token(">"));next FAIL if it==FAIL;it)
_result_1 = ((Apply["regch","/[#{x_1}]/"])) },proc{(it=(token("("));next FAIL if it==FAIL;it)
x_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")[]"));next FAIL if it==FAIL;it)
_result_1 = ((it=(collect(x_1));next FAIL if it==FAIL;it)) },proc{(it=(token("("));next FAIL if it==FAIL;it)
x_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
_result_1 = ((x_1)) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def application()
 arg_1 = ((nil))
rule_1 = ((nil))
klas_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{klas_1 = ((it=(name());next FAIL if it==FAIL;it))
(it=(seq("::"));next FAIL if it==FAIL;it)
rule_1 = ((it=(name());next FAIL if it==FAIL;it))
arg_1 = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
_result_1 = (Foreign[ {:klas=>klas_1,:rule=>rule_1,:arg=>arg_1 }]) },proc{rule_1 = ((it=(name());next FAIL if it==FAIL;it))
arg_1 = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
_result_1 = ((Apply[rule_1,arg_1])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def key()
 args_1 = ((nil))
name_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_1 = ((it=(className());next FAIL if it==FAIL;it))
args_1 = ((it=(argsOpt('[',']'));next FAIL if it==FAIL;it))
_result_1 = (Resul[ {:name=>name_1,:args=>args_1 }]) },proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_1 = ((it=(name());next FAIL if it==FAIL;it))
_result_1 = (Key[ {:name=>name_1 }]) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def collect(ors_1)
 _result_1 = ((nil))
_result_1 = ((a=autovar; And[Or[{:ary=>ors_1.ary.map{|ands| And[{:ary=>ands.ary.map{|expr| _Append(a,expr)}}]}}],_Act(a)]))
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
 _result_1 = ((nil))
_result_1 = ((it=(argsOpt('(',')'));return FAIL if it==FAIL;it))
(_result_1)  
end
def nr()
 _result_1 = ((nil))
_result_1 = ((it=(_not{(it=(name());next FAIL if it==FAIL;it)
(it=(ruleargs());next FAIL if it==FAIL;it)
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
 k_1 = ((nil))
autovar_1 = ((nil))
autovar_2 = ((nil))
n_1 = ((nil))
autovar_3 = ((nil))
autovar_4 = ((nil))
s_1 = ((nil))
e_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(seq("`"));next FAIL if it==FAIL;it)
e_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(seq("`"));next FAIL if it==FAIL;it)
_result_1 = ((Exp[_body(e_1)])) },proc{_result_1 = ((it=(_args('(',')'));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(_args('[',']'));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(_args('{','}'));next FAIL if it==FAIL;it))},proc{(it=(seq("\""));next FAIL if it==FAIL;it)
autovar_4 = (([]))
while true
autovar_5=@input;r=(it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(eChar());break FAIL if it==FAIL;it))
 autovar_4||=[];_append(autovar_4,it) 
 break FAIL if r==FAIL
end;@input=autovar_5
s_1 = ((autovar_4))
(it=(seq("\""));next FAIL if it==FAIL;it)
_result_1 = ((Strin[['"']+ s_1+['"']])) },proc{(it=(seq("\'"));next FAIL if it==FAIL;it)
autovar_3 = (([]))
while true
autovar_6=@input;r=(it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(eChar());break FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it) 
 break FAIL if r==FAIL
end;@input=autovar_6
s_1 = ((autovar_3))
(it=(seq("\'"));next FAIL if it==FAIL;it)
_result_1 = ((Strin[['\'']+s_1+['\'']])) },proc{(it=(_or(proc{it=((it=(regch(/[$.:]/));next FAIL if it==FAIL;it))
 n_1||=[];_append(n_1,it)},proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
autovar_2 = (([]))
it=((it=(regch(/[a-zA-Z_]/));next FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
while true
autovar_7=@input;r=it=((it=(regch(/[a-zA-Z_]/));break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_7
it=((autovar_2))
 n_1||=[];_append(n_1,it)
_result_1 = ((n_1*"")) },proc{(it=(seq("@@"));next FAIL if it==FAIL;it)
autovar_1 = (([]))
it=((it=(regch(/[a-zA-Z_]/));next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
while true
autovar_8=@input;r=it=((it=(regch(/[a-zA-Z_]/));break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_8
it=((autovar_1))
 n_1||=[];_append(n_1,it)
_result_1 = ((Local[n_1*""])) },proc{k_1 = ((it=(key());next FAIL if it==FAIL;it))
_result_1 = ((Key[k_1] )) },proc{_result_1 = ((it=(regch(/[^`{}()'"\[\]]/));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def nameFirst()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(regch(/[_$.^]/));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(letter());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def nameRest()
 _result_1 = ((nil))
(it=(_or(proc{_result_1 = ((it=(nameFirst());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(digit());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def className()
 autovar_1 = ((nil))
autovar_2 = ((nil))
it_1 = ((nil))
()
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
 autovar_1 = ((nil))
autovar_2 = ((nil))
it_1 = ((nil))
()
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
autovar_2 = ((nil))
s_1 = ((nil))
_result_1 = ((nil))
autovar_2 = (([]))
while true
autovar_3=@input;r=(it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(_dot_());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it) 
 break FAIL if r==FAIL
end;@input=autovar_3
s_1 = ((autovar_2))
autovar_1 = (("{#{s_1*""}}"))
(it=(_pass(autovar_1){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{_result_1 = ((it=(inlineHostExpr());return FAIL if it==FAIL;it))});return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(_result_1)  
end

end

class AmethystOptimizer < Amethyst
def itrans()
 autovar_1 = ((nil))
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
 var_1 = ((nil))
autovar_1 = ((nil))
to_1 = ((nil))
autovar_2 = ((nil))
autovar_3 = ((nil))
autovar_4 = ((nil))
autovar_5 = ((nil))
klas_1 = ((nil))
vars_1 = ((nil))
autovar_6 = ((nil))
autovar_7 = ((nil))
pred_1 = ((nil))
append_1 = ((nil))
expr_1 = ((nil))
autovar_8 = ((nil))
autovar_9 = ((nil))
o_1 = ((nil))
autovar_10 = ((nil))
autovar_11 = ((nil))
autovar_12 = ((nil))
ary_1 = ((nil))
locals_1 = ((nil))
body_1 = ((nil))
autovar_13 = ((nil))
args_1 = ((nil))
autovar_14 = ((nil))
rules_1 = ((nil))
autovar_15 = ((nil))
parent_1 = ((nil))
name_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
parent_1 = ( _key(:parent))
autovar_15 = ( _key(:rules))
(it=(_pass(autovar_15){rules_1 = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Grammar[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1 }]) },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_14 = ( _key(:args))
(it=(_pass(autovar_14){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_13 = ( _key(:body))
(it=(_pass(autovar_13){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ( _key(:locals)) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }]) },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
_result_1 = (Enter[ {:ary=>ary_1 }]) },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{autovar_12 = (([]))
while true
autovar_16=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_12||=[];_append(autovar_12,it)
 break FAIL if r==FAIL
end;@input=autovar_16
ary_1 = ((autovar_12)) });next FAIL if it==FAIL;it)
_result_1 = (Or[ {:ary=>ary_1 }]) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{autovar_11 = (([]))
while true
autovar_17=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_11||=[];_append(autovar_11,it)
 break FAIL if r==FAIL
end;@input=autovar_17
ary_1 = ((autovar_11)) });next FAIL if it==FAIL;it)
_result_1 = (And[ {:ary=>ary_1 }]) },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
_result_1 = (Not[ {:ary=>ary_1 }]) },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
_result_1 = (Lookahead[ {:ary=>ary_1 }]) },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{autovar_10 = (([]))
while true
autovar_18=@input;r=it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_10||=[];_append(autovar_10,it)
 break FAIL if r==FAIL
end;@input=autovar_18
ary_1 = ((autovar_10)) });next FAIL if it==FAIL;it)
_result_1 = (Comment[ {:ary=>ary_1 }]) },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
o_1 = ( _key(:o)) });next FAIL if it==FAIL;it)
_result_1 = (Many[ {:ary=>ary_1,:o=>o_1 }]) },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(anything());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
it=((it=(args());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it) });next FAIL if it==FAIL;it)
_result_1 = (Apply[ {:ary=>ary_1 }]) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{autovar_9 = ( _key(:name))
(it=(_pass(autovar_9){name_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_8 = ( _key(:expr))
(it=(_pass(autovar_8){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( _key(:append)) });next FAIL if it==FAIL;it)
_result_1 = (Set[ {:name=>name_1,:expr=>expr_1,:append=>append_1 }]) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = ((it=(args());next FAIL if it==FAIL;it))
pred_1 = ( _key(:pred)) });next FAIL if it==FAIL;it)
_result_1 = (Act[ {:ary=>ary_1,:pred=>pred_1 }]) },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_7 = ( _key(:args))
(it=(_pass(autovar_7){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_6 = ( _key(:vars))
(it=(_pass(autovar_6){vars_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Resul[ {:name=>name_1,:args=>args_1,:vars=>vars_1 }]) },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas_1 = ( _key(:klas))
autovar_5 = ( _key(:rule))
(it=(_pass(autovar_5){(it=(rule());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_4 = ( _key(:args))
(it=(_pass(autovar_4){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Foreign[ {:klas=>klas_1,:args=>args_1 }]) },proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{autovar_3 = (([]))
while true
autovar_19=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)
 break FAIL if r==FAIL
end;@input=autovar_19
ary_1 = ((autovar_3)) });next FAIL if it==FAIL;it)
_result_1 = (Args[ {:ary=>ary_1 }]) },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))});next FAIL if it==FAIL;it)
_result_1 = (Key[ {:name=>name_1 }]) },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{autovar_2 = ( _key(:to))
(it=(_pass(autovar_2){to_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_1 = ( _key(:var))
(it=(_pass(autovar_1){var_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Pass[ {:to=>to_1,:var=>var_1 }]) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def transfn()
 _result_1 = ((nil))
_result_1 = ((it=(trans());return FAIL if it==FAIL;it))
(_result_1)  
end
def transs()
 autovar_1 = ((nil))
t_1 = ((nil))
_result_1 = ((nil))
(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_2
t_1 = ((autovar_1)) });return FAIL if it==FAIL;it)
_result_1 = ((t_1))
(_result_1)  
end
def args()
 autovar_1 = ((nil))
autovar_2 = ((nil))
a_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_3
a_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1)) },proc{autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
_result_1 = ((autovar_1)) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 autovar_1 = ((nil))
autovar_2 = ((nil))
ary_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_3
ary_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = (Args[ {:ary=>ary_1 }]) },proc{(it=(clas(Strin));next FAIL if it==FAIL;it)
(it=(_enter{autovar_1 = (([]))
while true
autovar_4=@input;r=(it=(_or(proc{it=((it=(char());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)},proc{it=((it=(arg());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_4
ary_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
_result_1 = (Strin[ {:ary=>ary_1 }]) },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(transfn());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
_result_1 = (Exp[ {:ary=>ary_1 }]) },proc{_result_1 = ((it=(anything());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end


class AmethystVisitor < Amethyst
def itrans()
 autovar_1 = ((nil))
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
 var_1 = ((nil))
autovar_1 = ((nil))
to_1 = ((nil))
autovar_2 = ((nil))
autovar_3 = ((nil))
autovar_4 = ((nil))
autovar_5 = ((nil))
klas_1 = ((nil))
vars_1 = ((nil))
autovar_6 = ((nil))
autovar_7 = ((nil))
pred_1 = ((nil))
append_1 = ((nil))
expr_1 = ((nil))
autovar_8 = ((nil))
autovar_9 = ((nil))
o_1 = ((nil))
autovar_10 = ((nil))
autovar_11 = ((nil))
autovar_12 = ((nil))
ary_1 = ((nil))
locals_1 = ((nil))
body_1 = ((nil))
autovar_13 = ((nil))
args_1 = ((nil))
autovar_14 = ((nil))
autovar_15 = ((nil))
rules_1 = ((nil))
autovar_16 = ((nil))
parent_1 = ((nil))
name_1 = ((nil))
v_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
parent_1 = ( _key(:parent))
autovar_16 = ( _key(:rules))
(it=(_pass(autovar_16){(it=(clas(Object));next FAIL if it==FAIL;it)
(it=(_enter{autovar_15 = (([]))
while true
autovar_17=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_15||=[];_append(autovar_15,it)
 break FAIL if r==FAIL
end;@input=autovar_17
rules_1 = ((autovar_15)) });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
v_1 = (Grammar[ {:v=>v_1,:name=>name_1,:parent=>parent_1,:rules=>rules_1 }]) },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_14 = ( _key(:args))
(it=(_pass(autovar_14){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_13 = ( _key(:body))
(it=(_pass(autovar_13){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ( _key(:locals)) });next FAIL if it==FAIL;it)
v_1 = (Rule[ {:v=>v_1,:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }]) },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
v_1 = (Enter[ {:v=>v_1,:ary=>ary_1 }]) },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{autovar_12 = (([]))
while true
autovar_18=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_12||=[];_append(autovar_12,it)
 break FAIL if r==FAIL
end;@input=autovar_18
ary_1 = ((autovar_12)) });next FAIL if it==FAIL;it)
v_1 = (Or[ {:v=>v_1,:ary=>ary_1 }]) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{autovar_11 = (([]))
while true
autovar_19=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_11||=[];_append(autovar_11,it)
 break FAIL if r==FAIL
end;@input=autovar_19
ary_1 = ((autovar_11)) });next FAIL if it==FAIL;it)
v_1 = (And[ {:v=>v_1,:ary=>ary_1 }]) },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
v_1 = (Not[ {:v=>v_1,:ary=>ary_1 }]) },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
v_1 = (Lookahead[ {:v=>v_1,:ary=>ary_1 }]) },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{autovar_10 = (([]))
while true
autovar_20=@input;r=it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_10||=[];_append(autovar_10,it)
 break FAIL if r==FAIL
end;@input=autovar_20
ary_1 = ((autovar_10)) });next FAIL if it==FAIL;it)
v_1 = (Comment[ {:v=>v_1,:ary=>ary_1 }]) },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
o_1 = ( _key(:o)) });next FAIL if it==FAIL;it)
v_1 = (Many[ {:v=>v_1,:ary=>ary_1,:o=>o_1 }]) },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(anything());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
it=((it=(args());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it) });next FAIL if it==FAIL;it)
v_1 = (Apply[ {:v=>v_1,:ary=>ary_1 }]) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{autovar_9 = ( _key(:name))
(it=(_pass(autovar_9){name_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_8 = ( _key(:expr))
(it=(_pass(autovar_8){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( _key(:append)) });next FAIL if it==FAIL;it)
v_1 = (Set[ {:v=>v_1,:name=>name_1,:expr=>expr_1,:append=>append_1 }]) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = ((it=(args());next FAIL if it==FAIL;it))
pred_1 = ( _key(:pred)) });next FAIL if it==FAIL;it)
v_1 = (Act[ {:v=>v_1,:ary=>ary_1,:pred=>pred_1 }]) },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_7 = ( _key(:args))
(it=(_pass(autovar_7){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_6 = ( _key(:vars))
(it=(_pass(autovar_6){vars_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
v_1 = (Resul[ {:v=>v_1,:name=>name_1,:args=>args_1,:vars=>vars_1 }]) },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas_1 = ( _key(:klas))
autovar_5 = ( _key(:rule))
(it=(_pass(autovar_5){(it=(rule());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_4 = ( _key(:args))
(it=(_pass(autovar_4){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
v_1 = (Foreign[ {:v=>v_1,:klas=>klas_1,:args=>args_1 }]) },proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{autovar_3 = (([]))
while true
autovar_21=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)
 break FAIL if r==FAIL
end;@input=autovar_21
ary_1 = ((autovar_3)) });next FAIL if it==FAIL;it)
v_1 = (Args[ {:v=>v_1,:ary=>ary_1 }]) },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))});next FAIL if it==FAIL;it)
v_1 = (Key[ {:v=>v_1,:name=>name_1 }]) },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{autovar_2 = ( _key(:to))
(it=(_pass(autovar_2){to_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_1 = ( _key(:var))
(it=(_pass(autovar_1){var_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
v_1 = (Pass[ {:v=>v_1,:to=>to_1,:var=>var_1 }]) }));return FAIL if it==FAIL;it)
(it=(_or(proc{_result_1 = ((it=(visit(v_1));next FAIL if it==FAIL;it))},proc{_result_1 = ((v_1))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def transs()
 autovar_1 = ((nil))
autovar_2 = ((nil))
a_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_3
a_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1)) },proc{autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
_result_1 = ((autovar_1)) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 ()
()
()
()
_result_1 = ((nil))
(it=(_or(proc{(it=(is_a(A));next FAIL if it==FAIL;it)},proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{()
while true
autovar_1=@input;r=(it=(arg());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_1
() });next FAIL if it==FAIL;it)
() },proc{(it=(clas(Strin));next FAIL if it==FAIL;it)
(it=(_enter{()
while true
autovar_2=@input;r=(it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(arg());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_2
() });next FAIL if it==FAIL;it)
() },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
() },proc{(it=(anything());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it)
_result_1 = ((it=(visit(v));return FAIL if it==FAIL;it))
(_result_1)  
end

end

class AmethystOptimizer2 < AmethystOptimizer
def trans()
 autovar_1 = ((nil))
autovar_2 = ((nil))
ary_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_3
ary_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
(ary_1=ary_1.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten)
(it=(_or(proc{(it=((ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
_result_1 = ((ary_1[0])) },proc{_result_1 = (Or[ {:ary=>ary_1 }])}));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
ary_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
(ary_1=ary_1.map{|a| (a.is_a?(And)) ? a.ary : a}.flatten)
(it=(_or(proc{(it=((ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
_result_1 = ((ary_1[0])) },proc{_result_1 = (And[ {:ary=>ary_1 }])}));next FAIL if it==FAIL;it) },proc{_result_1 = ((super))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end



class Amethyst_And_Or_Optimizer < AmethystVisitor
def visit()
 autovar_1 = ((nil))
autovar_2 = ((nil))
ary_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(_dot_());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_3
ary_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
(ary_1=ary_1.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten)
(it=(_or(proc{(it=((ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
_result_1 = ((ary_1[0])) },proc{_result_1 = (Or[ {:ary=>ary_1 }])}));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(_dot_());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
ary_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
(ary_1=ary_1.map{|a| (a.is_a?(And)) ? a.ary : a}.flatten)
(it=(_or(proc{(it=((ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
_result_1 = ((ary_1[0])) },proc{_result_1 = (And[ {:ary=>ary_1 }])}));next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)
(_result_1)  
end

end

class Detect_Variables < AmethystOptimizer
def trans()
 append_1 = ((nil))
expr_1 = ((nil))
autovar_1 = ((nil))
vars_1 = ((nil))
autovar_2 = ((nil))
ary_1 = ((nil))
()
r_1 = ((nil))
l_1 = ((nil))
locals_1 = ((nil))
body_1 = ((nil))
autovar_3 = ((nil))
args_1 = ((nil))
autovar_4 = ((nil))
name_1 = ((nil))
argnames_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{argnames_1 = ((@argnames=[]))
(@locals=[])
name_1 = ( _key(:name))
autovar_4 = ( _key(:args))
(it=(_pass(autovar_4){(it=(clas(Object));next FAIL if it==FAIL;it)
(it=(_enter{args_1 = ((it=(addargs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
autovar_3 = ( _key(:body))
(it=(_pass(autovar_3){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ((@locals.uniq))
(locals_1.each{|l_1| body_1=And[Set[{:name=>l_1,:expr=>Act["nil"] }],body_1] };) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:argnames=>argnames_1,:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }]) },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{l_1 = ((@locals))
r_1 = (([]))
()
while true
autovar_5=@input;r=(@locals=l_1.clone)
it=((it=(trans());break FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
(r_1=(r_1+@locals).uniq) 
 break FAIL if r==FAIL
end;@input=autovar_5
()
(@locals=r_1) });next FAIL if it==FAIL;it)
_result_1 = (Or[ {:l=>l_1,:r=>r_1,:ary=>ary_1 }]) },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_2 = ( _key(:args))
(it=(_pass(autovar_2){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_1 = ((@locals.select{|a| a[0]!= "autovar"}.uniq-["it","_result"])) });next FAIL if it==FAIL;it)
_result_1 = (Resul[ {:name=>name_1,:args=>args_1,:vars=>vars_1 }]) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
(@locals<<name_1)
autovar_1 = ( _key(:expr))
(it=(_pass(autovar_1){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( _key(:append)) });next FAIL if it==FAIL;it)
_result_1 = (Set[ {:name=>name_1,:expr=>expr_1,:append=>append_1 }]) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def addargs()
 result_1 = ((nil))
name_1 = ((nil))
()
_result_1 = ((nil))
()
while true
autovar_1=@input;r=(it=(clas(Args));break FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());break FAIL if it==FAIL;it))
it=((@argnames<<name_1;_Variable(name_1) ))
 result_1||=[];_append(result_1,it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
end;@input=autovar_1
()
_result_1 = ((result_1))
(_result_1)  
end

end


class Analyze_Variables < AmethystOptimizer
def trans()
 body_1 = ((nil))
autovar_1 = ((nil))
args_1 = ((nil))
locals_1 = ((nil))
name_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
locals_1 = ( _key(:locals))
(@variables={} ;(locals_1+ _key(:argnames)).each{|v| @variables[v]=true})
args_1 = ( _key(:args))
autovar_1 = ( _key(:body))
(it=(_pass(autovar_1){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:name=>name_1,:locals=>locals_1,:args=>args_1,:body=>body_1 }]) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 name_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{name_1 = ((it=(char());next FAIL if it==FAIL;it))
(it=((@variables[name_1])||FAIL);next FAIL if it==FAIL;it)
_result_1 = ((_Variable(name_1))) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end

class Dead_Code_Detector < AmethystOptimizer
def trans()
 autovar_1 = ((nil))
autovar_2 = ((nil))
autovar_3 = ((nil))
v_1 = ((nil))
this_1 = ((nil))
autovar_4 = ((nil))
autovar_5 = ((nil))
var_1 = ((nil))
reachable_1 = ((nil))
locals_1 = ((nil))
body_1 = ((nil))
autovar_6 = ((nil))
args_1 = ((nil))
autovar_7 = ((nil))
name_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
(@edges=Oriented_Graph.new ; @marked=[_Variable("_result")])
autovar_7 = ( _key(:args))
(it=(_pass(autovar_7){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_6 = ( _key(:body))
(it=(_pass(autovar_6){(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
body_1 = ( _key(:body))
locals_1 = ( _key(:locals))
reachable_1 = ((@edges.reachable(@marked))) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:reachable=>reachable_1 }]) },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());next FAIL if it==FAIL;it))
var_1 = ((it=(vars_in());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((@marked +=var_1)) },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{autovar_5 = ( _key(:var))
(it=(_pass(autovar_5){var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(@marked+=var_1)
autovar_4 = ( _key(:to))
(it=(_pass(autovar_4){_result_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{_result_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{this_1 = ( _key(:this))
(@marked<<this_1 if _key(:pred))
var_1 = ((it=(vars_in());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((var_1.each{|v_1| @edges.add(v_1,this_1); @edges.add(this_1,v_1); @marked<<this_1 if v_1.is_a? Local})) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{v_1 = ( _key(:name))
autovar_3 = ( _key(:expr))
(it=(_pass(autovar_3){(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_2 = ( _key(:expr))
(it=(_pass(autovar_2){var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = ((var_1.each{|w| @edges.add(v_1,w)})) },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{autovar_1 = ( _key(:vars))
(it=(_pass(autovar_1){(it=(clas(Object));next FAIL if it==FAIL;it)
(it=(_enter{var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
v_1 = ( _key(:this)) });next FAIL if it==FAIL;it)
_result_1 = ((var_1.each{|w| @edges.add(v_1,w) })) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def vars_in()
 ()
autovar_1 = ((nil))
()
()
ary_1 = ((nil))
()
_result_1 = ((nil))
(ary_1=[])
()
while true
autovar_4=@input;r=(it=(_or(proc{(it=(clas(Variable));next FAIL if it==FAIL;it)
(it=(_enter{it=( _key(:this))
 ary_1||=[];_append(ary_1,it)
()
while true
autovar_2=@input;r=(it=(_dot_());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_2
() });next FAIL if it==FAIL;it) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{it=( _key(:this))
 ary_1||=[];_append(ary_1,it)
()
while true
autovar_3=@input;r=(it=(_dot_());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_3
() });next FAIL if it==FAIL;it) },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{it=( _key(:this))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{(it=(clas(Strin));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{autovar_1 = ( _key(:name))
(it=(_pass(autovar_1){it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(clas(Local));next FAIL if it==FAIL;it)
(it=(_enter{(it=(anything());next FAIL if it==FAIL;it)
it=( _key(:this))
 ary_1||=[];_append(ary_1,it) });next FAIL if it==FAIL;it) },proc{(it=(anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_4
()
_result_1 = ((ary_1))
(_result_1)  
end

end


class Dead_Code_Deleter < AmethystOptimizer
def trans()
 append_1 = ((nil))
expr_1 = ((nil))
autovar_1 = ((nil))
()
this_1 = ((nil))
locals_1 = ((nil))
body_1 = ((nil))
autovar_2 = ((nil))
args_1 = ((nil))
autovar_3 = ((nil))
it_1 = ((nil))
name_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
it_1 = ( _key(:reachable))
(@reachable=it_1)
autovar_3 = ( _key(:args))
(it=(_pass(autovar_3){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_2 = ( _key(:body))
(it=(_pass(autovar_2){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ( _key(:locals)) });next FAIL if it==FAIL;it)
_result_1 = (Rule[ {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }]) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{this_1 = ( _key(:this))
()
while true
autovar_4=@input;r=(it=(_dot_());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_4
() });next FAIL if it==FAIL;it)
_result_1 = ((@reachable[this_1] ? this_1 : Act[])) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_1 = ( _key(:expr))
(it=(_pass(autovar_1){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( _key(:append)) });next FAIL if it==FAIL;it)
_result_1 = ((@reachable[name_1] ? _Set(name_1,expr_1,append_1) : expr_1)) },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{this_1 = ( _key(:this))});next FAIL if it==FAIL;it)
_result_1 = ((@reachable[this_1] ? this_1 : Act[])) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end


class Constant_Propagator < AmethystOptimizer

end


class Communize_Or < AmethystOptimizer
def trans()
 ary_1 = ((nil))
autovar_1 = ((nil))
rest_1 = ((nil))
fst_1 = ((nil))
()
()
first_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{(it=(_lookahead{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{first_1 = ((it=(trans());next FAIL if it==FAIL;it))
()
while true
autovar_2=@input;r=(it=(_dot_());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_2
() });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
()
while true
autovar_4=@input;r=(it=(clas(And));break FAIL if it==FAIL;it)
(it=(_enter{fst_1 = ((it=(trans());break FAIL if it==FAIL;it))
(it=((first_1.isomorphic(fst_1))||FAIL);break FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_3=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_3
rest_1 = ((autovar_1))
it=((And[{:ary=>rest_1}]))
 ary_1||=[];_append(ary_1,it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
end;@input=autovar_4
() });next FAIL if it==FAIL;it)
_result_1 = ((And[first_1 ,Or[{:ary=>ary_1}] ])) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end


class Move_Assignments < AmethystOptimizer
def trans()
 autovar_1 = ((nil))
append_1 = ((nil))
expr_1 = ((nil))
autovar_2 = ((nil))
name_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_2 = ( _key(:expr))
(it=(_pass(autovar_2){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( _key(:append))
autovar_1 = ((expr_1))
(it=(_pass(autovar_1){_result_1 = ((it=(move(append_1,name_1));next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def move(append_1,name_1)
 it_1 = ((nil))
enter_1 = ((nil))
to_1 = ((nil))
autovar_1 = ((nil))
var_1 = ((nil))
autovar_2 = ((nil))
el_1 = ((nil))
autovar_3 = ((nil))
autovar_4 = ((nil))
ary_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{autovar_4 = (([]))
while true
autovar_5=@input;r=it=((it=(move(append_1,name_1));break FAIL if it==FAIL;it))
 autovar_4||=[];_append(autovar_4,it)
 break FAIL if r==FAIL
end;@input=autovar_5
ary_1 = ((autovar_4)) });next FAIL if it==FAIL;it)
_result_1 = (Or[ {:ary=>ary_1 }]) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{autovar_3 = (([]))
while true
autovar_6=@input;r=el_1 = ((it=(anything());break FAIL if it==FAIL;it))
(it=(_or(proc{(it=(_lookahead{(it=(eof());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_2 = ((el_1))
(it=(_pass(autovar_2){it=((it=(move(append_1,name_1));next FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)});next FAIL if it==FAIL;it) },proc{it=((el_1))
 autovar_3||=[];_append(autovar_3,it)}));break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
end;@input=autovar_6
ary_1 = ((autovar_3)) });next FAIL if it==FAIL;it)
_result_1 = (And[ {:ary=>ary_1,:el=>el_1 }]) },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(move(append_1,name_1));next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
_result_1 = (Enter[ {:ary=>ary_1 }]) },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{var_1 = ( _key(:var))
autovar_1 = ( _key(:to))
(it=(_pass(autovar_1){to_1 = ((it=(move(append_1,name_1));next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
enter_1 = ( _key(:enter)) });next FAIL if it==FAIL;it)
_result_1 = (Pass[ {:var=>var_1,:to=>to_1,:enter=>enter_1 }]) },proc{it_1 = ((it=(anything());next FAIL if it==FAIL;it))
_result_1 = ((_Set(name_1,it_1,append_1))) }));return FAIL if it==FAIL;it)
(_result_1)  
end

end

def shadow(body,args)
	args.each{|arg|arg=arg[0]; a=autovar; body=And[Set[{:name=>a,:expr=>Act[arg]}],body,Set[{:name=>arg,:expr=>Act[a]}]]}
	body
end

class Inliner < AmethystOptimizer
def inline(rule_1,grammar_1)
 autovar_1 = ((nil))
body_1 = ((nil))
locals_1 = ((nil))
args_1 = ((nil))
name_1 = ((nil))
autovar_2 = ((nil))
_result_1 = ((nil))
autovar_2 = ((rule_1))
(it=(_pass(autovar_2){(it=(clas(Rule));return FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
args_1 = ( _key(:args))
locals_1 = ( _key(:locals))
body_1 = ( _key(:body)) });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(@result=autovar;@name=name_1;@args=args_1;@body=shadow(Set[{:name=>@result,:expr=>body_1}],locals_1.map{|a| Args[a]}) )
autovar_1 = ((grammar_1))
(it=(_pass(autovar_1){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{_result_1 = ((it=(itrans());return FAIL if it==FAIL;it))});return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(_result_1)  
end
def trans()
 autovar_1 = ((nil))
args_1 = ((nil))
name_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());next FAIL if it==FAIL;it))
(it=((name_1==@name)||FAIL);next FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_2
args_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
_result_1 = ((body=@body; args_1.each_index{|i| body=And[Set[{:name=>@args[i][0],:expr=>Act[args_1[i]]}],body] } ; And[shadow(body,@args),Act[@result]])) },proc{_result_1 = ((super))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def inlineit()
 rule_1 = ((nil))
grammar_1 = ((nil))
name_1 = ((nil))
_result_1 = ((nil))
name_1 = ((it=(anything());return FAIL if it==FAIL;it))
grammar_1 = ((it=(anything());return FAIL if it==FAIL;it))
rule_1 = ((it=(getrule(name_1,grammar_1));return FAIL if it==FAIL;it))
_result_1 = ((it=(inline(rule_1,grammar_1));return FAIL if it==FAIL;it))
(_result_1)  
end
def getrule(name_1,grammar_1)
 rule_1 = ((nil))
n_1 = ((nil))
()
autovar_1 = ((nil))
()
autovar_2 = ((nil))
_result_1 = ((nil))
autovar_2 = ((grammar_1))
(it=(_pass(autovar_2){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{()
while true
autovar_4=@input;r=(it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{autovar_1 = ( _key(:rules))
(it=(_pass(autovar_1){(it=(clas(Object));next FAIL if it==FAIL;it)
(it=(_enter{()
while true
autovar_3=@input;r=(it=(clas(Rule));break FAIL if it==FAIL;it)
(it=(_enter{n_1 = ( _key(:name))
(it=(_or(proc{(it=((n_1==name_1)||FAIL);next FAIL if it==FAIL;it)
rule_1 = ( _key(:this)) },proc{(it=(empty());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
end;@input=autovar_3
() });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
end;@input=autovar_4
() });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
_result_1 = ((rule_1))
(_result_1)  
end

end

class AmethystTranslator < Amethyst
def itrans()
 autovar_1 = ((nil))
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
 var_1 = ((nil))
autovar_1 = ((nil))
to_1 = ((nil))
autovar_2 = ((nil))
vars_1 = ((nil))
autovar_3 = ((nil))
append_1 = ((nil))
autovar_4 = ((nil))
autovar_5 = ((nil))
autovar_6 = ((nil))
autovar_7 = ((nil))
klas_1 = ((nil))
o_1 = ((nil))
autovar_8 = ((nil))
()
pred_1 = ((nil))
autovar_9 = ((nil))
t_1 = ((nil))
autovar_10 = ((nil))
ors_1 = ((nil))
expr_1 = ((nil))
autovar_11 = ((nil))
argss_1 = ((nil))
autovar_12 = ((nil))
body_1 = ((nil))
autovar_13 = ((nil))
parent_1 = ((nil))
name_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('return',proc{name_1 = ( _key(:name))
parent_1 = ( _key(:parent))
autovar_13 = ( _key(:rules))
(it=(_pass(autovar_13){_result_1 = (body_1 = ((it=(transs());next FAIL if it==FAIL;it)))});next FAIL if it==FAIL;it)
(_result_1) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = (("class #{name_1} < #{parent_1}\n#{body_1}\nend\n")) },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{(@varhash=Hash.new{|h,k| h[k]={}}  )
name_1 = ( _key(:name))
autovar_12 = ( _key(:args))
(it=(_pass(autovar_12){argss_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_11 = ( _key(:body))
(it=(_pass(autovar_11){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (("def #{name_1}(#{argss_1})\n #{body_1} \nend\n")) },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_enter{#{expr_1}}"));next FAIL if it==FAIL;it)) },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next', proc{autovar_10 = (([]))
while true
autovar_14=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_10||=[];_append(autovar_10,it)
 break FAIL if r==FAIL
end;@input=autovar_14
_result_1 = (ors_1 = ((autovar_10)))
(_result_1) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_or(#{ors_1*","})"));next FAIL if it==FAIL;it)) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{autovar_9 = (([]))
while true
autovar_15=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_9||=[];_append(autovar_9,it)
 break FAIL if r==FAIL
end;@input=autovar_15
t_1 = ((autovar_9)) });next FAIL if it==FAIL;it)
_result_1 = (("#{t_1*"\n"} ")) },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next',proc{_result_1 = (t_1 = ((it=(trans());next FAIL if it==FAIL;it)))
(_result_1) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_not{#{t_1}}"));next FAIL if it==FAIL;it)) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{t_1 = ((it=(args());next FAIL if it==FAIL;it))
pred_1 = ( _key(:pred)) });next FAIL if it==FAIL;it)
_result_1 = ((pred_1 ?  failwrap("(#{t_1})||FAIL") : "(#{t_1})")) },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next',proc{_result_1 = (t_1 = ((it=(trans());next FAIL if it==FAIL;it)))
(_result_1) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_lookahead{#{t_1}}"));next FAIL if it==FAIL;it)) },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{(it=(anything());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = (("")) },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('break', proc{_result_1 = (t_1 = ((it=(trans());next FAIL if it==FAIL;it)))
(_result_1) } ));next FAIL if it==FAIL;it)
autovar_8 = ( _key(:o))
(it=(_pass(autovar_8){o_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (("while true\n#{o_1}=@input;r=#{t_1}\n break FAIL if r==FAIL\nend;@input=#{o_1}")) },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());next FAIL if it==FAIL;it))
argss_1 = ((it=(args());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("#{name_1}(#{argss_1})"));next FAIL if it==FAIL;it)) },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas_1 = ( _key(:klas))
autovar_7 = ( _key(:rule))
(it=(_pass(autovar_7){(it=(rule());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_6 = ( _key(:args))
(it=(_pass(autovar_6){argss_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_foreign(#{klas_1}).#{rule}(#{argss_1})"));next FAIL if it==FAIL;it)) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{autovar_5 = ( _key(:name))
(it=(_pass(autovar_5){name_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_4 = ( _key(:expr))
(it=(_pass(autovar_4){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( _key(:append)) });next FAIL if it==FAIL;it)
_result_1 = ((append_1 ? "it=(#{expr_1})\n #{name_1}||=[];_append(#{name_1},it)" : "#{name_1} = (#{expr_1})")) },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_3 = ( _key(:args))
(it=(_pass(autovar_3){argss_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_1 = ( _key(:vars)) });next FAIL if it==FAIL;it)
_result_1 = (("#{name_1}[#{argss_1} {#{vars_1.map{|l| ":#{l[0]}=>#{l[0]}_#{l.number}" }*","} }]")) },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))});next FAIL if it==FAIL;it)
_result_1 = ((" _key(:#{name_1})")) },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{autovar_2 = ( _key(:to))
(it=(_pass(autovar_2){to_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_1 = ( _key(:var))
(it=(_pass(autovar_1){var_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_pass(#{var_1}){#{to_1}}"));next FAIL if it==FAIL;it)) }));return FAIL if it==FAIL;it)
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
t_1 = ((nil))
_result_1 = ((nil))
(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_2
t_1 = ((autovar_1)) });return FAIL if it==FAIL;it)
_result_1 = ((t_1))
(_result_1)  
end
def args()
 autovar_1 = ((nil))
autovar_2 = ((nil))
a_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_3
a_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1*",")) },proc{autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
a_1 = ((autovar_1))
_result_1 = ((a_1*",")) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 number_1 = ((nil))
name_1 = ((nil))
t_1 = ((nil))
autovar_1 = ((nil))
autovar_2 = ((nil))
a_1 = ((nil))
_result_1 = ((nil))
(it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
end;@input=autovar_3
a_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1*"")) },proc{(it=(clas(Strin));next FAIL if it==FAIL;it)
(it=(_enter{autovar_1 = (([]))
while true
autovar_4=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
end;@input=autovar_4
a_1 = ((autovar_1)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1*"")) },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{t_1 = ((it=(transfn());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
_result_1 = ((t_1)) },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{t_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
_result_1 = ((t_1)) },proc{(it=(clas(Variable));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());next FAIL if it==FAIL;it))
number_1 = ( _key(:number)) });next FAIL if it==FAIL;it)
_result_1 = ((@varhash[name_1][number_1]=@varhash[name_1].size+1 if !@varhash[name_1][number_1]  ; "#{name_1}_#{@varhash[name_1][number_1]}")) },proc{(it=(clas(Local));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
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

