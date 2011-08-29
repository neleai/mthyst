class Move_Assignments2 < Traverser
def self.switchcb_1(e)
return 0 if e<=Or
return 1 if e<=Seq
return 2 if e<=Pass
return 3 if e<=Object
return 4
end
@@switchhash1=Hash.new{|h,k| h[k]=switchcb_1(k)}
def switchcb1(e)
@@switchhash1[e.class]
end
def self.switchcb_2(e)
return 0 if e<=Or
return 1 if e<=Seq
return 2 if e<=Pass
return 3 if e<=Object
return 4
end
@@switchhash2=Hash.new{|h,k| h[k]=switchcb_2(k)}
def switchcb2(e)
@@switchhash2[e.class]
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
bind[18]=[bind[18]]
end
def move_Move_Assignments2cb_14(bind)
@src.enter
end
def move_Move_Assignments2cb_15(bind)
Pass.create( {:ary=>bind[5],:enter=>bind[20],:to=>bind[19],:var=>bind[17] })
end
def move_Move_Assignments2cb_16(bind)
_Bind(bind[3],bind[8],bind[2])
end
def move_Move_Assignments2cb_17(bind)
_Bind(bind[3],bind[8],bind[2])
end
def move_Move_Assignments2cb_2(bind)
_append(bind[1],bind[4])
end
def move_Move_Assignments2cb_3(bind)
Or[{:ary=>bind[5]}]
end
def move_Move_Assignments2cb_4(bind)
_Bind(bind[3],bind[8],bind[2])
end
def move_Move_Assignments2cb_5(bind)
Seq
end
def move_Move_Assignments2cb_6(bind)
bind[12]=[bind[12]]
end
def move_Move_Assignments2cb_7(bind)
_append(bind[10],bind[14])
end
def move_Move_Assignments2cb_8(bind)
Seq[{:ary=>bind[5]}]
end
def move_Move_Assignments2cb_9(bind)
_Bind(bind[3],bind[8],bind[2])
end
def traverse_Move_Assignments2cb_1(bind)
@src
end
def traverse_Move_Assignments2cb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Move_Assignments2cb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Move_Assignments2cb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Move_Assignments2cb_5(bind)
@src
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
bind[17]=[bind[17]]
end
def visit_Move_Assignments2cb_12(bind)
_append(bind[15],bind[19])
end
def visit_Move_Assignments2cb_13(bind)
Seq[{:ary=>bind[10]}]
end
def visit_Move_Assignments2cb_14(bind)
_Bind(bind[5],bind[13],bind[6])
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
bind[23]=[bind[23]]
end
def visit_Move_Assignments2cb_19(bind)
@src.enter
end
def visit_Move_Assignments2cb_2(bind)
@src.name
end
def visit_Move_Assignments2cb_20(bind)
Pass.create( {:ary=>bind[10],:enter=>bind[25],:to=>bind[24],:var=>bind[22] })
end
def visit_Move_Assignments2cb_21(bind)
_Bind(bind[5],bind[13],bind[6])
end
def visit_Move_Assignments2cb_22(bind)
_Bind(bind[5],bind[13],bind[6])
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
_Bind(bind[5],bind[13],bind[6])
end

end




def testversion(r)
 raise "invalid version" if r!='2324021a5f49d50186a1e9be779dca4c'
end
  require 'compiled/dead_code_elimination2_c'
