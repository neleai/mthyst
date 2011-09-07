class Left_Factor < Traverser_Clone2
	def first(s)
		s[0] if s.is_a? Seq
		s
	end
	def rest(s)
		Seq[s[1..(-1)]] if s.is_a? Seq
		Act[]
	end
	def merge(ary)
		Seq[first(ary[0]),Or[*(ary.map{|e| rest(e)})]]
	end
end

class Left_Factor < Traverser_Clone2
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
def factor_Left_Factorcb_1(bind)
(bind[1]==first(bind[0])) || FAIL
end
def factor_Left_Factorcb_2(bind)
bind[3]+bind[0]
end
def factor_Left_Factorcb_3(bind)
bind[1]==first(bind[0])
end
def factor_Left_Factorcb_4(bind)
bind[2]+merge(bind[3])
end
def factor_Left_Factorcb_5(bind)
first(bind[0])
end
def factor_Left_Factorcb_6(bind)
[bind[0]]
end
def factor_Left_Factorcb_7(bind)
Or[*(bind[2]+merge(bind[3]))]
end
def fails_Left_Factorcb_1(bind)
(false) || FAIL
end
def traverse_Left_Factorcb_1(bind)
@changed
end
def traverse_Left_Factorcb_2(bind)
@src
end
def traverse_Left_Factorcb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Left_Factorcb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Left_Factorcb_5(bind)
@changed=false
end
def traverse_Left_Factorcb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Left_Factorcb_7(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Left_Factorcb_1(bind)
@changed=true
end
def traverse_item_Left_Factorcb_2(bind)
bind[3]<<bind[4]
end
def visit_Left_Factorcb_1(bind)
Or
end
def visit_Left_Factorcb_10(bind)
Or[*(bind[5]+merge(bind[3]))]
end
def visit_Left_Factorcb_2(bind)
[bind[2]]
end
def visit_Left_Factorcb_3(bind)
first(bind[2])
end
def visit_Left_Factorcb_4(bind)
(bind[4]==first(bind[6])) || FAIL
end
def visit_Left_Factorcb_5(bind)
bind[3]+bind[6]
end
def visit_Left_Factorcb_6(bind)
bind[4]==first(bind[6])
end
def visit_Left_Factorcb_7(bind)
bind[5]+merge(bind[3])
end
def visit_Left_Factorcb_8(bind)
first(bind[6])
end
def visit_Left_Factorcb_9(bind)
[bind[6]]
end

end


def left_factor_compiled_by
'6165b5d8479cabffca2b2b972b898a7c'
end
def left_factor_source_hash
'353e306385d54bc9b59408342a2d4d83'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
'48eda1628c998b2c137dbb521c3a8e3a'
end
  require 'compiled/left_factor_c'
