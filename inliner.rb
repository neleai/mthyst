class Dead_Code_Detector2 < Traverser
def root()
_result_1=nil
reachable_1=nil
 it=nil
it=self['self']
autovar_1 = it
it=_pass(false,autovar_1){it=clas(Rule);next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=(@edges=Oriented_Graph.new ; @marked=[@src.body[-1]])
it=(@bnding=@src.bnding)
it=traverse();next FAIL if it==FAIL
it=(@edges.reachable(@marked))
reachable_1 = it
it=(@src.reachable=reachable_1)
it=self['self']
_result_1 = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=_result_1  
end
def vars_in()
_result_1=nil
ary_1=nil
 it=nil
it=(ary_1=[])
while true
autovar_13=@input;r=it=_or(proc{it=clas(Global);next FAIL if it==FAIL
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
end;@input=autovar_6 };next FAIL if it==FAIL },proc{it=clas(Result);next FAIL if it==FAIL
autovar_7 = it
it=_pass(true,autovar_7){it=self['self']
ary_1||=[];_append(ary_1,it)};next FAIL if it==FAIL },proc{it=clas(Strin);next FAIL if it==FAIL
autovar_8 = it
it=_pass(true,autovar_8){it=vars_in();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it)};next FAIL if it==FAIL },proc{it=clas(Args);next FAIL if it==FAIL
autovar_9 = it
it=_pass(true,autovar_9){it=vars_in();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it)};next FAIL if it==FAIL },proc{it=clas(Set);next FAIL if it==FAIL
autovar_10 = it
it=_pass(true,autovar_10){it=self['name']
autovar_11 = it
it=_pass(false,autovar_11){it=vars_in();next FAIL if it==FAIL
ary_1||=[];_append(ary_1,it)};next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Local);next FAIL if it==FAIL
autovar_12 = it
it=_pass(true,autovar_12){it=anything();next FAIL if it==FAIL
it=self['self']
ary_1||=[];_append(ary_1,it) };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_13=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_13
it=ary_1
_result_1 = it
it=_result_1  
end
def visit()
_result_1=nil
this_1=nil
v_1=nil
var_1=nil
 it=nil
it=_or(proc{it=clas(Apply);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=anything();next FAIL if it==FAIL
it=vars_in();next FAIL if it==FAIL
var_1 = it
it=(@marked+=var_1)
it=traverse();next FAIL if it==FAIL
_result_1 = it };next FAIL if it==FAIL },proc{it=clas(Pass);next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=self['var']
autovar_3 = it
it=_pass(false,autovar_3){it=vars_in();next FAIL if it==FAIL
var_1 = it};next FAIL if it==FAIL
it=(@marked+=var_1)
it=traverse();next FAIL if it==FAIL
_result_1 = it };next FAIL if it==FAIL },proc{it=clas(Many);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=self['o']
autovar_5 = it
it=_pass(false,autovar_5){it=vars_in();next FAIL if it==FAIL
var_1 = it};next FAIL if it==FAIL
it=(@marked+=var_1)
it=traverse();next FAIL if it==FAIL
_result_1 = it };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
autovar_6 = it
it=_pass(true,autovar_6){it=traverse();next FAIL if it==FAIL
this_1 = it
it=(@marked<<this_1 if @src.pred)
it=self['ary']
autovar_7 = it
it=_pass(false,autovar_7){it=anything();next FAIL if it==FAIL
autovar_8 = it
it=_pass(true,autovar_8){it=vars_in();next FAIL if it==FAIL
var_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL };next FAIL if it==FAIL
it=(var_1.each{|v_1| @edges.add(v_1,this_1); @edges.add(this_1,v_1);}; this_1)
_result_1 = it },proc{it=clas(Set);next FAIL if it==FAIL
autovar_9 = it
it=_pass(true,autovar_9){it=self['name']
autovar_10 = it
it=_pass(false,autovar_10){it=vars_in();next FAIL if it==FAIL
v_1 = it};next FAIL if it==FAIL
it=(v_1=v_1[0])
it=traverse();next FAIL if it==FAIL
this_1 = it
it=self['expr']
autovar_11 = it
it=_pass(false,autovar_11){it=vars_in();next FAIL if it==FAIL
var_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(var_1.each{|w| @edges.add(v_1,w)};this_1)
_result_1 = it },proc{it=clas(Result);next FAIL if it==FAIL
autovar_12 = it
it=_pass(true,autovar_12){it=self['vars']
autovar_13 = it
it=_pass(false,autovar_13){it=anything();next FAIL if it==FAIL
autovar_14 = it
it=_pass(true,autovar_14){it=vars_in();next FAIL if it==FAIL
var_1 = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=traverse();next FAIL if it==FAIL
this_1 = it };next FAIL if it==FAIL
it=(var_1.each{|w| @edges.add(this_1,w) } ; this_1)
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end

end


class Dead_Code_Deleter2 < Traverser
def root()
_result_1=nil
it_1=nil
 it=nil
it=self['self']
autovar_1 = it
it=_pass(false,autovar_1){it=clas(Rule);next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=self['reachable']
it_1 = it
it=(@reachable=it_1)
it=traverse();next FAIL if it==FAIL
it=(@src.reachable=nil)
it=self['self']
_result_1 = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=_result_1  
end
def visit()
_result_1=nil
expr_1=nil
name_1=nil
this_1=nil
 it=nil
it=_or(proc{it=clas(Act);next FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=self['self']
this_1 = it
while true
autovar_2=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2 };next FAIL if it==FAIL
it=(@reachable[this_1] ? this_1 : Act[])
_result_1 = it },proc{it=clas(Set);next FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){it=self['name']
name_1 = it
it=traverse();next FAIL if it==FAIL
it=self['expr']
expr_1 = it
it=self['self']
this_1 = it };next FAIL if it==FAIL
it=(@reachable[name_1] ? this_1 : expr_1)
_result_1 = it },proc{it=clas(Result);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=self['self']
this_1 = it};next FAIL if it==FAIL
it=(@reachable[this_1] ? this_1 : Act[])
_result_1 = it },proc{it=clas(Local);next FAIL if it==FAIL
autovar_5 = it
it=_pass(true,autovar_5){while true
autovar_6=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_6=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_6
it=self['self']
this_1 = it };next FAIL if it==FAIL
it=(@reachable[this_1] ? this_1 : Act[])
_result_1 = it });return FAIL if it==FAIL
it=_result_1  
end

end


class Constant_Propagator2 < Traverser

end


class Communize_Or2 < Traverser
def root()
_result_1=nil
 it=nil
it=traverse();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def visit()
_result_1=nil
ands_1=nil
 it=nil
it=clas(Or);return FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
it=clas(Seq);next FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){it=traverse();next FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)};next FAIL if it==FAIL
while true
autovar_4=@input;r=it=clas(Seq);break FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){it=traverse();next FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)};break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
it=autovar_2
ands_1 = it
it=eof();next FAIL if it==FAIL
it=(common=ands_1[0].size
								ands_1.each{|a| 0.upto(common){|n| (common=[common,n].min ;next) if a[n].to_yaml!=ands_1[0][n].to_yaml}}
								commn=ands_1[0].ary[0,common]
								o=[]
								ands_1.each{|a| o<< Seq[{:ary=>a.ary[common,a.size-common]}] unless common==a.size	}
	            	Seq[{:ary=>(commn+[Or[{:ary=>o}]])}]
							)
