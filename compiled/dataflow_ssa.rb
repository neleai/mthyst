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
		bnd=Bind[n,exp.expr]
		val=bnd.expr
		val=val.expr while val.is_a?(Bind) 
    edges.add(val,n)
		bnd
	end
	def or_end(join)
   ssanums.clone.each{|k,v|
      u=[]
      join.each{|s| u<<s[k]}
      if u.uniq.size>=1
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

def Dataflow_Act_lb_bind(bind)
Act[bind[0],src.pred]
end
def Dataflow_Apply_lb__ti_b(bind)
Apply[*bind[0]]
end
def Dataflow_Lookahea(bind)
Lookahead[*bind[0]]
end
def Dataflow_Many_dot_cre(bind)
Many.create({:ary=>bind[0]}).normalize
end
def Dataflow_Or_lb__ti_bind(bind)
Or[*bind[0]]
end
def Dataflow_Pass_dot_cre(bind)
Pass.create({:to=>bind[48],:var=>bind[8],:enter=>src.enter}).normalize
end
def Dataflow_Switch_lb_(bind)
Switch[{:ary=>bind[58],:act=>src.act,:defs=>src.defs,:first=>src.first,:header=>src.header,:init=>src.init}]
end
def Dataflow__append_lp_(bind)
_append(bind[4],bind[5])
end
def Dataflow__append_lp_10(bind)
_append(bind[42],bind[44])
end
def Dataflow__append_lp_11(bind)
_append(bind[54],bind[55])
end
def Dataflow__append_lp_12(bind)
_append(bind[59],bind[63])
end
def Dataflow__append_lp_13(bind)
_append(bind[0],bind[4])
end
def Dataflow__append_lp_14(bind)
_append(bind[5],bind[6])
end
def Dataflow__append_lp_15(bind)
_append(bind[0],bind[11])
end
def Dataflow__append_lp_16(bind)
_append(bind[0],bind[15])
end
def Dataflow__append_lp_17(bind)
_append(bind[0],bind[19])
end
def Dataflow__append_lp_18(bind)
_append(bind[20],bind[21])
end
def Dataflow__append_lp_19(bind)
_append(bind[0],bind[25])
end
def Dataflow__append_lp_2(bind)
_append(bind[2],bind[3])
end
def Dataflow__append_lp_20(bind)
_append(bind[26],bind[27])
end
def Dataflow__append_lp_21(bind)
_append(bind[0],bind[31])
end
def Dataflow__append_lp_22(bind)
_append(bind[0],bind[37])
end
def Dataflow__append_lp_23(bind)
_append(bind[0],bind[41])
end
def Dataflow__append_lp_24(bind)
_append(bind[1],bind[8])
end
def Dataflow__append_lp_25(bind)
_append(bind[6],bind[8])
end
def Dataflow__append_lp_26(bind)
_append(bind[0],bind[1])
end
def Dataflow__append_lp_27(bind)
_append(bind[8],bind[13])
end
def Dataflow__append_lp_3(bind)
_append(bind[12],bind[13])
end
def Dataflow__append_lp_4(bind)
_append(bind[19],bind[20])
end
def Dataflow__append_lp_5(bind)
_append(bind[22],bind[23])
end
def Dataflow__append_lp_6(bind)
_append(bind[27],bind[28])
end
def Dataflow__append_lp_7(bind)
_append(bind[32],bind[33])
end
def Dataflow__append_lp_8(bind)
_append(bind[37],bind[38])
end
def Dataflow__append_lp_9(bind)
_append(bind[0],bind[43])
end
def Dataflow__at_bnding_eq_(bind)
@bnding=src.bnding
end
def Dataflow__at_changed(bind)
@changed=true
end
def Dataflow__at_changed2(bind)
@changed
end
def Dataflow__at_changed3(bind)
@changed=false
end
def Dataflow__at_marked_lt_(bind)
@marked<<bind[4] if src.pred || !src.pure
end
def Dataflow__at_marked_lt_2(bind)
@marked<<bind[8].ssaname
end
def Dataflow__at_marked_lt_3(bind)
@marked<<src
end
def Dataflow__at_oldssan(bind)
@oldssanums=bind[31]
end
def Dataflow__at_oldssan2(bind)
@oldssanums=bind[31].clone
end
def Dataflow__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Dataflow__lp_src_dot_ins(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Dataflow_bind_end(bind)
bind_end(src)
end
def Dataflow_bind_lb_0_rb__eq_(bind)
bind[0]=[]
end
def Dataflow_bind_lb_41_rb_(bind)
bind[41]<<oldssanums.clone
end
def Dataflow_bind_lb_4_rb__dot_(bind)
bind[4].ary
end
def Dataflow_bind_lb_58_rb_(bind)
bind[58]<<[bind[61],bind[62]]
end
def Dataflow_bind_lb_5_rb__lt_(bind)
bind[5]<<bind[7]
end
def Dataflow_bind_lb_6_rb__dot_(bind)
bind[6].each{|v| @marked<<ssanum(v)};src.args=bind[6]
end
def Dataflow_bind_lb_8_rb__dot_(bind)
bind[8].each{|v| edges.add(ssanum(v),bind[4]); edges.add(bind[4],newssanum(v));}; bind[4]
end
def Dataflow_bind_lb_8_rb__dot_2(bind)
bind[8].each{|v| @marked<<ssanum(v)}
end
def Dataflow_if_sp_bind_lb_(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Dataflow_many_end(bind)
many_end(bind[36])
end
def Dataflow_n_eq_Result(bind)
n=Result[{:name=>src.name,:varnames=>src.varnames,:vars=>bind[8]}]; bind[8].each{|w| @edges.add(w.ssaname,n) } ; n
end
def Dataflow_oldssanu(bind)
oldssanums.clone
end
def Dataflow_or_end_lp_b(bind)
or_end(bind[41])
end
def Dataflow_src(bind)
src
end
def Dataflow_src_dot_args(bind)
src.args
end
def Dataflow_src_dot_body(bind)
src.body
end
def Dataflow_src_dot_body2(bind)
src.body=bind[9]
end
def Dataflow_src_dot_reac(bind)
src.reachable=@edges.reverse.reachable(@marked+[ssanum(src.body[-1]),src.body]); src.cfg=@edges; 
end
def Dataflow_src_dot_to(bind)
src.to
end
def Dataflow_src_dot_var(bind)
src.var
end
def Dataflow_src_dot_vars(bind)
src.vars
end
def Dataflow_ssanum_lp_s(bind)
ssanum(src)
end
def Dataflow_ssanums_dot_(bind)
ssanums.clone
end

end


class Dead_Code_Deleter3 < Traverser_Clone2

def Dead_Code_Deleter3__append_lp_(bind)
_append(bind[2],bind[3])
end
def Dead_Code_Deleter3__append_lp_2(bind)
_append(bind[6],bind[7])
end
def Dead_Code_Deleter3__append_lp_3(bind)
_append(bind[10],bind[11])
end
def Dead_Code_Deleter3__append_lp_4(bind)
_append(bind[13],bind[14])
end
def Dead_Code_Deleter3__append_lp_5(bind)
_append(bind[18],bind[19])
end
def Dead_Code_Deleter3__append_lp_6(bind)
_append(bind[6],bind[8])
end
def Dead_Code_Deleter3__append_lp_7(bind)
_append(bind[0],bind[1])
end
def Dead_Code_Deleter3__append_lp_8(bind)
_append(bind[8],bind[13])
end
def Dead_Code_Deleter3__at_bounded(bind)
@bounded||=@reachable[src.name]
end
def Dead_Code_Deleter3__at_bounded2(bind)
@bounded=false
end
def Dead_Code_Deleter3__at_changed(bind)
@changed=true
end
def Dead_Code_Deleter3__at_changed2(bind)
@changed
end
def Dead_Code_Deleter3__at_changed3(bind)
@changed=false
end
def Dead_Code_Deleter3__at_reachab(bind)
@reachable=src.reachable
end
def Dead_Code_Deleter3__at_reachab2(bind)
@reachable[src.name] ? src : src.expr
end
def Dead_Code_Deleter3__at_reachab3(bind)
@reachable[bind[1]] ? bind[1] : Placeholder
end
def Dead_Code_Deleter3__lp_(bind)
(!@reachable[bind[1]] ||(bind[1].pure && !@bounded)) ? Placeholder : bind[1]
end
def Dead_Code_Deleter3__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Dead_Code_Deleter3__lp_src_dot_ins(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Dead_Code_Deleter3_bind_lb_5_rb__lt_(bind)
bind[5]<<bind[7]
end
def Dead_Code_Deleter3_if_sp_bind_lb_(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Dead_Code_Deleter3_src(bind)
src
end
def Dead_Code_Deleter3_src_dot_reac(bind)
src.reachable=nil;src.cfg=nil
end

end


class Forget_SSA < Traverser_Clone2

def Forget_SSA__append_lp_(bind)
_append(bind[1],bind[2])
end
def Forget_SSA__append_lp_2(bind)
_append(bind[6],bind[8])
end
def Forget_SSA__append_lp_3(bind)
_append(bind[0],bind[1])
end
def Forget_SSA__append_lp_4(bind)
_append(bind[8],bind[13])
end
def Forget_SSA__at_changed(bind)
@changed=true
end
def Forget_SSA__at_changed2(bind)
@changed
end
def Forget_SSA__at_changed3(bind)
@changed=false
end
def Forget_SSA__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Forget_SSA__lp_src_dot_ins(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Forget_SSA_bind_lb_5_rb__lt_(bind)
bind[5]<<bind[7]
end
def Forget_SSA_if_sp_bind_lb_(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Forget_SSA_src(bind)
src
end
def Forget_SSA_src_dot_unss(bind)
src.unssa
end

end


def dataflow_ssa_compiled_by
'005cbb51e8032e32750f2962f54f6849'
end
def dataflow_ssa_source_hash
'7c8e4cb3bb6398da0fdd36d225497489'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'cdd5523e152cb348e7bd4222b0ec9e0b'
end
  require 'compiled/dataflow_ssa_c'
