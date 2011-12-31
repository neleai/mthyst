class Analyze_Variables2 < Traverser_Clone2

def Analyze_Variables2_Act_lb_bind_1972(bind)
Act[bind[9],bind[1],bind[2]]
end
def Analyze_Variables2_Or_lb__ti_bind_6abd(bind)
Or[*bind[28]]
end
def Analyze_Variables2_Placehol_6875(bind)
Placeholder
end
def Analyze_Variables2_Seq_lb__ti_bin_e9ca(bind)
Seq[*bind[28]]
end
def Analyze_Variables2__append_lp__2d45(bind)
_append(bind[5],bind[8])
end
def Analyze_Variables2__append_lp__4089(bind)
_append(bind[26],bind[27])
end
def Analyze_Variables2__append_lp__51dc(bind)
_append(bind[33],bind[34])
end
def Analyze_Variables2__append_lp__b2a5(bind)
_append(bind[0],bind[4])
end
def Analyze_Variables2__append_lp__b6c7(bind)
_append(bind[7],bind[8])
end
def Analyze_Variables2__append_lp__bc95(bind)
_append(bind[0],bind[11])
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
def Analyze_Variables2__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Analyze_Variables2__lp_bind_lb_9_rb__a874(bind)
(bind[9].size==1&&(bind[9][0].is_a?(Local)||bind[9][0].is_a?(Global)||bind[9][0].is_a?(Key))) ? bind[9][0] : Args[*bind[9]]
end
def Analyze_Variables2__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Analyze_Variables2_bind_lb_11_rb__6cc7(bind)
bind[11]<<bind[12]
end
def Analyze_Variables2_connects_0812(bind)
connectstring(bind[20].flatten)
end
def Analyze_Variables2_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
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
def Analyze_Variables2_src_dot_pure_41d4(bind)
src.pure
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
'6edcb2d1a6cd62035b5e43679ffc2dae'
end
def detect_variables2_source_hash
'19672ede401246d1d743b83bf775b7d5'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'2cdee040250af30a93ebe7071fff1349'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/detect_variables2_c"
