class Traverser < Amethyst
	def replace_by
	end
end
class Traverser < Amethyst
def traverse_Traversercb_1(bind)
@src.self
end
def traverse_Traversercb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Traversercb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Traversercb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Traversercb_5(bind)
@src.self
end
def traverse_item_Traversercb_1(bind)
@changed=true
end
def traverse_item_Traversercb_2(bind)
Array
end
def traverse_item_Traversercb_3(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def traverse_item_Traversercb_4(bind)
[]
end
def traverse_item_Traversercb_5(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def traverse_item_Traversercb_6(bind)
AmethystAST
end
def traverse_item_Traversercb_7(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end

end


class Detector < Traverser
def root_Detectorcb_1(bind)
@detected=[]
end
def root_Detectorcb_2(bind)
@detected
end
def visit_Detectorcb_1(bind)
@detected<<bind[:it_1]
end
def visit_Detectorcb_2(bind)
@src.self
end

end


 require 'compiled/traverser_c'
