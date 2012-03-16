class Analyze_Variables2 < Traverser_Clone2
def self.flatten(*args);self.new.parse(:flatten,*args);end;def self._selector_flatten;Analyze_Variables2;end
def self.itrans(*args);self.new.parse(:itrans,*args);end;def self._selector_itrans;Analyze_Variables2;end
def self.root(*args);self.new.parse(:root,*args);end;def self._selector_root;Analyze_Variables2;end
def self.traverse(*args);self.new.parse(:traverse,*args);end;def self._selector_traverse;Analyze_Variables2;end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end;def self._selector_traverse_item;Analyze_Variables2;end
def self.visit(*args);self.new.parse(:visit,*args);end;def self._selector_visit;Analyze_Variables2;end
def Analyze_Variables2_Act_lb_bind_4ccd(bind)
Act[bind[1],bind[2],bind[3]]
end
def Analyze_Variables2_Append_lb_s_f381(bind)
Append[src.name,src.exp]
end
def Analyze_Variables2_Enter_lb_sr_4871(bind)
Enter[src.from,src.to]
end
def Analyze_Variables2_Many_dot_cre_6376(bind)
Many.create({:ary=>[@stop ? bind[1] : Or[bind[1],Stop[]] ] }) 
end
def Analyze_Variables2_Or_lb__ti_bind_5a27(bind)
Or[*bind[1]]

end
def Analyze_Variables2_Pass_lb_src_99d4(bind)
Pass[src.from,src.to]
end
def Analyze_Variables2_Placehol_6875(bind)
Placeholder
end
def Analyze_Variables2_Seq_lb__ti_bin_1174(bind)
Seq[*bind[1]]

end
def Analyze_Variables2__at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def Analyze_Variables2__at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def Analyze_Variables2__at__contex_d6d5(bind)
@_context_arguments=bind[1]
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
def Analyze_Variables2__lp_(bind)
(!bind[1]) || FAIL
end
def Analyze_Variables2__lp_bind_lb_1_rb__e3f1(bind)
(bind[1].size==1&&(bind[1][0].is_a?(Local)||bind[1][0].is_a?(Global)||bind[1][0].is_a?(Key))) ? bind[1][0] : Args[*bind[1]]
end
def Analyze_Variables2__lp_src_dot_cla_2024(bind)
(src.class.attributes).map{|v| src.instance_variable_get("@"+v.to_s) }
end
def Analyze_Variables2_bind_lb_1_rb_(bind)
bind[1]

end
def Analyze_Variables2_bind_lb_1_rb__lb__12e8(bind)
bind[1][:variables]=Hash.new{|k,v| k[v]=v} ;(src.locals+src.args).each{|w| bind[1][:variables][w[0]]=w}
end
def Analyze_Variables2_bind_lb_1_rb__lb__9337(bind)
bind[1][:bnding]=src.bnding
end
def Analyze_Variables2_bind_lb_1_rb__lb__eb3a(bind)
bind[1][:locals]=src.locals
end
def Analyze_Variables2_bind_lb_1_rb__lt__7b20(bind)
bind[1]<<bind[2]
end
def Analyze_Variables2_bind_lb_1_rb__sp__6af0(bind)
bind[1] << bind[2]
end
def Analyze_Variables2_cls_eq_Obje_d8f9(bind)
cls=Object.const_get(src.name); vars=bind[1][:locals].select{|aa| !cls.respond_to?(:attributes) || cls.attributes.include?(aa[0].to_sym)}.uniq ;Result[{:name=>src.name,:vars=>vars,:varnames=>vars.map{|v| v[0]}}]
end
def Analyze_Variables2_connects_04d2(bind)
connectstring(bind[1].flatten)
end
def Analyze_Variables2_d_eq_src_dot_du_2c72(bind)
d=src.dup;d.locals=nil;d.freeze
end
def Analyze_Variables2_if_sp_bind_lb__1bed(bind)
if bind[1]==bind[2]
						  src
						else
							src.class.create2(*bind[2])
					  end 
          
end
def Analyze_Variables2_src_25d9(bind)
src
end
def Analyze_Variables2_src_dot_ary_d5cf(bind)
src.ary
end
def Analyze_Variables2_src_dot_ary_dot__be44(bind)
src.ary.map{|aa| bind[1][:variables][aa] }
end
def Analyze_Variables2_src_dot_dup_d768(bind)
src.dup
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

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/Analyze_Variables2_c"
