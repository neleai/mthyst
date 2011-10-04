
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
_append(bind[1],bind[2])
end
def rbtrans_AmethystCTranslatorcb_2(bind)
bind[3]*""
end
def rbtrans_AmethystCTranslatorcb_3(bind)
_append(bind[6],bind[7])
end
def rbtrans_AmethystCTranslatorcb_4(bind)
"@#{bind[11]}"
end
def rbtrans_AmethystCTranslatorcb_5(bind)
(bind[11]=="self") ? "@src" : "@src.#{bind[11]}"
end
def rbtrans_AmethystCTranslatorcb_6(bind)
rbbget(@src)
end
def rbtrans_AmethystCTranslatorcb_7(bind)
_append(bind[16],bind[17])
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
addcallback(@src.pred ? ["(",bind[3],") || FAIL"] : bind[3])
end
def trans_AmethystCTranslatorcb_10(bind)
@rulename=bind[25]; Local.resetnumbering;resetlabels;@locls={}
end
def trans_AmethystCTranslatorcb_11(bind)
@src.body
end
def trans_AmethystCTranslatorcb_12(bind)
bind[26]=[bind[26]]
end
def trans_AmethystCTranslatorcb_13(bind)
h="VALUE #{@grammar}_#{bind[25]}(VALUE self #{map_index(@src.args){|i| ",VALUE a#{i}"}})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{@src.name}\",#{@grammar}_#{@src.name},#{@src.args.size});"
						h+"{VALUE vals[#{@src.args.size}]; VALUE bind=rb_ary_new2(#{@locls.size}); #{map_index(@src.args){|i| bset(@src.args[i],"a#{i}")+";"}} int x;VALUE arg0,arg1,arg2,arg3;VALUE it;
\n#{bind[27]}\nreturn it;\nfail: return failobj; }" 
end
def trans_AmethystCTranslatorcb_14(bind)
_append(bind[30],bind[31])
end
def trans_AmethystCTranslatorcb_15(bind)
bind[32]*""
end
def trans_AmethystCTranslatorcb_16(bind)
"#{iset("stop","Qtrue")};"
end
def trans_AmethystCTranslatorcb_17(bind)
@defs<<@src.defs if @src.defs
end
def trans_AmethystCTranslatorcb_18(bind)
@header<<@src.header if @src.header
end
def trans_AmethystCTranslatorcb_19(bind)
@init<<@src.init if @src.init
end
def trans_AmethystCTranslatorcb_2(bind)
"it=CALL(#{bind[4]},1,bind); #{@src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def trans_AmethystCTranslatorcb_20(bind)
"unsigned char #{bind[36]}=#{@src.act};  switch(#{bind[36]}){"
end
def trans_AmethystCTranslatorcb_21(bind)
bind[22]+=bind[38].cases(@src.first) + " #{bind[32]} break;"
end
def trans_AmethystCTranslatorcb_22(bind)
bind[22]+"}"
end
def trans_AmethystCTranslatorcb_23(bind)
bind[41]+=1
end
def trans_AmethystCTranslatorcb_24(bind)
"#{bind[43]} arg#{bind[41]-1}=it;"
end
def trans_AmethystCTranslatorcb_25(bind)
_append(bind[42],bind[44])
end
def trans_AmethystCTranslatorcb_26(bind)
" #{bind[45]} it=#{callrule(bind[25],bind[41])};"
end
def trans_AmethystCTranslatorcb_27(bind)
"#{bind[46]} FAILTEST(#{@faillabel});" 
end
def trans_AmethystCTranslatorcb_28(bind)
@src.expr
end
def trans_AmethystCTranslatorcb_29(bind)
bind[50]=[bind[50]]
end
def trans_AmethystCTranslatorcb_3(bind)
@faillabel=bind[14] 
end
def trans_AmethystCTranslatorcb_30(bind)
"#{bind[51]}\n #{bset(@src.name,"it")}; " 
end
def trans_AmethystCTranslatorcb_31(bind)
"it=#{@src.ccode};"
end
def trans_AmethystCTranslatorcb_32(bind)
"#{iset("cut","Qtrue")};"
end
def trans_AmethystCTranslatorcb_33(bind)
@grammar=@src.name;@parent=@src.parent
end
def trans_AmethystCTranslatorcb_34(bind)
@lambdas=[] ;@rcallbacks={}
end
def trans_AmethystCTranslatorcb_35(bind)
@defs=[]
end
def trans_AmethystCTranslatorcb_36(bind)
@defmethods=[]
end
def trans_AmethystCTranslatorcb_37(bind)
@faillabel="fail"
end
def trans_AmethystCTranslatorcb_38(bind)
@callbacks={}
end
def trans_AmethystCTranslatorcb_39(bind)
mktable(@src.rules)
end
def trans_AmethystCTranslatorcb_4(bind)
@src.to
end
def trans_AmethystCTranslatorcb_40(bind)
@header=[]
end
def trans_AmethystCTranslatorcb_41(bind)
@init=[]
end
def trans_AmethystCTranslatorcb_42(bind)
@src.rules
end
def trans_AmethystCTranslatorcb_43(bind)
bind[57]=[bind[57]]
end
def trans_AmethystCTranslatorcb_44(bind)
_append(bind[59],bind[60])
end
def trans_AmethystCTranslatorcb_45(bind)
"VALUE cls_#{@src.name};\n" 
end
def trans_AmethystCTranslatorcb_46(bind)
bind[22]<<@header.sort*"\n"+"\n"
							bind[22]<<bind[32].sort*"\n"
							bind[22]<<@lambdas*"\n"
        		  init="\n cls_#{@src.name}=rb_define_class(\"#{@src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@init*"\n"}
