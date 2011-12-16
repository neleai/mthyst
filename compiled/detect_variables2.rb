class Analyze_Variables2 < Traverser_Clone2

def Analyze_Variables2_Act_lb_bind(bind)
Act[bind[10],bind[1]]
end
def Analyze_Variables2_Or_lb__ti_bind(bind)
Or[*bind[33]]
end
def Analyze_Variables2_Placehol(bind)
Placeholder
end
def Analyze_Variables2_Seq_lb__ti_bin(bind)
Seq[*bind[33]]
end
def Analyze_Variables2__append_lp_(bind)
_append(bind[5],bind[8])
end
def Analyze_Variables2__append_lp_10(bind)
_append(bind[6],bind[8])
end
def Analyze_Variables2__append_lp_11(bind)
_append(bind[0],bind[1])
end
def Analyze_Variables2__append_lp_12(bind)
_append(bind[8],bind[13])
end
def Analyze_Variables2__append_lp_2(bind)
_append(bind[0],bind[11])
end
def Analyze_Variables2__append_lp_3(bind)
_append(bind[3],bind[4])
end
def Analyze_Variables2__append_lp_4(bind)
_append(bind[8],bind[9])
end
def Analyze_Variables2__append_lp_5(bind)
_append(bind[19],bind[20])
end
def Analyze_Variables2__append_lp_6(bind)
_append(bind[27],bind[28])
end
def Analyze_Variables2__append_lp_7(bind)
_append(bind[31],bind[32])
end
def Analyze_Variables2__append_lp_8(bind)
_append(bind[38],bind[39])
end
def Analyze_Variables2__append_lp_9(bind)
_append(bind[0],bind[4])
end
def Analyze_Variables2__at_bnding_eq_(bind)
@bnding=src.bnding
end
def Analyze_Variables2__at_changed(bind)
@changed=true
end
def Analyze_Variables2__at_changed2(bind)
@changed
end
def Analyze_Variables2__at_changed3(bind)
@changed=false
end
def Analyze_Variables2__at_locals_eq_(bind)
@locals=src.locals
end
def Analyze_Variables2__at_variabl(bind)
@variables=Hash.new{|k,v| k[v]=v} ;(src.locals+src.args).each{|w| @variables[w[0]]=w}
end
def Analyze_Variables2__lp_(bind)
(!bind[1]) || FAIL
end
def Analyze_Variables2__lp_bind_lb_10(bind)
(bind[10].size==1&&(bind[10][0].is_a?(Local)||bind[10][0].is_a?(Global)||bind[10][0].is_a?(Key))) ? bind[10][0] : Args[*bind[10]]
end
def Analyze_Variables2__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Analyze_Variables2__lp_src_dot_ins(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Analyze_Variables2_bind_lb_0_rb__eq_(bind)
bind[0]=[bind[0]]
end
def Analyze_Variables2_bind_lb_21_rb_(bind)
bind[21]=[bind[21]]
end
def Analyze_Variables2_bind_lb_3_rb__eq_(bind)
bind[3]=[bind[3]]
end
def Analyze_Variables2_bind_lb_5_rb__eq_(bind)
bind[5]=[bind[5]]
end
def Analyze_Variables2_bind_lb_5_rb__lt_(bind)
bind[5]<<bind[7]
end
def Analyze_Variables2_bind_lb_6_rb__eq_(bind)
bind[6]=[bind[6]]
end
def Analyze_Variables2_connects(bind)
connectstring(bind[23].flatten)
end
def Analyze_Variables2_if_sp_bind_lb_(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Analyze_Variables2_src(bind)
src
end
def Analyze_Variables2_src_dot_ary(bind)
src.ary
end
def Analyze_Variables2_src_dot_ary_dot_(bind)
src.ary.map{|aa| @variables[aa] }
end
def Analyze_Variables2_src_dot_loca(bind)
src.locals=nil
end
def Analyze_Variables2_src_dot_pred(bind)
src.pred
end
def Analyze_Variables2_src_dot_rule(bind)
src.rules
end
def Analyze_Variables2_src_dot_rule2(bind)
src.rules=bind[9]
end
def Analyze_Variables2_vars_eq__at_lo(bind)
vars=@locals.select{|aa| src.vars.include? aa[0].to_sym}.uniq ;Result[{:name=>src.name,:vars=>vars,:varnames=>vars.map{|v| v[0]}}]
end

end




def detect_variables2_compiled_by
'06a274f502fb1ac4226cc05345c0b477'
end
def detect_variables2_source_hash
'eab18725e78d475e7622db4b6d8f1183'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'19da685f0601a91907a1e6bf1778a1eb'
end
  require 'compiled/detect_variables2_c'
