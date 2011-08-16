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
    ssanums.clone.each{|k,v|
      u=[]
      join.each{|s| u<<s[k]}
      u=u.uniq
      if u.size>1
        n=newssanum(k)
        u.each{|v| edges.add([k[0],v],n)}
      end
    }
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
@src.reachable=@edges.reverse.reachable(@marked+[@src.body[-1]]); [@edges,@marked+[@src.body[-1]]]
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
@marked+=bind[:var_1]
end
def visit_Dataflowcb_11(bind)
@src.self
end
def visit_Dataflowcb_12(bind)
Pass
end
def visit_Dataflowcb_13(bind)
@src.var
end
def visit_Dataflowcb_14(bind)
bind[:autovar_6]=[bind[:autovar_6]]
end
def visit_Dataflowcb_15(bind)
@marked+=bind[:var_1]
end
def visit_Dataflowcb_16(bind)
Act
end
def visit_Dataflowcb_17(bind)
@marked<<bind[:this_1] if @src.pred
end
def visit_Dataflowcb_18(bind)
@src.ary
end
def visit_Dataflowcb_19(bind)
bind[:autovar_8]=[bind[:autovar_8]]
end
def visit_Dataflowcb_2(bind)
@marked+=bind[:var_1]
end
def visit_Dataflowcb_20(bind)
bind[:var_1].each{|v| edges.add(ssanum(v),bind[:this_1]); edges.add(bind[:this_1],newssanum(v));}; bind[:this_1]
end
def visit_Dataflowcb_21(bind)
Set
end
def visit_Dataflowcb_22(bind)
set_end(@src.self) 
end
def visit_Dataflowcb_23(bind)
@src.self
end
def visit_Dataflowcb_24(bind)
Result
end
def visit_Dataflowcb_25(bind)
@src.vars
end
def visit_Dataflowcb_26(bind)
bind[:autovar_12]=[bind[:autovar_12]]
end
def visit_Dataflowcb_27(bind)
bind[:var_1].each{|w| @edges.add(ssanum(w),bind[:this_1]) } ; bind[:this_1]
end
def visit_Dataflowcb_3(bind)
Or
end
def visit_Dataflowcb_4(bind)
oldssanums.clone
end
def visit_Dataflowcb_5(bind)
@oldssanums=bind[:old_1].clone
end
def visit_Dataflowcb_6(bind)
@src.self
end
def visit_Dataflowcb_7(bind)
Many
end
def visit_Dataflowcb_8(bind)
@src.o
end
def visit_Dataflowcb_9(bind)
bind[:autovar_4]=[bind[:autovar_4]]
end

end




 require 'c/dataflow_ssa_c'