
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

def AmethystCTranslator__append_lp__19cb(bind)
_append(bind[20],bind[21])
end
def AmethystCTranslator__append_lp__47be(bind)
_append(bind[61],bind[66])
end
def AmethystCTranslator__append_lp__5e3c(bind)
_append(bind[3],bind[7])
end
def AmethystCTranslator__append_lp__8043(bind)
_append(bind[41],bind[43])
end
def AmethystCTranslator__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def AmethystCTranslator__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def AmethystCTranslator__append_lp__dd73(bind)
_append(bind[3],bind[4])
end
def AmethystCTranslator__append_lp__f794(bind)
_append(bind[49],bind[50])
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
def AmethystCTranslator__at_faillab_1470(bind)
@faillabel=bind[63]; bind[64] 
end
def AmethystCTranslator__at_faillab_1610(bind)
@faillabel
end
def AmethystCTranslator__at_faillab_37e7(bind)
@faillabel=bind[0]; bind[3] 
end
def AmethystCTranslator__at_faillab_74ee(bind)
@faillabel=bind[2]; bind[4] 
end
def AmethystCTranslator__at_faillab_7559(bind)
@faillabel=bind[62] 
end
def AmethystCTranslator__at_faillab_8142(bind)
@faillabel="fail"
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
def AmethystCTranslator__at_header_lt__26bb(bind)
@header<< "VALUE #{bind[93]};"
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
def AmethystCTranslator__at_init_sp__sp__lt__6c47(bind)
@init  <<"#{bind[93]}=rb_eval_string(\"Hash.new{|h,k|#{bind[10]}}\");#{gc_mark_var(bind[93])};"
end
def AmethystCTranslator__at_lambdas_ecda(bind)
@lambdas=[] ;@rcallbacks={};@cbhash={}
end
def AmethystCTranslator__at_rulenam_7d01(bind)
@rulename=bind[14]; Local.resetnumbering;resetlabels;@locls={}
end
def AmethystCTranslator__dq_Amethys_8b00(bind)
"AmethystLambda.new(:#{bind[0]},self,bind)" 
end
def AmethystCTranslator__dq_VALUE_sp_c_8bbf(bind)
"VALUE cls_#{src.name};\n" 
end
def AmethystCTranslator__dq__at__sh__le_bind_65a6(bind)
"@#{bind[8]}"

