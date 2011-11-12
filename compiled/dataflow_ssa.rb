class Dataflow < Traverser_Clone2
	attr_accessor :ssanums,:oldssanums,:edges
	def initialize
		@edges=Oriented_Graph.new
		@marked=[]
		@ssanums=Hash.new(0)
		@oldssanums=Hash.new(0)
	end
	def ssanum(var)
		return var unless var.is_a? Local
		var=Local[var[0],var[1],oldssanums[var.unssa]]
		var.ssaname
	end

	def newssanum(var)
		return var unless var.is_a? Local
		ssanums[var.unssa]+=1
		oldssanums[var.unssa]=ssanums[var.unssa]
		ssanum(var.unssa)
	end
	def many_end(prev)
	  ssanums.each{|var,num|
			if var.is_a?(Local)
	      if prev[var.unssa]!=num
					varp=Local[var[0],var[1],prev[var.unssa]]
					varn=Local[var[0],var[1],ssanums[var.unssa]]
 	       edges.add(varn.ssaname,varp.ssaname )
 	     end
			end
    }
	end
	def bind_end(exp)
		name=exp.name
		n=newssanum(name)
		bnd=_Bind(n,exp.expr)
    edges.add(bnd,n)
		val=exp
		val=val.expr while val.is_a?(Bind) 
	  if val.is_a?(Local) 
      o=ssanum(val)
      edges.add(o,n)
    else
      edges.add(val,bnd)
    end
		bnd
	end
	def or_end(join)
   ssanums.clone.each{|k,v|
      u=[]
      join.each{|s| u<<s[k]}
      if u.uniq.size>1
        n=newssanum(k)
        u.each{|v| l=Local[k[0],k[1],v]
					edges.add(l.ssaname,n)}
      end
    }
	end
end
class Local
	def ssaname
		self
	end
end

class Dataflow < Traverser_Clone2

