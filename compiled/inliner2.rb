class Renamer2 < Traverser
def clas_Renamer2cb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_Renamer2cb_1(bind)
Rule
end
def root_Renamer2cb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_Renamer2cb_3(bind)
@newvars={}
end
def traverse_Renamer2cb_1(bind)
@src.self
end
def traverse_Renamer2cb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Renamer2cb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Renamer2cb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Renamer2cb_5(bind)
@src.self
end
def traverse_item_Renamer2cb_1(bind)
@changed=true
end
def traverse_item_Renamer2cb_2(bind)
Array
end
def traverse_item_Renamer2cb_3(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def traverse_item_Renamer2cb_4(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def traverse_item_Renamer2cb_5(bind)
AmethystAST
end
def traverse_item_Renamer2cb_6(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Renamer2cb_1(bind)
Local
end
def visit_Renamer2cb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Renamer2cb_3(bind)
@src.self
end
def visit_Renamer2cb_4(bind)
@newvars[bind[:this_1]] ? @newvars[bind[:this_1]] : ($av+=1; @newvars[bind[:this_1]]=_Local(bind[:name_1],$av) ;@newvars[bind[:this_1]] )
end

end


class DetectCalls < Traverser
def clas_DetectCallscb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_DetectCallscb_1(bind)
Rule
end
def root_DetectCallscb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_DetectCallscb_3(bind)
@calls={}
end
def root_DetectCallscb_4(bind)
@calls
end
def traverse_DetectCallscb_1(bind)
@src.self
end
def traverse_DetectCallscb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_DetectCallscb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_DetectCallscb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_DetectCallscb_5(bind)
@src.self
end
def traverse_item_DetectCallscb_1(bind)
@changed=true
end
def traverse_item_DetectCallscb_2(bind)
Array
end
def traverse_item_DetectCallscb_3(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def traverse_item_DetectCallscb_4(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def traverse_item_DetectCallscb_5(bind)
AmethystAST
end
def traverse_item_DetectCallscb_6(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_DetectCallscb_1(bind)
Apply
end
def visit_DetectCallscb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_DetectCallscb_3(bind)
@calls[bind[:name_1]]=true 
end
def visit_DetectCallscb_4(bind)
@src.self
end

end


class Inliner2 < Traverser
def clas_Inliner2cb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_Inliner2cb_1(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def root_Inliner2cb_10(bind)
Rule
end
def root_Inliner2cb_11(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_Inliner2cb_2(bind)
Rule
end
def root_Inliner2cb_3(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_Inliner2cb_4(bind)
@src.name
end
def root_Inliner2cb_5(bind)
@src.args
end
def root_Inliner2cb_6(bind)
@src.locals
end
def root_Inliner2cb_7(bind)
@src.body
end
def root_Inliner2cb_8(bind)
@name=bind[:name_1];@args=bind[:args_1];@body=bind[:body_1] 
end
def root_Inliner2cb_9(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def traverse_Inliner2cb_1(bind)
@src.self
end
def traverse_Inliner2cb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Inliner2cb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Inliner2cb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Inliner2cb_5(bind)
@src.self
end
def traverse_item_Inliner2cb_1(bind)
@changed=true
end
def traverse_item_Inliner2cb_2(bind)
Array
end
def traverse_item_Inliner2cb_3(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def traverse_item_Inliner2cb_4(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def traverse_item_Inliner2cb_5(bind)
AmethystAST
end
def traverse_item_Inliner2cb_6(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Inliner2cb_1(bind)
Apply
end
def visit_Inliner2cb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Inliner2cb_3(bind)
(bind[:name_1]==@name) || FAIL
end
def visit_Inliner2cb_4(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def visit_Inliner2cb_5(bind)
body=deep_clone(@body);puts bind[:args_1].inspect; bind[:args_1].each_index{|i| body=Seq[Bind[{:name=>@args[i],:expr=>bind[:args_1][i]}],body] } ; body
end

end


 require 'compiled/inliner2_c'
