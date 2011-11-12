
class AmethystCTranslator < Amethyst 
	def addcallback2(cb)
		return @rcallbacks[cb] if @rcallbacks[cb]
		@cbno||=0
		@cbno+=1
		n=Local["#{@rulename}_#{@grammar}cb",@cbno].desc
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
		@header<<"static VALUE s_#{str}#{@grammar};"
		@init<<"s_#{str}#{@grammar}=rb_intern(#{str.inspect});"
		"s_#{str}#{@grammar}"
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

def add_c_global_AmethystCTranslatorcb_1(bind)
@header<<"static VALUE #{bind[0]};"; @init<<"#{bind[0]}=#{bind[1]};#{gc_mark_var(bind[0])};"
end
def addcallback_AmethystCTranslatorcb_1(bind)
addcallback2(bind[0])
end
def addlambda_AmethystCTranslatorcb_1(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def addlambda_AmethystCTranslatorcb_2(bind)
@faillabel=bind[1] 
end
def addlambda_AmethystCTranslatorcb_3(bind)
@faillabel=bind[2]; bind[5] 
end
def addlambda_AmethystCTranslatorcb_4(bind)
h="VALUE #{bind[0]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[0]}\",#{bind[0]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
end
def addlambda_AmethystCTranslatorcb_5(bind)
"AmethystLambda.new(:#{bind[0]},self,bind)" 
end
def failwrap_AmethystCTranslatorcb_1(bind)
"#{bind[0]} FAILTEST(#{@faillabel});" 
end
def itrans_AmethystCTranslatorcb_1(bind)
(bind[4].is_a? String ) || FAIL
end
def itrans_AmethystCTranslatorcb_2(bind)
_append(bind[0],bind[6])
end
def itrans_AmethystCTranslatorcb_3(bind)
bind[1]<<bind[8][0];bind[2]<<bind[8][1];bind[0]<<bind[8][2]
end
def itrans_AmethystCTranslatorcb_4(bind)
_append(bind[3],bind[7])
end
def itrans_AmethystCTranslatorcb_5(bind)
[bind[1],bind[2],bind[0]]
end
def rbcode_AmethystCTranslatorcb_1(bind)
"class #{@grammar} < #{@parent}\n"
end
def rbcode_AmethystCTranslatorcb_2(bind)
bind[0]<<@defs*"\n";bind[0]<<"\n"
end
def rbcode_AmethystCTranslatorcb_3(bind)
@callbacks.to_a.sort
end
def rbcode_AmethystCTranslatorcb_4(bind)
bind[1]=[bind[1]]
end
def rbcode_AmethystCTranslatorcb_5(bind)
"def #{bind[5]}(bind)\n#{bind[6]}\nend\n"
end
def rbcode_AmethystCTranslatorcb_6(bind)
bind[0]+=bind[8]*""
end
def rbcode_AmethystCTranslatorcb_7(bind)
bind[0]+="\nend"; bind[0]
end
def rbtrans2_AmethystCTranslatorcb_1(bind)
_append(bind[0],bind[1])
end
def rbtrans2_AmethystCTranslatorcb_2(bind)
bind[2]*""
end
def rbtrans_AmethystCTranslatorcb_1(bind)
_append(bind[1],bind[2])
end
def rbtrans_AmethystCTranslatorcb_2(bind)
rbbget(src)
end
def rbtrans_AmethystCTranslatorcb_3(bind)
(bind[10]=="self") ? "src" : "src.#{bind[10]}"
end
def rbtrans_AmethystCTranslatorcb_4(bind)
"@#{bind[10]}"
end
def rbtrans_AmethystCTranslatorcb_5(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def rw_AmethystCTranslatorcb_1(bind)
@faillabel=bind[0]; bind[3] 
end
def trans_AmethystCTranslatorcb_1(bind)
@grammar=src.name;@parent=src.parent
end
def trans_AmethystCTranslatorcb_10(bind)
src.rules
end
def trans_AmethystCTranslatorcb_11(bind)
_append(bind[3],bind[4])
end
def trans_AmethystCTranslatorcb_12(bind)
"VALUE cls_#{src.name};\n" 
end
def trans_AmethystCTranslatorcb_13(bind)
bind[8]<<@header.uniq.sort*"\n"+"\n"
							bind[8]<<bind[6].sort*"\n"
							bind[8]<<@lambdas*"\n"
        		  init="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@init.uniq.sort*"\n"}
#{@defmethods.sort*"\n" }
"
							[bind[8],init,bind[7]] 
end
def trans_AmethystCTranslatorcb_14(bind)
src.name
end
def trans_AmethystCTranslatorcb_15(bind)
@rulename=bind[12]; Local.resetnumbering;resetlabels;@locls={}
end
def trans_AmethystCTranslatorcb_16(bind)
src.body
end
def trans_AmethystCTranslatorcb_17(bind)
bind[13]=[bind[13]]
end
def trans_AmethystCTranslatorcb_18(bind)
h="VALUE #{@grammar}_#{bind[12]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
						h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it;
\n#{bind[14]}\nreturn it;\nfail: return failobj; }" 
end
def trans_AmethystCTranslatorcb_19(bind)
_append(bind[17],bind[18])
end
def trans_AmethystCTranslatorcb_2(bind)
@lambdas=[] ;@rcallbacks={}
end
def trans_AmethystCTranslatorcb_20(bind)
addcallback(src.pred ? ["(",bind[19],") || FAIL"] : bind[19])
end
def trans_AmethystCTranslatorcb_21(bind)
"it=#{rbcall(bind[20],["bind"])}; #{src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def trans_AmethystCTranslatorcb_22(bind)
_append(bind[23],bind[24])
end
def trans_AmethystCTranslatorcb_23(bind)
ar=*src.ccode; 
                   @header<<ar[0] if ar[0]
                   @init<<ar[1] if ar[1]
                   "it=#{ar[2]};"
end
def trans_AmethystCTranslatorcb_24(bind)
bind[29]+=1
end
def trans_AmethystCTranslatorcb_25(bind)
"#{bind[31]} arg#{bind[29]-1}=it;"
end
def trans_AmethystCTranslatorcb_26(bind)
_append(bind[30],bind[32])
end
def trans_AmethystCTranslatorcb_27(bind)
" #{bind[33]*""} it=#{callrule(bind[12],bind[29])};"
end
def trans_AmethystCTranslatorcb_28(bind)
"#{bind[34]} FAILTEST(#{@faillabel});" 
end
def trans_AmethystCTranslatorcb_29(bind)
_append(bind[38],bind[39])
end
def trans_AmethystCTranslatorcb_3(bind)
@defs=[]
end
def trans_AmethystCTranslatorcb_30(bind)
bind[6]*""
end
def trans_AmethystCTranslatorcb_31(bind)
"#{bind[42]}\n #{bset(src.name,"it")}; " 
end
def trans_AmethystCTranslatorcb_32(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_33(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_34(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_35(bind)
bind[49]+=1
end
def trans_AmethystCTranslatorcb_36(bind)
"#{bind[48]}_#{bind[49]+1}"
end
def trans_AmethystCTranslatorcb_37(bind)
@faillabel=bind[51] 
end
def trans_AmethystCTranslatorcb_38(bind)
@faillabel=bind[52]; bind[53] 
end
def trans_AmethystCTranslatorcb_39(bind)
_append(bind[50],bind[55])
end
def trans_AmethystCTranslatorcb_4(bind)
@defmethods=[]
end
def trans_AmethystCTranslatorcb_40(bind)
bind[8]="int #{bind[47]}=ame_getpos(self);\n"
end
def trans_AmethystCTranslatorcb_41(bind)
bind[8]+=map_index(bind[6]){|i| "#{bind[48]}_#{i+1}: ame_setpos(self,#{bind[47]});if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto #{bind[46]};}\n #{bind[6][i]} \name_setcut(self,Qnil);goto #{bind[45]};\n"}*""
end
def trans_AmethystCTranslatorcb_42(bind)
"#{bind[8]}  #{bind[48]}_#{bind[49]+1}:  ame_setpos(self,#{bind[47]}); goto #{bind[46]};\n #{bind[45]}:;\n"
end
def trans_AmethystCTranslatorcb_43(bind)
label("break")
end
def trans_AmethystCTranslatorcb_44(bind)
"int #{bind[47]}; while(1){#{bind[47]}=ame_getpos(self); #{bind[6]} if (ame_getstop(self)!=Qnil){{#{bind[47]}=ame_getpos(self);goto #{bind[60]};} } } #{bind[60]}: ame_setstop(self,Qnil);  ame_setpos(self,#{bind[47]}); "
end
def trans_AmethystCTranslatorcb_45(bind)
label("reject")
end
def trans_AmethystCTranslatorcb_46(bind)
"int #{bind[47]}=ame_getpos(self);\n #{bind[6]} x=1; goto #{bind[45]};  #{bind[63]}: x=0; #{bind[45]}: it=Qnil; ame_setpos(self,#{bind[47]}); if (x==0) goto #{@faillabel};"
end
def trans_AmethystCTranslatorcb_47(bind)
_append(bind[66],bind[67])
end
def trans_AmethystCTranslatorcb_48(bind)
"it=#{bget(src)};" 
end
def trans_AmethystCTranslatorcb_49(bind)
bind[8]="#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
					bind[20]=addcallback(bind[8])
					"it=#{rbcall(bind[20],["bind"])};"
				
end
def trans_AmethystCTranslatorcb_5(bind)
@faillabel="fail"
end
def trans_AmethystCTranslatorcb_50(bind)
src.to
end
def trans_AmethystCTranslatorcb_51(bind)
bind[76]=[bind[76]]
end
def trans_AmethystCTranslatorcb_52(bind)
"int #{bind[47]}=ame_getpos(self); int #{bind[73]}=ame_getlen(self); VALUE #{bind[74]}=ame_getsrc(self); int #{bind[46]}=0;
ame_setsrc(self,#{bget(src.var)}); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),#{symb("size")},0)));
 #{bind[77]}
	goto #{bind[75]};
	#{bind[72]}: #{bind[46]}=1;
	#{bind[75]}: ame_setsrc(self,#{bind[74]}); ame_setpos(self,#{bind[47]}); ame_setlen(self,#{bind[73]});
	if(#{bind[46]}) goto #{@faillabel};
" 
end
def trans_AmethystCTranslatorcb_53(bind)
@defs<<src.defs if src.defs
end
def trans_AmethystCTranslatorcb_54(bind)
@header<<src.header if src.header
end
def trans_AmethystCTranslatorcb_55(bind)
@init<<src.init if src.init
end
def trans_AmethystCTranslatorcb_56(bind)
"unsigned char #{bind[81]}=#{src.act};  switch(#{bind[81]}){"
end
def trans_AmethystCTranslatorcb_57(bind)
bind[8]+=bind[84].cases(src.first) + " #{bind[6]} break;"
end
def trans_AmethystCTranslatorcb_58(bind)
_append(bind[82],bind[85])
end
def trans_AmethystCTranslatorcb_59(bind)
bind[8]+"}"
end
def trans_AmethystCTranslatorcb_6(bind)
@callbacks={}
end
def trans_AmethystCTranslatorcb_7(bind)
mktable(src.rules)
end
def trans_AmethystCTranslatorcb_8(bind)
@header=[]
end
def trans_AmethystCTranslatorcb_9(bind)
@init=[]
end

end


def ctranslator2_compiled_by
'ea067fdfa12d41c5b58f6a4e0cd87f03'
end
def ctranslator2_source_hash
'12320fb0de278eb46f9f3c0e7965e151'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'd9c6c2fa9ed99684a9dc9fdd60c8a0cd'
end
  require 'compiled/ctranslator2_c'