#{@defmethods.sort*"\n" }
"
							[bind[22],init,bind[62]] 
end
def trans_AmethystCTranslatorcb_47(bind)
"it=#{bget(@src)};" 
end
def trans_AmethystCTranslatorcb_48(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_49(bind)
label("reject")
end
def trans_AmethystCTranslatorcb_5(bind)
bind[16]=[bind[16]]
end
def trans_AmethystCTranslatorcb_50(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_51(bind)
"int #{bind[9]}=ame_getpos(self);\n #{bind[32]} x=1; goto #{bind[67]};  #{bind[68]}: x=0; #{bind[67]}: it=Qnil; ame_setpos(self,#{bind[9]}); if (x==0) goto #{@faillabel};"
end
def trans_AmethystCTranslatorcb_52(bind)
label("break")
end
def trans_AmethystCTranslatorcb_53(bind)
"int #{bind[9]}; while(1){#{bind[9]}=ame_getpos(self); #{bind[32]} if (#{iget("stop")}!=Qnil){{#{bind[9]}=ame_getpos(self);goto #{bind[71]};} } } #{bind[71]}: #{iset("stop","Qnil")};  ame_setpos(self,#{bind[9]}); "
end
def trans_AmethystCTranslatorcb_54(bind)
bind[75]+=1
end
def trans_AmethystCTranslatorcb_55(bind)
"#{bind[74]}_#{bind[75]+1}"
end
def trans_AmethystCTranslatorcb_56(bind)
_append(bind[76],bind[78])
end
def trans_AmethystCTranslatorcb_57(bind)
bind[22]="int #{bind[9]}=ame_getpos(self);\n"
end
def trans_AmethystCTranslatorcb_58(bind)
bind[22]+=map_index(bind[32]){|i| "#{bind[74]}_#{i+1}: ame_setpos(self,#{bind[9]});if (#{iget("cut")}!=Qnil) {#{iset("cut","Qnil")}; goto #{bind[13]};}\n #{bind[32][i]} \n#{iset("cut","Qnil")};goto #{bind[67]};\n"}*""
end
def trans_AmethystCTranslatorcb_59(bind)
"#{bind[22]}  #{bind[74]}_#{bind[75]+1}:  ame_setpos(self,#{bind[9]}); goto #{bind[13]};\n #{bind[67]}:;\n"
end
def trans_AmethystCTranslatorcb_6(bind)
@faillabel=bind[15]; bind[19] 
end
def trans_AmethystCTranslatorcb_7(bind)
"int #{bind[9]}=ame_getpos(self); int #{bind[10]}=ame_getlen(self); VALUE #{bind[11]}=ame_getsrc(self); int #{bind[13]}=0;
ame_setsrc(self,#{bget(@src.var)}); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern(\"size\"),0)));
 #{bind[17]}
	goto #{bind[12]};
	#{bind[8]}: #{bind[13]}=1;
	#{bind[12]}: ame_setsrc(self,#{bind[11]}); ame_setpos(self,#{bind[9]}); ame_setlen(self,#{bind[10]});
	if(#{bind[13]}) goto #{@faillabel};
" 
end
def trans_AmethystCTranslatorcb_8(bind)
bind[22]="#{@src.name}.create( {#{@src.vars.map{|l| ":#{l[0]}=>#{rbbget(l)}" }.sort*","} })"
					bind[4]=addcallback(bind[22])
					"it=CALL(#{bind[4]},1,bind);"
				
end
def trans_AmethystCTranslatorcb_9(bind)
@src.name
end

end


def ctranslator2_compiled_by
'6b247e5576e0b764091c15f5d197bffc'
end
def ctranslator2_source_hash
'001fcb12af6b02d716471dd28ae53005'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'cfd9c6d35ba5a865f88f2dffe9acd6b6'
end
  require 'compiled/ctranslator2_c'
