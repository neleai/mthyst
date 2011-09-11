class Left_Factor < Traverser_Clone2
	def merge(ary)
		return ary[0] if ary.size==1
		a=autovar.normalize
		[Seq[_Bind(a,first(ary[0])),Or[*(ary.map{|e| rest(e,binds(e,a))})]]]
	end
end

class Left_Factor < Traverser_Clone2
def self.switchcb_Left_Factor1(e)
return 0 if e<=Seq
return 1 if e<=Bind
return 2 if e<=Object
return 3
end
@@switchhashLeft_Factor1=Hash.new{|h,k| h[k]=switchcb_Left_Factor1(k)}
def switchcbLeft_Factor1(e)
@@switchhashLeft_Factor1[e.class]
end
def self.switchcb_Left_Factor2(e)
return 0 if e<=Seq
return 1 if e<=Object
return 2
end
@@switchhashLeft_Factor2=Hash.new{|h,k| h[k]=switchcb_Left_Factor2(k)}
def switchcbLeft_Factor2(e)
@@switchhashLeft_Factor2[e.class]
end
def self.switchcb_Left_Factor3(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashLeft_Factor3=Hash.new{|h,k| h[k]=switchcb_Left_Factor3(k)}
def switchcbLeft_Factor3(e)
@@switchhashLeft_Factor3[e.class]
end
def self.switchcb_Left_Factor4(e)
return 0 if e<=Seq
return 1 if e<=Bind
return 2 if e<=Object
return 3
end
@@switchhashLeft_Factor4=Hash.new{|h,k| h[k]=switchcb_Left_Factor4(k)}
def switchcbLeft_Factor4(e)
@@switchhashLeft_Factor4[e.class]
end
def binds_Left_Factorcb_1(bind)
bind[1]=[bind[1]]
end
def binds_Left_Factorcb_2(bind)
@src.expr
end
def binds_Left_Factorcb_3(bind)
_Bind(@src.name,bind[8])
end
def clas_Left_Factorcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
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
def fails_Left_Factorcb_1(bind)
(false) || FAIL
end
def rest_Left_Factorcb_1(bind)
_append(bind[3],bind[4])
end
def rest_Left_Factorcb_2(bind)
Seq[[bind[6]]+bind[5]]
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
bind[3]+[bind[6]]
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
'85283a6ee405639742e13d1a80f73922'
end
def left_factor_source_hash
'735fd68abfa48b088273bd588cc38a2c'
end
def testversionleft_factor(r)
 raise "invalid version" if r!=left_factor_version
end
def left_factor_version
'e374d59298f9db26f5afae16da75665b'
end
  require 'compiled/left_factor_c'
