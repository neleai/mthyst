class Dataflow < Traverser_Clone2
def self.root(*args);self.new.parse(:root,*args);end
def self.switch(*args);self.new.parse(:switch,*args);end
def self.traverse(*args);self.new.parse(:traverse,*args);end
def self.traverse_item(*args);self.new.parse(:traverse_item,*args);end
def self.vars_in(*args);self.new.parse(:vars_in,*args);end
def self.visit(*args);self.new.parse(:visit,*args);end
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
def __at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def __at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
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
