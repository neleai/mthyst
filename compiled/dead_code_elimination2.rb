class Move_Assignments2 < Traverser
def self.switchcb_Move_Assignments21(e)
return 0 if e<=Or
return 1 if e<=Seq
return 2 if e<=Pass
return 3 if e<=Object
return 4
end
@@switchhashMove_Assignments21=Hash.new{|h,k| h[k]=switchcb_Move_Assignments21(k)}
def switchcbMove_Assignments21(e)
@@switchhashMove_Assignments21[e.class]
end
def self.switchcb_Move_Assignments22(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashMove_Assignments22=Hash.new{|h,k| h[k]=switchcb_Move_Assignments22(k)}
def switchcbMove_Assignments22(e)
@@switchhashMove_Assignments22[e.class]
end
def self.switchcb_Move_Assignments23(e)
return 0 if e<=Or
return 1 if e<=Seq
return 2 if e<=Pass
return 3 if e<=Object
return 4
end
@@switchhashMove_Assignments23=Hash.new{|h,k| h[k]=switchcb_Move_Assignments23(k)}
def switchcbMove_Assignments23(e)
@@switchhashMove_Assignments23[e.class]
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
_append(bind[1],bind[4])
end
def move_Move_Assignments2cb_10(bind)
bind[18]=[bind[18]]
end
def move_Move_Assignments2cb_11(bind)
@src.enter
end
def move_Move_Assignments2cb_12(bind)
Pass.create( {:ary=>bind[5],:enter=>bind[20],:to=>bind[19],:var=>bind[17] })
end
def move_Move_Assignments2cb_13(bind)
_Bind(bind[3],bind[8],bind[2])
end
def move_Move_Assignments2cb_14(bind)
_Bind(bind[3],bind[8],bind[2])
end
def move_Move_Assignments2cb_2(bind)
Or[{:ary=>bind[5]}]
end
def move_Move_Assignments2cb_3(bind)
_Bind(bind[3],bind[8],bind[2])
end
def move_Move_Assignments2cb_4(bind)
bind[12]=[bind[12]]
end
def move_Move_Assignments2cb_5(bind)
_append(bind[10],bind[14])
end
def move_Move_Assignments2cb_6(bind)
Seq[{:ary=>bind[5]}]
end
def move_Move_Assignments2cb_7(bind)
_Bind(bind[3],bind[8],bind[2])
end
def move_Move_Assignments2cb_8(bind)
@src.var
end
def move_Move_Assignments2cb_9(bind)
@src.to
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
bind[3]<<bind[4]
end
def traverse_item_Move_Assignments2cb_3(bind)
@changed=true
end
def traverse_item_Move_Assignments2cb_4(bind)
@changed=true
end
def visit_Move_Assignments2cb_1(bind)
Bind
end
def visit_Move_Assignments2cb_10(bind)
_append(bind[15],bind[19])
end
def visit_Move_Assignments2cb_11(bind)
Seq[{:ary=>bind[10]}]
end
def visit_Move_Assignments2cb_12(bind)
_Bind(bind[5],bind[13],bind[6])
end
def visit_Move_Assignments2cb_13(bind)
@src.var
end
def visit_Move_Assignments2cb_14(bind)
@src.to
end
def visit_Move_Assignments2cb_15(bind)
bind[23]=[bind[23]]
end
def visit_Move_Assignments2cb_16(bind)
@src.enter
end
def visit_Move_Assignments2cb_17(bind)
Pass.create( {:ary=>bind[10],:enter=>bind[25],:to=>bind[24],:var=>bind[22] })
end
def visit_Move_Assignments2cb_18(bind)
_Bind(bind[5],bind[13],bind[6])
end
def visit_Move_Assignments2cb_19(bind)
_Bind(bind[5],bind[13],bind[6])
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
bind[4]=[bind[4]]
end
def visit_Move_Assignments2cb_6(bind)
_append(bind[8],bind[9])
end
def visit_Move_Assignments2cb_7(bind)
Or[{:ary=>bind[10]}]
end
def visit_Move_Assignments2cb_8(bind)
_Bind(bind[5],bind[13],bind[6])
end
def visit_Move_Assignments2cb_9(bind)
bind[17]=[bind[17]]
end

end




def testversion(r)
 raise "invalid version" if r!='aa14ac0526045fe69c03f0b7816d7563'
end
  require 'compiled/dead_code_elimination2_c'