def root_Dataflowcb_1(bind)
src
end
def root_Dataflowcb_10(bind)
src.body=bind[9]
end
def root_Dataflowcb_11(bind)
src.reachable=@edges.reverse.reachable(@marked+[ssanum(src.body[-1]),src.body]); src.cfg=@edges; 
end
def root_Dataflowcb_2(bind)
bind[0]=[bind[0]]
end
def root_Dataflowcb_3(bind)
@bnding=src.bnding
end
def root_Dataflowcb_4(bind)
src.args
end
def root_Dataflowcb_5(bind)
bind[2]=[bind[2]]
end
def root_Dataflowcb_6(bind)
_append(bind[4],bind[5])
end
def root_Dataflowcb_7(bind)
bind[6].each{|v| @marked<<ssanum(v)};src.args=bind[6]
end
def root_Dataflowcb_8(bind)
src.body
end
def root_Dataflowcb_9(bind)
bind[7]=[bind[7]]
end
def traverse_Dataflowcb_1(bind)
_append(bind[0],bind[1])
end
def traverse_Dataflowcb_2(bind)
@changed
end
def traverse_Dataflowcb_3(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Dataflowcb_4(bind)
bind[6]=[bind[6]]
end
def traverse_Dataflowcb_5(bind)
@changed=false
end
def traverse_Dataflowcb_6(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def traverse_Dataflowcb_7(bind)
_append(bind[8],bind[13])
end
def traverse_Dataflowcb_8(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def traverse_item_Dataflowcb_1(bind)
@changed=true
end
def traverse_item_Dataflowcb_2(bind)
bind[5]<<bind[7]
end
def traverse_item_Dataflowcb_3(bind)
_append(bind[6],bind[8])
end
def vars_in_Dataflowcb_1(bind)
bind[0]=[]
end
def vars_in_Dataflowcb_10(bind)
_append(bind[0],bind[25])
end
def vars_in_Dataflowcb_11(bind)
_append(bind[26],bind[27])
end
def vars_in_Dataflowcb_12(bind)
_append(bind[0],bind[30])
end
def vars_in_Dataflowcb_13(bind)
_append(bind[0],bind[33])
end
def vars_in_Dataflowcb_14(bind)
_append(bind[1],bind[7])
end
def vars_in_Dataflowcb_2(bind)
_append(bind[0],bind[3])
end
def vars_in_Dataflowcb_3(bind)
_append(bind[0],bind[9])
end
def vars_in_Dataflowcb_4(bind)
_append(bind[0],bind[12])
end
def vars_in_Dataflowcb_5(bind)
_append(bind[0],bind[15])
end
def vars_in_Dataflowcb_6(bind)
_append(bind[16],bind[17])
end
def vars_in_Dataflowcb_7(bind)
_append(bind[0],bind[20])
end
def vars_in_Dataflowcb_8(bind)
@marked<<src
end
def vars_in_Dataflowcb_9(bind)
_append(bind[21],bind[22])
end
def visit_Dataflowcb_1(bind)
_append(bind[2],bind[3])
end
def visit_Dataflowcb_10(bind)
bind[8].each{|v| @marked<<ssanum(v)}
end
def visit_Dataflowcb_11(bind)
_append(bind[19],bind[20])
end
def visit_Dataflowcb_12(bind)
_append(bind[22],bind[23])
end
def visit_Dataflowcb_13(bind)
bind_end(src)
end
def visit_Dataflowcb_14(bind)
_append(bind[27],bind[28])
end
def visit_Dataflowcb_15(bind)
ssanum(src)
end
def visit_Dataflowcb_16(bind)
_append(bind[31],bind[32])
end
def visit_Dataflowcb_17(bind)
Lookahead[*bind[0]]
end
def visit_Dataflowcb_18(bind)
ssanums.clone
end
def visit_Dataflowcb_19(bind)
_append(bind[36],bind[37])
end
def visit_Dataflowcb_2(bind)
Act[bind[0],src.pred]
end
def visit_Dataflowcb_20(bind)
many_end(bind[35])
end
def visit_Dataflowcb_21(bind)
Many.create({:ary=>bind[0]}).normalize
end
def visit_Dataflowcb_22(bind)
oldssanums.clone
end
def visit_Dataflowcb_23(bind)
@oldssanums=bind[41].clone
end
def visit_Dataflowcb_24(bind)
_append(bind[0],bind[43])
end
def visit_Dataflowcb_25(bind)
bind[40]<<oldssanums.clone
end
def visit_Dataflowcb_26(bind)
_append(bind[42],bind[44])
end
def visit_Dataflowcb_27(bind)
or_end(bind[40])
end
def visit_Dataflowcb_28(bind)
Or[*bind[0]]
end
def visit_Dataflowcb_29(bind)
src.to
end
def visit_Dataflowcb_3(bind)
@marked<<bind[4] if src.pred || !src.pure
end
def visit_Dataflowcb_30(bind)
bind[47]=[bind[47]]
end
def visit_Dataflowcb_31(bind)
src.var
end
def visit_Dataflowcb_32(bind)
bind[49]=[bind[49]]
end
def visit_Dataflowcb_33(bind)
@marked<<bind[8].ssaname
end
def visit_Dataflowcb_34(bind)
Pass.create({:to=>bind[48],:var=>bind[8]}).normalize
end
def visit_Dataflowcb_35(bind)
src.vars
end
def visit_Dataflowcb_36(bind)
bind[52]=[bind[52]]
end
def visit_Dataflowcb_37(bind)
_append(bind[54],bind[55])
end
def visit_Dataflowcb_38(bind)
n=Result[{:name=>src.name,:varnames=>src.varnames,:vars=>bind[8]}]; bind[8].each{|w| @edges.add(w.ssaname,n) } ; n
end
def visit_Dataflowcb_4(bind)
bind[4].ary
end
def visit_Dataflowcb_5(bind)
bind[5]=[bind[5]]
end
def visit_Dataflowcb_6(bind)
bind[8].each{|v| edges.add(ssanum(v),bind[4]); edges.add(bind[4],newssanum(v));}; bind[4]
end
def visit_Dataflowcb_7(bind)
_append(bind[12],bind[13])
end
def visit_Dataflowcb_8(bind)
Apply[*bind[0]]
end
def visit_Dataflowcb_9(bind)
bind[15]=[bind[15]]
end

end


class Dead_Code_Deleter3 < Traverser_Clone2

def root_Dead_Code_Deleter3cb_1(bind)
src
end
def root_Dead_Code_Deleter3cb_2(bind)
bind[0]=[bind[0]]
end
def root_Dead_Code_Deleter3cb_3(bind)
@reachable=src.reachable
end
def root_Dead_Code_Deleter3cb_4(bind)
src.reachable=nil;src.cfg=nil
end
def traverse_Dead_Code_Deleter3cb_1(bind)
_append(bind[0],bind[1])
end
def traverse_Dead_Code_Deleter3cb_2(bind)
@changed
end
def traverse_Dead_Code_Deleter3cb_3(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Dead_Code_Deleter3cb_4(bind)
bind[6]=[bind[6]]
end
def traverse_Dead_Code_Deleter3cb_5(bind)
@changed=false
end
def traverse_Dead_Code_Deleter3cb_6(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def traverse_Dead_Code_Deleter3cb_7(bind)
_append(bind[8],bind[13])
end
def traverse_Dead_Code_Deleter3cb_8(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def traverse_item_Dead_Code_Deleter3cb_1(bind)
@changed=true
end
def traverse_item_Dead_Code_Deleter3cb_2(bind)
bind[5]<<bind[7]
end
def traverse_item_Dead_Code_Deleter3cb_3(bind)
_append(bind[6],bind[8])
end
def visit_Dead_Code_Deleter3cb_1(bind)
_append(bind[2],bind[3])
end
def visit_Dead_Code_Deleter3cb_10(bind)
@reachable[bind[1].ssaname] ? bind[1] : Placeholder
end
def visit_Dead_Code_Deleter3cb_2(bind)
(!@reachable[bind[1]] ||(bind[1].pure && !@bounded)) ? Placeholder : bind[1]
end
def visit_Dead_Code_Deleter3cb_3(bind)
_append(bind[6],bind[7])
end
def visit_Dead_Code_Deleter3cb_4(bind)
_append(bind[10],bind[11])
end
def visit_Dead_Code_Deleter3cb_5(bind)
@bounded=@reachable[bind[12]]
end
def visit_Dead_Code_Deleter3cb_6(bind)
_append(bind[14],bind[15])
end
def visit_Dead_Code_Deleter3cb_7(bind)
@bounded=false
end
def visit_Dead_Code_Deleter3cb_8(bind)
@reachable[bind[12]] ? src : src.expr
end
def visit_Dead_Code_Deleter3cb_9(bind)
_append(bind[19],bind[20])
end

end


class Forget_SSA < Traverser_Clone2

def root_Forget_SSAcb_1(bind)
src
end
def root_Forget_SSAcb_2(bind)
bind[0]=[bind[0]]
end
def traverse_Forget_SSAcb_1(bind)
_append(bind[0],bind[1])
end
def traverse_Forget_SSAcb_2(bind)
@changed
end
def traverse_Forget_SSAcb_3(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def traverse_Forget_SSAcb_4(bind)
bind[6]=[bind[6]]
end
def traverse_Forget_SSAcb_5(bind)
@changed=false
end
def traverse_Forget_SSAcb_6(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def traverse_Forget_SSAcb_7(bind)
_append(bind[8],bind[13])
end
def traverse_Forget_SSAcb_8(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def traverse_item_Forget_SSAcb_1(bind)
@changed=true
end
def traverse_item_Forget_SSAcb_2(bind)
bind[5]<<bind[7]
end
def traverse_item_Forget_SSAcb_3(bind)
_append(bind[6],bind[8])
end
def visit_Forget_SSAcb_1(bind)
_append(bind[1],bind[2])
end
def visit_Forget_SSAcb_2(bind)
src.unssa
end

end


def dataflow_ssa_compiled_by
'c4c4e8a3b9da03833be08129b95b8d63'
end
def dataflow_ssa_source_hash
'ac42f28226bebb487b4767cd507d20d8'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'd652fa75975438a0e2bb78e95ed3413c'
end
  require 'compiled/dataflow_ssa_c'
