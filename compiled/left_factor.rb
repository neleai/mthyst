class Left_Factor < Traverser
	def first(s)
		s[0] if s.is_a? Seq
		s
	end
	def rest(s)
		Seq[s[1..(-1)]] if s.is_a? Seq
		Act[]
	end
	def merge(s1,s2)
		Seq[first(s1),Or[rest(s1),rest(s2)]]
	end
end

class Left_Factor < Traverser
def self.switchcb_Left_Factor1(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashLeft_Factor1=Hash.new{|h,k| h[k]=switchcb_Left_Factor1(k)}
def switchcbLeft_Factor1(e)
@@switchhashLeft_Factor1[e.class]
end
def clas_Left_Factorcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def empty_Left_Factorcb_1(bind)

end
def factor_Left_Factorcb_1(bind)
(first(bind[1]).to_yaml==first(bind[0]).to_yaml) || FAIL
end
def factor_Left_Factorcb_2(bind)
merge(bind[1],bind[0])
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
@src
end
def traverse_Left_Factorcb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Left_Factorcb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Left_Factorcb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Left_Factorcb_5(bind)
@src
end
def traverse_item_Left_Factorcb_1(bind)
@changed=true
end
def traverse_item_Left_Factorcb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Left_Factorcb_3(bind)
@changed=true
end
def traverse_item_Left_Factorcb_4(bind)
@changed=true
end
def visit_Left_Factorcb_1(bind)
Or
end
def visit_Left_Factorcb_2(bind)
(first(bind[3]).to_yaml==first(bind[5]).to_yaml) || FAIL
end
def visit_Left_Factorcb_3(bind)
merge(bind[3],bind[5])
end
def visit_Left_Factorcb_4(bind)
first(bind[3]).to_yaml==first(bind[5]).to_yaml
end
def visit_Left_Factorcb_5(bind)
bind[4]+[bind[3]]
end
def visit_Left_Factorcb_6(bind)
Or[bind[4]+[bind[3]]]
end

end


def testversion(r)
 raise "invalid version" if r!='2519071b1095d2e7de45085abc042925'
end
  require 'compiled/left_factor_c'
