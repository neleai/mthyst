class Dead_Code_Detector2 < Traverser
def root_Dead_Code_Detector2cb_1(bind)
@src.self
end
def root_Dead_Code_Detector2cb_2(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def root_Dead_Code_Detector2cb_3(bind)
Rule
end
def root_Dead_Code_Detector2cb_4(bind)
@edges=Oriented_Graph.new ; @marked=[@src.body[-1]]
end
def root_Dead_Code_Detector2cb_5(bind)
@bnding=@src.bnding
end
def root_Dead_Code_Detector2cb_6(bind)
@edges.reachable(@marked)
end
def root_Dead_Code_Detector2cb_7(bind)
@src.reachable=bind[:reachable_1]
end
def root_Dead_Code_Detector2cb_8(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_1(bind)
[]
end
def vars_in_Dead_Code_Detector2cb_10(bind)
Key
end
def vars_in_Dead_Code_Detector2cb_11(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_12(bind)
_append(bind[:ary_1],bind[:autovar_6])
end
def vars_in_Dead_Code_Detector2cb_13(bind)
@marked<<@src.self
end
def vars_in_Dead_Code_Detector2cb_14(bind)
Result
end
def vars_in_Dead_Code_Detector2cb_15(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_16(bind)
_append(bind[:ary_1],bind[:autovar_8])
end
def vars_in_Dead_Code_Detector2cb_17(bind)
Strin
end
def vars_in_Dead_Code_Detector2cb_18(bind)
_append(bind[:ary_1],bind[:autovar_10])
end
def vars_in_Dead_Code_Detector2cb_19(bind)
Args
end
def vars_in_Dead_Code_Detector2cb_2(bind)
bind[:ary_1]=[]
end
def vars_in_Dead_Code_Detector2cb_20(bind)
_append(bind[:ary_1],bind[:autovar_12])
end
def vars_in_Dead_Code_Detector2cb_21(bind)
Set
end
def vars_in_Dead_Code_Detector2cb_22(bind)
@src.name
end
def vars_in_Dead_Code_Detector2cb_23(bind)
bind[:autovar_14]=[bind[:autovar_14]]
end
def vars_in_Dead_Code_Detector2cb_24(bind)
_append(bind[:ary_1],bind[:autovar_15])
end
def vars_in_Dead_Code_Detector2cb_25(bind)
Local
end
def vars_in_Dead_Code_Detector2cb_26(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_27(bind)
_append(bind[:ary_1],bind[:autovar_17])
end
def vars_in_Dead_Code_Detector2cb_3(bind)
Global
end
def vars_in_Dead_Code_Detector2cb_4(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_5(bind)
_append(bind[:ary_1],bind[:autovar_2])
end
def vars_in_Dead_Code_Detector2cb_6(bind)
@marked<<@src.self
end
def vars_in_Dead_Code_Detector2cb_7(bind)
Act
end
def vars_in_Dead_Code_Detector2cb_8(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_9(bind)
_append(bind[:ary_1],bind[:autovar_4])
end
def visit_Dead_Code_Detector2cb_1(bind)
Apply
end
def visit_Dead_Code_Detector2cb_10(bind)
@marked+=bind[:var_1]
end
def visit_Dead_Code_Detector2cb_11(bind)
Act
end
def visit_Dead_Code_Detector2cb_12(bind)
@marked<<bind[:this_1] if @src.pred
end
def visit_Dead_Code_Detector2cb_13(bind)
@src.ary
end
def visit_Dead_Code_Detector2cb_14(bind)
bind[:autovar_7]=[bind[:autovar_7]]
end
def visit_Dead_Code_Detector2cb_15(bind)
bind[:var_1].each{|bind[:v_1]| @edges.add(bind[:v_1],bind[:this_1]); @edges.add(bind[:this_1],bind[:v_1]);}; bind[:this_1]
end
def visit_Dead_Code_Detector2cb_16(bind)
Set
end
def visit_Dead_Code_Detector2cb_17(bind)
@src.name
end
def visit_Dead_Code_Detector2cb_18(bind)
bind[:autovar_10]=[bind[:autovar_10]]
end
def visit_Dead_Code_Detector2cb_19(bind)
bind[:v_1]=bind[:v_1][0]
end
def visit_Dead_Code_Detector2cb_2(bind)
@marked+=bind[:var_1]
end
def visit_Dead_Code_Detector2cb_20(bind)
@src.expr
end
def visit_Dead_Code_Detector2cb_21(bind)
bind[:autovar_11]=[bind[:autovar_11]]
end
def visit_Dead_Code_Detector2cb_22(bind)
bind[:var_1].each{|w| @edges.add(bind[:v_1],w)};bind[:this_1]
end
def visit_Dead_Code_Detector2cb_23(bind)
Result
end
def visit_Dead_Code_Detector2cb_24(bind)
@src.vars
end
def visit_Dead_Code_Detector2cb_25(bind)
bind[:autovar_13]=[bind[:autovar_13]]
end
def visit_Dead_Code_Detector2cb_26(bind)
bind[:var_1].each{|w| @edges.add(bind[:this_1],w) } ; bind[:this_1]
end
def visit_Dead_Code_Detector2cb_3(bind)
Pass
end
def visit_Dead_Code_Detector2cb_4(bind)
@src.var
end
def visit_Dead_Code_Detector2cb_5(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def visit_Dead_Code_Detector2cb_6(bind)
@marked+=bind[:var_1]
end
def visit_Dead_Code_Detector2cb_7(bind)
Many
end
def visit_Dead_Code_Detector2cb_8(bind)
@src.o
end
def visit_Dead_Code_Detector2cb_9(bind)
bind[:autovar_5]=[bind[:autovar_5]]
end

end


class Dead_Code_Deleter2 < Traverser
def root_Dead_Code_Deleter2cb_1(bind)
@src.self
end
def root_Dead_Code_Deleter2cb_2(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def root_Dead_Code_Deleter2cb_3(bind)
Rule
end
def root_Dead_Code_Deleter2cb_4(bind)
@src.reachable
end
def root_Dead_Code_Deleter2cb_5(bind)
@reachable=bind[:it_1]
end
def root_Dead_Code_Deleter2cb_6(bind)
@src.reachable=nil
end
def root_Dead_Code_Deleter2cb_7(bind)
@src.self
end
def visit_Dead_Code_Deleter2cb_1(bind)
Act
end
def visit_Dead_Code_Deleter2cb_10(bind)
@src.self
end
def visit_Dead_Code_Deleter2cb_11(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter2cb_12(bind)
Local
end
def visit_Dead_Code_Deleter2cb_13(bind)
@src.self
end
def visit_Dead_Code_Deleter2cb_14(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter2cb_2(bind)
@src.self
end
def visit_Dead_Code_Deleter2cb_3(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter2cb_4(bind)
Set
end
def visit_Dead_Code_Deleter2cb_5(bind)
@src.name
end
def visit_Dead_Code_Deleter2cb_6(bind)
@src.expr
end
def visit_Dead_Code_Deleter2cb_7(bind)
@src.self
end
def visit_Dead_Code_Deleter2cb_8(bind)
@reachable[bind[:name_1]] ? bind[:this_1] : bind[:expr_1]
end
def visit_Dead_Code_Deleter2cb_9(bind)
Result
end

end


class Constant_Propagator2 < Traverser

end


class Communize_Or2 < Traverser
def visit_Communize_Or2cb_1(bind)
[]
end
def visit_Communize_Or2cb_2(bind)
Or
end
def visit_Communize_Or2cb_3(bind)
[]
end
def visit_Communize_Or2cb_4(bind)
Seq
end
def visit_Communize_Or2cb_5(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def visit_Communize_Or2cb_6(bind)
Seq
end
def visit_Communize_Or2cb_7(bind)
_append(bind[:autovar_1],bind[:autovar_5])
end
def visit_Communize_Or2cb_8(bind)
common=bind[:ands_1][0].size
								bind[:ands_1].each{|a| 0.upto(common){|n| (common=[common,n].min ;next) if a[n].to_yaml!=bind[:ands_1][0][n].to_yaml}}
								commn=bind[:ands_1][0].ary[0,common]
								o=[]
								bind[:ands_1].each{|a| o<< Seq[{:ary=>a.ary[common,a.size-common]}] unless common==a.size	}
	            	Seq[{:ary=>(commn+[Or[{:ary=>o}]])}]
							
end

end

class Communize_Or3 < Traverser
def visit_Communize_Or3cb_1(bind)
[]
end
def visit_Communize_Or3cb_2(bind)
Or
end
def visit_Communize_Or3cb_3(bind)
[]
end
def visit_Communize_Or3cb_4(bind)
Seq
end
def visit_Communize_Or3cb_5(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def visit_Communize_Or3cb_6(bind)
Seq
end
def visit_Communize_Or3cb_7(bind)
_append(bind[:autovar_1],bind[:autovar_5])
end
def visit_Communize_Or3cb_8(bind)
com=[]
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
					
end

end


class Move_Assignments2 < Traverser
def move_Move_Assignments2cb_1(bind)
[]
end
def move_Move_Assignments2cb_10(bind)
[]
end
def move_Move_Assignments2cb_11(bind)
bind[:autovar_6]=[bind[:autovar_6]]
end
def move_Move_Assignments2cb_12(bind)
bind[:append_1]
end
def move_Move_Assignments2cb_13(bind)
bind[:name_1]
end
def move_Move_Assignments2cb_14(bind)
_append(bind[:autovar_2],bind[:autovar_7])
end
def move_Move_Assignments2cb_15(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def move_Move_Assignments2cb_16(bind)
Pass
end
def move_Move_Assignments2cb_17(bind)
@src.var
end
def move_Move_Assignments2cb_18(bind)
@src.to
end
def move_Move_Assignments2cb_19(bind)
bind[:autovar_9]=[bind[:autovar_9]]
end
def move_Move_Assignments2cb_2(bind)
[]
end
def move_Move_Assignments2cb_20(bind)
bind[:append_1]
end
def move_Move_Assignments2cb_21(bind)
bind[:name_1]
end
def move_Move_Assignments2cb_22(bind)
@src.enter
end
def move_Move_Assignments2cb_23(bind)
Pass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })
end
def move_Move_Assignments2cb_24(bind)
_Set(bind[:name_1],bind[:it_1],bind[:append_1])
end
def move_Move_Assignments2cb_3(bind)
Or
end
def move_Move_Assignments2cb_4(bind)
[]
end
def move_Move_Assignments2cb_5(bind)
bind[:append_1]
end
def move_Move_Assignments2cb_6(bind)
bind[:name_1]
end
def move_Move_Assignments2cb_7(bind)
_append(bind[:autovar_1],bind[:autovar_4])
end
def move_Move_Assignments2cb_8(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def move_Move_Assignments2cb_9(bind)
Seq
end
def visit_Move_Assignments2cb_1(bind)
Set
end
def visit_Move_Assignments2cb_2(bind)
@src.name
end
def visit_Move_Assignments2cb_3(bind)
@src.expr
end
def visit_Move_Assignments2cb_4(bind)
@src.append
end
def visit_Move_Assignments2cb_5(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def visit_Move_Assignments2cb_6(bind)
bind[:append_1]
end
def visit_Move_Assignments2cb_7(bind)
bind[:name_1]
end

end


class Dead_Code_Deleter3 < Traverser
def root_Dead_Code_Deleter3cb_1(bind)
@src.self
end
def root_Dead_Code_Deleter3cb_2(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def root_Dead_Code_Deleter3cb_3(bind)
Rule
end
def root_Dead_Code_Deleter3cb_4(bind)
@src.reachable
end
def root_Dead_Code_Deleter3cb_5(bind)
@reachable=bind[:it_1]
end
def root_Dead_Code_Deleter3cb_6(bind)
@src.reachable=nil
end
def root_Dead_Code_Deleter3cb_7(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_1(bind)
Act
end
def visit_Dead_Code_Deleter3cb_10(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_11(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter3cb_12(bind)
Local
end
def visit_Dead_Code_Deleter3cb_13(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_14(bind)
@src.ssaname
end
def visit_Dead_Code_Deleter3cb_15(bind)
@reachable[bind[:ssaname_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter3cb_2(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_3(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter3cb_4(bind)
Set
end
def visit_Dead_Code_Deleter3cb_5(bind)
@src.name
end
def visit_Dead_Code_Deleter3cb_6(bind)
@src.expr
end
def visit_Dead_Code_Deleter3cb_7(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_8(bind)
@reachable[bind[:name_1]] ? bind[:this_1] : bind[:expr_1]
end
def visit_Dead_Code_Deleter3cb_9(bind)
Result
end

end




 require 'c/dead_code_elimination2_c'
