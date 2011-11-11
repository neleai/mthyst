class Traverser_Clone2 < Amethyst

def traverse_Traverser_Clone2cb_1(bind)
@changed
end
def traverse_Traverser_Clone2cb_2(bind)
src
end
def traverse_Traverser_Clone2cb_3(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Traverser_Clone2cb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Traverser_Clone2cb_5(bind)
@changed=false
end
def traverse_Traverser_Clone2cb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def traverse_Traverser_Clone2cb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def traverse_item_Traverser_Clone2cb_1(bind)
@changed=true
end
def traverse_item_Traverser_Clone2cb_2(bind)
bind[5]<<bind[6]
end

end


 

class Visitor < Amethyst

def traverse_Visitorcb_1(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end
def traverse_Visitorcb_2(bind)
bind[0]=[bind[0]]
end
def traverse_Visitorcb_3(bind)
_append(bind[2],bind[3])
end
def traverse_item_Visitorcb_1(bind)
_append(bind[4],bind[5])
end

end


def traverser_compiled_by
'0558c9b3467bf03dd9f01118787d8e97'
end
def traverser_source_hash
'102e4f870eb0748a3420fd0f2398e4a9'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'86a6108282d062b90193dcfbae01de1a'
end
  require 'compiled/traverser_c'
