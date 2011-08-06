
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
end

class AmethystCTranslator < Amethyst
def addcallback_AmethystCTranslatorcb_1(bind)
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
            @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE arg0,arg1,arg2,arg3;\n#{bind[:body_1]}\nreturn #{bget("it")};\nfail: return failobj; }" 
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
bind[:ruby_1]||=[];_append(bind[:ruby_1],bind[:autovar_2])
end
def itrans_AmethystCTranslatorcb_6(bind)
bind[:c_1]<<bind[:it_1][0];bind[:init_1]<<bind[:it_1][1];bind[:ruby_1]<<bind[:it_1][2]
end
def itrans_AmethystCTranslatorcb_7(bind)
bind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_3])
end
def itrans_AmethystCTranslatorcb_8(bind)
[bind[:c_1],bind[:init_1],bind[:ruby_1]]
end
def rbcode_AmethystCTranslatorcb_1(bind)
"class #{@grammar} < #{@parent}\n"
end
def rbcode_AmethystCTranslatorcb_2(bind)
@callbacks.to_a.sort
end
def rbcode_AmethystCTranslatorcb_3(bind)
[]
end
def rbcode_AmethystCTranslatorcb_4(bind)
"def #{bind[:k_1]}(bind)\n#{bind[:v_1]}\nend\n"
end
def rbcode_AmethystCTranslatorcb_5(bind)
bind[:autovar_3]||=[];_append(bind[:autovar_3],bind[:autovar_5])
end
def rbcode_AmethystCTranslatorcb_6(bind)
bind[:s_1]+=bind[:x_1]*""
end
def rbcode_AmethystCTranslatorcb_7(bind)
bind[:s_1]+="\nend"; bind[:s_1]
end
def rbtrans_AmethystCTranslatorcb_1(bind)
Local
end
def rbtrans_AmethystCTranslatorcb_10(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_11(bind)
bind[:autovar_8]||=[];_append(bind[:autovar_8],bind[:autovar_9])
end
def rbtrans_AmethystCTranslatorcb_12(bind)
bind[:a_1]*""
end
def rbtrans_AmethystCTranslatorcb_13(bind)
Strin
end
def rbtrans_AmethystCTranslatorcb_14(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_15(bind)
bind[:autovar_11]||=[];_append(bind[:autovar_11],bind[:autovar_12])
end
def rbtrans_AmethystCTranslatorcb_16(bind)
bind[:a_1]*""
end
def rbtrans_AmethystCTranslatorcb_17(bind)
Key
end
def rbtrans_AmethystCTranslatorcb_18(bind)
@src.name
end
def rbtrans_AmethystCTranslatorcb_19(bind)
"@src.#{bind[:name_1]}"
end
def rbtrans_AmethystCTranslatorcb_2(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_20(bind)
Global
end
def rbtrans_AmethystCTranslatorcb_21(bind)
"@#{bind[:name_1]}"
end
def rbtrans_AmethystCTranslatorcb_22(bind)
Exp
end
def rbtrans_AmethystCTranslatorcb_3(bind)
bind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])
end
def rbtrans_AmethystCTranslatorcb_4(bind)
"bind[:#{@src.desc}]"
end
def rbtrans_AmethystCTranslatorcb_5(bind)
Args
end
def rbtrans_AmethystCTranslatorcb_6(bind)
[]
end
def rbtrans_AmethystCTranslatorcb_7(bind)
bind[:autovar_5]||=[];_append(bind[:autovar_5],bind[:autovar_6])
end
def rbtrans_AmethystCTranslatorcb_8(bind)
bind[:a_1]*""
end
def rbtrans_AmethystCTranslatorcb_9(bind)
Array
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
Grammar
end
def trans_AmethystCTranslatorcb_10(bind)
[]
end
def trans_AmethystCTranslatorcb_11(bind)
bind[:autovar_4]||=[];_append(bind[:autovar_4],bind[:autovar_5])
end
def trans_AmethystCTranslatorcb_12(bind)
"VALUE cls_#{@src.name};\n" 
end
def trans_AmethystCTranslatorcb_13(bind)
bind[:s_1]<<@header.sort*"\n"+"\n"
							bind[:s_1]<<bind[:t_1].sort*"\n"
							bind[:s_1]<<@lambdas*"\n"
        		  init="\n cls_#{@src.name}=rb_define_class(\"#{@src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@defmethods.sort*"\n" }
"
							[bind[:s_1],init,bind[:rbcode_1]] 
end
def trans_AmethystCTranslatorcb_14(bind)
Rule
end
def trans_AmethystCTranslatorcb_15(bind)
@src.name
end
def trans_AmethystCTranslatorcb_16(bind)
@rulename=bind[:name_1]; Local.resetnumbering;resetlabels
end
def trans_AmethystCTranslatorcb_17(bind)
@src.body
end
def trans_AmethystCTranslatorcb_18(bind)
h="VALUE #{@grammar}_#{bind[:name_1]}(VALUE self #{@src.args.size.times.map{|i| ",VALUE a#{i}"}})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{@src.name}\",#{@grammar}_#{@src.name},#{@src.args.size});"
						h+"{VALUE vals[#{@src.args.size}]; VALUE bind=rb_hash_new(); #{@src.args.size.times.map{|i| bset(@src.args[i].desc,"a#{i}")+";"}} int x;VALUE arg0,arg1,arg2,arg3;\n#{bind[:body_1]}\nreturn #{bget(Local["_result",@src.bnding].desc)};\nfail: return failobj; }" 
end
def trans_AmethystCTranslatorcb_19(bind)
Act
end
def trans_AmethystCTranslatorcb_2(bind)
@grammar=@src.name;@parent=@src.parent
end
def trans_AmethystCTranslatorcb_20(bind)
[]
end
def trans_AmethystCTranslatorcb_21(bind)
bind[:autovar_9]||=[];_append(bind[:autovar_9],bind[:autovar_10])
end
def trans_AmethystCTranslatorcb_22(bind)
addcallback(@src.pred ? ["(",bind[:it_1],") || FAIL"] : bind[:it_1])
end
def trans_AmethystCTranslatorcb_23(bind)
"#{bset("it","CALL(#{bind[:cbno_1]},1,bind)")}; #{@src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def trans_AmethystCTranslatorcb_24(bind)
Apply
end
def trans_AmethystCTranslatorcb_25(bind)
"super"
end
def trans_AmethystCTranslatorcb_26(bind)
rule=@ruletable[@rulename];  failwrap(rule.args.size.times.map{|i|"vals[#{i}]=#{bget(rule.args[i].desc)};"}*""+ bset("it","rb_call_super(#{rule.args.size},vals)")+";")
end
def trans_AmethystCTranslatorcb_27(bind)
Apply
end
def trans_AmethystCTranslatorcb_28(bind)
[]
end
def trans_AmethystCTranslatorcb_29(bind)
addcallback(bind[:it_1])
end
def trans_AmethystCTranslatorcb_3(bind)
@lambdas=[]
end
def trans_AmethystCTranslatorcb_30(bind)
bind[:autovar_15]||=[];_append(bind[:autovar_15],bind[:autovar_16])
end
def trans_AmethystCTranslatorcb_31(bind)
" #{bind[:args_1].size.times.map{|a|"arg#{a}=CALL(#{bind[:args_1][a]},1,bind);"}} #{bset("it","CALL(#{bind[:name_1]},#{bind[:args_1].size} #{bind[:args_1].size.times.map{|a|",arg#{a}"}})")};"
end
def trans_AmethystCTranslatorcb_32(bind)
Seq
end
def trans_AmethystCTranslatorcb_33(bind)
[]
end
def trans_AmethystCTranslatorcb_34(bind)
bind[:autovar_18]||=[];_append(bind[:autovar_18],bind[:autovar_19])
end
def trans_AmethystCTranslatorcb_35(bind)
bind[:t_1]*""
end
def trans_AmethystCTranslatorcb_36(bind)
Set
end
def trans_AmethystCTranslatorcb_37(bind)
@src.expr
end
def trans_AmethystCTranslatorcb_38(bind)
"#{bind[:e_1]}\n #{bset(@src.name.desc,bget("it"))}; " 
end
def trans_AmethystCTranslatorcb_39(bind)
Or
end
def trans_AmethystCTranslatorcb_4(bind)
@defmethods=[]
end
def trans_AmethystCTranslatorcb_40(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_41(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_42(bind)
label("oldinput")
end
def trans_AmethystCTranslatorcb_43(bind)
"alt"
end
def trans_AmethystCTranslatorcb_44(bind)
0
end
def trans_AmethystCTranslatorcb_45(bind)
[]
end
def trans_AmethystCTranslatorcb_46(bind)
bind[:altno_1]+=1
end
def trans_AmethystCTranslatorcb_47(bind)
"#{bind[:alt_1]}_#{bind[:altno_1]+1}"
end
def trans_AmethystCTranslatorcb_48(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda1,self,bind)
end
def trans_AmethystCTranslatorcb_49(bind)
bind[:autovar_23]||=[];_append(bind[:autovar_23],bind[:autovar_24])
end
def trans_AmethystCTranslatorcb_5(bind)
@faillabel="fail"
end
def trans_AmethystCTranslatorcb_50(bind)
bind[:s_1]="VALUE #{bind[:oldinput_1]}=#{iget("input")};\n"
end
def trans_AmethystCTranslatorcb_51(bind)
bind[:t_1].size.times{|i| bind[:s_1]<<"#{bind[:alt_1]}_#{i+1}: #{iset("input",bind[:oldinput_1])};if (#{iget("cut")}!=Qnil) goto #{bind[:fail_1]};\n #{bind[:t_1][i]} \n#{iset("cut","Qnil")};goto #{bind[:accept_1]};\n"}
end
def trans_AmethystCTranslatorcb_52(bind)
"#{bind[:s_1]}  #{bind[:alt_1]}_#{bind[:altno_1]+1}:  #{iset("input",bind[:oldinput_1])}; goto #{bind[:fail_1]};\n #{bind[:accept_1]}:;\n"
end
def trans_AmethystCTranslatorcb_53(bind)
Cut
end
def trans_AmethystCTranslatorcb_54(bind)
"#{iset("cut","Qtrue")};"
end
def trans_AmethystCTranslatorcb_55(bind)
Stop
end
def trans_AmethystCTranslatorcb_56(bind)
"#{iset("stop","Qtrue")};"
end
def trans_AmethystCTranslatorcb_57(bind)
Many
end
def trans_AmethystCTranslatorcb_58(bind)
label("break")
end
def trans_AmethystCTranslatorcb_59(bind)
label("oldinput")
end
def trans_AmethystCTranslatorcb_6(bind)
@callbacks={}
end
def trans_AmethystCTranslatorcb_60(bind)
bind[:brk_1]
end
def trans_AmethystCTranslatorcb_61(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda2,self,bind)
end
def trans_AmethystCTranslatorcb_62(bind)
"VALUE #{bind[:oldinput_1]}; while(1){#{bind[:oldinput_1]}=#{iget("input")}; #{bind[:t_1]} if (#{iget("stop")}!=Qnil){{#{bind[:oldinput_1]}=#{iget("input")};goto #{bind[:brk_1]};} } } #{bind[:brk_1]}: #{iset("stop","Qnil")};  #{iset("input",bind[:oldinput_1])}; "
end
def trans_AmethystCTranslatorcb_63(bind)
Lookahead
end
def trans_AmethystCTranslatorcb_64(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_65(bind)
label("reject")
end
def trans_AmethystCTranslatorcb_66(bind)
label("oldinput")
end
def trans_AmethystCTranslatorcb_67(bind)
bind[:reject_1]
end
def trans_AmethystCTranslatorcb_68(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda3,self,bind)
end
def trans_AmethystCTranslatorcb_69(bind)
"VALUE #{bind[:oldinput_1]}=#{iget("input")};\n #{bind[:t_1]} x=1; goto #{bind[:accept_1]};  #{bind[:reject_1]}: x=0; #{bind[:accept_1]}: #{bset("it","Qnil")}; #{iset("input",bind[:oldinput_1])}; if (x==#{@src.neg ? 1 : 0}) goto #{@faillabel};"
end
def trans_AmethystCTranslatorcb_7(bind)
mktable(@src.rules)
end
def trans_AmethystCTranslatorcb_70(bind)
Local
end
def trans_AmethystCTranslatorcb_71(bind)
[]
end
def trans_AmethystCTranslatorcb_72(bind)
bind[:autovar_30]||=[];_append(bind[:autovar_30],bind[:autovar_31])
end
def trans_AmethystCTranslatorcb_73(bind)
bset("it",bget(@src.desc))+";" 
end
def trans_AmethystCTranslatorcb_74(bind)
Result
end
def trans_AmethystCTranslatorcb_75(bind)
@src.args
end
def trans_AmethystCTranslatorcb_76(bind)
bind[:s_1]="#{@src.name}.create(#{bind[:argss_1]} {#{@src.vars.map{|l| ":#{l[0]}=>bind[:#{l.desc}]" }.sort*","} })"
					bind[:cbno_1]=addcallback(bind[:s_1])
					"#{bset("it","CALL(#{bind[:cbno_1]},1,bind)")};"
				
end
def trans_AmethystCTranslatorcb_77(bind)
Pass
end
def trans_AmethystCTranslatorcb_78(bind)
"pass"
end
def trans_AmethystCTranslatorcb_79(bind)
"oldinput"
end
def trans_AmethystCTranslatorcb_8(bind)
@header=[]
end
def trans_AmethystCTranslatorcb_80(bind)
"oldsrc"
end
def trans_AmethystCTranslatorcb_81(bind)
"success"
end
def trans_AmethystCTranslatorcb_82(bind)
"fail"
end
def trans_AmethystCTranslatorcb_83(bind)
bind[:pass_1]
end
def trans_AmethystCTranslatorcb_84(bind)
@src.to
end
def trans_AmethystCTranslatorcb_85(bind)
AmethystLambda.new(:AmethystCTranslator_trans_lambda4,self,bind)
end
def trans_AmethystCTranslatorcb_86(bind)
"VALUE #{bind[:oldinput_1]}=#{iget("input")};  VALUE #{bind[:oldsrc_1]}=#{iget("src")}; int #{bind[:fail_1]}=0;
#{iset("src",@src.enter ? bget(@src.var.desc) : "rb_ary_new3(1,#{bget(@src.var.desc)})")}; #{iset("input","INT2FIX(0)")};
 #{bind[:to_1]}
	if (CALL(eof,0)==failobj) goto #{bind[:pass_1]};
	goto #{bind[:success_1]};
	#{bind[:pass_1]}: #{bind[:fail_1]}=1;
	#{bind[:success_1]}: #{iset("src",bind[:oldsrc_1])}; #{iset("input",bind[:oldinput_1])};
	if(#{bind[:fail_1]}) goto #{@faillabel};
" 
end
def trans_AmethystCTranslatorcb_9(bind)
@src.rules
end
def transfn_AmethystCTranslatorcb_1(bind)
"proc{#{bind[:t_1]}}"
end

end


 require 'c/ctranslator2_c'
