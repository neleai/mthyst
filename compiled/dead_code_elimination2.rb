class Move_Assignments2 < Traverser_Clone2
def self.switchcb_Move_Assignments21(e)
return 0 if e<=Or
return 1 if e<=Seq
return 2 if e<=Object
return 3
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
return 2 if e<=Object
return 3
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
puts "move";puts @src.inspect
end
def move_Move_Assignments2cb_10(bind)
_Bind(bind[2],bind[7],false)
end
def move_Move_Assignments2cb_2(bind)
_append(bind[1],bind[3])
end
def move_Move_Assignments2cb_3(bind)
Or[{:ary=>bind[4]}]
end
def move_Move_Assignments2cb_4(bind)
_Bind(bind[2],bind[7],false)
end
def move_Move_Assignments2cb_5(bind)
puts "move";puts @src.inspect
end
def move_Move_Assignments2cb_6(bind)
bind[11]=[bind[11]]
end
def move_Move_Assignments2cb_7(bind)
_append(bind[9],bind[13])
end
def move_Move_Assignments2cb_8(bind)
Seq[{:ary=>bind[4]}]
end
def move_Move_Assignments2cb_9(bind)
_Bind(bind[2],bind[7],false)
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
bind[16]=[bind[16]]
end
def visit_Move_Assignments2cb_11(bind)
_append(bind[14],bind[18])
end
def visit_Move_Assignments2cb_12(bind)
Seq[{:ary=>bind[9]}]
end
def visit_Move_Assignments2cb_13(bind)
_Bind(bind[5],bind[12],false)
end
def visit_Move_Assignments2cb_14(bind)
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
puts "move";puts @src.inspect
end
def visit_Move_Assignments2cb_6(bind)
_append(bind[7],bind[8])
end
def visit_Move_Assignments2cb_7(bind)
Or[{:ary=>bind[9]}]
end
def visit_Move_Assignments2cb_8(bind)
_Bind(bind[5],bind[12],false)
end
def visit_Move_Assignments2cb_9(bind)
puts "move";puts @src.inspect
end

end




def dead_code_elimination2_compiled_by
'cc339a8057219f5a30f8d8ec82aff68c'
end
def dead_code_elimination2_source_hash
'3ccbd29bed4d0abe1c77a2d14db15920'
end
def testversiondead_code_elimination2(r)
 raise "invalid version" if r!=dead_code_elimination2_version
end
def dead_code_elimination2_version
'314dd0cff02ade1c50b7f2f9f9871462'
end
  require 'compiled/dead_code_elimination2_c'
