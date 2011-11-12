class Traverser_Clone2 < Amethyst

def traverse_Traverser_Clone2cb_1(bind)
_append(bind[0],bind[1])
end
def traverse_Traverser_Clone2cb_2(bind)
@changed
end
def traverse_Traverser_Clone2cb_3(bind)
src
end
def traverse_Traverser_Clone2cb_4(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Traverser_Clone2cb_5(bind)
bind[6]=[bind[6]]
end
def traverse_Traverser_Clone2cb_6(bind)
@changed=false
end
def traverse_Traverser_Clone2cb_7(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def traverse_Traverser_Clone2cb_8(bind)
_append(bind[8],bind[13])
end
def traverse_Traverser_Clone2cb_9(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def traverse_item_Traverser_Clone2cb_1(bind)
@changed=true
end
def traverse_item_Traverser_Clone2cb_2(bind)
bind[3]<<bind[5]
end
def traverse_item_Traverser_Clone2cb_3(bind)
_append(bind[4],bind[6])
end

end


 

class Visitor < Amethyst

def traverse_Visitorcb_1(bind)
_append(bind[0],bind[1])
end
def traverse_Visitorcb_2(bind)
(src.instance_variables).map{|v| src.instance_variable_get(v)}
end
def traverse_Visitorcb_3(bind)
bind[2]=[bind[2]]
end
def traverse_Visitorcb_4(bind)
_append(bind[4],bind[5])
end
def traverse_item_Visitorcb_1(bind)
_append(bind[2],bind[3])
end

end


def traverser_compiled_by
'ea067fdfa12d41c5b58f6a4e0cd87f03'
end
def traverser_source_hash
'102e4f870eb0748a3420fd0f2398e4a9'
end
def testversiontraverser(r)
 raise "invalid version" if r!=traverser_version
end
def traverser_version
'5fd58e84e2ddb21f156473a3632d922b'
end
  require 'compiled/traverser_c'
