
class AmethystCTranslator < Amethyst 
	def addcallback2(cb)
		@cbno||=0
		@cbno+=1
		n=Local["#{@rulename}_#{@grammar}cb",@cbno].desc
		@callbacks[n]=cb
		n
	end
	def bget(s)
		"rb_hash_aref(bind,ID2SYM(rb_intern(\"#{s}\")))"
		"BGET(#{s})"
	end
	def bset(s,e)
		"rb_hash_aset(bind,ID2SYM(rb_intern(\"#{s}\")),#{e})"
		"BSET(#{s},#{e})"
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
def addcallback_AmethystCTranslatorcb_1(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def addcallback_AmethystCTranslatorcb_2(bind)
addcallback2(bind[:s_1])
end
def addlambda_AmethystCTranslatorcb_1(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def addlambda_AmethystCTranslatorcb_2(bind)
'fail'
end
def addlambda_AmethystCTranslatorcb_3(bind)
AmethystLambda.new(:AmethystCTranslator_addlambda_lambda1,self,bind)
end
def addlambda_AmethystCTranslatorcb_4(bind)
h="VALUE #{bind[:lambd_1]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[:lambd_1]}\",#{bind[:lambd_1]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[:body_1]}\nreturn it;\nfail: return failobj; }" 
end
def addlambda_AmethystCTranslatorcb_5(bind)
"AmethystLambda.new(:#{bind[:lambd_1]},self,bind)" 
end
def failwrap_AmethystCTranslatorcb_1(bind)
"#{bind[:s_1]} FAILTEST(#{@faillabel});" 
end
def itrans_AmethystCTranslatorcb_1(bind)
[]
end
def itrans_AmethystCTranslatorcb_10(bind)
[bind[:c_1],bind[:init_1],bind[:ruby_1]]
end
def itrans_AmethystCTranslatorcb_2(bind)
[]
end
def itrans_AmethystCTranslatorcb_3(bind)
[]
end
def itrans_AmethystCTranslatorcb_4(bind)
[]
end
def itrans_AmethystCTranslatorcb_5(bind)
[]
end
def itrans_AmethystCTranslatorcb_6(bind)
[]
end
def itrans_AmethystCTranslatorcb_7(bind)
_append(bind[:ruby_1],bind[:autovar_2])
end
def itrans_AmethystCTranslatorcb_8(bind)
bind[:c_1]<<bind[:it_1][0];bind[:init_1]<<bind[:it_1][1];bind[:ruby_1]<<bind[:it_1][2]
end
def itrans_AmethystCTranslatorcb_9(bind)
_append(bind[:autovar_1],bind[:autovar_3])
end
def rbcode_AmethystCTranslatorcb_1(bind)
[]
end
def rbcode_AmethystCTranslatorcb_10(bind)
bind[:s_1]+=bind[:x_1]*""
end
def rbcode_AmethystCTranslatorcb_11(bind)
bind[:s_1]+="\nend"; bind[:s_1]
end
def rbcode_AmethystCTranslatorcb_2(bind)
"class #{@grammar} < #{@parent}\n"
end
def rbcode_AmethystCTranslatorcb_3(bind)
@callbacks.to_a.sort
end
def rbcode_AmethystCTranslatorcb_4(bind)
bind[:autovar_2]=[bind[:autovar_2]]
end
def rbcode_AmethystCTranslatorcb_5(bind)

end
def rbcode_AmethystCTranslatorcb_6(bind)
[]
end
def rbcode_AmethystCTranslatorcb_7(bind)

end
def rbcode_AmethystCTranslatorcb_8(bind)
"def #{bind[:k_1]}(bind)\n#{bind[:v_1]}\nend\n"
end
def rbcode_AmethystCTranslatorcb_9(bind)
_append(bind[:autovar_1],bind[:autovar_5])
end
def rbtrans_AmethystCTranslatorcb_1(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_10(bind)
Args
end
def rbtrans_AmethystCTranslatorcb_11(bind)

end
def rbtrans_AmethystCTranslatorcb_12(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_13(bind)
_append(bind[:autovar_2],bind[:autovar_8])
end
def rbtrans_AmethystCTranslatorcb_14(bind)
bind[:a_1]*""
end
def rbtrans_AmethystCTranslatorcb_15(bind)
Array
end
def rbtrans_AmethystCTranslatorcb_16(bind)

end
def rbtrans_AmethystCTranslatorcb_17(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_18(bind)
_append(bind[:autovar_3],bind[:autovar_10])
end
def rbtrans_AmethystCTranslatorcb_19(bind)
bind[:a_1]*""
end
def rbtrans_AmethystCTranslatorcb_2(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_20(bind)
Strin
end
def rbtrans_AmethystCTranslatorcb_21(bind)

end
def rbtrans_AmethystCTranslatorcb_22(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_23(bind)
_append(bind[:autovar_4],bind[:autovar_12])
end
def rbtrans_AmethystCTranslatorcb_24(bind)
bind[:a_1]*""
end
def rbtrans_AmethystCTranslatorcb_25(bind)
Key
end
def rbtrans_AmethystCTranslatorcb_26(bind)

end
def rbtrans_AmethystCTranslatorcb_27(bind)
@src.name
end
def rbtrans_AmethystCTranslatorcb_28(bind)
"@src.#{bind[:name_1]}"
end
def rbtrans_AmethystCTranslatorcb_29(bind)
Global
end
def rbtrans_AmethystCTranslatorcb_3(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_30(bind)

end
def rbtrans_AmethystCTranslatorcb_31(bind)
"@#{bind[:name_1]}"
end
def rbtrans_AmethystCTranslatorcb_32(bind)
Exp
end
def rbtrans_AmethystCTranslatorcb_33(bind)

end
def rbtrans_AmethystCTranslatorcb_4(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_5(bind)
Local
end
def rbtrans_AmethystCTranslatorcb_6(bind)

end
def rbtrans_AmethystCTranslatorcb_7(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_8(bind)
_append(bind[:autovar_1],bind[:autovar_6])
end
def rbtrans_AmethystCTranslatorcb_9(bind)
"bind[:#{@src.desc}]"
end
def rw_AmethystCTranslatorcb_1(bind)
@faillabel
end
def rw_AmethystCTranslatorcb_2(bind)
@faillabel=bind[:word_1] 
end
def rw_AmethystCTranslatorcb_3(bind)
bind[:prc_1]
end
def rw_AmethystCTranslatorcb_4(bind)
@faillabel=bind[:rwo_1]; bind[:x_1] 
end
def trans_AmethystCTranslatorcb_1(bind)
[]
end
def trans_AmethystCTranslatorcb_10(bind)
@lambdas=[]
end
def trans_AmethystCTranslatorcb_100(bind)

end
def trans_AmethystCTranslatorcb_101(bind)
@src.args
end
def trans_AmethystCTranslatorcb_102(bind)
bind[:autovar_33]=[bind[:autovar_33]]
end
def trans_AmethystCTranslatorcb_103(bind)
bind[:s_1]="#{@src.name}.create(#{bind[:argss_1]} {#{@src.vars.map{|l| ":#{l[0]}=>bind[:#{l.desc}]" }.sort*","} })"
					bind[:cbno_1]=addcallback(bind[:s_1])
					"it=CALL(#{bind[:cbno_1]},1,bind);"
				
end
def trans_AmethystCTranslatorcb_104(bind)
Pass
end
def trans_AmethystCTranslatorcb_105(bind)

end
def trans_AmethystCTranslatorcb_106(bind)
"pass"
end
def trans_AmethystCTranslatorcb_107(bind)
"oldpos"
end
def trans_AmethystCTranslatorcb_108(bind)
"oldlen"
end
def trans_AmethystCTranslatorcb_109(bind)
"oldsrc"
end
def trans_AmethystCTranslatorcb_11(bind)
@defmethods=[]
end
def trans_AmethystCTranslatorcb_110(bind)
"success"
end
def trans_AmethystCTranslatorcb_111(bind)
"fail"
end
def trans_AmethystCTranslatorcb_112(bind)
bind[:pass_1]
end
def trans_AmethystCTranslatorcb_113(bind)
@src.to
end
def trans_AmethystCTranslatorcb_114(bind)
bind[:autovar_35]=[bind[:autovar_35]]
end
def trans_AmethystCTranslatorcb_115(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda4,self,bind)
end
def trans_AmethystCTranslatorcb_116(bind)
"int #{bind[:oldpos_1]}=ame_getpos(self); int #{bind[:oldlen_1]}=ame_getlen(self); VALUE #{bind[:oldsrc_1]}=ame_getsrc(self); int #{bind[:fail_1]}=0;
ame_setsrc(self,#{bget(@src.var.desc)}); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern(\"size\"),0)));
 #{bind[:to_1]}
	if (CALL(eof,0)==failobj) goto #{bind[:pass_1]};
	goto #{bind[:success_1]};
	#{bind[:pass_1]}: #{bind[:fail_1]}=1;
	#{bind[:success_1]}: ame_setsrc(self,#{bind[:oldsrc_1]}); ame_setpos(self,#{bind[:oldpos_1]}); ame_setlen(self,#{bind[:oldlen_1]});
	if(#{bind[:fail_1]}) goto #{@faillabel};
" 
end
def trans_AmethystCTranslatorcb_12(bind)
@faillabel="fail"
end
def trans_AmethystCTranslatorcb_13(bind)
@callbacks={}
end
def trans_AmethystCTranslatorcb_14(bind)
mktable(@src.rules)
end
def trans_AmethystCTranslatorcb_15(bind)
@header=[]
end
def trans_AmethystCTranslatorcb_16(bind)
@src.rules
end
def trans_AmethystCTranslatorcb_17(bind)
bind[:autovar_8]=[bind[:autovar_8]]
end
def trans_AmethystCTranslatorcb_18(bind)

end
def trans_AmethystCTranslatorcb_19(bind)
[]
end
def trans_AmethystCTranslatorcb_2(bind)
[]
end
def trans_AmethystCTranslatorcb_20(bind)
_append(bind[:autovar_1],bind[:autovar_10])
end
def trans_AmethystCTranslatorcb_21(bind)
"VALUE cls_#{@src.name};\n" 
end
def trans_AmethystCTranslatorcb_22(bind)
bind[:s_1]<<@header.sort*"\n"+"\n"
							bind[:s_1]<<bind[:t_1].sort*"\n"
							bind[:s_1]<<@lambdas*"\n"
        		  init="\n cls_#{@src.name}=rb_define_class(\"#{@src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@defmethods.sort*"\n" }
"
							[bind[:s_1],init,bind[:rbcode_1]] 
end
def trans_AmethystCTranslatorcb_23(bind)
Rule
end
def trans_AmethystCTranslatorcb_24(bind)

end
def trans_AmethystCTranslatorcb_25(bind)
@src.name
end
def trans_AmethystCTranslatorcb_26(bind)
@rulename=bind[:name_1]; Local.resetnumbering;resetlabels
end
def trans_AmethystCTranslatorcb_27(bind)
@src.body
end
def trans_AmethystCTranslatorcb_28(bind)
bind[:autovar_12]=[bind[:autovar_12]]
end
def trans_AmethystCTranslatorcb_29(bind)
h="VALUE #{@grammar}_#{bind[:name_1]}(VALUE self #{map_index(@src.args){|i| ",VALUE a#{i}"}})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{@src.name}\",#{@grammar}_#{@src.name},#{@src.args.size});"
						h+"{VALUE vals[#{@src.args.size}]; VALUE bind=rb_hash_new(); #{map_index(@src.args){|i| bset(@src.args[i].desc,"a#{i}")+";"}} int x;VALUE arg0,arg1,arg2,arg3;VALUE it;
\n#{bind[:body_1]}\nreturn it;\nfail: return failobj; }" 
end
def trans_AmethystCTranslatorcb_3(bind)
[]
end
def trans_AmethystCTranslatorcb_30(bind)
Act
end
def trans_AmethystCTranslatorcb_31(bind)

end
def trans_AmethystCTranslatorcb_32(bind)
[]
end
def trans_AmethystCTranslatorcb_33(bind)
_append(bind[:autovar_2],bind[:autovar_14])
end
def trans_AmethystCTranslatorcb_34(bind)
addcallback(@src.pred ? ["(",bind[:it_1],") || FAIL"] : bind[:it_1])
end
def trans_AmethystCTranslatorcb_35(bind)
"it=CALL(#{bind[:cbno_1]},1,bind); #{@src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def trans_AmethystCTranslatorcb_36(bind)
Apply
end
def trans_AmethystCTranslatorcb_37(bind)

end
def trans_AmethystCTranslatorcb_38(bind)
bind[:autovar_16]=[bind[:autovar_16]]
end
def trans_AmethystCTranslatorcb_39(bind)

end
def trans_AmethystCTranslatorcb_4(bind)
[]
end
def trans_AmethystCTranslatorcb_40(bind)
"super"
end
def trans_AmethystCTranslatorcb_41(bind)
rule=@ruletable[@rulename];  failwrap(map_index(rule.args){|i|"vals[#{i}]=#{bget(rule.args[i].desc)};"}*""+ "it=rb_call_super(#{rule.args.size},vals);")
end
def trans_AmethystCTranslatorcb_42(bind)
Apply
end
def trans_AmethystCTranslatorcb_43(bind)

end
def trans_AmethystCTranslatorcb_44(bind)
[]
end
def trans_AmethystCTranslatorcb_45(bind)
addcallback(bind[:it_1])
end
def trans_AmethystCTranslatorcb_46(bind)
_append(bind[:autovar_3],bind[:autovar_19])
end
def trans_AmethystCTranslatorcb_47(bind)
" #{map_index(bind[:args_1]){|a|"arg#{a}=CALL(#{bind[:args_1][a]},1,bind);"}} it=#{callrule(bind[:name_1],bind[:args_1].size)};"
end
def trans_AmethystCTranslatorcb_48(bind)
Seq
end
def trans_AmethystCTranslatorcb_49(bind)

end
def trans_AmethystCTranslatorcb_5(bind)
[]
end
def trans_AmethystCTranslatorcb_50(bind)
[]
end
def trans_AmethystCTranslatorcb_51(bind)
_append(bind[:autovar_4],bind[:autovar_21])
end
def trans_AmethystCTranslatorcb_52(bind)
bind[:t_1]*""
end
def trans_AmethystCTranslatorcb_53(bind)
Bind
end
def trans_AmethystCTranslatorcb_54(bind)

end
def trans_AmethystCTranslatorcb_55(bind)
@src.expr
end
def trans_AmethystCTranslatorcb_56(bind)
bind[:autovar_23]=[bind[:autovar_23]]
end
def trans_AmethystCTranslatorcb_57(bind)
"#{bind[:e_1]}\n #{bset(@src.name.desc,"it")}; " 
end
def trans_AmethystCTranslatorcb_58(bind)
Or
end
def trans_AmethystCTranslatorcb_59(bind)

end
def trans_AmethystCTranslatorcb_6(bind)
[]
end
def trans_AmethystCTranslatorcb_60(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_61(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_62(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_63(bind)
"alt"
end
def trans_AmethystCTranslatorcb_64(bind)
0
end
def trans_AmethystCTranslatorcb_65(bind)
[]
end
def trans_AmethystCTranslatorcb_66(bind)
bind[:altno_1]+=1
end
def trans_AmethystCTranslatorcb_67(bind)
"#{bind[:alt_1]}_#{bind[:altno_1]+1}"
end
def trans_AmethystCTranslatorcb_68(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda1,self,bind)
end
def trans_AmethystCTranslatorcb_69(bind)
_append(bind[:autovar_5],bind[:autovar_25])
end
def trans_AmethystCTranslatorcb_7(bind)
Grammar
end
def trans_AmethystCTranslatorcb_70(bind)
bind[:s_1]="int #{bind[:oldpos_1]}=ame_getpos(self);\n"
end
def trans_AmethystCTranslatorcb_71(bind)
bind[:s_1]+=map_index(bind[:t_1]){|i| "#{bind[:alt_1]}_#{i+1}: ame_setpos(self,#{bind[:oldpos_1]});if (#{iget("cut")}!=Qnil) {#{iset("cut","Qnil")}; goto #{bind[:fail_1]};}\n #{bind[:t_1][i]} \n#{iset("cut","Qnil")};goto #{bind[:accept_1]};\n"}*""
end
def trans_AmethystCTranslatorcb_72(bind)
"#{bind[:s_1]}  #{bind[:alt_1]}_#{bind[:altno_1]+1}:  ame_setpos(self,#{bind[:oldpos_1]}); goto #{bind[:fail_1]};\n #{bind[:accept_1]}:;\n"
end
def trans_AmethystCTranslatorcb_73(bind)
Cut
end
def trans_AmethystCTranslatorcb_74(bind)

end
def trans_AmethystCTranslatorcb_75(bind)
"#{iset("cut","Qtrue")};"
end
def trans_AmethystCTranslatorcb_76(bind)
Stop
end
def trans_AmethystCTranslatorcb_77(bind)

end
def trans_AmethystCTranslatorcb_78(bind)
"#{iset("stop","Qtrue")};"
end
def trans_AmethystCTranslatorcb_79(bind)
Many
end
def trans_AmethystCTranslatorcb_8(bind)

end
def trans_AmethystCTranslatorcb_80(bind)

end
def trans_AmethystCTranslatorcb_81(bind)
label("break")
end
def trans_AmethystCTranslatorcb_82(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_83(bind)
bind[:brk_1]
end
def trans_AmethystCTranslatorcb_84(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda2,self,bind)
end
def trans_AmethystCTranslatorcb_85(bind)
"int #{bind[:oldpos_1]}; while(1){#{bind[:oldpos_1]}=ame_getpos(self); #{bind[:t_1]} if (#{iget("stop")}!=Qnil){{#{bind[:oldpos_1]}=ame_getpos(self);goto #{bind[:brk_1]};} } } #{bind[:brk_1]}: #{iset("stop","Qnil")};  ame_setpos(self,#{bind[:oldpos_1]}); "
end
def trans_AmethystCTranslatorcb_86(bind)
Lookahead
end
def trans_AmethystCTranslatorcb_87(bind)

end
def trans_AmethystCTranslatorcb_88(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_89(bind)
label("reject")
end
def trans_AmethystCTranslatorcb_9(bind)
@grammar=@src.name;@parent=@src.parent
end
def trans_AmethystCTranslatorcb_90(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_91(bind)
bind[:reject_1]
end
def trans_AmethystCTranslatorcb_92(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda3,self,bind)
end
def trans_AmethystCTranslatorcb_93(bind)
"int #{bind[:oldpos_1]}=ame_getpos(self);\n #{bind[:t_1]} x=1; goto #{bind[:accept_1]};  #{bind[:reject_1]}: x=0; #{bind[:accept_1]}: it=Qnil; ame_setpos(self,#{bind[:oldpos_1]}); if (x==#{@src.neg ? 1 : 0}) goto #{@faillabel};"
end
def trans_AmethystCTranslatorcb_94(bind)
Local
end
def trans_AmethystCTranslatorcb_95(bind)

end
def trans_AmethystCTranslatorcb_96(bind)
[]
end
def trans_AmethystCTranslatorcb_97(bind)
_append(bind[:autovar_6],bind[:autovar_31])
end
def trans_AmethystCTranslatorcb_98(bind)
"it=#{bget(@src.desc)};" 
end
def trans_AmethystCTranslatorcb_99(bind)
Result
end
def transfn_AmethystCTranslatorcb_1(bind)
"proc{#{bind[:t_1]}}"
end

end


 require 'c/ctranslator2_c'
