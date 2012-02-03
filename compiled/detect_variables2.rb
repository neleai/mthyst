#This converts syntax tree to our immediate reprezentation. It
#
# - finds local variables
# - finds what result binds
# - removes comments

def connectstring(ary)
  r=[]
  s=nil
  ary.each{|a|
    if a.is_a? String
      s||=""
      s+=a
    else
      r<<s if s
      s=nil
      r<<a
    end
  }
  r<<s if s
  r
end


class Analyze_Variables2 < Traverser_Clone2

def Analyze_Variables2_Act_lb_bind_1972(bind)
Act[bind[9],bind[1],bind[2]]
end
def Analyze_Variables2_Or_lb__ti_bind_9254(bind)
Or[*bind[9]]

end
def Analyze_Variables2_Placehol_6875(bind)
Placeholder
end
def Analyze_Variables2_Seq_lb__ti_bin_e1cc(bind)
Seq[*bind[9]]

end
def Analyze_Variables2__append_lp__4089(bind)
_append(bind[26],bind[27])
end
def Analyze_Variables2__append_lp__7352(bind)
_append(bind[4],bind[7])
end
def Analyze_Variables2__append_lp__9160(bind)
_append(bind[31],bind[32])
end
def Analyze_Variables2__append_lp__b494(bind)
_append(bind[0],bind[10])
end
def Analyze_Variables2__append_lp__b6c7(bind)
_append(bind[7],bind[8])
end
def Analyze_Variables2__append_lp__f8f8(bind)
_append(bind[0],bind[3])
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
def Analyze_Variables2_bind_lb_5_rb__lt__1671(bind)
bind[5]<<bind[6]
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
def Analyze_Variables2_src_dot_rule_d270(bind)
src.rules=bind[8]
end
def Analyze_Variables2_vars_eq__at_lo_cf02(bind)
vars=@locals.select{|aa| Object.const_get(src.name).instance_variable_get(:@attrs).include? aa[0].to_sym}.uniq ;Result[{:name=>src.name,:vars=>vars,:varnames=>vars.map{|v| v[0]}}]
end

end


class Resolve_Calls < Traverser_Clone2

def Resolve_Calls__at_changed_5352(bind)
@changed=true
end
def Resolve_Calls__at_changed_b885(bind)
@changed=false
end
def Resolve_Calls__at_changed_c681(bind)
@changed
end
def Resolve_Calls__at_grammar_8783(bind)
@grammar=bind[0]
end
def Resolve_Calls__at_name_eq_bi_f53d(bind)
@name=bind[2]
end
def Resolve_Calls__lp_bind_lb_2_rb__6693(bind)
(bind[2]||=bind[1].dup;bind[3]=true;bind[2].instance_variable_set(bind[7],bind[8])) if @changed && bind[8]!=instance_variable_get(bind[7])
end
def Resolve_Calls__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Resolve_Calls_a_eq_Apply_lb__5c83(bind)
a=Apply[bind[8],   {:clas=>resolvegrammar(@grammar.name,bind[8])}];a
end
def Resolve_Calls_a_eq_Apply_lb__9d4a(bind)
a=Apply[bind[8][1],{:clas=>resolvegrammar(Compiler.grammars[bind[8][0]],bind[8][1])}]
end
def Resolve_Calls_bind_lb_5_rb__lt__1671(bind)
bind[5]<<bind[6]
end
def Resolve_Calls_if_sp_bind_lb__f1e9(bind)
if bind[3]
             @changed=true;bind[2].normalize
           else
            @changed=bind[0]
            src
          end
end
def Resolve_Calls_src_25d9(bind)
src
end
def Resolve_Calls_src_dot_name_80f3(bind)
src.name
end
def Resolve_Calls_super_na_7b4c(bind)
super_name="#{@name}_#{@grammar.name}"
                    @grammar.rules[super_name]=deep_clone(Compiler.grammars[@grammar.parent].getrule(@name))
                    @grammar.rules[super_name].name=super_name
                    Apply[super_name]
              
end

end


def detect_variables2_compiled_by
'78d0add76ff23482ad94bca79ef87577'
end
def detect_variables2_source_hash
'31a91f77c98ec22f0e9e0b09f777e3bb'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'48c964e1756fed8929693eefd42249b0'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/detect_variables2_c"
