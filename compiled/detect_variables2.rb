class Analyze_Variables2 < Traverser_Clone2

def Analyze_Variables2_Act_lb_bind_lb_10_rb_(bind)
Act[bind[10],bind[1]]
end
def Analyze_Variables2_Or_lb__ti_bind_lb_33_rb_(bind)
Or[*bind[33]]
end
def Analyze_Variables2_Placeholder(bind)
Placeholder
end
def Analyze_Variables2_Seq_lb__ti_bind_lb_33(bind)
Seq[*bind[33]]
end
def Analyze_Variables2__append_lp_bind(bind)
_append(bind[5],bind[8])
end
def Analyze_Variables2__append_lp_bind10(bind)
_append(bind[6],bind[8])
end
def Analyze_Variables2__append_lp_bind11(bind)
_append(bind[0],bind[1])
end
def Analyze_Variables2__append_lp_bind12(bind)
_append(bind[8],bind[13])
end
def Analyze_Variables2__append_lp_bind2(bind)
_append(bind[0],bind[11])
end
def Analyze_Variables2__append_lp_bind3(bind)
_append(bind[3],bind[4])
end
def Analyze_Variables2__append_lp_bind4(bind)
_append(bind[8],bind[9])
end
def Analyze_Variables2__append_lp_bind5(bind)
_append(bind[19],bind[20])
end
def Analyze_Variables2__append_lp_bind6(bind)
_append(bind[27],bind[28])
end
def Analyze_Variables2__append_lp_bind7(bind)
_append(bind[31],bind[32])
end
def Analyze_Variables2__append_lp_bind8(bind)
_append(bind[38],bind[39])
end
def Analyze_Variables2__append_lp_bind9(bind)
_append(bind[0],bind[4])
end
def Analyze_Variables2__at_bnding_eq_src_dot_(bind)
@bnding=src.bnding
end
def Analyze_Variables2__at_changed(bind)
@changed
end
def Analyze_Variables2__at_changed_eq_fal(bind)
@changed=false
end
def Analyze_Variables2__at_changed_eq_tru(bind)
@changed=true
end
def Analyze_Variables2__at_locals_eq_src_dot_(bind)
@locals=src.locals
end
def Analyze_Variables2__at_variables_eq_H(bind)
@variables=Hash.new{|k,v| k[v]=v} ;(src.locals+src.args).each{|w| @variables[w[0]]=w}
end
def Analyze_Variables2__lp_(bind)
(!bind[1]) || FAIL
end
def Analyze_Variables2__lp_bind_lb_10_rb__dot_si(bind)
(bind[10].size==1&&(bind[10][0].is_a?(Local)||bind[10][0].is_a?(Global)||bind[10][0].is_a?(Key))) ? bind[10][0] : Args[*bind[10]]
end
def Analyze_Variables2__lp_bind_lb_4_rb_(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Analyze_Variables2__lp_src_dot_instanc(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Analyze_Variables2_bind_lb_5_rb__lt__lt_bin(bind)
bind[5]<<bind[7]
end
def Analyze_Variables2_connectstrin(bind)
connectstring(bind[23].flatten)
end
def Analyze_Variables2_if_sp_bind_lb_5_rb_(bind)
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
def Analyze_Variables2_src_dot_ary_dot_map_le_(bind)
src.ary.map{|aa| @variables[aa] }
end
def Analyze_Variables2_src_dot_locals_eq_n(bind)
src.locals=nil
end
def Analyze_Variables2_src_dot_pred(bind)
src.pred
end
def Analyze_Variables2_src_dot_rules(bind)
src.rules
end
def Analyze_Variables2_src_dot_rules_eq_bi(bind)
src.rules=bind[9]
end
def Analyze_Variables2_vars_eq__at_locals(bind)
vars=@locals.select{|aa| src.vars.include? aa[0].to_sym}.uniq ;Result[{:name=>src.name,:vars=>vars,:varnames=>vars.map{|v| v[0]}}]
end

end




def detect_variables2_compiled_by
'472138cdffc8d639efb367af8b54ad09'
end
def detect_variables2_source_hash
'eab18725e78d475e7622db4b6d8f1183'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'4bb084b6be7fe039c42870bb8892c4d3'
end
  require 'compiled/detect_variables2_c'
