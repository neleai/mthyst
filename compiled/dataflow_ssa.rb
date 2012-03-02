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
  memoize "root"
  use_global_memo
end
class Dataflow < Traverser_Clone2

def _Act_lb_bind_7d8f(bind)
Act[bind[1],src.pred]
end
def _Apply_lb__ti__lp__753f(bind)
Apply[*(bind[1]+[{:clas=>src.clas}])]
end
def _Lookahea_2972(bind)
Lookahead[*bind[1]]
end
def _Many_dot_cre_2107(bind)
Many.create({:ary=>bind[1]}).normalize
end
def _Pass_dot_cre_5b5c(bind)
Pass.create({:to=>bind[1],:var=>bind[2],:enter=>src.enter}).normalize
end
def _Seq_lb_src_dot__6f68(bind)
Seq[src.body,Act[Local["_result",src.bnding]]]
end
def _Switch_O_5445(bind)
Switch_Or.create(:ary=>bind[1].map{|k| [nil,k]})

end
def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __at_marked_lt__59bb(bind)
@marked<<src
end
def __at_marked_lt__d910(bind)
@marked<<bind[1] if src.pred || !src.pure
end
def __at_marked_lt__f9b9(bind)
@marked<<bind[1].ssaname
end
def __at_oldssan_37c2(bind)
@oldssanums=bind[1].clone
end
def __at_oldssan_e953(bind)
@oldssanums=bind[1]
end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_end_6e13(bind)
bind_end(src)
end
def _bind_lb_1_rb_(bind)
bind[1]

end
def _bind_lb_1_rb__dot__6099(bind)
bind[1].each{|v| @marked<<ssanum(v)};src.args=bind[1]
end
def _bind_lb_1_rb__dot__9da9(bind)
bind[1].each{|v| edges.add(ssanum(v),bind[2]); edges.add(bind[2],newssanum(v));}; bind[2]
end
def _bind_lb_1_rb__dot__ce70(bind)
bind[1].each{|v| @marked<<ssanum(v)}
end
def _bind_lb_1_rb__dot__dbae(bind)
bind[1].ary
end
def _bind_lb_1_rb__eq__fe02(bind)
bind[1]=[]
end
def _bind_lb_1_rb__lb__9337(bind)
bind[1][:bnding]=src.bnding
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__lt__c37a(bind)
bind[1]<<[bind[2],bind[3]]
end
def _bind_lb_1_rb__lt__eda2(bind)
bind[1]<<oldssanums.clone
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _many_end_0563(bind)
many_end(bind[1])
end
def _n_eq_Result_d8be(bind)
n=Result[{:name=>src.name,:varnames=>src.varnames,:vars=>bind[1]}]; bind[1].each{|w| @edges.add(w.ssaname,n) } ; n
end
def _oldssanu_073d(bind)
oldssanums.clone
end
def _or_end_lp_b_33b4(bind)
or_end(bind[1])
end
def _src_25d9(bind)
src
end
def _src_dot_args_2df5(bind)
src.args
end
def _src_dot_body_b7c1(bind)
src.body=Seq[bind[1].ary[0..-2]]
end
def _src_dot_clas_68f9(bind)
src.class[{:ary=>bind[1]}]
end
def _src_dot_dup_d768(bind)
src.dup
end
def _src_dot_free_3d49(bind)
src.freeze
end
def _src_dot_reac_9ae4(bind)
src.reachable=@edges.reverse.reachable(@marked+[ssanum(bind[1][-1])]); src.cfg=@edges; 
end
def _src_dot_to_5e99(bind)
src.to
end
def _src_dot_var_3a88(bind)
src.var
end
def _src_dot_vars_2db1(bind)
src.vars
end
def _ssanum_lp_s_3920(bind)
ssanum(src)
end
def _ssanums_dot__ae08(bind)
ssanums.clone
end

end


class Dead_Code_Deleter3 < Traverser_Clone2

def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __lp_(bind)
(!bind[1][:reachable][bind[2]] ||(bind[2].pure && !bind[1][:bound])) ? Placeholder : bind[2]

end
def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__lb__146c(bind)
bind[1][:bound]||=bind[1][:reachable][src.name]
end
def _bind_lb_1_rb__lb__1f9e(bind)
bind[1][:reachable]=src.reachable
end
def _bind_lb_1_rb__lb__6818(bind)
bind[1][:reachable][bind[2]] ? bind[2] : Placeholder

end
def _bind_lb_1_rb__lb__8eca(bind)
bind[1][:reachable][src.name] ? src : src.expr
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _d_eq_src_dot_du_2b46(bind)
d=src.dup;#d.bound=bind[1][:bound];
                      d.normalize
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _src_25d9(bind)
src
end
def _src_dot_dup_d768(bind)
src.dup
end
def _src_dot_reac_cd39(bind)
src.reachable=nil;src.cfg=nil
end

end


class Forget_SSA < Traverser_Clone2
  memoize "traverse"
  use_global_memo
end
class Forget_SSA < Traverser_Clone2

def __lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def _bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def _bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def _if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def _src_25d9(bind)
src
end
def _src_dot_unss_5845(bind)
src.unssa
end

end


def dataflow_ssa_compiled_by
'bc8b9836da9a8f546598a8c83101f2c6'
end
def dataflow_ssa_source_hash
'82824db11baad047ee9468a9d66deac6'
end
def testversiondataflow_ssa(r)
 raise "invalid version" if r!=dataflow_ssa_version
end
def dataflow_ssa_version
'd98a09b9ffe83712e88008f7a33ace64'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/dataflow_ssa_c"
