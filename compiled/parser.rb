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
s_1=nil
 it=nil
it=seq(o_1);return FAIL if it==FAIL
it=("")
s_1 = it
it=spaces();return FAIL if it==FAIL
it=seq(s_1);return FAIL if it==FAIL
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
_result_2=nil
cls_1=nil
i_1=nil
name_1=nil
result_1=nil
 it=nil
while true
autovar_2=@input;r=it=(Args)
cls_1 = it
it=anything();break FAIL if it==FAIL
i_1 = it
it=(i_1.is_a?(cls_1))||FAIL;break FAIL if it==FAIL
it=i_1
_result_1 = it
it=_result_1
autovar_1 = it
it=_pass(true,autovar_1){it=anything();next FAIL if it==FAIL
name_1 = it
it=(_Local(name_1) )
result_1||=[];_append(result_1,it) };break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(result_1 || [])
_result_2 = it
it=_result_2  
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
_result_2=nil
ary_1=nil
delim_1=nil
f_1=nil
rule_1=nil
 it=nil
it=(proc{it=token("|");return FAIL if it==FAIL
_result_1 = it
it=_result_1 })
delim_1 = it
it=('sequence')
rule_1 = it
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
_result_2 = it },proc{it=empty();next FAIL if it==FAIL
it=([])
_result_2 = it });return FAIL if it==FAIL
it=_result_2
ary_1 = it
it=Or.create( {:ary=>ary_1 })
_result_1 = it
it=_result_1  
end
def className()
_result_1=nil
it_1=nil
s_1=nil
 it=nil
it=("")
s_1 = it
it=spaces();return FAIL if it==FAIL
it=seq(s_1);return FAIL if it==FAIL
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
_result_2=nil
c_1=nil
c_2=nil
 it=nil
it=_or(proc{it=seq("\\");next FAIL if it==FAIL
it=anything();next FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;next FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
c_2 = it
it=("\\#{c_2}")
_result_2 = it },proc{it=_args('#{','}');next FAIL if it==FAIL
_result_2 = it},proc{it=anything();next FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;next FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
_result_2 = it });return FAIL if it==FAIL
it=_result_2  
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
s_1=nil
 it=nil
it=("amethyst")
s_1 = it
it=spaces();return FAIL if it==FAIL
it=seq(s_1);return FAIL if it==FAIL
it=name();return FAIL if it==FAIL
name_1 = it
it=_or(proc{it=("<")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
parent_1 = it },proc{it=empty();next FAIL if it==FAIL
it=(parent_1="Amethyst") });return FAIL if it==FAIL
it=("{")
s_1 = it
it=spaces();return FAIL if it==FAIL
it=seq(s_1);return FAIL if it==FAIL
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
it=("}")
s_1 = it
it=spaces();return FAIL if it==FAIL
it=seq(s_1);return FAIL if it==FAIL
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
s_1=nil
vars_1=nil
 it=nil
