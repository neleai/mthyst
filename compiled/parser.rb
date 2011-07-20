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
def number()
 regex_1=nil
c_2=nil
c_1=nil
_result_2=nil
_result_3=nil
_result_1=nil
 autovar_1 = (([]))
regex_1 = ((/[0-9]/))
c_1 = ((it=(anything());return FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);return FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_2 = (_result_1)
c_2 = ((autovar_2))
(it=((regex_1.match(c_2))||FAIL);return FAIL if it==FAIL;it)
_result_2 = (c_2)
autovar_3 = (_result_2)
it=((autovar_3))
 autovar_1||=[];_append(autovar_1,it)
while true
autovar_4=@input;r=regex_1 = ((/[0-9]/))
c_1 = ((it=(anything());break FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);break FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_2 = (_result_1)
c_2 = ((autovar_2))
(it=((regex_1.match(c_2))||FAIL);break FAIL if it==FAIL;it)
_result_2 = (c_2)
autovar_3 = (_result_2)
it=((autovar_3))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
_result_3 = (autovar_1)
_result_3  
end
def nameFirst()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(letter());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(seq("_"));next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
_result_1  
end
def nameRest()
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(nameFirst());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(digit());next FAIL if it==FAIL;it))}));return FAIL if it==FAIL;it)
_result_1  
end
def name()
 it_1=nil
_result_1=nil
_result_2=nil
s_1=nil
 s_1 = ((""))
(it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
_result_1
it=((it=(nameFirst());return FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(autovar_2)
 autovar_1||=[];_append(autovar_1,it)
it_1 = (autovar_1)
_result_2 = ((leterize(it_1*"")))
_result_2  
end
def _args(o_1,c_1)
 r_1=nil
_result_1=nil
 r_1 = ((it=(__args(o_1,c_1));return FAIL if it==FAIL;it))
_result_1 = ((Args[{:ary=>([o_1]+r_1+[c_1])}]))
_result_1  
end
def eChar()
 c_2=nil
c_1=nil
_result_2=nil
_result_1=nil
 (it=(_or(proc{(it=(seq("\\"));next FAIL if it==FAIL;it)
c_1 = ((it=(anything());next FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);next FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_1 = (_result_1)
c_2 = ((autovar_1))
_result_2 = (("\\#{c_2}")) },proc{_result_2 = ((it=(_args('#{','}'));next FAIL if it==FAIL;it))},proc{c_1 = ((it=(anything());next FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);next FAIL if it==FAIL;it)
_result_1 = (c_1)
autovar_1 = (_result_1)
_result_2 = ((autovar_1)) }));return FAIL if it==FAIL;it)
_result_2  
end
def choice()
 delim_1=nil
f_1=nil
ary_1=nil
_result_2=nil
_result_1=nil
rule_1=nil
 delim_1 = ((proc{_result_1 = ((it=(token("|"));return FAIL if it==FAIL;it))
_result_1 }))
rule_1 = (('sequence'))
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
it=(autovar_1)
 f_1||=[];_append(f_1,it)
_result_2 = (f_1) },proc{(it=(empty());next FAIL if it==FAIL;it)
_result_2 = (([])) }));return FAIL if it==FAIL;it)
autovar_3 = (_result_2)
ary_1 = ((autovar_3))
_result_1 = (Or.create( {:ary=>ary_1 }))
_result_1  
end
def expression()
 _result_1=nil
 _result_1 = ((it=(choice());return FAIL if it==FAIL;it))
_result_1  
end
def argsOpt(o_1,c_1)
 _result_1=nil
 (it=(_or(proc{_result_1 = ((it=(args(o_1,c_1));next FAIL if it==FAIL;it))},proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = (([])) }));return FAIL if it==FAIL;it)
_result_1  
end
def className()
 it_1=nil
_result_1=nil
_result_2=nil
s_1=nil
 s_1 = ((""))
