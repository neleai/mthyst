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
def self.switchcb_1(e)
return 0 if e<=Or
return 1 if e<=Apply
return 2 if e<=Act
return 3 if e<=Bind
return 4 if e<=Result
return 5 if e<=Pass
return 6 if e<=Many
return 7
end
@@switchhash1=Hash.new{|h,k| h[k]=switchcb_1(k)}
def switchcb1(e)
@@switchhash1[e.class]
end
def self.switchcb_2(e)
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
@@switchhash2=Hash.new{|h,k| h[k]=switchcb_2(k)}
def switchcb2(e)
@@switchhash2[e.class]
end
def clas_Dataflowcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
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
Array
end
def traverse_item_Dataflowcb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Dataflowcb_4(bind)
AmethystAST
end
def vars_in_Dataflowcb_1(bind)
bind[0]=[]
end
def vars_in_Dataflowcb_10(bind)
@src
end
def vars_in_Dataflowcb_11(bind)
_append(bind[0],bind[6])
end
def vars_in_Dataflowcb_12(bind)
Key
end
def vars_in_Dataflowcb_13(bind)
@src
end
def vars_in_Dataflowcb_14(bind)
_append(bind[0],bind[8])
end
def vars_in_Dataflowcb_15(bind)
@marked<<@src
end
def vars_in_Dataflowcb_16(bind)
Result
end
def vars_in_Dataflowcb_17(bind)
@src
end
def vars_in_Dataflowcb_18(bind)
_append(bind[0],bind[10])
end
def vars_in_Dataflowcb_19(bind)
Strin
end
def vars_in_Dataflowcb_2(bind)
Global
end
def vars_in_Dataflowcb_20(bind)
_append(bind[0],bind[12])
end
def vars_in_Dataflowcb_21(bind)
Args
end
def vars_in_Dataflowcb_22(bind)
_append(bind[0],bind[14])
end
def vars_in_Dataflowcb_23(bind)
Bind
end
def vars_in_Dataflowcb_24(bind)
@src.name
end
def vars_in_Dataflowcb_25(bind)
bind[16]=[bind[16]]
end
def vars_in_Dataflowcb_26(bind)
_append(bind[0],bind[17])
end
def vars_in_Dataflowcb_27(bind)
Local
end
def vars_in_Dataflowcb_28(bind)
@src
end
def vars_in_Dataflowcb_29(bind)
_append(bind[0],bind[19])
end
def vars_in_Dataflowcb_3(bind)
@src
end
def vars_in_Dataflowcb_4(bind)
_append(bind[0],bind[2])
end
def vars_in_Dataflowcb_5(bind)
@marked<<@src
end
def vars_in_Dataflowcb_6(bind)
Act
end
def vars_in_Dataflowcb_7(bind)
@src
end
def vars_in_Dataflowcb_8(bind)
_append(bind[0],bind[4])
end
def vars_in_Dataflowcb_9(bind)
CAct
end
def visit_Dataflowcb_1(bind)
Or
end
def visit_Dataflowcb_10(bind)
bind[7].each{|v| @marked<<ssanum(v)}
end
def visit_Dataflowcb_11(bind)
@src
end
def visit_Dataflowcb_12(bind)
Act
end
def visit_Dataflowcb_13(bind)
@marked<<bind[9] if @src.pred || !@src.pure
end
def visit_Dataflowcb_14(bind)
@src.ary
end
def visit_Dataflowcb_15(bind)
bind[10]=[bind[10]]
end
def visit_Dataflowcb_16(bind)
bind[7].each{|v| edges.add(ssanum(v),bind[9]); edges.add(bind[9],newssanum(v.clone));}; bind[9]
end
def visit_Dataflowcb_17(bind)
Bind
end
def visit_Dataflowcb_18(bind)
set_end(@src) 
end
def visit_Dataflowcb_19(bind)
@src
end
def visit_Dataflowcb_2(bind)
oldssanums.clone
end
def visit_Dataflowcb_20(bind)
Result
end
def visit_Dataflowcb_21(bind)
@src.vars
end
def visit_Dataflowcb_22(bind)
bind[14]=[bind[14]]
end
def visit_Dataflowcb_23(bind)
bind[7].each{|w| @edges.add(ssanum(w),bind[9]) } ; bind[9]
end
def visit_Dataflowcb_24(bind)
Pass
end
def visit_Dataflowcb_25(bind)
@marked<<ssanum(@src.var)
end
def visit_Dataflowcb_26(bind)
@src
end
def visit_Dataflowcb_27(bind)
Many
end
def visit_Dataflowcb_28(bind)
ssanums.clone
end
def visit_Dataflowcb_29(bind)
many_end(bind[18])
end
def visit_Dataflowcb_3(bind)
@oldssanums=bind[2].clone
end
def visit_Dataflowcb_30(bind)
@src
end
def visit_Dataflowcb_4(bind)
bind[1]<<oldssanums.clone
end
def visit_Dataflowcb_5(bind)
or_end(bind[1])
end
def visit_Dataflowcb_6(bind)
@src
end
def visit_Dataflowcb_7(bind)
Apply
end
def visit_Dataflowcb_8(bind)
@src
end
def visit_Dataflowcb_9(bind)
bind[5]=[bind[5]]
end

