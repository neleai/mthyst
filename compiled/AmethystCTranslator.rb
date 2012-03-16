class AmethystCTranslator < Amethyst
def self.addcallback(*args);self.new.parse(:addcallback,*args);end;def self._selector_addcallback;AmethystCTranslator;end
def self.addlambda(*args);self.new.parse(:addlambda,*args);end;def self._selector_addlambda;AmethystCTranslator;end
def self.itrans(*args);self.new.parse(:itrans,*args);end;def self._selector_itrans;AmethystCTranslator;end
def self.rbcode(*args);self.new.parse(:rbcode,*args);end;def self._selector_rbcode;AmethystCTranslator;end
def self.rbtrans(*args);self.new.parse(:rbtrans,*args);end;def self._selector_rbtrans;AmethystCTranslator;end
def self.rbtrans2(*args);self.new.parse(:rbtrans2,*args);end;def self._selector_rbtrans2;AmethystCTranslator;end
def self.rw(*args);self.new.parse(:rw,*args);end;def self._selector_rw;AmethystCTranslator;end
def self.trans(*args);self.new.parse(:trans,*args);end;def self._selector_trans;AmethystCTranslator;end
def AmethystCTranslator__at__contex_5f56(bind)
@_context_arguments||={};bind[1]=@_context_arguments;bind[2]=@_context_arguments.dup
end
def AmethystCTranslator__at__contex_cdb3(bind)
@_context_arguments=bind[1];bind[2]
end
def AmethystCTranslator__at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def AmethystCTranslator__at_bindno_eq__e294(bind)
@bindno=0;@binds={}
end
def AmethystCTranslator__at_binds_dot_m_9a36(bind)
@binds.map{|k,v| "bind_aset(bind2,#{v},#{bget(k)});"}*"" + "it=#{rbcall(bind[1],["bind2"])};"+@binds.map{|k,v|"#{bset(k,"bind_aget(bind2,#{v})")};"}*"" +"#{src.pred ? "#{failwhen("it==failobj")};" :"" }"
end
def AmethystCTranslator__at_callbac_2d11(bind)
@callbacks.to_a.sort
end
def AmethystCTranslator__at_callbac_e37c(bind)
@callbacks={}
end
def AmethystCTranslator__at_cutlabe_7393(bind)
@cutlabel
end
def AmethystCTranslator__at_cutlabe_7ebc(bind)
@cutlabel=bind[1];@cuts=bind[2];bind[3]+"#{failwhen(1)};\n #{bind[4]}:;\n"
end
def AmethystCTranslator__at_cuts_7bbc(bind)
@cuts
end
def AmethystCTranslator__at_cuts_eq_ni_f875(bind)
@cuts=nil;@cutlabel=label("cut")
end
def AmethystCTranslator__at_cuts_eq_tr_13c6(bind)
@cuts=true;  @cutlabel ? "#{@cutlabel}=1;"  : ""
end
def AmethystCTranslator__at_defs_eq__lb__rb__3b51(bind)
@defs=[];@defmethods=[];@profile_report=[]
end
def AmethystCTranslator__at_faillab_1610(bind)
@faillabel
end
def AmethystCTranslator__at_faillab_8142(bind)
@faillabel="fail"
end
def AmethystCTranslator__at_faillab_e174(bind)
@faillabel=bind[1]; bind[2] 
end
def AmethystCTranslator__at_faillab_e643(bind)
@faillabel=bind[1] 
end
def AmethystCTranslator__at_header_eq__7aa9(bind)
@header=[]
end
def AmethystCTranslator__at_header_lt__92e2(bind)
@header<< "VALUE #{bind[1]};"
end
def AmethystCTranslator__at_init_eq__lb__rb__47da(bind)
@init=[]
end
def AmethystCTranslator__at_init_sp__sp__lt__aac8(bind)
@init  <<"#{bind[1]}=rb_eval_string(\"Hash.new{|h,k|#{bind[2]}}\");#{gc_mark_var(bind[1])};"
end
def AmethystCTranslator__at_lambdas_ecda(bind)
@lambdas=[] ;@rcallbacks={};@cbhash={}
end
def AmethystCTranslator__at_stoplab_2ba4(bind)
@stoplabel
end
def AmethystCTranslator__at_stoplab_a14e(bind)
@stoplabel=label("stop")
end
def AmethystCTranslator__at_stops_e2b4(bind)
@stops
end
def AmethystCTranslator__at_stops_eq_n_588d(bind)
@stops=nil
end
def AmethystCTranslator__at_stops_eq_t_c6ab(bind)
@stops=true; @stoplabel? "#{@stoplabel}=1;" : ""
end
def AmethystCTranslator__dq_Amethys_2ed8(bind)
"AmethystLambda.new(:#{bind[1]},self,bind)" 
end
def AmethystCTranslator__dq_VALUE_sp_c_8bbf(bind)
"VALUE cls_#{src.name};\n" 
end
def AmethystCTranslator__dq__at__sh__le_bind_3d2b(bind)
"@#{bind[1]}"

end
def AmethystCTranslator__dq__sh__le_bind_lb__3bec(bind)
"#{bind[1]} arg#{bind[2]-1}=it;"
end
def AmethystCTranslator__dq__sh__le_bind_lb__8a62(bind)
"#{bind[1][:grammar]}_#{bind[1][:rulename]}_#{label("lambda")}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__9630(bind)
"#{bind[1]}_#{bind[2]}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__9cfd(bind)
"#{bind[1]} #{bset(src.name,"it")};\n" 
end
def AmethystCTranslator__dq__sh__le_failw_5360(bind)
"#{failwhen("1")}"
end
def AmethystCTranslator__dq__sh__le_src_dot_n_9acf(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def AmethystCTranslator__dq_class_sp__sh__cf48(bind)
"class #{bind[1][:grammar]} < #{bind[1][:parent]}\n"
end
def AmethystCTranslator__dq_cstruct_48c2(bind)
"cstruct #{bind[1]}=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   #{src.enter ?  "ame_setsrc2(self,#{bget(src.var)});" : 
                    "ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=#{bget(src.var)};ptr->len=1;"
                   }
                   #{bind[2]}
                   goto #{bind[3]};
                   #{bind[4]}: *ptr=#{bind[1]};#{failwhen("1")}
                   #{bind[3]}: *ptr=#{bind[1]};
                " 
end
def AmethystCTranslator__dq_def_sp__sh__le_b_b73d(bind)
"def #{bind[1]}(bind)\n#{bind[2]}\nend\n"
end
def AmethystCTranslator__dq_if_lp_ptr_mi__19f0(bind)
"if(ptr->pos+#{bind[1]}>=ptr->len) #{failwhen("1")}"

end
def AmethystCTranslator__dq_if_sp__lp__sh__le_a_1643(bind)
"if (#{ary=bind[1].split("");map_index(ary){|i| "ame_curstr2(ptr)[#{i}]==#{Lattice_Char.new.cchar(ary[i])}" }*"&&" })  ptr->pos+=#{bind[1].size}; else #{failwhen("1")}"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_0b60(bind)
"int #{bind[1]}=ptr->pos;int #{@cutlabel}=0;\n#{bind[2]}_#{bind[3]}:;"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_c039(bind)
"int #{bind[1]}=ptr->pos;\n #{bind[2]} x=1; goto #{bind[3]};  #{bind[4]}: x=0; #{bind[3]}: it=Qnil; ptr->pos=#{bind[1]}; #{failwhen("x==0")}"
end
def AmethystCTranslator__dq_it_eq_Amet_82ce(bind)
"it=AmethystCore_append(self,#{bget(bind[1])},#{bget(bind[2])});"

end
def AmethystCTranslator__dq_it_eq_Qnil_a6d5(bind)
"it=Qnil;#{failwhen("ptr->pos<ptr->len")}"
end
def AmethystCTranslator__dq_it_eq__sh__le_bg_281f(bind)
"it=#{bget(src)};" 
end
def AmethystCTranslator__dq_switch_lp__f722(bind)
"switch(FIX2LONG(rb_hash_aref(#{bind[1]},rb_obj_class(ame_curobj2(ptr))))){"
end
def AmethystCTranslator__dq_switchh_698e(bind)
"switchhash_#{bind[1][:grammar]}_#{$classlabels[bind[1][:grammar]]+=1}"
end
def AmethystCTranslator__lb_bind_lb_1_rb__8fa4(bind)
[bind[1],bind[2],bind[3]]

end
def AmethystCTranslator__lp_Current_39be(bind)
(CurrentParser[:memoize] && ((CurrentParser[:memoize]==:all)||CurrentParser[:memoize].include?(bind[1]))) ? Memo[src.body] : src.body
end
def AmethystCTranslator__lp_bind_lb_1_rb__a948(bind)
(bind[1].is_a? String ) || FAIL
end
def AmethystCTranslator__lp_bind_lb_1_rb__d1fd(bind)
(bind[1]=="self") ? "src" : "src.#{bind[1]}#{bind[2]!="" ? "(#{bind[2]})":""}"

end
def AmethystCTranslator__lp_bind_lb_1_rb__dbc9(bind)
(bind[1]=="_append(") || FAIL
end
def AmethystCTranslator_addcallb_0461(bind)
addcallback(src.pred ? ["(",bind[1],") || FAIL"] : bind[1])
end
def AmethystCTranslator_addcallb_2cf7(bind)
addcallback2(bind[1])
end
def AmethystCTranslator_ar_eq__ti_src_dot__1348(bind)
ar=*src.ccode; 
                   @header<<ar[0] if ar[0]
                   @init<<ar[1] if ar[1]
                   "it=#{ar[2]};"
                   
end
def AmethystCTranslator_bind_lb_1_rb_(bind)
bind[1]

end
def AmethystCTranslator_bind_lb_1_rb__dot__1364(bind)
bind[1].ary.each{|al| bind[2]+="next h[k]=#{bind[3]} if k<=#{al}\\n";bind[4]+="case #{bind[3]}/*#{al}*/:";bind[3]+=1}
end
def AmethystCTranslator_bind_lb_1_rb__eq__7d1a(bind)
bind[1]="int #{@stoplabel}=0; while(!#{@stoplabel}){ #{bind[2]} } "
									@stops=bind[3]; @stoplabel=bind[4]
									bind[1]
								
end
def AmethystCTranslator_bind_lb_1_rb__eq__83f5(bind)
bind[1]=""
                 if CurrentParser[:global_memo]
                   bind[1]+="if (ptr->mem==NULL){ptr->mem=mem_#{bind[2][:grammar]};}" 
                 else
                   bind[1]+="if (ptr->mem==NULL){ptr->mem=memo_init();ptr->memgc=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,ptr->mem);}"
                 end
                 memo_no=Compiler.grammars[bind[2][:grammar]].memo_inc
                 bind[1]+="time_struct time_old=memo_get(ptr->mem,#{memo_no},ptr->src,ptr->pos); if (time_old.pos!=-1) {ptr->pos=time_old.pos;return time_old.result;} int oldpos=ptr->pos;"
                 bind[1]+=bind[3]
                 bind[1]+="memo_fail:  memo_add(ptr->mem,#{memo_no},ptr->src,oldpos,it,ptr->pos,time_old); return it;\n"
                 @profile_report << "if(ptr->mem){fprintf(profile_report,\"memo #{bind[2][:grammar]}::#{bind[2][:rulename]}  hit: %i miss: %i ticks: %i\\n\",((memo_struct *)ptr->mem)->hits[#{memo_no}],((memo_struct *)ptr->mem)->miss[#{memo_no}],((memo_struct *)ptr->mem)->ticks[#{memo_no}]);((memo_struct *)ptr->mem)->hits[#{memo_no}]=0;((memo_struct *)ptr->mem)->miss[#{memo_no}]=0;((memo_struct *)ptr->mem)->ticks[#{memo_no}]=0;}"
                 bind[1]
end
def AmethystCTranslator_bind_lb_1_rb__lb__c392(bind)
bind[1][:grammar]=@grammar=src.name;bind[1][:parent]=src.parent
end
def AmethystCTranslator_bind_lb_1_rb__lb__ff72(bind)
bind[1][:rulename]=bind[2]; Local.resetnumbering;resetlabels;@locls={}
end
def AmethystCTranslator_bind_lb_1_rb__lt__8b76(bind)
bind[1]<<@header.uniq.sort*"\n"+"\n"
							bind[1]<<"\n memo_struct *mem_#{src.name}=NULL;VALUE memo_val_#{src.name};" if CurrentParser[:memoize]
							bind[1]<<"VALUE profile_report_#{src.name}(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr); #{@profile_report*""} return Qnil;}" 
							@init<<"rb_define_method(cls_#{src.name},\"profile_report\",profile_report_#{src.name},0);"
              @init<<"mem_#{src.name}=memo_init();memo_val_#{src.name}=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_#{src.name});rb_global_variable(&memo_val_#{src.name});" if CurrentParser[:global_memo]
              bind[1]<<bind[2].sort*"\n"
              bind[1]<<@lambdas*"\n"
              bind[3]="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{bind[4][:parent]}\"))); 
                    failobj=rb_eval_string(\"FAIL\");
                    #{@init.uniq.sort*"\n"}
                    #{@defmethods.sort*"\n" }
                   "
              [bind[1],bind[3],bind[5]] 
end
def AmethystCTranslator_bind_lb_1_rb__lt__98f3(bind)
bind[1]<<bind[2][0];bind[3]<<bind[2][1];bind[4]<<bind[2][2]
end
def AmethystCTranslator_bind_lb_1_rb__lt__e3c6(bind)
bind[1]<<@defs.sort*"\n";bind[1]<<"\n"
end
def AmethystCTranslator_bind_lb_1_rb__pl__1b5e(bind)
bind[1]+=bind[2]*""
end
def AmethystCTranslator_bind_lb_1_rb__pl__1dcb(bind)
bind[1]+="; #{bind[2]} break;\n"
end
def AmethystCTranslator_bind_lb_1_rb__pl__252c(bind)
bind[1]+=bind[2].cases() + " #{bind[3]} break;\n"
end
def AmethystCTranslator_bind_lb_1_rb__pl__4da1(bind)
bind[1]+="#{bind[2]}\n;goto #{bind[3]};\n"
end
def AmethystCTranslator_bind_lb_1_rb__pl__4db9(bind)
bind[1]+"}"
end
def AmethystCTranslator_bind_lb_1_rb__pl__891b(bind)
bind[1]+=1
end
def AmethystCTranslator_bind_lb_1_rb__pl__916b(bind)
bind[1]+="\nend"; bind[1]
end
def AmethystCTranslator_bind_lb_1_rb__pl__9a26(bind)
bind[1]+="#{bind[2]}_#{bind[3]}: ptr->pos=#{bind[4]};#{@cuts ? (@cuts=nil;failwhen(@cutlabel)): ""}"
end
def AmethystCTranslator_bind_lb_1_rb__ti__cfcb(bind)
bind[1]*""
end
def AmethystCTranslator_h_eq__dq_VALUE_481e(bind)
h="VALUE #{bind[1]}(VALUE self,VALUE bind)"
                 @header<<h+";"
                 @defmethods<<"rb_define_method(cls_#{bind[2][:grammar]},\"#{bind[1]}\",#{bind[1]},1);"
                 @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/ cstruct *ptr; int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_h_eq__dq_VALUE_ef56(bind)
h="VALUE #{bind[1][:grammar]}_#{bind[2]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
            @header<<h+";"
            @defs<< "def self.#{bind[2]}(*args);self.new.parse(:#{bind[2]},*args);end;def self._selector_#{bind[2]};#{bind[1][:grammar]};end"
            @defmethods<< "rb_define_method(cls_#{bind[1][:grammar]},\"#{src.name}\",#{bind[1][:grammar]}_#{src.name},#{src.varargs ? -2 : src.args.size});"
						bind[3]=h+"{VALUE vals[#{src.args.size}]; VALUE it #{@locls.map{|k,v| ",_#{k}"}*""};VALUE bind2=bind_new2(16); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);"
bind[3]+="#{bind[4]}\n" 
bind[3]+="fail: return it;\n}"
bind[3]

end
def AmethystCTranslator_label_lp__dq_a_f49c(bind)
label("accept")
end
def AmethystCTranslator_label_lp__dq_o_c187(bind)
label("oldpos")
end
def AmethystCTranslator_label_lp__dq_r_95b2(bind)
label("reject")
end
def AmethystCTranslator_r_eq__dq__sp__sh__le_bi_917c(bind)
r=" #{bind[1]*""} it=#{callrule(bind[2],bind[3])};"; cant_fail?(bind[4]) ? r : "#{r} #{failwhen("it==failobj")}"

end
def AmethystCTranslator_raise_sp__dq_T_0ab1(bind)
raise "TODO"
end
def AmethystCTranslator_rbbget_lp_s_68a8(bind)
rbbget(src)
end
def AmethystCTranslator_src_25d9(bind)
src
end
def AmethystCTranslator_src_dot_name_80f3(bind)
src.name
end
def AmethystCTranslator_src_dot_rule_5acf(bind)
src.rules
end
def AmethystCTranslator_src_dot_to_5e99(bind)
src.to
end

end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/AmethystCTranslator_c"
