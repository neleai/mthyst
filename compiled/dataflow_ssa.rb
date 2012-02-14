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

def Dataflow_Act_lb_bind_7d8f(bind)
Act[bind[1],src.pred]
end
def Dataflow_Apply_lb__ti__lp__753f(bind)
Apply[*(bind[1]+[{:clas=>src.clas}])]
end
def Dataflow_Lookahea_2972(bind)
Lookahead[*bind[1]]
end
def Dataflow_Many_dot_cre_2107(bind)
Many.create({:ary=>bind[1]}).normalize
end
def Dataflow_Or_lb__ti_bind_d486(bind)
Or[*bind[1]]
end
def Dataflow_Pass_dot_cre_5b5c(bind)
Pass.create({:to=>bind[1],:var=>bind[2],:enter=>src.enter}).normalize
end
def Dataflow_Seq_lb_src_dot__6f68(bind)
Seq[src.body,Act[Local["_result",src.bnding]]]
end
def Dataflow__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def Dataflow__at_bnding_eq__b94a(bind)
@bnding=src.bnding
end
def Dataflow__at_marked_lt__59bb(bind)
@marked<<src
end
def Dataflow__at_marked_lt__d910(bind)
@marked<<bind[1] if src.pred || !src.pure
end
def Dataflow__at_marked_lt__f9b9(bind)
@marked<<bind[1].ssaname
end
def Dataflow__at_oldssan_37c2(bind)
@oldssanums=bind[1].clone
end
def Dataflow__at_oldssan_e953(bind)
@oldssanums=bind[1]
end
def Dataflow__lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Dataflow_bind_end_6e13(bind)
bind_end(src)
end
def Dataflow_bind_lb_1_rb_(bind)
bind[1]

end
def Dataflow_bind_lb_1_rb__dot__6099(bind)
bind[1].each{|v| @marked<<ssanum(v)};src.args=bind[1]
end
def Dataflow_bind_lb_1_rb__dot__9da9(bind)
bind[1].each{|v| edges.add(ssanum(v),bind[2]); edges.add(bind[2],newssanum(v));}; bind[2]
end
def Dataflow_bind_lb_1_rb__dot__ce70(bind)
bind[1].each{|v| @marked<<ssanum(v)}
end
def Dataflow_bind_lb_1_rb__dot__dbae(bind)
bind[1].ary
end
def Dataflow_bind_lb_1_rb__eq__fe02(bind)
bind[1]=[]
end
def Dataflow_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Dataflow_bind_lb_1_rb__lt__c37a(bind)
bind[1]<<[bind[2],bind[3]]
end
def Dataflow_bind_lb_1_rb__lt__eda2(bind)
bind[1]<<oldssanums.clone
end
def Dataflow_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Dataflow_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Dataflow_many_end_0563(bind)
many_end(bind[1])
end
def Dataflow_n_eq_Result_d8be(bind)
n=Result[{:name=>src.name,:varnames=>src.varnames,:vars=>bind[1]}]; bind[1].each{|w| @edges.add(w.ssaname,n) } ; n
end
def Dataflow_oldssanu_073d(bind)
oldssanums.clone
end
def Dataflow_or_end_lp_b_33b4(bind)
or_end(bind[1])
end
def Dataflow_src_25d9(bind)
src
end
def Dataflow_src_dot_args_2df5(bind)
src.args
end
def Dataflow_src_dot_body_b7c1(bind)
src.body=Seq[bind[1].ary[0..-2]]
end
def Dataflow_src_dot_clas_68f9(bind)
src.class[{:ary=>bind[1]}]
end
def Dataflow_src_dot_dup_d768(bind)
src.dup
end
def Dataflow_src_dot_free_3d49(bind)
src.freeze
end
def Dataflow_src_dot_reac_9ae4(bind)
src.reachable=@edges.reverse.reachable(@marked+[ssanum(bind[1][-1])]); src.cfg=@edges; 
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
def Dead_Code_Deleter3__lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Dead_Code_Deleter3_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Dead_Code_Deleter3_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Dead_Code_Deleter3_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Dead_Code_Deleter3_src_25d9(bind)
src
end
def Dead_Code_Deleter3_src_dot_dup_d768(bind)
src.dup
end
def Dead_Code_Deleter3_src_dot_reac_cd39(bind)
src.reachable=nil;src.cfg=nil
end

end

CurrentParser[:memoize]=["traverse"]
CurrentParser[:global_memo]=true

class Forget_SSA < Traverser_Clone2

def Forget_SSA__lp_src_dot_cla_e144(bind)
(src.class.instance_variable_get(:@attrs)).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Forget_SSA_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Forget_SSA_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Forget_SSA_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
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
'24f3b7282e7eac736165cca5a08980c6'
end
def dataflow_ssa_source_hash
'3f35e485e87fcd66bbefaa3045f3634c'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'd2bfdb4df8cbf7a538434ccbc190e61e'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/dataflow_ssa_c"
