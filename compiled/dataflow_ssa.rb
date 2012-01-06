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

def Dataflow_Act_lb_bind_9896(bind)
Act[bind[0],src.pred]
end
def Dataflow_Apply_lb__ti_b_04ac(bind)
Apply[*bind[0]]
end
def Dataflow_Lookahea_1748(bind)
Lookahead[*bind[0]]
end
def Dataflow_Many_dot_cre_2065(bind)
Many.create({:ary=>bind[0]}).normalize
end
def Dataflow_Or_lb__ti_bind_2fd2(bind)
Or[*bind[0]]
end
def Dataflow_Pass_dot_cre_fa0a(bind)
Pass.create({:to=>bind[42],:var=>bind[9],:enter=>src.enter}).normalize
end
def Dataflow_Switch_lb__le__e3b2(bind)
Switch[{:ary=>bind[53],:act=>src.act,:defs=>src.defs,:first=>src.first,:header=>src.header,:init=>src.init}]
end
def Dataflow__append_lp__0860(bind)
_append(bind[27],bind[28])
end
def Dataflow__append_lp__1484(bind)
_append(bind[0],bind[18])
end
def Dataflow__append_lp__2bc4(bind)
_append(bind[0],bind[21])
end
def Dataflow__append_lp__3bb7(bind)
_append(bind[0],bind[37])
end
def Dataflow__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def Dataflow__append_lp__473a(bind)
_append(bind[13],bind[14])
end
def Dataflow__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def Dataflow__append_lp__653e(bind)
_append(bind[0],bind[9])
end
def Dataflow__append_lp__66a2(bind)
_append(bind[0],bind[12])
end
def Dataflow__append_lp__6f56(bind)
_append(bind[5],bind[6])
end
def Dataflow__append_lp__80de(bind)
_append(bind[0],bind[15])
end
def Dataflow__append_lp__b601(bind)
_append(bind[32],bind[33])
end
def Dataflow__append_lp__c8ef(bind)
_append(bind[0],bind[24])
end
def Dataflow__append_lp__f794(bind)
_append(bind[49],bind[50])
end
def Dataflow__append_lp__f8f8(bind)
_append(bind[0],bind[3])
end
def Dataflow__at_bnding_eq__b94a(bind)
@bnding=src.bnding
end
def Dataflow__at_changed_5352(bind)
@changed=true
end
def Dataflow__at_changed_b885(bind)
@changed=false
end
def Dataflow__at_changed_c681(bind)
@changed
end
def Dataflow__at_marked_lt__3ec2(bind)
@marked<<bind[9].ssaname
end
def Dataflow__at_marked_lt__59bb(bind)
@marked<<src
end
def Dataflow__at_marked_lt__765b(bind)
@marked<<bind[4] if src.pred || !src.pure
end
def Dataflow__at_oldssan_28ff(bind)
@oldssanums=bind[26].clone
end
def Dataflow__at_oldssan_5ad9(bind)
@oldssanums=bind[26]
end
def Dataflow__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Dataflow__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Dataflow_bind_end_6e13(bind)
bind_end(src)
end
def Dataflow_bind_lb_0_rb_(bind)
bind[0]