(it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
_result_1
it=((it=(upper());return FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
autovar_2 = (([]))
while true
autovar_3=@input;r=it=((it=(nameRest());break FAIL if it==FAIL;it))
 autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=(autovar_2)
 autovar_1||=[];_append(autovar_1,it)
it_1 = (autovar_1)
_result_2 = ((leterize(it_1*"")))
_result_2  
end
def key()
 args_1=nil
name_1=nil
n_1=nil
vars_1=nil
_result_1=nil
_result_2=nil
s_1=nil
 (it=(_or(proc{s_1 = (("@"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_1
(it=(_or(proc{name_1 = ((it=(className());next FAIL if it==FAIL;it))
args_1 = ((it=(argsOpt('[',']'));next FAIL if it==FAIL;it))
vars_1 = ((Object.const_get(name_1).instance_variable_get(:@attrs)))
_result_2 = (Result.create( {:name=>name_1,:args=>args_1,:vars=>vars_1 })) },proc{name_1 = ((it=(name());next FAIL if it==FAIL;it))
_result_2 = (Key.create( {:name=>name_1,:args=>args_1 })) }));next FAIL if it==FAIL;it) },proc{s_1 = (("@@"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_1
n_1 = ((it=(name());next FAIL if it==FAIL;it))
_result_2 = ((Global[n_1])) }));return FAIL if it==FAIL;it)
_result_2  
end
def rubyarg()
 regex_1=nil
c_2=nil
c_1=nil
n_1=nil
e_1=nil
s_2=nil
s_1=nil
_result_2=nil
_result_4=nil
_result_3=nil
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
it=(autovar_1)
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
it=(autovar_3)
 s_1||=[];_append(s_1,it)
_result_1 = ((Strin[connectstring(s_1)])) },proc{(it=(_or(proc{s_2 = ((":@"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_2));next FAIL if it==FAIL;it))
autovar_5 = (_result_2)
n_1 = ((autovar_5)) },proc{regex_1 = ((/[$.:]/))
c_1 = ((it=(anything());next FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);next FAIL if it==FAIL;it)
_result_3 = (c_1)
autovar_6 = (_result_3)
c_2 = ((autovar_6))
(it=((regex_1.match(c_2))||FAIL);next FAIL if it==FAIL;it)
_result_4 = (c_2)
autovar_7 = (_result_4)
n_1 = ((autovar_7)) },proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
(it=(_lookahead(true){(it=(_());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
it=((it=(name());next FAIL if it==FAIL;it))
 n_1||=[];_append(n_1,it)
_result_1 = (n_1) },proc{(it=(_lookahead(true){(it=(_());next FAIL if it==FAIL;it)});next FAIL if it==FAIL;it)
_result_1 = ((it=(key());next FAIL if it==FAIL;it)) },proc{regex_1 = ((/[^`{}()'"\[\]]/))
c_1 = ((it=(anything());next FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);next FAIL if it==FAIL;it)
_result_3 = (c_1)
autovar_6 = (_result_3)
c_2 = ((autovar_6))
(it=((regex_1.match(c_2))||FAIL);next FAIL if it==FAIL;it)
_result_4 = (c_2)
autovar_7 = (_result_4)
_result_1 = ((autovar_7)) }));return FAIL if it==FAIL;it)
_result_1  
end
def __args(o_1,c_1)
 r_1=nil
_result_1=nil
_result_2=nil
s_1=nil
 (it=(seq(o_1));return FAIL if it==FAIL;it)
s_1 = ((""))
(it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
_result_1
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(rubyarg());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
r_1 = (autovar_1)
(it=(seq(c_1));return FAIL if it==FAIL;it)
_result_2 = (r_1)
_result_2  
end
def procargs2()
 a_1=nil
_result_2=nil
_result_1=nil
i_1=nil
cls_1=nil
 (it=(_or(proc{cls_1 = ((Args))
i_1 = ((it=(anything());next FAIL if it==FAIL;it))
(it=((i_1.is_a?(cls_1))||FAIL);next FAIL if it==FAIL;it)
_result_1 = (i_1)
autovar_1 = (_result_1)
autovar_2 = ((autovar_1))
(it=(_pass(true,autovar_2){autovar_3 = (([]))
while true
autovar_4=@input;r=it=((it=(procargs2());break FAIL if it==FAIL;it))
 autovar_3||=[];_append(autovar_3,it)
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
_result_2 = (autovar_3) });next FAIL if it==FAIL;it) },proc{a_1 = ((it=(anything());next FAIL if it==FAIL;it))
_result_2 = ((@tmp<<a_1)) }));return FAIL if it==FAIL;it)
_result_2  
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
_result_1 = (@ary)
_result_1  
end
def args(o_1,c_1)
 r_1=nil
_result_1=nil
 r_1 = ((it=(__args(o_1,c_1));return FAIL if it==FAIL;it))
autovar_1 = ((r_1+[',']))
(it=(_pass(false,autovar_1){autovar_2 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){_result_1 = ((it=(procargs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
_result_1  
end
def inlineHostExpr()
 _result_1=nil
 _result_1 = ((it=(args('{','}'));return FAIL if it==FAIL;it))
_result_1  
end
def addargs()
 result_1=nil
name_1=nil
_result_2=nil
_result_1=nil
i_1=nil
cls_1=nil
 while true
autovar_3=@input;r=cls_1 = ((Args))
i_1 = ((it=(anything());break FAIL if it==FAIL;it))
(it=((i_1.is_a?(cls_1))||FAIL);break FAIL if it==FAIL;it)
_result_1 = (i_1)
autovar_1 = (_result_1)
autovar_2 = ((autovar_1))
(it=(_pass(true,autovar_2){name_1 = ((it=(anything());next FAIL if it==FAIL;it))
it=((_Local(name_1) ))
 result_1||=[];_append(result_1,it) });break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
_result_2 = ((result_1 || []))
_result_2  
end
def ruleargs()
 _result_1=nil
 autovar_1 = ((it=(argsOpt('(',')'));return FAIL if it==FAIL;it))
(it=(_pass(false,autovar_1){autovar_2 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_2){_result_1 = ((it=(addargs());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
_result_1  
end
def rule()
 args_1=nil
name_1=nil
locals_1=nil
body_1=nil
_result_1=nil
_result_2=nil
s_1=nil
bnding_1=nil
 (@locals=[];@bnding=Bnding[])
bnding_1 = (@bnding)
name_1 = ((it=(name());return FAIL if it==FAIL;it))
args_1 = ((it=(ruleargs());return FAIL if it==FAIL;it))
s_1 = (("="))
(it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
_result_1
body_1 = ((it=(expression());return FAIL if it==FAIL;it))
body_1 = ((_body(body_1)))
locals_1 = ((@locals.uniq))
_result_2 = (Rule.create( {:bnding=>bnding_1,:name=>name_1,:args=>args_1,:body=>body_1,:locals=>locals_1 }))
_result_2  
end
def grammar()
 name_1=nil
parent_1=nil
rules_1=nil
_result_1=nil
_result_2=nil
s_1=nil
 s_1 = (("amethyst"))
(it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
_result_1
name_1 = ((it=(name());return FAIL if it==FAIL;it))
(it=(_or(proc{s_1 = (("<"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_1
parent_1 = ((it=(name());next FAIL if it==FAIL;it)) },proc{(it=(empty());next FAIL if it==FAIL;it)
(parent_1="Amethyst") }));return FAIL if it==FAIL;it)
s_1 = (("{"))
(it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
_result_1
autovar_1 = (([]))
while true
autovar_2=@input;r=it=((it=(rule());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
rules_1 = (autovar_1)
s_1 = (("}"))
(it=(spaces());return FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));return FAIL if it==FAIL;it))
_result_1
_result_2 = (Grammar.create( {:name=>name_1,:parent=>parent_1,:rules=>rules_1 }))
_result_2  
end
def nr()
 s_1=nil
_result_2=nil
_result_1=nil
 _result_1 = ((it=(_lookahead(true){(it=(name());next FAIL if it==FAIL;it)
(it=(argsOpt('(',')'));next FAIL if it==FAIL;it)
s_1 = (("="))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2 });return FAIL if it==FAIL;it))
_result_1  
end
def collect(ors_1)
 _result_1=nil
 _result_1 = ((a=autovar; Seq[Or[{:ary=>ors_1.ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]]))
_result_1  
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
_result_1  
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
s_1 = (autovar_1)
autovar_3 = (("{#{s_1*""}}"))
(it=(_pass(false,autovar_3){autovar_4 = ((it=(anything());next FAIL if it==FAIL;it))
(it=(_pass(true,autovar_4){_result_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))});next FAIL if it==FAIL;it) });return FAIL if it==FAIL;it)
_result_1  
end
def term()
 it_1=nil
expr_1=nil
x_1=nil
ors_1=nil
s_1=nil
s_2=nil
_result_2=nil
_result_1=nil
_result_3=nil
cls_1=nil
 (it=(_or(proc{cls_1 = ((it=(className());next FAIL if it==FAIL;it))
_result_1 = ((Apply["clas",cls_1])) },proc{s_1 = (("nested"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
(it=(seq("("));next FAIL if it==FAIL;it)
expr_1 = ((it=(expression());next FAIL if it==FAIL;it))
s_1 = ((")"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
_result_1 = ((Nested[expr_1])) },proc{s_1 = (("break"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
_result_1 = ((Seq[Cut[],Stop[]])) },proc{_result_1 = ((it=(application());next FAIL if it==FAIL;it))},proc{_result_1 = ((it=(key());next FAIL if it==FAIL;it))},proc{(it=(_or(proc{s_1 = (("->"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
x_1 = ((it=(atomicHostExpr());next FAIL if it==FAIL;it)) },proc{s_1 = ((""))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
x_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it)) }));next FAIL if it==FAIL;it)
_result_1 = ((Act[x_1])) },proc{s_1 = (("\""))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
while true
autovar_1=@input;r=(it=(_or(proc{(it=(seq("\""));next FAIL if it==FAIL;it)
@cut=true;it
@stop=true;it },proc{it=((it=(eChar());next FAIL if it==FAIL;it))
 s_2||=[];_append(s_2,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_1=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_1
_result_1 = ((Apply["token" ,quote(s_2)])) },proc{s_1 = (("'"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
while true
autovar_2=@input;r=(it=(_or(proc{(it=(seq("\'"));next FAIL if it==FAIL;it)
@cut=true;it
@stop=true;it },proc{it=((it=(eChar());next FAIL if it==FAIL;it))
 s_2||=[];_append(s_2,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
_result_1 = ((Apply["seq"   ,quote(s_2)])) },proc{it_1 = ((it=(number());next FAIL if it==FAIL;it))
_result_1 = ((Apply["exactly",it_1])) },proc{s_1 = (("<"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
while true
autovar_3=@input;r=(it=(_or(proc{s_1 = ((">"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
@cut=true;it
@stop=true;it },proc{it=((it=(eChar());next FAIL if it==FAIL;it))
 x_1||=[];_append(x_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
_result_1 = ((Apply["regch","/[#{x_1}]/"])) },proc{s_1 = (("("))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
x_1 = ((it=(expression());next FAIL if it==FAIL;it))
s_1 = ((")"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
ors_1 = ((x_1))
_result_3 = ((a=autovar; Seq[Or[{:ary=>ors_1.ary.map{|ands| Seq[{:ary=>ands.ary.map{|expr| Append[a,expr]}}]}}],Act[a]]))
autovar_4 = (_result_3)
_result_1 = ((autovar_4)) },proc{(it=(empty());next FAIL if it==FAIL;it)
_result_1 = (x_1) }));next FAIL if it==FAIL;it) }));return FAIL if it==FAIL;it)
_result_1  
end
def modifier()
 c_1=nil
s_1=nil
_result_2=nil
_result_1=nil
 (it=(_or(proc{_result_1 = ((it=(term());next FAIL if it==FAIL;it))},proc{s_1 = (("#"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_2 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
_result_2
autovar_1 = (([]))
while true
autovar_2=@input;r=(it=(_lookahead(true){(it=(endline());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
it=((it=(anything());break FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it) 
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
c_1 = (autovar_1)
_result_1 = ((Comment[c_1])) }));return FAIL if it==FAIL;it)
_result_1  
end
def prefixed()
 name_1=nil
it_1=nil
regex_1=nil
expr_1=nil
m_1=nil
c_2=nil
c_1=nil
from_1=nil
e_1=nil
neg_1=nil
append_1=nil
one_1=nil
_result_2=nil
_result_1=nil
_result_4=nil
_result_3=nil
s_1=nil
 (it=(_or(proc{s_1 = (("&"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
(autovar_1)
expr_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
_result_2 = ((Pred[expr_1])) },proc{(it=(_or(proc{s_1 = (("&"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
neg_1 = ((autovar_1)) },proc{s_1 = (("~"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
neg_1 = ((autovar_1)) }));next FAIL if it==FAIL;it)
m_1 = ((it=(prefixed());next FAIL if it==FAIL;it))
_result_2 = ((Lookahead[m_1,neg_1=="~"])) },proc{(it=(_or(proc{from_1 = ((it=(modifier());next FAIL if it==FAIL;it))},proc{s_1 = ((""))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
(autovar_1)
(it=(_lookahead(false){regex_1 = ((/[.:\[]/))
c_1 = ((it=(anything());next FAIL if it==FAIL;it))
(it=((c_1.is_a? String )||FAIL);next FAIL if it==FAIL;it)
_result_3 = (c_1)
autovar_2 = (_result_3)
c_2 = ((autovar_2))
(it=((regex_1.match(c_2))||FAIL);next FAIL if it==FAIL;it)
_result_4 = (c_2)
_result_4 });next FAIL if it==FAIL;it)
(it=(_or(proc{s_1 = (("."))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
(autovar_1) },proc{(it=(empty());next FAIL if it==FAIL;it)}));next FAIL if it==FAIL;it)
from_1 = ((Apply["anything"])) }));next FAIL if it==FAIL;it)
while true
autovar_3=@input;r=(it=(_lookahead(true){(it=(_());next FAIL if it==FAIL;it)});break FAIL if it==FAIL;it)
(it=(_or(proc{s_1 = (("=>"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
(autovar_1)
it_1 = ((it=(prefixed());next FAIL if it==FAIL;it))
(from_1=_Pass(from_1,it_1)) },proc{s_1 = (("["))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
(autovar_1)
it_1 = ((it=(expression());next FAIL if it==FAIL;it))
(from_1=Enter[from_1,it_1])
s_1 = (("]"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
(autovar_1) },proc{(it=(_or(proc{s_1 = (("*"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
one_1 = ((autovar_1)) },proc{s_1 = (("+"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
one_1 = ((autovar_1)) }));next FAIL if it==FAIL;it)
from_1 = ((Many[from_1,one_1=="+"])) },proc{s_1 = (("?"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
(autovar_1)
from_1 = ((Or[from_1,Apply["empty"]])) },proc{s_1 = ((":"))
(it=(spaces());next FAIL if it==FAIL;it)
_result_1 = ((it=(seq(s_1));next FAIL if it==FAIL;it))
autovar_1 = (_result_1)
(autovar_1)
(it=(_or(proc{(it=(_or(proc{name_1 = ((it=(key());next FAIL if it==FAIL;it))},proc{name_1 = ((it=(name());next FAIL if it==FAIL;it))}));next FAIL if it==FAIL;it)
(it=(_or(proc{(it=(seq("[]"));next FAIL if it==FAIL;it)
append_1 = ((true)) },proc{(it=(empty());next FAIL if it==FAIL;it)
append_1 = ((nil)) }));next FAIL if it==FAIL;it)
from_1 = ((_Set(name_1,from_1,append_1))) },proc{e_1 = ((it=(inlineHostExpr());next FAIL if it==FAIL;it))
from_1 = ((Seq[_Set("it",from_1) , Act[e_1] ])) }));next FAIL if it==FAIL;it) }));break FAIL if it==FAIL;it) 
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
_result_2 = (from_1) }));return FAIL if it==FAIL;it)
_result_2  
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
ary_1 = (autovar_1)
_result_1 = (Seq.create( {:ary=>ary_1 }))
_result_1  
end
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
it_1 = (autovar_2)
it=((it_1*""))
 autovar_1||=[];_append(autovar_1,it) },proc{it=((it=(grammar());next FAIL if it==FAIL;it))
 autovar_1||=[];_append(autovar_1,it)}));break FAIL if it==FAIL;it)
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
a_1 = (autovar_1)
_result_1 = (a_1)
_result_1  
end
end