end
def AmethystCTranslator__dq__sh__le__at_gram_5de9(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__055d(bind)
"#{bind[0]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__0eb5(bind)
"#{bind[42]} arg#{bind[40]-1}=it;"
end
def AmethystCTranslator__dq__sh__le_bind_lb__321f(bind)
"#{bind[45]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__67bb(bind)
"#{bind[53]} #{bset(src.name,"it")};\n" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__7f3b(bind)
"#{bind[59]}_#{bind[60]+1}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__f3f8(bind)
"#{bind[9]}  #{bind[59]}_#{bind[60]+1}:  ame_setpos(self,#{bind[58]}); goto #{bind[57]};\n #{bind[56]}:;\n"
end
def AmethystCTranslator__dq__sh__le_src_dot_n_9acf(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def AmethystCTranslator__dq__sp__sh__le_bind_4c85(bind)
" #{bind[44]*""} it=#{callrule(bind[14],bind[40])};"
end
def AmethystCTranslator__dq_class_sp__sh__0b62(bind)
"class #{@grammar} < #{@parent}\n"
end
def AmethystCTranslator__dq_cstruct_d31d(bind)
"cstruct #{bind[82]}=*ptr; int #{bind[57]}=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          #{src.enter ?  "ptr->src=#{bget(src.var)}; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}" : 
                     "ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=#{bget(src.var)};ptr->len=1;"
          }
 #{bind[86]}
	goto #{bind[83]};
	#{bind[81]}: #{bind[57]}=1;
	#{bind[83]}: *ptr=#{bind[82]};
	if(#{bind[57]}) goto #{@faillabel};
" 
end
def AmethystCTranslator__dq_def_sp__sh__le_b_5b6b(bind)
"def #{bind[5]}(bind)\n#{bind[6]}\nend\n"
end
def AmethystCTranslator__dq_goto_sp__sh__le__f772(bind)
"goto #{@faillabel};"
end
def AmethystCTranslator__dq_if_sp__lp_str_1ff2(bind)
"if (strncmp(ame_curstr(self),#{bind[9].inspect},#{bind[9].size})) goto #{@faillabel}; else ame_setpos(self,ame_getpos(self)+#{bind[9].size});"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_a011(bind)
"int #{bind[58]}=ame_getpos(self);\n #{bind[7]} x=1; goto #{bind[56]};  #{bind[74]}: x=0; #{bind[56]}: it=Qnil; ame_setpos(self,#{bind[58]}); if (x==0) goto #{@faillabel};"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_db9f(bind)
"int #{bind[58]}; while(1){#{bind[58]}=ame_getpos(self); #{bind[7]} if (ame_getstop(self)!=Qnil){{#{bind[58]}=ame_getpos(self);goto #{bind[71]};} } } #{bind[71]}: ame_setstop(self,Qnil);  ame_setpos(self,#{bind[58]}); "
end
def AmethystCTranslator__dq_it_eq__sh__le_bg_281f(bind)
"it=#{bget(src)};" 
end
def AmethystCTranslator__dq_it_eq__sh__le_rb_2ee5(bind)
"it=#{rbcall(bind[23],["bind"])}; #{src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def AmethystCTranslator__dq_switch_lp__b8f1(bind)
"switch(FIX2LONG(rb_hash_aref(#{bind[93]},rb_obj_class(ame_curobj(self))))){"
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
def AmethystCTranslator__lp_bind_lb_8_rb__731e(bind)
(bind[8]=="self") ? "src" : "src.#{bind[8]}#{bind[9]!="" ? "(#{bind[9]})":""}"

end
def AmethystCTranslator_addcallb_441b(bind)
addcallback(src.pred ? ["(",bind[22],") || FAIL"] : bind[22])
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
def AmethystCTranslator_bind_lb_2_rb__ti__e7b8(bind)
bind[2]*""
end
def AmethystCTranslator_bind_lb_3_rb_(bind)
bind[3]

end
def AmethystCTranslator_bind_lb_40_rb__b31f(bind)
bind[40]+=1
end
def AmethystCTranslator_bind_lb_60_rb__9241(bind)
bind[60]+=1
end
def AmethystCTranslator_bind_lb_7_rb__ti__a05a(bind)
bind[7]*""
end
def AmethystCTranslator_bind_lb_90_rb__bf39(bind)
bind[90].ary.each{|al| bind[10]+="next h[k]=#{bind[40]} if k<=#{al}\\n";bind[9]+="case #{bind[40]}:";bind[40]+=1}
end
def AmethystCTranslator_bind_lb_9_rb__eq__1a30(bind)
bind[9]="#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
					bind[23]=addcallback(bind[9])
					"it=#{rbcall(bind[23],["bind"])};"
				
end
def AmethystCTranslator_bind_lb_9_rb__eq__587e(bind)
bind[9]="int #{bind[58]}=ame_getpos(self);\n"
end
def AmethystCTranslator_bind_lb_9_rb__lt__4c8f(bind)
bind[9]<<@header.uniq.sort*"\n"+"\n"
							bind[9]<<bind[7].sort*"\n"
							bind[9]<<@lambdas*"\n"
        		  bind[10]="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@init.uniq.sort*"\n"}
#{@defmethods.sort*"\n" }
"
							[bind[9],bind[10],bind[8]] 
end
def AmethystCTranslator_bind_lb_9_rb__pl__1059(bind)
bind[9]+=map_index(bind[7]){|i| "#{bind[59]}_#{i+1}: ame_setpos(self,#{bind[58]});if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto #{bind[57]};}\n #{bind[7][i]} \name_setcut(self,Qnil);goto #{bind[56]};\n"}*""
end
def AmethystCTranslator_bind_lb_9_rb__pl__7bc9(bind)
bind[9]+=bind[90].cases(src.first) + " #{bind[7]} break;\n"
end
def AmethystCTranslator_bind_lb_9_rb__pl__9cee(bind)
bind[9]+"}"
end
def AmethystCTranslator_bind_lb_9_rb__pl__dbc8(bind)
bind[9]+="; #{bind[7]} break;\n"
end
def AmethystCTranslator_h_eq__dq_VALUE_394b(bind)
h="VALUE #{bind[0]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[0]}\",#{bind[0]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/ cstruct *ptr; int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_h_eq__dq_VALUE_c569(bind)
h="VALUE #{@grammar}_#{bind[14]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
						h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
\n#{bind[17]}\nreturn it;\nfail: return failobj; }" 
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
'c16f40af7c3d1f248f4135f2d0062d1d'
end
def ctranslator2_source_hash
'fd61ae0c3a2594ec1f116f8bd5835314'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'365b14c6e265af1f6d0321c473bc0c79'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/ctranslator2_c"
