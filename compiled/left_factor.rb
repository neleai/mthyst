class Left_Factor < Traverser_Clone2
	def merge(ary)
		return ary[0] if ary.size==1
		a=autovar.normalize
		[Seq[Bind[a,first(ary[0])],Or[*(ary.map{|e| rest(e,binds(e,a))})]]]
	end
end

class Left_Factor < Traverser_Clone2

def binds_Left_Factorcb_1(bind)
Bind[src.name,bind[7]]
end
def binds_Left_Factorcb_2(bind)
_append(bind[13],bind[14])
end
def factor_Left_Factorcb_1(bind)
(bind[1]==first(bind[0])) || FAIL
end
def factor_Left_Factorcb_2(bind)
bind[3]+[bind[0]]
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
def first_Left_Factorcb_1(bind)
bind[1]=[bind[1]]
end
def first_Left_Factorcb_2(bind)
_append(bind[4],bind[5])
end
def first_Left_Factorcb_3(bind)
src.expr
end
def first_Left_Factorcb_4(bind)
_append(bind[11],bind[12])
end
def rest_Left_Factorcb_1(bind)
Seq[[bind[7]]+bind[6]]
end
def traverse_Left_Factorcb_1(bind)
_append(bind[0],bind[1])
end
def traverse_Left_Factorcb_2(bind)
@changed
end
def traverse_Left_Factorcb_3(bind)
src
end
def traverse_Left_Factorcb_4(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Left_Factorcb_5(bind)
bind[6]=[bind[6]]
end
def traverse_Left_Factorcb_6(bind)
@changed=false
end
def traverse_Left_Factorcb_7(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def traverse_Left_Factorcb_8(bind)
_append(bind[8],bind[13])
end
def traverse_Left_Factorcb_9(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def traverse_item_Left_Factorcb_1(bind)
@changed=true
end
def traverse_item_Left_Factorcb_2(bind)
bind[5]<<bind[7]
end
def traverse_item_Left_Factorcb_3(bind)
_append(bind[6],bind[8])
end
def visit_Left_Factorcb_1(bind)
[bind[2]]
end
def visit_Left_Factorcb_2(bind)
first(bind[2])
end
def visit_Left_Factorcb_3(bind)
(bind[4]==first(bind[6])) || FAIL
end
def visit_Left_Factorcb_4(bind)
bind[3]+[bind[6]]
end
def visit_Left_Factorcb_5(bind)
bind[4]==first(bind[6])
end
def visit_Left_Factorcb_6(bind)
bind[5]+merge(bind[3])
end
def visit_Left_Factorcb_7(bind)
first(bind[6])
end
def visit_Left_Factorcb_8(bind)
[bind[6]]
end
def visit_Left_Factorcb_9(bind)
Or[*(bind[5]+merge(bind[3]))]
end

end


def left_factor_compiled_by
'3dcf104ef6aa91fcbe86afd37aade00c'
end
def left_factor_source_hash
'69c45f0c350eb4d1ca0a4f019cc7afa8'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
'052b628bf274aaff52ed931b614c186a'
end
  require 'compiled/left_factor_c'
