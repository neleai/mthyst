class Amethyst < AmethystCore
def _()
 _result_1 = (nil)
_result_1 = ((it=(space());return FAIL if it==FAIL;it))
_result_1  
end
def _dot_()
 _result_1 = (nil)
_result_1 = ((it=(anything());return FAIL if it==FAIL;it))
_result_1  
end
def regch(regex_1)
 c_1 = (nil)
_result_1 = (nil)
_result_1 = (c_1 = ((it=(char());return FAIL if it==FAIL;it))
(it=((regex_1.match(c_1))||FAIL);return FAIL if it==FAIL;it)
c_1 )
_result_1  
end
def eof()
 _result_1 = (nil)
_result_1 = ((it=(_not{(it=(_dot_());next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it))
_result_1  
end
def empty()
 _result_1 = (nil)
_result_1 = (nil)
_result_1  
end
def char()
 c_1 = (nil)
_result_1 = (nil)
_result_1 = (c_1 = ((it=(_dot_());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
c_1 )
_result_1  
end
def endline()
 _result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(seq("\r\n"));next FAIL if it==FAIL;it)},proc{(it=(seq("\r"));next FAIL if it==FAIL;it)},proc{(it=(seq("\n"));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def space()
 _result_1 = (nil)
_result_1 = ((it=(regch(/[\s\t\r\n\f]/));return FAIL if it==FAIL;it))
_result_1  
end
def spaces()
 autovar_3 = (nil)
_result_1 = (nil)
_result_1 = (autovar_3 = ([])
while true
autovar_4=@input;r=it=((it=(space());break FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)
 break FAIL if r==FAIL
end;@input=autovar_4
autovar_3 )
_result_1  
end
def _()
 _result_1 = (nil)
_result_1 = ((it=(space());return FAIL if it==FAIL;it))
_result_1  
end
def digit()
 _result_1 = (nil)
_result_1 = ((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
_result_1  
end
def lower()
 _result_1 = (nil)
_result_1 = ((it=(regch(/[a-z]/));return FAIL if it==FAIL;it))
_result_1  
end
def upper()
 _result_1 = (nil)
_result_1 = ((it=(regch(/[A-Z]/));return FAIL if it==FAIL;it))
_result_1  
end
def letter()
 _result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(lower());next FAIL if it==FAIL;it)},proc{(it=(upper());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def letterOrDigit()
 _result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(letter());next FAIL if it==FAIL;it)},proc{(it=(digit());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def alpha()
 _result_1 = (nil)
_result_1 = ((it=(letter());return FAIL if it==FAIL;it))
_result_1  
end
def alnum()
 _result_1 = (nil)
_result_1 = ((it=(letterOrDigit());return FAIL if it==FAIL;it))
_result_1  
end
def xdigit()
 _result_1 = (nil)
_result_1 = ((it=(regch(/[0-9a-fA-F]/));return FAIL if it==FAIL;it))
_result_1  
end
def word()
 _result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(alpha());next FAIL if it==FAIL;it)},proc{(it=(seq("_"));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def listOf(rule_1,delim_1)
 autovar_7 = (nil)
f_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{it=((it=(apply(rule_1));next FAIL if it==FAIL;it))
 f_1||=[];_append(f_1,it)
it=(autovar_7 = ([])
while true
autovar_8=@input;r=it=((it=(apply(delim_1));break FAIL if it==FAIL;it)
(it=(apply(rule_1));break FAIL if it==FAIL;it) )
 autovar_7||=[];_append(autovar_7,it)
 break FAIL if r==FAIL
end;@input=autovar_8
autovar_7 )
 f_1||=[];_append(f_1,it)
f_1 },proc{(it=(empty());next FAIL if it==FAIL;it)
[] }));return FAIL if it==FAIL;it))
_result_1  
end
def exactly(wanted_1)
 got_1 = (nil)
_result_1 = (nil)
_result_1 = (got_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((wanted_1 == got_1)||FAIL);return FAIL if it==FAIL;it)
wanted_1 )
_result_1  
end
def _true()
 _result_1 = (nil)
_result_1 = ((it=(exactly(true));return FAIL if it==FAIL;it))
_result_1  
end
def _false()
 _result_1 = (nil)
_result_1 = ((it=(exactly(false));return FAIL if it==FAIL;it))
_result_1  
end
def clas(cls_1)
 _result_1 = (nil)
_result_1 = ((it=((@input.item.is_a?(cls_1))||FAIL);return FAIL if it==FAIL;it))
_result_1  
end
def is_a(cls_1)
 _result_1 = (nil)
_result_1 = ((it=((@input.src.is_a?(cls_1))||FAIL);return FAIL if it==FAIL;it))
_result_1  
end
def token(s_1)
 _result_1 = (nil)
_result_1 = ((it=(spaces());return FAIL if it==FAIL;it)
(it=(seq(s_1));return FAIL if it==FAIL;it) )
_result_1  
end
def many1(s_1)
 autovar_11 = (nil)
a_1 = (nil)
_result_1 = (nil)
_result_1 = (it=((it=(apply(s_1));return FAIL if it==FAIL;it))
 a_1||=[];_append(a_1,it)
it=(autovar_11 = ([])
while true
autovar_12=@input;r=it=((it=(apply(s_1));break FAIL if it==FAIL;it))
 autovar_11||=[];_append(autovar_11,it)
 break FAIL if r==FAIL
end;@input=autovar_12
autovar_11 )
 a_1||=[];_append(a_1,it) )
_result_1  
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
    :ExpKey,
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
    [:Grammar,:name,:parent,:rules]
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

$varhash=Hash.new{|h,k| h[k]=Variable[{:ary=>[k],:number=>1}]}
def _Variable(name)
 $varhash[name]
end
class AmethystParser < Amethyst
def igrammar()
 autovar_17 = (nil)
it_1 = (nil)
autovar_19 = (nil)
a_1 = (nil)
_result_1 = (nil)
_result_1 = (a_1 = (autovar_19 = ([])
while true
autovar_20=@input;r=it=((it=(_or(proc{it_1 = (autovar_17 = ([])
it=((it=(_not{(it=(seq("amethyst"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(_dot_());next FAIL if it==FAIL;it) )
 autovar_17||=[];_append(autovar_17,it)
while true
autovar_18=@input;r=it=((it=(_not{(it=(seq("amethyst"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 autovar_17||=[];_append(autovar_17,it)
 break FAIL if r==FAIL
end;@input=autovar_18
autovar_17 )
it_1*"" },proc{(it=(grammar());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 autovar_19||=[];_append(autovar_19,it)
 break FAIL if r==FAIL
end;@input=autovar_20
autovar_19 )
a_1 )
_result_1  
end
def grammar()
 autovar_23 = (nil)
rules_1 = (nil)
parent_1 = (nil)
name_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(token("amethyst"));return FAIL if it==FAIL;it)
name_1 = ((it=(name());return FAIL if it==FAIL;it))
(it=(_or(proc{(it=(token("<"));next FAIL if it==FAIL;it)
parent_1 = ((it=(name());next FAIL if it==FAIL;it)) },proc{(it=(empty());next FAIL if it==FAIL;it)
parent_1="Amethyst" }));return FAIL if it==FAIL;it)
(it=(token("{"));return FAIL if it==FAIL;it)
rules_1 = (autovar_23 = ([])
while true
autovar_24=@input;r=it=((it=(rule());break FAIL if it==FAIL;it))
 autovar_23||=[];_append(autovar_23,it)
 break FAIL if r==FAIL
end;@input=autovar_24
autovar_23 )
(it=(token("}"));return FAIL if it==FAIL;it)
Grammar[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1 }] )
_result_1  
end
def rule()
 body_1 = (nil)
args_1 = (nil)
name_1 = (nil)
_result_1 = (nil)
_result_1 = (name_1 = ((it=(name());return FAIL if it==FAIL;it))
args_1 = ((it=(ruleargs());return FAIL if it==FAIL;it))
(it=(token("="));return FAIL if it==FAIL;it)
body_1 = ((it=(expression());return FAIL if it==FAIL;it))
body_1 = (And[_Set("_result",body_1) ,_Act("_result")])
Rule[ {:name=>name_1,:args=>args_1,:body=>body_1 }] )
_result_1  
end
def expression()
 _result_1 = (nil)
_result_1 = ((it=(choice());return FAIL if it==FAIL;it))
_result_1  
end
def choice()
 ary_1 = (nil)
_result_1 = (nil)
_result_1 = (ary_1 = ((it=(listOf('sequence',proc{(it=(token("|"));return FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
Or[ {:ary=>ary_1 }] )
_result_1  
end
def sequence()
 autovar_27 = (nil)
ary_1 = (nil)
_result_1 = (nil)
_result_1 = (ary_1 = (autovar_27 = ([])
while true
autovar_28=@input;r=it=((it=(nr());break FAIL if it==FAIL;it)
(it=(prefixed());break FAIL if it==FAIL;it) )
 autovar_27||=[];_append(autovar_27,it)
 break FAIL if r==FAIL
end;@input=autovar_28
autovar_27 )
And[ {:ary=>ary_1 }] )
_result_1  
end
def prefixed()
 to_1 = (nil)
from_1 = (nil)
expr_1 = (nil)
m_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(token("~"));next FAIL if it==FAIL;it)
m_1 = ((it=(modifier());next FAIL if it==FAIL;it))
Not[m_1] },proc{(it=(token("&"));next FAIL if it==FAIL;it)
expr_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
_Pred(expr_1) },proc{(it=(token("&"));next FAIL if it==FAIL;it)
(it=(_not{expr_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
m_1 = ((it=(modifier());next FAIL if it==FAIL;it))
Lookahead[m_1] },proc{from_1 = ((it=(modifier());next FAIL if it==FAIL;it))
(it=(token("=>"));next FAIL if it==FAIL;it)
to_1 = ((it=(modifier());next FAIL if it==FAIL;it))
_Pass(from_1,to_1) },proc{(it=(modifier());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def modifier()
 autovar_35 = (nil)
c_1 = (nil)
autovar_31 = (nil)
t_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{t_1 = ((it=(term());next FAIL if it==FAIL;it))
t_1 = ((it=(optIter(t_1));next FAIL if it==FAIL;it))
autovar_31 = ([])
while true
autovar_32=@input;r=it=((it=(_not{(it=(space());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
t_1 = ((it=(binding(t_1));break FAIL if it==FAIL;it)) )
 autovar_31||=[];_append(autovar_31,it)
 break FAIL if r==FAIL
end;@input=autovar_32
autovar_31
t_1 },proc{(it=(binding(Apply["anything"]));next FAIL if it==FAIL;it)},proc{(it=(token("#"));next FAIL if it==FAIL;it)
c_1 = (autovar_35 = ([])
while true
autovar_36=@input;r=it=((it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 autovar_35||=[];_append(autovar_35,it)
 break FAIL if r==FAIL
end;@input=autovar_36
autovar_35 )
Comment[c_1] }));return FAIL if it==FAIL;it))
_result_1  
end
def optIter(t_1)
 _result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(token("*"));next FAIL if it==FAIL;it)
_Many(t_1) },proc{(it=(token("+"));next FAIL if it==FAIL;it)
_Many1(t_1) },proc{(it=(token("?"));next FAIL if it==FAIL;it)
Or[t_1,Apply["empty"]] },proc{(it=(empty());next FAIL if it==FAIL;it)
t_1 }));return FAIL if it==FAIL;it))
_result_1  
end
def binding(exp_1)
 e_1 = (nil)
append_1 = (nil)
name_1 = (nil)
expr_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{expr_1 = (exp_1)
(it=(token(":"));next FAIL if it==FAIL;it)
name_1 = ((it=(name());next FAIL if it==FAIL;it))
append_1 = ((it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
true },proc{(it=(empty());next FAIL if it==FAIL;it)
false }));next FAIL if it==FAIL;it))
_Set(name_1,expr_1,append_1) },proc{(it=(token(":"));next FAIL if it==FAIL;it)
e_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
And[_Set("it",exp_1) , _Act(e_1) ] }));return FAIL if it==FAIL;it))
_result_1  
end
def term()
 autovar_47 = (nil)
it_1 = (nil)
autovar_43 = (nil)
autovar_39 = (nil)
s_1 = (nil)
x_1 = (nil)
expr_1 = (nil)
cls_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{cls_1 = ((it=(_or(proc{(it=(className());next FAIL if it==FAIL;it)},proc{(it=(token(""));next FAIL if it==FAIL;it)
"Object" }));next FAIL if it==FAIL;it))
(it=(seq("["));next FAIL if it==FAIL;it)
expr_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token("]"));next FAIL if it==FAIL;it)
And[Apply["clas",cls_1], _Enter(expr_1)] },proc{cls_1 = ((it=(className());next FAIL if it==FAIL;it))
Apply["is_a",cls_1] },proc{(it=(token("nested"));next FAIL if it==FAIL;it)
(it=(seq("("));next FAIL if it==FAIL;it)
expr_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
Nested[expr_1] },proc{(it=(application());next FAIL if it==FAIL;it)},proc{(it=(key());next FAIL if it==FAIL;it)},proc{x_1 = ((it=(_or(proc{(it=(token("->"));next FAIL if it==FAIL;it)
(it=(atomicHostExpr());next FAIL if it==FAIL;it) },proc{(it=(token(""));next FAIL if it==FAIL;it)
(it=(inlineHostExpr());next FAIL if it==FAIL;it) }));next FAIL if it==FAIL;it))
_Act(x_1) },proc{(it=(token("\""));next FAIL if it==FAIL;it)
s_1 = (autovar_39 = ([])
while true
autovar_40=@input;r=it=((it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 autovar_39||=[];_append(autovar_39,it)
 break FAIL if r==FAIL
end;@input=autovar_40
autovar_39 )
(it=(seq("\""));next FAIL if it==FAIL;it)
Apply["token" ,quote(s_1)] },proc{(it=(token("'"));next FAIL if it==FAIL;it)
s_1 = (autovar_43 = ([])
while true
autovar_44=@input;r=it=((it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 autovar_43||=[];_append(autovar_43,it)
 break FAIL if r==FAIL
end;@input=autovar_44
autovar_43 )
(it=(seq("\'"));next FAIL if it==FAIL;it)
Apply["seq",quote(s_1)] },proc{it_1 = ((it=(number());next FAIL if it==FAIL;it))
Apply["exactly",it_1] },proc{(it=(token("<"));next FAIL if it==FAIL;it)
x_1 = (autovar_47 = ([])
it=((it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(eChar());next FAIL if it==FAIL;it) )
 autovar_47||=[];_append(autovar_47,it)
while true
autovar_48=@input;r=it=((it=(_not{(it=(token(">"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 autovar_47||=[];_append(autovar_47,it)
 break FAIL if r==FAIL
end;@input=autovar_48
autovar_47 )
(it=(token(">"));next FAIL if it==FAIL;it)
Apply["regch","/[#{x_1}]/"] },proc{(it=(token("("));next FAIL if it==FAIL;it)
x_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")[]"));next FAIL if it==FAIL;it)
(it=(collect(x_1));next FAIL if it==FAIL;it) },proc{(it=(token("("));next FAIL if it==FAIL;it)
x_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
x_1 }));return FAIL if it==FAIL;it))
_result_1  
end
def application()
 arg_1 = (nil)
rule_1 = (nil)
klas_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{klas_1 = ((it=(name());next FAIL if it==FAIL;it))
(it=(seq("::"));next FAIL if it==FAIL;it)
rule_1 = ((it=(name());next FAIL if it==FAIL;it))
arg_1 = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
Foreign[ {:klas=>klas_1,:rule=>rule_1,:arg=>arg_1 }] },proc{rule_1 = ((it=(name());next FAIL if it==FAIL;it))
arg_1 = ((it=(argsOpt('(',')'));next FAIL if it==FAIL;it))
Apply[rule_1,arg_1] }));return FAIL if it==FAIL;it))
_result_1  
end
def key()
 args_1 = (nil)
name_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_1 = ((it=(className());next FAIL if it==FAIL;it))
args_1 = ((it=(argsOpt('[',']'));next FAIL if it==FAIL;it))
Resul[ {:name=>name_1,:args=>args_1 }] },proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_1 = ((it=(name());next FAIL if it==FAIL;it))
Key[ {:name=>name_1 }] }));return FAIL if it==FAIL;it))
_result_1  
end
def collect(ors_1)
 _result_1 = (nil)
_result_1 = (a=autovar; And[Or[{:ary=>ors_1.ary.map{|ands| And[{:ary=>ands.ary.map{|expr| _Append(a,expr)}}]}}],_Act(a)])
_result_1  
end
def eChar()
 c_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(seq("\\"));next FAIL if it==FAIL;it)
c_1 = ((it=(char());next FAIL if it==FAIL;it))
"\\#{c_1}" },proc{(it=(_args('#{','}'));next FAIL if it==FAIL;it)},proc{(it=(char());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def ruleargs()
 _result_1 = (nil)
_result_1 = ((it=(argsOpt('(',')'));return FAIL if it==FAIL;it))
_result_1  
end
def nr()
 _result_1 = (nil)
_result_1 = ((it=(_not{(it=(name());next FAIL if it==FAIL;it)
(it=(ruleargs());next FAIL if it==FAIL;it)
(it=(token("="));next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it))
_result_1  
end
def argsOpt(o_1,c_1)
 _result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(args(o_1,c_1));next FAIL if it==FAIL;it)},proc{(it=(empty());next FAIL if it==FAIL;it)
[] }));return FAIL if it==FAIL;it))
_result_1  
end
def args(o_1,c_1)
 r_1 = (nil)
_result_1 = (nil)
_result_1 = (r_1 = ((it=(__args(o_1,c_1));return FAIL if it==FAIL;it))
r_1<< ','
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
						 )
_result_1  
end
def _args(o_1,c_1)
 r_1 = (nil)
_result_1 = (nil)
_result_1 = (r_1 = ((it=(__args(o_1,c_1));return FAIL if it==FAIL;it))
Args[{:ary=>([o_1]+r_1+[c_1])}] )
_result_1  
end
def __args(o_1,c_1)
 autovar_51 = (nil)
r_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(seq(o_1));return FAIL if it==FAIL;it)
(it=(token(""));return FAIL if it==FAIL;it)
r_1 = (autovar_51 = ([])
while true
autovar_52=@input;r=it=((it=(rubyarg());break FAIL if it==FAIL;it))
 autovar_51||=[];_append(autovar_51,it)
 break FAIL if r==FAIL
end;@input=autovar_52
autovar_51 )
(it=(seq(c_1));return FAIL if it==FAIL;it)
r_1 )
_result_1  
end
def rubyarg()
 k_1 = (nil)
autovar_63 = (nil)
n_1 = (nil)
autovar_59 = (nil)
autovar_55 = (nil)
s_1 = (nil)
e_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(seq("`"));next FAIL if it==FAIL;it)
e_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(seq("`"));next FAIL if it==FAIL;it)
Exp[e_1] },proc{(it=(_args('(',')'));next FAIL if it==FAIL;it)},proc{(it=(_args('[',']'));next FAIL if it==FAIL;it)},proc{(it=(_args('{','}'));next FAIL if it==FAIL;it)},proc{(it=(seq("\""));next FAIL if it==FAIL;it)
s_1 = (autovar_55 = ([])
while true
autovar_56=@input;r=it=((it=(_not{(it=(seq("\""));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 autovar_55||=[];_append(autovar_55,it)
 break FAIL if r==FAIL
end;@input=autovar_56
autovar_55 )
(it=(seq("\""));next FAIL if it==FAIL;it)
Strin[['"']+ s_1+['"']] },proc{(it=(seq("\'"));next FAIL if it==FAIL;it)
s_1 = (autovar_59 = ([])
while true
autovar_60=@input;r=it=((it=(_not{(it=(seq("\'"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(eChar());break FAIL if it==FAIL;it) )
 autovar_59||=[];_append(autovar_59,it)
 break FAIL if r==FAIL
end;@input=autovar_60
autovar_59 )
(it=(seq("\'"));next FAIL if it==FAIL;it)
Strin[['\'']+s_1+['\'']] },proc{(it=(_or(proc{(it=(seq("@@"));next FAIL if it==FAIL;it)
it=("@")
 n_1||=[];_append(n_1,it) },proc{it=((it=(regch(/[.:]/));next FAIL if it==FAIL;it))
 n_1||=[];_append(n_1,it)},proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
it=(autovar_63 = ([])
it=((it=(regch(/[a-zA-Z_]/));next FAIL if it==FAIL;it))
 autovar_63||=[];_append(autovar_63,it)
while true
autovar_64=@input;r=it=((it=(regch(/[a-zA-Z_]/));break FAIL if it==FAIL;it))
 autovar_63||=[];_append(autovar_63,it)
 break FAIL if r==FAIL
end;@input=autovar_64
autovar_63 )
 n_1||=[];_append(n_1,it)
n_1*"" },proc{k_1 = ((it=(key());next FAIL if it==FAIL;it))
ExpKey[k_1]  },proc{(it=(regch(/[^`{}()'"\[\]]/));next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def nameFirst()
 _result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(regch(/[_$.^]/));next FAIL if it==FAIL;it)},proc{(it=(letter());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def nameRest()
 _result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(nameFirst());next FAIL if it==FAIL;it)},proc{(it=(digit());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def className()
 autovar_76 = (nil)
autovar_78 = (nil)
it_1 = (nil)
autovar_67 = (nil)
_result_1 = (nil)
_result_1 = (autovar_67 = ([])
while true
autovar_68=@input;r=it=((it=(_());break FAIL if it==FAIL;it))
 autovar_67||=[];_append(autovar_67,it)
 break FAIL if r==FAIL
end;@input=autovar_68
autovar_67
it_1 = (it=((it=(upper());return FAIL if it==FAIL;it))
 autovar_78||=[];_append(autovar_78,it)
it=(autovar_76 = ([])
while true
autovar_77=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 autovar_76||=[];_append(autovar_76,it)
 break FAIL if r==FAIL
end;@input=autovar_77
autovar_76 )
 autovar_78||=[];_append(autovar_78,it)
autovar_78 )
leterize(it_1*"") )
_result_1  
end
def name()
 autovar_90 = (nil)
autovar_92 = (nil)
it_1 = (nil)
autovar_81 = (nil)
_result_1 = (nil)
_result_1 = (autovar_81 = ([])
while true
autovar_82=@input;r=it=((it=(_());break FAIL if it==FAIL;it))
 autovar_81||=[];_append(autovar_81,it)
 break FAIL if r==FAIL
end;@input=autovar_82
autovar_81
it_1 = (it=((it=(nameFirst());return FAIL if it==FAIL;it))
 autovar_92||=[];_append(autovar_92,it)
it=(autovar_90 = ([])
while true
autovar_91=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 autovar_90||=[];_append(autovar_90,it)
 break FAIL if r==FAIL
end;@input=autovar_91
autovar_90 )
 autovar_92||=[];_append(autovar_92,it)
autovar_92 )
leterize(it_1*"") )
_result_1  
end
def inlineHostExpr()
 _result_1 = (nil)
_result_1 = ((it=(args('{','}'));return FAIL if it==FAIL;it))
_result_1  
end
def number()
 autovar_95 = (nil)
_result_1 = (nil)
_result_1 = (autovar_95 = ([])
it=((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
 autovar_95||=[];_append(autovar_95,it)
while true
autovar_96=@input;r=it=((it=(regch(/[0-9]/));break FAIL if it==FAIL;it))
 autovar_95||=[];_append(autovar_95,it)
 break FAIL if r==FAIL
end;@input=autovar_96
autovar_95 )
_result_1  
end
def atomicHostExpr()
 autovar_101 = (nil)
autovar_99 = (nil)
s_1 = (nil)
_result_1 = (nil)
_result_1 = (s_1 = (autovar_99 = ([])
while true
autovar_100=@input;r=it=((it=(_not{(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_dot_());break FAIL if it==FAIL;it) )
 autovar_99||=[];_append(autovar_99,it)
 break FAIL if r==FAIL
end;@input=autovar_100
autovar_99 )
autovar_101 = ("{#{s_1*""}}")
(it=(_pass(autovar_101){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{(it=(inlineHostExpr());return FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it) )
_result_1  
end

end

class AmethystOptimizer < Amethyst
def itrans()
 autovar_3 = (nil)
r_1 = (nil)
_result_1 = (nil)
_result_1 = (r_1 = (autovar_3 = ([])
while true
autovar_4=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(trans());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)
 break FAIL if r==FAIL
end;@input=autovar_4
autovar_3 )
r_1 )
_result_1  
end
def trans()
 var_1 = (nil)
autovar_58 = (nil)
to_1 = (nil)
autovar_57 = (nil)
autovar_53 = (nil)
autovar_46 = (nil)
autovar_45 = (nil)
klas_1 = (nil)
vars_1 = (nil)
autovar_42 = (nil)
autovar_41 = (nil)
pred_1 = (nil)
append_1 = (nil)
expr_1 = (nil)
autovar_38 = (nil)
autovar_37 = (nil)
o_1 = (nil)
autovar_33 = (nil)
autovar_25 = (nil)
autovar_17 = (nil)
ary_1 = (nil)
locals_1 = (nil)
body_1 = (nil)
autovar_10 = (nil)
args_1 = (nil)
autovar_9 = (nil)
rules_1 = (nil)
autovar_6 = (nil)
parent_1 = (nil)
name_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
parent_1 = ( _key(:parent))
autovar_6 = ( _key(:rules))
(it=(_pass(autovar_6){rules_1 = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Grammar[ {:name=>name_1,:parent=>parent_1,:rules=>rules_1 }] },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_9 = ( _key(:args))
(it=(_pass(autovar_9){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_10 = ( _key(:body))
(it=(_pass(autovar_10){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ( _key(:locals)) });next FAIL if it==FAIL;it)
Rule[ {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }] },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
Enter[ {:ary=>ary_1 }] },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = (autovar_17 = ([])
while true
autovar_18=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_17||=[];_append(autovar_17,it)
 break FAIL if r==FAIL
end;@input=autovar_18
autovar_17 )});next FAIL if it==FAIL;it)
Or[ {:ary=>ary_1 }] },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = (autovar_25 = ([])
while true
autovar_26=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_25||=[];_append(autovar_25,it)
 break FAIL if r==FAIL
end;@input=autovar_26
autovar_25 )});next FAIL if it==FAIL;it)
And[ {:ary=>ary_1 }] },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
Not[ {:ary=>ary_1 }] },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
Lookahead[ {:ary=>ary_1 }] },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = (autovar_33 = ([])
while true
autovar_34=@input;r=it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_33||=[];_append(autovar_33,it)
 break FAIL if r==FAIL
end;@input=autovar_34
autovar_33 )});next FAIL if it==FAIL;it)
Comment[ {:ary=>ary_1 }] },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
o_1 = ( _key(:o)) });next FAIL if it==FAIL;it)
Many[ {:ary=>ary_1,:o=>o_1 }] },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(anything());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
it=((it=(args());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it) });next FAIL if it==FAIL;it)
Apply[ {:ary=>ary_1 }] },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{autovar_37 = ( _key(:name))
(it=(_pass(autovar_37){name_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_38 = ( _key(:expr))
(it=(_pass(autovar_38){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( _key(:append)) });next FAIL if it==FAIL;it)
Set[ {:name=>name_1,:expr=>expr_1,:append=>append_1 }] },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = ((it=(args());next FAIL if it==FAIL;it))
pred_1 = ( _key(:pred)) });next FAIL if it==FAIL;it)
Act[ {:ary=>ary_1,:pred=>pred_1 }] },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_41 = ( _key(:args))
(it=(_pass(autovar_41){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_42 = ( _key(:vars))
(it=(_pass(autovar_42){vars_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Resul[ {:name=>name_1,:args=>args_1,:vars=>vars_1 }] },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas_1 = ( _key(:klas))
autovar_45 = ( _key(:rule))
(it=(_pass(autovar_45){(it=(rule());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_46 = ( _key(:args))
(it=(_pass(autovar_46){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Foreign[ {:klas=>klas_1,:args=>args_1 }] },proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = (autovar_53 = ([])
while true
autovar_54=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_53||=[];_append(autovar_53,it)
 break FAIL if r==FAIL
end;@input=autovar_54
autovar_53 )});next FAIL if it==FAIL;it)
Args[ {:ary=>ary_1 }] },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))});next FAIL if it==FAIL;it)
Key[ {:name=>name_1 }] },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{autovar_57 = ( _key(:to))
(it=(_pass(autovar_57){to_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_58 = ( _key(:var))
(it=(_pass(autovar_58){var_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Pass[ {:to=>to_1,:var=>var_1 }] }));return FAIL if it==FAIL;it))
_result_1  
end
def transfn()
 _result_1 = (nil)
_result_1 = ((it=(trans());return FAIL if it==FAIL;it))
_result_1  
end
def transs()
 autovar_65 = (nil)
t_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{t_1 = (autovar_65 = ([])
while true
autovar_66=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_65||=[];_append(autovar_65,it)
 break FAIL if r==FAIL
end;@input=autovar_66
autovar_65 )});return FAIL if it==FAIL;it)
t_1 )
_result_1  
end
def args()
 autovar_77 = (nil)
autovar_73 = (nil)
a_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{a_1 = (autovar_73 = ([])
while true
autovar_74=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_73||=[];_append(autovar_73,it)
 break FAIL if r==FAIL
end;@input=autovar_74
autovar_73 )});next FAIL if it==FAIL;it)
a_1 },proc{autovar_77 = ([])
while true
autovar_78=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_77||=[];_append(autovar_77,it)
 break FAIL if r==FAIL
end;@input=autovar_78
autovar_77 }));return FAIL if it==FAIL;it))
_result_1  
end
def arg()
 autovar_93 = (nil)
autovar_85 = (nil)
ary_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = (autovar_85 = ([])
while true
autovar_86=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_85||=[];_append(autovar_85,it)
 break FAIL if r==FAIL
end;@input=autovar_86
autovar_85 )});next FAIL if it==FAIL;it)
Args[ {:ary=>ary_1 }] },proc{(it=(clas(Strin));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = (autovar_93 = ([])
while true
autovar_94=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(arg());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 autovar_93||=[];_append(autovar_93,it)
 break FAIL if r==FAIL
end;@input=autovar_94
autovar_93 )});next FAIL if it==FAIL;it)
Strin[ {:ary=>ary_1 }] },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(transfn());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
Exp[ {:ary=>ary_1 }] },proc{(it=(clas(ExpKey));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
ExpKey[ {:ary=>ary_1 }] },proc{(it=(anything());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end

end

class AmethystOptimizer2 < AmethystOptimizer
def trans()
 autovar_15 = (nil)
autovar_7 = (nil)
ary_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = (autovar_7 = ([])
while true
autovar_8=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_7||=[];_append(autovar_7,it)
 break FAIL if r==FAIL
end;@input=autovar_8
autovar_7 )});next FAIL if it==FAIL;it)
ary_1=ary_1.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten
(it=(_or(proc{(it=((ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
ary_1[0] },proc{Or[ {:ary=>ary_1 }]}));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = (autovar_15 = ([])
while true
autovar_16=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_15||=[];_append(autovar_15,it)
 break FAIL if r==FAIL
end;@input=autovar_16
autovar_15 )});next FAIL if it==FAIL;it)
ary_1=ary_1.map{|a| (a.is_a?(And)) ? a.ary : a}.flatten
(it=(_or(proc{(it=((ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
ary_1[0] },proc{And[ {:ary=>ary_1 }]}));next FAIL if it==FAIL;it) },proc{super}));return FAIL if it==FAIL;it))
_result_1  
end

end

class Detect_Variables < AmethystOptimizer
def trans()
 append_1 = (nil)
expr_1 = (nil)
autovar_16 = (nil)
vars_1 = (nil)
autovar_14 = (nil)
ary_1 = (nil)
autovar_11 = (nil)
locals_1 = (nil)
body_1 = (nil)
autovar_4 = (nil)
args_1 = (nil)
autovar_3 = (nil)
name_1 = (nil)
argnames_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{argnames_1 = (@argnames=[])
@locals=[]
name_1 = ( _key(:name))
autovar_3 = ( _key(:args))
(it=(_pass(autovar_3){args_1 = ((it=(clas(Object));next FAIL if it==FAIL;it)
(it=(_enter{(it=(addargs());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) )});next FAIL if it==FAIL;it)
autovar_4 = ( _key(:body))
(it=(_pass(autovar_4){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = (@locals.uniq)
locals_1.each{|l| body_1=And[Set[{:name=>l,:expr=>Act["nil"] }],body_1] }; });next FAIL if it==FAIL;it)
Rule[ {:argnames=>argnames_1,:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }] },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{l=@locals;r=[] 
autovar_11 = ([])
while true
autovar_12=@input;r=it=(@locals=l.clone
it=((it=(trans());break FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
r=(r+@locals).uniq )
 autovar_11||=[];_append(autovar_11,it)
 break FAIL if r==FAIL
end;@input=autovar_12
autovar_11
@locals=r });next FAIL if it==FAIL;it)
Or[ {:ary=>ary_1 }] },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_14 = ( _key(:args))
(it=(_pass(autovar_14){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_1 = (@locals.select{|a| a[0]!= "autovar"}.uniq-["it","_result"]) });next FAIL if it==FAIL;it)
Resul[ {:name=>name_1,:args=>args_1,:vars=>vars_1 }] },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
@locals<<name_1
autovar_16 = ( _key(:expr))
(it=(_pass(autovar_16){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( _key(:append)) });next FAIL if it==FAIL;it)
Set[ {:name=>name_1,:expr=>expr_1,:append=>append_1 }] },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def addargs()
 result_1 = (nil)
name_1 = (nil)
autovar_19 = (nil)
_result_1 = (nil)
_result_1 = (autovar_19 = ([])
while true
autovar_20=@input;r=it=((it=(clas(Args));break FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());break FAIL if it==FAIL;it))
it=(@argnames<<name_1;_Variable(name_1) )
 result_1||=[];_append(result_1,it) });break FAIL if it==FAIL;it) )
 autovar_19||=[];_append(autovar_19,it)
 break FAIL if r==FAIL
end;@input=autovar_20
autovar_19
result_1 )
_result_1  
end

end


class Analyze_Variables < AmethystOptimizer
def trans()
 body_1 = (nil)
autovar_22 = (nil)
args_1 = (nil)
locals_1 = (nil)
name_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
locals_1 = ( _key(:locals))
@variables={} ;(locals_1+ _key(:argnames)).each{|v| @variables[v]=true}
args_1 = ( _key(:args))
autovar_22 = ( _key(:body))
(it=(_pass(autovar_22){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
Rule[ {:name=>name_1,:locals=>locals_1,:args=>args_1,:body=>body_1 }] },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def arg()
 name_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{name_1 = ((it=(char());next FAIL if it==FAIL;it))
(it=((@variables[name_1])||FAIL);next FAIL if it==FAIL;it)
_Variable(name_1) },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end

end

class Oriented_Graph
	def add(v,w)
		puts ("#{v.inspect} #{w.inspect}")
	end
end

class Dead_Code_Detector < AmethystOptimizer
def trans()
 autovar_10 = (nil)
autovar_8 = (nil)
autovar_7 = (nil)
v_1 = (nil)
this_1 = (nil)
var_1 = (nil)
locals_1 = (nil)
body_1 = (nil)
autovar_4 = (nil)
args_1 = (nil)
autovar_3 = (nil)
name_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
@edges=Oriented_Graph.new ; @marked=[Variable["_result"]]
autovar_3 = ( _key(:args))
(it=(_pass(autovar_3){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_4 = ( _key(:body))
(it=(_pass(autovar_4){(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
body_1 = ( _key(:body))
locals_1 = ( _key(:locals))
puts @marked.inspect });next FAIL if it==FAIL;it)
Rule[ {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }] },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());next FAIL if it==FAIL;it))
var_1 = ((it=(vars_in());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
@marked +=var_1 },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{this_1 = ( _key(:this))
@marked<<this_1 if _key(:pred)
var_1 = ((it=(vars_in());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
var_1.each{|v_1| @edges.add(v_1,this_1); @edges.add(this_1,v_1)} },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{v_1 = ( _key(:name))
autovar_7 = ( _key(:expr))
(it=(_pass(autovar_7){(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_8 = ( _key(:expr))
(it=(_pass(autovar_8){var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
var_1.each{|w| @edges.add(v_1,w)} },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{autovar_10 = ( _key(:vars))
(it=(_pass(autovar_10){var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
v_1 = ( _key(:this)) });next FAIL if it==FAIL;it)
var_1.each{|w| @edges.add(v_1,w) } },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def vars_in()
 autovar_84 = (nil)
autovar_81 = (nil)
autovar_73 = (nil)
ary_1 = (nil)
autovar_85 = (nil)
_result_1 = (nil)
_result_1 = (ary_1=[];puts @input.item.inspect
autovar_85 = ([])
while true
autovar_86=@input;r=it=((it=(_or(proc{(it=(clas(Variable));next FAIL if it==FAIL;it)
(it=(_enter{it=( _key(:this))
 ary_1||=[];_append(ary_1,it)
autovar_73 = ([])
while true
autovar_74=@input;r=it=((it=(_dot_());break FAIL if it==FAIL;it))
 autovar_73||=[];_append(autovar_73,it)
 break FAIL if r==FAIL
end;@input=autovar_74
autovar_73 });next FAIL if it==FAIL;it) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{it=( _key(:this))
 ary_1||=[];_append(ary_1,it)
autovar_81 = ([])
while true
autovar_82=@input;r=it=((it=(_dot_());break FAIL if it==FAIL;it))
 autovar_81||=[];_append(autovar_81,it)
 break FAIL if r==FAIL
end;@input=autovar_82
autovar_81 });next FAIL if it==FAIL;it) },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{it=( _key(:this))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{autovar_84 = ( _key(:name))
(it=(_pass(autovar_84){it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 autovar_85||=[];_append(autovar_85,it)
 break FAIL if r==FAIL
end;@input=autovar_86
autovar_85
ary_1 )
_result_1  
end

end


class Communize_Or < AmethystOptimizer
def trans()
 ary_1 = (nil)
autovar_139 = (nil)
rest_1 = (nil)
fst_1 = (nil)
autovar_141 = (nil)
autovar_129 = (nil)
first_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{(it=(_lookahead{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{first_1 = ((it=(trans());next FAIL if it==FAIL;it))
autovar_129 = ([])
while true
autovar_130=@input;r=it=((it=(_dot_());break FAIL if it==FAIL;it))
 autovar_129||=[];_append(autovar_129,it)
 break FAIL if r==FAIL
end;@input=autovar_130
autovar_129 });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
autovar_141 = ([])
while true
autovar_142=@input;r=it=((it=(clas(And));break FAIL if it==FAIL;it)
(it=(_enter{fst_1 = ((it=(trans());break FAIL if it==FAIL;it))
(it=((first_1.isomorphic(fst_1))||FAIL);break FAIL if it==FAIL;it)
rest_1 = (autovar_139 = ([])
while true
autovar_140=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_139||=[];_append(autovar_139,it)
 break FAIL if r==FAIL
end;@input=autovar_140
autovar_139 )
it=(And[{:ary=>rest_1}])
 ary_1||=[];_append(ary_1,it) });break FAIL if it==FAIL;it) )
 autovar_141||=[];_append(autovar_141,it)
 break FAIL if r==FAIL
end;@input=autovar_142
autovar_141 });next FAIL if it==FAIL;it)
And[first_1 ,Or[{:ary=>ary_1}] ] },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end

end


class Move_Assignments < AmethystOptimizer
def trans()
 autovar_146 = (nil)
expr_1 = (nil)
autovar_145 = (nil)
name_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_145 = ( _key(:expr))
(it=(_pass(autovar_145){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_146 = (expr_1)
(it=(_pass(autovar_146){(it=(move( _key(:append),name_1));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(super());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def move(append_1,name_1)
 it_1 = (nil)
enter_1 = (nil)
to_1 = (nil)
autovar_196 = (nil)
var_1 = (nil)
autovar_192 = (nil)
el_1 = (nil)
autovar_193 = (nil)
autovar_153 = (nil)
ary_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = (autovar_153 = ([])
while true
autovar_154=@input;r=it=((it=(move(append_1,name_1));break FAIL if it==FAIL;it))
 autovar_153||=[];_append(autovar_153,it)
 break FAIL if r==FAIL
end;@input=autovar_154
autovar_153 )});next FAIL if it==FAIL;it)
Or[ {:ary=>ary_1 }] },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{ary_1 = (autovar_193 = ([])
while true
autovar_194=@input;r=it=(el_1 = ((it=(anything());break FAIL if it==FAIL;it))
(it=(_or(proc{(it=(_lookahead{(it=(eof());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_192 = (el_1)
(it=(_pass(autovar_192){(it=(move(append_1,name_1));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) },proc{el_1}));break FAIL if it==FAIL;it) )
 autovar_193||=[];_append(autovar_193,it)
 break FAIL if r==FAIL
end;@input=autovar_194
autovar_193 )});next FAIL if it==FAIL;it)
And[ {:ary=>ary_1,:el=>el_1 }] },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{var_1 = ( _key(:var))
autovar_196 = ( _key(:to))
(it=(_pass(autovar_196){to_1 = ((it=(move(append_1,name_1));next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
enter_1 = ( _key(:enter)) });next FAIL if it==FAIL;it)
Enter[ {:var=>var_1,:to=>to_1,:enter=>enter_1 }] },proc{it_1 = ((it=(anything());next FAIL if it==FAIL;it))
_Set(name_1,it_1,append_1) }));return FAIL if it==FAIL;it))
_result_1  
end

end

def shadow(body,args)
	args.each{|arg|arg=arg[0]; a=autovar; body=And[Set[{:name=>a,:expr=>Act[arg]}],body,Set[{:name=>arg,:expr=>Act[a]}]]}
	body
end

class Inliner < AmethystOptimizer
def inline(rule_1,grammar_1)
 autovar_2 = (nil)
body_1 = (nil)
locals_1 = (nil)
args_1 = (nil)
name_1 = (nil)
autovar_1 = (nil)
_result_1 = (nil)
_result_1 = (autovar_1 = (rule_1)
(it=(_pass(autovar_1){(it=(clas(Rule));return FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
args_1 = ( _key(:args))
locals_1 = ( _key(:locals))
body_1 = ( _key(:body)) });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
@result=autovar;@name=name_1;@args=args_1;@body=shadow(Set[{:name=>@result,:expr=>body_1}],locals_1.map{|a| Args[a]}) 
autovar_2 = (grammar_1)
(it=(_pass(autovar_2){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{(it=(itrans());return FAIL if it==FAIL;it)});return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it) )
_result_1  
end
def trans()
 autovar_9 = (nil)
args_1 = (nil)
name_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());next FAIL if it==FAIL;it))
(it=((name_1==@name)||FAIL);next FAIL if it==FAIL;it)
args_1 = (autovar_9 = ([])
while true
autovar_10=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_9||=[];_append(autovar_9,it)
 break FAIL if r==FAIL
end;@input=autovar_10
autovar_9 ) });next FAIL if it==FAIL;it)
body=@body; args_1.each_index{|i| body=And[Set[{:name=>@args[i][0],:expr=>Act[args_1[i]]}],body] } ; And[shadow(body,@args),Act[@result]] },proc{super}));return FAIL if it==FAIL;it))
_result_1  
end
def inlineit()
 rule_1 = (nil)
grammar_1 = (nil)
name_1 = (nil)
_result_1 = (nil)
_result_1 = (name_1 = ((it=(anything());return FAIL if it==FAIL;it))
grammar_1 = ((it=(anything());return FAIL if it==FAIL;it))
rule_1 = ((it=(getrule(name_1,grammar_1));return FAIL if it==FAIL;it))
(it=(inline(rule_1,grammar_1));return FAIL if it==FAIL;it) )
_result_1  
end
def getrule(name_1,grammar_1)
 rule_1 = (nil)
n_1 = (nil)
autovar_50 = (nil)
autovar_52 = (nil)
autovar_53 = (nil)
autovar_55 = (nil)
_result_1 = (nil)
_result_1 = (autovar_55 = (grammar_1)
(it=(_pass(autovar_55){(it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{autovar_53 = ([])
while true
autovar_54=@input;r=it=((it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{autovar_52 = ( _key(:rules))
(it=(_pass(autovar_52){(it=(clas(Object));next FAIL if it==FAIL;it)
(it=(_enter{autovar_50 = ([])
while true
autovar_51=@input;r=it=((it=(clas(Rule));break FAIL if it==FAIL;it)
(it=(_enter{n_1 = ( _key(:name))
(it=(_or(proc{(it=((n_1==name_1)||FAIL);next FAIL if it==FAIL;it)
rule_1 = ( _key(:this)) },proc{(it=(empty());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it) });break FAIL if it==FAIL;it) )
 autovar_50||=[];_append(autovar_50,it)
 break FAIL if r==FAIL
end;@input=autovar_51
autovar_50 });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 autovar_53||=[];_append(autovar_53,it)
 break FAIL if r==FAIL
end;@input=autovar_54
autovar_53 });return FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
rule_1 )
_result_1  
end

end

class AmethystTranslator < Amethyst
def itrans()
 autovar_3 = (nil)
r_1 = (nil)
_result_1 = (nil)
_result_1 = (r_1 = (autovar_3 = ([])
while true
autovar_4=@input;r=it=((it=(_or(proc{(it=(char());next FAIL if it==FAIL;it)},proc{(it=(trans());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)
 break FAIL if r==FAIL
end;@input=autovar_4
autovar_3 )
r_1*"" )
_result_1  
end
def trans()
 var_1 = (nil)
autovar_62 = (nil)
to_1 = (nil)
autovar_61 = (nil)
vars_1 = (nil)
autovar_58 = (nil)
append_1 = (nil)
autovar_56 = (nil)
autovar_55 = (nil)
autovar_52 = (nil)
autovar_51 = (nil)
klas_1 = (nil)
o_1 = (nil)
autovar_48 = (nil)
c_1 = (nil)
pred_1 = (nil)
autovar_45 = (nil)
t_1 = (nil)
autovar_37 = (nil)
ors_1 = (nil)
expr_1 = (nil)
autovar_14 = (nil)
argss_1 = (nil)
autovar_13 = (nil)
locals_1 = (nil)
body_1 = (nil)
autovar_10 = (nil)
parent_1 = (nil)
name_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Grammar));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('return',proc{name_1 = ( _key(:name))
parent_1 = ( _key(:parent))
autovar_10 = ( _key(:rules))
(it=(_pass(autovar_10){body_1 = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
"class #{name_1} < #{parent_1}\n#{body_1}\nend\n" },proc{(it=(clas(Rule));next FAIL if it==FAIL;it)
(it=(_enter{$av=0
name_1 = ( _key(:name))
locals_1 = ( _key(:locals))
autovar_13 = ( _key(:args))
(it=(_pass(autovar_13){argss_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_14 = ( _key(:body))
(it=(_pass(autovar_14){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
"def #{name_1}(#{argss_1})\n #{body_1} \nend\n" },proc{(it=(clas(Enter));next FAIL if it==FAIL;it)
(it=(_enter{expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(it=(failwrap("_enter{#{expr_1}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Or));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next', proc{ors_1 = (autovar_37 = ([])
while true
autovar_38=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_37||=[];_append(autovar_37,it)
 break FAIL if r==FAIL
end;@input=autovar_38
autovar_37 )}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_or(#{ors_1*","})"));next FAIL if it==FAIL;it) },proc{(it=(clas(And));next FAIL if it==FAIL;it)
(it=(_enter{t_1 = (autovar_45 = ([])
while true
autovar_46=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_45||=[];_append(autovar_45,it)
 break FAIL if r==FAIL
end;@input=autovar_46
autovar_45 )});next FAIL if it==FAIL;it)
"#{t_1*"\n"} " },proc{(it=(clas(Not));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next',proc{t_1 = ((it=(trans());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_not{#{t_1}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Act));next FAIL if it==FAIL;it)
(it=(_enter{t_1 = ((it=(args());next FAIL if it==FAIL;it))
pred_1 = ( _key(:pred)) });next FAIL if it==FAIL;it)
pred_1 ?  failwrap("(#{t_1})||FAIL") : t_1 },proc{(it=(clas(Lookahead));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('next',proc{t_1 = ((it=(trans());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(failwrap("_lookahead{#{t_1}}"));next FAIL if it==FAIL;it) },proc{(it=(clas(Comment));next FAIL if it==FAIL;it)
(it=(_enter{c_1 = ((it=(anything());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
"" },proc{(it=(clas(Many));next FAIL if it==FAIL;it)
(it=(_enter{(it=(rw('break', proc{t_1 = ((it=(trans());next FAIL if it==FAIL;it))} ));next FAIL if it==FAIL;it)
autovar_48 = ( _key(:o))
(it=(_pass(autovar_48){o_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
"while true\n#{o_1}=@input;r=#{t_1}\n break FAIL if r==FAIL\nend;@input=#{o_1}" },proc{(it=(clas(Apply));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());next FAIL if it==FAIL;it))
argss_1 = ((it=(args());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
(it=(failwrap("#{name_1}(#{argss_1})"));next FAIL if it==FAIL;it) },proc{(it=(clas(Foreign));next FAIL if it==FAIL;it)
(it=(_enter{klas_1 = ( _key(:klas))
autovar_51 = ( _key(:rule))
(it=(_pass(autovar_51){(it=(rule());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_52 = ( _key(:args))
(it=(_pass(autovar_52){argss_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
(it=(failwrap("_foreign(#{klas_1}).#{rule}(#{argss_1})"));next FAIL if it==FAIL;it) },proc{(it=(clas(Set));next FAIL if it==FAIL;it)
(it=(_enter{autovar_55 = ( _key(:name))
(it=(_pass(autovar_55){name_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_56 = ( _key(:expr))
(it=(_pass(autovar_56){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( _key(:append)) });next FAIL if it==FAIL;it)
append_1 ? "it=(#{expr_1})\n #{name_1}||=[];_append(#{name_1},it)" : "#{name_1} = (#{expr_1})" },proc{(it=(clas(Resul));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))
autovar_58 = ( _key(:args))
(it=(_pass(autovar_58){argss_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_1 = ( _key(:vars)) });next FAIL if it==FAIL;it)
"#{name_1}[#{argss_1} {#{vars_1.map{|l| ":#{l[0]}=>#{l[0]}_#{l.number}" }*","} }]" },proc{(it=(clas(Key));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ( _key(:name))});next FAIL if it==FAIL;it)
" _key(:#{name_1})" },proc{(it=(clas(Pass));next FAIL if it==FAIL;it)
(it=(_enter{autovar_61 = ( _key(:to))
(it=(_pass(autovar_61){to_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_62 = ( _key(:var))
(it=(_pass(autovar_62){var_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
(it=(failwrap("_pass(#{var_1}){#{to_1}}"));next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it))
_result_1  
end
def transfn()
 t_1 = (nil)
_result_1 = (nil)
_result_1 = (t_1 = ((it=(trans());return FAIL if it==FAIL;it))
"proc{#{t_1}}"  )
_result_1  
end
def transs()
 autovar_69 = (nil)
t_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(clas(Object));return FAIL if it==FAIL;it)
(it=(_enter{t_1 = (autovar_69 = ([])
while true
autovar_70=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_69||=[];_append(autovar_69,it)
 break FAIL if r==FAIL
end;@input=autovar_70
autovar_69 )});return FAIL if it==FAIL;it)
t_1 )
_result_1  
end
def args()
 autovar_81 = (nil)
autovar_77 = (nil)
a_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Array));next FAIL if it==FAIL;it)
(it=(_enter{a_1 = (autovar_77 = ([])
while true
autovar_78=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_77||=[];_append(autovar_77,it)
 break FAIL if r==FAIL
end;@input=autovar_78
autovar_77 )});next FAIL if it==FAIL;it)
a_1*"," },proc{a_1 = (autovar_81 = ([])
while true
autovar_82=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_81||=[];_append(autovar_81,it)
 break FAIL if r==FAIL
end;@input=autovar_82
autovar_81 )
a_1*"," }));return FAIL if it==FAIL;it))
_result_1  
end
def arg()
 number_1 = (nil)
name_1 = (nil)
t_1 = (nil)
autovar_97 = (nil)
autovar_89 = (nil)
a_1 = (nil)
_result_1 = (nil)
_result_1 = ((it=(_or(proc{(it=(clas(Args));next FAIL if it==FAIL;it)
(it=(_enter{a_1 = (autovar_89 = ([])
while true
autovar_90=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_89||=[];_append(autovar_89,it)
 break FAIL if r==FAIL
end;@input=autovar_90
autovar_89 )});next FAIL if it==FAIL;it)
a_1*"" },proc{(it=(clas(Strin));next FAIL if it==FAIL;it)
(it=(_enter{a_1 = (autovar_97 = ([])
while true
autovar_98=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_97||=[];_append(autovar_97,it)
 break FAIL if r==FAIL
end;@input=autovar_98
autovar_97 )});next FAIL if it==FAIL;it)
a_1*"" },proc{(it=(clas(Exp));next FAIL if it==FAIL;it)
(it=(_enter{t_1 = ((it=(transfn());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
t_1 },proc{(it=(clas(ExpKey));next FAIL if it==FAIL;it)
(it=(_enter{t_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
t_1 },proc{(it=(clas(Variable));next FAIL if it==FAIL;it)
(it=(_enter{name_1 = ((it=(anything());next FAIL if it==FAIL;it))
number_1 = ( _key(:number)) });next FAIL if it==FAIL;it)
"#{name_1}_#{number_1}" },proc{(it=(anything());next FAIL if it==FAIL;it)}));return FAIL if it==FAIL;it))
_result_1  
end
def rw(word_1,prc_1)
 x_1 = (nil)
_result_1 = (nil)
_result_1 = (rwo=@returnword;@returnword=word_1
x_1 = ((it=(apply(prc_1));return FAIL if it==FAIL;it))
@returnword=rwo;x_1 )
_result_1  
end
def failwrap(s_1)
 _result_1 = (nil)
_result_1 = ("(it=(#{s_1});#{@returnword} FAIL if it==FAIL;it)" )
_result_1  
end

end

