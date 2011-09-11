class Traverser_Clone2 < Amethyst
def self.switchcb_Traverser_Clone21(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashTraverser_Clone21=Hash.new{|h,k| h[k]=switchcb_Traverser_Clone21(k)}
def switchcbTraverser_Clone21(e)
@@switchhashTraverser_Clone21[e.class]
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

end


 

class Visitor < Amethyst
def self.switchcb_Visitor2(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashVisitor2=Hash.new{|h,k| h[k]=switchcb_Visitor2(k)}
def switchcbVisitor2(e)
@@switchhashVisitor2[e.class]
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
def traverse_item_Visitorcb_1(bind)
_append(bind[2],bind[3])
end

end


def traverser_compiled_by
'85283a6ee405639742e13d1a80f73922'
end
def traverser_source_hash
'22a0094158fcb42ea5b9d2d2e863085b'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'641f542d2a6cfe9a007c67b441a90214'
end
  require 'compiled/traverser_c'
