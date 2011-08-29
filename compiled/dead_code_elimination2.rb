class Dead_Code_Detector2 < Traverser
def self.switchcb_1(e)
return 0 if e<=Apply
return 1 if e<=Act
return 2 if e<=Bind
return 3 if e<=Result
return 4 if e<=Pass
return 5 if e<=Many
return 6
end
@@switchhash1=Hash.new{|h,k| h[k]=switchcb_1(k)}
def switchcb1(e)
@@switchhash1[e.class]
end
def self.switchcb_2(e)
return 0 if e<=Global
return 1 if e<=Act
return 2 if e<=Key
return 3 if e<=Result
return 4 if e<=Strin
return 5 if e<=Args
return 6 if e<=Bind
return 7 if e<=Local
return 8 if e<=Object
return 9
end
@@switchhash2=Hash.new{|h,k| h[k]=switchcb_2(k)}
def switchcb2(e)
@@switchhash2[e.class]
end
def clas_Dead_Code_Detector2cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def root_Dead_Code_Detector2cb_1(bind)
@src.self
end
def root_Dead_Code_Detector2cb_2(bind)
bind[0]=[bind[0]]
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
@src.reachable=bind[2]
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
bind[1]=[bind[1]]
end
def traverse_Dead_Code_Detector2cb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
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
bind[3]<<bind[4]
end
def traverse_item_Dead_Code_Detector2cb_4(bind)
AmethystAST
end
def vars_in_Dead_Code_Detector2cb_1(bind)
bind[0]=[]
end
def vars_in_Dead_Code_Detector2cb_10(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_11(bind)
_append(bind[0],bind[6])
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
_append(bind[0],bind[8])
end
def vars_in_Dead_Code_Detector2cb_16(bind)
Strin
end
def vars_in_Dead_Code_Detector2cb_17(bind)
_append(bind[0],bind[10])
end
def vars_in_Dead_Code_Detector2cb_18(bind)
Args
end
def vars_in_Dead_Code_Detector2cb_19(bind)
_append(bind[0],bind[12])
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
bind[14]=[bind[14]]
end
def vars_in_Dead_Code_Detector2cb_23(bind)
_append(bind[0],bind[15])
end
def vars_in_Dead_Code_Detector2cb_24(bind)
Local
end
def vars_in_Dead_Code_Detector2cb_25(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_26(bind)
_append(bind[0],bind[17])
end
def vars_in_Dead_Code_Detector2cb_3(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_4(bind)
_append(bind[0],bind[2])
end
def vars_in_Dead_Code_Detector2cb_5(bind)
@marked<<@src.self
end
def vars_in_Dead_Code_Detector2cb_6(bind)
Act
end
def vars_in_Dead_Code_Detector2cb_7(bind)
@src.self
end
def vars_in_Dead_Code_Detector2cb_8(bind)
_append(bind[0],bind[4])
end
def vars_in_Dead_Code_Detector2cb_9(bind)
Key
end
def visit_Dead_Code_Detector2cb_1(bind)
Apply
end
def visit_Dead_Code_Detector2cb_10(bind)
bind[9]=[bind[9]]
end
def visit_Dead_Code_Detector2cb_11(bind)
bind[7]=bind[7][0]
end
def visit_Dead_Code_Detector2cb_12(bind)
@src.expr
end
def visit_Dead_Code_Detector2cb_13(bind)
bind[10]=[bind[10]]
end
def visit_Dead_Code_Detector2cb_14(bind)
bind[1].each{|w| @edges.add(bind[7],w)};bind[4]
end
def visit_Dead_Code_Detector2cb_15(bind)
Result
end
def visit_Dead_Code_Detector2cb_16(bind)
@src.vars
end
def visit_Dead_Code_Detector2cb_17(bind)
bind[12]=[bind[12]]
end
def visit_Dead_Code_Detector2cb_18(bind)
bind[1].each{|w| @edges.add(bind[4],w) } ; bind[4]
end
def visit_Dead_Code_Detector2cb_19(bind)
Pass
end
def visit_Dead_Code_Detector2cb_2(bind)
@marked+=bind[1]
end
def visit_Dead_Code_Detector2cb_20(bind)
@src.var
end
def visit_Dead_Code_Detector2cb_21(bind)
bind[15]=[bind[15]]
end
def visit_Dead_Code_Detector2cb_22(bind)
@marked+=bind[1]
end
def visit_Dead_Code_Detector2cb_23(bind)
Many
end
def visit_Dead_Code_Detector2cb_24(bind)
@src.o
end
def visit_Dead_Code_Detector2cb_25(bind)
bind[17]=[bind[17]]
end
def visit_Dead_Code_Detector2cb_26(bind)
@marked+=bind[1]
end
def visit_Dead_Code_Detector2cb_3(bind)
Act
end
def visit_Dead_Code_Detector2cb_4(bind)
@marked<<bind[4] if @src.pred
end
def visit_Dead_Code_Detector2cb_5(bind)
@src.ary
end
def visit_Dead_Code_Detector2cb_6(bind)
bind[5]=[bind[5]]
end
def visit_Dead_Code_Detector2cb_7(bind)
bind[1].each{|bind[7]| @edges.add(bind[7],bind[4]); @edges.add(bind[4],bind[7]);}; bind[4]
end
def visit_Dead_Code_Detector2cb_8(bind)
Bind
end
def visit_Dead_Code_Detector2cb_9(bind)
@src.name
end

end


class Dead_Code_Deleter2 < Traverser
def self.switchcb_3(e)
return 0 if e<=Local
return 1 if e<=Act
return 2 if e<=Bind
return 3 if e<=Result
return 4
end
@@switchhash3=Hash.new{|h,k| h[k]=switchcb_3(k)}
def switchcb3(e)
@@switchhash3[e.class]
end
def clas_Dead_Code_Deleter2cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def root_Dead_Code_Deleter2cb_1(bind)
@src.self
end
def root_Dead_Code_Deleter2cb_2(bind)
bind[0]=[bind[0]]
end
def root_Dead_Code_Deleter2cb_3(bind)
Rule
end
def root_Dead_Code_Deleter2cb_4(bind)
@src.reachable
end
def root_Dead_Code_Deleter2cb_5(bind)
@reachable=bind[2]
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
bind[1]=[bind[1]]
end
def traverse_Dead_Code_Deleter2cb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
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
bind[3]<<bind[4]
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
@reachable[bind[5]] ? bind[1] : bind[6]
end
def visit_Dead_Code_Deleter2cb_12(bind)
Result
end
def visit_Dead_Code_Deleter2cb_13(bind)
@src.self
end
def visit_Dead_Code_Deleter2cb_14(bind)
@reachable[bind[1]] ? bind[1] : Act[]
end
def visit_Dead_Code_Deleter2cb_2(bind)
@src.self
end
def visit_Dead_Code_Deleter2cb_3(bind)
@reachable[bind[1]] ? bind[1] : Act[]
end
def visit_Dead_Code_Deleter2cb_4(bind)
Act
end
def visit_Dead_Code_Deleter2cb_5(bind)
@src.self
end
def visit_Dead_Code_Deleter2cb_6(bind)
@reachable[bind[1]] ? bind[1] : Act[]
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



class Move_Assignments2 < Traverser
def self.switchcb_4(e)
return 0 if e<=Or
return 1 if e<=Seq
return 2 if e<=Pass
return 3 if e<=Object
return 4
end
@@switchhash4=Hash.new{|h,k| h[k]=switchcb_4(k)}
def switchcb4(e)
@@switchhash4[e.class]
end
def self.switchcb_5(e)
return 0 if e<=Or
return 1 if e<=Seq
return 2 if e<=Pass
return 3 if e<=Object
return 4
end
@@switchhash5=Hash.new{|h,k| h[k]=switchcb_5(k)}
def switchcb5(e)
@@switchhash5[e.class]
end
def clas_Move_Assignments2cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
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
bind[15]=[bind[15]]
end
def move_Move_Assignments2cb_14(bind)
@src.enter
end
def move_Move_Assignments2cb_15(bind)
Pass.create( {:ary=>bind[5],:enter=>bind[17],:to=>bind[16],:var=>bind[14] })
end
def move_Move_Assignments2cb_16(bind)
_Bind(bind[3],bind[7],bind[2])
end
def move_Move_Assignments2cb_17(bind)
_Bind(bind[3],bind[7],bind[2])
end
def move_Move_Assignments2cb_2(bind)
_append(bind[1],bind[4])
end
def move_Move_Assignments2cb_3(bind)
Or[{:ary=>bind[5]}]
end
def move_Move_Assignments2cb_4(bind)
_Bind(bind[3],bind[7],bind[2])
end
def move_Move_Assignments2cb_5(bind)
Seq
end
def move_Move_Assignments2cb_6(bind)
bind[11]=[bind[11]]
end
def move_Move_Assignments2cb_7(bind)
_append(bind[9],bind[12])
end
def move_Move_Assignments2cb_8(bind)
Seq[{:ary=>bind[5]}]
end
def move_Move_Assignments2cb_9(bind)
_Bind(bind[3],bind[7],bind[2])
end
def traverse_Move_Assignments2cb_1(bind)
@src.self
end
def traverse_Move_Assignments2cb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Move_Assignments2cb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Move_Assignments2cb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
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
bind[3]<<bind[4]
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
bind[16]=[bind[16]]
end
def visit_Move_Assignments2cb_12(bind)
_append(bind[14],bind[17])
end
def visit_Move_Assignments2cb_13(bind)
Seq[{:ary=>bind[10]}]
end
def visit_Move_Assignments2cb_14(bind)
_Bind(bind[5],bind[12],bind[6])
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
bind[20]=[bind[20]]
end
def visit_Move_Assignments2cb_19(bind)
@src.enter
end
def visit_Move_Assignments2cb_2(bind)
@src.name
end
def visit_Move_Assignments2cb_20(bind)
Pass.create( {:ary=>bind[10],:enter=>bind[22],:to=>bind[21],:var=>bind[19] })
end
def visit_Move_Assignments2cb_21(bind)
_Bind(bind[5],bind[12],bind[6])
end
def visit_Move_Assignments2cb_22(bind)
_Bind(bind[5],bind[12],bind[6])
end
def visit_Move_Assignments2cb_3(bind)
@src.expr
end
def visit_Move_Assignments2cb_4(bind)
@src.append
end
def visit_Move_Assignments2cb_5(bind)
bind[4]=[bind[4]]
end
def visit_Move_Assignments2cb_6(bind)
Or
end
def visit_Move_Assignments2cb_7(bind)
_append(bind[8],bind[9])
end
def visit_Move_Assignments2cb_8(bind)
Or[{:ary=>bind[10]}]
end
def visit_Move_Assignments2cb_9(bind)
_Bind(bind[5],bind[12],bind[6])
end

end




def testversion(r)
 raise "invalid version" if r!='e2d518a174fbc8fb4e157662e01d14e2'
end
  require 'compiled/dead_code_elimination2_c'
