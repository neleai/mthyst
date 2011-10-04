class Dataflow < Traverser_Clone2
	attr_accessor :ssanums,:oldssanums,:edges
	def initialize
		@edges=Oriented_Graph.new
		@marked=[]
		@ssanums=Hash.new(0)
		@oldssanums=Hash.new(0)
	end
	def ssanum(var)
		ssanum2(var)
	end
	def ssanum2(var)
		return var unless var.is_a? Local
		var=Local[var[0],var[1],oldssanums[var.unssa]]
		var.ssaname
	end

	def newssanum(var)
		return var unless var.is_a? Local
		ssanums[var.unssa]+=1
		oldssanums[var.unssa]=ssanums[var.unssa]
		ssanum2(var.unssa)
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
	def unssa
		Local[ary[0],ary[1]]
	end
end

class Dataflow < Traverser_Clone2
@@switchhashDataflow1=Hash.new{|h,k|
next h[k]=0 if k<=Act
next h[k]=1 if k<=Apply
next h[k]=2 if k<=Bind
next h[k]=3 if k<=Local
next h[k]=4 if k<=Lookahead
next h[k]=5 if k<=Many
next h[k]=6 if k<=Or
next h[k]=7 if k<=Pass
next h[k]=8 if k<=Result
next h[k]=9 if k<=Object
}
def switchcbDataflow1(e)
@@switchhashDataflow1[e]
end
@@switchhashDataflow2=Hash.new{|h,k|
next h[k]=0 if k<=Act
next h[k]=1 if k<=Args
next h[k]=2 if k<=Bind
next h[k]=3 if k<=CAct
next h[k]=4 if k<=Global
next h[k]=5 if k<=Key
next h[k]=6 if k<=Local
next h[k]=7 if k<=Result
next h[k]=8 if k<=Strin
next h[k]=9 if k<=Object
}
def switchcbDataflow2(e)
@@switchhashDataflow2[e]
end
@@switchhashDataflow3=Hash.new{|h,k|
next h[k]=0 if k<=AmethystAST
next h[k]=1 if k<=Array
next h[k]=2 if k<=Object
}
def switchcbDataflow3(e)
@@switchhashDataflow3[e]
end
def clas_Dataflowcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Dataflowcb_1(bind)
(false) || FAIL
end
def root_Dataflowcb_1(bind)
bind[0]=[bind[0]]
end
def root_Dataflowcb_10(bind)
@src.reachable=@edges.reverse.reachable(@marked+[ssanum(@src.body[-1]),@src.body]); @src.cfg=@edges; 
end
def root_Dataflowcb_2(bind)
@bnding=@src.bnding
end
def root_Dataflowcb_3(bind)
@src.args
end
def root_Dataflowcb_4(bind)
bind[2]=[bind[2]]
end
def root_Dataflowcb_5(bind)
_append(bind[4],bind[5])
end
def root_Dataflowcb_6(bind)
bind[6].each{|v| @marked<<ssanum(v)};@src.args=bind[6]
end
def root_Dataflowcb_7(bind)
@src.body
end
def root_Dataflowcb_8(bind)
bind[7]=[bind[7]]
end
def root_Dataflowcb_9(bind)
@src.body=bind[9]
end
def traverse_Dataflowcb_1(bind)
@changed
end
def traverse_Dataflowcb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Dataflowcb_3(bind)
bind[4]=[bind[4]]
end
def traverse_Dataflowcb_4(bind)
@changed=false
end
def traverse_Dataflowcb_5(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Dataflowcb_6(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Dataflowcb_1(bind)
@changed=true
end
def traverse_item_Dataflowcb_2(bind)
bind[5]<<bind[6]
end
def vars_in_Dataflowcb_1(bind)
bind[0]=[]
end
def vars_in_Dataflowcb_10(bind)
@marked<<@src
end
def vars_in_Dataflowcb_11(bind)
_append(bind[0],bind[13])
end
def vars_in_Dataflowcb_12(bind)
_append(bind[0],bind[15])
end
def vars_in_Dataflowcb_13(bind)
_append(bind[0],bind[17])
end
def vars_in_Dataflowcb_14(bind)
_append(bind[0],bind[19])
end
def vars_in_Dataflowcb_2(bind)
@src
end
def vars_in_Dataflowcb_3(bind)
_append(bind[0],bind[2])
end
def vars_in_Dataflowcb_4(bind)
_append(bind[0],bind[4])
end
def vars_in_Dataflowcb_5(bind)
@src.expr
end
def vars_in_Dataflowcb_6(bind)
bind[6]=[bind[6]]
end
def vars_in_Dataflowcb_7(bind)
_append(bind[0],bind[7])
end
def vars_in_Dataflowcb_8(bind)
_append(bind[0],bind[9])
end
def vars_in_Dataflowcb_9(bind)
_append(bind[0],bind[11])
end
def visit_Dataflowcb_1(bind)
Act[bind[0],@src.pred]
end
def visit_Dataflowcb_10(bind)
bind_end(@src)
end
def visit_Dataflowcb_11(bind)
ssanum2(@src)
end
def visit_Dataflowcb_12(bind)
_append(bind[23],bind[24])
end
def visit_Dataflowcb_13(bind)
Lookahead[*bind[0]]
end
def visit_Dataflowcb_14(bind)
ssanums.clone
end
def visit_Dataflowcb_15(bind)
_append(bind[28],bind[29])
end
def visit_Dataflowcb_16(bind)
many_end(bind[27])
end
def visit_Dataflowcb_17(bind)
Many.create({:ary=>bind[0]}).normalize
end
def visit_Dataflowcb_18(bind)
oldssanums.clone
end
def visit_Dataflowcb_19(bind)
@oldssanums=bind[33].clone
end
def visit_Dataflowcb_2(bind)
@marked<<bind[2] if @src.pred || !@src.pure
end
def visit_Dataflowcb_20(bind)
_append(bind[0],bind[34])
end
def visit_Dataflowcb_21(bind)
bind[32]<<oldssanums.clone
end
def visit_Dataflowcb_22(bind)
or_end(bind[32])
end
def visit_Dataflowcb_23(bind)
Or[*bind[0]]
end
def visit_Dataflowcb_24(bind)
@src.to
end
def visit_Dataflowcb_25(bind)
bind[37]=[bind[37]]
end
def visit_Dataflowcb_26(bind)
@src.var
end
def visit_Dataflowcb_27(bind)
bind[39]=[bind[39]]
end
def visit_Dataflowcb_28(bind)
@marked<<bind[6].ssaname
end
def visit_Dataflowcb_29(bind)
Pass.create({:to=>bind[38],:var=>bind[6]}).normalize
end
def visit_Dataflowcb_3(bind)
bind[2].ary
end
def visit_Dataflowcb_30(bind)
@src.vars
end
def visit_Dataflowcb_31(bind)
bind[42]=[bind[42]]
end
def visit_Dataflowcb_32(bind)
_append(bind[44],bind[45])
end
def visit_Dataflowcb_33(bind)
n=Result[{:name=>@src.name,:vars=>bind[6]}]; bind[6].each{|w| @edges.add(w.ssaname,n) } ; n
end
def visit_Dataflowcb_4(bind)
bind[3]=[bind[3]]
end
def visit_Dataflowcb_5(bind)
bind[6].each{|v| edges.add(ssanum(v),bind[2]); edges.add(bind[2],newssanum(v));}; bind[2]
end
def visit_Dataflowcb_6(bind)
_append(bind[10],bind[11])
end
def visit_Dataflowcb_7(bind)
Apply[*bind[0]]
end
def visit_Dataflowcb_8(bind)
bind[13]=[bind[13]]
end
def visit_Dataflowcb_9(bind)
bind[6].each{|v| @marked<<ssanum(v)}
end

end


class Dead_Code_Deleter3 < Traverser_Clone2
@@switchhashDead_Code_Deleter35=Hash.new{|h,k|
next h[k]=0 if k<=Act
next h[k]=1 if k<=Bind
next h[k]=2 if k<=CAct
next h[k]=3 if k<=Local
next h[k]=4 if k<=Result
next h[k]=5 if k<=Object
}
def switchcbDead_Code_Deleter35(e)
@@switchhashDead_Code_Deleter35[e]
end
@@switchhashDead_Code_Deleter34=Hash.new{|h,k|
next h[k]=0 if k<=Act
next h[k]=1 if k<=CAct
next h[k]=2 if k<=Result
next h[k]=3 if k<=Object
}
def switchcbDead_Code_Deleter34(e)
@@switchhashDead_Code_Deleter34[e]
end
@@switchhashDead_Code_Deleter36=Hash.new{|h,k|
next h[k]=0 if k<=AmethystAST
next h[k]=1 if k<=Array
next h[k]=2 if k<=Object
}
def switchcbDead_Code_Deleter36(e)
@@switchhashDead_Code_Deleter36[e]
end
def clas_Dead_Code_Deleter3cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Dead_Code_Deleter3cb_1(bind)
(false) || FAIL
end
def root_Dead_Code_Deleter3cb_1(bind)
bind[0]=[bind[0]]
end
def root_Dead_Code_Deleter3cb_2(bind)
@reachable=@src.reachable
end
def root_Dead_Code_Deleter3cb_3(bind)
@src.reachable=nil;@src.cfg=nil
end
def traverse_Dead_Code_Deleter3cb_1(bind)
@changed
end
def traverse_Dead_Code_Deleter3cb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Dead_Code_Deleter3cb_3(bind)
bind[4]=[bind[4]]
end
def traverse_Dead_Code_Deleter3cb_4(bind)
@changed=false
end
def traverse_Dead_Code_Deleter3cb_5(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Dead_Code_Deleter3cb_6(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Dead_Code_Deleter3cb_1(bind)
@changed=true
end
def traverse_item_Dead_Code_Deleter3cb_2(bind)
bind[5]<<bind[6]
end
def visit_Dead_Code_Deleter3cb_1(bind)
@src
end
def visit_Dead_Code_Deleter3cb_2(bind)
@reachable[bind[1]] ? bind[1] : Placeholder
end
def visit_Dead_Code_Deleter3cb_3(bind)
@src.expr
end
def visit_Dead_Code_Deleter3cb_4(bind)
@reachable[bind[4]] ? @src : (((bind[6].is_a?(Act)||bind[6].is_a?(CAct))&&bind[6].pure)? Placeholder : bind[6])
end
def visit_Dead_Code_Deleter3cb_5(bind)
@reachable[bind[1].ssaname] ? bind[1] : Placeholder
end

end


class Forget_SSA < Traverser_Clone2
@@switchhashForget_SSA7=Hash.new{|h,k|
next h[k]=0 if k<=AmethystAST
next h[k]=1 if k<=Array
next h[k]=2 if k<=Object
}
def switchcbForget_SSA7(e)
@@switchhashForget_SSA7[e]
end
def clas_Forget_SSAcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Forget_SSAcb_1(bind)
(false) || FAIL
end
def root_Forget_SSAcb_1(bind)
@src
end
def root_Forget_SSAcb_2(bind)
bind[0]=[bind[0]]
end
def traverse_Forget_SSAcb_1(bind)
@changed
end
def traverse_Forget_SSAcb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Forget_SSAcb_3(bind)
bind[4]=[bind[4]]
end
def traverse_Forget_SSAcb_4(bind)
@changed=false
end
def traverse_Forget_SSAcb_5(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Forget_SSAcb_6(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            @src
          end
end
def traverse_item_Forget_SSAcb_1(bind)
@changed=true
end
def traverse_item_Forget_SSAcb_2(bind)
bind[5]<<bind[6]
end
def visit_Forget_SSAcb_1(bind)
Local[bind[1],bind[2]]
end

end


def dataflow_ssa_compiled_by
'ae7f7ff83d1b1f766d486f002118d4a4'
end
def dataflow_ssa_source_hash
'256ed86af86d95d9b8953797b6b14661'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'67592f4eb4726e11921a91150a331286'
end
  require 'compiled/dataflow_ssa_c'
