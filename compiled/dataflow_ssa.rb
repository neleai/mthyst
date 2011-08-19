class Dataflow < Traverser
	attr_accessor :ssanums,:oldssanums,:edges
	def initialize
		@edges=Oriented_Graph.new
		@marked=[]
		@ssanums=Hash.new(0)
		@oldssanums=Hash.new(0)
	end
	def ssanum(var)
		return var unless var.is_a? Local
		var.ssano=oldssanums[var]
		[var,oldssanums[var]]
	end
	def newssanum(var)
		ssanums[var]+=1
		oldssanums[var]=ssanums[var]
		ssanum(var)
	end
	def many_end(prev)
	  ssanums.each{|var,num|
      if prev[var]!=num
        edges.add([var[0],ssanums[var]],[var[0],prev[var]] )
      end
    }
	end
	def set_end(exp)
		name=exp.name
		exp=exp.expr while exp.expr.is_a?(Bind) 
	  if exp.expr.is_a?(Local) 
      o=ssanum(exp.expr)
      n=newssanum(name)
			edges.add(exp,n)
      edges.add(o,n)
    else
      edges.add(exp.expr,exp)
      n=newssanum(name)
      edges.add(exp,n)
    end
	end
	def or_end(join)
   ssanums.clone.each{|k,v|
      u=[]
      join.each{|s| u<<s[k]}
      if u.uniq.size>1
        n=newssanum(k.clone)
        u.each{|v| edges.add([k,v],n)}
      end
    }
	end
end
class Local
	def ssaname
		[self,ssano]	
	end
end

