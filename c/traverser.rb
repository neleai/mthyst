class Traverser
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
@x; bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Traversercb_5(bind)
@src.self
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
[]
end
def traverse_item_Traversercb_5(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def traverse_item_Traversercb_6(bind)
AmethystAST
end

end




 require 'c/traverser_c'
