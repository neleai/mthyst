class Dead_Code_Detector2 < Traverser
def root()
bind={}; 
  it=nil

it=(@src.self)
bind[:autovar_1] = it
it=_pass(false,bind[:autovar_1]){it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=(@edges=Oriented_Graph.new ; @marked=[@src.body[-1]])
it=(@bnding=@src.bnding)
it=traverse();next FAIL if it==FAIL
it=(@edges.reachable(@marked))
bind[:reachable_1] = it
it=(@src.reachable=bind[:reachable_1])
it=(@src.self)
bind[:_result_1] = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def vars_in()
bind={}; 
  it=nil

it=([])
bind[:ary_1] = it
it=(bind[:ary_1]=[])
while true
bind[:autovar_21]=@input;r=it=_or(proc{it=clas(Global);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=(@src.self)
bind[:autovar_2] = it
it=(_append(bind[:ary_1],bind[:autovar_2]))
it=(@marked<<@src.self)
while true
bind[:autovar_3]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_3]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_3] };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=(@src.self)
bind[:autovar_5] = it
it=(_append(bind[:ary_1],bind[:autovar_5]))
while true
bind[:autovar_6]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_6]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_6] };next FAIL if it==FAIL },proc{it=clas(Key);next FAIL if it==FAIL
bind[:autovar_7] = it
it=_pass(true,bind[:autovar_7]){it=(@src.self)
bind[:autovar_8] = it
it=(_append(bind[:ary_1],bind[:autovar_8]))
it=(@marked<<@src.self)
while true
bind[:autovar_9]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_9]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_9] };next FAIL if it==FAIL },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_10] = it
it=_pass(true,bind[:autovar_10]){it=(@src.self)
bind[:autovar_11] = it
it=(_append(bind[:ary_1],bind[:autovar_11])) };next FAIL if it==FAIL },proc{it=clas(Strin);next FAIL if it==FAIL
bind[:autovar_12] = it
it=_pass(true,bind[:autovar_12]){it=vars_in();next FAIL if it==FAIL
bind[:autovar_13] = it
it=(_append(bind[:ary_1],bind[:autovar_13])) };next FAIL if it==FAIL },proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_14] = it
it=_pass(true,bind[:autovar_14]){it=vars_in();next FAIL if it==FAIL
bind[:autovar_15] = it
it=(_append(bind[:ary_1],bind[:autovar_15])) };next FAIL if it==FAIL },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_16] = it
it=_pass(true,bind[:autovar_16]){it=(@src.name)
bind[:autovar_17] = it
it=_pass(false,bind[:autovar_17]){it=vars_in();next FAIL if it==FAIL
bind[:autovar_18] = it
it=(_append(bind[:ary_1],bind[:autovar_18])) };next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_19] = it
it=_pass(true,bind[:autovar_19]){it=anything();next FAIL if it==FAIL
it=(@src.self)
bind[:autovar_20] = it
it=(_append(bind[:ary_1],bind[:autovar_20])) };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL});break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_21]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_21]
it=bind[:ary_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=_or(proc{it=clas(Apply);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=anything();next FAIL if it==FAIL
it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it
it=(@marked+=bind[:var_1])
it=traverse();next FAIL if it==FAIL
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(Pass);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=(@src.var)
bind[:autovar_3] = it
it=_pass(false,bind[:autovar_3]){it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it};next FAIL if it==FAIL
it=(@marked+=bind[:var_1])
it=traverse();next FAIL if it==FAIL
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(Many);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=(@src.o)
bind[:autovar_5] = it
it=_pass(false,bind[:autovar_5]){it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it};next FAIL if it==FAIL
it=(@marked+=bind[:var_1])
it=traverse();next FAIL if it==FAIL
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=traverse();next FAIL if it==FAIL
bind[:this_1] = it
it=(@marked<<bind[:this_1] if @src.pred)
it=(@src.ary)
bind[:autovar_7] = it
it=_pass(false,bind[:autovar_7]){it=anything();next FAIL if it==FAIL
bind[:autovar_8] = it
it=_pass(true,bind[:autovar_8]){it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL };next FAIL if it==FAIL
it=(bind[:var_1].each{|bind[:v_1]| @edges.add(bind[:v_1],bind[:this_1]); @edges.add(bind[:this_1],bind[:v_1]);}; bind[:this_1])
bind[:_result_1] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_9] = it
it=_pass(true,bind[:autovar_9]){it=(@src.name)
bind[:autovar_10] = it
it=_pass(false,bind[:autovar_10]){it=vars_in();next FAIL if it==FAIL
bind[:v_1] = it};next FAIL if it==FAIL
it=(bind[:v_1]=bind[:v_1][0])
it=traverse();next FAIL if it==FAIL
bind[:this_1] = it
it=(@src.expr)
bind[:autovar_11] = it
it=_pass(false,bind[:autovar_11]){it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(bind[:var_1].each{|w| @edges.add(bind[:v_1],w)};bind[:this_1])
bind[:_result_1] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_12] = it
it=_pass(true,bind[:autovar_12]){it=(@src.vars)
bind[:autovar_13] = it
it=_pass(false,bind[:autovar_13]){it=anything();next FAIL if it==FAIL
bind[:autovar_14] = it
it=_pass(true,bind[:autovar_14]){it=vars_in();next FAIL if it==FAIL
bind[:var_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=traverse();next FAIL if it==FAIL
bind[:this_1] = it };next FAIL if it==FAIL
it=(bind[:var_1].each{|w| @edges.add(bind[:this_1],w) } ; bind[:this_1])
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end

end


class Dead_Code_Deleter2 < Traverser
def root()
bind={}; 
  it=nil

it=(@src.self)
bind[:autovar_1] = it
it=_pass(false,bind[:autovar_1]){it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=(@src.reachable)
bind[:it_1] = it
it=(@reachable=bind[:it_1])
it=traverse();next FAIL if it==FAIL
it=(@src.reachable=nil)
it=(@src.self)
bind[:_result_1] = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=_or(proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=(@src.self)
bind[:this_1] = it
while true
bind[:autovar_2]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_2]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_2] };next FAIL if it==FAIL
it=(@reachable[bind[:this_1]] ? bind[:this_1] : Act[])
bind[:_result_1] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=(@src.name)
bind[:name_1] = it
it=traverse();next FAIL if it==FAIL
it=(@src.expr)
bind[:expr_1] = it
it=(@src.self)
bind[:this_1] = it };next FAIL if it==FAIL
it=(@reachable[bind[:name_1]] ? bind[:this_1] : bind[:expr_1])
bind[:_result_1] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=(@src.self)
bind[:this_1] = it};next FAIL if it==FAIL
it=(@reachable[bind[:this_1]] ? bind[:this_1] : Act[])
bind[:_result_1] = it },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){while true
bind[:autovar_6]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_6]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_6]
it=(@src.self)
bind[:this_1] = it };next FAIL if it==FAIL
it=(@reachable[bind[:this_1]] ? bind[:this_1] : Act[])
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end