class CloneLocals < Traverser
def clas_CloneLocalscb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_CloneLocalscb_1(bind)
@src.self
end
def root_CloneLocalscb_2(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def root_CloneLocalscb_3(bind)
Rule
end
def root_CloneLocalscb_4(bind)

end
def traverse_CloneLocalscb_1(bind)
@src.self
end
def traverse_CloneLocalscb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_CloneLocalscb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_CloneLocalscb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_CloneLocalscb_5(bind)
@src.self
end
def traverse_item_CloneLocalscb_1(bind)
@changed=true
end
def traverse_item_CloneLocalscb_2(bind)
Array
end
def traverse_item_CloneLocalscb_3(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def traverse_item_CloneLocalscb_4(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def traverse_item_CloneLocalscb_5(bind)
AmethystAST
end
def traverse_item_CloneLocalscb_6(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_CloneLocalscb_1(bind)
Local
end
def visit_CloneLocalscb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_CloneLocalscb_3(bind)
@src.self.clone
end

end


class Dataflow < Traverser
def clas_Dataflowcb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_Dataflowcb_1(bind)
@src.self
end
def root_Dataflowcb_10(bind)
@src.reachable=@edges.reverse.reachable(@marked+[ssanum(@src.body[-1])]); @src.cfg=@edges; [@edges,@marked+[@src.body[-1]]]
end
def root_Dataflowcb_11(bind)
@src.self
end
def root_Dataflowcb_2(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def root_Dataflowcb_3(bind)
Rule
end
def root_Dataflowcb_4(bind)

end
def root_Dataflowcb_5(bind)
@bnding=@src.bnding
end
def root_Dataflowcb_6(bind)
@src.args
end
def root_Dataflowcb_7(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def root_Dataflowcb_8(bind)

end
def root_Dataflowcb_9(bind)
bind[:var_1].each{|v| ssanum(v)}
end
def traverse_Dataflowcb_1(bind)
@src.self
end
def traverse_Dataflowcb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Dataflowcb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Dataflowcb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Dataflowcb_5(bind)
@src.self
end
def traverse_item_Dataflowcb_1(bind)
@changed=true
end
def traverse_item_Dataflowcb_2(bind)
Array
end
def traverse_item_Dataflowcb_3(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def traverse_item_Dataflowcb_4(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def traverse_item_Dataflowcb_5(bind)
AmethystAST
end
def traverse_item_Dataflowcb_6(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def vars_in_Dataflowcb_1(bind)
bind[:ary_1]=[]
end
def vars_in_Dataflowcb_10(bind)
@src.self
end
def vars_in_Dataflowcb_11(bind)
_append(bind[:ary_1],bind[:autovar_6])
end
def vars_in_Dataflowcb_12(bind)
@marked<<@src.self
end
def vars_in_Dataflowcb_13(bind)
Result
end
def vars_in_Dataflowcb_14(bind)
@src.self
end
def vars_in_Dataflowcb_15(bind)
_append(bind[:ary_1],bind[:autovar_8])
end
def vars_in_Dataflowcb_16(bind)
Strin
end
def vars_in_Dataflowcb_17(bind)
_append(bind[:ary_1],bind[:autovar_10])
end
def vars_in_Dataflowcb_18(bind)
Args
end
def vars_in_Dataflowcb_19(bind)
_append(bind[:ary_1],bind[:autovar_12])
end
def vars_in_Dataflowcb_2(bind)
Global
end
def vars_in_Dataflowcb_20(bind)
Bind
end
def vars_in_Dataflowcb_21(bind)
@src.name
end
def vars_in_Dataflowcb_22(bind)
bind[:autovar_14]=[bind[:autovar_14]]
end
def vars_in_Dataflowcb_23(bind)
_append(bind[:ary_1],bind[:autovar_15])
end
def vars_in_Dataflowcb_24(bind)
Local
end
def vars_in_Dataflowcb_25(bind)
@src.self
end
def vars_in_Dataflowcb_26(bind)
_append(bind[:ary_1],bind[:autovar_17])
end
def vars_in_Dataflowcb_3(bind)
@src.self
end
def vars_in_Dataflowcb_4(bind)
_append(bind[:ary_1],bind[:autovar_2])
end
def vars_in_Dataflowcb_5(bind)
@marked<<@src.self
end
def vars_in_Dataflowcb_6(bind)
Act
end
def vars_in_Dataflowcb_7(bind)
@src.self
end
def vars_in_Dataflowcb_8(bind)
_append(bind[:ary_1],bind[:autovar_4])
end
def vars_in_Dataflowcb_9(bind)
Key
end
def visit_Dataflowcb_1(bind)
Apply
end
def visit_Dataflowcb_10(bind)
oldssanums.clone
end
def visit_Dataflowcb_11(bind)
@oldssanums=bind[:old_1].clone
end
def visit_Dataflowcb_12(bind)
bind[:join_1]<<oldssanums.clone
end
def visit_Dataflowcb_13(bind)
or_end(bind[:join_1])
end
def visit_Dataflowcb_14(bind)
@src.self
end
def visit_Dataflowcb_15(bind)
Many
end
def visit_Dataflowcb_16(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dataflowcb_17(bind)
ssanums.clone
end
def visit_Dataflowcb_18(bind)
many_end(bind[:prev_1])
end
def visit_Dataflowcb_19(bind)
@src.self
end
def visit_Dataflowcb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dataflowcb_20(bind)
Pass
end
def visit_Dataflowcb_21(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dataflowcb_22(bind)
@marked<<ssanum(@src.var)
end
def visit_Dataflowcb_23(bind)
@src.self
end
def visit_Dataflowcb_24(bind)
Act
end
def visit_Dataflowcb_25(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dataflowcb_26(bind)
@marked<<bind[:this_1] if @src.pred || !@src.pure
end
def visit_Dataflowcb_27(bind)
@src.ary
end
def visit_Dataflowcb_28(bind)
bind[:autovar_8]=[bind[:autovar_8]]
end
def visit_Dataflowcb_29(bind)
bind[:var_1].each{|v| edges.add(ssanum(v),bind[:this_1]); edges.add(bind[:this_1],newssanum(v.clone));}; bind[:this_1]
end
def visit_Dataflowcb_3(bind)
@src.self
end
def visit_Dataflowcb_30(bind)
Bind
end
def visit_Dataflowcb_31(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dataflowcb_32(bind)
set_end(@src.self) 
end
def visit_Dataflowcb_33(bind)
@src.self
end
def visit_Dataflowcb_34(bind)
Result
end
def visit_Dataflowcb_35(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dataflowcb_36(bind)
@src.vars
end
def visit_Dataflowcb_37(bind)
bind[:autovar_12]=[bind[:autovar_12]]
end
def visit_Dataflowcb_38(bind)
bind[:var_1].each{|w| @edges.add(ssanum(w),bind[:this_1]) } ; bind[:this_1]
end
def visit_Dataflowcb_4(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def visit_Dataflowcb_5(bind)
bind[:var_1].each{|v| @marked<<ssanum(v)}
end
def visit_Dataflowcb_6(bind)
@src.self
end
def visit_Dataflowcb_7(bind)
Or
end
def visit_Dataflowcb_8(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dataflowcb_9(bind)
[]
end

end


class Dead_Code_Deleter3 < Traverser
def clas_Dead_Code_Deleter3cb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def root_Dead_Code_Deleter3cb_1(bind)
@src.self
end
def root_Dead_Code_Deleter3cb_2(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def root_Dead_Code_Deleter3cb_3(bind)
Rule
end
def root_Dead_Code_Deleter3cb_4(bind)

end
def root_Dead_Code_Deleter3cb_5(bind)
@reachable=@src.reachable
end
def root_Dead_Code_Deleter3cb_6(bind)
@src.reachable=nil;@src.cfg=nil
end
def root_Dead_Code_Deleter3cb_7(bind)
@src.self
end
def traverse_Dead_Code_Deleter3cb_1(bind)
@src.self
end
def traverse_Dead_Code_Deleter3cb_2(bind)
(@src.self.instance_variables).map{|v| [v,@src.self.instance_variable_get(v)] }
end
def traverse_Dead_Code_Deleter3cb_3(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def traverse_Dead_Code_Deleter3cb_4(bind)
bind[:this_1].instance_variable_set(bind[:key_1],bind[:it_1])
end
def traverse_Dead_Code_Deleter3cb_5(bind)
@src.self
end
def traverse_item_Dead_Code_Deleter3cb_1(bind)
@changed=true
end
def traverse_item_Dead_Code_Deleter3cb_2(bind)
Array
end
def traverse_item_Dead_Code_Deleter3cb_3(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def traverse_item_Dead_Code_Deleter3cb_4(bind)
_append(bind[:autovar_2],bind[:autovar_3])
end
def traverse_item_Dead_Code_Deleter3cb_5(bind)
AmethystAST
end
def traverse_item_Dead_Code_Deleter3cb_6(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dead_Code_Deleter3cb_1(bind)
Act
end
def visit_Dead_Code_Deleter3cb_10(bind)
Result
end
def visit_Dead_Code_Deleter3cb_11(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dead_Code_Deleter3cb_12(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_13(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter3cb_14(bind)
Local
end
def visit_Dead_Code_Deleter3cb_15(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dead_Code_Deleter3cb_16(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_17(bind)
@reachable[bind[:this_1].ssaname] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter3cb_2(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dead_Code_Deleter3cb_3(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_4(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter3cb_5(bind)
Bind
end
def visit_Dead_Code_Deleter3cb_6(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def visit_Dead_Code_Deleter3cb_7(bind)
@src.expr
end
def visit_Dead_Code_Deleter3cb_8(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_9(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : bind[:expr_1]
end

end




 require 'compiled/dataflow_ssa_c'
