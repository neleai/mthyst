class Traverser < Amethyst
	def replace_by
	end
end
class Traverser < Amethyst

def clas_Traversercb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
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
Array
end
def traverse_item_Traversercb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Traversercb_4(bind)
AmethystAST
end

end


class Detector < Traverser

def clas_Detectorcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
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
Array
end
def traverse_item_Detectorcb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Detectorcb_4(bind)
AmethystAST
end
def visit_Detectorcb_1(bind)
@detected<<bind[0]
end
def visit_Detectorcb_2(bind)
@src
end

end


def testversion(r)
 raise "invalid version" if r!='8cb150198a0074c8649162e3b59c37c7'
end
  require 'compiled/traverser_c'