end


class Constant_Propagator2 < Traverser

end


class Communize_Or2 < Traverser
def root()
bind={}; 
  it=nil

it=traverse();return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=clas(Or);return FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=([])
bind[:autovar_1] = it
it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=traverse();next FAIL if it==FAIL
bind[:autovar_4] = it};next FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_4]))
while true
bind[:autovar_6]=@input;r=it=clas(Seq);break FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=traverse();next FAIL if it==FAIL
bind[:autovar_5] = it};break FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_5])) 
 break FAIL if r==FAIL
 (bind[:autovar_6]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_6]
it=bind[:autovar_1]
bind[:ands_1] = it
it=eof();next FAIL if it==FAIL
it=(common=bind[:ands_1][0].size
								bind[:ands_1].each{|a| 0.upto(common){|n| (common=[common,n].min ;next) if a[n].to_yaml!=bind[:ands_1][0][n].to_yaml}}
								commn=bind[:ands_1][0].ary[0,common]
								o=[]
								bind[:ands_1].each{|a| o<< Seq[{:ary=>a.ary[common,a.size-common]}] unless common==a.size	}
	            	Seq[{:ary=>(commn+[Or[{:ary=>o}]])}]
							)
bind[:_result_1] = it };return FAIL if it==FAIL
it=bind[:_result_1]  
end

end

class Communize_Or3 < Traverser
def root()
bind={}; 
  it=nil

