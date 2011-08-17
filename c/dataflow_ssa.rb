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
		exp=exp.expr while exp.expr.is_a?(Set) 
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
	puts self.inspect
	puts ssanums.inspect
   ssanums.clone.each{|k,v|
      u=[]
      join.each{|s| u<<s[k]}
			puts k.inspect
			puts u.inspect
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
def root_CloneLocalscb_1(bind)
@src.self
end
def root_CloneLocalscb_2(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def root_CloneLocalscb_3(bind)
Rule
end
def visit_CloneLocalscb_1(bind)
Local
end
def visit_CloneLocalscb_2(bind)
@src.self.clone
end

end


class Dataflow < Traverser
def root_Dataflowcb_1(bind)
@src.self
end
def root_Dataflowcb_2(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def root_Dataflowcb_3(bind)
Rule
end
def root_Dataflowcb_4(bind)
@bnding=@src.bnding
end
def root_Dataflowcb_5(bind)
@src.args
end
def root_Dataflowcb_6(bind)
bind[:autovar_3]=[bind[:autovar_3]]
end
def root_Dataflowcb_7(bind)
@x;bind[:var_1].each{|v| ssanum(v)}
end
def root_Dataflowcb_8(bind)
@src.reachable=@edges.reverse.reachable(@marked+[ssanum(@src.body[-1])]); @src.cfg=@edges; [@edges,@marked+[@src.body[-1]]]
end
def root_Dataflowcb_9(bind)
@src.self
end
def vars_in_Dataflowcb_1(bind)
[]
end
def vars_in_Dataflowcb_10(bind)
Key
end
def vars_in_Dataflowcb_11(bind)
@src.self
end
def vars_in_Dataflowcb_12(bind)
_append(bind[:ary_1],bind[:autovar_6])
end
def vars_in_Dataflowcb_13(bind)
@marked<<@src.self
end
def vars_in_Dataflowcb_14(bind)
Result
end
def vars_in_Dataflowcb_15(bind)
@src.self
end
def vars_in_Dataflowcb_16(bind)
_append(bind[:ary_1],bind[:autovar_8])
end
def vars_in_Dataflowcb_17(bind)
Strin
end
def vars_in_Dataflowcb_18(bind)
_append(bind[:ary_1],bind[:autovar_10])
end
def vars_in_Dataflowcb_19(bind)
Args
end
def vars_in_Dataflowcb_2(bind)
bind[:ary_1]=[]
end
def vars_in_Dataflowcb_20(bind)
_append(bind[:ary_1],bind[:autovar_12])
end
def vars_in_Dataflowcb_21(bind)
Set
end
def vars_in_Dataflowcb_22(bind)
@src.name
end
def vars_in_Dataflowcb_23(bind)
bind[:autovar_14]=[bind[:autovar_14]]
end
def vars_in_Dataflowcb_24(bind)
_append(bind[:ary_1],bind[:autovar_15])
end
def vars_in_Dataflowcb_25(bind)
Local
end
def vars_in_Dataflowcb_26(bind)
@src.self
end
def vars_in_Dataflowcb_27(bind)
_append(bind[:ary_1],bind[:autovar_17])
end
def vars_in_Dataflowcb_3(bind)
Global
end
def vars_in_Dataflowcb_4(bind)
@src.self
end
def vars_in_Dataflowcb_5(bind)
_append(bind[:ary_1],bind[:autovar_2])
end
def vars_in_Dataflowcb_6(bind)
@marked<<@src.self
end
def vars_in_Dataflowcb_7(bind)
Act
end
def vars_in_Dataflowcb_8(bind)
@src.self
end
def vars_in_Dataflowcb_9(bind)
_append(bind[:ary_1],bind[:autovar_4])
end
def visit_Dataflowcb_1(bind)
Apply
end
def visit_Dataflowcb_10(bind)
bind[:join_1]<<oldssanums.clone
end
def visit_Dataflowcb_11(bind)
@x;or_end(bind[:join_1])
end
def visit_Dataflowcb_12(bind)
@src.self
end
def visit_Dataflowcb_13(bind)
Many
end
def visit_Dataflowcb_14(bind)
@x;many_end(prev)
end
def visit_Dataflowcb_15(bind)
@src.self
end
def visit_Dataflowcb_16(bind)
Pass
end
def visit_Dataflowcb_17(bind)
@marked<<ssanum(@src.var)
end
def visit_Dataflowcb_18(bind)
@src.self
end
def visit_Dataflowcb_19(bind)
Act
end
def visit_Dataflowcb_2(bind)
@src.self
end
def visit_Dataflowcb_20(bind)
@marked<<bind[:this_1] if @src.pred
end
def visit_Dataflowcb_21(bind)
@src.ary
end
def visit_Dataflowcb_22(bind)
bind[:autovar_8]=[bind[:autovar_8]]
end
def visit_Dataflowcb_23(bind)
bind[:var_1].each{|v| edges.add(ssanum(v),bind[:this_1]); edges.add(bind[:this_1],newssanum(v.clone));}; bind[:this_1]
end
def visit_Dataflowcb_24(bind)
Set
end
def visit_Dataflowcb_25(bind)
set_end(@src.self) 
end
def visit_Dataflowcb_26(bind)
@src.self
end
def visit_Dataflowcb_27(bind)
Result
end
def visit_Dataflowcb_28(bind)
@src.vars
end
def visit_Dataflowcb_29(bind)
bind[:autovar_12]=[bind[:autovar_12]]
end
def visit_Dataflowcb_3(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def visit_Dataflowcb_30(bind)
bind[:var_1].each{|w| @edges.add(ssanum(w),bind[:this_1]) } ; bind[:this_1]
end
def visit_Dataflowcb_4(bind)
bind[:var_1].each{|v| @marked<<ssanum(v)}
end
def visit_Dataflowcb_5(bind)
@src.self
end
def visit_Dataflowcb_6(bind)
Or
end
def visit_Dataflowcb_7(bind)
[]
end
def visit_Dataflowcb_8(bind)
oldssanums.clone
end
def visit_Dataflowcb_9(bind)
@oldssanums=bind[:old_1].clone
end

end


class Dead_Code_Deleter3 < Traverser
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
@reachable=@src.reachable
end
def root_Dead_Code_Deleter3cb_5(bind)
@src.reachable=nil
end
def root_Dead_Code_Deleter3cb_6(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_1(bind)
Act
end
def visit_Dead_Code_Deleter3cb_10(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter3cb_11(bind)
Local
end
def visit_Dead_Code_Deleter3cb_12(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_13(bind)
puts bind[:this_1].ssaname.inspect; @reachable[bind[:this_1].ssaname] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter3cb_2(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_3(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : Act[]
end
def visit_Dead_Code_Deleter3cb_4(bind)
Set
end
def visit_Dead_Code_Deleter3cb_5(bind)
@src.expr
end
def visit_Dead_Code_Deleter3cb_6(bind)
@src.self
end
def visit_Dead_Code_Deleter3cb_7(bind)
@reachable[bind[:this_1]] ? bind[:this_1] : bind[:expr_1]
end
def visit_Dead_Code_Deleter3cb_8(bind)
Result
end
def visit_Dead_Code_Deleter3cb_9(bind)
@src.self
end

end




 require 'c/dataflow_ssa_c'
