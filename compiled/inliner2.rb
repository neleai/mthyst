class Renamer2 < Traverser

def clas_Renamer2cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def root_Renamer2cb_1(bind)
Rule
end
def root_Renamer2cb_2(bind)
@newvars={}
end
def traverse_Renamer2cb_1(bind)
@src
end
def traverse_Renamer2cb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Renamer2cb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Renamer2cb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Renamer2cb_5(bind)
@src
end
def traverse_item_Renamer2cb_1(bind)
@changed=true
end
def traverse_item_Renamer2cb_2(bind)
Array
end
def traverse_item_Renamer2cb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Renamer2cb_4(bind)
AmethystAST
end
def visit_Renamer2cb_1(bind)
Local
end
def visit_Renamer2cb_2(bind)
@src
end
def visit_Renamer2cb_3(bind)
@newvars[bind[2]] ? @newvars[bind[2]] : ($av+=1; @newvars[bind[2]]=_Local(bind[1],$av) ;@newvars[bind[2]] )
end

end


class DetectCalls < Traverser

def clas_DetectCallscb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def root_DetectCallscb_1(bind)
Rule
end
def root_DetectCallscb_2(bind)
@calls={}
end
def root_DetectCallscb_3(bind)
@calls
end
def traverse_DetectCallscb_1(bind)
@src
end
def traverse_DetectCallscb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_DetectCallscb_3(bind)
bind[1]=[bind[1]]
end
def traverse_DetectCallscb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_DetectCallscb_5(bind)
@src
end
def traverse_item_DetectCallscb_1(bind)
@changed=true
end
def traverse_item_DetectCallscb_2(bind)
Array
end
def traverse_item_DetectCallscb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_DetectCallscb_4(bind)
AmethystAST
end
def visit_DetectCallscb_1(bind)
Apply
end
def visit_DetectCallscb_2(bind)
@calls[bind[1]]=true 
end
def visit_DetectCallscb_3(bind)
@src
end

end


class Inliner2 < Traverser

def clas_Inliner2cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def root_Inliner2cb_1(bind)
bind[2]=[bind[2]]
end
def root_Inliner2cb_2(bind)
Rule
end
def root_Inliner2cb_3(bind)
@src.name
end
def root_Inliner2cb_4(bind)
@src.args
end
def root_Inliner2cb_5(bind)
@src.locals
end
def root_Inliner2cb_6(bind)
@src.body
end
def root_Inliner2cb_7(bind)
@name=bind[4];@args=bind[5];@body=bind[6] 
end
def root_Inliner2cb_8(bind)
bind[7]=[bind[7]]
end
def root_Inliner2cb_9(bind)
Rule
end
def traverse_Inliner2cb_1(bind)
@src
end
def traverse_Inliner2cb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Inliner2cb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Inliner2cb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Inliner2cb_5(bind)
@src
end
def traverse_item_Inliner2cb_1(bind)
@changed=true
end
def traverse_item_Inliner2cb_2(bind)
Array
end
def traverse_item_Inliner2cb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Inliner2cb_4(bind)
AmethystAST
end
def visit_Inliner2cb_1(bind)
Apply
end
def visit_Inliner2cb_2(bind)
(bind[1]==@name) || FAIL
end
def visit_Inliner2cb_3(bind)
_append(bind[2],bind[3])
end
def visit_Inliner2cb_4(bind)
body=deep_clone(@body);puts bind[4].inspect; bind[4].each_index{|i| body=Seq[Bind[{:name=>@args[i],:expr=>bind[4][i]}],body] } ; body
end

end


def testversion(r)
 raise "invalid version" if r!='9e31f0721ed6a26f0e10d731fdf72689'
end
  require 'compiled/inliner2_c'
