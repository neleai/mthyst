
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
"@#{bind[12]}"
end
def rbtrans_AmethystCTranslatorcb_2(bind)
(bind[12]=="self") ? "src" : "src.#{bind[12]}"
end
def rbtrans_AmethystCTranslatorcb_3(bind)
_append(bind[17],bind[18])
end
def rbtrans_AmethystCTranslatorcb_4(bind)
rbbget(src)
end
def rbtrans_AmethystCTranslatorcb_5(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def rw_AmethystCTranslatorcb_1(bind)
@faillabel=bind[0]; bind[3] 
end
def trans_AmethystCTranslatorcb_1(bind)
_append(bind[1],bind[2])
end
def trans_AmethystCTranslatorcb_10(bind)
bind[22]="#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
					bind[4]=addcallback(bind[22])
					"it=#{rbcall(bind[4],["bind"])};"
				
end
def trans_AmethystCTranslatorcb_11(bind)
src.name
end
def trans_AmethystCTranslatorcb_12(bind)
@rulename=bind[25]; Local.resetnumbering;resetlabels;@locls={}
end
def trans_AmethystCTranslatorcb_13(bind)
src.body
end
def trans_AmethystCTranslatorcb_14(bind)
bind[26]=[bind[26]]
end
def trans_AmethystCTranslatorcb_15(bind)
h="VALUE #{@grammar}_#{bind[25]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
						@header<<h+";"
						@defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
						h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it;
\n#{bind[27]}\nreturn it;\nfail: return failobj; }" 
end
def trans_AmethystCTranslatorcb_16(bind)
_append(bind[30],bind[31])
end
def trans_AmethystCTranslatorcb_17(bind)
bind[32]*""
end
def trans_AmethystCTranslatorcb_18(bind)
@defs<<src.defs if src.defs
end
def trans_AmethystCTranslatorcb_19(bind)
@header<<src.header if src.header
end
def trans_AmethystCTranslatorcb_2(bind)
addcallback(src.pred ? ["(",bind[3],") || FAIL"] : bind[3])
end
def trans_AmethystCTranslatorcb_20(bind)
@init<<src.init if src.init
end
def trans_AmethystCTranslatorcb_21(bind)
"unsigned char #{bind[36]}=#{src.act};  switch(#{bind[36]}){"
end
def trans_AmethystCTranslatorcb_22(bind)
bind[22]+=bind[39].cases(src.first) + " #{bind[32]} break;"
end
def trans_AmethystCTranslatorcb_23(bind)
_append(bind[37],bind[40])
end
def trans_AmethystCTranslatorcb_24(bind)
bind[22]+"}"
end
def trans_AmethystCTranslatorcb_25(bind)
bind[46]+=1
end
def trans_AmethystCTranslatorcb_26(bind)
"#{bind[48]} arg#{bind[46]-1}=it;"
end
def trans_AmethystCTranslatorcb_27(bind)
_append(bind[47],bind[49])
end
def trans_AmethystCTranslatorcb_28(bind)
" #{bind[50]*""} it=#{callrule(bind[25],bind[46])};"
end
def trans_AmethystCTranslatorcb_29(bind)
"#{bind[51]} FAILTEST(#{@faillabel});" 
end
def trans_AmethystCTranslatorcb_3(bind)
"it=#{rbcall(bind[4],["bind"])}; #{src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def trans_AmethystCTranslatorcb_30(bind)
"#{bind[55]}\n #{bset(src.name,"it")}; " 
end
def trans_AmethystCTranslatorcb_31(bind)
_append(bind[58],bind[59])
end
def trans_AmethystCTranslatorcb_32(bind)
ar=*src.ccode; 
                   @header<<ar[0] if ar[0]
                   @init<<ar[1] if ar[1]
                   "it=#{ar[2]};"
end
def trans_AmethystCTranslatorcb_33(bind)
@grammar=src.name;@parent=src.parent
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
mktable(src.rules)
end
def trans_AmethystCTranslatorcb_4(bind)
@faillabel
end
def trans_AmethystCTranslatorcb_40(bind)
@header=[]
end
def trans_AmethystCTranslatorcb_41(bind)
@init=[]
end
def trans_AmethystCTranslatorcb_42(bind)
src.rules
end
def trans_AmethystCTranslatorcb_43(bind)
bind[63]=[bind[63]]
end
def trans_AmethystCTranslatorcb_44(bind)
_append(bind[65],bind[66])
end
def trans_AmethystCTranslatorcb_45(bind)
"VALUE cls_#{src.name};\n" 
end
def trans_AmethystCTranslatorcb_46(bind)
bind[22]<<@header.uniq.sort*"\n"+"\n"
							bind[22]<<bind[32].sort*"\n"
							bind[22]<<@lambdas*"\n"
        		  init="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
failobj=rb_eval_string(\"FAIL\");
#{@init.uniq.sort*"\n"}
#{@defmethods.sort*"\n" }
"
							[bind[22],init,bind[68]] 
end
def trans_AmethystCTranslatorcb_47(bind)
_append(bind[71],bind[72])
end
def trans_AmethystCTranslatorcb_48(bind)
"it=#{bget(src)};" 
end
def trans_AmethystCTranslatorcb_49(bind)
label("accept")
end
def trans_AmethystCTranslatorcb_5(bind)
@faillabel=bind[14] 
end
def trans_AmethystCTranslatorcb_50(bind)
label("reject")
end
def trans_AmethystCTranslatorcb_51(bind)
label("oldpos")
end
def trans_AmethystCTranslatorcb_52(bind)
"int #{bind[9]}=ame_getpos(self);\n #{bind[32]} x=1; goto #{bind[75]};  #{bind[76]}: x=0; #{bind[75]}: it=Qnil; ame_setpos(self,#{bind[9]}); if (x==0) goto #{@faillabel};"
end
def trans_AmethystCTranslatorcb_53(bind)
label("break")
end
def trans_AmethystCTranslatorcb_54(bind)
"int #{bind[9]}; while(1){#{bind[9]}=ame_getpos(self); #{bind[32]} if (ame_getstop(self)!=Qnil){{#{bind[9]}=ame_getpos(self);goto #{bind[79]};} } } #{bind[79]}: ame_setstop(self,Qnil);  ame_setpos(self,#{bind[9]}); "
end
def trans_AmethystCTranslatorcb_55(bind)
bind[83]+=1
end
def trans_AmethystCTranslatorcb_56(bind)
"#{bind[82]}_#{bind[83]+1}"
end
def trans_AmethystCTranslatorcb_57(bind)
_append(bind[84],bind[86])
end
def trans_AmethystCTranslatorcb_58(bind)
bind[22]="int #{bind[9]}=ame_getpos(self);\n"
end
def trans_AmethystCTranslatorcb_59(bind)
bind[22]+=map_index(bind[32]){|i| "#{bind[82]}_#{i+1}: ame_setpos(self,#{bind[9]});if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto #{bind[13]};}\n #{bind[32][i]} \name_setcut(self,Qnil);goto #{bind[75]};\n"}*""
end
def trans_AmethystCTranslatorcb_6(bind)
src.to
end
def trans_AmethystCTranslatorcb_60(bind)
"#{bind[22]}  #{bind[82]}_#{bind[83]+1}:  ame_setpos(self,#{bind[9]}); goto #{bind[13]};\n #{bind[75]}:;\n"
end
def trans_AmethystCTranslatorcb_7(bind)
bind[16]=[bind[16]]
end
def trans_AmethystCTranslatorcb_8(bind)
@faillabel=bind[15]; bind[19] 
end
def trans_AmethystCTranslatorcb_9(bind)
"int #{bind[9]}=ame_getpos(self); int #{bind[10]}=ame_getlen(self); VALUE #{bind[11]}=ame_getsrc(self); int #{bind[13]}=0;
ame_setsrc(self,#{bget(src.var)}); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),#{symb("size")},0)));
 #{bind[17]}
	goto #{bind[12]};
	#{bind[8]}: #{bind[13]}=1;
	#{bind[12]}: ame_setsrc(self,#{bind[11]}); ame_setpos(self,#{bind[9]}); ame_setlen(self,#{bind[10]});
	if(#{bind[13]}) goto #{@faillabel};
" 
end

end


def ctranslator2_compiled_by
'17139913ed671728b244ce0214ba2aee'
end
def ctranslator2_source_hash
'12320fb0de278eb46f9f3c0e7965e151'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'7fa3415ddb0ee36a79ea4cdd3f93d6c4'
end
  require 'compiled/ctranslator2_c'
