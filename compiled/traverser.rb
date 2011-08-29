class Traverser < Amethyst
	def replace_by
	end
end
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
def empty_Traversercb_1(bind)

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


class Detector < Traverser
def self.switchcb_Detector2(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDetector2=Hash.new{|h,k| h[k]=switchcb_Detector2(k)}
def switchcbDetector2(e)
@@switchhashDetector2[e.class]
end
def clas_Detectorcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def empty_Detectorcb_1(bind)

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


def testversion(r)
 raise "invalid version" if r!='1e082128b558509307ef00caf78349f2'
end
  require 'compiled/traverser_c'
