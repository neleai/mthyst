class Amethyst < AmethystCore
def regch(regex_1)
 c_1=nil
_result_1=nil
 it=((it=(it=char());return FAIL if it==FAIL;it))
c_1 = it
(it=(it=(regex_1.match(c_1))||FAIL);return FAIL if it==FAIL;it)
it=(it=c_1)
_result_1 = it
it=_result_1  
end
def eof()
 _result_1=nil
 it=((it=(_lookahead(true){(it=(it=anything());next FAIL if it==FAIL;it)});return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def empty()
 _result_1=nil
 it=(it=(nil))
_result_1 = it
it=_result_1  
end
def char()
 c_1=nil
_result_1=nil
 it=((it=(it=anything());return FAIL if it==FAIL;it))
c_1 = it
(it=(it=(c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
it=(it=c_1)
_result_1 = it
it=_result_1  
end
def endline()
 _result_1=nil
 (it=(_or(proc{it=((it=(it=seq("\r\n"));next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=seq("\r"));next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=seq("\n"));next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def space()
 _result_1=nil
 it=((it=(it=regch(/[\s\t\r\n\f]/));return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def spaces()
 _result_1=nil
 it=(it=([]))
autovar_1 = it
while true
autovar_2=@input;r=it=((it=(it=space());break FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
_result_1 = it
it=_result_1  
end
def _()
 _result_1=nil
 it=((it=(it=space());return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def digit()
 _result_1=nil
 it=((it=(it=regch(/[0-9]/));return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def lower()
 _result_1=nil
 it=((it=(it=regch(/[a-z]/));return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def upper()
 _result_1=nil
 it=((it=(it=regch(/[A-Z]/));return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def letter()
 _result_1=nil
 (it=(_or(proc{it=((it=(it=lower());next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=upper());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def letterOrDigit()
 _result_1=nil
 (it=(_or(proc{it=((it=(it=letter());next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=digit());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def alpha()
 _result_1=nil
 it=((it=(it=letter());return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def alnum()
 _result_1=nil
 it=((it=(it=letterOrDigit());return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def xdigit()
 _result_1=nil
 it=((it=(it=regch(/[0-9a-fA-F]/));return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def word()
 _result_1=nil
 (it=(_or(proc{it=((it=(it=alpha());next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=seq("_"));next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def listOf(rule_1,delim_1)
 f_1=nil
_result_1=nil
 (it=(_or(proc{it=((it=(it=apply(rule_1));next FAIL if it==FAIL;it))
f_1||=[];_append(f_1,it)
it=(it=([]))
autovar_1 = it
while true
autovar_2=@input;r=(it=(it=apply(delim_1));break FAIL if it==FAIL;it)
it=((it=(it=apply(rule_1));break FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
f_1||=[];_append(f_1,it)
it=(it=f_1)
_result_1 = it },proc{(it=(it=empty());next FAIL if it==FAIL;it)
it=(it=([]))
_result_1 = it }));return FAIL if it==FAIL;it)
it=_result_1  
end
def exactly(wanted_1)
 got_1=nil
_result_1=nil
 it=((it=(it=anything());return FAIL if it==FAIL;it))
got_1 = it
(it=(it=(wanted_1 == got_1)||FAIL);return FAIL if it==FAIL;it)
it=(it=wanted_1)
_result_1 = it
it=_result_1  
end
def _true()
 _result_1=nil
 it=((it=(it=exactly(true));return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def _false()
 _result_1=nil
 it=((it=(it=exactly(false));return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def clas(cls_1)
 _result_1=nil
i_1=nil
 it=((it=(it=anything());return FAIL if it==FAIL;it))
i_1 = it
(it=(it=(i_1.is_a?(cls_1))||FAIL);return FAIL if it==FAIL;it)
it=(it=i_1)
_result_1 = it
it=_result_1  
end
def token(s_1)
 _result_1=nil
 (it=(it=spaces());return FAIL if it==FAIL;it)
it=((it=(it=seq(s_1));return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
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
 it=(it=([]))
autovar_1 = it
while true
autovar_4=@input;r=(it=(_or(proc{it=(it=([]))
autovar_2 = it
(it=(_lookahead(true){(it=(it=seq("amethyst"));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
while true
autovar_3=@input;r=(it=(_lookahead(true){(it=(it=seq("amethyst"));next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(it=anything());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it) 
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
it_1 = it
it=(it=(it_1*""))
autovar_1||=[];_append(autovar_1,it) },proc{it=((it=(it=grammar());next FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
it=(it=autovar_1)
a_1 = it
it=(it=a_1)
_result_1 = it
it=_result_1  
end
def grammar()
 name_1=nil
parent_1=nil
rules_1=nil
_result_1=nil
 (it=(it=token("amethyst"));return FAIL if it==FAIL;it)
it=((it=(it=name());return FAIL if it==FAIL;it))
name_1 = it
(it=(_or(proc{(it=(it=token("<"));next FAIL if it==FAIL;it)
it=((it=(it=name());next FAIL if it==FAIL;it))
parent_1 = it },proc{(it=(it=empty());next FAIL if it==FAIL;it)
it=(parent_1="Amethyst") }));return FAIL if it==FAIL;it)
(it=(it=token("{"));return FAIL if it==FAIL;it)
it=(it=([]))
autovar_1 = it
while true
autovar_2=@input;r=it=((it=(it=rule());break FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
rules_1 = it
(it=(it=token("}"));return FAIL if it==FAIL;it)
it=(it=Grammar.create( {:name=>name_1,:parent=>parent_1,:rules=>rules_1 }))
_result_1 = it
it=_result_1  
end
def rule()
 args_1=nil
name_1=nil
locals_1=nil
body_1=nil
_result_1=nil
bnding_1=nil
 it=(@locals=[];@bnding=Bnding[])
it=(it=@bnding)
bnding_1 = it
it=((it=(it=name());return FAIL if it==FAIL;it))
name_1 = it
it=((it=(it=ruleargs());return FAIL if it==FAIL;it))
args_1 = it
(it=(it=token("="));return FAIL if it==FAIL;it)
it=((it=(it=expression());return FAIL if it==FAIL;it))
body_1 = it
it=(it=(_body(body_1)))
body_1 = it
it=(it=(@locals.uniq))
locals_1 = it
it=(it=Rule.create( {:bnding=>bnding_1,:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }))
_result_1 = it
it=_result_1  
end
def expression()
 _result_1=nil
 it=((it=(it=choice());return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def choice()
 _result_1=nil
ary_1=nil
 it=((it=(it=listOf('sequence',proc{it=((it=(it=token("|"));return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1 }));return FAIL if it==FAIL;it))
ary_1 = it
it=(it=Or.create( {:ary=>ary_1 }))
_result_1 = it
it=_result_1  
end
def sequence()
 _result_1=nil
ary_1=nil
 it=(it=([]))
autovar_1 = it
while true
autovar_2=@input;r=(it=(it=nr());break FAIL if it==FAIL;it)
it=((it=(it=prefixed());break FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
ary_1 = it
it=(it=Seq.create( {:ary=>ary_1 }))
_result_1 = it
it=_result_1  
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
 (it=(_or(proc{(it=(it=token("&"));next FAIL if it==FAIL;it)
it=((it=(it=inlineHostExpr());next FAIL if it==FAIL;it))
expr_1 = it
it=(it=(Pred[expr_1]))
_result_1 = it },proc{(it=(_or(proc{it=((it=(it=token("&"));next FAIL if it==FAIL;it))
neg_1 = it},proc{it=((it=(it=token("~"));next FAIL if it==FAIL;it))
neg_1 = it}));next FAIL if it==FAIL;it)
it=((it=(it=prefixed());next FAIL if it==FAIL;it))
m_1 = it
it=(it=(Lookahead[m_1,neg_1=="~"]))
_result_1 = it },proc{(it=(_or(proc{it=((it=(it=modifier());next FAIL if it==FAIL;it))
from_1 = it},proc{(it=(it=token(""));next FAIL if it==FAIL;it)
(it=(_lookahead(false){(it=(it=regch(/[.:\[]/));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
(it=(_or(proc{(it=(it=token("."));next FAIL if it==FAIL;it)},proc{(it=(it=empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
it=(it=(Apply["anything"]))
from_1 = it }));next FAIL if it==FAIL;it)
while true
autovar_1=@input;r=(it=(_lookahead(true){(it=(it=_());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_or(proc{(it=(it=token("=>"));next FAIL if it==FAIL;it)
it=((it=(it=prefixed());next FAIL if it==FAIL;it))
it_1 = it
it=(from_1=_Pass(from_1,it_1)) },proc{(it=(it=token("["));next FAIL if it==FAIL;it)
it=((it=(it=expression());next FAIL if it==FAIL;it))
it_1 = it
it=(from_1=Enter[from_1,it_1])
(it=(it=token("]"));next FAIL if it==FAIL;it) },proc{(it=(_or(proc{it=((it=(it=token("*"));next FAIL if it==FAIL;it))
one_1 = it},proc{it=((it=(it=token("+"));next FAIL if it==FAIL;it))
one_1 = it}));next FAIL if it==FAIL;it)
it=(it=(Many[from_1,one_1=="+"]))
from_1 = it },proc{(it=(it=token("?"));next FAIL if it==FAIL;it)
it=(it=(Or[from_1,Apply["empty"]]))
from_1 = it },proc{(it=(it=token(":"));next FAIL if it==FAIL;it)
(it=(_or(proc{(it=(_or(proc{it=((it=(it=key());next FAIL if it==FAIL;it))
name_1 = it},proc{it=((it=(it=name());next FAIL if it==FAIL;it))
name_1 = it}));next FAIL if it==FAIL;it)
(it=(_or(proc{(it=(it=seq("[]"));next FAIL if it==FAIL;it)
it=(it=(true))
append_1 = it },proc{(it=(it=empty());next FAIL if it==FAIL;it)
it=(it=(nil))
append_1 = it }));next FAIL if it==FAIL;it)
it=(it=(_Set(name_1,from_1,append_1)))
from_1 = it },proc{it=((it=(it=inlineHostExpr());next FAIL if it==FAIL;it))
e_1 = it
it=(it=(Seq[_Set("it",from_1) , Act[e_1] ]))
from_1 = it }));next FAIL if it==FAIL;it) }));break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
it=(it=from_1)
_result_1 = it }));return FAIL if it==FAIL;it)
it=_result_1  
end
def modifier()
 c_1=nil
_result_1=nil
 (it=(_or(proc{it=((it=(it=term());next FAIL if it==FAIL;it))
_result_1 = it},proc{(it=(it=token("#"));next FAIL if it==FAIL;it)
it=(it=([]))
autovar_1 = it
while true
autovar_2=@input;r=(it=(_lookahead(true){(it=(it=endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(it=anything());break FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
c_1 = it
it=(it=(Comment[c_1]))
_result_1 = it }));return FAIL if it==FAIL;it)
it=_result_1  
end
def term()
 it_1=nil
expr_1=nil
x_1=nil
s_1=nil
_result_1=nil
cls_1=nil
 (it=(_or(proc{it=((it=(it=className());next FAIL if it==FAIL;it))
cls_1 = it
it=(it=(Apply["clas",cls_1]))
_result_1 = it },proc{(it=(it=token("nested"));next FAIL if it==FAIL;it)
(it=(it=seq("("));next FAIL if it==FAIL;it)
it=((it=(it=expression());next FAIL if it==FAIL;it))
expr_1 = it
(it=(it=token(")"));next FAIL if it==FAIL;it)
it=(it=(Nested[expr_1]))
_result_1 = it },proc{(it=(it=token("break"));next FAIL if it==FAIL;it)
it=(it=(Seq[Cut[],Stop[]]))
_result_1 = it },proc{it=((it=(it=application());next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=key());next FAIL if it==FAIL;it))
_result_1 = it},proc{(it=(_or(proc{(it=(it=token("->"));next FAIL if it==FAIL;it)
it=((it=(it=atomicHostExpr());next FAIL if it==FAIL;it))
x_1 = it },proc{(it=(it=token(""));next FAIL if it==FAIL;it)
it=((it=(it=inlineHostExpr());next FAIL if it==FAIL;it))
x_1 = it }));next FAIL if it==FAIL;it)
it=(it=(Act[x_1]))
_result_1 = it },proc{(it=(it=token("\""));next FAIL if it==FAIL;it)
while true
autovar_1=@input;r=(it=(_or(proc{(it=(it=seq("\""));next FAIL if it==FAIL;it)
@cut=true;it
@stop=true;it },proc{it=((it=(it=eChar());next FAIL if it==FAIL;it))
s_1||=[];_append(s_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
it=(it=(Apply["token" ,quote(s_1)]))
_result_1 = it },proc{(it=(it=token("'"));next FAIL if it==FAIL;it)
while true
autovar_2=@input;r=(it=(_or(proc{(it=(it=seq("\'"));next FAIL if it==FAIL;it)
@cut=true;it
@stop=true;it },proc{it=((it=(it=eChar());next FAIL if it==FAIL;it))
s_1||=[];_append(s_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=(Apply["seq"   ,quote(s_1)]))
_result_1 = it },proc{it=((it=(it=number());next FAIL if it==FAIL;it))
it_1 = it
it=(it=(Apply["exactly",it_1]))
_result_1 = it },proc{(it=(it=token("<"));next FAIL if it==FAIL;it)
while true
autovar_3=@input;r=(it=(_or(proc{(it=(it=token(">"));next FAIL if it==FAIL;it)
@cut=true;it
@stop=true;it },proc{it=((it=(it=eChar());next FAIL if it==FAIL;it))
x_1||=[];_append(x_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=(Apply["regch","/[#{x_1}]/"]))
_result_1 = it },proc{(it=(it=token("("));next FAIL if it==FAIL;it)
it=((it=(it=expression());next FAIL if it==FAIL;it))
x_1 = it
(it=(it=token(")"));next FAIL if it==FAIL;it)
(it=(_or(proc{(it=(it=seq("[]"));next FAIL if it==FAIL;it)
it=((it=(it=collect(x_1));next FAIL if it==FAIL;it))
_result_1 = it },proc{(it=(it=empty());next FAIL if it==FAIL;it)
it=(it=x_1)
_result_1 = it }));next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)
it=_result_1  
end
def application()
 arg_1=nil
_result_1=nil
rule_1=nil
klas_1=nil
 (it=(_or(proc{it=((it=(it=name());next FAIL if it==FAIL;it))
klas_1 = it
(it=(it=seq("::"));next FAIL if it==FAIL;it)
it=((it=(it=name());next FAIL if it==FAIL;it))
rule_1 = it
it=(it=([klas_1,rule_1]))
rule_1 = it },proc{it=((it=(it=name());next FAIL if it==FAIL;it))
rule_1 = it}));return FAIL if it==FAIL;it)
it=((it=(it=argsOpt('(',')'));return FAIL if it==FAIL;it))
arg_1 = it
it=(it=(Apply[rule_1,arg_1]))
_result_1 = it
it=_result_1  
end
def key()
 args_1=nil
name_1=nil
n_1=nil
vars_1=nil
_result_1=nil
 (it=(_or(proc{(it=(it=token("@"));next FAIL if it==FAIL;it)
it=((it=(it=className());next FAIL if it==FAIL;it))
name_1 = it
it=((it=(it=argsOpt('[',']'));next FAIL if it==FAIL;it))
args_1 = it
it=(it=(Object.const_get(name_1).instance_variable_get(:@attrs)))
vars_1 = it
it=(it=Result.create( {:name=>name_1,:args=>args_1,:vars=>vars_1 }))
_result_1 = it },proc{(it=(it=token("@"));next FAIL if it==FAIL;it)
it=((it=(it=name());next FAIL if it==FAIL;it))
name_1 = it
it=(it=Key.create( {:name=>name_1,:args=>args_1 }))
_result_1 = it },proc{(it=(it=token("@@"));next FAIL if it==FAIL;it)
it=((it=(it=name());next FAIL if it==FAIL;it))
n_1 = it
it=(it=(Global[n_1]))
_result_1 = it }));return FAIL if it==FAIL;it)
it=_result_1  
end
def collect(ors_1)
 _result_1=nil
 it=(it=(a=autovar; Seq[Or[{:ary=>ors_1.ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]]))
_result_1 = it
it=_result_1  
end
def eChar()
 c_1=nil
_result_1=nil
 (it=(_or(proc{(it=(it=seq("\\"));next FAIL if it==FAIL;it)
it=((it=(it=char());next FAIL if it==FAIL;it))
c_1 = it
it=(it=("\\#{c_1}"))
_result_1 = it },proc{it=((it=(it=_args('#{','}'));next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=char());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def ruleargs()
 _result_1=nil
 it=((it=(it=argsOpt('(',')'));return FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(false,autovar_1){it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_2 = it
(it=(it=_pass(true,autovar_2){it=((it=(it=addargs());next FAIL if it==FAIL;it))
_result_1 = it});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
it=_result_1  
end
def addargs()
 result_1=nil
name_1=nil
_result_1=nil
 while true
autovar_2=@input;r=it=((it=(it=clas(Args));break FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=((it=(it=anything());next FAIL if it==FAIL;it))
name_1 = it
it=(it=(_Local(name_1) ))
result_1||=[];_append(result_1,it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=(result_1 || []))
_result_1 = it
it=_result_1  
end
def nr()
 _result_1=nil
 it=((it=(_lookahead(true){(it=(it=name());next FAIL if it==FAIL;it)
(it=(it=argsOpt('(',')'));next FAIL if it==FAIL;it)
(it=(it=token("="));next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def argsOpt(o_1,c_1)
 _result_1=nil
 (it=(_or(proc{it=((it=(it=args(o_1,c_1));next FAIL if it==FAIL;it))
_result_1 = it},proc{(it=(it=empty());next FAIL if it==FAIL;it)
it=(it=([]))
_result_1 = it }));return FAIL if it==FAIL;it)
it=_result_1  
end
def args(o_1,c_1)
 r_1=nil
_result_1=nil
 it=((it=(it=__args(o_1,c_1));return FAIL if it==FAIL;it))
r_1 = it
it=(it=(r_1+[',']))
autovar_1 = it
(it=(it=_pass(false,autovar_1){it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_2 = it
(it=(it=_pass(true,autovar_2){it=((it=(it=procargs());next FAIL if it==FAIL;it))
_result_1 = it});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
it=_result_1  
end
def _args(o_1,c_1)
 r_1=nil
_result_1=nil
 it=((it=(it=__args(o_1,c_1));return FAIL if it==FAIL;it))
r_1 = it
it=(it=(Args[{:ary=>([o_1]+r_1+[c_1])}]))
_result_1 = it
it=_result_1  
end
def __args(o_1,c_1)
 r_1=nil
_result_1=nil
 (it=(it=seq(o_1));return FAIL if it==FAIL;it)
(it=(it=token(""));return FAIL if it==FAIL;it)
it=(it=([]))
autovar_1 = it
while true
autovar_2=@input;r=it=((it=(it=rubyarg());break FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
r_1 = it
(it=(it=seq(c_1));return FAIL if it==FAIL;it)
it=(it=r_1)
_result_1 = it
it=_result_1  
end
def rubyarg()
 n_1=nil
e_1=nil
s_1=nil
_result_1=nil
 (it=(_or(proc{(it=(it=seq("`"));next FAIL if it==FAIL;it)
it=((it=(it=expression());next FAIL if it==FAIL;it))
e_1 = it
(it=(it=seq("`"));next FAIL if it==FAIL;it)
it=(it=(Exp[_body(e_1)]))
_result_1 = it },proc{it=((it=(it=_args('(',')'));next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=_args('[',']'));next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=_args('{','}'));next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=seq("\""));next FAIL if it==FAIL;it))
s_1||=[];_append(s_1,it)
it=(it=([]))
autovar_1 = it
while true
autovar_2=@input;r=(it=(_or(proc{(it=(it=seq("\""));next FAIL if it==FAIL;it)
@cut=true;it
it=(@stop=true;it)
autovar_1||=[];_append(autovar_1,it) },proc{it=((it=(it=eChar());next FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
s_1||=[];_append(s_1,it)
it=(it=(Strin[connectstring(s_1)]))
_result_1 = it },proc{it=((it=(it=seq("\'"));next FAIL if it==FAIL;it))
s_1||=[];_append(s_1,it)
it=(it=([]))
autovar_3 = it
while true
autovar_4=@input;r=(it=(_or(proc{(it=(it=seq("\'"));next FAIL if it==FAIL;it)
@cut=true;it
it=(@stop=true;it)
autovar_3||=[];_append(autovar_3,it) },proc{it=((it=(it=eChar());next FAIL if it==FAIL;it))
autovar_3||=[];_append(autovar_3,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
it=(it=autovar_3)
s_1||=[];_append(s_1,it)
it=(it=(Strin[connectstring(s_1)]))
_result_1 = it },proc{(it=(_or(proc{it=((it=(it=token(":@"));next FAIL if it==FAIL;it))
n_1 = it},proc{it=((it=(it=regch(/[$.:]/));next FAIL if it==FAIL;it))
n_1 = it},proc{(it=(it=empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
(it=(_lookahead(true){(it=(it=_());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(it=name());next FAIL if it==FAIL;it))
n_1||=[];_append(n_1,it)
it=(it=n_1)
_result_1 = it },proc{(it=(_lookahead(true){(it=(it=_());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(it=key());next FAIL if it==FAIL;it))
_result_1 = it },proc{it=((it=(it=regch(/[^`{}()'"\[\]]/));next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def procargs()
 _result_1=nil
 it=(@ary=[];@tmp=[])
while true
autovar_1=@input;r=(it=(_or(proc{(it=(it=seq(","));next FAIL if it==FAIL;it)
it=(@ary<<Args[{:ary=>@tmp}];@tmp=[]) },proc{(it=(it=procargs2());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
it=(it=@ary)
_result_1 = it
it=_result_1  
end
def procargs2()
 a_1=nil
_result_1=nil
 (it=(_or(proc{it=((it=(it=clas(Args));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=procargs2());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
_result_1 = it });next FAIL if it==FAIL;it) },proc{it=((it=(it=anything());next FAIL if it==FAIL;it))
a_1 = it
it=(it=(@tmp<<a_1))
_result_1 = it }));return FAIL if it==FAIL;it)
it=_result_1  
end
def nameFirst()
 _result_1=nil
 (it=(_or(proc{it=((it=(it=letter());next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=seq("_"));next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def nameRest()
 _result_1=nil
 (it=(_or(proc{it=((it=(it=nameFirst());next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=digit());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def className()
 it_1=nil
_result_1=nil
 (it=(it=token(""));return FAIL if it==FAIL;it)
it=((it=(it=upper());return FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)
it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=nameRest());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
autovar_1||=[];_append(autovar_1,it)
it=(it=autovar_1)
it_1 = it
it=(it=(leterize(it_1*"")))
_result_1 = it
it=_result_1  
end
def name()
 it_1=nil
_result_1=nil
 (it=(it=token(""));return FAIL if it==FAIL;it)
it=((it=(it=nameFirst());return FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)
it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=nameRest());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
autovar_1||=[];_append(autovar_1,it)
it=(it=autovar_1)
it_1 = it
it=(it=(leterize(it_1*"")))
_result_1 = it
it=_result_1  
end
def inlineHostExpr()
 _result_1=nil
 it=((it=(it=args('{','}'));return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def number()
 _result_1=nil
 it=(it=([]))
autovar_1 = it
it=((it=(it=regch(/[0-9]/));return FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)
while true
autovar_2=@input;r=it=((it=(it=regch(/[0-9]/));break FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
_result_1 = it
it=_result_1  
end
def atomicHostExpr()
 _result_1=nil
s_1=nil
 it=(it=([]))
autovar_1 = it
while true
autovar_2=@input;r=(it=(_lookahead(true){(it=(it=endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(it=anything());break FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
s_1 = it
it=(it=("{#{s_1*""}}"))
autovar_3 = it
(it=(it=_pass(false,autovar_3){it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=((it=(it=inlineHostExpr());next FAIL if it==FAIL;it))
_result_1 = it});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
it=_result_1  
end

end

class AmethystOptimizer < Amethyst
def itrans()
 r_1=nil
_result_1=nil
 it=(it=([]))
autovar_1 = it
while true
autovar_2=@input;r=(it=(_or(proc{it=((it=(it=char());next FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)},proc{it=((it=(it=trans());next FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
r_1 = it
it=(it=r_1)
_result_1 = it
it=_result_1  
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
 (it=(_or(proc{it=((it=(it=clas(Grammar));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=self['name'])
name_1 = it
it=(it=self['parent'])
parent_1 = it
it=(it=self['rules'])
autovar_2 = it
(it=(it=_pass(false,autovar_2){it=((it=(it=transs());next FAIL if it==FAIL;it))
rules_1 = it});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
it=(it=Grammar.create( {:name=>name_1,:parent=>parent_1,:rules=>rules_1,:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Rule));next FAIL if it==FAIL;it))
autovar_3 = it
(it=(it=_pass(true,autovar_3){it=(it=self['name'])
name_1 = it
it=(it=self['args'])
autovar_4 = it
(it=(it=_pass(false,autovar_4){it=((it=(it=args());next FAIL if it==FAIL;it))
args_1 = it});next FAIL if it==FAIL;it)
it=(it=self['body'])
autovar_5 = it
(it=(it=_pass(false,autovar_5){it=((it=(it=trans());next FAIL if it==FAIL;it))
body_1 = it});next FAIL if it==FAIL;it)
it=(it=self['locals'])
locals_1 = it });next FAIL if it==FAIL;it)
it=(it=Rule.create( {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Or));next FAIL if it==FAIL;it))
autovar_6 = it
(it=(it=_pass(true,autovar_6){it=(it=([]))
autovar_7 = it
while true
autovar_8=@input;r=it=((it=(it=transfn());break FAIL if it==FAIL;it))
autovar_7||=[];_append(autovar_7,it)
 break FAIL if r==FAIL
 (autovar_8=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_8
it=(it=autovar_7)
ary_1 = it });next FAIL if it==FAIL;it)
it=(it=Or.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Seq));next FAIL if it==FAIL;it))
autovar_9 = it
(it=(it=_pass(true,autovar_9){it=(it=([]))
autovar_10 = it
while true
autovar_11=@input;r=it=((it=(it=trans());break FAIL if it==FAIL;it))
autovar_10||=[];_append(autovar_10,it)
 break FAIL if r==FAIL
 (autovar_11=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_11
it=(it=autovar_10)
ary_1 = it });next FAIL if it==FAIL;it)
it=(it=Seq.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Lookahead));next FAIL if it==FAIL;it))
autovar_12 = it
(it=(it=_pass(true,autovar_12){it=((it=(it=trans());next FAIL if it==FAIL;it))
ary_1||=[];_append(ary_1,it)
it=(it=self['neg'])
neg_1 = it });next FAIL if it==FAIL;it)
it=(it=Lookahead.create( {:ary=>ary_1,:neg=>neg_1 }))
_result_1 = it },proc{it=((it=(it=clas(Comment));next FAIL if it==FAIL;it))
autovar_13 = it
(it=(it=_pass(true,autovar_13){it=(it=([]))
autovar_14 = it
while true
autovar_15=@input;r=it=((it=(it=anything());break FAIL if it==FAIL;it))
autovar_14||=[];_append(autovar_14,it)
 break FAIL if r==FAIL
 (autovar_15=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_15
it=(it=autovar_14)
ary_1 = it });next FAIL if it==FAIL;it)
it=(it=Comment.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Many));next FAIL if it==FAIL;it))
autovar_16 = it
(it=(it=_pass(true,autovar_16){it=((it=(it=trans());next FAIL if it==FAIL;it))
ary_1||=[];_append(ary_1,it)
it=(it=self['o'])
o_1 = it });next FAIL if it==FAIL;it)
it=(it=Many.create( {:ary=>ary_1,:o=>o_1 }))
_result_1 = it },proc{it=((it=(it=clas(Apply));next FAIL if it==FAIL;it))
autovar_17 = it
(it=(it=_pass(true,autovar_17){it=((it=(it=anything());next FAIL if it==FAIL;it))
ary_1||=[];_append(ary_1,it)
it=((it=(it=args());next FAIL if it==FAIL;it))
ary_1||=[];_append(ary_1,it) });next FAIL if it==FAIL;it)
it=(it=Apply.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Set));next FAIL if it==FAIL;it))
autovar_18 = it
(it=(it=_pass(true,autovar_18){it=(it=self['name'])
autovar_19 = it
(it=(it=_pass(false,autovar_19){it=((it=(it=arg());next FAIL if it==FAIL;it))
name_1 = it});next FAIL if it==FAIL;it)
it=(it=self['expr'])
autovar_20 = it
(it=(it=_pass(false,autovar_20){it=((it=(it=trans());next FAIL if it==FAIL;it))
expr_1 = it});next FAIL if it==FAIL;it)
it=(it=self['append'])
append_1 = it });next FAIL if it==FAIL;it)
it=(it=Set.create( {:name=>name_1,:ary=>ary_1,:expr=>expr_1,:append=>append_1 }))
_result_1 = it },proc{it=((it=(it=clas(Act));next FAIL if it==FAIL;it))
autovar_21 = it
(it=(it=_pass(true,autovar_21){it=((it=(it=args());next FAIL if it==FAIL;it))
ary_1 = it
it=(it=self['pred'])
pred_1 = it });next FAIL if it==FAIL;it)
it=(it=Act.create( {:ary=>ary_1,:pred=>pred_1 }))
_result_1 = it },proc{it=((it=(it=clas(Result));next FAIL if it==FAIL;it))
autovar_22 = it
(it=(it=_pass(true,autovar_22){it=(it=self['name'])
name_1 = it
it=(it=self['args'])
autovar_23 = it
(it=(it=_pass(false,autovar_23){it=((it=(it=args());next FAIL if it==FAIL;it))
args_1 = it});next FAIL if it==FAIL;it)
it=(it=self['vars'])
autovar_24 = it
(it=(it=_pass(false,autovar_24){it=((it=(it=args());next FAIL if it==FAIL;it))
vars_1 = it});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
it=(it=Result.create( {:name=>name_1,:args=>args_1,:ary=>ary_1,:expr=>expr_1,:vars=>vars_1 }))
_result_1 = it },proc{it=((it=(it=clas(Args));next FAIL if it==FAIL;it))
autovar_25 = it
(it=(it=_pass(true,autovar_25){it=(it=([]))
autovar_26 = it
while true
autovar_27=@input;r=it=((it=(it=arg());break FAIL if it==FAIL;it))
autovar_26||=[];_append(autovar_26,it)
 break FAIL if r==FAIL
 (autovar_27=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_27
it=(it=autovar_26)
ary_1 = it });next FAIL if it==FAIL;it)
it=(it=Args.create( {:ary=>ary_1,:o=>o_1 }))
_result_1 = it },proc{it=((it=(it=clas(Key));next FAIL if it==FAIL;it))
autovar_28 = it
(it=(it=_pass(true,autovar_28){it=(it=self['name'])
name_1 = it});next FAIL if it==FAIL;it)
it=(it=Key.create( {:name=>name_1,:args=>args_1,:ary=>ary_1,:expr=>expr_1 }))
_result_1 = it },proc{it=((it=(it=clas(Pass));next FAIL if it==FAIL;it))
autovar_29 = it
(it=(it=_pass(true,autovar_29){it=(it=self['to'])
autovar_30 = it
(it=(it=_pass(false,autovar_30){it=((it=(it=trans());next FAIL if it==FAIL;it))
to_1 = it});next FAIL if it==FAIL;it)
it=(it=self['var'])
autovar_31 = it
(it=(it=_pass(false,autovar_31){it=((it=(it=arg());next FAIL if it==FAIL;it))
var_1 = it});next FAIL if it==FAIL;it)
it=(it=self['enter'])
enter_1 = it });next FAIL if it==FAIL;it)
it=(it=Pass.create( {:ary=>ary_1,:to=>to_1,:var=>var_1,:enter=>enter_1 }))
_result_1 = it },proc{it=((it=(it=clas(Cut));next FAIL if it==FAIL;it))
autovar_32 = it
(it=(it=_pass(true,autovar_32){ });next FAIL if it==FAIL;it)
it=(it=Cut.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Stop));next FAIL if it==FAIL;it))
autovar_33 = it
(it=(it=_pass(true,autovar_33){ });next FAIL if it==FAIL;it)
it=(it=Stop.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Local));next FAIL if it==FAIL;it))
autovar_34 = it
(it=(it=_pass(true,autovar_34){while true
autovar_35=@input;r=(it=(it=anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_35=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_35
it=(it=self['this'])
_result_1 = it });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Global));next FAIL if it==FAIL;it))
autovar_36 = it
(it=(it=_pass(true,autovar_36){while true
autovar_37=@input;r=(it=(it=anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_37=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_37
it=(it=self['this'])
_result_1 = it });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Key));next FAIL if it==FAIL;it))
autovar_38 = it
(it=(it=_pass(true,autovar_38){while true
autovar_39=@input;r=(it=(it=anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_39=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_39
it=(it=self['this'])
_result_1 = it });next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)
it=_result_1  
end
def transfn()
 _result_1=nil
 it=((it=(it=trans());return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def transs()
 _result_1=nil
t_1=nil
 it=((it=(it=anything());return FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=trans());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
t_1 = it });return FAIL if it==FAIL;it)
it=(it=t_1)
_result_1 = it
it=_result_1  
end
def args()
 a_1=nil
_result_1=nil
 (it=(_or(proc{it=((it=(it=clas(Array));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=arg());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
a_1 = it });next FAIL if it==FAIL;it)
it=(it=a_1)
_result_1 = it },proc{it=(it=([]))
autovar_4 = it
while true
autovar_5=@input;r=it=((it=(it=arg());break FAIL if it==FAIL;it))
autovar_4||=[];_append(autovar_4,it)
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5
it=(it=autovar_4)
_result_1 = it }));return FAIL if it==FAIL;it)
it=_result_1  
end
def arg()
 _result_1=nil
ary_1=nil
 (it=(_or(proc{it=((it=(it=clas(Args));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=arg());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
ary_1 = it });next FAIL if it==FAIL;it)
it=(it=Args.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Strin));next FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=(it=([]))
autovar_5 = it
while true
autovar_6=@input;r=(it=(_or(proc{it=((it=(it=char());next FAIL if it==FAIL;it))
autovar_5||=[];_append(autovar_5,it)},proc{it=((it=(it=arg());next FAIL if it==FAIL;it))
autovar_5||=[];_append(autovar_5,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
it=(it=autovar_5)
ary_1 = it });next FAIL if it==FAIL;it)
it=(it=Strin.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Exp));next FAIL if it==FAIL;it))
autovar_7 = it
(it=(it=_pass(true,autovar_7){it=((it=(it=transfn());next FAIL if it==FAIL;it))
ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it)
it=(it=Exp.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=anything());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end

end



class AmethystOptimizer2 < AmethystOptimizer
def trans()
 _result_1=nil
ary_1=nil
 (it=(_or(proc{it=((it=(it=clas(Or));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=transfn());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
ary_1 = it });next FAIL if it==FAIL;it)
it=(ary_1=ary_1.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
(it=(_or(proc{(it=(it=(ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
it=(it=(ary_1[0]))
_result_1 = it },proc{it=(it=Or.create( {:ary=>ary_1 }))
_result_1 = it}));next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Seq));next FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=(it=([]))
autovar_5 = it
while true
autovar_6=@input;r=it=((it=(it=trans());break FAIL if it==FAIL;it))
autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
it=(it=autovar_5)
ary_1 = it });next FAIL if it==FAIL;it)
it=(ary_1=ary_1.map{|a| (a.is_a?(Seq)) ? a.ary : a}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
(it=(_or(proc{(it=(it=(ary_1.size==1)||FAIL);next FAIL if it==FAIL;it)
it=(it=(ary_1[0]))
_result_1 = it },proc{it=(it=Seq.create( {:ary=>ary_1 }))
_result_1 = it}));next FAIL if it==FAIL;it) },proc{it=(it=(super))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end

end




class Traverser < Amethyst
def traverse_item()
 a_1=nil
_result_1=nil
 (it=(_or(proc{it=((it=(it=visit());next FAIL if it==FAIL;it))
a_1 = it
it=(@changed=true)
it=(it=a_1)
_result_1 = it },proc{it=((it=(it=clas(Array));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=traverse_item());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
_result_1 = it });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(AmethystAST));next FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=((it=(it=traverse());next FAIL if it==FAIL;it))
_result_1 = it});next FAIL if it==FAIL;it) },proc{it=((it=(it=anything());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def traverse()
 it_1=nil
_result_1=nil
key_1=nil
this_1=nil
 while true
autovar_1=@input;r=(it=(it=anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
it=(it=self['this'])
this_1 = it
it=(it=(( self['this'].instance_variables).map{|v| [v, self['this'].instance_variable_get(v)] }))
autovar_2 = it
(it=(it=_pass(false,autovar_2){it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_3 = it
(it=(it=_pass(true,autovar_3){while true
autovar_5=@input;r=it=((it=(it=anything());break FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=((it=(it=anything());next FAIL if it==FAIL;it))
key_1 = it
it=((it=(it=traverse_item());next FAIL if it==FAIL;it))
it_1 = it
it=(@x; this_1.instance_variable_set(key_1,it_1)) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
it=(it=self['this'])
_result_1 = it
it=_result_1  
end

end



class Seq_Or_Optimizer < Traverser
def root()
 _result_1=nil
 it=((it=(it=traverse());return FAIL if it==FAIL;it))
_result_1 = it
it=_result_1  
end
def visit()
 _result_1=nil
 (it=(_or(proc{it=((it=(it=clas(Seq));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){(it=(it=traverse());next FAIL if it==FAIL;it)
it=( self['this'].ary= self['ary'].map{|i| (i.is_a?(Seq)) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=(it=(( self['ary'].size==1) ?  self['ary'][0] :  self['this']))
_result_1 = it });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Or));next FAIL if it==FAIL;it))
autovar_2 = it
(it=(it=_pass(true,autovar_2){(it=(it=traverse());next FAIL if it==FAIL;it)
it=( self['this'].ary= self['ary'].map{|i| (i.is_a?(Or )) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=(it=(( self['ary'].size==1) ?  self['ary'][0] :  self['this']))
_result_1 = it });next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)
it=_result_1  
end

end

class Analyze_Variables2 < Traverser
def itrans()
 rules_1=nil
_result_1=nil
 it=(it=([]))
autovar_1 = it
while true
autovar_8=@input;r=(it=(_or(proc{it=((it=(it=clas(Grammar));next FAIL if it==FAIL;it))
autovar_2 = it
(it=(it=_pass(true,autovar_2){it=(it=self['rules'])
autovar_3 = it
(it=(it=_pass(false,autovar_3){it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=(it=([]))
autovar_5 = it
while true
autovar_7=@input;r=it=((it=(it=clas(Rule));break FAIL if it==FAIL;it))
autovar_6 = it
(it=(it=_pass(true,autovar_6){it=((it=(it=root());next FAIL if it==FAIL;it))
autovar_5||=[];_append(autovar_5,it)});break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_7=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_7
it=(it=autovar_5)
rules_1 = it });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
it=( self['rules']=rules_1)
it=(it=self['this'])
autovar_1||=[];_append(autovar_1,it) });next FAIL if it==FAIL;it) },proc{it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_8=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_8
it=(it=autovar_1)
_result_1 = it
it=_result_1  
end
def root()
 _result_1=nil
 it=(it=self['this'])
autovar_1 = it
(it=(it=_pass(false,autovar_1){it=((it=(it=clas(Rule));next FAIL if it==FAIL;it))
autovar_2 = it
(it=(it=_pass(true,autovar_2){it=(@variables=Hash.new{|k,v| k[v]=v} ;( self['locals']+ self['args']).each{|v| @variables[v[0]]=v})
it=(@locals= self['locals'])
(it=(it=traverse());next FAIL if it==FAIL;it)
it=( self['body']=Seq[{:ary=>[ self['body']] }]; self['locals']=nil)
it=(it=self['this'])
_result_1 = it });next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
it=_result_1  
end
def visit()
 a_1=nil
_result_1=nil
 (it=(_or(proc{it=((it=(it=clas(Args));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){(it=(it=traverse());next FAIL if it==FAIL;it)
it=(it=( self['ary'].map{|a_1| @variables[a_1] }))
autovar_2 = it
(it=(it=_pass(false,autovar_2){it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_3 = it
(it=(it=_pass(true,autovar_3){it=((it=(it=flat());next FAIL if it==FAIL;it))
a_1 = it});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
it=( self['ary']=connectstring(a_1.flatten))
it=(it=(( self['ary'].size==1&&( self['ary'][0].is_a?(Local)|| self['ary'][0].is_a?(Global)|| self['ary'][0].is_a?(Key))) ?  self['ary'][0] :  self['this']))
_result_1 = it });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Act));next FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){(it=(it=traverse());next FAIL if it==FAIL;it)
it=(it=self['ary'])
autovar_5 = it
(it=(it=_pass(false,autovar_5){it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_6 = it
(it=(it=_pass(true,autovar_6){(it=(_or(proc{it=((it=(it=clas(Local));next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=clas(Key));next FAIL if it==FAIL;it))
_result_1 = it},proc{it=((it=(it=clas(Global));next FAIL if it==FAIL;it))
_result_1 = it}));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Result));next FAIL if it==FAIL;it))
autovar_7 = it
(it=(it=_pass(true,autovar_7){it=( self['vars']=@locals.select{|a_1|  self['vars'].include? a_1[0].to_sym}.uniq)
it=(it=self['this'])
_result_1 = it });next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)
it=_result_1  
end
def flat()
 _result_1=nil
 it=(it=([]))
autovar_1 = it
while true
autovar_4=@input;r=(it=(_or(proc{it=((it=(it=clas(Args));next FAIL if it==FAIL;it))
autovar_2 = it
(it=(it=_pass(true,autovar_2){it=((it=(it=flat());next FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)});next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Strin));next FAIL if it==FAIL;it))
autovar_3 = it
(it=(it=_pass(true,autovar_3){it=((it=(it=flat());next FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)});next FAIL if it==FAIL;it) },proc{it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
it=(it=autovar_1)
_result_1 = it
it=_result_1  
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
 (it=(_or(proc{it=((it=(it=clas(Rule));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=self['name'])
name_1 = it
it=(@edges=Oriented_Graph.new ; @marked=[])
it=(it=self['args'])
autovar_2 = it
(it=(it=_pass(false,autovar_2){it=((it=(it=args());next FAIL if it==FAIL;it))
args_1 = it});next FAIL if it==FAIL;it)
it=(it=self['body'])
autovar_3 = it
(it=(it=_pass(false,autovar_3){(it=(it=trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=(it=self['body'])
body_1 = it
it=(it=self['locals'])
locals_1 = it
it=(it=(@edges.reachable(@marked)))
reachable_1 = it });next FAIL if it==FAIL;it)
it=(it=Rule.create( {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1,:reachable=>reachable_1 }))
_result_1 = it },proc{it=((it=(it=clas(Apply));next FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=((it=(it=anything());next FAIL if it==FAIL;it))
name_1 = it
it=((it=(it=vars_in());next FAIL if it==FAIL;it))
var_1 = it
it=(it=(@marked+=var_1))
_result_1 = it });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Pass));next FAIL if it==FAIL;it))
autovar_5 = it
(it=(it=_pass(true,autovar_5){it=(it=self['var'])
autovar_6 = it
(it=(it=_pass(false,autovar_6){it=((it=(it=vars_in());next FAIL if it==FAIL;it))
var_1 = it});next FAIL if it==FAIL;it)
it=(@marked+=var_1)
it=(it=self['to'])
autovar_7 = it
(it=(it=_pass(false,autovar_7){it=((it=(it=trans());next FAIL if it==FAIL;it))
_result_1 = it});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Act));next FAIL if it==FAIL;it))
autovar_8 = it
(it=(it=_pass(true,autovar_8){it=(it=self['this'])
this_1 = it
it=(@marked<<this_1 if  self['pred'])
it=((it=(it=vars_in());next FAIL if it==FAIL;it))
var_1 = it });next FAIL if it==FAIL;it)
it=(it=(var_1.each{|v_1| @edges.add(v_1,this_1); @edges.add(this_1,v_1)}))
_result_1 = it },proc{it=((it=(it=clas(Set));next FAIL if it==FAIL;it))
autovar_9 = it
(it=(it=_pass(true,autovar_9){it=(it=self['name'])
autovar_10 = it
(it=(it=_pass(false,autovar_10){it=((it=(it=vars_in());next FAIL if it==FAIL;it))
v_1 = it});next FAIL if it==FAIL;it)
it=(v_1=v_1[0])
it=(it=self['expr'])
autovar_11 = it
(it=(it=_pass(false,autovar_11){(it=(it=trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=(it=self['expr'])
autovar_12 = it
(it=(it=_pass(false,autovar_12){it=((it=(it=vars_in());next FAIL if it==FAIL;it))
var_1 = it});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
it=(it=(var_1.each{|w| @edges.add(v_1,w)}))
_result_1 = it },proc{it=((it=(it=clas(Result));next FAIL if it==FAIL;it))
autovar_13 = it
(it=(it=_pass(true,autovar_13){it=(it=self['vars'])
autovar_14 = it
(it=(it=_pass(false,autovar_14){it=((it=(it=anything());next FAIL if it==FAIL;it))
autovar_15 = it
(it=(it=_pass(true,autovar_15){it=((it=(it=vars_in());next FAIL if it==FAIL;it))
var_1 = it});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
it=(it=self['this'])
v_1 = it });next FAIL if it==FAIL;it)
it=(it=(var_1.each{|w| @edges.add(v_1,w) }))
_result_1 = it },proc{it=((it=(it=super());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def vars_in()
 name_1=nil
_result_1=nil
ary_1=nil
 it=(ary_1=[])
while true
autovar_14=@input;r=(it=(_or(proc{it=((it=(it=clas(Global));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=self['this'])
ary_1||=[];_append(ary_1,it)
it=(@marked<< self['this'])
while true
autovar_2=@input;r=(it=(it=anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2 });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Act));next FAIL if it==FAIL;it))
autovar_3 = it
(it=(it=_pass(true,autovar_3){it=(it=self['this'])
ary_1||=[];_append(ary_1,it)
while true
autovar_4=@input;r=(it=(it=anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4 });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Key));next FAIL if it==FAIL;it))
autovar_5 = it
(it=(it=_pass(true,autovar_5){it=(it=self['this'])
ary_1||=[];_append(ary_1,it)
it=(@marked<< self['this'])
while true
autovar_6=@input;r=(it=(it=anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6 });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Exp));next FAIL if it==FAIL;it))
autovar_7 = it
(it=(it=_pass(true,autovar_7){(it=(it=trans());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Result));next FAIL if it==FAIL;it))
autovar_8 = it
(it=(it=_pass(true,autovar_8){it=(it=self['this'])
ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Strin));next FAIL if it==FAIL;it))
autovar_9 = it
(it=(it=_pass(true,autovar_9){it=((it=(it=vars_in());next FAIL if it==FAIL;it))
ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Args));next FAIL if it==FAIL;it))
autovar_10 = it
(it=(it=_pass(true,autovar_10){it=((it=(it=vars_in());next FAIL if it==FAIL;it))
ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Set));next FAIL if it==FAIL;it))
autovar_11 = it
(it=(it=_pass(true,autovar_11){it=(it=self['name'])
autovar_12 = it
(it=(it=_pass(false,autovar_12){it=((it=(it=vars_in());next FAIL if it==FAIL;it))
ary_1||=[];_append(ary_1,it)});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Local));next FAIL if it==FAIL;it))
autovar_13 = it
(it=(it=_pass(true,autovar_13){it=((it=(it=anything());next FAIL if it==FAIL;it))
name_1 = it
it=(@marked<< self['this'] if name_1=="_result")
it=(it=self['this'])
ary_1||=[];_append(ary_1,it) });next FAIL if it==FAIL;it) },proc{(it=(it=anything());next FAIL if it==FAIL;it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_14=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_14
it=(it=ary_1)
_result_1 = it
it=_result_1  
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
 (it=(_or(proc{it=((it=(it=clas(Rule));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=self['name'])
name_1 = it
it=(it=self['reachable'])
it_1 = it
it=(@reachable=it_1)
it=(it=self['args'])
autovar_2 = it
(it=(it=_pass(false,autovar_2){it=((it=(it=args());next FAIL if it==FAIL;it))
args_1 = it});next FAIL if it==FAIL;it)
it=(it=self['body'])
autovar_3 = it
(it=(it=_pass(false,autovar_3){it=((it=(it=trans());next FAIL if it==FAIL;it))
body_1 = it});next FAIL if it==FAIL;it)
it=(it=self['locals'])
locals_1 = it });next FAIL if it==FAIL;it)
it=(it=Rule.create( {:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }))
_result_1 = it },proc{it=((it=(it=clas(Act));next FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=(it=self['this'])
this_1 = it
while true
autovar_5=@input;r=(it=(it=anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5 });next FAIL if it==FAIL;it)
it=(it=(@reachable[this_1] ? this_1 : Act[]))
_result_1 = it },proc{it=((it=(it=clas(Set));next FAIL if it==FAIL;it))
autovar_6 = it
(it=(it=_pass(true,autovar_6){it=(it=self['name'])
name_1 = it
it=(it=self['expr'])
autovar_7 = it
(it=(it=_pass(false,autovar_7){it=((it=(it=trans());next FAIL if it==FAIL;it))
expr_1 = it});next FAIL if it==FAIL;it)
it=(it=self['append'])
append_1 = it });next FAIL if it==FAIL;it)
it=(it=(@reachable[name_1] ? _Set(name_1,expr_1,append_1) : expr_1))
_result_1 = it },proc{it=((it=(it=clas(Result));next FAIL if it==FAIL;it))
autovar_8 = it
(it=(it=_pass(true,autovar_8){it=(it=self['this'])
this_1 = it});next FAIL if it==FAIL;it)
it=(it=(@reachable[this_1] ? this_1 : Act[]))
_result_1 = it },proc{it=((it=(it=clas(Local));next FAIL if it==FAIL;it))
autovar_9 = it
(it=(it=_pass(true,autovar_9){while true
autovar_10=@input;r=(it=(it=anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_10=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_10
it=(it=self['this'])
this_1 = it });next FAIL if it==FAIL;it)
it=(it=(@reachable[this_1] ? this_1 : Act[]))
_result_1 = it },proc{it=((it=(it=super());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
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
 (it=(_or(proc{it=((it=(it=clas(Or));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){(it=(_lookahead(false){it=((it=(it=clas(Seq));next FAIL if it==FAIL;it))
autovar_2 = it
(it=(it=_pass(true,autovar_2){it=((it=(it=trans());next FAIL if it==FAIL;it))
first_1 = it
while true
autovar_3=@input;r=(it=(it=anything());break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3 });next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
while true
autovar_7=@input;r=it=((it=(it=clas(Seq));break FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=((it=(it=trans());next FAIL if it==FAIL;it))
fst_1 = it
(it=(it=(first_1.isomorphic(fst_1))||FAIL);next FAIL if it==FAIL;it)
it=(it=([]))
autovar_5 = it
while true
autovar_6=@input;r=it=((it=(it=trans());break FAIL if it==FAIL;it))
autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
it=(it=autovar_5)
rest_1 = it
it=(it=(Seq[{:ary=>rest_1}]))
ary_1||=[];_append(ary_1,it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_7=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_7 });next FAIL if it==FAIL;it)
it=(it=(Seq[first_1 ,Or[{:ary=>ary_1}] ]))
_result_1 = it },proc{it=((it=(it=super());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end

end


class Move_Assignments < AmethystOptimizer
def trans()
 name_1=nil
expr_1=nil
append_1=nil
_result_1=nil
 (it=(_or(proc{it=((it=(it=clas(Set));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=self['name'])
name_1 = it
it=(it=self['expr'])
autovar_2 = it
(it=(it=_pass(false,autovar_2){it=((it=(it=trans());next FAIL if it==FAIL;it))
expr_1 = it});next FAIL if it==FAIL;it)
it=(it=self['append'])
append_1 = it
it=(it=expr_1)
autovar_3 = it
(it=(it=_pass(false,autovar_3){it=((it=(it=move(append_1,name_1));next FAIL if it==FAIL;it))
_result_1 = it});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it) },proc{it=((it=(it=super());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def move(append_1,name_1)
 it_1=nil
enter_1=nil
to_1=nil
var_1=nil
el_1=nil
_result_1=nil
ary_1=nil
 (it=(_or(proc{it=((it=(it=clas(Or));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=move(append_1,name_1));break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
ary_1 = it });next FAIL if it==FAIL;it)
it=(it=Or.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Seq));next FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=(it=([]))
autovar_5 = it
while true
autovar_7=@input;r=it=((it=(it=anything());break FAIL if it==FAIL;it))
el_1 = it
(it=(_or(proc{(it=(_lookahead(false){(it=(it=eof());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=(it=el_1)
autovar_6 = it
(it=(it=_pass(false,autovar_6){it=((it=(it=move(append_1,name_1));next FAIL if it==FAIL;it))
autovar_5||=[];_append(autovar_5,it)});next FAIL if it==FAIL;it) },proc{it=(it=el_1)
autovar_5||=[];_append(autovar_5,it)}));break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_7=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_7
it=(it=autovar_5)
ary_1 = it });next FAIL if it==FAIL;it)
it=(it=Seq.create( {:ary=>ary_1 }))
_result_1 = it },proc{it=((it=(it=clas(Pass));next FAIL if it==FAIL;it))
autovar_8 = it
(it=(it=_pass(true,autovar_8){it=(it=self['var'])
var_1 = it
it=(it=self['to'])
autovar_9 = it
(it=(it=_pass(false,autovar_9){it=((it=(it=move(append_1,name_1));next FAIL if it==FAIL;it))
to_1 = it});next FAIL if it==FAIL;it)
it=(it=self['enter'])
enter_1 = it });next FAIL if it==FAIL;it)
it=(it=Pass.create( {:ary=>ary_1,:var=>var_1,:to=>to_1,:enter=>enter_1 }))
_result_1 = it },proc{it=((it=(it=anything());next FAIL if it==FAIL;it))
it_1 = it
it=(it=(_Set(name_1,it_1,append_1)))
_result_1 = it }));return FAIL if it==FAIL;it)
it=_result_1  
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
 it=(it=([]))
autovar_1 = it
while true
autovar_2=@input;r=(it=(_or(proc{it=((it=(it=char());next FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)},proc{it=((it=(it=trans());next FAIL if it==FAIL;it))
autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(it=autovar_1)
r_1 = it
it=(it=(r_1*""))
_result_1 = it
it=_result_1  
end
def trans()
 number_1=nil
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
 (it=(_or(proc{it=((it=(it=clas(Grammar));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=self['name'])
name_1 = it
it=(it=self['parent'])
parent_1 = it
it=(it=self['rules'])
autovar_2 = it
(it=(it=_pass(false,autovar_2){it=((it=(it=transs());next FAIL if it==FAIL;it))
body_1 = it});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
it=(it=("class #{name_1} < #{parent_1}\n#{body_1}\nend\n"))
_result_1 = it },proc{it=((it=(it=clas(Rule));next FAIL if it==FAIL;it))
autovar_3 = it
(it=(it=_pass(true,autovar_3){it=(@varhash=Hash.new{|h,k| h[k]={}}  )
(it=(it=rw('return',proc{it=(it=self['name'])
name_1 = it
it=(it=self['args'])
autovar_4 = it
(it=(it=_pass(false,autovar_4){it=((it=(it=args());next FAIL if it==FAIL;it))
argss_1 = it});next FAIL if it==FAIL;it)
it=(it=self['body'])
autovar_5 = it
(it=(it=_pass(false,autovar_5){it=(it=((it=(it=trans());next FAIL if it==FAIL;it))
body_1 = it)
_result_1 = it});next FAIL if it==FAIL;it)
it=_result_1 }));next FAIL if it==FAIL;it)
it=(it=("def #{name_1}(#{argss_1})\n #{@varhash.select{|nam,b| (nam!="autovar") && (! self['args'].map{|l| l[0]}.include?(nam))}.map{|nam,b| b.map{|bi,no| "#{varname(@varhash,nam,bi)}=nil\n"}}*""} #{body_1} \nend\n"))
_result_1 = it });next FAIL if it==FAIL;it) },proc{it=((it=(it=clas(Or));next FAIL if it==FAIL;it))
autovar_6 = it
(it=(it=_pass(true,autovar_6){(it=(it=rw('next', proc{it=(it=([]))
autovar_7 = it
while true
autovar_8=@input;r=it=((it=(it=transfn());break FAIL if it==FAIL;it))
autovar_7||=[];_append(autovar_7,it)
 break FAIL if r==FAIL
 (autovar_8=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_8
it=(it=(it=autovar_7)
ors_1 = it)
_result_1 = it
it=_result_1 }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(it=failwrap("_or(#{ors_1*","})"));next FAIL if it==FAIL;it))
_result_1 = it },proc{it=((it=(it=clas(Seq));next FAIL if it==FAIL;it))
autovar_9 = it
(it=(it=_pass(true,autovar_9){it=(it=([]))
autovar_10 = it
while true
autovar_11=@input;r=it=((it=(it=trans());break FAIL if it==FAIL;it))
autovar_10||=[];_append(autovar_10,it)
 break FAIL if r==FAIL
 (autovar_11=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_11
it=(it=autovar_10)
t_1 = it });next FAIL if it==FAIL;it)
it=(it=("#{t_1*"\n"} "))
_result_1 = it },proc{it=((it=(it=clas(Act));next FAIL if it==FAIL;it))
autovar_12 = it
(it=(it=_pass(true,autovar_12){it=((it=(it=args());next FAIL if it==FAIL;it))
t_1 = it
it=(it=self['pred'])
pred_1 = it });next FAIL if it==FAIL;it)
it=(it=(pred_1 ?  failwrap("it=(#{t_1})||FAIL") : "it=(#{t_1})"))
_result_1 = it },proc{it=((it=(it=clas(Lookahead));next FAIL if it==FAIL;it))
autovar_13 = it
(it=(it=_pass(true,autovar_13){it=(it=self['neg'])
neg_1 = it
(it=(it=rw('next',proc{it=(it=((it=(it=trans());next FAIL if it==FAIL;it))
t_1 = it)
_result_1 = it
it=_result_1 }));next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
it=((it=(it=failwrap("_lookahead(#{!!neg_1}){#{t_1}}"));next FAIL if it==FAIL;it))
_result_1 = it },proc{it=((it=(it=clas(Comment));next FAIL if it==FAIL;it))
autovar_14 = it
(it=(it=_pass(true,autovar_14){(it=(it=anything());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=(it=(""))
_result_1 = it },proc{it=((it=(it=clas(Many));next FAIL if it==FAIL;it))
autovar_15 = it
(it=(it=_pass(true,autovar_15){(it=(it=rw('break', proc{it=(it=((it=(it=trans());next FAIL if it==FAIL;it))
t_1 = it)
_result_1 = it
it=_result_1 } ));next FAIL if it==FAIL;it)
it=(it=self['o'])
autovar_16 = it
(it=(it=_pass(false,autovar_16){it=((it=(it=arg());next FAIL if it==FAIL;it))
o_1 = it});next FAIL if it==FAIL;it) });next FAIL if it==FAIL;it)
it=(it=("while true\n#{o_1}=@input;r=#{t_1}\n break FAIL if r==FAIL\n (#{o_1}=@input;@stop=nil;break FAIL) if @stop==true\nend;@input=#{o_1}"))
_result_1 = it },proc{it=((it=(it=clas(Apply));next FAIL if it==FAIL;it))
autovar_17 = it
(it=(it=_pass(true,autovar_17){it=((it=(it=clas(Array));next FAIL if it==FAIL;it))
autovar_18 = it
(it=(it=_pass(true,autovar_18){(it=(it=anything());next FAIL if it==FAIL;it)
it=((it=(it=anything());next FAIL if it==FAIL;it))
name_1 = it });next FAIL if it==FAIL;it)
it=((it=(it=args());next FAIL if it==FAIL;it))
argss_1 = it });next FAIL if it==FAIL;it)
it=((it=(it=failwrap("it=_foreign(:#{name_1 } #{argss_1!=[] ? ",#{argss_1}" : "" })"));next FAIL if it==FAIL;it))
_result_1 = it },proc{it=((it=(it=clas(Apply));next FAIL if it==FAIL;it))
autovar_19 = it
(it=(it=_pass(true,autovar_19){it=((it=(it=anything());next FAIL if it==FAIL;it))
name_1 = it
it=((it=(it=args());next FAIL if it==FAIL;it))
argss_1 = it });next FAIL if it==FAIL;it)
it=((it=(it=failwrap("it=#{name_1}(#{argss_1})"));next FAIL if it==FAIL;it))
_result_1 = it },proc{it=((it=(it=clas(Set));next FAIL if it==FAIL;it))
autovar_20 = it
(it=(it=_pass(true,autovar_20){it=(it=self['name'])
autovar_21 = it
(it=(it=_pass(false,autovar_21){it=((it=(it=arg());next FAIL if it==FAIL;it))
name_1 = it});next FAIL if it==FAIL;it)
it=(it=self['expr'])
autovar_22 = it
(it=(it=_pass(false,autovar_22){it=((it=(it=trans());next FAIL if it==FAIL;it))
expr_1 = it});next FAIL if it==FAIL;it)
it=(it=self['append'])
append_1 = it });next FAIL if it==FAIL;it)
it=(it=("it=(#{expr_1})\n" + (append_1 ? "#{name_1}||=[];_append(#{name_1},it)" : "#{name_1} = it")))
_result_1 = it },proc{it=((it=(it=clas(Result));next FAIL if it==FAIL;it))
autovar_23 = it
(it=(it=_pass(true,autovar_23){it=(it=self['name'])
name_1 = it
it=(it=self['args'])
autovar_24 = it
(it=(it=_pass(false,autovar_24){it=((it=(it=args());next FAIL if it==FAIL;it))
argss_1 = it});next FAIL if it==FAIL;it)
it=(it=self['vars'])
vars_1 = it });next FAIL if it==FAIL;it)
it=(it=("it=#{name_1}.create(#{argss_1} {#{vars_1.map{|l| ":#{l[0]}=>#{varname(@varhash,l[0],l[1])}" }*","} })"))
_result_1 = it },proc{it=((it=(it=clas(Key));next FAIL if it==FAIL;it))
autovar_25 = it
(it=(it=_pass(true,autovar_25){it=(it=self['name'])
name_1 = it});next FAIL if it==FAIL;it)
it=(it=("it=self['#{name_1}']"))
_result_1 = it },proc{it=((it=(it=clas(Local));next FAIL if it==FAIL;it))
autovar_26 = it
(it=(it=_pass(true,autovar_26){it=((it=(it=anything());next FAIL if it==FAIL;it))
name_1 = it
it=((it=(it=anything());next FAIL if it==FAIL;it))
number_1 = it });next FAIL if it==FAIL;it)
it=(it=("it="+ varname(@varhash,name_1,number_1)))
_result_1 = it },proc{it=((it=(it=clas(Global));next FAIL if it==FAIL;it))
autovar_27 = it
(it=(it=_pass(true,autovar_27){it=((it=(it=anything());next FAIL if it==FAIL;it))
name_1 = it});next FAIL if it==FAIL;it)
it=(it=("it=@#{name_1}"))
_result_1 = it },proc{it=((it=(it=clas(Pass));next FAIL if it==FAIL;it))
autovar_28 = it
(it=(it=_pass(true,autovar_28){(it=(it=rw('next',proc{it=(it=self['to'])
autovar_29 = it
(it=(it=_pass(false,autovar_29){it=((it=(it=trans());next FAIL if it==FAIL;it))
to_1 = it});next FAIL if it==FAIL;it)
it=(it=self['var'])
autovar_30 = it
(it=(it=_pass(false,autovar_30){it=((it=(it=arg());next FAIL if it==FAIL;it))
var_1 = it});next FAIL if it==FAIL;it)
it=(it=(it=self['enter'])
enter_1 = it)
_result_1 = it
it=_result_1 }));next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(it=failwrap("it=_pass(#{!!enter_1},#{var_1}){#{to_1}}"));next FAIL if it==FAIL;it))
_result_1 = it },proc{it=((it=(it=clas(Cut));next FAIL if it==FAIL;it))
autovar_31 = it
(it=(it=_pass(true,autovar_31){ });next FAIL if it==FAIL;it)
it=(it=("@cut=true;it"))
_result_1 = it },proc{it=((it=(it=clas(Stop));next FAIL if it==FAIL;it))
autovar_32 = it
(it=(it=_pass(true,autovar_32){ });next FAIL if it==FAIL;it)
it=(it=("@stop=true;it"))
_result_1 = it }));return FAIL if it==FAIL;it)
it=_result_1  
end
def transfn()
 _result_1=nil
t_1=nil
 it=((it=(it=trans());return FAIL if it==FAIL;it))
t_1 = it
it=(it=("proc{#{t_1}}" ))
_result_1 = it
it=_result_1  
end
def transs()
 _result_1=nil
t_1=nil
 it=((it=(it=anything());return FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=trans());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
t_1 = it });return FAIL if it==FAIL;it)
it=(it=t_1)
_result_1 = it
it=_result_1  
end
def args()
 a_1=nil
_result_1=nil
 (it=(_or(proc{it=((it=(it=clas(Array));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=arg());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
a_1 = it });next FAIL if it==FAIL;it)
it=(it=(a_1*","))
_result_1 = it },proc{it=(it=([]))
autovar_4 = it
while true
autovar_5=@input;r=it=((it=(it=arg());break FAIL if it==FAIL;it))
autovar_4||=[];_append(autovar_4,it)
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5
it=(it=autovar_4)
a_1 = it
it=(it=(a_1*","))
_result_1 = it }));return FAIL if it==FAIL;it)
it=_result_1  
end
def arg()
 number_1=nil
name_1=nil
a_1=nil
_result_1=nil
t_1=nil
 (it=(_or(proc{it=((it=(it=clas(Args));next FAIL if it==FAIL;it))
autovar_1 = it
(it=(it=_pass(true,autovar_1){it=(it=([]))
autovar_2 = it
while true
autovar_3=@input;r=it=((it=(it=arg());break FAIL if it==FAIL;it))
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(it=autovar_2)
a_1 = it });next FAIL if it==FAIL;it)
it=(it=(a_1*""))
_result_1 = it },proc{it=((it=(it=clas(Strin));next FAIL if it==FAIL;it))
autovar_4 = it
(it=(it=_pass(true,autovar_4){it=(it=([]))
autovar_5 = it
while true
autovar_6=@input;r=it=((it=(it=arg());break FAIL if it==FAIL;it))
autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
it=(it=autovar_5)
a_1 = it });next FAIL if it==FAIL;it)
it=(it=(a_1*""))
_result_1 = it },proc{it=((it=(it=clas(Exp));next FAIL if it==FAIL;it))
autovar_7 = it
(it=(it=_pass(true,autovar_7){it=((it=(it=transfn());next FAIL if it==FAIL;it))
t_1 = it});next FAIL if it==FAIL;it)
it=(it=t_1)
_result_1 = it },proc{it=((it=(it=clas(Key));next FAIL if it==FAIL;it))
autovar_8 = it
(it=(it=_pass(true,autovar_8){it=(it=self['name'])
name_1 = it});next FAIL if it==FAIL;it)
it=(it=(" self['#{name_1}']"))
_result_1 = it },proc{it=((it=(it=clas(Local));next FAIL if it==FAIL;it))
autovar_9 = it
(it=(it=_pass(true,autovar_9){it=((it=(it=anything());next FAIL if it==FAIL;it))
name_1 = it
it=((it=(it=anything());next FAIL if it==FAIL;it))
number_1 = it });next FAIL if it==FAIL;it)
it=(it=(varname(@varhash,name_1,number_1)))
_result_1 = it },proc{it=((it=(it=clas(Global));next FAIL if it==FAIL;it))
autovar_10 = it
(it=(it=_pass(true,autovar_10){it=((it=(it=anything());next FAIL if it==FAIL;it))
name_1 = it});next FAIL if it==FAIL;it)
it=(it=("@#{name_1}"))
_result_1 = it },proc{it=((it=(it=anything());next FAIL if it==FAIL;it))
_result_1 = it}));return FAIL if it==FAIL;it)
it=_result_1  
end
def rw(word_1,prc_1)
 x_1=nil
_result_1=nil
 it=(rwo=@returnword;@returnword=word_1)
it=((it=(it=apply(prc_1));return FAIL if it==FAIL;it))
x_1 = it
it=(it=(@returnword=rwo;x_1))
_result_1 = it
it=_result_1  
end
def failwrap(s_1)
 _result_1=nil
 it=(it=("(it=(#{s_1});#{@returnword} FAIL if it==FAIL;it)" ))
_result_1 = it
it=_result_1  
end

end

