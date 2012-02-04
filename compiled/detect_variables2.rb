#This converts syntax tree to our immediate reprezentation. It
#
# - finds local variables
# - finds what result binds
# - removes comments
# - binds break to many and or

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

def Analyze_Variables2_Act_lb_bind_4ccd(bind)
Act[bind[1],bind[2],bind[3]]
end
def Analyze_Variables2_Many_dot_cre_6376(bind)
Many.create({:ary=>[@stop ? bind[1] : Or[bind[1],Stop[]] ] }) 
end
def Analyze_Variables2_Or_lb__ti_bind_5a27(bind)
Or[*bind[1]]

end
def Analyze_Variables2_Placehol_6875(bind)
Placeholder
end
def Analyze_Variables2_Seq_lb__ti_bin_1174(bind)
Seq[*bind[1]]

end
def Analyze_Variables2__append_lp__d113(bind)
_append(bind[1],bind[2])
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
def Analyze_Variables2__at_stop_8c46(bind)
@stop
end
def Analyze_Variables2__at_stop_eq_bi_5f9f(bind)
@stop=bind[1]
end
def Analyze_Variables2__at_stop_eq_fa_620e(bind)
@stop=false
end
def Analyze_Variables2__at_stop_eq_tr_52d4(bind)
@stop=true;src
end
def Analyze_Variables2__at_variabl_f612(bind)
@variables=Hash.new{|k,v| k[v]=v} ;(src.locals+src.args).each{|w| @variables[w[0]]=w}
end
def Analyze_Variables2__lp_(bind)
(!bind[1]) || FAIL
end
def Analyze_Variables2__lp_bind_lb_1_rb__e3f1(bind)
(bind[1].size==1&&(bind[1][0].is_a?(Local)||bind[1][0].is_a?(Global)||bind[1][0].is_a?(Key))) ? bind[1][0] : Args[*bind[1]]
end
def Analyze_Variables2__lp_bind_lb_1_rb__ee3d(bind)
(bind[1]||=bind[2].dup;bind[3]=true;bind[1].instance_variable_set(bind[4],bind[5])) if @changed && bind[5]!=instance_variable_get(bind[4])
end
def Analyze_Variables2__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Analyze_Variables2_bind_lb_1_rb_(bind)
bind[1]

end
def Analyze_Variables2_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Analyze_Variables2_connects_04d2(bind)
connectstring(bind[1].flatten)
end
def Analyze_Variables2_if_sp_bind_lb__8e0b(bind)
if bind[1]
             @changed=true;bind[2].normalize
           else
            @changed=bind[3]
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
def Analyze_Variables2_src_dot_rule_a719(bind)
src.rules=bind[1]
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
def Resolve_Calls__at_grammar_c8c8(bind)
@grammar=bind[1]
end
def Resolve_Calls__at_name_eq_bi_0e7f(bind)
@name=bind[1]
end
def Resolve_Calls__lp_bind_lb_1_rb__ee3d(bind)
(bind[1]||=bind[2].dup;bind[3]=true;bind[1].instance_variable_set(bind[4],bind[5])) if @changed && bind[5]!=instance_variable_get(bind[4])
end
def Resolve_Calls__lp_src_dot_ins_6a75(bind)
(src.instance_variables).map{|v| [v,src.instance_variable_get(v)] }
end
def Resolve_Calls_a_eq_Apply_lb__1315(bind)
a=Apply[bind[1],   {:clas=>resolvegrammar(@grammar.name,bind[1])}];a
end
def Resolve_Calls_a_eq_Apply_lb__36f8(bind)
a=Apply[bind[1][1],{:clas=>resolvegrammar(Compiler.grammars[bind[1][0]],bind[1][1])}]
end
def Resolve_Calls_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Resolve_Calls_if_sp_bind_lb__8e0b(bind)
if bind[1]
             @changed=true;bind[2].normalize
           else
            @changed=bind[3]
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
'7447de6bab8a76ac1734c644975fc59a'
end
def detect_variables2_source_hash
'005c2ba3a5c2c24b6b8b7c0151cca0aa'
end
def testversiondetect_variables2(r)
 raise "invalid version" if r!=detect_variables2_version
end
def detect_variables2_version
'd728c06facbe6c0d217577fc3bb97cd7'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/detect_variables2_c"