it=traverse();return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=clas(Or);return FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=([])
bind[:autovar_1] = it
it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=traverse();next FAIL if it==FAIL
bind[:autovar_4] = it};next FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_4]))
while true
bind[:autovar_6]=@input;r=it=clas(Seq);break FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=traverse();next FAIL if it==FAIL
bind[:autovar_5] = it};break FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_5])) 
 break FAIL if r==FAIL
 (bind[:autovar_6]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_6]
it=bind[:autovar_1]
bind[:ands_1] = it
it=eof();next FAIL if it==FAIL
it=(com=[]
							last=bind[:ands_1].shift
							bind[:ands_1].each{|a|
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
bind[:_result_1] = it };return FAIL if it==FAIL
it=bind[:_result_1]  
end

end


class Move_Assignments2 < Traverser
def move(a0,a1)
bind={}; bind[:append_1]=a0;bind[:name_1]=a1
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=_or(proc{it=clas(Or);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=move(bind[:append_1],bind[:name_1]);break FAIL if it==FAIL
bind[:autovar_4] = it
it=(_append(bind[:autovar_1],bind[:autovar_4])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:ary_1] = it };next FAIL if it==FAIL
it=Or.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Seq);next FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=([])
bind[:autovar_2] = it
while true
bind[:autovar_9]=@input;r=it=anything();break FAIL if it==FAIL
bind[:el_1] = it
it=_or(proc{it=_lookahead(false){it=eof();next FAIL if it==FAIL};next FAIL if it==FAIL
it=bind[:el_1]
bind[:autovar_7] = it
it=_pass(false,bind[:autovar_7]){it=move(bind[:append_1],bind[:name_1]);next FAIL if it==FAIL
bind[:autovar_8] = it};next FAIL if it==FAIL },proc{it=bind[:el_1]
bind[:autovar_8] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_2],bind[:autovar_8])) 
 break FAIL if r==FAIL
 (bind[:autovar_9]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_9]
it=bind[:autovar_2]
bind[:ary_1] = it };next FAIL if it==FAIL
it=Seq.create( {:ary=>bind[:ary_1] })
bind[:_result_1] = it },proc{it=clas(Pass);next FAIL if it==FAIL
bind[:autovar_10] = it
it=_pass(true,bind[:autovar_10]){it=(@src.var)
bind[:var_1] = it
it=(@src.to)
bind[:autovar_11] = it
it=_pass(false,bind[:autovar_11]){it=move(bind[:append_1],bind[:name_1]);next FAIL if it==FAIL
bind[:to_1] = it};next FAIL if it==FAIL
it=(@src.enter)
bind[:enter_1] = it };next FAIL if it==FAIL
it=Pass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })
bind[:_result_1] = it },proc{it=anything();next FAIL if it==FAIL
bind[:it_1] = it
it=(_Set(bind[:name_1],bind[:it_1],bind[:append_1]))
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end
def root()
bind={}; 
  it=nil

it=traverse();return FAIL if it==FAIL
bind[:_result_1] = it
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=clas(Set);return FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=(@src.name)
bind[:name_1] = it
it=traverse();next FAIL if it==FAIL
it=(@src.expr)
bind[:expr_1] = it
it=(@src.append)
bind[:append_1] = it
it=bind[:expr_1]
bind[:autovar_2] = it
it=_pass(false,bind[:autovar_2]){it=move(bind[:append_1],bind[:name_1]);next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end

end


class Dead_Code_Deleter3 < Traverser
def root()
bind={}; 
  it=nil

it=(@src.self)
bind[:autovar_1] = it
it=_pass(false,bind[:autovar_1]){it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=(@src.reachable)
bind[:it_1] = it
it=(@reachable=bind[:it_1])
it=traverse();next FAIL if it==FAIL
it=(@src.reachable=nil)
it=(@src.self)
bind[:_result_1] = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=_or(proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=(@src.self)
bind[:this_1] = it
while true
bind[:autovar_2]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_2]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_2] };next FAIL if it==FAIL
it=(@reachable[bind[:this_1]] ? bind[:this_1] : Act[])
bind[:_result_1] = it },proc{it=clas(Set);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=(@src.name)
bind[:name_1] = it
it=traverse();next FAIL if it==FAIL
it=(@src.expr)
bind[:expr_1] = it
it=(@src.self)
bind[:this_1] = it };next FAIL if it==FAIL
it=(@reachable[bind[:name_1]] ? bind[:this_1] : bind[:expr_1])
bind[:_result_1] = it },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=(@src.self)
bind[:this_1] = it};next FAIL if it==FAIL
it=(@reachable[bind[:this_1]] ? bind[:this_1] : Act[])
bind[:_result_1] = it },proc{it=clas(Local);next FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){while true
bind[:autovar_6]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_6]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_6]
it=(@src.self)
bind[:this_1] = it
it=(@src.ssaname)
bind[:ssaname_1] = it };next FAIL if it==FAIL
it=(@reachable[bind[:ssaname_1]] ? bind[:this_1] : Act[])
bind[:_result_1] = it });return FAIL if it==FAIL
it=bind[:_result_1]  
end

