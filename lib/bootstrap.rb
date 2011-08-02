class Amethyst < AmethystCore
def _()
_result_1=nil
 it=nil
it=space();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def _false()
_result_1=nil
 it=nil
it=exactly(false);return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def _true()
_result_1=nil
 it=nil
it=exactly(true);return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def alnum()
_result_1=nil
 it=nil
it=letterOrDigit();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def alpha()
_result_1=nil
 it=nil
it=letter();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def char()
_result_1=nil
c_1=nil
 it=nil
it=anything();return FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1  
end
def clas(cls_1)
_result_1=nil
i_1=nil
 it=nil
it=anything();return FAIL if it==FAIL
i_1 = it
it=(i_1.is_a?(cls_1))||FAIL;return FAIL if it==FAIL
it=i_1
_result_1 = it
it=_result_1  
end
def digit()
_result_1=nil
 it=nil
it=regch(/[0-9]/);return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def empty()
_result_1=nil
 it=nil
it=(nil)
_result_1 = it
it=_result_1  
end
def endline()
_result_1=nil
 it=nil
it=_or(proc{it=seq("\r\n");next FAIL if it==FAIL
_result_1 = it},proc{it=seq("\r");next FAIL if it==FAIL
_result_1 = it},proc{it=seq("\n");next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def eof()
_result_1=nil
 it=nil
it=_lookahead(true){it=anything();next FAIL if it==FAIL};return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def exactly(wanted_1)
_result_1=nil
got_1=nil
 it=nil
it=anything();return FAIL if it==FAIL
got_1 = it
it=(wanted_1 == got_1)||FAIL;return FAIL if it==FAIL
it=wanted_1
_result_1 = it
it=_result_1  
end
def letter()
_result_1=nil
 it=nil
it=_or(proc{it=lower();next FAIL if it==FAIL
_result_1 = it},proc{it=upper();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def letterOrDigit()
_result_1=nil
 it=nil
it=_or(proc{it=letter();next FAIL if it==FAIL
_result_1 = it},proc{it=digit();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def listOf(rule_1,delim_1)
_result_1=nil
f_1=nil
 it=nil
it=_or(proc{it=apply(rule_1);next FAIL if it==FAIL
f_1||=[];_append(f_1,it)
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=apply(delim_1);break FAIL if it==FAIL
it=apply(rule_1);break FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
f_1||=[];_append(f_1,it)
it=f_1
_result_1 = it },proc{it=empty();next FAIL if it==FAIL
it=([])
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def lower()
_result_1=nil
 it=nil
it=regch(/[a-z]/);return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def regch(regex_1)
_result_1=nil
c_1=nil
 it=nil
it=char();return FAIL if it==FAIL
c_1 = it
it=(regex_1.match(c_1))||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1  
end
def space()
_result_1=nil
 it=nil
it=regch(/[\s\t\r\n\f]/);return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def spaces()
_result_1=nil
 it=nil
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=space();break FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
_result_1 = it
it=_result_1  
end
def token(s_1)
_result_1=nil
 it=nil
it=spaces();return FAIL if it==FAIL
it=seq(s_1);return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def upper()
_result_1=nil
 it=nil
it=regch(/[A-Z]/);return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def word()
_result_1=nil
 it=nil
it=_or(proc{it=alpha();next FAIL if it==FAIL
_result_1 = it},proc{it=seq("_");next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def xdigit()
_result_1=nil
 it=nil
it=regch(/[0-9a-fA-F]/);return FAIL if it==FAIL
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
def __args(o_1,c_1)
_result_1=nil
r_1=nil
 it=nil
it=seq(o_1);return FAIL if it==FAIL
it=token("");return FAIL if it==FAIL
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=rubyarg();break FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
r_1 = it
it=seq(c_1);return FAIL if it==FAIL
it=r_1
_result_1 = it
it=_result_1  
end
def _args(o_1,c_1)
_result_1=nil
r_1=nil
 it=nil
it=__args(o_1,c_1);return FAIL if it==FAIL
r_1 = it
it=(Args[{:ary=>([o_1]+r_1+[c_1])}])
_result_1 = it
it=_result_1  
end
def addargs()
_result_1=nil
name_1=nil
result_1=nil
 it=nil
while true
autovar_2=@input;r=it=clas(Args);break FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=anything();next FAIL if it==FAIL
name_1 = it
it=(_Local(name_1) )
result_1||=[];_append(result_1,it) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(result_1 || [])
_result_1 = it
it=_result_1  
end
def application()
_result_1=nil
arg_1=nil
klas_1=nil
rule_1=nil
 it=nil
it=_or(proc{it=name();next FAIL if it==FAIL
klas_1 = it
it=seq("::");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
rule_1 = it
it=([klas_1,rule_1])
rule_1 = it },proc{it=name();next FAIL if it==FAIL
rule_1 = it});return FAIL if it==FAIL
it=argsOpt('(',')');return FAIL if it==FAIL
arg_1 = it
it=(Apply[rule_1,arg_1])
_result_1 = it
it=_result_1  
end
def args(o_1,c_1)
_result_1=nil
r_1=nil
 it=nil
it=__args(o_1,c_1);return FAIL if it==FAIL
r_1 = it
it=(r_1+[','])
autovar_1 = it
it=_pass(false,autovar_1){it=anything();next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=procargs();next FAIL if it==FAIL
_result_1 = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=_result_1  
end
def argsOpt(o_1,c_1)
_result_1=nil
 it=nil
it=_or(proc{it=args(o_1,c_1);next FAIL if it==FAIL
_result_1 = it},proc{it=empty();next FAIL if it==FAIL
it=([])
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def atomicHostExpr()
_result_1=nil
s_1=nil
 it=nil
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=_lookahead(true){it=endline();next FAIL if it==FAIL};break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
s_1 = it
it=("{#{s_1*""}}")
autovar_3 = it
it=_pass(false,autovar_3){it=anything();next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=inlineHostExpr();next FAIL if it==FAIL
_result_1 = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=_result_1  
end
def choice()
_result_1=nil
ary_1=nil
 it=nil
it=listOf('sequence',proc{it=token("|");return FAIL if it==FAIL
_result_1 = it
it=_result_1 });return FAIL if it==FAIL
ary_1 = it
it=Or.create( {:ary=>ary_1 })
_result_1 = it
it=_result_1  
end
def className()
_result_1=nil
it_1=nil
 it=nil
it=token("");return FAIL if it==FAIL
it=upper();return FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)
it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=nameRest();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
autovar_1||=[];_append(autovar_1,it)
it=autovar_1
it_1 = it
it=(leterize(it_1*""))
_result_1 = it
it=_result_1  
end
def collect(ors_1)
_result_1=nil
 it=nil
it=(a=autovar; Seq[Or[{:ary=>ors_1.ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]])
_result_1 = it
it=_result_1  
end
def eChar()
_result_1=nil
c_1=nil
 it=nil
it=_or(proc{it=seq("\\");next FAIL if it==FAIL
it=char();next FAIL if it==FAIL
c_1 = it
it=("\\#{c_1}")
_result_1 = it },proc{it=_args('#{','}');next FAIL if it==FAIL
_result_1 = it},proc{it=char();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def expression()
_result_1=nil
 it=nil
it=choice();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def grammar()
_result_1=nil
name_1=nil
parent_1=nil
rules_1=nil
 it=nil
it=token("amethyst");return FAIL if it==FAIL
it=name();return FAIL if it==FAIL
name_1 = it
it=_or(proc{it=token("<");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
parent_1 = it },proc{it=empty();next FAIL if it==FAIL
it=(parent_1="Amethyst") });return FAIL if it==FAIL
it=token("{");return FAIL if it==FAIL
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=rule();break FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
rules_1 = it
it=token("}");return FAIL if it==FAIL
it=Grammar.create( {:name=>name_1,:parent=>parent_1,:rules=>rules_1 })
_result_1 = it
it=_result_1  
end
def igrammar()
_result_1=nil
a_1=nil
it_1=nil
 it=nil
it=([])
autovar_1 = it
while true
autovar_4=@input;r=it=_or(proc{it=([])
autovar_2 = it
it=_lookahead(true){it=seq("amethyst");next FAIL if it==FAIL};next FAIL if it==FAIL
it=anything();next FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
while true
autovar_3=@input;r=it=_lookahead(true){it=seq("amethyst");next FAIL if it==FAIL};break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it) 
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
it_1 = it
it=(it_1*"")
autovar_1||=[];_append(autovar_1,it) },proc{it=grammar();next FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
it=autovar_1
a_1 = it
it=a_1
_result_1 = it
it=_result_1  
end
def inlineHostExpr()
_result_1=nil
 it=nil
it=args('{','}');return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def key()
_result_1=nil
args_1=nil
n_1=nil
name_1=nil
vars_1=nil
 it=nil
it=_or(proc{it=token("@");next FAIL if it==FAIL
it=className();next FAIL if it==FAIL
name_1 = it
it=argsOpt('[',']');next FAIL if it==FAIL
args_1 = it
it=(Object.const_get(name_1).instance_variable_get(:@attrs))
vars_1 = it
it=Result.create( {:args=>args_1,:name=>name_1,:vars=>vars_1 })
_result_1 = it },proc{it=token("@");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
name_1 = it
it=Key.create( {:args=>args_1,:name=>name_1 })
_result_1 = it },proc{it=token("@@");next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
n_1 = it
it=(Global[n_1])
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def modifier()
_result_1=nil
c_1=nil
 it=nil
it=_or(proc{it=term();next FAIL if it==FAIL
_result_1 = it},proc{it=token("#");next FAIL if it==FAIL
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=_lookahead(true){it=endline();next FAIL if it==FAIL};break FAIL if it==FAIL
it=anything();break FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
c_1 = it
it=(Comment[c_1])
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def name()
_result_1=nil
it_1=nil
 it=nil
it=token("");return FAIL if it==FAIL
it=nameFirst();return FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)
it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=nameRest();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
autovar_1||=[];_append(autovar_1,it)
it=autovar_1
it_1 = it
it=(leterize(it_1*""))
_result_1 = it
it=_result_1  
end
def nameFirst()
_result_1=nil
 it=nil
it=_or(proc{it=letter();next FAIL if it==FAIL
_result_1 = it},proc{it=seq("_");next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def nameRest()
_result_1=nil
 it=nil
it=_or(proc{it=nameFirst();next FAIL if it==FAIL
_result_1 = it},proc{it=digit();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def nr()
_result_1=nil
 it=nil
it=_lookahead(true){it=name();next FAIL if it==FAIL
it=argsOpt('(',')');next FAIL if it==FAIL
it=token("=");next FAIL if it==FAIL };return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def number()
_result_1=nil
 it=nil
it=([])
autovar_1 = it
it=regch(/[0-9]/);return FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)
while true
autovar_2=@input;r=it=regch(/[0-9]/);break FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
_result_1 = it
it=_result_1  
end
def prefixed()
_result_1=nil
append_1=nil
e_1=nil
expr_1=nil
from_1=nil
it_1=nil
m_1=nil
name_1=nil
neg_1=nil
one_1=nil
 it=nil
it=_or(proc{it=token("&");next FAIL if it==FAIL
it=inlineHostExpr();next FAIL if it==FAIL
expr_1 = it
it=(Pred[expr_1])
_result_1 = it },proc{it=_or(proc{it=token("&");next FAIL if it==FAIL
neg_1 = it},proc{it=token("~");next FAIL if it==FAIL
neg_1 = it});next FAIL if it==FAIL
it=prefixed();next FAIL if it==FAIL
m_1 = it
it=(Lookahead[m_1,neg_1=="~"])
_result_1 = it },proc{it=_or(proc{it=modifier();next FAIL if it==FAIL
from_1 = it},proc{it=token("");next FAIL if it==FAIL
it=_lookahead(false){it=regch(/[.:\[]/);next FAIL if it==FAIL};next FAIL if it==FAIL
it=_or(proc{it=token(".");next FAIL if it==FAIL},proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=(Apply["anything"])
from_1 = it });next FAIL if it==FAIL
while true
autovar_1=@input;r=it=_lookahead(true){it=_();next FAIL if it==FAIL};break FAIL if it==FAIL
it=_or(proc{it=token("=>");next FAIL if it==FAIL
it=prefixed();next FAIL if it==FAIL
it_1 = it
it=(from_1=Pass[from_1,it_1]) },proc{it=token("[");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
it_1 = it
it=(from_1=Enter[from_1,it_1])
it=token("]");next FAIL if it==FAIL },proc{it=_or(proc{it=token("*");next FAIL if it==FAIL
one_1 = it},proc{it=token("+");next FAIL if it==FAIL
one_1 = it});next FAIL if it==FAIL
it=(Many[from_1,one_1=="+"])
from_1 = it },proc{it=token("?");next FAIL if it==FAIL
it=(Or[from_1,Apply["empty"]])
from_1 = it },proc{it=token(":");next FAIL if it==FAIL
it=_or(proc{it=_or(proc{it=key();next FAIL if it==FAIL
name_1 = it},proc{it=name();next FAIL if it==FAIL
name_1 = it});next FAIL if it==FAIL
it=_or(proc{it=seq("[]");next FAIL if it==FAIL
it=(true)
append_1 = it },proc{it=empty();next FAIL if it==FAIL
it=(nil)
append_1 = it });next FAIL if it==FAIL
it=(_Set(name_1,from_1,append_1))
from_1 = it },proc{it=inlineHostExpr();next FAIL if it==FAIL
e_1 = it
it=(Seq[_Set("it",from_1) , Act[e_1] ])
from_1 = it });next FAIL if it==FAIL });break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
it=from_1
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def procargs()
_result_1=nil
c_1=nil
 it=nil
it=(@ary=[];@tmp=[])
while true
autovar_1=@input;r=it=_or(proc{it=anything();next FAIL if it==FAIL
c_1 = it
it=(c_1==',')||FAIL;next FAIL if it==FAIL
it=(@ary<<Args[{:ary=>@tmp}];@tmp=[]) },proc{it=procargs2();next FAIL if it==FAIL});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
it=@ary
_result_1 = it
it=_result_1  
end
def procargs2()
_result_1=nil
a_1=nil
 it=nil
it=_or(proc{it=clas(Args);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=procargs2();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
_result_1 = it };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
a_1 = it
it=(@tmp<<a_1)
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def rubyarg()
_result_1=nil
e_1=nil
n_1=nil
s_1=nil
 it=nil
it=_or(proc{it=seq("`");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
e_1 = it
it=seq("`");next FAIL if it==FAIL
it=(Exp[_body(e_1)])
_result_1 = it },proc{it=_args('(',')');next FAIL if it==FAIL
_result_1 = it},proc{it=_args('[',']');next FAIL if it==FAIL
_result_1 = it},proc{it=_args('{','}');next FAIL if it==FAIL
_result_1 = it},proc{it=seq("\"");next FAIL if it==FAIL
s_1||=[];_append(s_1,it)
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=_or(proc{it=seq("\"");next FAIL if it==FAIL
@cut=true;it
@stop=true;it
autovar_1||=[];_append(autovar_1,it) },proc{it=eChar();next FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
s_1||=[];_append(s_1,it)
it=(Strin[connectstring(s_1)])
_result_1 = it },proc{it=seq("\'");next FAIL if it==FAIL
s_1||=[];_append(s_1,it)
it=([])
autovar_3 = it
while true
autovar_4=@input;r=it=_or(proc{it=seq("\'");next FAIL if it==FAIL
@cut=true;it
@stop=true;it
autovar_3||=[];_append(autovar_3,it) },proc{it=eChar();next FAIL if it==FAIL
autovar_3||=[];_append(autovar_3,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
it=autovar_3
s_1||=[];_append(s_1,it)
it=(Strin[connectstring(s_1)])
_result_1 = it },proc{it=_or(proc{it=token(":@");next FAIL if it==FAIL
n_1 = it},proc{it=regch(/[$.:]/);next FAIL if it==FAIL
n_1 = it},proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=_lookahead(true){it=_();next FAIL if it==FAIL};next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
n_1||=[];_append(n_1,it)
it=n_1
_result_1 = it },proc{it=_lookahead(true){it=_();next FAIL if it==FAIL};next FAIL if it==FAIL
it=key();next FAIL if it==FAIL
_result_1 = it },proc{it=regch(/[^`{}()'"\[\]]/);next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def rule()
_result_1=nil
args_1=nil
bnding_1=nil
body_1=nil
locals_1=nil
name_1=nil
 it=nil
it=(@locals=[];@bnding=Bnding[])
it=@bnding
bnding_1 = it
it=name();return FAIL if it==FAIL
name_1 = it
it=ruleargs();return FAIL if it==FAIL
args_1 = it
it=token("=");return FAIL if it==FAIL
it=expression();return FAIL if it==FAIL
body_1 = it
it=(_body(body_1))
body_1 = it
it=(@locals.uniq)
locals_1 = it
it=Rule.create( {:args=>args_1,:bnding=>bnding_1,:body=>body_1,:locals=>locals_1,:name=>name_1 })
_result_1 = it
it=_result_1  
end
def ruleargs()
_result_1=nil
 it=nil
it=argsOpt('(',')');return FAIL if it==FAIL
autovar_1 = it
it=_pass(false,autovar_1){it=anything();next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=addargs();next FAIL if it==FAIL
_result_1 = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=_result_1  
end
def sequence()
_result_1=nil
ary_1=nil
 it=nil
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=nr();break FAIL if it==FAIL
it=prefixed();break FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
ary_1 = it
it=Seq.create( {:ary=>ary_1 })
_result_1 = it
it=_result_1  
end
def term()
_result_1=nil
cls_1=nil
expr_1=nil
it_1=nil
s_1=nil
x_1=nil
 it=nil
it=_or(proc{it=className();next FAIL if it==FAIL
cls_1 = it
it=(Apply["clas",cls_1])
_result_1 = it },proc{it=token("nested");next FAIL if it==FAIL
it=seq("(");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
expr_1 = it
it=token(")");next FAIL if it==FAIL
it=(Nested[expr_1])
_result_1 = it },proc{it=token("break");next FAIL if it==FAIL
it=(Seq[Cut[],Stop[]])
_result_1 = it },proc{it=application();next FAIL if it==FAIL
_result_1 = it},proc{it=key();next FAIL if it==FAIL
_result_1 = it},proc{it=_or(proc{it=token("->");next FAIL if it==FAIL
it=atomicHostExpr();next FAIL if it==FAIL
x_1 = it },proc{it=token("");next FAIL if it==FAIL
it=inlineHostExpr();next FAIL if it==FAIL
x_1 = it });next FAIL if it==FAIL
it=(Act[x_1])
_result_1 = it },proc{it=token("\"");next FAIL if it==FAIL
while true
autovar_1=@input;r=it=_or(proc{it=seq("\"");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
s_1||=[];_append(s_1,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
it=(Apply["token" ,quote(s_1)])
_result_1 = it },proc{it=token("'");next FAIL if it==FAIL
while true
autovar_2=@input;r=it=_or(proc{it=seq("\'");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
s_1||=[];_append(s_1,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(Apply["seq"   ,quote(s_1)])
_result_1 = it },proc{it=number();next FAIL if it==FAIL
it_1 = it
it=(Apply["exactly",it_1])
_result_1 = it },proc{it=token("<");next FAIL if it==FAIL
while true
autovar_3=@input;r=it=_or(proc{it=token(">");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
x_1||=[];_append(x_1,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(Apply["regch","/[#{x_1}]/"])
_result_1 = it },proc{it=token("(");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
x_1 = it
it=token(")");next FAIL if it==FAIL
it=_or(proc{it=seq("[]");next FAIL if it==FAIL
it=collect(x_1);next FAIL if it==FAIL
_result_1 = it },proc{it=empty();next FAIL if it==FAIL
it=x_1
_result_1 = it });next FAIL if it==FAIL });return FAIL if it==FAIL
it=_result_1  
end

end

class AmethystOptimizer < Amethyst
def arg()
_result_1=nil
ary_1=nil
 it=nil
it=_or(proc{it=clas(Args);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=arg();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
ary_1 = it };next FAIL if it==FAIL
it=Args.create( {:ary=>ary_1 })
_result_1 = it },proc{it=clas(Strin);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=([])
autovar_5 = it
while true
autovar_6=@input;r=it=_or(proc{it=char();next FAIL if it==FAIL
autovar_5||=[];_append(autovar_5,it)},proc{it=arg();next FAIL if it==FAIL
autovar_5||=[];_append(autovar_5,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
it=autovar_5
ary_1 = it };next FAIL if it==FAIL
it=Strin.create( {:ary=>ary_1 })
_result_1 = it },proc{it=clas(Exp);next FAIL if it==FAIL
autovar_7 = it
it=_pass(true,autovar_7){it=transfn();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it)};next FAIL if it==FAIL
it=Exp.create( {:ary=>ary_1 })
_result_1 = it },proc{it=anything();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def args()
_result_1=nil
a_1=nil
 it=nil
it=_or(proc{it=clas(Array);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=arg();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
a_1 = it };next FAIL if it==FAIL
it=a_1
_result_1 = it },proc{it=([])
autovar_4 = it
while true
autovar_5=@input;r=it=arg();break FAIL if it==FAIL
autovar_4||=[];_append(autovar_4,it)
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5
it=autovar_4
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def itrans()
_result_1=nil
r_1=nil
 it=nil
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=_or(proc{it=char();next FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)},proc{it=trans();next FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
r_1 = it
it=r_1
_result_1 = it
it=_result_1  
end
def trans()
_result_1=nil
append_1=nil
args_1=nil
ary_1=nil
body_1=nil
enter_1=nil
expr_1=nil
locals_1=nil
name_1=nil
neg_1=nil
o_1=nil
parent_1=nil
pred_1=nil
rules_1=nil
to_1=nil
var_1=nil
vars_1=nil
 it=nil
it=_or(proc{it=clas(Grammar);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=self['name']
name_1 = it
it=self['parent']
parent_1 = it
it=self['rules']
autovar_2 = it
it=_pass(false,autovar_2){it=transs();next FAIL if it==FAIL
rules_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=Grammar.create( {:ary=>ary_1,:name=>name_1,:parent=>parent_1,:rules=>rules_1 })
_result_1 = it },proc{it=clas(Rule);next FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){it=self['name']
name_1 = it
it=self['args']
autovar_4 = it
it=_pass(false,autovar_4){it=args();next FAIL if it==FAIL
args_1 = it};next FAIL if it==FAIL
it=self['body']
autovar_5 = it
it=_pass(false,autovar_5){it=trans();next FAIL if it==FAIL
body_1 = it};next FAIL if it==FAIL
it=self['locals']
locals_1 = it };next FAIL if it==FAIL
it=Rule.create( {:args=>args_1,:ary=>ary_1,:body=>body_1,:locals=>locals_1,:name=>name_1 })
_result_1 = it },proc{it=clas(Or);next FAIL if it==FAIL
autovar_6 = it
it=_pass(true,autovar_6){it=([])
autovar_7 = it
while true
autovar_8=@input;r=it=transfn();break FAIL if it==FAIL
autovar_7||=[];_append(autovar_7,it)
 break FAIL if r==FAIL
 (autovar_8=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_8
it=autovar_7
ary_1 = it };next FAIL if it==FAIL
it=Or.create( {:ary=>ary_1 })
_result_1 = it },proc{it=clas(Seq);next FAIL if it==FAIL
autovar_9 = it
it=_pass(true,autovar_9){it=([])
autovar_10 = it
while true
autovar_11=@input;r=it=trans();break FAIL if it==FAIL
autovar_10||=[];_append(autovar_10,it)
 break FAIL if r==FAIL
 (autovar_11=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_11
it=autovar_10
ary_1 = it };next FAIL if it==FAIL
it=Seq.create( {:ary=>ary_1 })
_result_1 = it },proc{it=clas(Lookahead);next FAIL if it==FAIL
autovar_12 = it
it=_pass(true,autovar_12){it=trans();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it)
it=self['neg']
neg_1 = it };next FAIL if it==FAIL
it=Lookahead.create( {:ary=>ary_1,:neg=>neg_1 })
_result_1 = it },proc{it=clas(Comment);next FAIL if it==FAIL
autovar_13 = it
it=_pass(true,autovar_13){it=([])
autovar_14 = it
while true
autovar_15=@input;r=it=anything();break FAIL if it==FAIL
autovar_14||=[];_append(autovar_14,it)
 break FAIL if r==FAIL
 (autovar_15=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_15
it=autovar_14
ary_1 = it };next FAIL if it==FAIL
it=Comment.create( {:ary=>ary_1 })
_result_1 = it },proc{it=clas(Many);next FAIL if it==FAIL
autovar_16 = it
it=_pass(true,autovar_16){it=trans();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it)
it=self['o']
o_1 = it };next FAIL if it==FAIL
it=Many.create( {:ary=>ary_1,:o=>o_1 })
_result_1 = it },proc{it=clas(Apply);next FAIL if it==FAIL
autovar_17 = it
it=_pass(true,autovar_17){it=anything();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it)
it=args();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it) };next FAIL if it==FAIL
it=Apply.create( {:ary=>ary_1 })
_result_1 = it },proc{it=clas(Set);next FAIL if it==FAIL
autovar_18 = it
it=_pass(true,autovar_18){it=self['name']
autovar_19 = it
it=_pass(false,autovar_19){it=arg();next FAIL if it==FAIL
name_1 = it};next FAIL if it==FAIL
it=self['expr']
autovar_20 = it
it=_pass(false,autovar_20){it=trans();next FAIL if it==FAIL
expr_1 = it};next FAIL if it==FAIL
it=self['append']
append_1 = it };next FAIL if it==FAIL
it=Set.create( {:append=>append_1,:ary=>ary_1,:expr=>expr_1,:name=>name_1 })
_result_1 = it },proc{it=clas(Act);next FAIL if it==FAIL
autovar_21 = it
it=_pass(true,autovar_21){it=args();next FAIL if it==FAIL
ary_1 = it
it=self['pred']
pred_1 = it };next FAIL if it==FAIL
it=Act.create( {:ary=>ary_1,:pred=>pred_1 })
_result_1 = it },proc{it=clas(Result);next FAIL if it==FAIL
autovar_22 = it
it=_pass(true,autovar_22){it=self['name']
name_1 = it
it=self['args']
autovar_23 = it
it=_pass(false,autovar_23){it=args();next FAIL if it==FAIL
args_1 = it};next FAIL if it==FAIL
it=self['vars']
autovar_24 = it
it=_pass(false,autovar_24){it=args();next FAIL if it==FAIL
vars_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=Result.create( {:args=>args_1,:ary=>ary_1,:expr=>expr_1,:name=>name_1,:vars=>vars_1 })
_result_1 = it },proc{it=clas(Args);next FAIL if it==FAIL
autovar_25 = it
it=_pass(true,autovar_25){it=([])
autovar_26 = it
while true
autovar_27=@input;r=it=arg();break FAIL if it==FAIL
autovar_26||=[];_append(autovar_26,it)
 break FAIL if r==FAIL
 (autovar_27=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_27
it=autovar_26
ary_1 = it };next FAIL if it==FAIL
it=Args.create( {:ary=>ary_1,:o=>o_1 })
_result_1 = it },proc{it=clas(Key);next FAIL if it==FAIL
autovar_28 = it
it=_pass(true,autovar_28){it=self['name']
name_1 = it};next FAIL if it==FAIL
it=Key.create( {:args=>args_1,:ary=>ary_1,:expr=>expr_1,:name=>name_1 })
_result_1 = it },proc{it=clas(Pass);next FAIL if it==FAIL
autovar_29 = it
it=_pass(true,autovar_29){it=self['to']
autovar_30 = it
it=_pass(false,autovar_30){it=trans();next FAIL if it==FAIL
to_1 = it};next FAIL if it==FAIL
it=self['var']
autovar_31 = it
it=_pass(false,autovar_31){it=arg();next FAIL if it==FAIL
var_1 = it};next FAIL if it==FAIL
it=self['enter']
enter_1 = it };next FAIL if it==FAIL
it=Pass.create( {:ary=>ary_1,:enter=>enter_1,:to=>to_1,:var=>var_1 })
_result_1 = it },proc{it=clas(Cut);next FAIL if it==FAIL
autovar_32 = it
it=_pass(true,autovar_32){ };next FAIL if it==FAIL
it=Cut.create( {:ary=>ary_1 })
_result_1 = it },proc{it=clas(Stop);next FAIL if it==FAIL
autovar_33 = it
it=_pass(true,autovar_33){ };next FAIL if it==FAIL
it=Stop.create( {:ary=>ary_1 })
_result_1 = it },proc{it=clas(Local);next FAIL if it==FAIL
autovar_34 = it
it=_pass(true,autovar_34){while true
autovar_35=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_35=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_35
it=self['self']
_result_1 = it };next FAIL if it==FAIL },proc{it=clas(Global);next FAIL if it==FAIL
autovar_36 = it
it=_pass(true,autovar_36){while true
autovar_37=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_37=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_37
it=self['self']
_result_1 = it };next FAIL if it==FAIL },proc{it=clas(Key);next FAIL if it==FAIL
autovar_38 = it
it=_pass(true,autovar_38){while true
autovar_39=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_39=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_39
it=self['self']
_result_1 = it };next FAIL if it==FAIL });return FAIL if it==FAIL
it=_result_1  
end
def transfn()
_result_1=nil
 it=nil
it=trans();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def transs()
_result_1=nil
t_1=nil
 it=nil
it=anything();return FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=trans();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
t_1 = it };return FAIL if it==FAIL
it=t_1
_result_1 = it
it=_result_1  
end

end



class Traverser < Amethyst
def traverse()
_result_1=nil
it_1=nil
key_1=nil
this_1=nil
 it=nil
while true
autovar_1=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
it=self['self']
this_1 = it
it=((@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] })
autovar_2 = it
it=_pass(false,autovar_2){it=anything();next FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){while true
autovar_5=@input;r=it=anything();break FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=anything();next FAIL if it==FAIL
key_1 = it
it=traverse_item();next FAIL if it==FAIL
it_1 = it
it=(@x; this_1.instance_variable_set(key_1,it_1)) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5};next FAIL if it==FAIL };return FAIL if it==FAIL
it=self['self']
_result_1 = it
it=_result_1  
end
def traverse_item()
_result_1=nil
a_1=nil
 it=nil
it=_or(proc{it=visit();next FAIL if it==FAIL
a_1 = it
it=(@changed=true)
it=a_1
_result_1 = it },proc{it=clas(Array);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=traverse_item();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
_result_1 = it };next FAIL if it==FAIL },proc{it=clas(AmethystAST);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=traverse();next FAIL if it==FAIL
_result_1 = it};next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end

end



class AmethystOptimizer2 < AmethystOptimizer
def trans()
_result_1=nil
ary_1=nil
 it=nil
it=_or(proc{it=clas(Or);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=transfn();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
ary_1 = it };next FAIL if it==FAIL
it=(ary_1=ary_1.map{|o| (o.is_a?(Or)) ? o.ary : o}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=_or(proc{it=(ary_1.size==1)||FAIL;next FAIL if it==FAIL
it=(ary_1[0])
_result_1 = it },proc{it=Or.create( {:ary=>ary_1 })
_result_1 = it});next FAIL if it==FAIL },proc{it=clas(Seq);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=([])
autovar_5 = it
while true
autovar_6=@input;r=it=trans();break FAIL if it==FAIL
autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
it=autovar_5
ary_1 = it };next FAIL if it==FAIL
it=(ary_1=ary_1.map{|a| (a.is_a?(Seq)) ? a.ary : a}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=_or(proc{it=(ary_1.size==1)||FAIL;next FAIL if it==FAIL
it=(ary_1[0])
_result_1 = it },proc{it=Seq.create( {:ary=>ary_1 })
_result_1 = it});next FAIL if it==FAIL },proc{it=(super)
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end

end





class Seq_Or_Optimizer < Traverser
def root()
_result_1=nil
 it=nil
it=traverse();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def visit()
_result_1=nil
 it=nil
it=_or(proc{it=clas(Seq);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=traverse();next FAIL if it==FAIL
it=(@src.self.ary=@src.ary.map{|i| (i.is_a?(Seq)) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=((@src.ary.size==1) ? @src.ary[0] : @src.self)
_result_1 = it };next FAIL if it==FAIL },proc{it=clas(Or);next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=traverse();next FAIL if it==FAIL
it=(@src.self.ary=@src.ary.map{|i| (i.is_a?(Or )) ? i.ary : i}.flatten.select{|e| !(e.is_a?(Act) && e.ary.size==0)})
it=((@src.ary.size==1) ? @src.ary[0] : @src.self)
_result_1 = it };next FAIL if it==FAIL });return FAIL if it==FAIL
it=_result_1  
end

end

class Analyze_Variables2 < Traverser
def flat()
_result_1=nil
 it=nil
it=([])
autovar_1 = it
while true
autovar_4=@input;r=it=_or(proc{it=clas(Args);next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=flat();next FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)};next FAIL if it==FAIL },proc{it=clas(Strin);next FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){it=flat();next FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)};next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
it=autovar_1
_result_1 = it
it=_result_1  
end
def itrans()
_result_1=nil
rules_1=nil
 it=nil
it=([])
autovar_1 = it
while true
autovar_8=@input;r=it=_or(proc{it=clas(Grammar);next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=self['rules']
autovar_3 = it
it=_pass(false,autovar_3){it=anything();next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=([])
autovar_5 = it
while true
autovar_7=@input;r=it=clas(Rule);break FAIL if it==FAIL
autovar_6 = it
it=_pass(true,autovar_6){it=root();next FAIL if it==FAIL
autovar_5||=[];_append(autovar_5,it)};break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (autovar_7=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_7
it=autovar_5
rules_1 = it };next FAIL if it==FAIL };next FAIL if it==FAIL
it=(@src.rules=rules_1)
it=self['self']
autovar_1||=[];_append(autovar_1,it) };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_8=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_8
it=autovar_1
_result_1 = it
it=_result_1  
end
def root()
_result_1=nil
 it=nil
it=self['self']
autovar_1 = it
it=_pass(false,autovar_1){it=clas(Rule);next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=(@variables=Hash.new{|k,v| k[v]=v} ;(@src.locals+@src.args).each{|v| @variables[v[0]]=v})
it=(@locals=@src.locals)
it=traverse();next FAIL if it==FAIL
it=(@src.body=Seq[{:ary=>[@src.body] }];@src.locals=nil)
it=self['self']
_result_1 = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=_result_1  
end
def visit()
_result_1=nil
a_1=nil
 it=nil
it=_or(proc{it=clas(Args);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=traverse();next FAIL if it==FAIL
it=(@src.ary.map{|a_1| @variables[a_1] })
autovar_2 = it
it=_pass(false,autovar_2){it=anything();next FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){it=flat();next FAIL if it==FAIL
a_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(@src.ary=connectstring(a_1.flatten))
it=((@src.ary.size==1&&(@src.ary[0].is_a?(Local)||@src.ary[0].is_a?(Global)||@src.ary[0].is_a?(Key))) ? @src.ary[0] : @src.self)
_result_1 = it };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=traverse();next FAIL if it==FAIL
it=self['ary']
autovar_5 = it
it=_pass(false,autovar_5){it=anything();next FAIL if it==FAIL
autovar_6 = it
it=_pass(true,autovar_6){it=_or(proc{it=clas(Local);next FAIL if it==FAIL
_result_1 = it},proc{it=clas(Key);next FAIL if it==FAIL
_result_1 = it},proc{it=clas(Global);next FAIL if it==FAIL
_result_1 = it});next FAIL if it==FAIL};next FAIL if it==FAIL };next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Result);next FAIL if it==FAIL
autovar_7 = it
it=_pass(true,autovar_7){it=(@src.vars=@locals.select{|a_1| @src.vars.include? a_1[0].to_sym}.uniq)
it=self['self']
_result_1 = it };next FAIL if it==FAIL });return FAIL if it==FAIL
it=_result_1  
end

end

class Dead_Code_Detector < AmethystOptimizer
def trans()
_result_1=nil
args_1=nil
body_1=nil
locals_1=nil
name_1=nil
reachable_1=nil
this_1=nil
v_1=nil
var_1=nil
 it=nil
it=_or(proc{it=clas(Rule);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=self['name']
name_1 = it
it=(@edges=Oriented_Graph.new ; @marked=[])
it=self['args']
autovar_2 = it
it=_pass(false,autovar_2){it=args();next FAIL if it==FAIL
args_1 = it};next FAIL if it==FAIL
it=self['body']
autovar_3 = it
it=_pass(false,autovar_3){it=trans();next FAIL if it==FAIL};next FAIL if it==FAIL
it=self['body']
body_1 = it
it=self['locals']
locals_1 = it
it=(@edges.reachable(@marked))
reachable_1 = it };next FAIL if it==FAIL
it=Rule.create( {:args=>args_1,:body=>body_1,:locals=>locals_1,:name=>name_1,:reachable=>reachable_1 })
_result_1 = it },proc{it=clas(Apply);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=anything();next FAIL if it==FAIL
name_1 = it
it=vars_in();next FAIL if it==FAIL
var_1 = it
it=(@marked+=var_1)
_result_1 = it };next FAIL if it==FAIL },proc{it=clas(Pass);next FAIL if it==FAIL
autovar_5 = it
it=_pass(true,autovar_5){it=self['var']
autovar_6 = it
it=_pass(false,autovar_6){it=vars_in();next FAIL if it==FAIL
var_1 = it};next FAIL if it==FAIL
it=(@marked+=var_1)
it=self['to']
autovar_7 = it
it=_pass(false,autovar_7){it=trans();next FAIL if it==FAIL
_result_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
autovar_8 = it
it=_pass(true,autovar_8){it=self['self']
this_1 = it
it=(@marked<<this_1 if @src.pred)
it=vars_in();next FAIL if it==FAIL
var_1 = it };next FAIL if it==FAIL
it=(var_1.each{|v_1| @edges.add(v_1,this_1); @edges.add(this_1,v_1)})
_result_1 = it },proc{it=clas(Set);next FAIL if it==FAIL
autovar_9 = it
it=_pass(true,autovar_9){it=self['name']
autovar_10 = it
it=_pass(false,autovar_10){it=vars_in();next FAIL if it==FAIL
v_1 = it};next FAIL if it==FAIL
it=(v_1=v_1[0])
it=self['expr']
autovar_11 = it
it=_pass(false,autovar_11){it=trans();next FAIL if it==FAIL};next FAIL if it==FAIL
it=self['expr']
autovar_12 = it
it=_pass(false,autovar_12){it=vars_in();next FAIL if it==FAIL
var_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(var_1.each{|w| @edges.add(v_1,w)})
_result_1 = it },proc{it=clas(Result);next FAIL if it==FAIL
autovar_13 = it
it=_pass(true,autovar_13){it=self['vars']
autovar_14 = it
it=_pass(false,autovar_14){it=anything();next FAIL if it==FAIL
autovar_15 = it
it=_pass(true,autovar_15){it=vars_in();next FAIL if it==FAIL
var_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=self['self']
v_1 = it };next FAIL if it==FAIL
it=(var_1.each{|w| @edges.add(v_1,w) })
_result_1 = it },proc{it=super();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def vars_in()
_result_1=nil
ary_1=nil
name_1=nil
 it=nil
it=(ary_1=[])
while true
autovar_14=@input;r=it=_or(proc{it=clas(Global);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=self['self']
ary_1||=[];_append(ary_1,it)
it=(@marked<<@src.self)
while true
autovar_2=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2 };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){it=self['self']
ary_1||=[];_append(ary_1,it)
while true
autovar_4=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4 };next FAIL if it==FAIL },proc{it=clas(Key);next FAIL if it==FAIL
autovar_5 = it
it=_pass(true,autovar_5){it=self['self']
ary_1||=[];_append(ary_1,it)
it=(@marked<<@src.self)
while true
autovar_6=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6 };next FAIL if it==FAIL },proc{it=clas(Exp);next FAIL if it==FAIL
autovar_7 = it
it=_pass(true,autovar_7){it=trans();next FAIL if it==FAIL};next FAIL if it==FAIL },proc{it=clas(Result);next FAIL if it==FAIL
autovar_8 = it
it=_pass(true,autovar_8){it=self['self']
ary_1||=[];_append(ary_1,it)};next FAIL if it==FAIL },proc{it=clas(Strin);next FAIL if it==FAIL
autovar_9 = it
it=_pass(true,autovar_9){it=vars_in();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it)};next FAIL if it==FAIL },proc{it=clas(Args);next FAIL if it==FAIL
autovar_10 = it
it=_pass(true,autovar_10){it=vars_in();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it)};next FAIL if it==FAIL },proc{it=clas(Set);next FAIL if it==FAIL
autovar_11 = it
it=_pass(true,autovar_11){it=self['name']
autovar_12 = it
it=_pass(false,autovar_12){it=vars_in();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it)};next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Local);next FAIL if it==FAIL
autovar_13 = it
it=_pass(true,autovar_13){it=anything();next FAIL if it==FAIL
name_1 = it
it=(@marked<<@src.self if name_1=="_result")
it=self['self']
ary_1||=[];_append(ary_1,it) };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_14=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_14
it=ary_1
_result_1 = it
it=_result_1  
end

end


class Dead_Code_Deleter < AmethystOptimizer
def trans()
_result_1=nil
append_1=nil
args_1=nil
body_1=nil
expr_1=nil
it_1=nil
locals_1=nil
name_1=nil
this_1=nil
 it=nil
it=_or(proc{it=clas(Rule);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=self['name']
name_1 = it
it=self['reachable']
it_1 = it
it=(@reachable=it_1)
it=self['args']
autovar_2 = it
it=_pass(false,autovar_2){it=args();next FAIL if it==FAIL
args_1 = it};next FAIL if it==FAIL
it=self['body']
autovar_3 = it
it=_pass(false,autovar_3){it=trans();next FAIL if it==FAIL
body_1 = it};next FAIL if it==FAIL
it=self['locals']
locals_1 = it };next FAIL if it==FAIL
it=Rule.create( {:args=>args_1,:body=>body_1,:locals=>locals_1,:name=>name_1 })
_result_1 = it },proc{it=clas(Act);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=self['self']
this_1 = it
while true
autovar_5=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5 };next FAIL if it==FAIL
it=(@reachable[this_1] ? this_1 : Act[])
_result_1 = it },proc{it=clas(Set);next FAIL if it==FAIL
autovar_6 = it
it=_pass(true,autovar_6){it=self['name']
name_1 = it
it=self['expr']
autovar_7 = it
it=_pass(false,autovar_7){it=trans();next FAIL if it==FAIL
expr_1 = it};next FAIL if it==FAIL
it=self['append']
append_1 = it };next FAIL if it==FAIL
it=(@reachable[name_1] ? _Set(name_1,expr_1,append_1) : expr_1)
_result_1 = it },proc{it=clas(Result);next FAIL if it==FAIL
autovar_8 = it
it=_pass(true,autovar_8){it=self['self']
this_1 = it};next FAIL if it==FAIL
it=(@reachable[this_1] ? this_1 : Act[])
_result_1 = it },proc{it=clas(Local);next FAIL if it==FAIL
autovar_9 = it
it=_pass(true,autovar_9){while true
autovar_10=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_10=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_10
it=self['self']
this_1 = it };next FAIL if it==FAIL
it=(@reachable[this_1] ? this_1 : Act[])
_result_1 = it },proc{it=super();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end

end



class Communize_Or < AmethystOptimizer
def trans()
_result_1=nil
ary_1=nil
first_1=nil
fst_1=nil
rest_1=nil
 it=nil
it=_or(proc{it=clas(Or);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=_lookahead(false){it=clas(Seq);next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=trans();next FAIL if it==FAIL
first_1 = it
while true
autovar_3=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3 };next FAIL if it==FAIL };next FAIL if it==FAIL
while true
autovar_7=@input;r=it=clas(Seq);break FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=trans();next FAIL if it==FAIL
fst_1 = it
it=(first_1.isomorphic(fst_1))||FAIL;next FAIL if it==FAIL
it=([])
autovar_5 = it
while true
autovar_6=@input;r=it=trans();break FAIL if it==FAIL
autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
it=autovar_5
rest_1 = it
it=(Seq[{:ary=>rest_1}])
ary_1||=[];_append(ary_1,it) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (autovar_7=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_7 };next FAIL if it==FAIL
it=(Seq[first_1 ,Or[{:ary=>ary_1}] ])
_result_1 = it },proc{it=super();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end

end


class Move_Assignments < AmethystOptimizer
def move(append_1,name_1)
_result_1=nil
ary_1=nil
el_1=nil
enter_1=nil
it_1=nil
to_1=nil
var_1=nil
 it=nil
it=_or(proc{it=clas(Or);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=move(append_1,name_1);break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
ary_1 = it };next FAIL if it==FAIL
it=Or.create( {:ary=>ary_1 })
_result_1 = it },proc{it=clas(Seq);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=([])
autovar_5 = it
while true
autovar_7=@input;r=it=anything();break FAIL if it==FAIL
el_1 = it
it=_or(proc{it=_lookahead(false){it=eof();next FAIL if it==FAIL};next FAIL if it==FAIL
it=el_1
autovar_6 = it
it=_pass(false,autovar_6){it=move(append_1,name_1);next FAIL if it==FAIL
autovar_5||=[];_append(autovar_5,it)};next FAIL if it==FAIL },proc{it=el_1
autovar_5||=[];_append(autovar_5,it)});break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (autovar_7=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_7
it=autovar_5
ary_1 = it };next FAIL if it==FAIL
it=Seq.create( {:ary=>ary_1 })
_result_1 = it },proc{it=clas(Pass);next FAIL if it==FAIL
autovar_8 = it
it=_pass(true,autovar_8){it=self['var']
var_1 = it
it=self['to']
autovar_9 = it
it=_pass(false,autovar_9){it=move(append_1,name_1);next FAIL if it==FAIL
to_1 = it};next FAIL if it==FAIL
it=self['enter']
enter_1 = it };next FAIL if it==FAIL
it=Pass.create( {:ary=>ary_1,:enter=>enter_1,:to=>to_1,:var=>var_1 })
_result_1 = it },proc{it=anything();next FAIL if it==FAIL
it_1 = it
it=(_Set(name_1,it_1,append_1))
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def trans()
_result_1=nil
append_1=nil
expr_1=nil
name_1=nil
 it=nil
it=_or(proc{it=clas(Set);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=self['name']
name_1 = it
it=self['expr']
autovar_2 = it
it=_pass(false,autovar_2){it=trans();next FAIL if it==FAIL
expr_1 = it};next FAIL if it==FAIL
it=self['append']
append_1 = it
it=expr_1
autovar_3 = it
it=_pass(false,autovar_3){it=move(append_1,name_1);next FAIL if it==FAIL
_result_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=super();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end

end

def varname(vh,name,number)
	 vh[name][number]=vh[name].size+1 if !vh[name][number]
	 "#{name}_#{vh[name][number]}"
end
class AmethystTranslator < Amethyst
def arg()
_result_1=nil
a_1=nil
name_1=nil
number_1=nil
t_1=nil
 it=nil
it=_or(proc{it=clas(Args);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=arg();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
a_1 = it };next FAIL if it==FAIL
it=(a_1*"")
_result_1 = it },proc{it=clas(Strin);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=([])
autovar_5 = it
while true
autovar_6=@input;r=it=arg();break FAIL if it==FAIL
autovar_5||=[];_append(autovar_5,it)
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
it=autovar_5
a_1 = it };next FAIL if it==FAIL
it=(a_1*"")
_result_1 = it },proc{it=clas(Exp);next FAIL if it==FAIL
autovar_7 = it
it=_pass(true,autovar_7){it=transfn();next FAIL if it==FAIL
t_1 = it};next FAIL if it==FAIL
it=t_1
_result_1 = it },proc{it=clas(Key);next FAIL if it==FAIL
autovar_8 = it
it=_pass(true,autovar_8){it=self['name']
name_1 = it};next FAIL if it==FAIL
it=("@src.#{name_1}")
_result_1 = it },proc{it=clas(Local);next FAIL if it==FAIL
autovar_9 = it
it=_pass(true,autovar_9){it=anything();next FAIL if it==FAIL
name_1 = it
it=anything();next FAIL if it==FAIL
number_1 = it };next FAIL if it==FAIL
it=(varname(@varhash,name_1,number_1))
_result_1 = it },proc{it=clas(Global);next FAIL if it==FAIL
autovar_10 = it
it=_pass(true,autovar_10){it=anything();next FAIL if it==FAIL
name_1 = it};next FAIL if it==FAIL
it=("@#{name_1}")
_result_1 = it },proc{it=anything();next FAIL if it==FAIL
_result_1 = it});return FAIL if it==FAIL
it=_result_1  
end
def args()
_result_1=nil
a_1=nil
 it=nil
it=_or(proc{it=clas(Array);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=arg();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
a_1 = it };next FAIL if it==FAIL
it=(a_1*",")
_result_1 = it },proc{it=([])
autovar_4 = it
while true
autovar_5=@input;r=it=arg();break FAIL if it==FAIL
autovar_4||=[];_append(autovar_4,it)
 break FAIL if r==FAIL
 (autovar_5=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_5
it=autovar_4
a_1 = it
it=(a_1*",")
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def failwrap(s_1)
_result_1=nil
 it=nil
it=("#{s_1};#{@returnword} FAIL if it==FAIL" )
_result_1 = it
it=_result_1  
end
def itrans()
_result_1=nil
r_1=nil
 it=nil
it=([])
autovar_1 = it
while true
autovar_2=@input;r=it=_or(proc{it=char();next FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)},proc{it=trans();next FAIL if it==FAIL
autovar_1||=[];_append(autovar_1,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
r_1 = it
it=(r_1*"")
_result_1 = it
it=_result_1  
end
def rw(word_1,prc_1)
_result_1=nil
x_1=nil
 it=nil
it=(rwo=@returnword;@returnword=word_1)
it=apply(prc_1);return FAIL if it==FAIL
x_1 = it
it=(@returnword=rwo;x_1)
_result_1 = it
it=_result_1  
end
def trans()
_result_1=nil
append_1=nil
argss_1=nil
body_1=nil
enter_1=nil
expr_1=nil
name_1=nil
neg_1=nil
number_1=nil
o_1=nil
ors_1=nil
parent_1=nil
pred_1=nil
t_1=nil
to_1=nil
var_1=nil
vars_1=nil
 it=nil
it=_or(proc{it=clas(Grammar);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=self['name']
name_1 = it
it=self['parent']
parent_1 = it
it=self['rules']
autovar_2 = it
it=_pass(false,autovar_2){it=transs();next FAIL if it==FAIL
body_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=("class #{name_1} < #{parent_1}\n#{body_1.sort}\nend\n")
_result_1 = it },proc{it=clas(Rule);next FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){it=(@varhash=Hash.new{|h,k| h[k]={}}  )
it=rw('return',proc{it=self['name']
name_1 = it
it=self['args']
autovar_4 = it
it=_pass(false,autovar_4){it=args();next FAIL if it==FAIL
argss_1 = it};next FAIL if it==FAIL
it=self['body']
autovar_5 = it
it=_pass(false,autovar_5){it=trans();next FAIL if it==FAIL
body_1 = it
_result_1 = it};next FAIL if it==FAIL
it=_result_1 });next FAIL if it==FAIL
it=("def #{name_1}(#{argss_1})\n#{s=@varhash.select{|nam,b| (nam!="autovar") && (!@src.args.map{|l| l[0]}.include?(nam))}.map{|nam,b| b.map{|bi,no| "#{varname(@varhash,nam,bi)}=nil\n"}}.flatten.sort*""} it=nil\n#{body_1} \nend\n")
_result_1 = it };next FAIL if it==FAIL },proc{it=clas(Or);next FAIL if it==FAIL
autovar_6 = it
it=_pass(true,autovar_6){it=rw('next', proc{it=([])
autovar_7 = it
while true
autovar_8=@input;r=it=transfn();break FAIL if it==FAIL
autovar_7||=[];_append(autovar_7,it)
 break FAIL if r==FAIL
 (autovar_8=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_8
it=autovar_7
ors_1 = it
_result_1 = it
it=_result_1 });next FAIL if it==FAIL};next FAIL if it==FAIL
it=failwrap("it=_or(#{ors_1*","})");next FAIL if it==FAIL
_result_1 = it },proc{it=clas(Seq);next FAIL if it==FAIL
autovar_9 = it
it=_pass(true,autovar_9){it=([])
autovar_10 = it
while true
autovar_11=@input;r=it=trans();break FAIL if it==FAIL
autovar_10||=[];_append(autovar_10,it)
 break FAIL if r==FAIL
 (autovar_11=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_11
it=autovar_10
t_1 = it };next FAIL if it==FAIL
it=("#{t_1*"\n"} ")
_result_1 = it },proc{it=clas(Act);next FAIL if it==FAIL
autovar_12 = it
it=_pass(true,autovar_12){it=args();next FAIL if it==FAIL
t_1 = it
it=self['pred']
pred_1 = it };next FAIL if it==FAIL
it=(pred_1 ?  failwrap("it=(#{t_1})||FAIL") : "it=(#{t_1})")
_result_1 = it },proc{it=clas(Lookahead);next FAIL if it==FAIL
autovar_13 = it
it=_pass(true,autovar_13){it=self['neg']
neg_1 = it
it=rw('next',proc{it=trans();next FAIL if it==FAIL
t_1 = it
_result_1 = it
it=_result_1 });next FAIL if it==FAIL };next FAIL if it==FAIL
it=failwrap("it=_lookahead(#{!!neg_1}){#{t_1}}");next FAIL if it==FAIL
_result_1 = it },proc{it=clas(Comment);next FAIL if it==FAIL
autovar_14 = it
it=_pass(true,autovar_14){it=anything();next FAIL if it==FAIL};next FAIL if it==FAIL
it=("")
_result_1 = it },proc{it=clas(Many);next FAIL if it==FAIL
autovar_15 = it
it=_pass(true,autovar_15){it=rw('break', proc{it=trans();next FAIL if it==FAIL
t_1 = it
_result_1 = it
it=_result_1 } );next FAIL if it==FAIL
it=self['o']
autovar_16 = it
it=_pass(false,autovar_16){it=arg();next FAIL if it==FAIL
o_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=("while true\n#{o_1}=@input;r=#{t_1}\n break FAIL if r==FAIL\n (#{o_1}=@input;@stop=nil;break FAIL) if @stop==true\nend;@input=#{o_1}")
_result_1 = it },proc{it=clas(Apply);next FAIL if it==FAIL
autovar_17 = it
it=_pass(true,autovar_17){it=clas(Array);next FAIL if it==FAIL
autovar_18 = it
it=_pass(true,autovar_18){it=anything();next FAIL if it==FAIL
it=anything();next FAIL if it==FAIL
name_1 = it };next FAIL if it==FAIL
it=args();next FAIL if it==FAIL
argss_1 = it };next FAIL if it==FAIL
it=failwrap("it=_foreign(:#{name_1 } #{argss_1!=[] ? ",#{argss_1}" : "" })");next FAIL if it==FAIL
_result_1 = it },proc{it=clas(Apply);next FAIL if it==FAIL
autovar_19 = it
it=_pass(true,autovar_19){it=anything();next FAIL if it==FAIL
name_1 = it
it=args();next FAIL if it==FAIL
argss_1 = it };next FAIL if it==FAIL
it=failwrap("it=#{name_1}(#{argss_1})");next FAIL if it==FAIL
_result_1 = it },proc{it=clas(Set);next FAIL if it==FAIL
autovar_20 = it
it=_pass(true,autovar_20){it=self['name']
autovar_21 = it
it=_pass(false,autovar_21){it=arg();next FAIL if it==FAIL
name_1 = it};next FAIL if it==FAIL
it=self['expr']
autovar_22 = it
it=_pass(false,autovar_22){it=trans();next FAIL if it==FAIL
expr_1 = it};next FAIL if it==FAIL
it=self['append']
append_1 = it };next FAIL if it==FAIL
it=("#{expr_1}\n" + (append_1 ? "#{name_1}||=[];_append(#{name_1},it)" : "#{name_1} = it"))
_result_1 = it },proc{it=clas(Result);next FAIL if it==FAIL
autovar_23 = it
it=_pass(true,autovar_23){it=self['name']
name_1 = it
it=self['args']
autovar_24 = it
it=_pass(false,autovar_24){it=args();next FAIL if it==FAIL
argss_1 = it};next FAIL if it==FAIL
it=self['vars']
vars_1 = it };next FAIL if it==FAIL
it=("it=#{name_1}.create(#{argss_1} {#{vars_1.map{|l| ":#{l[0]}=>#{varname(@varhash,l[0],l[1])}" }.sort*","} })")
_result_1 = it },proc{it=clas(Key);next FAIL if it==FAIL
autovar_25 = it
it=_pass(true,autovar_25){it=self['name']
name_1 = it};next FAIL if it==FAIL
it=("it=self['#{name_1}']")
_result_1 = it },proc{it=clas(Local);next FAIL if it==FAIL
autovar_26 = it
it=_pass(true,autovar_26){it=anything();next FAIL if it==FAIL
name_1 = it
it=anything();next FAIL if it==FAIL
number_1 = it };next FAIL if it==FAIL
it=("it="+ varname(@varhash,name_1,number_1))
_result_1 = it },proc{it=clas(Global);next FAIL if it==FAIL
autovar_27 = it
it=_pass(true,autovar_27){it=anything();next FAIL if it==FAIL
name_1 = it};next FAIL if it==FAIL
it=("it=@#{name_1}")
_result_1 = it },proc{it=clas(Pass);next FAIL if it==FAIL
autovar_28 = it
it=_pass(true,autovar_28){it=rw('next',proc{it=self['to']
autovar_29 = it
it=_pass(false,autovar_29){it=trans();next FAIL if it==FAIL
to_1 = it};next FAIL if it==FAIL
it=self['var']
autovar_30 = it
it=_pass(false,autovar_30){it=arg();next FAIL if it==FAIL
var_1 = it};next FAIL if it==FAIL
it=self['enter']
enter_1 = it
_result_1 = it
it=_result_1 });next FAIL if it==FAIL};next FAIL if it==FAIL
it=failwrap("it=_pass(#{!!enter_1},#{var_1}){#{to_1}}");next FAIL if it==FAIL
_result_1 = it },proc{it=clas(Cut);next FAIL if it==FAIL
autovar_31 = it
it=_pass(true,autovar_31){ };next FAIL if it==FAIL
it=("@cut=true;it")
_result_1 = it },proc{it=clas(Stop);next FAIL if it==FAIL
autovar_32 = it
it=_pass(true,autovar_32){ };next FAIL if it==FAIL
it=("@stop=true;it")
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def transfn()
_result_1=nil
t_1=nil
 it=nil
it=trans();return FAIL if it==FAIL
t_1 = it
it=("proc{#{t_1}}" )
_result_1 = it
it=_result_1  
end
def transs()
_result_1=nil
t_1=nil
 it=nil
it=anything();return FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=trans();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
t_1 = it };return FAIL if it==FAIL
it=t_1
_result_1 = it
it=_result_1  
end

end