end


class Dead_Code_Deleter3 < Traverser
def self.switchcb_4(e)
return 0 if e<=Local
return 1 if e<=CAct
return 2 if e<=Act
return 3 if e<=Result
return 4 if e<=Bind
return 5
end
@@switchhash4=Hash.new{|h,k| h[k]=switchcb_4(k)}
def switchcb4(e)
@@switchhash4[e.class]
end
def self.switchcb_3(e)
return 0 if e<=CAct
return 1 if e<=Act
return 2 if e<=Result
return 3
end
@@switchhash3=Hash.new{|h,k| h[k]=switchcb_3(k)}
def switchcb3(e)
@@switchhash3[e.class]
end
def self.switchcb_3(e)
return 0 if e<=CAct
return 1 if e<=Act
return 2 if e<=Result
return 3
end
@@switchhash3=Hash.new{|h,k| h[k]=switchcb_3(k)}
def switchcb3(e)
@@switchhash3[e.class]
end
def self.switchcb_3(e)
return 0 if e<=CAct
return 1 if e<=Act
return 2 if e<=Result
return 3
end
@@switchhash3=Hash.new{|h,k| h[k]=switchcb_3(k)}
def switchcb3(e)
@@switchhash3[e.class]
end
def clas_Dead_Code_Deleter3cb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
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
def root_Dead_Code_Deleter3cb_6(bind)
@src
end
def traverse_Dead_Code_Deleter3cb_1(bind)
@src
end
def traverse_Dead_Code_Deleter3cb_2(bind)
(@src.instance_variables).map{|v| [v,@src.instance_variable_get(v)] }
end
def traverse_Dead_Code_Deleter3cb_3(bind)
bind[1]=[bind[1]]
end
def traverse_Dead_Code_Deleter3cb_4(bind)
bind[0].instance_variable_set(bind[4],bind[5])
end
def traverse_Dead_Code_Deleter3cb_5(bind)
@src
end
def traverse_item_Dead_Code_Deleter3cb_1(bind)
@changed=true
end
def traverse_item_Dead_Code_Deleter3cb_2(bind)
Array
end
def traverse_item_Dead_Code_Deleter3cb_3(bind)
bind[3]<<bind[4]
end
def traverse_item_Dead_Code_Deleter3cb_4(bind)
AmethystAST
end
def visit_Dead_Code_Deleter3cb_1(bind)
Local
end
def visit_Dead_Code_Deleter3cb_10(bind)
Act
end
def visit_Dead_Code_Deleter3cb_11(bind)
Result
end
def visit_Dead_Code_Deleter3cb_12(bind)
@src
end
def visit_Dead_Code_Deleter3cb_13(bind)
@reachable[bind[1]] ? bind[1] : Act[]
end
def visit_Dead_Code_Deleter3cb_14(bind)
CAct
end
def visit_Dead_Code_Deleter3cb_15(bind)
Act
end
def visit_Dead_Code_Deleter3cb_16(bind)
Result
end
def visit_Dead_Code_Deleter3cb_17(bind)
@src
end
def visit_Dead_Code_Deleter3cb_18(bind)
@reachable[bind[1]] ? bind[1] : Act[]
end
def visit_Dead_Code_Deleter3cb_19(bind)
Bind
end
def visit_Dead_Code_Deleter3cb_2(bind)
@src
end
def visit_Dead_Code_Deleter3cb_20(bind)
@src.expr
end
def visit_Dead_Code_Deleter3cb_21(bind)
@src
end
def visit_Dead_Code_Deleter3cb_22(bind)
@reachable[bind[1]] ? bind[1] : bind[5]
end
def visit_Dead_Code_Deleter3cb_3(bind)
@reachable[bind[1].ssaname] ? bind[1] : Act[]
end
def visit_Dead_Code_Deleter3cb_4(bind)
CAct
end
def visit_Dead_Code_Deleter3cb_5(bind)
Act
end
def visit_Dead_Code_Deleter3cb_6(bind)
Result
end
def visit_Dead_Code_Deleter3cb_7(bind)
@src
end
def visit_Dead_Code_Deleter3cb_8(bind)
@reachable[bind[1]] ? bind[1] : Act[]
end
def visit_Dead_Code_Deleter3cb_9(bind)
CAct
end

end




def testversion(r)
 raise "invalid version" if r!='b8be189196a8304ea0e358a9ad1ad6a9'
end
  require 'compiled/dataflow_ssa_c'
