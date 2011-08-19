class Traverser < Amethyst
	def replace_by
	end
end
class Traverser < Amethyst
def traverse_Traversercb_1(bind)
[]
end
def traverse_Traversercb_10(bind)

end
def traverse_Traversercb_11(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Traversercb_12(bind)
_append(bind[:autovar_2],bind[:autovar_7])
end
def traverse_Traversercb_13(bind)
@src.self
end
def traverse_Traversercb_2(bind)
[]
end
def traverse_Traversercb_3(bind)
[]
end
def traverse_Traversercb_4(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def traverse_Traversercb_5(bind)
@src.self
end
def traverse_Traversercb_6(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Traversercb_7(bind)
bind[:autovar_4]=[bind[:autovar_4]]
end
def traverse_Traversercb_8(bind)

end
def traverse_Traversercb_9(bind)
[]
end
def traverse_item_Traversercb_1(bind)
[]
end
def traverse_item_Traversercb_2(bind)
@changed=true
end
def traverse_item_Traversercb_3(bind)
Array
end
def traverse_item_Traversercb_4(bind)

end
def traverse_item_Traversercb_5(bind)
[]
end
def traverse_item_Traversercb_6(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def traverse_item_Traversercb_7(bind)
AmethystAST
end
def traverse_item_Traversercb_8(bind)

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


 require 'c/traverser_c'