end
def Dataflow_bind_lb_0_rb__eq__943e(bind)
bind[0]=[]
end
def Dataflow_bind_lb_11_rb__6cc7(bind)
bind[11]<<bind[12]
end
def Dataflow_bind_lb_36_rb__21ca(bind)
bind[36]<<oldssanums.clone
end
def Dataflow_bind_lb_4_rb__dot__c19e(bind)
bind[4].ary
end
def Dataflow_bind_lb_53_rb__04dc(bind)
bind[53]<<[bind[55],bind[56]]
end
def Dataflow_bind_lb_7_rb__dot__abd8(bind)
bind[7].each{|v| @marked<<ssanum(v)};src.args=bind[7]
end
def Dataflow_bind_lb_9_rb__dot__9ffa(bind)
bind[9].each{|v| @marked<<ssanum(v)}
end
def Dataflow_bind_lb_9_rb__dot__b1a9(bind)
bind[9].each{|v| edges.add(ssanum(v),bind[4]); edges.add(bind[4],newssanum(v));}; bind[4]
end
def Dataflow_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Dataflow_many_end_a53b(bind)
many_end(bind[31])
end
def Dataflow_n_eq_Result_fb46(bind)
n=Result[{:name=>src.name,:varnames=>src.varnames,:vars=>bind[9]}]; bind[9].each{|w| @edges.add(w.ssaname,n) } ; n
end
def Dataflow_oldssanu_073d(bind)
oldssanums.clone
end
def Dataflow_or_end_lp_b_7477(bind)
or_end(bind[36])
end
def Dataflow_src_25d9(bind)
src
end
def Dataflow_src_dot_args_2df5(bind)
src.args
end
def Dataflow_src_dot_body_519e(bind)
src.body
end
def Dataflow_src_dot_body_e931(bind)
src.body=bind[10]
end
def Dataflow_src_dot_reac_e743(bind)
src.reachable=@edges.reverse.reachable(@marked+[ssanum(src.body[-1]),src.body]); src.cfg=@edges; 
end
def Dataflow_src_dot_to_5e99(bind)
src.to
end
def Dataflow_src_dot_var_3a88(bind)
src.var
end
def Dataflow_src_dot_vars_2db1(bind)
src.vars
end
def Dataflow_ssanum_lp_s_3920(bind)
ssanum(src)
end
def Dataflow_ssanums_dot__ae08(bind)
ssanums.clone
end

end


class Dead_Code_Deleter3 < Traverser_Clone2

def Dead_Code_Deleter3__at_bounded_6bb2(bind)
@bounded||=@reachable[src.name]
end
def Dead_Code_Deleter3__at_bounded_7c82(bind)
@bounded=false
end
def Dead_Code_Deleter3__at_changed_5352(bind)
@changed=true
end
def Dead_Code_Deleter3__at_changed_b885(bind)
@changed=false
end
def Dead_Code_Deleter3__at_changed_c681(bind)
@changed
end
def Dead_Code_Deleter3__at_reachab_005c(bind)
@reachable[src.name] ? src : src.expr
end
def Dead_Code_Deleter3__at_reachab_725b(bind)
@reachable[bind[1]] ? bind[1] : Placeholder

end
def Dead_Code_Deleter3__at_reachab_8588(bind)
@reachable=src.reachable
end
def Dead_Code_Deleter3__lp_(bind)
(!@reachable[bind[1]] ||(bind[1].pure && !@bounded)) ? Placeholder : bind[1]

end
def Dead_Code_Deleter3__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Dead_Code_Deleter3__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Dead_Code_Deleter3_bind_lb_11_rb__6cc7(bind)
bind[11]<<bind[12]
end
def Dead_Code_Deleter3_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Dead_Code_Deleter3_src_25d9(bind)
src
end
def Dead_Code_Deleter3_src_dot_reac_cd39(bind)
src.reachable=nil;src.cfg=nil
end

end


class Forget_SSA < Traverser_Clone2

def Forget_SSA__at_changed_5352(bind)
@changed=true
end
def Forget_SSA__at_changed_b885(bind)
@changed=false
end
def Forget_SSA__at_changed_c681(bind)
@changed
end
def Forget_SSA__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Forget_SSA__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Forget_SSA_bind_lb_11_rb__6cc7(bind)
bind[11]<<bind[12]
end
def Forget_SSA_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Forget_SSA_src_25d9(bind)
src
end
def Forget_SSA_src_dot_unss_5845(bind)
src.unssa
end

end


def dataflow_ssa_compiled_by
'86c7548de90d3a38ff91d60cbe8f40d0'
end
def dataflow_ssa_source_hash
'7c8e4cb3bb6398da0fdd36d225497489'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'4fc72ec860aea866fc7b8bd33a933e3f'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/dataflow_ssa_c"
