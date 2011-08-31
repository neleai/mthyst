class Traverser_Clone < Amethyst
def self.switchcb_Traverser_Clone1(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashTraverser_Clone1=Hash.new{|h,k| h[k]=switchcb_Traverser_Clone1(k)}
def switchcbTraverser_Clone1(e)
@@switchhashTraverser_Clone1[e.class]
end
def clas_Traverser_Clonecb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Traverser_Clonecb_1(bind)
(false) || FAIL
end
def traverse_Traverser_Clonecb_1(bind)
@src.clone
end
def traverse_Traverser_Clonecb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Traverser_Clonecb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Traverser_Clonecb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Traverser_Clonecb_5(bind)
bind[0].normalize
end
def traverse_item_Traverser_Clonecb_1(bind)
@changed=true
end
def traverse_item_Traverser_Clonecb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Traverser_Clonecb_3(bind)
@changed=true
end
def traverse_item_Traverser_Clonecb_4(bind)
@changed=true
end

end


class Traverser < Amethyst
def self.switchcb_Traverser2(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashTraverser2=Hash.new{|h,k| h[k]=switchcb_Traverser2(k)}
def switchcbTraverser2(e)
@@switchhashTraverser2[e.class]
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
def self.switchcb_Traverser_Clone23(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashTraverser_Clone23=Hash.new{|h,k| h[k]=switchcb_Traverser_Clone23(k)}
def switchcbTraverser_Clone23(e)
@@switchhashTraverser_Clone23[e.class]
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
(bind[2]||=bind[1].clone;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
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


 

class Detector < Traverser
def self.switchcb_Detector4(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetector4=Hash.new{|h,k| h[k]=switchcb_Detector4(k)}
def switchcbDetector4(e)
@@switchhashDetector4[e.class]
end
def clas_Detectorcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Detectorcb_1(bind)
(false) || FAIL
end
def root_Detectorcb_1(bind)
@detected=[]
end
def root_Detectorcb_2(bind)
@detected
end
def traverse_Detectorcb_1(bind)
@src
end
def traverse_Detectorcb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Detectorcb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Detectorcb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Detectorcb_5(bind)
@src
end
def traverse_item_Detectorcb_1(bind)
@changed=true
end
def traverse_item_Detectorcb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Detectorcb_3(bind)
@changed=true
end
def traverse_item_Detectorcb_4(bind)
@changed=true
end
def visit_Detectorcb_1(bind)
@detected<<bind[0]
end
def visit_Detectorcb_2(bind)
@src
end

end


def traverser_compiled_by
'42'
end
def traverser_source_hash
'd70386104d855f1aacbae5cf78a72adf'
end
def testversiontraverser(r)
 raise "invalid version" if r!='a316229a7ac5c4b692076103b4874586'
end
  require 'compiled/traverser_c'
