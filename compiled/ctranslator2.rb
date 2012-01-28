
class AmethystCTranslator < Amethyst 
	def addcallback2(cb)
		return @rcallbacks[cb] if @rcallbacks[cb]
		n="#{@grammar}_#{signature(cb)}"
		i=1
		i+=1 while @callbacks[n+(i>1 ? i.to_s : "")]
		n=n+i.to_s if i>1
		@rcallbacks[cb]=n
		@callbacks[n]=cb
		n
	end
	def desc(s)
		return @locls[s.desc] if @locls[s.desc]
		@locls[s.desc]=@locls.size
	end
	def bget(s)
		cm=s[0]
		s=desc(s)
		return "bind_aget(bind,#{s}/*#{cm}*/)"
	end
	def bset(s,e)
		cm=s[0]
		s=desc(s)
		return "bind_aset(bind,#{s}/*#{cm}*/,#{e})"
	end
	def rbbget(s)
		"bind[#{desc(s)}]"
	end
	def symb(str)
		str=str.gsub("@","_at_");
		sy="sy_#{str}"
		@header<<"static VALUE #{sy};"
		@init<<"#{sy}=rb_intern(#{str.inspect});"
		sy
	end
	def iget(s)
		"rb_ivar_get(self,#{symb("@#{s}")})"
	end
	def iset(s,e)
		"rb_ivar_set(self,#{symb("@#{s}")},#{e})"
	end
	def resetlabels
		@labels=Hash.new(0)
	end
	def label(s)
		@labels[s]+=1
		"#{s}#{@labels[s]}"
	end
	def mktable(r)
		@ruletable={}
		r.each{|e| @ruletable[e.name]=e}
	end
	def rbcall(name,args)
		"rb_funcall(self,#{symb(name)},#{args.size}#{args.map{|a| ",#{a}"}*""})"
	end
	def callrule(name,argc)
		margs=argc.times.map{|a| ",arg#{a}"}
		grammar=resolvegrammar(@grammar,name)
		if grammar
			@header<<"VALUE #{grammar}_#{name}(VALUE self #{",VALUE"*argc});"
			"#{grammar}_#{name}(self #{margs*""})"
		else
			rbcall(name,argc.times.map{|a| "arg#{a}"})
		end
	end
end

$classlabels=Hash.new(0)
class AmethystCTranslator < Amethyst

def AmethystCTranslator__append_lp__2f29(bind)
_append(bind[67],bind[69])
end
def AmethystCTranslator__append_lp__5934(bind)
_append(bind[26],bind[28])
end
def AmethystCTranslator__append_lp__5e3c(bind)
_append(bind[3],bind[7])
end
def AmethystCTranslator__append_lp__5f76(bind)
_append(bind[42],bind[43])
end
def AmethystCTranslator__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def AmethystCTranslator__append_lp__9637(bind)
_append(bind[85],bind[86])
end
def AmethystCTranslator__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def AmethystCTranslator__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def AmethystCTranslator__at_callbac_2d11(bind)
@callbacks.to_a.sort
end
def AmethystCTranslator__at_callbac_e37c(bind)
@callbacks={}
end
def AmethystCTranslator__at_defmeth_456b(bind)
@defmethods=[]
end
def AmethystCTranslator__at_defs_eq__lb__rb__188f(bind)
@defs=[]
end
def AmethystCTranslator__at_defs_lt__lt_s_1286(bind)
@defs<<src.defs if src.defs
end
def AmethystCTranslator__at_faillab_1610(bind)
@faillabel
end
def AmethystCTranslator__at_faillab_37e7(bind)
@faillabel=bind[0]; bind[3] 
end
def AmethystCTranslator__at_faillab_4794(bind)
@faillabel=bind[57]; bind[58] 
end
def AmethystCTranslator__at_faillab_74ee(bind)
@faillabel=bind[2]; bind[4] 
end
def AmethystCTranslator__at_faillab_8142(bind)
@faillabel="fail"
end
def AmethystCTranslator__at_faillab_aec4(bind)
@faillabel=bind[56] 
end
def AmethystCTranslator__at_faillab_e643(bind)
@faillabel=bind[1] 
end
def AmethystCTranslator__at_grammar_1337(bind)
@grammar=src.name;@parent=src.parent
end
def AmethystCTranslator__at_header_eq__7aa9(bind)
@header=[]
end
def AmethystCTranslator__at_header_lt__09ca(bind)
@header<<"static VALUE #{bind[0]};"; @init<<"#{bind[0]}=#{bind[1]};#{gc_mark_var(bind[0])};"
end
def AmethystCTranslator__at_header_lt__63db(bind)
@header<< "VALUE #{bind[94]};"
end
def AmethystCTranslator__at_header_lt__fff4(bind)
@header<<src.header if src.header
end
def AmethystCTranslator__at_init_eq__lb__rb__47da(bind)
@init=[]
end
def AmethystCTranslator__at_init_lt__lt_s_a51d(bind)
@init<<src.init if src.init
end
def AmethystCTranslator__at_init_sp__sp__lt__7290(bind)
@init  <<"#{bind[94]}=rb_eval_string(\"Hash.new{|h,k|#{bind[48]}}\");#{gc_mark_var(bind[94])};"
end
def AmethystCTranslator__at_lambdas_ecda(bind)
@lambdas=[] ;@rcallbacks={};@cbhash={}
end
def AmethystCTranslator__at_rulenam_295d(bind)
@rulename=bind[24]; Local.resetnumbering;resetlabels;@locls={}
end
def AmethystCTranslator__dq_Amethys_8b00(bind)
"AmethystLambda.new(:#{bind[0]},self,bind)" 
end
def AmethystCTranslator__dq_VALUE_sp_c_8bbf(bind)
"VALUE cls_#{src.name};\n" 
end
def AmethystCTranslator__dq__at__sh__le_bind_f173(bind)
"@#{bind[6]}"

