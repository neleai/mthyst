
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
		return "rb_ary_entry(bind,#{s}/*#{cm}*/)"
	end
	def bset(s,e)
		cm=s[0]
		s=desc(s)
		return "rb_ary_store(bind,#{s}/*#{cm}*/,#{e})"
	end
	def rbbget(s)
		"bind[#{desc(s)}]"
	end
	def iget(s)
		"rb_ivar_get(self,rb_intern(\"@#{s}\"))"
		"IGET(#{s})"
	end
	def iset(s,e)
		"rb_ivar_set(self,rb_intern(\"@#{s}\"),#{e})"
		"ISET(#{s},#{e})"
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
	def callrule(name,argc)
		margs=argc.times.map{|a| ",arg#{a}"}
		grammar=resolvegrammar(@grammar,name)
		if grammar
			"#{grammar}_#{name}(self #{margs})"
		else
			"CALL(#{name},#{argc} #{margs})"
		end
	end
end

class AmethystCTranslator < Amethyst
def self.switchcb_AmethystCTranslator1(e)
return 0 if e<=Local
return 1 if e<=Args
return 2 if e<=Array
return 3 if e<=Strin
return 4 if e<=Key
return 5 if e<=Global
return 6 if e<=Exp
return 7 if e<=Object
return 8
end
@@switchhashAmethystCTranslator1=Hash.new{|h,k| h[k]=switchcb_AmethystCTranslator1(k)}
def switchcbAmethystCTranslator1(e)
@@switchhashAmethystCTranslator1[e.class]
end
def self.switchcb_AmethystCTranslator2(e)
return 0 if e<=Grammar
return 1 if e<=Rule
return 2 if e<=Act
return 3 if e<=CAct
return 4 if e<=Apply
return 5 if e<=Seq
return 6 if e<=Bind
return 7 if e<=Or
return 8 if e<=Cut
return 9 if e<=Stop
return 10 if e<=Many
return 11 if e<=Lookahead
return 12 if e<=Local
return 13 if e<=Result
return 14 if e<=Pass
return 15 if e<=Switch
return 16 if e<=Object
return 17
end
@@switchhashAmethystCTranslator2=Hash.new{|h,k| h[k]=switchcb_AmethystCTranslator2(k)}
def switchcbAmethystCTranslator2(e)
@@switchhashAmethystCTranslator2[e.class]
end
def addcallback_AmethystCTranslatorcb_1(bind)
addcallback2(bind[0])
end
def addlambda_AmethystCTranslatorcb_1(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def addlambda_AmethystCTranslatorcb_2(bind)
@faillabel=bind[2]; bind[5] 
end
def addlambda_AmethystCTranslatorcb_3(bind)
h="VALUE #{bind[0]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[0]}\",#{bind[0]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
end
def addlambda_AmethystCTranslatorcb_4(bind)
"AmethystLambda.new(:#{bind[0]},self,bind)" 
end
def char_AmethystCTranslatorcb_1(bind)
(bind[0].is_a? String ) || FAIL
end
def clas_AmethystCTranslatorcb_1(bind)
(bind[0].is_a?(bind[1])) || FAIL
end
def fails_AmethystCTranslatorcb_1(bind)
(false) || FAIL
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
def rbtrans_AmethystCTranslatorcb_1(bind)
rbbget(@src)
end
def rbtrans_AmethystCTranslatorcb_2(bind)
_append(bind[4],bind[5])
end
def rbtrans_AmethystCTranslatorcb_3(bind)
bind[6]*""
end
def rbtrans_AmethystCTranslatorcb_4(bind)
_append(bind[8],bind[9])
end
def rbtrans_AmethystCTranslatorcb_5(bind)
_append(bind[11],bind[12])
end
def rbtrans_AmethystCTranslatorcb_6(bind)
(bind[14]=="self") ? "@src" : "@src.#{bind[14]}"
end
def rbtrans_AmethystCTranslatorcb_7(bind)
"@#{bind[14]}"
end
def rw_AmethystCTranslatorcb_1(bind)
@faillabel
end
def rw_AmethystCTranslatorcb_2(bind)
@faillabel=bind[1] 
end
def rw_AmethystCTranslatorcb_3(bind)
@faillabel=bind[0]; bind[3] 
end
def trans_AmethystCTranslatorcb_1(bind)
@grammar=@src.name;@parent=@src.parent
end
def trans_AmethystCTranslatorcb_10(bind)
_append(bind[3],bind[4])
end
def trans_AmethystCTranslatorcb_11(bind)
"VALUE cls_#{@src.name};\n" 
end
def trans_AmethystCTranslatorcb_12(bind)
bind[8]<<@header.sort*"\n"+"\n"
							bind[8]<<bind[6].sort*"\n"
							bind[8]<<@lambdas*"\n"
        		  init="\n cls_#{@src.name}=rb_define_class(\"#{@src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@defmethods.sort*"\n" }
"
							[bind[8],init,bind[7]] 
end
def trans_AmethystCTranslatorcb_13(bind)
@src.name
end
def trans_AmethystCTranslatorcb_14(bind)
@rulename=bind[12]; Local.resetnumbering;resetlabels;@locls={}
end
def trans_AmethystCTranslatorcb_15(bind)
@src.body
end
def trans_AmethystCTranslatorcb_16(bind)
bind[13]=[bind[13]]
end
def trans_AmethystCTranslatorcb_17(bind)
h="VALUE #{@grammar}_#{bind[12]}(VALUE self #{map_index(@src.args){|i| ",VALUE a#{i}"}})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{@src.name}\",#{@grammar}_#{@src.name},#{@src.args.size});"
						h+"{VALUE vals[#{@src.args.size}]; VALUE bind=rb_ary_new2(#{@locls.size}); #{map_index(@src.args){|i| bset(@src.args[i],"a#{i}")+";"}} int x;VALUE arg0,arg1,arg2,arg3;VALUE it;
\n#{bind[14]}\nreturn it;\nfail: return failobj; }" 
end
def trans_AmethystCTranslatorcb_18(bind)
_append(bind[17],bind[18])
end
def trans_AmethystCTranslatorcb_19(bind)
addcallback(@src.pred ? ["(",bind[19],") || FAIL"] : bind[19])
end
def trans_AmethystCTranslatorcb_2(bind)
@lambdas=[] ;@rcallbacks={}
end
def trans_AmethystCTranslatorcb_20(bind)
"it=CALL(#{bind[20]},1,bind); #{@src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def trans_AmethystCTranslatorcb_21(bind)
"it=#{@src.ccode};"
end
def trans_AmethystCTranslatorcb_22(bind)
bind[25]+=1
end
def trans_AmethystCTranslatorcb_23(bind)
"#{bind[27]} arg#{bind[25]-1}=it;"
end
def trans_AmethystCTranslatorcb_24(bind)
_append(bind[26],bind[28])
end
def trans_AmethystCTranslatorcb_25(bind)
" #{bind[29]} it=#{callrule(bind[12],bind[25])};"
end
def trans_AmethystCTranslatorcb_26(bind)
"#{bind[30]} FAILTEST(#{@faillabel});" 
end
def trans_AmethystCTranslatorcb_27(bind)
_append(bind[34],bind[35])
end
def trans_AmethystCTranslatorcb_28(bind)
@src.expr
end
def trans_AmethystCTranslatorcb_29(bind)
bind[38]=[bind[38]]
end
def trans_AmethystCTranslatorcb_3(bind)
@defs=[]
end
def trans_AmethystCTranslatorcb_30(bind)
"#{bind[39]}\n #{bset(@src.name,"it")}; " 
end
def trans_AmethystCTranslatorcb_31(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_32(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_33(bind)
bind[46]+=1
end
def trans_AmethystCTranslatorcb_34(bind)
"#{bind[45]}_#{bind[46]+1}"
end
def trans_AmethystCTranslatorcb_35(bind)
@faillabel=bind[48] 
end
def trans_AmethystCTranslatorcb_36(bind)
@faillabel=bind[49]; bind[50] 
end
def trans_AmethystCTranslatorcb_37(bind)
_append(bind[47],bind[52])
end
def trans_AmethystCTranslatorcb_38(bind)
bind[8]="int #{bind[44]}=ame_getpos(self);\n"
end
def trans_AmethystCTranslatorcb_39(bind)
bind[8]+=map_index(bind[6]){|i| "#{bind[45]}_#{i+1}: ame_setpos(self,#{bind[44]});if (#{iget("cut")}!=Qnil) {#{iset("cut","Qnil")}; goto #{bind[43]};}\n #{bind[6][i]} \n#{iset("cut","Qnil")};goto #{bind[42]};\n"}*""
end
def trans_AmethystCTranslatorcb_4(bind)
@defmethods=[]
end
def trans_AmethystCTranslatorcb_40(bind)
"#{bind[8]}  #{bind[45]}_#{bind[46]+1}:  ame_setpos(self,#{bind[44]}); goto #{bind[43]};\n #{bind[42]}:;\n"
end
def trans_AmethystCTranslatorcb_41(bind)
"#{iset("cut","Qtrue")};"
end
def trans_AmethystCTranslatorcb_42(bind)
"#{iset("stop","Qtrue")};"
end
def trans_AmethystCTranslatorcb_43(bind)
label("break")
end
def trans_AmethystCTranslatorcb_44(bind)
"int #{bind[44]}; while(1){#{bind[44]}=ame_getpos(self); #{bind[6]} if (#{iget("stop")}!=Qnil){{#{bind[44]}=ame_getpos(self);goto #{bind[57]};} } } #{bind[57]}: #{iset("stop","Qnil")};  ame_setpos(self,#{bind[44]}); "
end
def trans_AmethystCTranslatorcb_45(bind)
label("reject")
end
def trans_AmethystCTranslatorcb_46(bind)
"int #{bind[44]}=ame_getpos(self);\n #{bind[6]} x=1; goto #{bind[42]};  #{bind[60]}: x=0; #{bind[42]}: it=Qnil; ame_setpos(self,#{bind[44]}); if (x==0) goto #{@faillabel};"
end
def trans_AmethystCTranslatorcb_47(bind)
"it=#{bget(@src)};" 
end
def trans_AmethystCTranslatorcb_48(bind)
bind[8]="#{@src.name}.create( {#{@src.vars.map{|l| ":#{l[0]}=>#{rbbget(l)}" }.sort*","} })"
					bind[20]=addcallback(bind[8])
					"it=CALL(#{bind[20]},1,bind);"
				
end
def trans_AmethystCTranslatorcb_49(bind)
@src.to
end
def trans_AmethystCTranslatorcb_5(bind)
@faillabel="fail"
end
def trans_AmethystCTranslatorcb_50(bind)
bind[71]=[bind[71]]
end
def trans_AmethystCTranslatorcb_51(bind)
"int #{bind[44]}=ame_getpos(self); int #{bind[68]}=ame_getlen(self); VALUE #{bind[69]}=ame_getsrc(self); int #{bind[43]}=0;
ame_setsrc(self,#{bget(@src.var)}); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern(\"size\"),0)));
 #{bind[72]}
	goto #{bind[70]};
	#{bind[67]}: #{bind[43]}=1;
	#{bind[70]}: ame_setsrc(self,#{bind[69]}); ame_setpos(self,#{bind[44]}); ame_setlen(self,#{bind[68]});
	if(#{bind[43]}) goto #{@faillabel};
" 
end
def trans_AmethystCTranslatorcb_52(bind)
@defs<<@src.defs if @src.defs
end
def trans_AmethystCTranslatorcb_53(bind)
"char #{bind[76]}=#{@src.act};  switch(#{bind[76]}){"
end
def trans_AmethystCTranslatorcb_54(bind)
bind[8]+=bind[78].cases(@src.first) + " #{bind[6]} break;"
end
def trans_AmethystCTranslatorcb_55(bind)
bind[8]+"}"
end
def trans_AmethystCTranslatorcb_6(bind)
@callbacks={}
end
def trans_AmethystCTranslatorcb_7(bind)
mktable(@src.rules)
end
def trans_AmethystCTranslatorcb_8(bind)
@header=[]
end
def trans_AmethystCTranslatorcb_9(bind)
@src.rules
end

end


def ctranslator2_compiled_by
'e710c5a0f45c2e159d2816be792a0755'
end
def ctranslator2_source_hash
'dbacf9eecb1381cbe517a323fe8eca98'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'e316e349721b4f4929148caf52e2b081'
end
  require 'compiled/ctranslator2_c'
