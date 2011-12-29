
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

class AmethystCTranslator < Amethyst

def AmethystCTranslator__append_lp__3c16(bind)
_append(bind[28],bind[29])
end
def AmethystCTranslator__append_lp__4297(bind)
_append(bind[0],bind[6])
end
def AmethystCTranslator__append_lp__5e3c(bind)
_append(bind[3],bind[7])
end
def AmethystCTranslator__append_lp__68c6(bind)
_append(bind[49],bind[51])
end
def AmethystCTranslator__append_lp__6f53(bind)
_append(bind[67],bind[68])
end
def AmethystCTranslator__append_lp__835a(bind)
_append(bind[17],bind[18])
end
def AmethystCTranslator__append_lp__8a10(bind)
_append(bind[60],bind[61])
end
def AmethystCTranslator__append_lp__c046(bind)
_append(bind[73],bind[74])
end
def AmethystCTranslator__append_lp__c554(bind)
_append(bind[35],bind[38])
end
def AmethystCTranslator__append_lp__c9ea(bind)
_append(bind[87],bind[89])
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
def AmethystCTranslator__at_faillab_4695(bind)
@faillabel=bind[2]; bind[5] 
end
def AmethystCTranslator__at_faillab_8142(bind)
@faillabel="fail"
end
def AmethystCTranslator__at_faillab_e643(bind)
@faillabel=bind[1] 
end
def AmethystCTranslator__at_faillab_ea72(bind)
@faillabel=bind[12] 
end
def AmethystCTranslator__at_faillab_ecff(bind)
@faillabel=bind[13]; bind[17] 
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
def AmethystCTranslator__at_header_lt__fff4(bind)
@header<<src.header if src.header
end
def AmethystCTranslator__at_init_eq__lb__rb__47da(bind)
@init=[]
end
def AmethystCTranslator__at_init_lt__lt_s_a51d(bind)
@init<<src.init if src.init
end
def AmethystCTranslator__at_lambdas_ecda(bind)
@lambdas=[] ;@rcallbacks={};@cbhash={}
end
def AmethystCTranslator__at_rulenam_4f24(bind)
@rulename=bind[23]; Local.resetnumbering;resetlabels;@locls={}
end
def AmethystCTranslator__dq_Amethys_8b00(bind)
"AmethystLambda.new(:#{bind[0]},self,bind)" 
end
def AmethystCTranslator__dq_VALUE_sp_c_8bbf(bind)
"VALUE cls_#{src.name};\n" 
end
def AmethystCTranslator__dq__at__sh__le_bind_e609(bind)
"@#{bind[12]}"
end
def AmethystCTranslator__dq__sh__le__at_gram_5de9(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__055d(bind)
"#{bind[0]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__60d4(bind)
"#{bind[57]} #{bset(src.name,"it")};\n" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__82a1(bind)
"#{bind[50]} arg#{bind[48]-1}=it;"
end
def AmethystCTranslator__dq__sh__le_bind_lb__ab4c(bind)
"#{bind[53]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__d378(bind)
"#{bind[20]}  #{bind[85]}_#{bind[86]+1}:  ame_setpos(self,#{bind[79]}); goto #{bind[11]};\n #{bind[77]}:;\n"
end
def AmethystCTranslator__dq__sh__le_bind_lb__e11c(bind)
"#{bind[85]}_#{bind[86]+1}"
end
def AmethystCTranslator__dq__sh__le_src_dot_n_9acf(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def AmethystCTranslator__dq__sp__sh__le_bind_2d9b(bind)
" #{bind[52]*""} it=#{callrule(bind[23],bind[48])};"
end
def AmethystCTranslator__dq_class_sp__sh__0b62(bind)
"class #{@grammar} < #{@parent}\n"
end
def AmethystCTranslator__dq_cstruct_faf6(bind)
"cstruct #{bind[9]}=*ptr; int #{bind[11]}=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          #{src.enter ?  "ptr->src=#{bget(src.var)}; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}" : 
                     "ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=#{bget(src.var)};ptr->len=1;"
          }
 #{bind[15]}
	goto #{bind[10]};
	#{bind[8]}: #{bind[11]}=1;
	#{bind[10]}: *ptr=#{bind[9]};
	if(#{bind[11]}) goto #{@faillabel};
" 
end
def AmethystCTranslator__dq_def_sp__sh__le_b_5b6b(bind)
"def #{bind[5]}(bind)\n#{bind[6]}\nend\n"
end
def AmethystCTranslator__dq_if_sp__lp_str_8e6c(bind)
"if (strncmp(ame_curstr(self),#{bind[20].inspect},#{bind[20].size})) goto #{@faillabel}; else ame_setpos(self,ame_getpos(self)+#{bind[20].size});"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_e9a2(bind)
"int #{bind[79]}=ame_getpos(self);\n #{bind[30]} x=1; goto #{bind[77]};  #{bind[78]}: x=0; #{bind[77]}: it=Qnil; ame_setpos(self,#{bind[79]}); if (x==0) goto #{@faillabel};"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_eee9(bind)
"int #{bind[79]}; while(1){#{bind[79]}=ame_getpos(self); #{bind[30]} if (ame_getstop(self)!=Qnil){{#{bind[79]}=ame_getpos(self);goto #{bind[82]};} } } #{bind[82]}: ame_setstop(self,Qnil);  ame_setpos(self,#{bind[79]}); "
end
def AmethystCTranslator__dq_it_eq__sh__le_bg_281f(bind)
"it=#{bget(src)};" 
end
def AmethystCTranslator__dq_it_eq__sh__le_rb_79a3(bind)
"it=#{rbcall(bind[4],["bind"])}; #{src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def AmethystCTranslator__dq_unsigne_9a12(bind)
"unsigned char #{bind[34]}=#{src.act};  switch(#{bind[34]}){"
end
def AmethystCTranslator__lb_bind_lb_1_rb__dce6(bind)
[bind[1],bind[2],bind[0]]
end
def AmethystCTranslator__lp_bind_lb_12_6a46(bind)
(bind[12]=="self") ? "src" : "src.#{bind[12]}"
end
def AmethystCTranslator__lp_bind_lb_4_rb__f922(bind)
(bind[4].is_a? String ) || FAIL
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
def AmethystCTranslator_bind_lb_1_rb__lt__f2e1(bind)
bind[1]<<bind[8][0];bind[2]<<bind[8][1];bind[0]<<bind[8][2]
end
def AmethystCTranslator_bind_lb_20_rb__1f87(bind)
bind[20]+"}"
end
def AmethystCTranslator_bind_lb_20_rb__47ed(bind)
bind[20]+=map_index(bind[30]){|i| "#{bind[85]}_#{i+1}: ame_setpos(self,#{bind[79]});if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto #{bind[11]};}\n #{bind[30][i]} \name_setcut(self,Qnil);goto #{bind[77]};\n"}*""
end
def AmethystCTranslator_bind_lb_20_rb__4d72(bind)
bind[20]="#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
					bind[4]=addcallback(bind[20])
					"it=#{rbcall(bind[4],["bind"])};"
				
end
def AmethystCTranslator_bind_lb_20_rb__4f8e(bind)
bind[20]+=bind[37].cases(src.first) + " #{bind[30]} break;"
end
def AmethystCTranslator_bind_lb_20_rb__50a1(bind)
bind[20]="int #{bind[79]}=ame_getpos(self);\n"
end
def AmethystCTranslator_bind_lb_20_rb__93fe(bind)
bind[20]<<@header.uniq.sort*"\n"+"\n"
							bind[20]<<bind[30].sort*"\n"
							bind[20]<<@lambdas*"\n"
        		  init="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@init.uniq.sort*"\n"}
#{@defmethods.sort*"\n" }
"
							[bind[20],init,bind[70]] 
end
def AmethystCTranslator_bind_lb_2_rb__ti__e7b8(bind)
bind[2]*""
end
def AmethystCTranslator_bind_lb_30_rb__7d61(bind)
bind[30]*""
end
def AmethystCTranslator_bind_lb_48_rb__a323(bind)
bind[48]+=1
end
def AmethystCTranslator_bind_lb_86_rb__7e96(bind)
bind[86]+=1
end
def AmethystCTranslator_h_eq__dq_VALUE_6920(bind)
h="VALUE #{@grammar}_#{bind[23]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
						h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
\n#{bind[25]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_h_eq__dq_VALUE_9d97(bind)
h="VALUE #{bind[0]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[0]}\",#{bind[0]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
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
'06c4f49d02c34502aa1023682de5bad6'
end
def ctranslator2_source_hash
'4fdbc1400dab5dda4d22cba02a2e79e5'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'f98fa27fe9c35dcf824bbfc8da3e3d92'
end
require Amethyst_path+"/compiled/#{RUBY_VERSION}/ctranslator2_c"
