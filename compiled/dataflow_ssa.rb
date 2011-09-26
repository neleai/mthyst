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
def self.switchcb_Dataflow1(e)
return 0 if e<=Apply
return 1 if e<=Many
return 2 if e<=Result
return 3 if e<=Or
return 4 if e<=Local
return 5 if e<=Pass
return 6 if e<=Lookahead
return 7 if e<=Act
return 8 if e<=Bind
return 9 if e<=Object
return 10
end
@@switchhashDataflow1=Hash.new{|h,k| h[k]=switchcb_Dataflow1(k)}
def switchcbDataflow1(e)
@@switchhashDataflow1[e.class]
end
def self.switchcb_Dataflow2(e)
return 0 if e<=CAct
return 1 if e<=Key
return 2 if e<=Result
return 3 if e<=Args
return 4 if e<=Global
return 5 if e<=Local
return 6 if e<=Act
return 7 if e<=Bind
return 8 if e<=Strin
return 9 if e<=Object
return 10
end
@@switchhashDataflow2=Hash.new{|h,k| h[k]=switchcb_Dataflow2(k)}
def switchcbDataflow2(e)
@@switchhashDataflow2[e.class]
end
def self.switchcb_Dataflow3(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
return 3
end
@@switchhashDataflow3=Hash.new{|h,k| h[k]=switchcb_Dataflow3(k)}
def switchcbDataflow3(e)
@@switchhashDataflow3[e.class]
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
_append(bind[0],bind[14])
end
def vars_in_Dataflowcb_11(bind)
@src.expr
end
def vars_in_Dataflowcb_12(bind)
_append(bind[0],bind[17])
end
def vars_in_Dataflowcb_13(bind)
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
@marked<<@src
end
def vars_in_Dataflowcb_6(bind)
_append(bind[0],bind[6])
end
def vars_in_Dataflowcb_7(bind)
_append(bind[0],bind[8])
end
def vars_in_Dataflowcb_8(bind)
_append(bind[0],bind[10])
end
def vars_in_Dataflowcb_9(bind)
_append(bind[0],bind[12])
end
def visit_Dataflowcb_1(bind)
_append(bind[2],bind[3])
end
def visit_Dataflowcb_10(bind)
bind[16]=[bind[16]]
end
def visit_Dataflowcb_11(bind)
_append(bind[18],bind[19])
end
def visit_Dataflowcb_12(bind)
n=Result[{:name=>@src.name,:vars=>bind[7]}]; bind[7].each{|w| @edges.add(w.ssaname,n) } ; n
end
def visit_Dataflowcb_13(bind)
oldssanums.clone
end
def visit_Dataflowcb_14(bind)
@oldssanums=bind[23].clone
end
def visit_Dataflowcb_15(bind)
_append(bind[0],bind[24])
end
def visit_Dataflowcb_16(bind)
bind[22]<<oldssanums.clone
end
def visit_Dataflowcb_17(bind)
or_end(bind[22])
end
def visit_Dataflowcb_18(bind)
Or[*bind[0]]
end
def visit_Dataflowcb_19(bind)
ssanum2(@src)
end
def visit_Dataflowcb_2(bind)
Apply[*bind[0]]
end
def visit_Dataflowcb_20(bind)
@src.to
end
def visit_Dataflowcb_21(bind)
bind[29]=[bind[29]]
end
def visit_Dataflowcb_22(bind)
@src.var
end
def visit_Dataflowcb_23(bind)
bind[31]=[bind[31]]
end
def visit_Dataflowcb_24(bind)
@marked<<bind[7].ssaname
end
def visit_Dataflowcb_25(bind)
Pass.create({:to=>bind[30],:var=>bind[7]}).normalize
end
def visit_Dataflowcb_26(bind)
_append(bind[34],bind[35])
end
def visit_Dataflowcb_27(bind)
Lookahead[*bind[0]]
end
def visit_Dataflowcb_28(bind)
Act[bind[0],@src.pred]
end
def visit_Dataflowcb_29(bind)
@marked<<bind[38] if @src.pred || !@src.pure
end
def visit_Dataflowcb_3(bind)
bind[5]=[bind[5]]
end
def visit_Dataflowcb_30(bind)
bind[38].ary
end
def visit_Dataflowcb_31(bind)
bind[39]=[bind[39]]
end
def visit_Dataflowcb_32(bind)
bind[7].each{|v| edges.add(ssanum(v),bind[38]); edges.add(bind[38],newssanum(v));}; bind[38]
end
def visit_Dataflowcb_33(bind)
bind_end(@src)
end
def visit_Dataflowcb_4(bind)
bind[7].each{|v| @marked<<ssanum(v)}
end
def visit_Dataflowcb_5(bind)
ssanums.clone
end
def visit_Dataflowcb_6(bind)
_append(bind[12],bind[13])
end
def visit_Dataflowcb_7(bind)
many_end(bind[11])
end
def visit_Dataflowcb_8(bind)
Many.create({:ary=>bind[0]}).normalize
end
def visit_Dataflowcb_9(bind)
@src.vars
end

end


class Dead_Code_Deleter3 < Traverser_Clone2
def self.switchcb_Dead_Code_Deleter35(e)
return 0 if e<=CAct
return 1 if e<=Result
return 2 if e<=Local
return 3 if e<=Act
return 4 if e<=Bind
return 5 if e<=Object
return 6
end
@@switchhashDead_Code_Deleter35=Hash.new{|h,k| h[k]=switchcb_Dead_Code_Deleter35(k)}
def switchcbDead_Code_Deleter35(e)
@@switchhashDead_Code_Deleter35[e.class]
end
def self.switchcb_Dead_Code_Deleter34(e)
return 0 if e<=CAct
return 1 if e<=Result
return 2 if e<=Act
return 3 if e<=Object
return 4
end
@@switchhashDead_Code_Deleter34=Hash.new{|h,k| h[k]=switchcb_Dead_Code_Deleter34(k)}
def switchcbDead_Code_Deleter34(e)
@@switchhashDead_Code_Deleter34[e.class]
end
def self.switchcb_Dead_Code_Deleter36(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
return 3
end
@@switchhashDead_Code_Deleter36=Hash.new{|h,k| h[k]=switchcb_Dead_Code_Deleter36(k)}
def switchcbDead_Code_Deleter36(e)
@@switchhashDead_Code_Deleter36[e.class]
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
@reachable[bind[1].ssaname] ? bind[1] : Placeholder
end
def visit_Dead_Code_Deleter3cb_4(bind)
@src.expr
end
def visit_Dead_Code_Deleter3cb_5(bind)
@reachable[bind[5]] ? @src : (((bind[7].is_a?(Act)||bind[7].is_a?(CAct))&&bind[7].pure)? Placeholder : bind[7])
end

end


class Forget_SSA < Traverser_Clone2
def self.switchcb_Forget_SSA7(e)
return 0 if e<=AmethystAST
return 1 if e<=Array
return 2 if e<=Object
return 3
end
@@switchhashForget_SSA7=Hash.new{|h,k| h[k]=switchcb_Forget_SSA7(k)}
def switchcbForget_SSA7(e)
@@switchhashForget_SSA7[e.class]
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
'6ae5485046c8cbad7e497513c567604c'
end
def dataflow_ssa_source_hash
'256ed86af86d95d9b8953797b6b14661'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'469887fa3156ef131af36fb738aff018'
end
  require 'compiled/dataflow_ssa_c'
