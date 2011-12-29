class Analyze_Variables2 < Traverser_Clone2

def Analyze_Variables2_Act_lb_bind_ccb8(bind)
Act[bind[10],bind[1]]
end
def Analyze_Variables2_Or_lb__ti_bind_46c1(bind)
Or[*bind[33]]
end
def Analyze_Variables2_Placehol_6875(bind)
Placeholder
end
def Analyze_Variables2_Seq_lb__ti_bin_53dc(bind)
Seq[*bind[33]]
end
def Analyze_Variables2__append_lp__0860(bind)
_append(bind[27],bind[28])
end
def Analyze_Variables2__append_lp__2d45(bind)
_append(bind[5],bind[8])
end
def Analyze_Variables2__append_lp__324d(bind)
_append(bind[8],bind[13])
end
def Analyze_Variables2__append_lp__37c5(bind)
_append(bind[6],bind[8])
end
def Analyze_Variables2__append_lp__4548(bind)
_append(bind[19],bind[20])
end
def Analyze_Variables2__append_lp__9160(bind)
_append(bind[31],bind[32])
end
def Analyze_Variables2__append_lp__a10b(bind)
_append(bind[38],bind[39])
end
def Analyze_Variables2__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end
def Analyze_Variables2__append_lp__b375(bind)
_append(bind[8],bind[9])
end
def Analyze_Variables2__append_lp__bc95(bind)
_append(bind[0],bind[11])
end
def Analyze_Variables2__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def Analyze_Variables2__append_lp__dd73(bind)
_append(bind[3],bind[4])
end
def Analyze_Variables2__at_bnding_eq__b94a(bind)
@bnding=src.bnding
end
def Analyze_Variables2__at_changed_5352(bind)
@changed=true
end
def Analyze_Variables2__at_changed_b885(bind)
@changed=false
end
def Analyze_Variables2__at_changed_c681(bind)
@changed
end
def Analyze_Variables2__at_locals_eq__02ce(bind)
@locals=src.locals
end
def Analyze_Variables2__at_variabl_f612(bind)
@variables=Hash.new{|k,v| k[v]=v} ;(src.locals+src.args).each{|w| @variables[w[0]]=w}
end
def Analyze_Variables2__lp_(bind)
(!bind[1]) || FAIL
end
def Analyze_Variables2__lp_bind_lb_10_e9db(bind)
(bind[10].size==1&&(bind[10][0].is_a?(Local)||bind[10][0].is_a?(Global)||bind[10][0].is_a?(Key))) ? bind[10][0] : Args[*bind[10]]
end
def Analyze_Variables2__lp_bind_lb_4_rb__d863(bind)
(bind[4]||=bind[3].dup;bind[5]=true;bind[4].instance_variable_set(bind[10],bind[11])) if @changed && bind[11]!=instance_variable_get(bind[10])
end
def Analyze_Variables2__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Analyze_Variables2_bind_lb_5_rb__lt__dccc(bind)
bind[5]<<bind[7]
end
def Analyze_Variables2_connects_f9aa(bind)
connectstring(bind[23].flatten)
end
def Analyze_Variables2_if_sp_bind_lb__b5ce(bind)
if bind[5]
             @changed=true;bind[4].normalize
           else
            @changed=bind[2]
            src
          end
end
def Analyze_Variables2_src_25d9(bind)
src
end
def Analyze_Variables2_src_dot_ary_d5cf(bind)
src.ary
end
def Analyze_Variables2_src_dot_ary_dot__dd8c(bind)
src.ary.map{|aa| @variables[aa] }
end
def Analyze_Variables2_src_dot_loca_ab74(bind)
src.locals=nil
end
def Analyze_Variables2_src_dot_pred_56d4(bind)
src.pred
end
def Analyze_Variables2_src_dot_rule_5acf(bind)
src.rules
end
def Analyze_Variables2_src_dot_rule_fc90(bind)
src.rules=bind[9]
end
def Analyze_Variables2_vars_eq__at_lo_f55c(bind)
vars=@locals.select{|aa| src.vars.include? aa[0].to_sym}.uniq ;Result[{:name=>src.name,:vars=>vars,:varnames=>vars.map{|v| v[0]}}]
end

end




def detect_variables2_compiled_by
'a88b0f0806a006c35cbab57e40d9dc96'
end
def detect_variables2_source_hash
'eab18725e78d475e7622db4b6d8f1183'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'bf90d2a9c7cc5feed1041004366d6521'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/detect_variables2_c"
