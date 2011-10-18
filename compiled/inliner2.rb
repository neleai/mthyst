class DetectCalls < Visitor

def root_DetectCallscb_1(bind)
@calls={}
end
def root_DetectCallscb_2(bind)
@calls
end
def traverse_DetectCallscb_1(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end
def traverse_DetectCallscb_2(bind)
bind[0]=[bind[0]]
end
def traverse_DetectCallscb_3(bind)
_append(bind[2],bind[3])
end
def traverse_item_DetectCallscb_1(bind)
_append(bind[4],bind[5])
end
def visit_DetectCallscb_1(bind)
@calls[bind[1]]=true 
end

end


class Inliner2 < Traverser_Clone2

def root_Inliner2cb_1(bind)
bind[2]=[bind[2]]
end
def root_Inliner2cb_2(bind)
src.name
end
def root_Inliner2cb_3(bind)
src.args
end
def root_Inliner2cb_4(bind)
src.locals
end
def root_Inliner2cb_5(bind)
src.body
end
def root_Inliner2cb_6(bind)
@name=bind[4];@args=bind[5];@body=bind[6] 
end
def root_Inliner2cb_7(bind)
bind[7]=[bind[7]]
end
def traverse_Inliner2cb_1(bind)
@changed
end
def traverse_Inliner2cb_2(bind)
src
end
def traverse_Inliner2cb_3(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Inliner2cb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Inliner2cb_5(bind)
@changed=false
end
def traverse_Inliner2cb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def traverse_Inliner2cb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def traverse_item_Inliner2cb_1(bind)
@changed=true
end
def traverse_item_Inliner2cb_2(bind)
bind[5]<<bind[6]
end
def visit_Inliner2cb_1(bind)
(bind[1]==@name) || FAIL
end
def visit_Inliner2cb_2(bind)
_append(bind[2],bind[3])
end
def visit_Inliner2cb_3(bind)
body=deep_clone(@body); bind[4].each_index{|i| body=Seq[_Bind(@args[i],bind[4][i]),body] } ; body
end

end


class Replace_Super < Traverser_Clone2

def root_Replace_Supercb_1(bind)
@name=bind[0];
end
def root_Replace_Supercb_2(bind)
bind[2]=[bind[2]]
end
def traverse_Replace_Supercb_1(bind)
@changed
end
def traverse_Replace_Supercb_2(bind)
src
end
def traverse_Replace_Supercb_3(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Replace_Supercb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Replace_Supercb_5(bind)
@changed=false
end
def traverse_Replace_Supercb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def traverse_Replace_Supercb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def traverse_item_Replace_Supercb_1(bind)
@changed=true
end
def traverse_item_Replace_Supercb_2(bind)
bind[5]<<bind[6]
end
def visit_Replace_Supercb_1(bind)
(bind[1]=="super") || FAIL
end
def visit_Replace_Supercb_2(bind)
_append(bind[2],bind[3])
end
def visit_Replace_Supercb_3(bind)
Apply[*([@name]+bind[4])] 
end

end


def inliner2_compiled_by
'46d12497faafe574a40390f3bb9e7223'
end
def inliner2_source_hash
'e70b868139b66428259e6a338880dd0c'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
'd217d1e9793af332777c7338711b03b4'
end
  require 'compiled/inliner2_c'