end



class Analyze_Variables2 < Traverser
def flat()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_5]=@input;r=it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=flat();next FAIL if it==FAIL
bind[:autovar_3] = it};next FAIL if it==FAIL },proc{it=clas(Strin);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=flat();next FAIL if it==FAIL
bind[:autovar_3] = it};next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:autovar_3] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_5]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_5]
it=bind[:autovar_1]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def itrans()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=([])
bind[:autovar_2] = it
it=([])
bind[:autovar_2] = it
while true
bind[:autovar_10]=@input;r=it=_or(proc{it=clas(Grammar);next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=(@src.rules)
bind[:autovar_4] = it
it=_pass(false,bind[:autovar_4]){it=anything();next FAIL if it==FAIL
bind[:autovar_5] = it
it=_pass(true,bind[:autovar_5]){it=([])
bind[:autovar_1] = it
while true
bind[:autovar_8]=@input;r=it=clas(Rule);break FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=root();next FAIL if it==FAIL
bind[:autovar_7] = it};break FAIL if it==FAIL
it=(_append(bind[:autovar_1],bind[:autovar_7])) 
 break FAIL if r==FAIL
 (bind[:autovar_8]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_8]
it=bind[:autovar_1]
bind[:rules_1] = it };next FAIL if it==FAIL };next FAIL if it==FAIL
it=(@src.rules=bind[:rules_1])
it=(@src.self)
bind[:autovar_9] = it };next FAIL if it==FAIL },proc{it=anything();next FAIL if it==FAIL
bind[:autovar_9] = it});break FAIL if it==FAIL
it=(_append(bind[:autovar_2],bind[:autovar_9])) 
 break FAIL if r==FAIL
 (bind[:autovar_10]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_10]
it=bind[:autovar_2]
bind[:_result_1] = it
it=bind[:_result_1]  
end
def root()
bind={}; 
  it=nil

