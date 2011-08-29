class Left_Factor < Traverser
	def first(s)
		s[0] if s.is_a? Seq
		s
	end
	def rest(s)
		Seq[s[1..(-1)]] if s.is_a? Seq
		Act[]
	end
end

class Left_Factor < Traverser

def clas_Left_Factorcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def empty_Left_Factorcb_1(bind)

end
def factor_Left_Factorcb_1(bind)
(first(bind[1]).to_yaml==first(bind[0]).to_yaml) || FAIL
end
def factor_Left_Factorcb_2(bind)
Seq[first(bind[1]),Or[rest(bind[1]),rest(bind[0])]]
end
def factor_Left_Factorcb_3(bind)
first(bind[1]).to_yaml==first(bind[0]).to_yaml
end
def factor_Left_Factorcb_4(bind)
bind[2]+[bind[1]]
end
def factor_Left_Factorcb_5(bind)
Or[bind[2]+[bind[1]]]
end
def fails_Left_Factorcb_1(bind)
(false) || FAIL
end
def traverse_Left_Factorcb_1(bind)
@src.self
end
def traverse_Left_Factorcb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Left_Factorcb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Left_Factorcb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Left_Factorcb_5(bind)
@src.self
end
def traverse_item_Left_Factorcb_1(bind)
@changed=true
end
def traverse_item_Left_Factorcb_2(bind)
Array
end
def traverse_item_Left_Factorcb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Left_Factorcb_4(bind)
AmethystAST
end
def visit_Left_Factorcb_1(bind)
Or
end
def visit_Left_Factorcb_2(bind)
(first(bind[2]).to_yaml==first(bind[4]).to_yaml) || FAIL
end
def visit_Left_Factorcb_3(bind)
Seq[first(bind[2]),Or[rest(bind[2]),rest(bind[4])]]
end
def visit_Left_Factorcb_4(bind)
first(bind[2]).to_yaml==first(bind[4]).to_yaml
end
def visit_Left_Factorcb_5(bind)
bind[3]+[bind[2]]
end
def visit_Left_Factorcb_6(bind)
Or[bind[3]+[bind[2]]]
end

end


def testversion(r)
 raise "invalid version" if r!='26f32bc547bceb5f1ec87a6fb1419308'
end
  require 'compiled/left_factor_c'