_result_1 = it };return FAIL if it==FAIL
it=_result_1  
end

end

class Communize_Or3 < Traverser
def root()
_result_1=nil
 it=nil
it=traverse();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def visit()
_result_1=nil
ands_1=nil
 it=nil
it=clas(Or);return FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=([])
autovar_2 = it
it=clas(Seq);next FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){it=traverse();next FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)};next FAIL if it==FAIL
while true
autovar_4=@input;r=it=clas(Seq);break FAIL if it==FAIL
autovar_3 = it
it=_pass(true,autovar_3){it=traverse();next FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)};break FAIL if it==FAIL 
 break FAIL if r==FAIL
 (autovar_4=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_4
it=autovar_2
ands_1 = it
it=eof();next FAIL if it==FAIL
it=(com=[]
							last=ands_1.shift
							ands_1.each{|a|
								if last[0].to_yaml==a[0].to_yaml
									last=Seq[last[0],Or[Seq[*last[1..(-1)]],Seq[*a[1..(-1)]]]]
								else
									com<<last
									last=a
								end
							}
							com<<last
							@src.ary=com
							@src.self
					)
_result_1 = it };return FAIL if it==FAIL
it=_result_1  
end

end


class Move_Assignments2 < Traverser
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
def root()
_result_1=nil
 it=nil
