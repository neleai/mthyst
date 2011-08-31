
class AmethystCTranslator < Amethyst 
	def addcallback2(cb)
		@cbno||=0
		@cbno+=1
		n=Local["#{@rulename}_#{@grammar}cb",@cbno].desc
		@callbacks[n]=cb
		n
	end
	def desc(s)
		return @locls[s.desc] if @locls[s.desc]
		@locls[s.desc]=@locls.size
	end
	def bget(s)
		s=desc(s)
		return "rb_ary_entry(bind,#{s})"
		"BGET(#{s})"
	end
	def bset(s,e)
		s=desc(s)
		return "rb_ary_store(bind,#{s},#{e})"
		"BSET(#{s},#{e})"
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
return 0 if e<=Cut
return 1 if e<=Local
return 2 if e<=Or
return 3 if e<=Stop
return 4 if e<=Lookahead
return 5 if e<=Rule
return 6 if e<=CAct
return 7 if e<=Grammar
return 8 if e<=Act
return 9 if e<=Apply
return 10 if e<=Bind
return 11 if e<=Result
return 12 if e<=Pass
return 13 if e<=Seq
return 14 if e<=Many
return 15 if e<=Switch
return 16
end
@@switchhashAmethystCTranslator2=Hash.new{|h,k| h[k]=switchcb_AmethystCTranslator2(k)}
def switchcbAmethystCTranslator2(e)
@@switchhashAmethystCTranslator2[e.class]
end
def addcallback_AmethystCTranslatorcb_1(bind)
bind[1]=[bind[1]]
end
def addcallback_AmethystCTranslatorcb_2(bind)
addcallback2(bind[0])
end
def addlambda_AmethystCTranslatorcb_1(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def addlambda_AmethystCTranslatorcb_2(bind)
@faillabel
end
def addlambda_AmethystCTranslatorcb_3(bind)
@faillabel=bind[1] 
end
def addlambda_AmethystCTranslatorcb_4(bind)
@faillabel=bind[2]; bind[4] 
end
def addlambda_AmethystCTranslatorcb_5(bind)
h="VALUE #{bind[0]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[0]}\",#{bind[0]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
end
def addlambda_AmethystCTranslatorcb_6(bind)
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
def rbtrans_AmethystCTranslatorcb_10(bind)
"@#{bind[14]}"
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
bind[6]*""
end
def rbtrans_AmethystCTranslatorcb_6(bind)
_append(bind[11],bind[12])
end
def rbtrans_AmethystCTranslatorcb_7(bind)
bind[6]*""
end
def rbtrans_AmethystCTranslatorcb_8(bind)
@src.name
end
def rbtrans_AmethystCTranslatorcb_9(bind)
(bind[14]=="self") ? "@src" : "@src.#{bind[14]}"
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
def spaces_AmethystCTranslatorcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_AmethystCTranslatorcb_2(bind)
(bind[2].is_a? String ) || FAIL
end
def spaces_AmethystCTranslatorcb_3(bind)
(bind[1].match(bind[4])) || FAIL
end
def spaces_AmethystCTranslatorcb_4(bind)
_append(bind[0],bind[7])
end
def trans_AmethystCTranslatorcb_1(bind)
"#{iset("cut","Qtrue")};"
end
def trans_AmethystCTranslatorcb_10(bind)
@faillabel=bind[12]; bind[13] 
end
def trans_AmethystCTranslatorcb_11(bind)
_append(bind[10],bind[15])
end
def trans_AmethystCTranslatorcb_12(bind)
bind[17]="int #{bind[7]}=ame_getpos(self);\n"
end
def trans_AmethystCTranslatorcb_13(bind)
bind[17]+=map_index(bind[16]){|i| "#{bind[8]}_#{i+1}: ame_setpos(self,#{bind[7]});if (#{iget("cut")}!=Qnil) {#{iset("cut","Qnil")}; goto #{bind[6]};}\n #{bind[16][i]} \n#{iset("cut","Qnil")};goto #{bind[5]};\n"}*""
end
def trans_AmethystCTranslatorcb_14(bind)
"#{bind[17]}  #{bind[8]}_#{bind[9]+1}:  ame_setpos(self,#{bind[7]}); goto #{bind[6]};\n #{bind[5]}:;\n"
end
def trans_AmethystCTranslatorcb_15(bind)
"#{iset("stop","Qtrue")};"
end
def trans_AmethystCTranslatorcb_16(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_17(bind)
label("reject")
end
def trans_AmethystCTranslatorcb_18(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_19(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_2(bind)
"it=#{bget(@src)};" 
end
def trans_AmethystCTranslatorcb_20(bind)
@faillabel=bind[11] 
end
def trans_AmethystCTranslatorcb_21(bind)
@faillabel=bind[12]; bind[13] 
end
def trans_AmethystCTranslatorcb_22(bind)
"int #{bind[7]}=ame_getpos(self);\n #{bind[16]} x=1; goto #{bind[5]};  #{bind[21]}: x=0; #{bind[5]}: it=Qnil; ame_setpos(self,#{bind[7]}); if (x==#{@src.neg ? 1 : 0}) goto #{@faillabel};"
end
def trans_AmethystCTranslatorcb_23(bind)
@src.name
end
def trans_AmethystCTranslatorcb_24(bind)
@rulename=bind[24]; Local.resetnumbering;resetlabels;@locls={}
end
def trans_AmethystCTranslatorcb_25(bind)
@src.body
end
def trans_AmethystCTranslatorcb_26(bind)
bind[25]=[bind[25]]
end
def trans_AmethystCTranslatorcb_27(bind)
h="VALUE #{@grammar}_#{bind[24]}(VALUE self #{map_index(@src.args){|i| ",VALUE a#{i}"}})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{@src.name}\",#{@grammar}_#{@src.name},#{@src.args.size});"
						h+"{VALUE vals[#{@src.args.size}]; VALUE bind=rb_ary_new2(#{@locls.size}); #{map_index(@src.args){|i| bset(@src.args[i],"a#{i}")+";"}} int x;VALUE arg0,arg1,arg2,arg3;VALUE it;
\n#{bind[26]}\nreturn it;\nfail: return failobj; }" 
end
def trans_AmethystCTranslatorcb_28(bind)
_append(bind[29],bind[30])
end
def trans_AmethystCTranslatorcb_29(bind)
"it=#{bind[31]};"
end
def trans_AmethystCTranslatorcb_3(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_30(bind)
@grammar=@src.name;@parent=@src.parent
end
def trans_AmethystCTranslatorcb_31(bind)
@lambdas=[]
end
def trans_AmethystCTranslatorcb_32(bind)
@defs=[]
end
def trans_AmethystCTranslatorcb_33(bind)
@defmethods=[]
end
def trans_AmethystCTranslatorcb_34(bind)
@faillabel="fail"
end
def trans_AmethystCTranslatorcb_35(bind)
@callbacks={}
end
def trans_AmethystCTranslatorcb_36(bind)
mktable(@src.rules)
end
def trans_AmethystCTranslatorcb_37(bind)
@header=[]
end
def trans_AmethystCTranslatorcb_38(bind)
@src.rules
end
def trans_AmethystCTranslatorcb_39(bind)
bind[33]=[bind[33]]
end
def trans_AmethystCTranslatorcb_4(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_40(bind)
_append(bind[35],bind[36])
end
def trans_AmethystCTranslatorcb_41(bind)
"VALUE cls_#{@src.name};\n" 
end
def trans_AmethystCTranslatorcb_42(bind)
bind[17]<<@header.sort*"\n"+"\n"
							bind[17]<<bind[16].sort*"\n"
							bind[17]<<@lambdas*"\n"
        		  init="\n cls_#{@src.name}=rb_define_class(\"#{@src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@defmethods.sort*"\n" }
"
							[bind[17],init,bind[38]] 
end
def trans_AmethystCTranslatorcb_43(bind)
_append(bind[41],bind[42])
end
def trans_AmethystCTranslatorcb_44(bind)
addcallback(@src.pred ? ["(",bind[43],") || FAIL"] : bind[43])
end
def trans_AmethystCTranslatorcb_45(bind)
"it=CALL(#{bind[44]},1,bind); #{@src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def trans_AmethystCTranslatorcb_46(bind)
bind[47]=[bind[47]]
end
def trans_AmethystCTranslatorcb_47(bind)
rule=@ruletable[@rulename];  failwrap(map_index(rule.args){|i|"vals[#{i}]=#{bget(rule.args[i])};"}*""+ "it=rb_call_super(#{rule.args.size},vals);")
end
def trans_AmethystCTranslatorcb_48(bind)
bind[51]+=1
end
def trans_AmethystCTranslatorcb_49(bind)
"#{bind[53]} arg#{bind[51]-1}=it;"
end
def trans_AmethystCTranslatorcb_5(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_50(bind)
_append(bind[52],bind[54])
end
def trans_AmethystCTranslatorcb_51(bind)
" #{bind[55]} it=#{callrule(bind[24],bind[51])};"
end
def trans_AmethystCTranslatorcb_52(bind)
"#{bind[56]} FAILTEST(#{@faillabel});" 
end
def trans_AmethystCTranslatorcb_53(bind)
@src.expr
end
def trans_AmethystCTranslatorcb_54(bind)
bind[60]=[bind[60]]
end
def trans_AmethystCTranslatorcb_55(bind)
"#{bind[61]}\n #{bset(@src.name,"it")}; " 
end
def trans_AmethystCTranslatorcb_56(bind)
@src.args
end
def trans_AmethystCTranslatorcb_57(bind)
bind[64]=[bind[64]]
end
def trans_AmethystCTranslatorcb_58(bind)
bind[17]="#{@src.name}.create(#{bind[65]} {#{@src.vars.map{|l| ":#{l[0]}=>#{rbbget(l)}" }.sort*","} })"
					bind[44]=addcallback(bind[17])
					"it=CALL(#{bind[44]},1,bind);"
				
end
def trans_AmethystCTranslatorcb_59(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_6(bind)
bind[9]+=1
end
def trans_AmethystCTranslatorcb_60(bind)
@faillabel=bind[11] 
end
def trans_AmethystCTranslatorcb_61(bind)
@src.to
end
def trans_AmethystCTranslatorcb_62(bind)
bind[72]=[bind[72]]
end
def trans_AmethystCTranslatorcb_63(bind)
@faillabel=bind[12]; bind[13] 
end
def trans_AmethystCTranslatorcb_64(bind)
"int #{bind[7]}=ame_getpos(self); int #{bind[69]}=ame_getlen(self); VALUE #{bind[70]}=ame_getsrc(self); int #{bind[6]}=0;
ame_setsrc(self,#{bget(@src.var)}); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern(\"size\"),0)));
 #{bind[73]}
	goto #{bind[71]};
	#{bind[68]}: #{bind[6]}=1;
	#{bind[71]}: ame_setsrc(self,#{bind[70]}); ame_setpos(self,#{bind[7]}); ame_setlen(self,#{bind[69]});
	if(#{bind[6]}) goto #{@faillabel};
" 
end
def trans_AmethystCTranslatorcb_65(bind)
_append(bind[76],bind[77])
end
def trans_AmethystCTranslatorcb_66(bind)
bind[16]*""
end
def trans_AmethystCTranslatorcb_67(bind)
label("break")
end
def trans_AmethystCTranslatorcb_68(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_69(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_7(bind)
"#{bind[8]}_#{bind[9]+1}"
end
def trans_AmethystCTranslatorcb_70(bind)
@faillabel=bind[11] 
end
def trans_AmethystCTranslatorcb_71(bind)
@faillabel=bind[12]; bind[13] 
end
def trans_AmethystCTranslatorcb_72(bind)
"int #{bind[7]}; while(1){#{bind[7]}=ame_getpos(self); #{bind[16]} if (#{iget("stop")}!=Qnil){{#{bind[7]}=ame_getpos(self);goto #{bind[80]};} } } #{bind[80]}: #{iset("stop","Qnil")};  ame_setpos(self,#{bind[7]}); "
end
def trans_AmethystCTranslatorcb_73(bind)
@defs<<@src.defs if @src.defs
end
def trans_AmethystCTranslatorcb_74(bind)
"char #{bind[83]}=#{@src.act};  switch(#{bind[83]}){"
end
def trans_AmethystCTranslatorcb_75(bind)
bind[17]+=bind[31].map{|n| n==:default ? "default:;" : "case #{n}:;"}*"" + " #{bind[16]} break;"
end
def trans_AmethystCTranslatorcb_76(bind)
bind[17]+"}"
end
def trans_AmethystCTranslatorcb_8(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_9(bind)
@faillabel=bind[11] 
end
def transfn_AmethystCTranslatorcb_1(bind)
"proc{#{bind[0]}}"
end

end


def ctranslator2_compiled_by
'05274f1a7aa8586d5a4e4d60957d63a4'
end
def ctranslator2_source_hash
'56f9473af5b764ce89b5fe94db3c62c5'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'8c5c3ad2c7d3658fc473310770ae5581'
end
  require 'compiled/ctranslator2_c'
