
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

def AmethystCTranslator_(bind)
"@#{bind[12]}"
end
def AmethystCTranslator_10(bind)
" #{bind[52]*""} it=#{callrule(bind[23],bind[48])};"
end
def AmethystCTranslator_11(bind)
"#{bind[53]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator_12(bind)
"#{bind[57]} #{bset(src.name,"it")};\n" 
end
def AmethystCTranslator_13(bind)
"VALUE cls_#{src.name};\n" 
end
def AmethystCTranslator_14(bind)
"it=#{bget(src)};" 
end
def AmethystCTranslator_15(bind)
"int #{bind[79]}=ame_getpos(self);\n #{bind[30]} x=1; goto #{bind[77]};  #{bind[78]}: x=0; #{bind[77]}: it=Qnil; ame_setpos(self,#{bind[79]}); if (x==0) goto #{@faillabel};"
end
def AmethystCTranslator_16(bind)
"int #{bind[79]}; while(1){#{bind[79]}=ame_getpos(self); #{bind[30]} if (ame_getstop(self)!=Qnil){{#{bind[79]}=ame_getpos(self);goto #{bind[82]};} } } #{bind[82]}: ame_setstop(self,Qnil);  ame_setpos(self,#{bind[79]}); "
end
def AmethystCTranslator_17(bind)
"#{bind[85]}_#{bind[86]+1}"
end
def AmethystCTranslator_18(bind)
"#{bind[20]}  #{bind[85]}_#{bind[86]+1}:  ame_setpos(self,#{bind[79]}); goto #{bind[11]};\n #{bind[77]}:;\n"
end
def AmethystCTranslator_19(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def AmethystCTranslator_2(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def AmethystCTranslator_20(bind)
"AmethystLambda.new(:#{bind[0]},self,bind)" 
end
def AmethystCTranslator_21(bind)
"#{bind[0]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator_3(bind)
"class #{@grammar} < #{@parent}\n"
end
def AmethystCTranslator_4(bind)
"def #{bind[5]}(bind)\n#{bind[6]}\nend\n"
end
def AmethystCTranslator_5(bind)
"it=#{rbcall(bind[4],["bind"])}; #{src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def AmethystCTranslator_6(bind)
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
def AmethystCTranslator_7(bind)
"unsigned char #{bind[34]}=#{src.act};  switch(#{bind[34]}){"
end
def AmethystCTranslator_8(bind)
"if (strncmp(ame_curstr(self),#{bind[20].inspect},#{bind[20].size})) goto #{@faillabel}; else ame_setpos(self,ame_getpos(self)+#{bind[20].size});"
end
def AmethystCTranslator_9(bind)
"#{bind[50]} arg#{bind[48]-1}=it;"
end
def AmethystCTranslator__append_lp_(bind)
_append(bind[0],bind[6])
end
def AmethystCTranslator__append_lp_10(bind)
_append(bind[67],bind[68])
end
def AmethystCTranslator__append_lp_11(bind)
_append(bind[73],bind[74])
end
def AmethystCTranslator__append_lp_12(bind)
_append(bind[87],bind[89])
end
def AmethystCTranslator__append_lp_2(bind)
_append(bind[3],bind[7])
end
def AmethystCTranslator__append_lp_3(bind)
_append(bind[17],bind[18])
end
def AmethystCTranslator__append_lp_4(bind)
_append(bind[0],bind[1])
end
def AmethystCTranslator__append_lp_5(bind)
_append(bind[1],bind[2])
end
def AmethystCTranslator__append_lp_6(bind)
_append(bind[28],bind[29])
end
def AmethystCTranslator__append_lp_7(bind)
_append(bind[35],bind[38])
end
def AmethystCTranslator__append_lp_8(bind)
_append(bind[49],bind[51])
end
def AmethystCTranslator__append_lp_9(bind)
_append(bind[60],bind[61])
end
def AmethystCTranslator__at_callbac(bind)
@callbacks.to_a.sort
end
def AmethystCTranslator__at_callbac2(bind)
@callbacks={}
end
def AmethystCTranslator__at_defmeth(bind)
@defmethods=[]
end
def AmethystCTranslator__at_defs_eq__lb__rb_(bind)
@defs=[]
end
def AmethystCTranslator__at_defs_lt__lt_s(bind)
@defs<<src.defs if src.defs
end
def AmethystCTranslator__at_faillab(bind)
@faillabel
end
def AmethystCTranslator__at_faillab2(bind)
@faillabel=bind[12] 
end
def AmethystCTranslator__at_faillab3(bind)
@faillabel=bind[13]; bind[17] 
end
def AmethystCTranslator__at_faillab4(bind)
@faillabel="fail"
end
def AmethystCTranslator__at_faillab5(bind)
@faillabel=bind[1] 
end
def AmethystCTranslator__at_faillab6(bind)
@faillabel=bind[2]; bind[5] 
end
def AmethystCTranslator__at_faillab7(bind)
@faillabel=bind[0]; bind[3] 
end
def AmethystCTranslator__at_grammar(bind)
@grammar=src.name;@parent=src.parent
end
def AmethystCTranslator__at_header_eq_(bind)
@header=[]
end
def AmethystCTranslator__at_header_lt_(bind)
@header<<src.header if src.header
end
def AmethystCTranslator__at_header_lt_2(bind)
@header<<"static VALUE #{bind[0]};"; @init<<"#{bind[0]}=#{bind[1]};#{gc_mark_var(bind[0])};"
end
def AmethystCTranslator__at_init_eq__lb__rb_(bind)
@init=[]
end
def AmethystCTranslator__at_init_lt__lt_s(bind)
@init<<src.init if src.init
end
def AmethystCTranslator__at_lambdas(bind)
@lambdas=[] ;@rcallbacks={};@cbhash={}
end
def AmethystCTranslator__at_rulenam(bind)
@rulename=bind[23]; Local.resetnumbering;resetlabels;@locls={}
end
def AmethystCTranslator__lb_bind_lb_1_rb_(bind)
[bind[1],bind[2],bind[0]]
end
def AmethystCTranslator__lp_bind_lb_12(bind)
(bind[12]=="self") ? "src" : "src.#{bind[12]}"
end
def AmethystCTranslator__lp_bind_lb_4_rb_(bind)
(bind[4].is_a? String ) || FAIL
end
def AmethystCTranslator_addcallb(bind)
addcallback(src.pred ? ["(",bind[3],") || FAIL"] : bind[3])
end
def AmethystCTranslator_addcallb2(bind)
addcallback2(bind[0])
end
def AmethystCTranslator_ar_eq__ti_src_dot_(bind)
ar=*src.ccode; 
                   @header<<ar[0] if ar[0]
                   @init<<ar[1] if ar[1]
                   "it=#{ar[2]};"
end
def AmethystCTranslator_bind_lb_0_rb__lt_(bind)
bind[0]<<@defs*"\n";bind[0]<<"\n"
end
def AmethystCTranslator_bind_lb_0_rb__pl_(bind)
bind[0]+=bind[8]*""
end
def AmethystCTranslator_bind_lb_0_rb__pl_2(bind)
bind[0]+="\nend"; bind[0]
end
def AmethystCTranslator_bind_lb_1_rb__lt_(bind)
bind[1]<<bind[8][0];bind[2]<<bind[8][1];bind[0]<<bind[8][2]
end
def AmethystCTranslator_bind_lb_20_rb_(bind)
bind[20]="#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
					bind[4]=addcallback(bind[20])
					"it=#{rbcall(bind[4],["bind"])};"
				
end
def AmethystCTranslator_bind_lb_20_rb_2(bind)
bind[20]+=bind[37].cases(src.first) + " #{bind[30]} break;"
end
def AmethystCTranslator_bind_lb_20_rb_3(bind)
bind[20]+"}"
end
def AmethystCTranslator_bind_lb_20_rb_4(bind)
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
def AmethystCTranslator_bind_lb_20_rb_5(bind)
bind[20]="int #{bind[79]}=ame_getpos(self);\n"
end
def AmethystCTranslator_bind_lb_20_rb_6(bind)
bind[20]+=map_index(bind[30]){|i| "#{bind[85]}_#{i+1}: ame_setpos(self,#{bind[79]});if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto #{bind[11]};}\n #{bind[30][i]} \name_setcut(self,Qnil);goto #{bind[77]};\n"}*""
end
def AmethystCTranslator_bind_lb_2_rb__ti_(bind)
bind[2]*""
end
def AmethystCTranslator_bind_lb_30_rb_(bind)
bind[30]*""
end
def AmethystCTranslator_bind_lb_48_rb_(bind)
bind[48]+=1
end
def AmethystCTranslator_bind_lb_86_rb_(bind)
bind[86]+=1
end
def AmethystCTranslator_h_eq_(bind)
h="VALUE #{@grammar}_#{bind[23]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
						h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
\n#{bind[25]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_h_eq_2(bind)
h="VALUE #{bind[0]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[0]}\",#{bind[0]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_label_lp_(bind)
label("accept")
end
def AmethystCTranslator_label_lp_2(bind)
label("reject")
end
def AmethystCTranslator_label_lp_3(bind)
label("oldpos")
end
def AmethystCTranslator_label_lp_4(bind)
label("break")
end
def AmethystCTranslator_mktable_lp_(bind)
mktable(src.rules)
end
def AmethystCTranslator_rbbget_lp_s(bind)
rbbget(src)
end
def AmethystCTranslator_src_dot_body(bind)
src.body
end
def AmethystCTranslator_src_dot_name(bind)
src.name
end
def AmethystCTranslator_src_dot_rule(bind)
src.rules
end
def AmethystCTranslator_src_dot_to(bind)
src.to
end

end


def ctranslator2_compiled_by
'96f7af24b90a9f15d067a22253657ac7'
end
def ctranslator2_source_hash
'4fdbc1400dab5dda4d22cba02a2e79e5'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'a2ce1238c60046226098fadc01fec835'
end
  require 'compiled/ctranslator2_c'