end
def AmethystCTranslator__dq__sh__le__at_gram_5de9(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__055d(bind)
"#{bind[0]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__19fa(bind)
"#{bind[34]} #{bset(src.name,"it")};\n" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__4187(bind)
"#{bind[21]}  #{bind[65]}_#{bind[66]+1}:  ame_setpos(self,#{bind[55]}); goto #{bind[64]};\n #{bind[53]}:;\n"
end
def AmethystCTranslator__dq__sh__le_bind_lb__8269(bind)
"#{bind[30]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__b294(bind)
"#{bind[27]} arg#{bind[25]-1}=it;"
end
def AmethystCTranslator__dq__sh__le_bind_lb__dc38(bind)
"#{bind[65]}_#{bind[66]+1}"
end
def AmethystCTranslator__dq__sh__le_src_dot_n_9acf(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def AmethystCTranslator__dq__sp__sh__le_bind_9125(bind)
" #{bind[29]*""} it=#{callrule(bind[24],bind[25])};"
end
def AmethystCTranslator__dq_class_sp__sh__0b62(bind)
"class #{@grammar} < #{@parent}\n"
end
def AmethystCTranslator__dq_cstruct_6a5c(bind)
"cstruct #{bind[73]}=*ptr; int #{bind[64]}=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          #{src.enter ?  "ptr->src=#{bget(src.var)}; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}" : 
                     "ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=#{bget(src.var)};ptr->len=1;"
          }
 #{bind[77]}
	goto #{bind[74]};
	#{bind[72]}: #{bind[64]}=1;
	#{bind[74]}: *ptr=#{bind[73]};
	if(#{bind[64]}) goto #{@faillabel};
" 
end
def AmethystCTranslator__dq_def_sp__sh__le_b_5b6b(bind)
"def #{bind[5]}(bind)\n#{bind[6]}\nend\n"
end
def AmethystCTranslator__dq_goto_sp__sh__le__f772(bind)
"goto #{@faillabel};"
end
def AmethystCTranslator__dq_if_sp__lp_str_2ff7(bind)
"if (strncmp(ame_curstr(self),#{bind[21].inspect},#{bind[21].size})) goto #{@faillabel}; else ame_setpos(self,ame_getpos(self)+#{bind[21].size});"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_34ff(bind)
"int #{bind[55]}=ame_getpos(self);\n #{bind[46]} x=1; goto #{bind[53]};  #{bind[54]}: x=0; #{bind[53]}: it=Qnil; ame_setpos(self,#{bind[55]}); if (x==0) goto #{@faillabel};"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_7970(bind)
"int #{bind[55]}; while(1){#{bind[55]}=ame_getpos(self); #{bind[46]} if (ame_getstop(self)!=Qnil){{#{bind[55]}=ame_getpos(self);goto #{bind[61]};} } } #{bind[61]}: ame_setstop(self,Qnil);  ame_setpos(self,#{bind[55]}); "
end
def AmethystCTranslator__dq_it_eq_Qnil_8464(bind)
"it=Qnil;if (ptr->pos<ptr->len) goto #{@faillabel};"
end
def AmethystCTranslator__dq_it_eq__sh__le_bg_281f(bind)
"it=#{bget(src)};" 
end
def AmethystCTranslator__dq_it_eq__sh__le_rb_79a3(bind)
"it=#{rbcall(bind[4],["bind"])}; #{src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def AmethystCTranslator__dq_switch_lp__1048(bind)
"switch(FIX2LONG(rb_hash_aref(#{bind[94]},rb_obj_class(ame_curobj(self))))){"
end
def AmethystCTranslator__dq_switchh_f207(bind)
"switchhash_#{@grammar}_#{$classlabels[@grammar]+=1}"
end
def AmethystCTranslator__lb_bind_lb_1_rb__8404(bind)
[bind[1],bind[2],bind[0]]

end
def AmethystCTranslator__lp_bind_lb_3_rb__e49d(bind)
(bind[3].is_a? String ) || FAIL
end
def AmethystCTranslator__lp_bind_lb_6_rb__79e0(bind)
(bind[6]=="self") ? "src" : "src.#{bind[6]}#{bind[8]!="" ? "(#{bind[8]})":""}"

end
def AmethystCTranslator_addcallb_68bb(bind)
addcallback(src.pred ? ["(",bind[3],") || FAIL"] : bind[3])
end
def AmethystCTranslator_addcallb_dcd7(bind)
addcallback2(bind[0])
end
def AmethystCTranslator_ar_eq__ti_src_dot__efea(bind)
ar=*src.ccode; 
                   @header<<ar[0] if ar[0]
                   @init<<ar[1] if ar[1]
                   "it=#{ar[2]};"
end
def AmethystCTranslator_bind_lb_0_rb__lt__cac1(bind)
bind[0]<<@defs*"\n";bind[0]<<"\n"
end
def AmethystCTranslator_bind_lb_0_rb__pl__40f3(bind)
bind[0]+="\nend"; bind[0]
end
def AmethystCTranslator_bind_lb_0_rb__pl__c1a5(bind)
bind[0]+=bind[8]*""
end
def AmethystCTranslator_bind_lb_1_rb__lt__2f50(bind)
bind[1]<<bind[6][0];bind[2]<<bind[6][1];bind[0]<<bind[6][2]
end
def AmethystCTranslator_bind_lb_21_rb__98ff(bind)
bind[21]<<@header.uniq.sort*"\n"+"\n"
							bind[21]<<bind[46].sort*"\n"
							bind[21]<<@lambdas*"\n"
        		  bind[48]="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@init.uniq.sort*"\n"}
#{@defmethods.sort*"\n" }
"
							[bind[21],bind[48],bind[47]] 
end
def AmethystCTranslator_bind_lb_21_rb__bcd2(bind)
bind[21]+"}"
end
def AmethystCTranslator_bind_lb_21_rb__c26f(bind)
bind[21]+=map_index(bind[46]){|i| "#{bind[65]}_#{i+1}: ame_setpos(self,#{bind[55]});if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto #{bind[64]};}\n #{bind[46][i]} \name_setcut(self,Qnil);goto #{bind[53]};\n"}*""
end
def AmethystCTranslator_bind_lb_21_rb__c846(bind)
bind[21]="int #{bind[55]}=ame_getpos(self);\n"
end
def AmethystCTranslator_bind_lb_21_rb__d17f(bind)
bind[21]+=bind[91].cases(src.first) + " #{bind[46]} break;\n"
end
def AmethystCTranslator_bind_lb_21_rb__d329(bind)
bind[21]+="; #{bind[46]} break;\n"
end
def AmethystCTranslator_bind_lb_25_rb__dbf1(bind)
bind[25]+=1
end
def AmethystCTranslator_bind_lb_2_rb__ti__e7b8(bind)
bind[2]*""
end
def AmethystCTranslator_bind_lb_3_rb_(bind)
bind[3]

end
def AmethystCTranslator_bind_lb_46_rb__44d9(bind)
bind[46]*""
end
def AmethystCTranslator_bind_lb_66_rb__f167(bind)
bind[66]+=1
end
def AmethystCTranslator_bind_lb_91_rb__c6cd(bind)
bind[91].ary.each{|al| bind[48]+="next h[k]=#{bind[25]} if k<=#{al}\\n";bind[21]+="case #{bind[25]}/*#{al}*/:";bind[25]+=1}
end
def AmethystCTranslator_h_eq__dq_VALUE_394b(bind)
h="VALUE #{bind[0]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[0]}\",#{bind[0]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/ cstruct *ptr; int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_h_eq__dq_VALUE_40e0(bind)
h="VALUE #{@grammar}_#{bind[24]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
						h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
\n#{bind[82]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_label_lp__dq_a_f49c(bind)
label("accept")
end
def AmethystCTranslator_label_lp__dq_b_6df7(bind)
label("break")
end
def AmethystCTranslator_label_lp__dq_o_c187(bind)
label("oldpos")
end
def AmethystCTranslator_label_lp__dq_r_95b2(bind)
label("reject")
end
def AmethystCTranslator_mktable_lp__ea79(bind)
mktable(src.rules)
end
def AmethystCTranslator_rbbget_lp_s_68a8(bind)
rbbget(src)
end
def AmethystCTranslator_src_dot_body_519e(bind)
src.body
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


def ctranslator2_compiled_by
'19691669a3e09852dde90c52d7774288'
end
def ctranslator2_source_hash
'9a599455713b569a19208fd8a9777e6e'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'8aa45f3a004e1615ae21679aa8698a33'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/ctranslator2_c"