it=(@src.self)
bind[:autovar_1] = it
it=_pass(false,bind[:autovar_1]){it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=(@variables=Hash.new{|k,v| k[v]=v} ;(@src.locals+@src.args).each{|w| @variables[w[0]]=w})
it=(@locals=@src.locals)
it=traverse();next FAIL if it==FAIL
it=(@src.body=Seq[{:ary=>[@src.body] }];@src.locals=nil)
it=(@src.self)
bind[:_result_1] = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=_or(proc{it=clas(Args);next FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=traverse();next FAIL if it==FAIL
it=(@src.ary.map{|aa| @variables[aa] })
bind[:autovar_2] = it
it=_pass(false,bind[:autovar_2]){it=anything();next FAIL if it==FAIL
bind[:autovar_3] = it
it=_pass(true,bind[:autovar_3]){it=flat();next FAIL if it==FAIL
bind[:a_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL
it=(@src.ary=connectstring(bind[:a_1].flatten))
it=((@src.ary.size==1&&(@src.ary[0].is_a?(Local)||@src.ary[0].is_a?(Global)||@src.ary[0].is_a?(Key))) ? @src.ary[0] : @src.self)
bind[:_result_1] = it };next FAIL if it==FAIL },proc{it=clas(Act);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=traverse();next FAIL if it==FAIL
it=(@src.ary)
bind[:autovar_5] = it
it=_pass(false,bind[:autovar_5]){it=anything();next FAIL if it==FAIL
bind[:autovar_6] = it
it=_pass(true,bind[:autovar_6]){it=clas(Local);next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL };next FAIL if it==FAIL };next FAIL if it==FAIL },proc{it=clas(Result);next FAIL if it==FAIL
bind[:autovar_7] = it
it=_pass(true,bind[:autovar_7]){it=(@src.vars=@locals.select{|aa| @src.vars.include? aa[0].to_sym}.uniq)
it=(@src.self)
bind[:_result_1] = it };next FAIL if it==FAIL });return FAIL if it==FAIL
it=bind[:_result_1]  
end

end

class Renamer2 < Traverser
def root()
bind={}; 
  it=nil

it=clas(Rule);return FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=(@newvars={})
it=traverse();next FAIL if it==FAIL
bind[:_result_1] = it };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=clas(Local);return FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=anything();next FAIL if it==FAIL
bind[:name_1] = it
it=(@src.self)
bind[:this_1] = it };return FAIL if it==FAIL
it=(@newvars[bind[:this_1]] ? @newvars[bind[:this_1]] : ($av+=1; @newvars[bind[:this_1]]=_Local(bind[:name_1],$av) ;@newvars[bind[:this_1]] ))
bind[:_result_1] = it
it=bind[:_result_1]  
end

end


class DetectCalls < Traverser
def root()
bind={}; 
  it=nil

it=clas(Rule);return FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=(@calls={})
it=traverse();next FAIL if it==FAIL
it=(@calls)
bind[:_result_1] = it };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=clas(Apply);return FAIL if it==FAIL
bind[:autovar_1] = it
it=_pass(true,bind[:autovar_1]){it=anything();next FAIL if it==FAIL
bind[:name_1] = it
while true
bind[:autovar_2]=@input;r=it=anything();break FAIL if it==FAIL
 break FAIL if r==FAIL
 (bind[:autovar_2]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_2]
it=(@calls[bind[:name_1]]=true )
it=(@src.self)
bind[:_result_1] = it };return FAIL if it==FAIL
it=bind[:_result_1]  
end

end


class Inliner2 < Traverser
def root()
bind={}; 
  it=nil

it=anything();return FAIL if it==FAIL
bind[:from_1] = it
it=anything();return FAIL if it==FAIL
bind[:to_1] = it
it=bind[:from_1]
bind[:autovar_1] = it
it=_pass(false,bind[:autovar_1]){it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=(@src.name)
bind[:name_1] = it
it=(@src.args)
bind[:args_1] = it
it=(@src.locals)
it=(@src.body)
bind[:body_1] = it };next FAIL if it==FAIL };return FAIL if it==FAIL
it=(@name=bind[:name_1];@args=bind[:args_1];@body=bind[:body_1] )
it=bind[:to_1]
bind[:autovar_3] = it
it=_pass(false,bind[:autovar_3]){it=clas(Rule);next FAIL if it==FAIL
bind[:autovar_4] = it
it=_pass(true,bind[:autovar_4]){it=traverse();next FAIL if it==FAIL
bind[:_result_1] = it};next FAIL if it==FAIL };return FAIL if it==FAIL
it=bind[:_result_1]  
end
def visit()
bind={}; 
  it=nil

it=([])
bind[:autovar_1] = it
it=clas(Apply);return FAIL if it==FAIL
bind[:autovar_2] = it
it=_pass(true,bind[:autovar_2]){it=anything();next FAIL if it==FAIL
bind[:name_1] = it
it=(bind[:name_1]==@name)||FAIL;next FAIL if it==FAIL
it=([])
bind[:autovar_1] = it
while true
bind[:autovar_4]=@input;r=it=anything();break FAIL if it==FAIL
bind[:autovar_3] = it
it=(_append(bind[:autovar_1],bind[:autovar_3])) 
 break FAIL if r==FAIL
 (bind[:autovar_4]=@input;@stop=nil;break FAIL) if @stop==true
end;@input=bind[:autovar_4]
it=bind[:autovar_1]
bind[:args_1] = it };return FAIL if it==FAIL
it=(body=@body;puts bind[:args_1].inspect; bind[:args_1].each_index{|i| body=Seq[Set[{:name=>@args[i],:expr=>Act[bind[:args_1][i]]}],body] } ; body)
bind[:_result_1] = it
it=bind[:_result_1]  
end

end

