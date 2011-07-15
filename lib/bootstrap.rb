class Amethyst < AmethystCore
def regch(regex_1)
 c_1=nil
_result_1=nil
 c_1 = ((it=(char());return FAIL if it==FAIL;it))
(it=((regex_1.match(c_1))||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((c_1))
(_result_1)  
end
def eof()
 _result_1=nil
 _result_1 = ((it=(_lookahead(true){(it=(anything());next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it))
(_result_1)  
end
def empty()
 _result_1=nil
 _result_1 = ((nil))
(_result_1)  
end
def char()
 c_1=nil
_result_1=nil
 c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((c_1))
(_result_1)  
end
def endline()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(seq("\r\n"));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("\r"));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("\n"));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def space()
 _result_1=nil
 _result_1 = ((it=(regch(/[\s\t\r\n\f]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def spaces()
 _result_1=nil
 autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(space());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
_result_1 = ((autovar_1))
(_result_1)  
end
def _()
 _result_1=nil
 _result_1 = ((it=(space());return FAIL if it==FAIL;it))
(_result_1)  
end
def digit()
 _result_1=nil
 _result_1 = ((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def lower()
 _result_1=nil
 _result_1 = ((it=(regch(/[a-z]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def upper()
 _result_1=nil
 _result_1 = ((it=(regch(/[A-Z]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def letter()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(lower());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(upper());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def letterOrDigit()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(letter());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(digit());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def alpha()
 _result_1=nil
 _result_1 = ((it=(letter());return FAIL if it==FAIL;it))
(_result_1)  
end
def alnum()
 _result_1=nil
 _result_1 = ((it=(letterOrDigit());return FAIL if it==FAIL;it))
(_result_1)  
end
def xdigit()
 _result_1=nil
 _result_1 = ((it=(regch(/[0-9a-fA-F]/));return FAIL if it==FAIL;it))
(_result_1)  
end
def word()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(alpha());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("_"));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def listOf(rule_1,delim_1)
 f_1=nil
_result_1=nil
 (it=(_or(proc{it=((it=(apply(rule_1));next FAIL if it==FAIL;it))
 f_1||=[];_append(f_1,it)
autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(apply(delim_1));break FAIL if it==FAIL;it)
it=((it=(apply(rule_1));break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=((autovar_1))
 f_1||=[];_append(f_1,it)
_result_1 = ((f_1)) },proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = (([])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def exactly(wanted_1)
 got_1=nil
_result_1=nil
 got_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((wanted_1 == got_1)||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((wanted_1))
(_result_1)  
end
def _true()
 _result_1=nil
 _result_1 = ((it=(exactly(true));return FAIL if it==FAIL;it))
(_result_1)  
end
def _false()
 _result_1=nil
 _result_1 = ((it=(exactly(false));return FAIL if it==FAIL;it))
(_result_1)  
end
def clas(cls_1)
 _result_1=nil
i_1=nil
 i_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((i_1.is_a?(cls_1))||FAIL);return FAIL if it==FAIL;it)
_result_1 = ((i_1))
(_result_1)  
end
def token(s_1)
 _result_1=nil
 (it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
(_result_1)  
end
def many1(s_1)
 a_1=nil
_result_1=nil
 it=((it=(apply(s_1));return FAIL if it==FAIL;it))
 a_1||=[];_append(a_1,it)
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(apply(s_1));break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
_result_1 = (it=((autovar_1))
 a_1||=[];_append(a_1,it))
(_result_1)  
end

end

require 'ast'

def connectstring(ary)
	r=[]
	s=nil
	ary.each{|a|
		if a.is_a? String
			s||=""
			s+=a
		else
			r<<s if s
			s=nil
			r<<a
		end
	}
	r<<s if s
	r
end

class AmethystParser < Amethyst
def igrammar()
 it_1=nil
a_1=nil
_result_1=nil
 autovar_1 = (([]))
while true
autovar_4=@input;r=(it=(_or(proc{autovar_2 = (([]))
(it=(_lookahead(true){(it=(seq("amethyst"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(anything());next FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
while true
autovar_3=@input;r=(it=(_lookahead(true){(it=(seq("amethyst"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it) 
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it_1 = ((autovar_2))
it=((it_1*""))
 autovar_1||=[];_append(autovar_1,it) },proc{it=((it=(grammar());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
a_1 = ((autovar_1))
_result_1 = ((a_1))
(_result_1)  
end
def grammar()
 name_1=nil
parent_1=nil
rules_1=nil
_result_1=nil
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
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
rules_1 = ((autovar_1))
(it=(token("}"));return FAIL if it==FAIL;it)
_result_1 = (Grammar.create( {:name=>name_1,:parent=>parent_1,:rules=>rules_1 }))
(_result_1)  
end
def rule()
 args_1=nil
name_1=nil
locals_1=nil
body_1=nil
_result_1=nil
bnding_1=nil
 (@locals=[];@bnding=Bnding[])
bnding_1 = ((@bnding))
name_1 = ((it=(name());return FAIL if it==FAIL;it))
args_1 = ((it=(ruleargs());return FAIL if it==FAIL;it))
(it=(token("="));return FAIL if it==FAIL;it)
body_1 = ((it=(expression());return FAIL if it==FAIL;it))
body_1 = ((_body(body_1)))
locals_1 = ((@locals.uniq))
_result_1 = (Rule.create( {:bnding=>bnding_1,:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }))
(_result_1)  
end
def expression()
 _result_1=nil
 _result_1 = ((it=(choice());return FAIL if it==FAIL;it))
(_result_1)  
end
def choice()
 _result_1=nil
ary_1=nil
 ary_1 = ((it=(listOf('sequence',proc{_result_1 = ((it=(token("|"));return FAIL if it==FAIL;it))
(_result_1) }));return FAIL if it==FAIL;it))
_result_1 = (Or.create( {:ary=>ary_1 }))
(_result_1)  
end
def sequence()
 _result_1=nil
ary_1=nil
 autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(nr());break FAIL if it==FAIL;it)
it=((it=(prefixed());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
ary_1 = ((autovar_1))
_result_1 = (Seq.create( {:ary=>ary_1 }))
(_result_1)  
end
def prefixed()
 name_1=nil
it_1=nil
expr_1=nil
m_1=nil
from_1=nil
e_1=nil
neg_1=nil
append_1=nil
one_1=nil
_result_1=nil
 (it=(_or(proc{(it=(token("&"));next FAIL if it==FAIL;it)
expr_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
_result_1 = ((Pred[expr_1])) },proc{(it=(_or(proc{neg_1 = ((it=(token("&"));next FAIL if it==FAIL;it))},proc{neg_1 = ((it=(token("~"));next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)
m_1 = ((it=(prefixed());next FAIL if it==FAIL;it))
_result_1 = ((Lookahead[m_1,neg_1=="~"])) },proc{(it=(_or(proc{from_1 = ((it=(modifier());next FAIL if it==FAIL;it))},proc{(it=(token(""));next FAIL if it==FAIL;it)
(it=(_lookahead(false){(it=(regch(/[.:\[]/));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(_or(proc{(it=(token("."));next FAIL if it==FAIL;it)},proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
from_1 = ((Apply["anything"])) }));next FAIL if it==FAIL;it)
while true
autovar_1=@input;r=(it=(_lookahead(true){(it=(_());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_or(proc{(it=(token("=>"));next FAIL if it==FAIL;it)
it_1 = ((it=(prefixed());next FAIL if it==FAIL;it))
(from_1=_Pass(from_1,it_1)) },proc{(it=(token("["));next FAIL if it==FAIL;it)
it_1 = ((it=(expression());next FAIL if it==FAIL;it))
(from_1=Enter[from_1,it_1])
(it=(token("]"));next FAIL if it==FAIL;it) },proc{(it=(_or(proc{one_1 = ((it=(token("*"));next FAIL if it==FAIL;it))},proc{one_1 = ((it=(token("+"));next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)
from_1 = ((Many[from_1,one_1=="+"])) },proc{(it=(token("?"));next FAIL if it==FAIL;it)
from_1 = ((Or[from_1,Apply["empty"]])) },proc{(it=(token(":"));next FAIL if it==FAIL;it)
name_1 = ((it=(name());next FAIL if it==FAIL;it))
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
append_1 = ((true)) },proc{(it=(empty());next FAIL if it==FAIL;it)
append_1 = ((nil)) }));next FAIL if it==FAIL;it)
from_1 = ((_Set(name_1,from_1,append_1))) },proc{(it=(token(":"));next FAIL if it==FAIL;it)
e_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
from_1 = ((Seq[_Set("it",from_1) , Act[e_1] ])) }));break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
_result_1 = ((from_1)) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def modifier()
 c_1=nil
_result_1=nil
 (it=(_or(proc{_result_1 = ((it=(term());next FAIL if it==FAIL;it))},proc{(it=(token("#"));next FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(_lookahead(true){(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
c_1 = ((autovar_1))
_result_1 = ((Comment[c_1])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def term()
 it_1=nil
expr_1=nil
x_1=nil
s_1=nil
_result_1=nil
cls_1=nil
 (it=(_or(proc{cls_1 = ((it=(className());next FAIL if it==FAIL;it))
_result_1 = ((Apply["clas",cls_1])) },proc{(it=(token("nested"));next FAIL if it==FAIL;it)
(it=(seq("("));next FAIL if it==FAIL;it)
expr_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
_result_1 = ((Nested[expr_1])) },proc{(it=(token("break"));next FAIL if it==FAIL;it)
_result_1 = ((Seq[Cut[],Stop[]])) },proc{_result_1 = ((it=(application());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(key());next FAIL if it==FAIL;it))},proc{(it=(_or(proc{(it=(token("->"));next FAIL if it==FAIL;it)
x_1 = ((it=(atomicHostExpr());next FAIL if it==FAIL;it)) },proc{(it=(token(""));next FAIL if it==FAIL;it)
x_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it)) }));next FAIL if it==FAIL;it)
_result_1 = ((Act[x_1])) },proc{(it=(token("\""));next FAIL if it==FAIL;it)
while true
autovar_1=@input;r=(it=(_or(proc{(it=(seq("\""));next FAIL if it==FAIL;it)
@cut=true;it
@stop=true;it },proc{it=((it=(eChar());next FAIL if it==FAIL;it))
 s_1||=[];_append(s_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
_result_1 = ((Apply["token" ,quote(s_1)])) },proc{(it=(token("'"));next FAIL if it==FAIL;it)
while true
autovar_2=@input;r=(it=(_or(proc{(it=(seq("\'"));next FAIL if it==FAIL;it)
@cut=true;it
@stop=true;it },proc{it=((it=(eChar());next FAIL if it==FAIL;it))
 s_1||=[];_append(s_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
_result_1 = ((Apply["seq"   ,quote(s_1)])) },proc{it_1 = ((it=(number());next FAIL if it==FAIL;it))
_result_1 = ((Apply["exactly",it_1])) },proc{(it=(token("<"));next FAIL if it==FAIL;it)
while true
autovar_3=@input;r=(it=(_or(proc{(it=(token(">"));next FAIL if it==FAIL;it)
@cut=true;it
@stop=true;it },proc{it=((it=(eChar());next FAIL if it==FAIL;it))
 x_1||=[];_append(x_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
_result_1 = ((Apply["regch","/[#{x_1}]/"])) },proc{(it=(token("("));next FAIL if it==FAIL;it)
x_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(token(")"));next FAIL if it==FAIL;it)
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
_result_1 = ((it=(collect(x_1));next FAIL if it==FAIL;it)) },proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = ((x_1)) }));next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def application()
 arg_1=nil
_result_1=nil
rule_1=nil
klas_1=nil
 (it=(_or(proc{klas_1 = ((it=(name());next FAIL if it==FAIL;it))
(it=(seq("::"));next FAIL if it==FAIL;it)
rule_1 = ((it=(name());next FAIL if it==FAIL;it))
rule_1 = (([klas_1,rule_1])) },proc{rule_1 = ((it=(name());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
arg_1 = ((it=(argsOpt('(',')'));return FAIL if it==FAIL;it))
_result_1 = ((Apply[rule_1,arg_1]))
(_result_1)  
end
def key()
 args_1=nil
name_1=nil
n_1=nil
vars_1=nil
_result_1=nil
 (it=(_or(proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_1 = ((it=(className());next FAIL if it==FAIL;it))
args_1 = ((it=(argsOpt('[',']'));next FAIL if it==FAIL;it))
vars_1 = ((Object.const_get(name_1).instance_variable_get(:@attrs)))
_result_1 = (Result.create( {:name=>name_1,:args=>args_1,:vars=>vars_1 })) },proc{(it=(token("@"));next FAIL if it==FAIL;it)
name_1 = ((it=(name());next FAIL if it==FAIL;it))
_result_1 = (Key.create( {:name=>name_1,:args=>args_1 })) },proc{(it=(token("@@"));next FAIL if it==FAIL;it)
n_1 = ((it=(name());next FAIL if it==FAIL;it))
_result_1 = ((Global[n_1])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def collect(ors_1)
 _result_1=nil
 _result_1 = ((a=autovar; Seq[Or[{:ary=>ors_1.ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]]))
(_result_1)  
end
def eChar()
 c_1=nil
_result_1=nil
 (it=(_or(proc{(it=(seq("\\"));next FAIL if it==FAIL;it)
c_1 = ((it=(char());next FAIL if it==FAIL;it))
_result_1 = (("\\#{c_1}")) },proc{_result_1 = ((it=(_args('#{','}'));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(char());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def ruleargs()
 _result_1=nil
 autovar_1 = ((it=(argsOpt('(',')'));return FAIL if it==FAIL;it))
(it=(_pass(false,autovar_1){autovar_2 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){_result_1 = ((it=(addargs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(_result_1)  
end
def addargs()
 result_1=nil
name_1=nil
_result_1=nil
 while true
autovar_2=@input;r=autovar_1 = ((it=(clas(Args));break FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
it=((_Local(name_1) ))
 result_1||=[];_append(result_1,it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
_result_1 = ((result_1 || []))
(_result_1)  
end
def nr()
 _result_1=nil
 _result_1 = ((it=(_lookahead(true){(it=(name());next FAIL if it==FAIL;it)
(it=(argsOpt('(',')'));next FAIL if it==FAIL;it)
(it=(token("="));next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it))
(_result_1)  
end
def argsOpt(o_1,c_1)
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(args(o_1,c_1));next FAIL if it==FAIL;it))},proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = (([])) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def args(o_1,c_1)
 r_1=nil
_result_1=nil
 r_1 = ((it=(__args(o_1,c_1));return FAIL if it==FAIL;it))
autovar_1 = ((r_1+[',']))
(it=(_pass(false,autovar_1){autovar_2 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){_result_1 = ((it=(procargs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(_result_1)  
end
def _args(o_1,c_1)
 r_1=nil
_result_1=nil
 r_1 = ((it=(__args(o_1,c_1));return FAIL if it==FAIL;it))
_result_1 = ((Args[{:ary=>([o_1]+r_1+[c_1])}]))
(_result_1)  
end
def __args(o_1,c_1)
 r_1=nil
_result_1=nil
 (it=(seq(o_1));return FAIL if it==FAIL;it)
(it=(token(""));return FAIL if it==FAIL;it)
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(rubyarg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
r_1 = ((autovar_1))
(it=(seq(c_1));return FAIL if it==FAIL;it)
_result_1 = ((r_1))
(_result_1)  
end
def rubyarg()
 n_1=nil
e_1=nil
s_1=nil
_result_1=nil
 (it=(_or(proc{(it=(seq("`"));next FAIL if it==FAIL;it)
e_1 = ((it=(expression());next FAIL if it==FAIL;it))
(it=(seq("`"));next FAIL if it==FAIL;it)
_result_1 = ((Exp[_body(e_1)])) },proc{_result_1 = ((it=(_args('(',')'));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(_args('[',']'));next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(_args('{','}'));next FAIL if it==FAIL;it))},proc{it=((it=(seq("\""));next FAIL if it==FAIL;it))
 s_1||=[];_append(s_1,it)
autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(_or(proc{(it=(seq("\""));next FAIL if it==FAIL;it)
@cut=true;it
it=(@stop=true;it)
 autovar_1||=[];_append(autovar_1,it) },proc{it=((it=(eChar());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=((autovar_1))
 s_1||=[];_append(s_1,it)
_result_1 = ((Strin[connectstring(s_1)])) },proc{it=((it=(seq("\'"));next FAIL if it==FAIL;it))
 s_1||=[];_append(s_1,it)
autovar_3 = (([]))
while true
autovar_4=@input;r=(it=(_or(proc{(it=(seq("\'"));next FAIL if it==FAIL;it)
@cut=true;it
it=(@stop=true;it)
 autovar_3||=[];_append(autovar_3,it) },proc{it=((it=(eChar());next FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
it=((autovar_3))
 s_1||=[];_append(s_1,it)
_result_1 = ((Strin[connectstring(s_1)])) },proc{(it=(_or(proc{n_1 = ((it=(token(":@"));next FAIL if it==FAIL;it))},proc{n_1 = ((it=(regch(/[$.:]/));next FAIL if it==FAIL;it))},proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
(it=(_lookahead(true){(it=(_());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(name());next FAIL if it==FAIL;it))
 n_1||=[];_append(n_1,it)
_result_1 = ((n_1)) },proc{(it=(_lookahead(true){(it=(_());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = ((it=(key());next FAIL if it==FAIL;it)) },proc{_result_1 = ((it=(regch(/[^`{}()'"\[\]]/));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def procargs()
 _result_1=nil
 (@ary=[];@tmp=[])
while true
autovar_1=@input;r=(it=(_or(proc{(it=(seq(","));next FAIL if it==FAIL;it)
(@ary<<Args[{:ary=>@tmp}];@tmp=[]) },proc{(it=(procargs2());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
_result_1 = ((@ary))
(_result_1)  
end
def procargs2()
 a_1=nil
_result_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(procargs2());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
_result_1 = ((autovar_2)) });next FAIL if it==FAIL;it) },proc{a_1 = ((it=(anything());next FAIL if it==FAIL;it))
_result_1 = ((@tmp<<a_1)) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def nameFirst()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(letter());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("_"));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def nameRest()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(nameFirst());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(digit());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def className()
 it_1=nil
_result_1=nil
 (it=(token(""));return FAIL if it==FAIL;it)
it=((it=(upper());return FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=((autovar_2))
 autovar_1||=[];_append(autovar_1,it)
it_1 = ((autovar_1))
_result_1 = ((leterize(it_1*"")))
(_result_1)  
end
def name()
 it_1=nil
_result_1=nil
 (it=(token(""));return FAIL if it==FAIL;it)
it=((it=(nameFirst());return FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=((autovar_2))
 autovar_1||=[];_append(autovar_1,it)
it_1 = ((autovar_1))
_result_1 = ((leterize(it_1*"")))
(_result_1)  
end
def inlineHostExpr()
 _result_1=nil
 _result_1 = ((it=(args('{','}'));return FAIL if it==FAIL;it))
(_result_1)  
end
def number()
 _result_1=nil
 autovar_1 = (([]))
it=((it=(regch(/[0-9]/));return FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
while true
autovar_2=@input;r=it=((it=(regch(/[0-9]/));break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
_result_1 = ((autovar_1))
(_result_1)  
end
def atomicHostExpr()
 _result_1=nil
s_1=nil
 autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(_lookahead(true){(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
s_1 = ((autovar_1))
autovar_3 = (("{#{s_1*""}}"))
(it=(_pass(false,autovar_3){autovar_4 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){_result_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(_result_1)  
end

end

class AmethystOptimizer < Amethyst
def itrans()
 r_1=nil
_result_1=nil
 autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(_or(proc{it=((it=(char());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)},proc{it=((it=(trans());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
r_1 = ((autovar_1))
_result_1 = ((r_1))
(_result_1)  
end
def trans()
 args_1=nil
name_1=nil
expr_1=nil
locals_1=nil
parent_1=nil
enter_1=nil
body_1=nil
vars_1=nil
pred_1=nil
rules_1=nil
o_1=nil
to_1=nil
neg_1=nil
append_1=nil
var_1=nil
ary_1=nil
_result_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Grammar));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){name_1 = ( self['name'])
parent_1 = ( self['parent'])
autovar_2 = ( self['rules'])
(it=(_pass(false,autovar_2){rules_1 = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Grammar.create( {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:ary=>ary_1 })) },proc{autovar_3 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){name_1 = ( self['name'])
autovar_4 = ( self['args'])
(it=(_pass(false,autovar_4){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_5 = ( self['body'])
(it=(_pass(false,autovar_5){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ( self['locals']) });next FAIL if it==FAIL;it)
_result_1 = (Rule.create( {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1 })) },proc{autovar_6 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_6){autovar_7 = (([]))
while true
autovar_8=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_7||=[];_append(autovar_7,it)
 break FAIL if r==FAIL
 (autovar_8=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_8
ary_1 = ((autovar_7)) });next FAIL if it==FAIL;it)
_result_1 = (Or.create( {:ary=>ary_1 })) },proc{autovar_9 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_9){autovar_10 = (([]))
while true
autovar_11=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_10||=[];_append(autovar_10,it)
 break FAIL if r==FAIL
 (autovar_11=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_11
ary_1 = ((autovar_10)) });next FAIL if it==FAIL;it)
_result_1 = (Seq.create( {:ary=>ary_1 })) },proc{autovar_12 = ((it=(clas(Lookahead));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_12){it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
neg_1 = ( self['neg']) });next FAIL if it==FAIL;it)
_result_1 = (Lookahead.create( {:ary=>ary_1,:neg=>neg_1 })) },proc{autovar_13 = ((it=(clas(Comment));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_13){autovar_14 = (([]))
while true
autovar_15=@input;r=it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_14||=[];_append(autovar_14,it)
 break FAIL if r==FAIL
 (autovar_15=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_15
ary_1 = ((autovar_14)) });next FAIL if it==FAIL;it)
_result_1 = (Comment.create( {:ary=>ary_1 })) },proc{autovar_16 = ((it=(clas(Many));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_16){it=((it=(trans());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
o_1 = ( self['o']) });next FAIL if it==FAIL;it)
_result_1 = (Many.create( {:ary=>ary_1,:o=>o_1 })) },proc{autovar_17 = ((it=(clas(Apply));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_17){it=((it=(anything());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)
it=((it=(args());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it) });next FAIL if it==FAIL;it)
_result_1 = (Apply.create( {:ary=>ary_1 })) },proc{autovar_18 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_18){autovar_19 = ( self['name'])
(it=(_pass(false,autovar_19){name_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_20 = ( self['expr'])
(it=(_pass(false,autovar_20){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( self['append']) });next FAIL if it==FAIL;it)
_result_1 = (Set.create( {:name=>name_1,:ary=>ary_1,:expr=>expr_1,:append=>append_1 })) },proc{autovar_21 = ((it=(clas(Act));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_21){ary_1 = ((it=(args());next FAIL if it==FAIL;it))
pred_1 = ( self['pred']) });next FAIL if it==FAIL;it)
_result_1 = (Act.create( {:ary=>ary_1,:pred=>pred_1 })) },proc{autovar_22 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_22){name_1 = ( self['name'])
autovar_23 = ( self['args'])
(it=(_pass(false,autovar_23){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_24 = ( self['vars'])
(it=(_pass(false,autovar_24){vars_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Result.create( {:name=>name_1,:args=>args_1,:ary=>ary_1,:expr=>expr_1,:vars=>vars_1 })) },proc{autovar_25 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_25){autovar_26 = (([]))
while true
autovar_27=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_26||=[];_append(autovar_26,it)
 break FAIL if r==FAIL
 (autovar_27=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_27
ary_1 = ((autovar_26)) });next FAIL if it==FAIL;it)
_result_1 = (Args.create( {:ary=>ary_1,:o=>o_1 })) },proc{autovar_28 = ((it=(clas(Key));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_28){name_1 = ( self['name'])});next FAIL if it==FAIL;it)
_result_1 = (Key.create( {:name=>name_1,:args=>args_1,:ary=>ary_1,:expr=>expr_1 })) },proc{autovar_29 = ((it=(clas(Pass));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_29){autovar_30 = ( self['to'])
(it=(_pass(false,autovar_30){to_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_31 = ( self['var'])
(it=(_pass(false,autovar_31){var_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
enter_1 = ( self['enter']) });next FAIL if it==FAIL;it)
_result_1 = (Pass.create( {:ary=>ary_1,:to=>to_1,:var=>var_1,:enter=>enter_1 })) },proc{autovar_32 = ((it=(clas(Cut));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_32){ });next FAIL if it==FAIL;it)
_result_1 = (Cut.create( {:ary=>ary_1 })) },proc{autovar_33 = ((it=(clas(Stop));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_33){ });next FAIL if it==FAIL;it)
_result_1 = (Stop.create( {:ary=>ary_1 })) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def transfn()
 _result_1=nil
 _result_1 = ((it=(trans());return FAIL if it==FAIL;it))
(_result_1)  
end
def transs()
 _result_1=nil
t_1=nil
 autovar_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
t_1 = ((autovar_2)) });return FAIL if it==FAIL;it)
_result_1 = ((t_1))
(_result_1)  
end
def args()
 a_1=nil
_result_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Array));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
a_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1)) },proc{autovar_4 = (([]))
while true
autovar_5=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_4||=[];_append(autovar_4,it)
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5
_result_1 = ((autovar_4)) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 _result_1=nil
ary_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
ary_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = (Args.create( {:ary=>ary_1 })) },proc{autovar_4 = ((it=(clas(Strin));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){autovar_5 = (([]))
while true
autovar_6=@input;r=(it=(_or(proc{it=((it=(char());next FAIL if it==FAIL;it))
 autovar_5||=[];_append(autovar_5,it)},proc{it=((it=(arg());next FAIL if it==FAIL;it))
 autovar_5||=[];_append(autovar_5,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
ary_1 = ((autovar_5)) });next FAIL if it==FAIL;it)
_result_1 = (Strin.create( {:ary=>ary_1 })) },proc{autovar_7 = ((it=(clas(Exp));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_7){it=((it=(transfn());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
_result_1 = (Exp.create( {:ary=>ary_1 })) },proc{_result_1 = ((it=(anything());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end



class AmethystOptimizer2 < AmethystOptimizer
def trans()
 _result_1=nil
ary_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
ary_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
(ary_1=ary_1.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
(it=(_or(proc{(it=((ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
_result_1 = ((ary_1[0])) },proc{_result_1 = (Or.create( {:ary=>ary_1 }))}));next FAIL if it==FAIL;it) },proc{autovar_4 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){autovar_5 = (([]))
while true
autovar_6=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
ary_1 = ((autovar_5)) });next FAIL if it==FAIL;it)
(ary_1=ary_1.map{|a| (a.is_a?(Seq)) ? a.ary : a}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
(it=(_or(proc{(it=((ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
_result_1 = ((ary_1[0])) },proc{_result_1 = (Seq.create( {:ary=>ary_1 }))}));next FAIL if it==FAIL;it) },proc{_result_1 = ((super))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end




class Traverser < Amethyst
def traverse_item()
 a_1=nil
_result_1=nil
 (it=(_or(proc{a_1 = ((it=(visit());next FAIL if it==FAIL;it))
(@changed=true)
_result_1 = ((a_1)) },proc{autovar_1 = ((it=(clas(Array));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(traverse_item());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
_result_1 = ((autovar_2)) });next FAIL if it==FAIL;it) },proc{autovar_4 = ((it=(clas(AmethystAST));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){_result_1 = ((it=(traverse());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) },proc{_result_1 = ((it=(anything());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def traverse()
 _result_1=nil
 while true
autovar_1=@input;r=(it=(anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
 self['this']
autovar_2 = ((( self['this'].instance_variables).map{|v| [v, self['this'].instance_variable_get(v)] }))
(it=(_pass(false,autovar_2){autovar_3 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){while true
autovar_5=@input;r=autovar_4 = ((it=(anything());break FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){(it=(anything());next FAIL if it==FAIL;it)
(it=(traverse_item());next FAIL if it==FAIL;it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
_result_1 = ( self['this'])
(_result_1)  
end

end



class Seq_Or_Optimizer < Traverser
def root()
 _result_1=nil
 _result_1 = ((it=(traverse());return FAIL if it==FAIL;it))
(_result_1)  
end
def visit()
 _result_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){(it=(traverse());next FAIL if it==FAIL;it)
( self['this'].ary= self['ary'].map{|i| (i.is_a?(Seq)) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
_result_1 = ((( self['ary'].size==1) ?  self['ary'][0] :  self['this'])) });next FAIL if it==FAIL;it) },proc{autovar_2 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){(it=(traverse());next FAIL if it==FAIL;it)
( self['this'].ary= self['ary'].map{|i| (i.is_a?(Or )) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
_result_1 = ((( self['ary'].size==1) ?  self['ary'][0] :  self['this'])) });next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)
(_result_1)  
end

end

class Analyze_Variables2 < Traverser
def itrans()
 rules_1=nil
_result_1=nil
 autovar_1 = (([]))
while true
autovar_8=@input;r=(it=(_or(proc{autovar_2 = ((it=(clas(Grammar));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){autovar_3 = ( self['rules'])
(it=(_pass(false,autovar_3){autovar_4 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){autovar_5 = (([]))
while true
autovar_7=@input;r=autovar_6 = ((it=(clas(Rule));break FAIL if it==FAIL;it))
(it=(_pass(true,autovar_6){it=((it=(root());next FAIL if it==FAIL;it))
 autovar_5||=[];_append(autovar_5,it)});break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_7=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_7
rules_1 = ((autovar_5)) });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
( self['rules']=rules_1)
it=( self['this'])
 autovar_1||=[];_append(autovar_1,it) });next FAIL if it==FAIL;it) },proc{it=((it=(anything());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_8=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_8
_result_1 = ((autovar_1))
(_result_1)  
end
def root()
 _result_1=nil
 autovar_1 = ( self['this'])
(it=(_pass(false,autovar_1){autovar_2 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){(@variables=Hash.new{|k,v| k[v]=v} ;( self['locals']+ self['args']).each{|v| @variables[v[0]]=v})
(@locals= self['locals'])
(it=(traverse());next FAIL if it==FAIL;it)
( self['body']=Seq[{:ary=>[ self['body']] }])
_result_1 = ( self['this']) });next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(_result_1)  
end
def visit()
 a_1=nil
_result_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){(it=(traverse());next FAIL if it==FAIL;it)
autovar_2 = (( self['ary'].map{|a_1| @variables[a_1] }))
(it=(_pass(false,autovar_2){autovar_3 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){a_1 = ((it=(flat());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
( self['ary']=connectstring(a_1.flatten))
_result_1 = ( self['this']) });next FAIL if it==FAIL;it) },proc{autovar_4 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){( self['vars']=@locals.select{|a_1|  self['vars'].include? a_1[0].to_sym}.uniq)
_result_1 = ( self['this']) });next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def flat()
 _result_1=nil
 autovar_1 = (([]))
while true
autovar_4=@input;r=(it=(_or(proc{autovar_2 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){it=((it=(flat());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)});next FAIL if it==FAIL;it) },proc{autovar_3 = ((it=(clas(Strin));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){it=((it=(flat());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)});next FAIL if it==FAIL;it) },proc{it=((it=(anything());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
_result_1 = ((autovar_1))
(_result_1)  
end

end

class Dead_Code_Detector < AmethystOptimizer
def trans()
 v_1=nil
args_1=nil
name_1=nil
locals_1=nil
body_1=nil
reachable_1=nil
var_1=nil
_result_1=nil
this_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){name_1 = ( self['name'])
(@edges=Oriented_Graph.new ; @marked=[])
autovar_2 = ( self['args'])
(it=(_pass(false,autovar_2){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_3 = ( self['body'])
(it=(_pass(false,autovar_3){(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
body_1 = ( self['body'])
locals_1 = ( self['locals'])
reachable_1 = ((@edges.reachable(@marked))) });next FAIL if it==FAIL;it)
_result_1 = (Rule.create( {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:reachable=>reachable_1 })) },proc{autovar_4 = ((it=(clas(Apply));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
var_1 = ((it=(vars_in());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((@marked +=var_1)) },proc{autovar_5 = ((it=(clas(Pass));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){autovar_6 = ( self['var'])
(it=(_pass(false,autovar_6){var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
(@marked+=var_1)
autovar_7 = ( self['to'])
(it=(_pass(false,autovar_7){_result_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{autovar_8 = ((it=(clas(Act));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_8){this_1 = ( self['this'])
(@marked<<this_1 if  self['pred'])
var_1 = ((it=(vars_in());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((var_1.each{|v_1| @edges.add(v_1,this_1); @edges.add(this_1,v_1); @marked<<this_1 if v_1.is_a?(Global) || v_1.is_a?(Key) || v_1[0]=="_result"})) },proc{autovar_9 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_9){v_1 = ( self['name'])
autovar_10 = ( self['expr'])
(it=(_pass(false,autovar_10){(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_11 = ( self['expr'])
(it=(_pass(false,autovar_11){var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = ((var_1.each{|w| @edges.add(v_1,w)})) },proc{autovar_12 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_12){autovar_13 = ( self['vars'])
(it=(_pass(false,autovar_13){autovar_14 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_14){var_1 = ((it=(vars_in());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
v_1 = ( self['this']) });next FAIL if it==FAIL;it)
_result_1 = ((var_1.each{|w| @edges.add(v_1,w) })) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def vars_in()
 _result_1=nil
ary_1=nil
 (ary_1=[])
while true
autovar_14=@input;r=(it=(_or(proc{autovar_1 = ((it=(clas(Global));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){it=( self['this'])
 ary_1||=[];_append(ary_1,it)
while true
autovar_2=@input;r=(it=(anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2 });next FAIL if it==FAIL;it) },proc{autovar_3 = ((it=(clas(Act));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){it=( self['this'])
 ary_1||=[];_append(ary_1,it)
while true
autovar_4=@input;r=(it=(anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4 });next FAIL if it==FAIL;it) },proc{autovar_5 = ((it=(clas(Key));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){it=( self['this'])
 ary_1||=[];_append(ary_1,it)
while true
autovar_6=@input;r=(it=(anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6 });next FAIL if it==FAIL;it) },proc{autovar_7 = ((it=(clas(Exp));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_7){(it=(trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) },proc{autovar_8 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_8){it=( self['this'])
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{autovar_9 = ((it=(clas(Strin));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_9){it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{autovar_10 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_10){it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{autovar_11 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_11){autovar_12 = ( self['name'])
(it=(_pass(false,autovar_12){it=((it=(vars_in());next FAIL if it==FAIL;it))
 ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{autovar_13 = ((it=(clas(Local));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_13){(it=(anything());next FAIL if it==FAIL;it)
it=( self['this'])
 ary_1||=[];_append(ary_1,it) });next FAIL if it==FAIL;it) },proc{(it=(anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_14=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_14
_result_1 = ((ary_1))
(_result_1)  
end

end


class Dead_Code_Deleter < AmethystOptimizer
def trans()
 args_1=nil
it_1=nil
name_1=nil
expr_1=nil
locals_1=nil
body_1=nil
append_1=nil
_result_1=nil
this_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){name_1 = ( self['name'])
it_1 = ( self['reachable'])
(@reachable=it_1)
autovar_2 = ( self['args'])
(it=(_pass(false,autovar_2){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_3 = ( self['body'])
(it=(_pass(false,autovar_3){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ( self['locals']) });next FAIL if it==FAIL;it)
_result_1 = (Rule.create( {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 })) },proc{autovar_4 = ((it=(clas(Act));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){this_1 = ( self['this'])
while true
autovar_5=@input;r=(it=(anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5 });next FAIL if it==FAIL;it)
_result_1 = ((@reachable[this_1] ? this_1 : Act[])) },proc{autovar_6 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_6){name_1 = ( self['name'])
autovar_7 = ( self['expr'])
(it=(_pass(false,autovar_7){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
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
 rest_1=nil
fst_1=nil
first_1=nil
_result_1=nil
ary_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){(it=(_lookahead(false){autovar_2 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){first_1 = ((it=(trans());next FAIL if it==FAIL;it))
while true
autovar_3=@input;r=(it=(anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3 });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
while true
autovar_7=@input;r=autovar_4 = ((it=(clas(Seq));break FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){fst_1 = ((it=(trans());next FAIL if it==FAIL;it))
(it=((first_1.isomorphic(fst_1))||FAIL);next FAIL if it==FAIL;it)
autovar_5 = (([]))
while true
autovar_6=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
rest_1 = ((autovar_5))
it=((Seq[{:ary=>rest_1}]))
 ary_1||=[];_append(ary_1,it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_7=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_7 });next FAIL if it==FAIL;it)
_result_1 = ((Seq[first_1 ,Or[{:ary=>ary_1}] ])) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end


class Move_Assignments < AmethystOptimizer
def trans()
 name_1=nil
expr_1=nil
append_1=nil
_result_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){name_1 = ( self['name'])
autovar_2 = ( self['expr'])
(it=(_pass(false,autovar_2){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( self['append'])
autovar_3 = ((expr_1))
(it=(_pass(false,autovar_3){_result_1 = ((it=(move(append_1,name_1));next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def move(append_1,name_1)
 it_1=nil
enter_1=nil
to_1=nil
var_1=nil
el_1=nil
_result_1=nil
ary_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(move(append_1,name_1));break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
ary_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = (Or.create( {:ary=>ary_1 })) },proc{autovar_4 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){autovar_5 = (([]))
while true
autovar_7=@input;r=el_1 = ((it=(anything());break FAIL if it==FAIL;it))
(it=(_or(proc{(it=(_lookahead(false){(it=(eof());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
autovar_6 = ((el_1))
(it=(_pass(false,autovar_6){it=((it=(move(append_1,name_1));next FAIL if it==FAIL;it))
 autovar_5||=[];_append(autovar_5,it)});next FAIL if it==FAIL;it) },proc{it=((el_1))
 autovar_5||=[];_append(autovar_5,it)}));break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_7=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_7
ary_1 = ((autovar_5)) });next FAIL if it==FAIL;it)
_result_1 = (Seq.create( {:ary=>ary_1 })) },proc{autovar_8 = ((it=(clas(Pass));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_8){var_1 = ( self['var'])
autovar_9 = ( self['to'])
(it=(_pass(false,autovar_9){to_1 = ((it=(move(append_1,name_1));next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
enter_1 = ( self['enter']) });next FAIL if it==FAIL;it)
_result_1 = (Pass.create( {:ary=>ary_1,:var=>var_1,:to=>to_1,:enter=>enter_1 })) },proc{it_1 = ((it=(anything());next FAIL if it==FAIL;it))
_result_1 = ((_Set(name_1,it_1,append_1))) }));return FAIL if it==FAIL;it)
(_result_1)  
end

end

class Renamer < AmethystOptimizer
def trans()
 args_1=nil
name_1=nil
locals_1=nil
body_1=nil
_result_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){(@newvars={})
name_1 = ( self['name'])
autovar_2 = ( self['args'])
(it=(_pass(false,autovar_2){args_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
locals_1 = ( self['locals'])
autovar_3 = ( self['body'])
(it=(_pass(false,autovar_3){body_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (Rule.create( {:name=>name_1,:args=>args_1,:locals=>locals_1,:body=>body_1 })) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 name_1=nil
_result_1=nil
this_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Local));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
this_1 = ( self['this']) });next FAIL if it==FAIL;it)
_result_1 = ((@newvars[this_1] ? @newvars[this_1] : ($av+=1; @newvars[this_1]=_Local(name_1,$av) ;@newvars[this_1] ))) },proc{_result_1 = ((it=(super());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end

end

class Inliner < AmethystOptimizer
def inline(rule_1,grammar_1)
 args_1=nil
name_1=nil
body_1=nil
_result_1=nil
 autovar_1 = ((rule_1))
(it=(_pass(false,autovar_1){autovar_2 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){name_1 = ( self['name'])
args_1 = ( self['args'])
 self['locals']
body_1 = ( self['body']) });next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(@result=autovar;@name=name_1;@args=args_1;@body=Set[{:name=>@result ,:expr=>body_1}] )
autovar_3 = ((grammar_1))
(it=(_pass(false,autovar_3){autovar_4 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){_result_1 = ((it=(itrans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
(_result_1)  
end
def trans()
 args_1=nil
name_1=nil
_result_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Apply));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
(it=((name_1==@name)||FAIL);next FAIL if it==FAIL;it)
autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
args_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = ((body=@body;puts args_1.inspect; args_1.each_index{|i| body=Seq[Set[{:name=>@args[i],:expr=>Act[args_1[i]]}],body] } ; Seq[body,Act[@result]])) },proc{_result_1 = ((super))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def inlineit()
 grammar_1=nil
name_1=nil
_result_1=nil
rule_1=nil
 name_1 = ((it=(anything());return FAIL if it==FAIL;it))
grammar_1 = ((it=(anything());return FAIL if it==FAIL;it))
rule_1 = ((it=(getrule(name_1,grammar_1));return FAIL if it==FAIL;it))
_result_1 = ((it=(inline(rule_1,grammar_1));return FAIL if it==FAIL;it))
(_result_1)  
end
def getrule(name_1,grammar_1)
 n_1=nil
_result_1=nil
rule_1=nil
 autovar_1 = ((grammar_1))
(it=(_pass(false,autovar_1){autovar_2 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){while true
autovar_8=@input;r=(it=(_or(proc{autovar_3 = ((it=(clas(Grammar));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){autovar_4 = ( self['rules'])
(it=(_pass(false,autovar_4){autovar_5 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_5){while true
autovar_7=@input;r=autovar_6 = ((it=(clas(Rule));break FAIL if it==FAIL;it))
(it=(_pass(true,autovar_6){n_1 = ( self['name'])
(it=(_or(proc{(it=((n_1==name_1)||FAIL);next FAIL if it==FAIL;it)
rule_1 = ( self['this']) },proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_7=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_7});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{(it=(anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_8=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_8});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
_result_1 = ((Renamer.new.parse(:trans, [rule_1])))
(_result_1)  
end

end

def varname(vh,name,number)
	 vh[name][number]=vh[name].size+1 if !vh[name][number]
	 "#{name}_#{vh[name][number]}"
end
class AmethystTranslator < Amethyst
def itrans()
 r_1=nil
_result_1=nil
 autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(_or(proc{it=((it=(char());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)},proc{it=((it=(trans());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
r_1 = ((autovar_1))
_result_1 = ((r_1*""))
(_result_1)  
end
def trans()
 name_1=nil
expr_1=nil
parent_1=nil
enter_1=nil
argss_1=nil
body_1=nil
vars_1=nil
pred_1=nil
o_1=nil
to_1=nil
neg_1=nil
ors_1=nil
append_1=nil
var_1=nil
_result_1=nil
t_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Grammar));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){name_1 = ( self['name'])
parent_1 = ( self['parent'])
autovar_2 = ( self['rules'])
(it=(_pass(false,autovar_2){body_1 = ((it=(transs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (("class #{name_1} < #{parent_1}\n#{body_1}\nend\n")) },proc{autovar_3 = ((it=(clas(Rule));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_3){(@varhash=Hash.new{|h,k| h[k]={}}  )
(it=(rw('return',proc{name_1 = ( self['name'])
autovar_4 = ( self['args'])
(it=(_pass(false,autovar_4){argss_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_5 = ( self['body'])
(it=(_pass(false,autovar_5){_result_1 = (body_1 = ((it=(trans());next FAIL if it==FAIL;it)))});next FAIL if it==FAIL;it)
(_result_1) }));next FAIL if it==FAIL;it)
_result_1 = (("def #{name_1}(#{argss_1})\n #{@varhash.select{|nam,b| (nam!="autovar") && (! self['args'].map{|l| l[0]}.include?(nam))}.map{|nam,b| b.map{|bi,no| "#{varname(@varhash,nam,bi)}=nil\n"}}*""} #{body_1} \nend\n")) });next FAIL if it==FAIL;it) },proc{autovar_6 = ((it=(clas(Or));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_6){(it=(rw('next', proc{autovar_7 = (([]))
while true
autovar_8=@input;r=it=((it=(transfn());break FAIL if it==FAIL;it))
 autovar_7||=[];_append(autovar_7,it)
 break FAIL if r==FAIL
 (autovar_8=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_8
_result_1 = (ors_1 = ((autovar_7)))
(_result_1) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_or(#{ors_1*","})"));next FAIL if it==FAIL;it)) },proc{autovar_9 = ((it=(clas(Seq));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_9){autovar_10 = (([]))
while true
autovar_11=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_10||=[];_append(autovar_10,it)
 break FAIL if r==FAIL
 (autovar_11=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_11
t_1 = ((autovar_10)) });next FAIL if it==FAIL;it)
_result_1 = (("#{t_1*"\n"} ")) },proc{autovar_12 = ((it=(clas(Act));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_12){t_1 = ((it=(args());next FAIL if it==FAIL;it))
pred_1 = ( self['pred']) });next FAIL if it==FAIL;it)
_result_1 = ((pred_1 ?  failwrap("(#{t_1})||FAIL") : "(#{t_1})")) },proc{autovar_13 = ((it=(clas(Lookahead));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_13){neg_1 = ( self['neg'])
(it=(rw('next',proc{_result_1 = (t_1 = ((it=(trans());next FAIL if it==FAIL;it)))
(_result_1) }));next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_lookahead(#{!!neg_1}){#{t_1}}"));next FAIL if it==FAIL;it)) },proc{autovar_14 = ((it=(clas(Comment));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_14){(it=(anything());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = (("")) },proc{autovar_15 = ((it=(clas(Many));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_15){(it=(rw('break', proc{_result_1 = (t_1 = ((it=(trans());next FAIL if it==FAIL;it)))
(_result_1) } ));next FAIL if it==FAIL;it)
autovar_16 = ( self['o'])
(it=(_pass(false,autovar_16){o_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
_result_1 = (("while true\n#{o_1}=@input;r=#{t_1}\n break FAIL if r==FAIL\n (#{o_1}=@input;@stop=nil;break FAIL) if @stop==true\nend;@input=#{o_1}")) },proc{autovar_17 = ((it=(clas(Apply));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_17){autovar_18 = ((it=(clas(Array));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_18){(it=(anything());next FAIL if it==FAIL;it)
name_1 = ((it=(anything());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
argss_1 = ((it=(args());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_foreign(:#{name_1 } #{argss_1!=[] ? ",#{argss_1}" : "" })"));next FAIL if it==FAIL;it)) },proc{autovar_19 = ((it=(clas(Apply));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_19){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
argss_1 = ((it=(args());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("#{name_1}(#{argss_1})"));next FAIL if it==FAIL;it)) },proc{autovar_20 = ((it=(clas(Set));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_20){autovar_21 = ( self['name'])
(it=(_pass(false,autovar_21){name_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_22 = ( self['expr'])
(it=(_pass(false,autovar_22){expr_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
append_1 = ( self['append']) });next FAIL if it==FAIL;it)
_result_1 = ((append_1 ? "it=(#{expr_1})\n #{name_1}||=[];_append(#{name_1},it)" : "#{name_1} = (#{expr_1})")) },proc{autovar_23 = ((it=(clas(Result));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_23){name_1 = ( self['name'])
autovar_24 = ( self['args'])
(it=(_pass(false,autovar_24){argss_1 = ((it=(args());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
vars_1 = ( self['vars']) });next FAIL if it==FAIL;it)
_result_1 = (("#{name_1}.create(#{argss_1} {#{vars_1.map{|l| ":#{l[0]}=>#{varname(@varhash,l[0],l[1])}" }*","} })")) },proc{autovar_25 = ((it=(clas(Key));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_25){name_1 = ( self['name'])});next FAIL if it==FAIL;it)
_result_1 = ((" self['#{name_1}']")) },proc{autovar_26 = ((it=(clas(Pass));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_26){(it=(rw('next',proc{autovar_27 = ( self['to'])
(it=(_pass(false,autovar_27){to_1 = ((it=(trans());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
autovar_28 = ( self['var'])
(it=(_pass(false,autovar_28){var_1 = ((it=(arg());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
_result_1 = (enter_1 = ( self['enter']))
(_result_1) }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = ((it=(failwrap("_pass(#{!!enter_1},#{var_1}){#{to_1}}"));next FAIL if it==FAIL;it)) },proc{autovar_29 = ((it=(clas(Cut));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_29){ });next FAIL if it==FAIL;it)
_result_1 = (("@cut=true;it")) },proc{autovar_30 = ((it=(clas(Stop));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_30){ });next FAIL if it==FAIL;it)
_result_1 = (("@stop=true;it")) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def transfn()
 _result_1=nil
t_1=nil
 t_1 = ((it=(trans());return FAIL if it==FAIL;it))
_result_1 = (("proc{#{t_1}}" ))
(_result_1)  
end
def transs()
 _result_1=nil
t_1=nil
 autovar_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(trans());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
t_1 = ((autovar_2)) });return FAIL if it==FAIL;it)
_result_1 = ((t_1))
(_result_1)  
end
def args()
 a_1=nil
_result_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Array));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
a_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1*",")) },proc{autovar_4 = (([]))
while true
autovar_5=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_4||=[];_append(autovar_4,it)
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5
a_1 = ((autovar_4))
_result_1 = ((a_1*",")) }));return FAIL if it==FAIL;it)
(_result_1)  
end
def arg()
 number_1=nil
name_1=nil
a_1=nil
_result_1=nil
t_1=nil
 (it=(_or(proc{autovar_1 = ((it=(clas(Args));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_1){autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
a_1 = ((autovar_2)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1*"")) },proc{autovar_4 = ((it=(clas(Strin));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){autovar_5 = (([]))
while true
autovar_6=@input;r=it=((it=(arg());break FAIL if it==FAIL;it))
 autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
a_1 = ((autovar_5)) });next FAIL if it==FAIL;it)
_result_1 = ((a_1*"")) },proc{autovar_7 = ((it=(clas(Exp));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_7){t_1 = ((it=(transfn());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
_result_1 = ((t_1)) },proc{autovar_8 = ((it=(clas(Key));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_8){name_1 = ( self['name'])});next FAIL if it==FAIL;it)
_result_1 = ((" self['#{name_1}']")) },proc{autovar_9 = ((it=(clas(Local));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_9){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
number_1 = ((it=(anything());next FAIL if it==FAIL;it)) });next FAIL if it==FAIL;it)
_result_1 = ((varname(@varhash,name_1,number_1))) },proc{autovar_10 = ((it=(clas(Global));next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_10){name_1 = ((it=(anything());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it)
_result_1 = (("@#{name_1}")) },proc{_result_1 = ((it=(anything());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
(_result_1)  
end
def rw(word_1,prc_1)
 x_1=nil
_result_1=nil
 (rwo=@returnword;@returnword=word_1)
x_1 = ((it=(apply(prc_1));return FAIL if it==FAIL;it))
_result_1 = ((@returnword=rwo;x_1))
(_result_1)  
end
def failwrap(s_1)
 _result_1=nil
 _result_1 = (("(it=(#{s_1});#{@returnword} FAIL if it==FAIL;it)" ))
(_result_1)  
end

end

