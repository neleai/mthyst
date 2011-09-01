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

class Dataflow < Traverser
def self.switchcb_Dataflow1(e)
return 0 if e<=Apply
return 1 if e<=Or
return 2 if e<=Many
return 3 if e<=Pass
return 4 if e<=Act
return 5 if e<=Bind
return 6 if e<=Result
return 7 if e<=CAct
return 8 if e<=Object
return 9
end
@@switchhashDataflow1=Hash.new{|h,k| h[k]=switchcb_Dataflow1(k)}
def switchcbDataflow1(e)
@@switchhashDataflow1[e.class]
end
def self.switchcb_Dataflow2(e)
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
@@switchhashDataflow2=Hash.new{|h,k| h[k]=switchcb_Dataflow2(k)}
def switchcbDataflow2(e)
@@switchhashDataflow2[e.class]
end
def self.switchcb_Dataflow3(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
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
@src.name
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
@src
end
def visit_Dataflowcb_10(bind)
ssanums.clone
end
def visit_Dataflowcb_11(bind)
many_end(bind[13])
end
def visit_Dataflowcb_12(bind)
@src
end
def visit_Dataflowcb_13(bind)
@marked<<ssanum(@src.var)
end
def visit_Dataflowcb_14(bind)
@src
end
def visit_Dataflowcb_15(bind)
@marked<<@src if @src.pred || !@src.pure
end
def visit_Dataflowcb_16(bind)
@src.ary
end
def visit_Dataflowcb_17(bind)
bind[23]=[bind[23]]
end
def visit_Dataflowcb_18(bind)
bind[4].each{|v| edges.add(ssanum(v),@src); edges.add(@src,newssanum(v.clone));}; @src
end
def visit_Dataflowcb_19(bind)
set_end(@src)
end
def visit_Dataflowcb_2(bind)
bind[2]=[bind[2]]
end
def visit_Dataflowcb_20(bind)
@src
end
def visit_Dataflowcb_21(bind)
@src.vars
end
def visit_Dataflowcb_22(bind)
bind[34]=[bind[34]]
end
def visit_Dataflowcb_23(bind)
bind[4].each{|w| @edges.add(ssanum(w),@src) } ; @src
end
def visit_Dataflowcb_24(bind)
@src
end
def visit_Dataflowcb_3(bind)
bind[4].each{|v| @marked<<ssanum(v)}
end
def visit_Dataflowcb_4(bind)
@src
end
def visit_Dataflowcb_5(bind)
oldssanums.clone
end
def visit_Dataflowcb_6(bind)
@oldssanums=bind[10].clone
end
def visit_Dataflowcb_7(bind)
bind[9]<<oldssanums.clone
end
def visit_Dataflowcb_8(bind)
or_end(bind[9])
end
def visit_Dataflowcb_9(bind)
@src
end

end


class Dead_Code_Deleter3 < Traverser_Clone2
def self.switchcb_Dead_Code_Deleter35(e)
return 0 if e<=Bind
return 1 if e<=Local
return 2 if e<=Object
return 3
end
@@switchhashDead_Code_Deleter35=Hash.new{|h,k| h[k]=switchcb_Dead_Code_Deleter35(k)}
def switchcbDead_Code_Deleter35(e)
@@switchhashDead_Code_Deleter35[e.class]
end
def self.switchcb_Dead_Code_Deleter36(e)
return 0 if e<=Array
return 1 if e<=AmethystAST
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
(bind[2]||=bind[1].clone;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed
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
@src
end
def visit_Dead_Code_Deleter3cb_10(bind)
@reachable[bind[8]] ? bind[8] : Act[]
end
def visit_Dead_Code_Deleter3cb_2(bind)
@src.expr
end
def visit_Dead_Code_Deleter3cb_3(bind)
@reachable[bind[1]] ? @src : bind[3]
end
def visit_Dead_Code_Deleter3cb_4(bind)
@src
end
def visit_Dead_Code_Deleter3cb_5(bind)
@reachable[bind[8].ssaname] ? bind[8] : Act[]
end
def visit_Dead_Code_Deleter3cb_6(bind)
Act
end
def visit_Dead_Code_Deleter3cb_7(bind)
CAct
end
def visit_Dead_Code_Deleter3cb_8(bind)
Result
end
def visit_Dead_Code_Deleter3cb_9(bind)
@src
end

end




def dataflow_ssa_compiled_by
'cc80c0c6d1bde23757fa9216e26c9a31'
end
def dataflow_ssa_source_hash
'256feaf7853c4c8892e4b18aca74ea36'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'53ec7e3f62d047fc133e59c512a385b6'
end
  require 'compiled/dataflow_ssa_c'
