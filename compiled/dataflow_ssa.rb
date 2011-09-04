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
			if var.is_a?(Local)
	      if prev[var]!=num
					varp=var.clone
					varp.ssano=prev[var]
 	       edges.add([var,ssanums[var]],[varp,prev[var]] )
 	     end
			end
    }
	end
	def bind_end(exp)
		name=exp.name
		val=exp
		val=val.expr while val.is_a?(Bind) 
	  if val.is_a?(Local) 
      o=ssanum(val)
      n=newssanum(name)
			edges.add(exp,n)
      edges.add(o,n)
    else
      edges.add(val,exp)
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

class Dataflow < Traverser
def self.switchcb_Dataflow2(e)
return 0 if e<=Apply
return 1 if e<=Or
return 2 if e<=Seq
return 3 if e<=Many
return 4 if e<=Pass
return 5 if e<=Act
return 6 if e<=Bind
return 7 if e<=Result
return 8 if e<=CAct
return 9 if e<=Bnding
return 10 if e<=Global
return 11 if e<=Key
return 12 if e<=Lookahead
return 13 if e<=Local
return 14 if e<=Object
return 15
end
@@switchhashDataflow2=Hash.new{|h,k| h[k]=switchcb_Dataflow2(k)}
def switchcbDataflow2(e)
@@switchhashDataflow2[e.class]
end
def self.switchcb_Dataflow3(e)
return 0 if e<=Global
return 1 if e<=Act
return 2 if e<=CAct
return 3 if e<=Key
return 4 if e<=Result
return 5 if e<=Strin
return 6 if e<=Args
return 7 if e<=Bind
return 8 if e<=Local
return 9 if e<=Object
return 10
end
@@switchhashDataflow3=Hash.new{|h,k| h[k]=switchcb_Dataflow3(k)}
def switchcbDataflow3(e)
@@switchhashDataflow3[e.class]
end
def self.switchcb_Dataflow4(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDataflow4=Hash.new{|h,k| h[k]=switchcb_Dataflow4(k)}
def switchcbDataflow4(e)
@@switchhashDataflow4[e.class]
end
def clas_Dataflowcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Dataflowcb_1(bind)
(false) || FAIL
end
def root_Dataflowcb_1(bind)
@src
end
def root_Dataflowcb_2(bind)
bind[0]=[bind[0]]
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
bind[2]=[bind[2]]
end
def root_Dataflowcb_7(bind)
bind[4].each{|v| ssanum(v)}
end
def root_Dataflowcb_8(bind)
@src.reachable=@edges.reverse.reachable(@marked+[ssanum(@src.body[-1])]); @src.cfg=@edges; 
end
def root_Dataflowcb_9(bind)
@src
end
def traverse_Dataflowcb_1(bind)
@src
end
def traverse_Dataflowcb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Dataflowcb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Dataflowcb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Dataflowcb_5(bind)
@src
end
def traverse_item_Dataflowcb_1(bind)
@changed=true
end
def traverse_item_Dataflowcb_2(bind)
bind[3]<<bind[4]
end
def traverse_item_Dataflowcb_3(bind)
@changed=true
end
def traverse_item_Dataflowcb_4(bind)
@changed=true
end
def vars_in_Dataflowcb_1(bind)
bind[0]=[]
end
def vars_in_Dataflowcb_10(bind)
_append(bind[0],bind[8])
end
def vars_in_Dataflowcb_11(bind)
@marked<<@src
end
def vars_in_Dataflowcb_12(bind)
@src
end
def vars_in_Dataflowcb_13(bind)
_append(bind[0],bind[10])
end
def vars_in_Dataflowcb_14(bind)
_append(bind[0],bind[12])
end
def vars_in_Dataflowcb_15(bind)
_append(bind[0],bind[14])
end
def vars_in_Dataflowcb_16(bind)
@src.expr
end
def vars_in_Dataflowcb_17(bind)
bind[16]=[bind[16]]
end
def vars_in_Dataflowcb_18(bind)
_append(bind[0],bind[17])
end
def vars_in_Dataflowcb_19(bind)
@src
end
def vars_in_Dataflowcb_2(bind)
@src
end
def vars_in_Dataflowcb_20(bind)
_append(bind[0],bind[19])
end
def vars_in_Dataflowcb_3(bind)
_append(bind[0],bind[2])
end
def vars_in_Dataflowcb_4(bind)
@marked<<@src
end
def vars_in_Dataflowcb_5(bind)
@src
end
def vars_in_Dataflowcb_6(bind)
_append(bind[0],bind[4])
end
def vars_in_Dataflowcb_7(bind)
@src
end
def vars_in_Dataflowcb_8(bind)
_append(bind[0],bind[6])
end
def vars_in_Dataflowcb_9(bind)
@src
end
def visit_Dataflowcb_1(bind)
_append(bind[2],bind[3])
end
def visit_Dataflowcb_10(bind)
Or[*bind[0]]
end
def visit_Dataflowcb_11(bind)
_append(bind[16],bind[17])
end
def visit_Dataflowcb_12(bind)
Seq[*bind[18]]
end
def visit_Dataflowcb_13(bind)
ssanums.clone
end
def visit_Dataflowcb_14(bind)
_append(bind[22],bind[23])
end
def visit_Dataflowcb_15(bind)
many_end(bind[21])
end
def visit_Dataflowcb_16(bind)
Many.create({:ary=>bind[0]}).normalize
end
def visit_Dataflowcb_17(bind)
@src.to
end
def visit_Dataflowcb_18(bind)
bind[26]=[bind[26]]
end
def visit_Dataflowcb_19(bind)
@marked<<ssanum(@src.var)
end
def visit_Dataflowcb_2(bind)
Apply[*bind[0]]
end
def visit_Dataflowcb_20(bind)
Pass.create({:to=>bind[27],:var=>@src.var}).normalize
end
def visit_Dataflowcb_21(bind)
Act[bind[0],@src.pred]
end
def visit_Dataflowcb_22(bind)
@marked<<bind[30] if @src.pred || !@src.pure
end
def visit_Dataflowcb_23(bind)
bind[30].ary
end
def visit_Dataflowcb_24(bind)
bind[31]=[bind[31]]
end
def visit_Dataflowcb_25(bind)
bind[7].each{|v| edges.add(ssanum(v),bind[30]); edges.add(bind[30],newssanum(v.clone));}; bind[30]
end
def visit_Dataflowcb_26(bind)
bind_end(@src)
end
def visit_Dataflowcb_27(bind)
@src
end
def visit_Dataflowcb_28(bind)
@src.vars
end
def visit_Dataflowcb_29(bind)
bind[40]=[bind[40]]
end
def visit_Dataflowcb_3(bind)
bind[5]=[bind[5]]
end
def visit_Dataflowcb_30(bind)
bind[7].each{|w| @edges.add(ssanum(w),@src) } ; @src
end
def visit_Dataflowcb_31(bind)
CAct
end
def visit_Dataflowcb_32(bind)
Bnding
end
def visit_Dataflowcb_33(bind)
Global
end
def visit_Dataflowcb_34(bind)
Key
end
def visit_Dataflowcb_35(bind)
@src
end
def visit_Dataflowcb_36(bind)
_append(bind[47],bind[48])
end
def visit_Dataflowcb_37(bind)
Lookahead[*bind[0]]
end
def visit_Dataflowcb_38(bind)
@src.dup
end
def visit_Dataflowcb_4(bind)
bind[7].each{|v| @marked<<ssanum(v)}
end
def visit_Dataflowcb_5(bind)
oldssanums.clone
end
def visit_Dataflowcb_6(bind)
@oldssanums=bind[12].clone
end
def visit_Dataflowcb_7(bind)
_append(bind[0],bind[13])
end
def visit_Dataflowcb_8(bind)
bind[11]<<oldssanums.clone
end
def visit_Dataflowcb_9(bind)
or_end(bind[11])
end

end


class Dead_Code_Deleter3 < Traverser_Clone2
def self.switchcb_Dead_Code_Deleter36(e)
return 0 if e<=Act
return 1 if e<=CAct
return 2 if e<=Result
return 3 if e<=Bind
return 4 if e<=Local
return 5 if e<=Object
return 6
end
@@switchhashDead_Code_Deleter36=Hash.new{|h,k| h[k]=switchcb_Dead_Code_Deleter36(k)}
def switchcbDead_Code_Deleter36(e)
@@switchhashDead_Code_Deleter36[e.class]
end
def self.switchcb_Dead_Code_Deleter37(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
return 2 if e<=Object
return 3
end
@@switchhashDead_Code_Deleter37=Hash.new{|h,k| h[k]=switchcb_Dead_Code_Deleter37(k)}
def switchcbDead_Code_Deleter37(e)
@@switchhashDead_Code_Deleter37[e.class]
end
def clas_Dead_Code_Deleter3cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_Dead_Code_Deleter3cb_1(bind)
(false) || FAIL
end
def root_Dead_Code_Deleter3cb_1(bind)
@src
end
def root_Dead_Code_Deleter3cb_2(bind)
bind[0]=[bind[0]]
end
def root_Dead_Code_Deleter3cb_3(bind)
Rule
end
def root_Dead_Code_Deleter3cb_4(bind)
@reachable=@src.reachable
end
def root_Dead_Code_Deleter3cb_5(bind)
@src.reachable=nil;@src.cfg=nil
end
def traverse_Dead_Code_Deleter3cb_1(bind)
@changed
end
def traverse_Dead_Code_Deleter3cb_2(bind)
@src
end
def traverse_Dead_Code_Deleter3cb_3(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Dead_Code_Deleter3cb_4(bind)
bind[4]=[bind[4]]
end
def traverse_Dead_Code_Deleter3cb_5(bind)
@changed=false
end
def traverse_Dead_Code_Deleter3cb_6(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
end
def traverse_Dead_Code_Deleter3cb_7(bind)
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
bind[3]<<bind[4]
end
def traverse_item_Dead_Code_Deleter3cb_3(bind)
@changed=true
end
def traverse_item_Dead_Code_Deleter3cb_4(bind)
@changed=true
end
def visit_Dead_Code_Deleter3cb_1(bind)
Act
end
def visit_Dead_Code_Deleter3cb_10(bind)
@reachable[bind[1].ssaname] ? bind[1] : Act[]
end
def visit_Dead_Code_Deleter3cb_2(bind)
CAct
end
def visit_Dead_Code_Deleter3cb_3(bind)
Result
end
def visit_Dead_Code_Deleter3cb_4(bind)
@src
end
def visit_Dead_Code_Deleter3cb_5(bind)
@reachable[bind[1]] ? bind[1] : Act[]
end
def visit_Dead_Code_Deleter3cb_6(bind)
@src
end
def visit_Dead_Code_Deleter3cb_7(bind)
@src.expr
end
def visit_Dead_Code_Deleter3cb_8(bind)
@reachable[bind[4]] ? @src : bind[6]
end
def visit_Dead_Code_Deleter3cb_9(bind)
@src
end

end




def dataflow_ssa_compiled_by
'f993c99cf7829af123e91937da87b3e8'
end
def dataflow_ssa_source_hash
'ab2ba60da629c9e89c0c52e0cb8cc7c1'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'f25c5fe44d48068aa38f033af3443854'
end
  require 'compiled/dataflow_ssa_c'
