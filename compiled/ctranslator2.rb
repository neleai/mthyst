
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
def self.switchcb_1(e)
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
@@switchhash1=Hash.new{|h,k| h[k]=switchcb_1(k)}
def switchcb1(e)
@@switchhash1[e.class]
end
def self.switchcb_2(e)
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
@@switchhash2=Hash.new{|h,k| h[k]=switchcb_2(k)}
def switchcb2(e)
@@switchhash2[e.class]
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
@faillabel=bind[2]; bind[5] 
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
def empty_AmethystCTranslatorcb_1(bind)

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
Local
end
def rbtrans_AmethystCTranslatorcb_10(bind)
_append(bind[11],bind[12])
end
def rbtrans_AmethystCTranslatorcb_11(bind)
bind[6]*""
end
def rbtrans_AmethystCTranslatorcb_12(bind)
Key
end
def rbtrans_AmethystCTranslatorcb_13(bind)
@src.name
end
def rbtrans_AmethystCTranslatorcb_14(bind)
(bind[14]=="self") ? "@src" : "@src.#{bind[14]}"
end
def rbtrans_AmethystCTranslatorcb_15(bind)
Global
end
def rbtrans_AmethystCTranslatorcb_16(bind)
"@#{bind[14]}"
end
def rbtrans_AmethystCTranslatorcb_17(bind)
Exp
end
def rbtrans_AmethystCTranslatorcb_2(bind)
rbbget(@src)
end
def rbtrans_AmethystCTranslatorcb_3(bind)
Args
end
def rbtrans_AmethystCTranslatorcb_4(bind)
_append(bind[4],bind[5])
end
def rbtrans_AmethystCTranslatorcb_5(bind)
bind[6]*""
end
def rbtrans_AmethystCTranslatorcb_6(bind)
Array
end
def rbtrans_AmethystCTranslatorcb_7(bind)
_append(bind[8],bind[9])
end
def rbtrans_AmethystCTranslatorcb_8(bind)
bind[6]*""
end
def rbtrans_AmethystCTranslatorcb_9(bind)
Strin
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
Cut
end
def trans_AmethystCTranslatorcb_10(bind)
"#{bind[8]}_#{bind[9]+1}"
end
def trans_AmethystCTranslatorcb_11(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_12(bind)
@faillabel=bind[11] 
end
def trans_AmethystCTranslatorcb_13(bind)
@faillabel=bind[12]; bind[13] 
end
def trans_AmethystCTranslatorcb_14(bind)
_append(bind[10],bind[15])
end
def trans_AmethystCTranslatorcb_15(bind)
bind[17]="int #{bind[7]}=ame_getpos(self);\n"
end
def trans_AmethystCTranslatorcb_16(bind)
bind[17]+=map_index(bind[16]){|i| "#{bind[8]}_#{i+1}: ame_setpos(self,#{bind[7]});if (#{iget("cut")}!=Qnil) {#{iset("cut","Qnil")}; goto #{bind[6]};}\n #{bind[16][i]} \n#{iset("cut","Qnil")};goto #{bind[5]};\n"}*""
end
def trans_AmethystCTranslatorcb_17(bind)
"#{bind[17]}  #{bind[8]}_#{bind[9]+1}:  ame_setpos(self,#{bind[7]}); goto #{bind[6]};\n #{bind[5]}:;\n"
end
def trans_AmethystCTranslatorcb_18(bind)
Stop
end
def trans_AmethystCTranslatorcb_19(bind)
"#{iset("stop","Qtrue")};"
end
def trans_AmethystCTranslatorcb_2(bind)
"#{iset("cut","Qtrue")};"
end
def trans_AmethystCTranslatorcb_20(bind)
Lookahead
end
def trans_AmethystCTranslatorcb_21(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_22(bind)
label("reject")
end
def trans_AmethystCTranslatorcb_23(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_24(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_25(bind)
@faillabel=bind[11] 
end
def trans_AmethystCTranslatorcb_26(bind)
@faillabel=bind[12]; bind[13] 
end
def trans_AmethystCTranslatorcb_27(bind)
"int #{bind[7]}=ame_getpos(self);\n #{bind[16]} x=1; goto #{bind[5]};  #{bind[21]}: x=0; #{bind[5]}: it=Qnil; ame_setpos(self,#{bind[7]}); if (x==#{@src.neg ? 1 : 0}) goto #{@faillabel};"
end
def trans_AmethystCTranslatorcb_28(bind)
Rule
end
def trans_AmethystCTranslatorcb_29(bind)
@src.name
end
def trans_AmethystCTranslatorcb_3(bind)
Local
end
def trans_AmethystCTranslatorcb_30(bind)
@rulename=bind[24]; Local.resetnumbering;resetlabels;@locls={}
end
def trans_AmethystCTranslatorcb_31(bind)
@src.body
end
def trans_AmethystCTranslatorcb_32(bind)
bind[25]=[bind[25]]
end
def trans_AmethystCTranslatorcb_33(bind)
h="VALUE #{@grammar}_#{bind[24]}(VALUE self #{map_index(@src.args){|i| ",VALUE a#{i}"}})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{@src.name}\",#{@grammar}_#{@src.name},#{@src.args.size});"
						h+"{VALUE vals[#{@src.args.size}]; VALUE bind=rb_ary_new2(#{@locls.size}); #{map_index(@src.args){|i| bset(@src.args[i],"a#{i}")+";"}} int x;VALUE arg0,arg1,arg2,arg3;VALUE it;
\n#{bind[26]}\nreturn it;\nfail: return failobj; }" 
end
def trans_AmethystCTranslatorcb_34(bind)
CAct
end
def trans_AmethystCTranslatorcb_35(bind)
_append(bind[29],bind[30])
end
def trans_AmethystCTranslatorcb_36(bind)
"it=#{bind[31]};"
end
def trans_AmethystCTranslatorcb_37(bind)
Grammar
end
def trans_AmethystCTranslatorcb_38(bind)
@grammar=@src.name;@parent=@src.parent
end
def trans_AmethystCTranslatorcb_39(bind)
@lambdas=[]
end
def trans_AmethystCTranslatorcb_4(bind)
"it=#{bget(@src)};" 
end
def trans_AmethystCTranslatorcb_40(bind)
@defs=[]
end
def trans_AmethystCTranslatorcb_41(bind)
@defmethods=[]
end
def trans_AmethystCTranslatorcb_42(bind)
@faillabel="fail"
end
def trans_AmethystCTranslatorcb_43(bind)
@callbacks={}
end
def trans_AmethystCTranslatorcb_44(bind)
mktable(@src.rules)
end
def trans_AmethystCTranslatorcb_45(bind)
@header=[]
end
def trans_AmethystCTranslatorcb_46(bind)
@src.rules
end
def trans_AmethystCTranslatorcb_47(bind)
bind[33]=[bind[33]]
end
def trans_AmethystCTranslatorcb_48(bind)
_append(bind[35],bind[36])
end
def trans_AmethystCTranslatorcb_49(bind)
"VALUE cls_#{@src.name};\n" 
end
def trans_AmethystCTranslatorcb_5(bind)
Or
end
def trans_AmethystCTranslatorcb_50(bind)
bind[17]<<@header.sort*"\n"+"\n"
							bind[17]<<bind[16].sort*"\n"
							bind[17]<<@lambdas*"\n"
        		  init="\n cls_#{@src.name}=rb_define_class(\"#{@src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@defmethods.sort*"\n" }
"
							[bind[17],init,bind[38]] 
end
def trans_AmethystCTranslatorcb_51(bind)
Act
end
def trans_AmethystCTranslatorcb_52(bind)
_append(bind[41],bind[42])
end
def trans_AmethystCTranslatorcb_53(bind)
addcallback(@src.pred ? ["(",bind[43],") || FAIL"] : bind[43])
end
def trans_AmethystCTranslatorcb_54(bind)
"it=CALL(#{bind[44]},1,bind); #{@src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def trans_AmethystCTranslatorcb_55(bind)
Apply
end
def trans_AmethystCTranslatorcb_56(bind)
bind[47]=[bind[47]]
end
def trans_AmethystCTranslatorcb_57(bind)
rule=@ruletable[@rulename];  failwrap(map_index(rule.args){|i|"vals[#{i}]=#{bget(rule.args[i])};"}*""+ "it=rb_call_super(#{rule.args.size},vals);")
end
def trans_AmethystCTranslatorcb_58(bind)
Apply
end
def trans_AmethystCTranslatorcb_59(bind)
bind[51]+=1
end
def trans_AmethystCTranslatorcb_6(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_60(bind)
"#{bind[53]} arg#{bind[51]-1}=it;"
end
def trans_AmethystCTranslatorcb_61(bind)
_append(bind[52],bind[54])
end
def trans_AmethystCTranslatorcb_62(bind)
" #{bind[55]} it=#{callrule(bind[24],bind[51])};"
end
def trans_AmethystCTranslatorcb_63(bind)
"#{bind[56]} FAILTEST(#{@faillabel});" 
end
def trans_AmethystCTranslatorcb_64(bind)
Bind
end
def trans_AmethystCTranslatorcb_65(bind)
@src.expr
end
def trans_AmethystCTranslatorcb_66(bind)
bind[60]=[bind[60]]
end
def trans_AmethystCTranslatorcb_67(bind)
"#{bind[61]}\n #{bset(@src.name,"it")}; " 
end
def trans_AmethystCTranslatorcb_68(bind)
Result
end
def trans_AmethystCTranslatorcb_69(bind)
@src.args
end
def trans_AmethystCTranslatorcb_7(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_70(bind)
bind[64]=[bind[64]]
end
def trans_AmethystCTranslatorcb_71(bind)
bind[17]="#{@src.name}.create(#{bind[65]} {#{@src.vars.map{|l| ":#{l[0]}=>#{rbbget(l)}" }.sort*","} })"
					bind[44]=addcallback(bind[17])
					"it=CALL(#{bind[44]},1,bind);"
				
end
def trans_AmethystCTranslatorcb_72(bind)
Pass
end
def trans_AmethystCTranslatorcb_73(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_74(bind)
@faillabel=bind[11] 
end
def trans_AmethystCTranslatorcb_75(bind)
@src.to
end
def trans_AmethystCTranslatorcb_76(bind)
bind[72]=[bind[72]]
end
def trans_AmethystCTranslatorcb_77(bind)
@faillabel=bind[12]; bind[13] 
end
def trans_AmethystCTranslatorcb_78(bind)
"int #{bind[7]}=ame_getpos(self); int #{bind[69]}=ame_getlen(self); VALUE #{bind[70]}=ame_getsrc(self); int #{bind[6]}=0;
ame_setsrc(self,#{bget(@src.var)}); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern(\"size\"),0)));
 #{bind[73]}
	goto #{bind[71]};
	#{bind[68]}: #{bind[6]}=1;
	#{bind[71]}: ame_setsrc(self,#{bind[70]}); ame_setpos(self,#{bind[7]}); ame_setlen(self,#{bind[69]});
	if(#{bind[6]}) goto #{@faillabel};
" 
end
def trans_AmethystCTranslatorcb_79(bind)
Seq
end
def trans_AmethystCTranslatorcb_8(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_80(bind)
_append(bind[77],bind[78])
end
def trans_AmethystCTranslatorcb_81(bind)
bind[16]*""
end
def trans_AmethystCTranslatorcb_82(bind)
Many
end
def trans_AmethystCTranslatorcb_83(bind)
label("break")
end
def trans_AmethystCTranslatorcb_84(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_85(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_86(bind)
@faillabel=bind[11] 
end
def trans_AmethystCTranslatorcb_87(bind)
@faillabel=bind[12]; bind[13] 
end
def trans_AmethystCTranslatorcb_88(bind)
"int #{bind[7]}; while(1){#{bind[7]}=ame_getpos(self); #{bind[16]} if (#{iget("stop")}!=Qnil){{#{bind[7]}=ame_getpos(self);goto #{bind[81]};} } } #{bind[81]}: #{iset("stop","Qnil")};  ame_setpos(self,#{bind[7]}); "
end
def trans_AmethystCTranslatorcb_89(bind)
Switch
end
def trans_AmethystCTranslatorcb_9(bind)
bind[9]+=1
end
def trans_AmethystCTranslatorcb_90(bind)
@defs<<@src.defs if @src.defs
end
def trans_AmethystCTranslatorcb_91(bind)
"char #{bind[84]}=#{@src.act};  switch(#{bind[84]}){"
end
def trans_AmethystCTranslatorcb_92(bind)
bind[17]+="case #{bind[31]}:; #{bind[16]} break;"
end
def trans_AmethystCTranslatorcb_93(bind)
bind[17]+"default: goto #{@faillabel};}"
end
def transfn_AmethystCTranslatorcb_1(bind)
"proc{#{bind[0]}}"
end

end


def testversion(r)
 raise "invalid version" if r!='a95d1b9fb634bd762193e8ed02e28ec4'
end
  require 'compiled/ctranslator2_c'
