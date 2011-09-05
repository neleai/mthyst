class Renamer2 < Traverser_Clone2
def self.switchcb_Renamer21(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashRenamer21=Hash.new{|h,k| h[k]=switchcb_Renamer21(k)}
def switchcbRenamer21(e)
@@switchhashRenamer21[e.class]
end
def clas_Renamer2cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Renamer2cb_1(bind)
(false) || FAIL
end
def root_Renamer2cb_1(bind)
Rule
end
def root_Renamer2cb_2(bind)
@newvars={}
end
def traverse_Renamer2cb_1(bind)
@changed
end
def traverse_Renamer2cb_2(bind)
@src
end
def traverse_Renamer2cb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Renamer2cb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Renamer2cb_5(bind)
@changed=false
end
def traverse_Renamer2cb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Renamer2cb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Renamer2cb_1(bind)
@changed=true
end
def traverse_item_Renamer2cb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Renamer2cb_3(bind)
@changed=true
end
def traverse_item_Renamer2cb_4(bind)
@changed=true
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


class DetectCalls < Visitor
def self.switchcb_DetectCalls2(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetectCalls2=Hash.new{|h,k| h[k]=switchcb_DetectCalls2(k)}
def switchcbDetectCalls2(e)
@@switchhashDetectCalls2[e.class]
end
def clas_DetectCallscb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_DetectCallscb_1(bind)
(false) || FAIL
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
(@src.instance_variables).map{|v| @src.instance_variable_get(v)}
end
def traverse_DetectCallscb_2(bind)
bind[0]=[bind[0]]
end
def traverse_DetectCallscb_3(bind)
_append(bind[2],bind[3])
end
def traverse_item_DetectCallscb_1(bind)
_append(bind[2],bind[3])
end
def visit_DetectCallscb_1(bind)
Apply
end
def visit_DetectCallscb_2(bind)
@calls[bind[1]]=true 
end

end


class Inliner2 < Traverser_Clone2
def self.switchcb_Inliner23(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashInliner23=Hash.new{|h,k| h[k]=switchcb_Inliner23(k)}
def switchcbInliner23(e)
@@switchhashInliner23[e.class]
end
def clas_Inliner2cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Inliner2cb_1(bind)
(false) || FAIL
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
@changed
end
def traverse_Inliner2cb_2(bind)
@src
end
def traverse_Inliner2cb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Inliner2cb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Inliner2cb_5(bind)
@changed=false
end
def traverse_Inliner2cb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Inliner2cb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Inliner2cb_1(bind)
@changed=true
end
def traverse_item_Inliner2cb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Inliner2cb_3(bind)
@changed=true
end
def traverse_item_Inliner2cb_4(bind)
@changed=true
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
body=deep_clone(@body);puts bind[4].inspect; bind[4].each_index{|i| body=Seq[_Bind(@args[i],bind[4][i]),body] } ; body
end

end


def inliner2_compiled_by
'1f373951c1043b8d86f52b58411497d4'
end
def inliner2_source_hash
'b3a4aa983f8b01b3e605f552935c42e9'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
'646e79f00c8b78d9112565a3ca77b291'
end
  require 'compiled/inliner2_c'
