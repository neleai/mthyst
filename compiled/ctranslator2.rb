
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
bind[:autovar_1]=[bind[:autovar_1]]
end
def addcallback_AmethystCTranslatorcb_2(bind)
addcallback2(bind[:s_1])
end
def addlambda_AmethystCTranslatorcb_1(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def addlambda_AmethystCTranslatorcb_2(bind)
@faillabel
end
def addlambda_AmethystCTranslatorcb_3(bind)
@faillabel=bind[:word_1] 
end
def addlambda_AmethystCTranslatorcb_4(bind)
@faillabel=bind[:rwo_1]; bind[:x_1] 
end
def addlambda_AmethystCTranslatorcb_5(bind)
h="VALUE #{bind[:lambd_1]}(VALUE self,VALUE bind)"
            @header<<h+";"
						@defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[:lambd_1]}\",#{bind[:lambd_1]},1);"
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[:body_1]}\nreturn it;\nfail: return failobj; }" 
end
def addlambda_AmethystCTranslatorcb_6(bind)
"AmethystLambda.new(:#{bind[:lambd_1]},self,bind)" 
end
def char_AmethystCTranslatorcb_1(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def clas_AmethystCTranslatorcb_1(bind)
(bind[:i_1].is_a?(bind[:cls_1])) || FAIL
end
def failwrap_AmethystCTranslatorcb_1(bind)
"#{bind[:s_1]} FAILTEST(#{@faillabel});" 
end
def itrans_AmethystCTranslatorcb_1(bind)
(bind[:c_2].is_a? String ) || FAIL
end
def itrans_AmethystCTranslatorcb_2(bind)
_append(bind[:ruby_1],bind[:autovar_1])
end
def itrans_AmethystCTranslatorcb_3(bind)
bind[:c_1]<<bind[:it_1][0];bind[:init_1]<<bind[:it_1][1];bind[:ruby_1]<<bind[:it_1][2]
end
def itrans_AmethystCTranslatorcb_4(bind)
[bind[:c_1],bind[:init_1],bind[:ruby_1]]
end
def rbcode_AmethystCTranslatorcb_1(bind)
"class #{@grammar} < #{@parent}\n"
end
def rbcode_AmethystCTranslatorcb_2(bind)
bind[:s_1]<<@defs*"\n";bind[:s_1]<<"\n"
end
def rbcode_AmethystCTranslatorcb_3(bind)
@callbacks.to_a.sort
end
def rbcode_AmethystCTranslatorcb_4(bind)
bind[:autovar_1]=[bind[:autovar_1]]
end
def rbcode_AmethystCTranslatorcb_5(bind)
"def #{bind[:k_1]}(bind)\n#{bind[:v_1]}\nend\n"
end
def rbcode_AmethystCTranslatorcb_6(bind)
_append(bind[:autovar_3],bind[:autovar_5])
end
def rbcode_AmethystCTranslatorcb_7(bind)
bind[:s_1]+=bind[:x_1]*""
end
def rbcode_AmethystCTranslatorcb_8(bind)
bind[:s_1]+="\nend"; bind[:s_1]
end
def rbtrans_AmethystCTranslatorcb_1(bind)
Local
end
def rbtrans_AmethystCTranslatorcb_10(bind)
_append(bind[:autovar_9],bind[:autovar_10])
end
def rbtrans_AmethystCTranslatorcb_11(bind)
bind[:a_1]*""
end
def rbtrans_AmethystCTranslatorcb_12(bind)
Key
end
def rbtrans_AmethystCTranslatorcb_13(bind)
@src.name
end
def rbtrans_AmethystCTranslatorcb_14(bind)
"@src.#{bind[:name_1]}"
end
def rbtrans_AmethystCTranslatorcb_15(bind)
Global
end
def rbtrans_AmethystCTranslatorcb_16(bind)
"@#{bind[:name_1]}"
end
def rbtrans_AmethystCTranslatorcb_17(bind)
Exp
end
def rbtrans_AmethystCTranslatorcb_2(bind)
"bind[:#{@src.desc}]"
end
def rbtrans_AmethystCTranslatorcb_3(bind)
Args
end
def rbtrans_AmethystCTranslatorcb_4(bind)
_append(bind[:autovar_3],bind[:autovar_4])
end
def rbtrans_AmethystCTranslatorcb_5(bind)
bind[:a_1]*""
end
def rbtrans_AmethystCTranslatorcb_6(bind)
Array
end
def rbtrans_AmethystCTranslatorcb_7(bind)
_append(bind[:autovar_6],bind[:autovar_7])
end
def rbtrans_AmethystCTranslatorcb_8(bind)
bind[:a_1]*""
end
def rbtrans_AmethystCTranslatorcb_9(bind)
Strin
end
def rw_AmethystCTranslatorcb_1(bind)
@faillabel
end
def rw_AmethystCTranslatorcb_2(bind)
@faillabel=bind[:word_1] 
end
def rw_AmethystCTranslatorcb_3(bind)
@faillabel=bind[:rwo_1]; bind[:x_1] 
end
def spaces_AmethystCTranslatorcb_1(bind)
/[\s\t\r\n\f]/
end
def spaces_AmethystCTranslatorcb_2(bind)
(bind[:c_1].is_a? String ) || FAIL
end
def spaces_AmethystCTranslatorcb_3(bind)
(bind[:regex_1].match(bind[:c_2])) || FAIL
end
def spaces_AmethystCTranslatorcb_4(bind)
_append(bind[:autovar_1],bind[:autovar_2])
end
def trans_AmethystCTranslatorcb_1(bind)
Cut
end
def trans_AmethystCTranslatorcb_10(bind)
"#{bind[:alt_1]}_#{bind[:altno_1]+1}"
end
def trans_AmethystCTranslatorcb_11(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_12(bind)
@faillabel=bind[:word_1] 
end
def trans_AmethystCTranslatorcb_13(bind)
@faillabel=bind[:rwo_1]; bind[:x_1] 
end
def trans_AmethystCTranslatorcb_14(bind)
_append(bind[:autovar_4],bind[:autovar_5])
end
def trans_AmethystCTranslatorcb_15(bind)
bind[:s_1]="int #{bind[:oldpos_1]}=ame_getpos(self);\n"
end
def trans_AmethystCTranslatorcb_16(bind)
bind[:s_1]+=map_index(bind[:t_1]){|i| "#{bind[:alt_1]}_#{i+1}: ame_setpos(self,#{bind[:oldpos_1]});if (#{iget("cut")}!=Qnil) {#{iset("cut","Qnil")}; goto #{bind[:fail_1]};}\n #{bind[:t_1][i]} \n#{iset("cut","Qnil")};goto #{bind[:accept_1]};\n"}*""
end
def trans_AmethystCTranslatorcb_17(bind)
"#{bind[:s_1]}  #{bind[:alt_1]}_#{bind[:altno_1]+1}:  ame_setpos(self,#{bind[:oldpos_1]}); goto #{bind[:fail_1]};\n #{bind[:accept_1]}:;\n"
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
@faillabel=bind[:word_1] 
end
def trans_AmethystCTranslatorcb_26(bind)
@faillabel=bind[:rwo_1]; bind[:x_1] 
end
def trans_AmethystCTranslatorcb_27(bind)
"int #{bind[:oldpos_1]}=ame_getpos(self);\n #{bind[:t_1]} x=1; goto #{bind[:accept_1]};  #{bind[:reject_1]}: x=0; #{bind[:accept_1]}: it=Qnil; ame_setpos(self,#{bind[:oldpos_1]}); if (x==#{@src.neg ? 1 : 0}) goto #{@faillabel};"
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
@rulename=bind[:name_1]; Local.resetnumbering;resetlabels
end
def trans_AmethystCTranslatorcb_31(bind)
@src.body
end
def trans_AmethystCTranslatorcb_32(bind)
bind[:autovar_9]=[bind[:autovar_9]]
end
def trans_AmethystCTranslatorcb_33(bind)
h="VALUE #{@grammar}_#{bind[:name_1]}(VALUE self #{map_index(@src.args){|i| ",VALUE a#{i}"}})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{@src.name}\",#{@grammar}_#{@src.name},#{@src.args.size});"
						h+"{VALUE vals[#{@src.args.size}]; VALUE bind=rb_hash_new(); #{map_index(@src.args){|i| bset(@src.args[i].desc,"a#{i}")+";"}} int x;VALUE arg0,arg1,arg2,arg3;VALUE it;
\n#{bind[:body_1]}\nreturn it;\nfail: return failobj; }" 
end
def trans_AmethystCTranslatorcb_34(bind)
CAct
end
def trans_AmethystCTranslatorcb_35(bind)
_append(bind[:autovar_11],bind[:autovar_12])
end
def trans_AmethystCTranslatorcb_36(bind)
"it=#{bind[:c_1]};"
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
"it=#{bget(@src.desc)};" 
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
bind[:autovar_14]=[bind[:autovar_14]]
end
def trans_AmethystCTranslatorcb_48(bind)
_append(bind[:autovar_16],bind[:autovar_17])
end
def trans_AmethystCTranslatorcb_49(bind)
"VALUE cls_#{@src.name};\n" 
end
def trans_AmethystCTranslatorcb_5(bind)
Or
end
def trans_AmethystCTranslatorcb_50(bind)
bind[:s_1]<<@header.sort*"\n"+"\n"
							bind[:s_1]<<bind[:t_1].sort*"\n"
							bind[:s_1]<<@lambdas*"\n"
        		  init="\n cls_#{@src.name}=rb_define_class(\"#{@src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@defmethods.sort*"\n" }
"
							[bind[:s_1],init,bind[:rbcode_1]] 
end
def trans_AmethystCTranslatorcb_51(bind)
Act
end
def trans_AmethystCTranslatorcb_52(bind)
_append(bind[:autovar_19],bind[:autovar_20])
end
def trans_AmethystCTranslatorcb_53(bind)
addcallback(@src.pred ? ["(",bind[:it_1],") || FAIL"] : bind[:it_1])
end
def trans_AmethystCTranslatorcb_54(bind)
"it=CALL(#{bind[:cbno_1]},1,bind); #{@src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def trans_AmethystCTranslatorcb_55(bind)
Apply
end
def trans_AmethystCTranslatorcb_56(bind)
bind[:autovar_22]=[bind[:autovar_22]]
end
def trans_AmethystCTranslatorcb_57(bind)
rule=@ruletable[@rulename];  failwrap(map_index(rule.args){|i|"vals[#{i}]=#{bget(rule.args[i].desc)};"}*""+ "it=rb_call_super(#{rule.args.size},vals);")
end
def trans_AmethystCTranslatorcb_58(bind)
Apply
end
def trans_AmethystCTranslatorcb_59(bind)
bind[:ii_1]+=1
end
def trans_AmethystCTranslatorcb_6(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_60(bind)
"#{bind[:aa_1]} arg#{bind[:ii_1]-1}=it;"
end
def trans_AmethystCTranslatorcb_61(bind)
_append(bind[:autovar_25],bind[:autovar_26])
end
def trans_AmethystCTranslatorcb_62(bind)
" #{bind[:args_1]} it=#{callrule(bind[:name_1],bind[:ii_1])};"
end
def trans_AmethystCTranslatorcb_63(bind)
"#{bind[:s_2]} FAILTEST(#{@faillabel});" 
end
def trans_AmethystCTranslatorcb_64(bind)
Bind
end
def trans_AmethystCTranslatorcb_65(bind)
@src.expr
end
def trans_AmethystCTranslatorcb_66(bind)
bind[:autovar_28]=[bind[:autovar_28]]
end
def trans_AmethystCTranslatorcb_67(bind)
"#{bind[:e_1]}\n #{bset(@src.name.desc,"it")}; " 
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
bind[:autovar_30]=[bind[:autovar_30]]
end
def trans_AmethystCTranslatorcb_71(bind)
bind[:s_1]="#{@src.name}.create(#{bind[:argss_1]} {#{@src.vars.map{|l| ":#{l[0]}=>bind[:#{l.desc}]" }.sort*","} })"
					bind[:cbno_1]=addcallback(bind[:s_1])
					"it=CALL(#{bind[:cbno_1]},1,bind);"
				
end
def trans_AmethystCTranslatorcb_72(bind)
Pass
end
def trans_AmethystCTranslatorcb_73(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_74(bind)
@faillabel=bind[:word_1] 
end
def trans_AmethystCTranslatorcb_75(bind)
@src.to
end
def trans_AmethystCTranslatorcb_76(bind)
bind[:autovar_32]=[bind[:autovar_32]]
end
def trans_AmethystCTranslatorcb_77(bind)
@faillabel=bind[:rwo_1]; bind[:x_1] 
end
def trans_AmethystCTranslatorcb_78(bind)
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
def trans_AmethystCTranslatorcb_79(bind)
Seq
end
def trans_AmethystCTranslatorcb_8(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_80(bind)
_append(bind[:autovar_34],bind[:autovar_35])
end
def trans_AmethystCTranslatorcb_81(bind)
bind[:t_1]*""
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
@faillabel=bind[:word_1] 
end
def trans_AmethystCTranslatorcb_87(bind)
@faillabel=bind[:rwo_1]; bind[:x_1] 
end
def trans_AmethystCTranslatorcb_88(bind)
"int #{bind[:oldpos_1]}; while(1){#{bind[:oldpos_1]}=ame_getpos(self); #{bind[:t_1]} if (#{iget("stop")}!=Qnil){{#{bind[:oldpos_1]}=ame_getpos(self);goto #{bind[:brk_1]};} } } #{bind[:brk_1]}: #{iset("stop","Qnil")};  ame_setpos(self,#{bind[:oldpos_1]}); "
end
def trans_AmethystCTranslatorcb_89(bind)
Switch
end
def trans_AmethystCTranslatorcb_9(bind)
bind[:altno_1]+=1
end
def trans_AmethystCTranslatorcb_90(bind)
@defs<<@src.defs if @src.defs
end
def trans_AmethystCTranslatorcb_91(bind)
"char #{bind[:chr_1]}=#{@src.act};  switch(#{bind[:chr_1]}){"
end
def trans_AmethystCTranslatorcb_92(bind)
bind[:s_1]+="case #{bind[:c_1]}:; #{bind[:t_1]} break;"
end
def trans_AmethystCTranslatorcb_93(bind)
bind[:s_1]+"default: goto #{@faillabel};}"
end
def transfn_AmethystCTranslatorcb_1(bind)
"proc{#{bind[:t_1]}}"
end

end


def testversion(r)
 raise "invalid version" if r!='3b3e28e9e1c5fd06ce4e5481ed6d2365'
end
  require 'compiled/ctranslator2_c'
