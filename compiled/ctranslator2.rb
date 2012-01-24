
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

def AmethystCTranslator__append_lp__4548(bind)
_append(bind[19],bind[20])
end
def AmethystCTranslator__append_lp__5600(bind)
_append(bind[44],bind[45])
end
def AmethystCTranslator__append_lp__5e3c(bind)
_append(bind[3],bind[7])
end
def AmethystCTranslator__append_lp__7ec6(bind)
_append(bind[36],bind[38])
end
def AmethystCTranslator__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def AmethystCTranslator__append_lp__8741(bind)
_append(bind[56],bind[61])
end
def AmethystCTranslator__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def AmethystCTranslator__append_lp__dd73(bind)
_append(bind[3],bind[4])
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
def AmethystCTranslator__at_faillab_628e(bind)
@faillabel=bind[58]; bind[59] 
end
def AmethystCTranslator__at_faillab_8142(bind)
@faillabel="fail"
end
def AmethystCTranslator__at_faillab_9ef5(bind)
@faillabel=bind[57] 
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
def AmethystCTranslator__at_rulenam_a7d1(bind)
@rulename=bind[13]; Local.resetnumbering;resetlabels;@locls={}
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
def AmethystCTranslator__dq__sh__le_bind_lb__1eef(bind)
"#{bind[37]} arg#{bind[35]-1}=it;"
end
def AmethystCTranslator__dq__sh__le_bind_lb__2071(bind)
"#{bind[48]} #{bset(src.name,"it")};\n" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__31a0(bind)
"#{bind[54]}_#{bind[55]+1}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__c3f5(bind)
"#{bind[40]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__ebd1(bind)
"#{bind[9]}  #{bind[54]}_#{bind[55]+1}:  ame_setpos(self,#{bind[53]}); goto #{bind[52]};\n #{bind[51]}:;\n"
end
def AmethystCTranslator__dq__sh__le_src_dot_n_9acf(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def AmethystCTranslator__dq__sp__sh__le_bind_bfb8(bind)
" #{bind[39]*""} it=#{callrule(bind[13],bind[35])};"
end
def AmethystCTranslator__dq_class_sp__sh__0b62(bind)
"class #{@grammar} < #{@parent}\n"
end
def AmethystCTranslator__dq_cstruct_0666(bind)
"cstruct #{bind[77]}=*ptr; int #{bind[52]}=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          #{src.enter ?  "ptr->src=#{bget(src.var)}; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}" : 
                     "ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=#{bget(src.var)};ptr->len=1;"
          }
 #{bind[81]}
	goto #{bind[78]};
	#{bind[76]}: #{bind[52]}=1;
	#{bind[78]}: *ptr=#{bind[77]};
	if(#{bind[52]}) goto #{@faillabel};
" 
end
def AmethystCTranslator__dq_def_sp__sh__le_b_5b6b(bind)
"def #{bind[5]}(bind)\n#{bind[6]}\nend\n"
end
def AmethystCTranslator__dq_if_sp__lp_str_1ff2(bind)
"if (strncmp(ame_curstr(self),#{bind[9].inspect},#{bind[9].size})) goto #{@faillabel}; else ame_setpos(self,ame_getpos(self)+#{bind[9].size});"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_8edf(bind)
"int #{bind[53]}; while(1){#{bind[53]}=ame_getpos(self); #{bind[7]} if (ame_getstop(self)!=Qnil){{#{bind[53]}=ame_getpos(self);goto #{bind[66]};} } } #{bind[66]}: ame_setstop(self,Qnil);  ame_setpos(self,#{bind[53]}); "
end
def AmethystCTranslator__dq_int_sp__sh__le_b_e73f(bind)
"int #{bind[53]}=ame_getpos(self);\n #{bind[7]} x=1; goto #{bind[51]};  #{bind[69]}: x=0; #{bind[51]}: it=Qnil; ame_setpos(self,#{bind[53]}); if (x==0) goto #{@faillabel};"
end
def AmethystCTranslator__dq_it_eq__sh__le_bg_281f(bind)
"it=#{bget(src)};" 
end
def AmethystCTranslator__dq_it_eq__sh__le_rb_e540(bind)
"it=#{rbcall(bind[22],["bind"])}; #{src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def AmethystCTranslator__dq_unsigne_f46d(bind)
"unsigned char #{bind[84]}=#{src.act};  switch(#{bind[84]}){"
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
def AmethystCTranslator_addcallb_1641(bind)
addcallback(src.pred ? ["(",bind[21],") || FAIL"] : bind[21])
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
def AmethystCTranslator_bind_lb_35_rb__2567(bind)
bind[35]+=1
end
def AmethystCTranslator_bind_lb_3_rb_(bind)
bind[3]

end
def AmethystCTranslator_bind_lb_55_rb__27eb(bind)
bind[55]+=1
end
def AmethystCTranslator_bind_lb_7_rb__ti__a05a(bind)
bind[7]*""
end
def AmethystCTranslator_bind_lb_9_rb__eq__0cf2(bind)
bind[9]="#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
					bind[22]=addcallback(bind[9])
					"it=#{rbcall(bind[22],["bind"])};"
				
end
def AmethystCTranslator_bind_lb_9_rb__eq__ccd4(bind)
bind[9]="int #{bind[53]}=ame_getpos(self);\n"
end
def AmethystCTranslator_bind_lb_9_rb__lt__95b9(bind)
bind[9]<<@header.uniq.sort*"\n"+"\n"
							bind[9]<<bind[7].sort*"\n"
							bind[9]<<@lambdas*"\n"
        		  init="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@init.uniq.sort*"\n"}
#{@defmethods.sort*"\n" }
"
							[bind[9],init,bind[8]] 
end
def AmethystCTranslator_bind_lb_9_rb__pl__9cee(bind)
bind[9]+"}"
end
def AmethystCTranslator_bind_lb_9_rb__pl__9ebc(bind)
bind[9]+=map_index(bind[7]){|i| "#{bind[54]}_#{i+1}: ame_setpos(self,#{bind[53]});if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto #{bind[52]};}\n #{bind[7][i]} \name_setcut(self,Qnil);goto #{bind[51]};\n"}*""
end
def AmethystCTranslator_bind_lb_9_rb__pl__a5a8(bind)
bind[9]+=bind[86].cases(src.first) + " #{bind[7]} break;"
end
def AmethystCTranslator_h_eq__dq_VALUE_394b(bind)
h="VALUE #{bind[0]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[0]}\",#{bind[0]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/ cstruct *ptr; int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_h_eq__dq_VALUE_7445(bind)
h="VALUE #{@grammar}_#{bind[13]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
						h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
\n#{bind[16]}\nreturn it;\nfail: return failobj; }" 
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
'7b94d043c424a3ee9dd4031d4beddc92'
end
def ctranslator2_source_hash
'c7a31bf3cad423e7fa0248a776017412'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'daac0d41460fb8a1a79705f9ad0ceedf'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/ctranslator2_c"
