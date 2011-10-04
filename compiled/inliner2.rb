class DetectCalls < Visitor
def self.switchcb_DetectCalls1(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
end
@@switchhashDetectCalls1=Hash.new{|h,k| h[k]=switchcb_DetectCalls1(k)}
def switchcbDetectCalls1(e)
@@switchhashDetectCalls1[e]
end
def clas_DetectCallscb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_DetectCallscb_1(bind)
(false) || FAIL
end
def root_DetectCallscb_1(bind)
@calls={}
end
def root_DetectCallscb_2(bind)
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
_append(bind[4],bind[5])
end
def visit_DetectCallscb_1(bind)
@calls[bind[1]]=true 
end

end


class Inliner2 < Traverser_Clone2
def self.switchcb_Inliner22(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
end
@@switchhashInliner22=Hash.new{|h,k| h[k]=switchcb_Inliner22(k)}
def switchcbInliner22(e)
@@switchhashInliner22[e]
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
@src.name
end
def root_Inliner2cb_3(bind)
@src.args
end
def root_Inliner2cb_4(bind)
@src.locals
end
def root_Inliner2cb_5(bind)
@src.body
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
def self.switchcb_Replace_Super3(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
end
@@switchhashReplace_Super3=Hash.new{|h,k| h[k]=switchcb_Replace_Super3(k)}
def switchcbReplace_Super3(e)
@@switchhashReplace_Super3[e]
end
def clas_Replace_Supercb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Replace_Supercb_1(bind)
(false) || FAIL
end
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
@src
end
def traverse_Replace_Supercb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Replace_Supercb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Replace_Supercb_5(bind)
@changed=false
end
def traverse_Replace_Supercb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Replace_Supercb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
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
'ae7f7ff83d1b1f766d486f002118d4a4'
end
def inliner2_source_hash
'e70b868139b66428259e6a338880dd0c'
end
def testversioninliner2(r)
 raise "invalid version" if r!=inliner2_version
end
def inliner2_version
'b14e0134f00bee3a68dc281c33dd4412'
end
  require 'compiled/inliner2_c'