it=traverse();return FAIL if it==FAIL
_result_1 = it
it=_result_1  
end
def visit()
_result_1=nil
append_1=nil
expr_1=nil
name_1=nil
 it=nil
it=clas(Set);return FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=self['name']
name_1 = it
it=traverse();next FAIL if it==FAIL
it=self['expr']
expr_1 = it
it=self['append']
append_1 = it
it=expr_1
autovar_2 = it
it=_pass(false,autovar_2){it=move(append_1,name_1);next FAIL if it==FAIL
_result_1 = it};next FAIL if it==FAIL };return FAIL if it==FAIL
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

class Renamer2 < Traverser
def root()
_result_1=nil
 it=nil
it=clas(Rule);return FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=(@newvars={})
it=traverse();next FAIL if it==FAIL
_result_1 = it };return FAIL if it==FAIL
it=_result_1  
end
def visit()
_result_1=nil
name_1=nil
this_1=nil
 it=nil
it=clas(Local);return FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=anything();next FAIL if it==FAIL
name_1 = it
it=self['self']
this_1 = it };return FAIL if it==FAIL
it=(@newvars[this_1] ? @newvars[this_1] : ($av+=1; @newvars[this_1]=_Local(name_1,$av) ;@newvars[this_1] ))
_result_1 = it
it=_result_1  
end

end


class DetectCalls < Traverser
def root()
_result_1=nil
 it=nil
it=clas(Rule);return FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=(@calls={})
it=traverse();next FAIL if it==FAIL
it=@calls
_result_1 = it };return FAIL if it==FAIL
it=_result_1  
end
def visit()
_result_1=nil
name_1=nil
 it=nil
it=clas(Apply);return FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=anything();next FAIL if it==FAIL
name_1 = it
while true
autovar_2=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (autovar_2=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_2
it=(@calls[name_1]=true )
it=self['self']
_result_1 = it };return FAIL if it==FAIL
it=_result_1  
end

end


class Inliner2 < Traverser
def root()
_result_1=nil
args_1=nil
body_1=nil
from_1=nil
name_1=nil
to_1=nil
 it=nil
it=anything();return FAIL if it==FAIL
from_1 = it
it=anything();return FAIL if it==FAIL
to_1 = it
it=from_1
autovar_1 = it
it=_pass(false,autovar_1){it=clas(Rule);next FAIL if it==FAIL
autovar_2 = it
it=_pass(true,autovar_2){it=self['name']
name_1 = it
it=self['args']
args_1 = it
it=self['locals']
it=self['body']
body_1 = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=(@name=name_1;@args=args_1;@body=body_1 )
it=to_1
autovar_3 = it
it=_pass(false,autovar_3){it=clas(Rule);next FAIL if it==FAIL
autovar_4 = it
it=_pass(true,autovar_4){it=traverse();next FAIL if it==FAIL
_result_1 = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=_result_1  
end
def visit()
_result_1=nil
args_1=nil
name_1=nil
 it=nil
it=clas(Apply);return FAIL if it==FAIL
autovar_1 = it
it=_pass(true,autovar_1){it=anything();next FAIL if it==FAIL
name_1 = it
it=(name_1==@name)||FAIL;next FAIL if it==FAIL
it=([])
autovar_2 = it
while true
autovar_3=@input;r=it=anything();break FAIL if it==FAIL
autovar_2||=[];_append(autovar_2,it)
 break FAIL if r==FAIL
 (autovar_3=@input;@stop=nil;break FAIL) if @stop==true
end;@input=autovar_3
it=autovar_2
args_1 = it };return FAIL if it==FAIL
it=(body=@body;puts args_1.inspect; args_1.each_index{|i| body=Seq[Set[{:name=>@args[i],:expr=>Act[args_1[i]]}],body] } ; body)
_result_1 = it
it=_result_1  
end

end

