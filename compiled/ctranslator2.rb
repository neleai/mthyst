
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
puts bind[0].inspect
end
def addcallback_AmethystCTranslatorcb_2(bind)
addcallback2(bind[0])
end
def addlambda_AmethystCTranslatorcb_1(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def addlambda_AmethystCTranslatorcb_2(bind)
AmethystLambda.new(:AmethystCTranslator_addlambda_lambda1,self,bind)
end
def addlambda_AmethystCTranslatorcb_3(bind)
@faillabel=bind[4] 
end
def addlambda_AmethystCTranslatorcb_4(bind)
@faillabel=bind[5]; bind[6] 
end
def addlambda_AmethystCTranslatorcb_5(bind)
h="VALUE #{bind[0]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[0]}\",#{bind[0]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[1]}\nreturn it;\nfail: return failobj; }" 
end
def addlambda_AmethystCTranslatorcb_6(bind)
"AmethystLambda.new(:#{bind[0]},self,bind)" 
end
def failwrap_AmethystCTranslatorcb_1(bind)
"#{bind[0]} FAILTEST(#{@faillabel});" 
end
def itrans_AmethystCTranslatorcb_1(bind)
(bind[3].is_a? String ) || FAIL
end
def itrans_AmethystCTranslatorcb_2(bind)
_append(bind[0],bind[5])
end
def itrans_AmethystCTranslatorcb_3(bind)
bind[1]<<bind[6][0];bind[2]<<bind[6][1];bind[0]<<bind[6][2]
end
def itrans_AmethystCTranslatorcb_4(bind)
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
_append(bind[3],bind[7])
end
def rbcode_AmethystCTranslatorcb_7(bind)
bind[0]+=bind[8]*""
end
def rbcode_AmethystCTranslatorcb_8(bind)
bind[0]+="\nend"; bind[0]
end
def rbtrans2_AmethystCTranslatorcb_1(bind)
_append(bind[0],bind[1])
end
def rbtrans2_AmethystCTranslatorcb_2(bind)
bind[2]*""
end
def rbtrans_AmethystCTranslatorcb_1(bind)
"@#{bind[8]}"
end
def rbtrans_AmethystCTranslatorcb_2(bind)
(bind[8]=="self") ? "src" : "src.#{bind[8]}"
end
def rbtrans_AmethystCTranslatorcb_3(bind)
rbbget(src)
end
def rw_AmethystCTranslatorcb_1(bind)
@faillabel=bind[1] 
end
def rw_AmethystCTranslatorcb_2(bind)
@faillabel=bind[0]; bind[3] 
end
def trans_AmethystCTranslatorcb_1(bind)
_append(bind[1],bind[2])
end
def trans_AmethystCTranslatorcb_10(bind)
"int #{bind[9]}=ame_getpos(self); int #{bind[10]}=ame_getlen(self); VALUE #{bind[11]}=ame_getsrc(self); int #{bind[13]}=0;
ame_setsrc(self,#{bget(src.var)}); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),#{symb("size")},0)));
 #{bind[15]}
	goto #{bind[12]};
	#{bind[8]}: #{bind[13]}=1;
	#{bind[12]}: ame_setsrc(self,#{bind[11]}); ame_setpos(self,#{bind[9]}); ame_setlen(self,#{bind[10]});
	if(#{bind[13]}) goto #{@faillabel};
" 
end
def trans_AmethystCTranslatorcb_11(bind)
bind[23]="#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
					bind[4]=addcallback(bind[23])
					"it=#{rbcall(bind[4],["bind"])};"
				
end
def trans_AmethystCTranslatorcb_12(bind)
src.name
end
def trans_AmethystCTranslatorcb_13(bind)
@rulename=bind[26]; Local.resetnumbering;resetlabels;@locls={}
end
def trans_AmethystCTranslatorcb_14(bind)
src.body
end
def trans_AmethystCTranslatorcb_15(bind)
bind[27]=[bind[27]]
end
def trans_AmethystCTranslatorcb_16(bind)
h="VALUE #{@grammar}_#{bind[26]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
						h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it;
\n#{bind[28]}\nreturn it;\nfail: return failobj; }" 
end
def trans_AmethystCTranslatorcb_17(bind)
_append(bind[31],bind[32])
end
def trans_AmethystCTranslatorcb_18(bind)
bind[33]*""
end
def trans_AmethystCTranslatorcb_19(bind)
@defs<<src.defs if src.defs
end
def trans_AmethystCTranslatorcb_2(bind)
addcallback(src.pred ? ["(",bind[3],") || FAIL"] : bind[3])
end
def trans_AmethystCTranslatorcb_20(bind)
@header<<src.header if src.header
end
def trans_AmethystCTranslatorcb_21(bind)
@init<<src.init if src.init
end
def trans_AmethystCTranslatorcb_22(bind)
"unsigned char #{bind[37]}=#{src.act};  switch(#{bind[37]}){"
end
def trans_AmethystCTranslatorcb_23(bind)
bind[23]+=bind[39].cases(src.first) + " #{bind[33]} break;"
end
def trans_AmethystCTranslatorcb_24(bind)
bind[23]+"}"
end
def trans_AmethystCTranslatorcb_25(bind)
bind[44]+=1
end
def trans_AmethystCTranslatorcb_26(bind)
"#{bind[46]} arg#{bind[44]-1}=it;"
end
def trans_AmethystCTranslatorcb_27(bind)
_append(bind[45],bind[47])
end
def trans_AmethystCTranslatorcb_28(bind)
" #{bind[48]*""} it=#{callrule(bind[26],bind[44])};"
end
def trans_AmethystCTranslatorcb_29(bind)
"#{bind[49]} FAILTEST(#{@faillabel});" 
end
def trans_AmethystCTranslatorcb_3(bind)
"it=#{rbcall(bind[4],["bind"])}; #{src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def trans_AmethystCTranslatorcb_30(bind)
"#{bind[53]}\n #{bset(src.name,"it")}; " 
end
def trans_AmethystCTranslatorcb_31(bind)
ar=*src.ccode; 
                   @header<<ar[0] if ar[0]
                   @init<<ar[1] if ar[1]
                   "it=#{ar[2]};"
end
def trans_AmethystCTranslatorcb_32(bind)
@grammar=src.name;@parent=src.parent
end
def trans_AmethystCTranslatorcb_33(bind)
@lambdas=[] ;@rcallbacks={}
end
def trans_AmethystCTranslatorcb_34(bind)
@defs=[]
end
def trans_AmethystCTranslatorcb_35(bind)
@defmethods=[]
end
def trans_AmethystCTranslatorcb_36(bind)
@faillabel="fail"
end
def trans_AmethystCTranslatorcb_37(bind)
@callbacks={}
end
def trans_AmethystCTranslatorcb_38(bind)
mktable(src.rules)
end
def trans_AmethystCTranslatorcb_39(bind)
@header=[]
end
def trans_AmethystCTranslatorcb_4(bind)
src.to
end
def trans_AmethystCTranslatorcb_40(bind)
@init=[]
end
def trans_AmethystCTranslatorcb_41(bind)
src.rules
end
def trans_AmethystCTranslatorcb_42(bind)
bind[59]=[bind[59]]
end
def trans_AmethystCTranslatorcb_43(bind)
_append(bind[61],bind[62])
end
def trans_AmethystCTranslatorcb_44(bind)
"VALUE cls_#{src.name};\n" 
end
def trans_AmethystCTranslatorcb_45(bind)
bind[23]<<@header.uniq.sort*"\n"+"\n"
							bind[23]<<bind[33].sort*"\n"
							bind[23]<<@lambdas*"\n"
        		  init="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@init.uniq.sort*"\n"}
#{@defmethods.sort*"\n" }
"
							[bind[23],init,bind[64]] 
end
def trans_AmethystCTranslatorcb_46(bind)
"it=#{bget(src)};" 
end
def trans_AmethystCTranslatorcb_47(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_48(bind)
label("reject")
end
def trans_AmethystCTranslatorcb_49(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_5(bind)
bind[14]=[bind[14]]
end
def trans_AmethystCTranslatorcb_50(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda2,self,bind)
end
def trans_AmethystCTranslatorcb_51(bind)
"int #{bind[9]}=ame_getpos(self);\n #{bind[33]} x=1; goto #{bind[69]};  #{bind[70]}: x=0; #{bind[69]}: it=Qnil; ame_setpos(self,#{bind[9]}); if (x==0) goto #{@faillabel};"
end
def trans_AmethystCTranslatorcb_52(bind)
label("break")
end
def trans_AmethystCTranslatorcb_53(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda3,self,bind)
end
def trans_AmethystCTranslatorcb_54(bind)
"int #{bind[9]}; while(1){#{bind[9]}=ame_getpos(self); #{bind[33]} if (ame_getstop(self)!=Qnil){{#{bind[9]}=ame_getpos(self);goto #{bind[73]};} } } #{bind[73]}: ame_setstop(self,Qnil);  ame_setpos(self,#{bind[9]}); "
end
def trans_AmethystCTranslatorcb_55(bind)
bind[77]+=1
end
def trans_AmethystCTranslatorcb_56(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda4,self,bind)
end
def trans_AmethystCTranslatorcb_57(bind)
"#{bind[76]}_#{bind[77]+1}"
end
def trans_AmethystCTranslatorcb_58(bind)
_append(bind[78],bind[80])
end
def trans_AmethystCTranslatorcb_59(bind)
bind[23]="int #{bind[9]}=ame_getpos(self);\n"
end
def trans_AmethystCTranslatorcb_6(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda1,self,bind)
end
def trans_AmethystCTranslatorcb_60(bind)
bind[23]+=map_index(bind[33]){|i| "#{bind[76]}_#{i+1}: ame_setpos(self,#{bind[9]});if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto #{bind[13]};}\n #{bind[33][i]} \name_setcut(self,Qnil);goto #{bind[69]};\n"}*""
end
def trans_AmethystCTranslatorcb_61(bind)
"#{bind[23]}  #{bind[76]}_#{bind[77]+1}:  ame_setpos(self,#{bind[9]}); goto #{bind[13]};\n #{bind[69]}:;\n"
end
def trans_AmethystCTranslatorcb_7(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_8(bind)
@faillabel=bind[18] 
end
def trans_AmethystCTranslatorcb_9(bind)
@faillabel=bind[19]; bind[20] 
end

end


def ctranslator2_compiled_by
'26a443a672e00380dbd5aa8ee4beb9bc'
end
def ctranslator2_source_hash
'c2757851274a77abbe2751175d1b4238'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'f15f5835a35c46a6875ca731b06a6a8c'
end
  require 'compiled/ctranslator2_c'