it=_or(proc{it=("@")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
it=_or(proc{it=className();next FAIL if it==FAIL
name_1 = it
it=argsOpt('[',']');next FAIL if it==FAIL
args_1 = it
it=(Object.const_get(name_1).instance_variable_get(:@attrs))
vars_1 = it
it=Result.create( {:args=>args_1,:name=>name_1,:vars=>vars_1 })
_result_1 = it },proc{it=name();next FAIL if it==FAIL
name_1 = it
it=Key.create( {:args=>args_1,:name=>name_1 })
_result_1 = it });next FAIL if it==FAIL },proc{it=("@@")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
n_1 = it
it=(Global[n_1])
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def modifier()
_result_1=nil
c_1=nil
s_1=nil
 it=nil
it=_or(proc{it=term();next FAIL if it==FAIL
_result_1 = it},proc{it=("#")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
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
s_1=nil
 it=nil
it=("")
s_1 = it
it=spaces();return FAIL if it==FAIL
it=seq(s_1);return FAIL if it==FAIL
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
s_1=nil
 it=nil
it=_lookahead(true){it=name();next FAIL if it==FAIL
it=argsOpt('(',')');next FAIL if it==FAIL
it=("=")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL };return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def number()
_result_1=nil
_result_2=nil
_result_3=nil
c_1=nil
c_2=nil
regex_1=nil
 it=nil
it=([])
autovar_1 = it
it=(/[0-9]/)
regex_1 = it
it=anything();return FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;return FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
c_2 = it
it=(regex_1.match(c_2))||FAIL;return FAIL if it==FAIL
it=c_2
_result_2 = it
it=_result_2
autovar_1||=[];_append(autovar_1,it)
while true
autovar_2=@input;r=it=(/[0-9]/)
regex_1 = it
it=anything();break FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;break FAIL if it==FAIL
it=c_1
_result_1 = it
it=_result_1
c_2 = it
it=(regex_1.match(c_2))||FAIL;break FAIL if it==FAIL
it=c_2
_result_2 = it
it=_result_2
autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=autovar_1
_result_3 = it
it=_result_3  
end
def prefixed()
_result_1=nil
_result_2=nil
_result_3=nil
append_1=nil
c_1=nil
c_2=nil
e_1=nil
expr_1=nil
from_1=nil
it_1=nil
m_1=nil
name_1=nil
neg_1=nil
one_1=nil
regex_1=nil
s_1=nil
 it=nil
it=_or(proc{it=("&")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1
it=inlineHostExpr();next FAIL if it==FAIL
expr_1 = it
it=(Pred[expr_1])
_result_2 = it },proc{it=_or(proc{it=("&")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1
neg_1 = it },proc{it=("~")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1
neg_1 = it });next FAIL if it==FAIL
it=prefixed();next FAIL if it==FAIL
m_1 = it
it=(Lookahead[m_1,neg_1=="~"])
_result_2 = it },proc{it=_or(proc{it=modifier();next FAIL if it==FAIL
from_1 = it},proc{it=("")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1
it=_lookahead(false){it=(/[.:\[]/)
regex_1 = it
it=anything();next FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;next FAIL if it==FAIL
it=c_1
_result_3 = it
it=_result_3
c_2 = it
it=(regex_1.match(c_2))||FAIL;next FAIL if it==FAIL
it=c_2 };next FAIL if it==FAIL
it=_or(proc{it=(".")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1 },proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=(Apply["anything"])
from_1 = it });next FAIL if it==FAIL
while true
autovar_1=@input;r=it=_lookahead(true){it=_();next FAIL if it==FAIL};break FAIL if it==FAIL
it=_or(proc{it=("=>")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1
it=prefixed();next FAIL if it==FAIL
it_1 = it
it=(from_1=Pass[from_1,it_1]) },proc{it=("[")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1
it=expression();next FAIL if it==FAIL
it_1 = it
it=(from_1=Enter[from_1,it_1])
it=("]")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1 },proc{it=_or(proc{it=("*")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1
one_1 = it },proc{it=("+")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1
one_1 = it });next FAIL if it==FAIL
it=(Many[from_1,one_1=="+"])
from_1 = it },proc{it=("?")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1
it=(Or[from_1,Apply["empty"]])
from_1 = it },proc{it=(":")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
_result_1 = it
it=_result_1
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
_result_2 = it });return FAIL if it==FAIL
it=_result_2  
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
_result_2=nil
a_1=nil
cls_1=nil
i_1=nil
 it=nil
it=_or(proc{it=(Args)
cls_1 = it
it=anything();next FAIL if it==FAIL
i_1 = it
it=(i_1.is_a?(cls_1))||FAIL;next FAIL if it==FAIL
it=i_1
_result_1 = it
it=_result_1
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
_result_2 = it };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
a_1 = it
it=(@tmp<<a_1)
_result_2 = it });return FAIL if it==FAIL
it=_result_2  
end
def rubyarg()
_result_1=nil
_result_2=nil
_result_3=nil
_result_4=nil
c_1=nil
c_2=nil
e_1=nil
n_1=nil
regex_1=nil
s_1=nil
s_2=nil
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
_result_1 = it },proc{it=_or(proc{it=(":@")
s_2 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_2);next FAIL if it==FAIL
_result_2 = it
it=_result_2
n_1 = it },proc{it=(/[$.:]/)
regex_1 = it
it=anything();next FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;next FAIL if it==FAIL
it=c_1
_result_3 = it
it=_result_3
c_2 = it
it=(regex_1.match(c_2))||FAIL;next FAIL if it==FAIL
it=c_2
_result_4 = it
it=_result_4
n_1 = it },proc{it=empty();next FAIL if it==FAIL});next FAIL if it==FAIL
it=_lookahead(true){it=_();next FAIL if it==FAIL};next FAIL if it==FAIL
it=name();next FAIL if it==FAIL
n_1||=[];_append(n_1,it)
it=n_1
_result_1 = it },proc{it=_lookahead(true){it=_();next FAIL if it==FAIL};next FAIL if it==FAIL
it=key();next FAIL if it==FAIL
_result_1 = it },proc{it=(/[^`{}()'"\[\]]/)
regex_1 = it
it=anything();next FAIL if it==FAIL
c_1 = it
it=(c_1.is_a? String )||FAIL;next FAIL if it==FAIL
it=c_1
_result_3 = it
it=_result_3
c_2 = it
it=(regex_1.match(c_2))||FAIL;next FAIL if it==FAIL
it=c_2
_result_4 = it
it=_result_4
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end
def rule()
_result_1=nil
args_1=nil
bnding_1=nil
body_1=nil
locals_1=nil
name_1=nil
s_1=nil
 it=nil
it=(@locals=[];@bnding=Bnding[])
it=@bnding
bnding_1 = it
it=name();return FAIL if it==FAIL
name_1 = it
it=ruleargs();return FAIL if it==FAIL
args_1 = it
it=("=")
s_1 = it
it=spaces();return FAIL if it==FAIL
it=seq(s_1);return FAIL if it==FAIL
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
_result_2=nil
cls_1=nil
expr_1=nil
it_1=nil
ors_1=nil
s_1=nil
s_2=nil
x_1=nil
 it=nil
it=_or(proc{it=className();next FAIL if it==FAIL
cls_1 = it
it=(Apply["clas",cls_1])
_result_1 = it },proc{it=("nested")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
it=seq("(");next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
expr_1 = it
it=(")")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
it=(Nested[expr_1])
_result_1 = it },proc{it=("break")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
it=(Seq[Cut[],Stop[]])
_result_1 = it },proc{it=application();next FAIL if it==FAIL
_result_1 = it},proc{it=key();next FAIL if it==FAIL
_result_1 = it},proc{it=_or(proc{it=("->")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
it=atomicHostExpr();next FAIL if it==FAIL
x_1 = it },proc{it=("")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
it=inlineHostExpr();next FAIL if it==FAIL
x_1 = it });next FAIL if it==FAIL
it=(Act[x_1])
_result_1 = it },proc{it=("\"")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
while true
autovar_1=@input;r=it=_or(proc{it=seq("\"");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
s_2||=[];_append(s_2,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
it=(Apply["token" ,quote(s_2)])
_result_1 = it },proc{it=("'")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
while true
autovar_2=@input;r=it=_or(proc{it=seq("\'");next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
s_2||=[];_append(s_2,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(Apply["seq"   ,quote(s_2)])
_result_1 = it },proc{it=number();next FAIL if it==FAIL
it_1 = it
it=(Apply["exactly",it_1])
_result_1 = it },proc{it=("<")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
while true
autovar_3=@input;r=it=_or(proc{it=(">")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
@cut=true;it
@stop=true;it },proc{it=eChar();next FAIL if it==FAIL
x_1||=[];_append(x_1,it)});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(Apply["regch","/[#{x_1}]/"])
_result_1 = it },proc{it=("(")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
it=expression();next FAIL if it==FAIL
x_1 = it
it=(")")
s_1 = it
it=spaces();next FAIL if it==FAIL
it=seq(s_1);next FAIL if it==FAIL
it=_or(proc{it=seq("[]");next FAIL if it==FAIL
it=(x_1)
ors_1 = it
it=(a=autovar; Seq[Or[{:ary=>ors_1.ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]])
_result_2 = it
it=_result_2
_result_1 = it },proc{it=empty();next FAIL if it==FAIL
it=x_1
_result_1 = it });next FAIL if it==FAIL });return FAIL if it==FAIL
it=_result_1  
end
end

