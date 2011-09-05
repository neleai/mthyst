class Traverser < Amethyst
def self.switchcb_Traverser1(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashTraverser1=Hash.new{|h,k| h[k]=switchcb_Traverser1(k)}
def switchcbTraverser1(e)
@@switchhashTraverser1[e.class]
end
def clas_Traversercb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Traversercb_1(bind)
(false) || FAIL
end
def traverse_Traversercb_1(bind)
@src
end
def traverse_Traversercb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Traversercb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Traversercb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Traversercb_5(bind)
@src
end
def traverse_item_Traversercb_1(bind)
@changed=true
end
def traverse_item_Traversercb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Traversercb_3(bind)
@changed=true
end
def traverse_item_Traversercb_4(bind)
@changed=true
end

end


class Traverser_Clone2 < Amethyst
def self.switchcb_Traverser_Clone22(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashTraverser_Clone22=Hash.new{|h,k| h[k]=switchcb_Traverser_Clone22(k)}
def switchcbTraverser_Clone22(e)
@@switchhashTraverser_Clone22[e.class]
end
def clas_Traverser_Clone2cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Traverser_Clone2cb_1(bind)
(false) || FAIL
end
def traverse_Traverser_Clone2cb_1(bind)
@changed
end
def traverse_Traverser_Clone2cb_2(bind)
@src
end
def traverse_Traverser_Clone2cb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Traverser_Clone2cb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Traverser_Clone2cb_5(bind)
@changed=false
end
def traverse_Traverser_Clone2cb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Traverser_Clone2cb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Traverser_Clone2cb_1(bind)
@changed=true
end
def traverse_item_Traverser_Clone2cb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Traverser_Clone2cb_3(bind)
@changed=true
end
def traverse_item_Traverser_Clone2cb_4(bind)
@changed=true
end

end


 

class Visitor < Amethyst
def self.switchcb_Visitor3(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashVisitor3=Hash.new{|h,k| h[k]=switchcb_Visitor3(k)}
def switchcbVisitor3(e)
@@switchhashVisitor3[e.class]
end
def clas_Visitorcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Visitorcb_1(bind)
(false) || FAIL
end
def traverse_Visitorcb_1(bind)
(@src.instance_variables).map{|v| @src.instance_variable_get(v)}
end
def traverse_Visitorcb_2(bind)
bind[0]=[bind[0]]
end
def traverse_Visitorcb_3(bind)
_append(bind[2],bind[3])
end
def traverse_item_Visitorcb_1(bind)
_append(bind[2],bind[3])
end

end


def traverser_compiled_by
'cc339a8057219f5a30f8d8ec82aff68c'
end
def traverser_source_hash
'63c18902da89e1b2234d417503a9d719'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'7a596ca41749da7db2d467b3ede272b4'
end
  require 'compiled/traverser_c'
