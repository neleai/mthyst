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
def Dataflow_Pass_dot_cre_b54c(bind)
Pass.create({:to=>bind[48],:var=>bind[8],:enter=>src.enter}).normalize
end
def Dataflow_Switch_lb__le__9cb2(bind)
Switch[{:ary=>bind[58],:act=>src.act,:defs=>src.defs,:first=>src.first,:header=>src.header,:init=>src.init}]
end
def Dataflow__append_lp__0860(bind)
_append(bind[27],bind[28])
end
def Dataflow__append_lp__088f(bind)
_append(bind[4],bind[5])
end
def Dataflow__append_lp__0e08(bind)
_append(bind[0],bind[19])
end
def Dataflow__append_lp__19cb(bind)
_append(bind[20],bind[21])
end
def Dataflow__append_lp__2551(bind)
_append(bind[54],bind[55])
end
def Dataflow__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def Dataflow__append_lp__3262(bind)
_append(bind[0],bind[25])
end
def Dataflow__append_lp__37c5(bind)
_append(bind[6],bind[8])
end
def Dataflow__append_lp__3bb7(bind)
_append(bind[0],bind[37])
end
def Dataflow__append_lp__4089(bind)
_append(bind[26],bind[27])
end
def Dataflow__append_lp__4548(bind)
_append(bind[19],bind[20])
end
def Dataflow__append_lp__46f7(bind)
_append(bind[37],bind[38])
end
def Dataflow__append_lp__4d2a(bind)
_append(bind[59],bind[63])
end
def Dataflow__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def Dataflow__append_lp__58ed(bind)
_append(bind[22],bind[23])
end
def Dataflow__append_lp__6e65(bind)
_append(bind[0],bind[43])
end
def Dataflow__append_lp__6f56(bind)
_append(bind[5],bind[6])
end
def Dataflow__append_lp__7140(bind)
_append(bind[12],bind[13])
end
def Dataflow__append_lp__80de(bind)
_append(bind[0],bind[15])
end
def Dataflow__append_lp__9a2e(bind)
_append(bind[0],bind[31])
end
def Dataflow__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end
def Dataflow__append_lp__b40f(bind)
_append(bind[1],bind[8])
end
def Dataflow__append_lp__b601(bind)
_append(bind[32],bind[33])
end
def Dataflow__append_lp__bc95(bind)
_append(bind[0],bind[11])
end
def Dataflow__append_lp__ca44(bind)
_append(bind[42],bind[44])
end
def Dataflow__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Dataflow__append_lp__d51d(bind)
_append(bind[0],bind[41])
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
def Dataflow__at_marked_lt__59bb(bind)
@marked<<src
end
def Dataflow__at_marked_lt__765b(bind)
@marked<<bind[4] if src.pred || !src.pure
end
def Dataflow__at_marked_lt__b8b1(bind)
@marked<<bind[8].ssaname
end
def Dataflow__at_oldssan_96db(bind)
@oldssanums=bind[31]
end
def Dataflow__at_oldssan_d087(bind)
@oldssanums=bind[31].clone
end
def Dataflow__lp_bind_lb_4_rb__d863(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
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
def Dataflow_bind_lb_41_rb__d8ab(bind)
bind[41]<<oldssanums.clone
end
def Dataflow_bind_lb_4_rb__dot__c19e(bind)
bind[4].ary
end
def Dataflow_bind_lb_58_rb__3f1d(bind)
bind[58]<<[bind[61],bind[62]]
end
def Dataflow_bind_lb_5_rb__lt__dccc(bind)
bind[5]<<bind[7]
end
def Dataflow_bind_lb_6_rb__dot__aa14(bind)
bind[6].each{|v| @marked<<ssanum(v)};src.args=bind[6]
end
def Dataflow_bind_lb_8_rb__dot__2cfb(bind)
bind[8].each{|v| @marked<<ssanum(v)}
end
def Dataflow_bind_lb_8_rb__dot__3168(bind)
bind[8].each{|v| edges.add(ssanum(v),bind[4]); edges.add(bind[4],newssanum(v));}; bind[4]
end
def Dataflow_if_sp_bind_lb__b5ce(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Dataflow_many_end_852e(bind)
many_end(bind[36])
end
def Dataflow_n_eq_Result_9a7c(bind)
n=Result[{:name=>src.name,:varnames=>src.varnames,:vars=>bind[8]}]; bind[8].each{|w| @edges.add(w.ssaname,n) } ; n
end
def Dataflow_oldssanu_073d(bind)
oldssanums.clone
end
def Dataflow_or_end_lp_b_b28c(bind)
or_end(bind[41])
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
def Dataflow_src_dot_body_bba7(bind)
src.body=bind[9]
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

def Dead_Code_Deleter3__append_lp__26c5(bind)
_append(bind[18],bind[19])
end
def Dead_Code_Deleter3__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def Dead_Code_Deleter3__append_lp__37c5(bind)
_append(bind[6],bind[8])
end
def Dead_Code_Deleter3__append_lp__473a(bind)
_append(bind[13],bind[14])
end
def Dead_Code_Deleter3__append_lp__4de3(bind)
_append(bind[2],bind[3])
end
def Dead_Code_Deleter3__append_lp__9ca5(bind)
_append(bind[10],bind[11])
end
def Dead_Code_Deleter3__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Dead_Code_Deleter3__append_lp__d472(bind)
_append(bind[6],bind[7])
end
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
def Dead_Code_Deleter3__lp_bind_lb_4_rb__d863(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Dead_Code_Deleter3__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Dead_Code_Deleter3_bind_lb_5_rb__lt__dccc(bind)
bind[5]<<bind[7]
end
def Dead_Code_Deleter3_if_sp_bind_lb__b5ce(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
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

def Forget_SSA__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def Forget_SSA__append_lp__37c5(bind)
_append(bind[6],bind[8])
end
def Forget_SSA__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Forget_SSA__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Forget_SSA__at_changed_5352(bind)
@changed=true
end
def Forget_SSA__at_changed_b885(bind)
@changed=false
end
def Forget_SSA__at_changed_c681(bind)
@changed
end
def Forget_SSA__lp_bind_lb_4_rb__d863(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Forget_SSA__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Forget_SSA_bind_lb_5_rb__lt__dccc(bind)
bind[5]<<bind[7]
end
def Forget_SSA_if_sp_bind_lb__b5ce(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
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
'6225232704931f019c6712df52fe9696'
end
def dataflow_ssa_source_hash
'7c8e4cb3bb6398da0fdd36d225497489'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'11362f3a16ee26853de1d6f8907505ae'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/dataflow_ssa_c"
