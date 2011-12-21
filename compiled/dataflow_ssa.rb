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

def Dataflow_Act_lb_bind_lb_0_rb_(bind)
Act[bind[0],src.pred]
end
def Dataflow_Apply_lb__ti_bind_lb_(bind)
Apply[*bind[0]]
end
def Dataflow_Lookahead_lb__ti_b(bind)
Lookahead[*bind[0]]
end
def Dataflow_Many_dot_create_lp_(bind)
Many.create({:ary=>bind[0]}).normalize
end
def Dataflow_Or_lb__ti_bind_lb_0_rb__rb_(bind)
Or[*bind[0]]
end
def Dataflow_Pass_dot_create_lp_(bind)
Pass.create({:to=>bind[48],:var=>bind[8],:enter=>src.enter}).normalize
end
def Dataflow_Switch_lb__le__co_ary(bind)
Switch[{:ary=>bind[58],:act=>src.act,:defs=>src.defs,:first=>src.first,:header=>src.header,:init=>src.init}]
end
def Dataflow__append_lp_bind(bind)
_append(bind[4],bind[5])
end
def Dataflow__append_lp_bind10(bind)
_append(bind[42],bind[44])
end
def Dataflow__append_lp_bind11(bind)
_append(bind[54],bind[55])
end
def Dataflow__append_lp_bind12(bind)
_append(bind[59],bind[63])
end
def Dataflow__append_lp_bind13(bind)
_append(bind[0],bind[4])
end
def Dataflow__append_lp_bind14(bind)
_append(bind[5],bind[6])
end
def Dataflow__append_lp_bind15(bind)
_append(bind[0],bind[11])
end
def Dataflow__append_lp_bind16(bind)
_append(bind[0],bind[15])
end
def Dataflow__append_lp_bind17(bind)
_append(bind[0],bind[19])
end
def Dataflow__append_lp_bind18(bind)
_append(bind[20],bind[21])
end
def Dataflow__append_lp_bind19(bind)
_append(bind[0],bind[25])
end
def Dataflow__append_lp_bind2(bind)
_append(bind[2],bind[3])
end
def Dataflow__append_lp_bind20(bind)
_append(bind[26],bind[27])
end
def Dataflow__append_lp_bind21(bind)
_append(bind[0],bind[31])
end
def Dataflow__append_lp_bind22(bind)
_append(bind[0],bind[37])
end
def Dataflow__append_lp_bind23(bind)
_append(bind[0],bind[41])
end
def Dataflow__append_lp_bind24(bind)
_append(bind[1],bind[8])
end
def Dataflow__append_lp_bind25(bind)
_append(bind[6],bind[8])
end
def Dataflow__append_lp_bind26(bind)
_append(bind[0],bind[1])
end
def Dataflow__append_lp_bind27(bind)
_append(bind[8],bind[13])
end
def Dataflow__append_lp_bind3(bind)
_append(bind[12],bind[13])
end
def Dataflow__append_lp_bind4(bind)
_append(bind[19],bind[20])
end
def Dataflow__append_lp_bind5(bind)
_append(bind[22],bind[23])
end
def Dataflow__append_lp_bind6(bind)
_append(bind[27],bind[28])
end
def Dataflow__append_lp_bind7(bind)
_append(bind[32],bind[33])
end
def Dataflow__append_lp_bind8(bind)
_append(bind[37],bind[38])
end
def Dataflow__append_lp_bind9(bind)
_append(bind[0],bind[43])
end
def Dataflow__at_bnding_eq_src_dot_(bind)
@bnding=src.bnding
end
def Dataflow__at_changed(bind)
@changed
end
def Dataflow__at_changed_eq_fal(bind)
@changed=false
end
def Dataflow__at_changed_eq_tru(bind)
@changed=true
end
def Dataflow__at_marked_lt__lt_bin(bind)
@marked<<bind[4] if src.pred || !src.pure
end
def Dataflow__at_marked_lt__lt_bin2(bind)
@marked<<bind[8].ssaname
end
def Dataflow__at_marked_lt__lt_src(bind)
@marked<<src
end
def Dataflow__at_oldssanums_eq_(bind)
@oldssanums=bind[31]
end
def Dataflow__at_oldssanums_eq_2(bind)
@oldssanums=bind[31].clone
end
def Dataflow__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Dataflow__lp_src_dot_instanc(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Dataflow_bind_end_lp_src(bind)
bind_end(src)
end
def Dataflow_bind_lb_0_rb__eq__lb__rb_(bind)
bind[0]=[]
end
def Dataflow_bind_lb_41_rb__lt__lt_ol(bind)
bind[41]<<oldssanums.clone
end
def Dataflow_bind_lb_4_rb__dot_ary(bind)
bind[4].ary
end
def Dataflow_bind_lb_58_rb__lt__lt__lb_b(bind)
bind[58]<<[bind[61],bind[62]]
end
def Dataflow_bind_lb_5_rb__lt__lt_bin(bind)
bind[5]<<bind[7]
end
def Dataflow_bind_lb_6_rb__dot_each(bind)
bind[6].each{|v| @marked<<ssanum(v)};src.args=bind[6]
end
def Dataflow_bind_lb_8_rb__dot_each(bind)
bind[8].each{|v| edges.add(ssanum(v),bind[4]); edges.add(bind[4],newssanum(v));}; bind[4]
end
def Dataflow_bind_lb_8_rb__dot_each2(bind)
bind[8].each{|v| @marked<<ssanum(v)}
end
def Dataflow_if_sp_bind_lb_5_rb_(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Dataflow_many_end_lp_bin(bind)
many_end(bind[36])
end
def Dataflow_n_eq_Result_lb__le__co_n(bind)
n=Result[{:name=>src.name,:varnames=>src.varnames,:vars=>bind[8]}]; bind[8].each{|w| @edges.add(w.ssaname,n) } ; n
end
def Dataflow_oldssanums_dot_c(bind)
oldssanums.clone
end
def Dataflow_or_end_lp_bind_lb_(bind)
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
def Dataflow_src_dot_body_eq_bin(bind)
src.body=bind[9]
end
def Dataflow_src_dot_reachabl(bind)
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
def Dataflow_ssanum_lp_src_rp_(bind)
ssanum(src)
end
def Dataflow_ssanums_dot_clon(bind)
ssanums.clone
end

end


class Dead_Code_Deleter3 < Traverser_Clone2

def Dead_Code_Deleter3__append_lp_bind(bind)
_append(bind[2],bind[3])
end
def Dead_Code_Deleter3__append_lp_bind2(bind)
_append(bind[6],bind[7])
end
def Dead_Code_Deleter3__append_lp_bind3(bind)
_append(bind[10],bind[11])
end
def Dead_Code_Deleter3__append_lp_bind4(bind)
_append(bind[13],bind[14])
end
def Dead_Code_Deleter3__append_lp_bind5(bind)
_append(bind[18],bind[19])
end
def Dead_Code_Deleter3__append_lp_bind6(bind)
_append(bind[6],bind[8])
end
def Dead_Code_Deleter3__append_lp_bind7(bind)
_append(bind[0],bind[1])
end
def Dead_Code_Deleter3__append_lp_bind8(bind)
_append(bind[8],bind[13])
end
def Dead_Code_Deleter3__at_bounded(bind)
@bounded||=@reachable[src.name]
end
def Dead_Code_Deleter3__at_bounded_eq_fal(bind)
@bounded=false
end
def Dead_Code_Deleter3__at_changed(bind)
@changed
end
def Dead_Code_Deleter3__at_changed_eq_fal(bind)
@changed=false
end
def Dead_Code_Deleter3__at_changed_eq_tru(bind)
@changed=true
end
def Dead_Code_Deleter3__at_reachable_eq_s(bind)
@reachable=src.reachable
end
def Dead_Code_Deleter3__at_reachable_lb_b(bind)
@reachable[bind[1]] ? bind[1] : Placeholder
end
def Dead_Code_Deleter3__at_reachable_lb_s(bind)
@reachable[src.name] ? src : src.expr
end
def Dead_Code_Deleter3__lp_(bind)
(!@reachable[bind[1]] ||(bind[1].pure && !@bounded)) ? Placeholder : bind[1]
end
def Dead_Code_Deleter3__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Dead_Code_Deleter3__lp_src_dot_instanc(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Dead_Code_Deleter3_bind_lb_5_rb__lt__lt_bin(bind)
bind[5]<<bind[7]
end
def Dead_Code_Deleter3_if_sp_bind_lb_5_rb_(bind)
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
def Dead_Code_Deleter3_src_dot_reachabl(bind)
src.reachable=nil;src.cfg=nil
end

end


class Forget_SSA < Traverser_Clone2

def Forget_SSA__append_lp_bind(bind)
_append(bind[1],bind[2])
end
def Forget_SSA__append_lp_bind2(bind)
_append(bind[6],bind[8])
end
def Forget_SSA__append_lp_bind3(bind)
_append(bind[0],bind[1])
end
def Forget_SSA__append_lp_bind4(bind)
_append(bind[8],bind[13])
end
def Forget_SSA__at_changed(bind)
@changed
end
def Forget_SSA__at_changed_eq_fal(bind)
@changed=false
end
def Forget_SSA__at_changed_eq_tru(bind)
@changed=true
end
def Forget_SSA__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Forget_SSA__lp_src_dot_instanc(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Forget_SSA_bind_lb_5_rb__lt__lt_bin(bind)
bind[5]<<bind[7]
end
def Forget_SSA_if_sp_bind_lb_5_rb_(bind)
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
def Forget_SSA_src_dot_unssa(bind)
src.unssa
end

end


def dataflow_ssa_compiled_by
'472138cdffc8d639efb367af8b54ad09'
end
def dataflow_ssa_source_hash
'7c8e4cb3bb6398da0fdd36d225497489'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'b942ca024b264470e834fc796d1fbb91'
end
  require 'compiled/dataflow_ssa_c'
