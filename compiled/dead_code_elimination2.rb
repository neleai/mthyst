class Move_Assignments2 < Traverser_Clone2
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
def fails_Move_Assignments2cb_1(bind)
(false) || FAIL
end
def move_Move_Assignments2cb_1(bind)
_append(bind[1],bind[3])
end
def move_Move_Assignments2cb_10(bind)
bind[17]=[bind[17]]
end
def move_Move_Assignments2cb_11(bind)
@src.enter
end
def move_Move_Assignments2cb_12(bind)
Pass.create( {:ary=>bind[4],:to=>bind[18],:var=>bind[16] })
end
def move_Move_Assignments2cb_13(bind)
_Bind(bind[2],bind[7],false)
end
def move_Move_Assignments2cb_14(bind)
_Bind(bind[2],bind[7],false)
end
def move_Move_Assignments2cb_2(bind)
Or[{:ary=>bind[4]}]
end
def move_Move_Assignments2cb_3(bind)
_Bind(bind[2],bind[7],false)
end
def move_Move_Assignments2cb_4(bind)
bind[11]=[bind[11]]
end
def move_Move_Assignments2cb_5(bind)
_append(bind[9],bind[13])
end
def move_Move_Assignments2cb_6(bind)
Seq[{:ary=>bind[4]}]
end
def move_Move_Assignments2cb_7(bind)
_Bind(bind[2],bind[7],false)
end
def move_Move_Assignments2cb_8(bind)
@src.var
end
def move_Move_Assignments2cb_9(bind)
@src.to
end
def traverse_Move_Assignments2cb_1(bind)
@changed
end
def traverse_Move_Assignments2cb_2(bind)
@src
end
def traverse_Move_Assignments2cb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Move_Assignments2cb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Move_Assignments2cb_5(bind)
@changed=false
end
def traverse_Move_Assignments2cb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Move_Assignments2cb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
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
Seq[{:ary=>bind[9]}]
end
def visit_Move_Assignments2cb_11(bind)
_Bind(bind[5],bind[12],false)
end
def visit_Move_Assignments2cb_12(bind)
@src.var
end
def visit_Move_Assignments2cb_13(bind)
@src.to
end
def visit_Move_Assignments2cb_14(bind)
bind[22]=[bind[22]]
end
def visit_Move_Assignments2cb_15(bind)
@src.enter
end
def visit_Move_Assignments2cb_16(bind)
Pass.create( {:ary=>bind[9],:to=>bind[23],:var=>bind[21] })
end
def visit_Move_Assignments2cb_17(bind)
_Bind(bind[5],bind[12],false)
end
def visit_Move_Assignments2cb_18(bind)
_Bind(bind[5],bind[12],false)
end
def visit_Move_Assignments2cb_2(bind)
@src.name
end
def visit_Move_Assignments2cb_3(bind)
@src.expr
end
def visit_Move_Assignments2cb_4(bind)
bind[4]=[bind[4]]
end
def visit_Move_Assignments2cb_5(bind)
_append(bind[7],bind[8])
end
def visit_Move_Assignments2cb_6(bind)
Or[{:ary=>bind[9]}]
end
def visit_Move_Assignments2cb_7(bind)
_Bind(bind[5],bind[12],false)
end
def visit_Move_Assignments2cb_8(bind)
bind[16]=[bind[16]]
end
def visit_Move_Assignments2cb_9(bind)
_append(bind[14],bind[18])
end

end




def dead_code_elimination2_compiled_by
'87f2aa0b804077d21df18f24ca62d5d8'
end
def dead_code_elimination2_source_hash
'0468eaf2584b080c70ce4ee6724f230f'
end
def testversiondead_code_elimination2(r)
 raise "invalid version" if r!=dead_code_elimination2_version
end
def dead_code_elimination2_version
'739adc31653e612e5b7edf7249fa45b0'
end
  require 'compiled/dead_code_elimination2_c'
