class Dead_Code_Detector2 < Traverser
def switchcb1(e)
return 0 if e.is_a?(Apply)
return 1 if e.is_a?(Act)
return 2 if e.is_a?(Bind)
return 3 if e.is_a?(Result)
return 4 if e.is_a?(Pass)
return 5 if e.is_a?(Many)
return 6
end
def switchcb2(e)
return 0 if e.is_a?(Global)
return 1 if e.is_a?(Act)
return 2 if e.is_a?(Key)
return 3 if e.is_a?(Result)
return 4 if e.is_a?(Strin)
return 5 if e.is_a?(Args)
return 6 if e.is_a?(Bind)
return 7 if e.is_a?(Local)
return 8 if e.is_a?(Object)
return 9
end
def clas_Dead_Code_Detector2cb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
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
def traverse_Dead_Code_Detector2cb_1(bind)
@src.self
end
def traverse_Dead_Code_Detector2cb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Dead_Code_Detector2cb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Dead_Code_Detector2cb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Dead_Code_Detector2cb_5(bind)
@src.self
end
def traverse_item_Dead_Code_Detector2cb_1(bind)
@changed=true
end
def traverse_item_Dead_Code_Detector2cb_2(bind)
Array
end
def traverse_item_Dead_Code_Detector2cb_3(bind)
bind[:ar_1]<<bind[:it_1]
end
def traverse_item_Dead_Code_Detector2cb_4(bind)
AmethystAST
end
def vars_in_Dead_Code_Detector2cb_1(bind)
bind[:ary_1]=[]
end
def vars_in_Dead_Code_Detector2cb_10(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_11(bind)
_append(bind[:ary_1],bind[:autovar_6])
end
def vars_in_Dead_Code_Detector2cb_12(bind)
@marked<<@src.self
end
def vars_in_Dead_Code_Detector2cb_13(bind)
Result
end
def vars_in_Dead_Code_Detector2cb_14(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_15(bind)
_append(bind[:ary_1],bind[:autovar_8])
end
def vars_in_Dead_Code_Detector2cb_16(bind)
Strin
end
def vars_in_Dead_Code_Detector2cb_17(bind)
_append(bind[:ary_1],bind[:autovar_10])
end
def vars_in_Dead_Code_Detector2cb_18(bind)
Args
end
def vars_in_Dead_Code_Detector2cb_19(bind)
_append(bind[:ary_1],bind[:autovar_12])
end
def vars_in_Dead_Code_Detector2cb_2(bind)
Global
end
def vars_in_Dead_Code_Detector2cb_20(bind)
Bind
end
def vars_in_Dead_Code_Detector2cb_21(bind)
@src.name
end
def vars_in_Dead_Code_Detector2cb_22(bind)
bind[:autovar_14]=[bind[:autovar_14]]
end
def vars_in_Dead_Code_Detector2cb_23(bind)
_append(bind[:ary_1],bind[:autovar_15])
end
def vars_in_Dead_Code_Detector2cb_24(bind)
Local
end
def vars_in_Dead_Code_Detector2cb_25(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_26(bind)
_append(bind[:ary_1],bind[:autovar_17])
end
def vars_in_Dead_Code_Detector2cb_27(bind)
Global
end
def vars_in_Dead_Code_Detector2cb_28(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_29(bind)
_append(bind[:ary_1],bind[:autovar_2])
end
def vars_in_Dead_Code_Detector2cb_3(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_30(bind)
@marked<<@src.self
end
def vars_in_Dead_Code_Detector2cb_31(bind)
Act
end
def vars_in_Dead_Code_Detector2cb_32(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_33(bind)
_append(bind[:ary_1],bind[:autovar_4])
end
def vars_in_Dead_Code_Detector2cb_34(bind)
Key
end
def vars_in_Dead_Code_Detector2cb_35(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_36(bind)
_append(bind[:ary_1],bind[:autovar_6])
end
def vars_in_Dead_Code_Detector2cb_37(bind)
@marked<<@src.self
end
def vars_in_Dead_Code_Detector2cb_38(bind)
Result
end
def vars_in_Dead_Code_Detector2cb_39(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_4(bind)
_append(bind[:ary_1],bind[:autovar_2])
end
def vars_in_Dead_Code_Detector2cb_40(bind)
_append(bind[:ary_1],bind[:autovar_8])
end
def vars_in_Dead_Code_Detector2cb_41(bind)
Strin
end
def vars_in_Dead_Code_Detector2cb_42(bind)
_append(bind[:ary_1],bind[:autovar_10])
end
def vars_in_Dead_Code_Detector2cb_43(bind)
Args
end
def vars_in_Dead_Code_Detector2cb_44(bind)
_append(bind[:ary_1],bind[:autovar_12])
end
def vars_in_Dead_Code_Detector2cb_45(bind)
Bind
end
def vars_in_Dead_Code_Detector2cb_46(bind)
@src.name
end
def vars_in_Dead_Code_Detector2cb_47(bind)
bind[:autovar_14]=[bind[:autovar_14]]
end
def vars_in_Dead_Code_Detector2cb_48(bind)
_append(bind[:ary_1],bind[:autovar_15])
end
def vars_in_Dead_Code_Detector2cb_49(bind)
Local
end
def vars_in_Dead_Code_Detector2cb_5(bind)
@marked<<@src.self
end
def vars_in_Dead_Code_Detector2cb_50(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_51(bind)
_append(bind[:ary_1],bind[:autovar_17])
end
def vars_in_Dead_Code_Detector2cb_6(bind)
Act
end
def vars_in_Dead_Code_Detector2cb_7(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_8(bind)
_append(bind[:ary_1],bind[:autovar_4])
end
def vars_in_Dead_Code_Detector2cb_9(bind)
Key
end
def visit_Dead_Code_Detector2cb_1(bind)
Apply
end
def visit_Dead_Code_Detector2cb_10(bind)
bind[:autovar_6]=[bind[:autovar_6]]
end
def visit_Dead_Code_Detector2cb_11(bind)
bind[:v_1]=bind[:v_1][0]
end
def visit_Dead_Code_Detector2cb_12(bind)
@src.expr
end
def visit_Dead_Code_Detector2cb_13(bind)
bind[:autovar_7]=[bind[:autovar_7]]
end
def visit_Dead_Code_Detector2cb_14(bind)
bind[:var_1].each{|w| @edges.add(bind[:v_1],w)};bind[:this_1]
end
def visit_Dead_Code_Detector2cb_15(bind)
Result
end
def visit_Dead_Code_Detector2cb_16(bind)
@src.vars
end
def visit_Dead_Code_Detector2cb_17(bind)
bind[:autovar_9]=[bind[:autovar_9]]
end
def visit_Dead_Code_Detector2cb_18(bind)
bind[:var_1].each{|w| @edges.add(bind[:this_1],w) } ; bind[:this_1]
end
def visit_Dead_Code_Detector2cb_19(bind)
Pass
end
def visit_Dead_Code_Detector2cb_2(bind)
@marked+=bind[:var_1]
end
def visit_Dead_Code_Detector2cb_20(bind)
@src.var
end
def visit_Dead_Code_Detector2cb_21(bind)
bind[:autovar_12]=[bind[:autovar_12]]
end
def visit_Dead_Code_Detector2cb_22(bind)
@marked+=bind[:var_1]
end
def visit_Dead_Code_Detector2cb_23(bind)
Many
end
def visit_Dead_Code_Detector2cb_24(bind)
@src.o
end
def visit_Dead_Code_Detector2cb_25(bind)
bind[:autovar_14]=[bind[:autovar_14]]
end
def visit_Dead_Code_Detector2cb_26(bind)
@marked+=bind[:var_1]
end
def visit_Dead_Code_Detector2cb_3(bind)
Act
end
def visit_Dead_Code_Detector2cb_4(bind)
@marked<<bind[:this_1] if @src.pred
end
def visit_Dead_Code_Detector2cb_5(bind)
@src.ary
end
def visit_Dead_Code_Detector2cb_6(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def visit_Dead_Code_Detector2cb_7(bind)
bind[:var_1].each{|bind[:v_1]| @edges.add(bind[:v_1],bind[:this_1]); @edges.add(bind[:this_1],bind[:v_1]);}; bind[:this_1]
end
def visit_Dead_Code_Detector2cb_8(bind)
Bind
end
def visit_Dead_Code_Detector2cb_9(bind)
@src.name
end

end


class Dead_Code_Deleter2 < Traverser
def switchcb3(e)
return 0 if e.is_a?(Local)
return 1 if e.is_a?(Act)
return 2 if e.is_a?(Bind)
return 3 if e.is_a?(Result)
return 4
end
def clas_Dead_Code_Deleter2cb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
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
def traverse_Dead_Code_Deleter2cb_1(bind)
@src.self
end
def traverse_Dead_Code_Deleter2cb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Dead_Code_Deleter2cb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Dead_Code_Deleter2cb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Dead_Code_Deleter2cb_5(bind)
@src.self
end
def traverse_item_Dead_Code_Deleter2cb_1(bind)
@changed=true
end
def traverse_item_Dead_Code_Deleter2cb_2(bind)
Array
end
def traverse_item_Dead_Code_Deleter2cb_3(bind)
bind[:ar_1]<<bind[:it_1]
end
def traverse_item_Dead_Code_Deleter2cb_4(bind)
AmethystAST
end
def visit_Dead_Code_Deleter2cb_1(bind)
Local
end
def visit_Dead_Code_Deleter2cb_10(bind)
@src.self
end
def visit_Dead_Code_Deleter2cb_11(bind)
@reachable[bind[:name_1]] ? bind[:this_1] : bind[:expr_1]
end
def visit_Dead_Code_Deleter2cb_12(bind)
Result
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
Act
end
def visit_Dead_Code_Deleter2cb_5(bind)
@src.self
end
def visit_Dead_Code_Deleter2cb_6(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter2cb_7(bind)
Bind
end
def visit_Dead_Code_Deleter2cb_8(bind)
@src.name
end
def visit_Dead_Code_Deleter2cb_9(bind)
@src.expr
end

end


class Constant_Propagator2 < Traverser


end


class Communize_Or2 < Traverser

def clas_Communize_Or2cb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def empty_Communize_Or2cb_1(bind)

end
def fails_Communize_Or2cb_1(bind)
(false) || FAIL
end
def traverse_Communize_Or2cb_1(bind)
@src.self
end
def traverse_Communize_Or2cb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Communize_Or2cb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Communize_Or2cb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Communize_Or2cb_5(bind)
@src.self
end
def traverse_item_Communize_Or2cb_1(bind)
@changed=true
end
def traverse_item_Communize_Or2cb_2(bind)
Array
end
def traverse_item_Communize_Or2cb_3(bind)
bind[:ar_1]<<bind[:it_1]
end
def traverse_item_Communize_Or2cb_4(bind)
AmethystAST
end
def visit_Communize_Or2cb_1(bind)
Or
end
def visit_Communize_Or2cb_2(bind)
Seq
end
def visit_Communize_Or2cb_3(bind)
_append(bind[:autovar_2],bind[:autovar_4])
end
def visit_Communize_Or2cb_4(bind)
Seq
end
def visit_Communize_Or2cb_5(bind)
_append(bind[:autovar_2],bind[:autovar_5])
end
def visit_Communize_Or2cb_6(bind)
common=bind[:ands_1][0].size
								bind[:ands_1].each{|a| 0.upto(common){|n| (common=[common,n].min ;next) if a[n].to_yaml!=bind[:ands_1][0][n].to_yaml}}
								commn=bind[:ands_1][0].ary[0,common]
								o=[]
								bind[:ands_1].each{|a| o<< Seq[{:ary=>a.ary[common,a.size-common]}] unless common==a.size	}
	            	Seq[{:ary=>(commn+[Or[{:ary=>o}]])}]
							
end

end

class Communize_Or3 < Traverser

def clas_Communize_Or3cb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def empty_Communize_Or3cb_1(bind)

end
def fails_Communize_Or3cb_1(bind)
(false) || FAIL
end
def traverse_Communize_Or3cb_1(bind)
@src.self
end
def traverse_Communize_Or3cb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Communize_Or3cb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Communize_Or3cb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Communize_Or3cb_5(bind)
@src.self
end
def traverse_item_Communize_Or3cb_1(bind)
@changed=true
end
def traverse_item_Communize_Or3cb_2(bind)
Array
end
def traverse_item_Communize_Or3cb_3(bind)
bind[:ar_1]<<bind[:it_1]
end
def traverse_item_Communize_Or3cb_4(bind)
AmethystAST
end
def visit_Communize_Or3cb_1(bind)
Or
end
def visit_Communize_Or3cb_2(bind)
Seq
end
def visit_Communize_Or3cb_3(bind)
_append(bind[:autovar_2],bind[:autovar_4])
end
def visit_Communize_Or3cb_4(bind)
Seq
end
def visit_Communize_Or3cb_5(bind)
_append(bind[:autovar_2],bind[:autovar_5])
end
def visit_Communize_Or3cb_6(bind)
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
def switchcb4(e)
return 0 if e.is_a?(Or)
return 1 if e.is_a?(Seq)
return 2 if e.is_a?(Pass)
return 3 if e.is_a?(Object)
return 4
end
def switchcb5(e)
return 0 if e.is_a?(Or)
return 1 if e.is_a?(Seq)
return 2 if e.is_a?(Pass)
return 3 if e.is_a?(Object)
return 4
end
def clas_Move_Assignments2cb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def empty_Move_Assignments2cb_1(bind)

end
def fails_Move_Assignments2cb_1(bind)
(false) || FAIL
end
def move_Move_Assignments2cb_1(bind)
Or
end
def move_Move_Assignments2cb_10(bind)
Pass
end
def move_Move_Assignments2cb_11(bind)
@src.var
end
def move_Move_Assignments2cb_12(bind)
@src.to
end
def move_Move_Assignments2cb_13(bind)
bind[:autovar_9]=[bind[:autovar_9]]
end
def move_Move_Assignments2cb_14(bind)
@src.enter
end
def move_Move_Assignments2cb_15(bind)
Pass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })
end
def move_Move_Assignments2cb_16(bind)
_Bind(bind[:name_1],bind[:it_1],bind[:append_1])
end
def move_Move_Assignments2cb_17(bind)
Or
end
def move_Move_Assignments2cb_18(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def move_Move_Assignments2cb_19(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def move_Move_Assignments2cb_2(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def move_Move_Assignments2cb_20(bind)
Seq
end
def move_Move_Assignments2cb_21(bind)
bind[:autovar_6]=[bind[:autovar_6]]
end
def move_Move_Assignments2cb_22(bind)
_append(bind[:autovar_5],bind[:autovar_7])
end
def move_Move_Assignments2cb_23(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def move_Move_Assignments2cb_24(bind)
Pass
end
def move_Move_Assignments2cb_25(bind)
@src.var
end
def move_Move_Assignments2cb_26(bind)
@src.to
end
def move_Move_Assignments2cb_27(bind)
bind[:autovar_9]=[bind[:autovar_9]]
end
def move_Move_Assignments2cb_28(bind)
@src.enter
end
def move_Move_Assignments2cb_29(bind)
Pass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })
end
def move_Move_Assignments2cb_3(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def move_Move_Assignments2cb_30(bind)
_Bind(bind[:name_1],bind[:it_1],bind[:append_1])
end
def move_Move_Assignments2cb_4(bind)
_Bind(bind[:name_1],bind[:it_1],bind[:append_1])
end
def move_Move_Assignments2cb_5(bind)
Seq
end
def move_Move_Assignments2cb_6(bind)
bind[:autovar_6]=[bind[:autovar_6]]
end
def move_Move_Assignments2cb_7(bind)
_append(bind[:autovar_5],bind[:autovar_7])
end
def move_Move_Assignments2cb_8(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def move_Move_Assignments2cb_9(bind)
_Bind(bind[:name_1],bind[:it_1],bind[:append_1])
end
def traverse_Move_Assignments2cb_1(bind)
@src.self
end
def traverse_Move_Assignments2cb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Move_Assignments2cb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Move_Assignments2cb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Move_Assignments2cb_5(bind)
@src.self
end
def traverse_item_Move_Assignments2cb_1(bind)
@changed=true
end
def traverse_item_Move_Assignments2cb_2(bind)
Array
end
def traverse_item_Move_Assignments2cb_3(bind)
bind[:ar_1]<<bind[:it_1]
end
def traverse_item_Move_Assignments2cb_4(bind)
AmethystAST
end
def visit_Move_Assignments2cb_1(bind)
Bind
end
def visit_Move_Assignments2cb_10(bind)
Seq
end
def visit_Move_Assignments2cb_11(bind)
bind[:autovar_8]=[bind[:autovar_8]]
end
def visit_Move_Assignments2cb_12(bind)
_append(bind[:autovar_7],bind[:autovar_9])
end
def visit_Move_Assignments2cb_13(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def visit_Move_Assignments2cb_14(bind)
_Bind(bind[:name_2],bind[:it_1],bind[:append_2])
end
def visit_Move_Assignments2cb_15(bind)
Pass
end
def visit_Move_Assignments2cb_16(bind)
@src.var
end
def visit_Move_Assignments2cb_17(bind)
@src.to
end
def visit_Move_Assignments2cb_18(bind)
bind[:autovar_11]=[bind[:autovar_11]]
end
def visit_Move_Assignments2cb_19(bind)
@src.enter
end
def visit_Move_Assignments2cb_2(bind)
@src.name
end
def visit_Move_Assignments2cb_20(bind)
Pass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })
end
def visit_Move_Assignments2cb_21(bind)
_Bind(bind[:name_2],bind[:it_1],bind[:append_2])
end
def visit_Move_Assignments2cb_22(bind)
Or
end
def visit_Move_Assignments2cb_23(bind)
_append(bind[:autovar_4],bind[:autovar_5])
end
def visit_Move_Assignments2cb_24(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def visit_Move_Assignments2cb_25(bind)
Seq
end
def visit_Move_Assignments2cb_26(bind)
bind[:autovar_8]=[bind[:autovar_8]]
end
def visit_Move_Assignments2cb_27(bind)
_append(bind[:autovar_7],bind[:autovar_9])
end
def visit_Move_Assignments2cb_28(bind)
Seq.create( {:ary=>bind[:ary_1] })
end
def visit_Move_Assignments2cb_29(bind)
Pass
end
def visit_Move_Assignments2cb_3(bind)
@src.expr
end
def visit_Move_Assignments2cb_30(bind)
@src.var
end
def visit_Move_Assignments2cb_31(bind)
@src.to
end
def visit_Move_Assignments2cb_32(bind)
bind[:autovar_11]=[bind[:autovar_11]]
end
def visit_Move_Assignments2cb_33(bind)
@src.enter
end
def visit_Move_Assignments2cb_34(bind)
Pass.create( {:ary=>bind[:ary_1],:enter=>bind[:enter_1],:to=>bind[:to_1],:var=>bind[:var_1] })
end
def visit_Move_Assignments2cb_35(bind)
_Bind(bind[:name_2],bind[:it_1],bind[:append_2])
end
def visit_Move_Assignments2cb_4(bind)
@src.append
end
def visit_Move_Assignments2cb_5(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def visit_Move_Assignments2cb_6(bind)
Or
end
def visit_Move_Assignments2cb_7(bind)
_append(bind[:autovar_4],bind[:autovar_5])
end
def visit_Move_Assignments2cb_8(bind)
Or.create( {:ary=>bind[:ary_1] })
end
def visit_Move_Assignments2cb_9(bind)
_Bind(bind[:name_2],bind[:it_1],bind[:append_2])
end

end




def testversion(r)
 raise "invalid version" if r!='a861d2384db9acae36b1198a7f985aab'
end
  require 'compiled/dead_code_elimination2_c'
