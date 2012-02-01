
class AmethystCTranslator < Amethyst 
  def addcallback2(cb)
    return @rcallbacks[cb] if @rcallbacks[cb]
    n="#{@grammar}_#{signature(cb)}"
    i=1
    i+=1 while @callbacks[n+(i>1 ? i.to_s : "")]
    n=n+i.to_s if i>1
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
    sy="sy_#{str}"
    @header<<"static VALUE #{sy};"
    @init<<"#{sy}=rb_intern(#{str.inspect});"
    sy
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

$classlabels=Hash.new(0)
class AmethystCTranslator < Amethyst

def AmethystCTranslator__append_lp__5e3c(bind)
_append(bind[3],bind[7])
end
def AmethystCTranslator__append_lp__81ec(bind)
_append(bind[0],bind[5])
end
def AmethystCTranslator__append_lp__cbd1(bind)
_append(bind[0],bind[1])
end
def AmethystCTranslator__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def AmethystCTranslator__append_lp__d82a(bind)
_append(bind[27],bind[29])
end
def AmethystCTranslator__append_lp__e512(bind)
_append(bind[43],bind[44])
end
def AmethystCTranslator__append_lp__ffb2(bind)
_append(bind[91],bind[92])
end
def AmethystCTranslator__at_callbac_2d11(bind)
@callbacks.to_a.sort
end
def AmethystCTranslator__at_callbac_e37c(bind)
@callbacks={}
end
def AmethystCTranslator__at_cuts_eq_tr_9b95(bind)
@cuts=true; "ame_setcut(self,Qtrue);"
end
def AmethystCTranslator__at_defmeth_456b(bind)
@defmethods=[]
end
def AmethystCTranslator__at_defs_eq__lb__rb__188f(bind)
@defs=[]
end
def AmethystCTranslator__at_faillab_1610(bind)
@faillabel
end
def AmethystCTranslator__at_faillab_37e7(bind)
@faillabel=bind[0]; bind[3] 
end
def AmethystCTranslator__at_faillab_628e(bind)
@faillabel=bind[58]; bind[59] 
end
def AmethystCTranslator__at_faillab_74ee(bind)
@faillabel=bind[2]; bind[4] 
end
def AmethystCTranslator__at_faillab_8142(bind)
@faillabel="fail"
end
def AmethystCTranslator__at_faillab_9ef5(bind)
@faillabel=bind[57] 
end
def AmethystCTranslator__at_faillab_e643(bind)
@faillabel=bind[1] 
end
def AmethystCTranslator__at_grammar_1337(bind)
@grammar=src.name;@parent=src.parent
end
def AmethystCTranslator__at_header_eq__7aa9(bind)
@header=[]
end
def AmethystCTranslator__at_header_lt__09ca(bind)
@header<<"static VALUE #{bind[0]};"; @init<<"#{bind[0]}=#{bind[1]};#{gc_mark_var(bind[0])};"
end
def AmethystCTranslator__at_header_lt__eba3(bind)
@header<< "VALUE #{bind[100]};"
end
def AmethystCTranslator__at_init_eq__lb__rb__47da(bind)
@init=[]
end
def AmethystCTranslator__at_init_sp__sp__lt__807c(bind)
@init  <<"#{bind[100]}=rb_eval_string(\"Hash.new{|h,k|#{bind[49]}}\");#{gc_mark_var(bind[100])};"
end
def AmethystCTranslator__at_lambdas_ecda(bind)
@lambdas=[] ;@rcallbacks={};@cbhash={}
end
def AmethystCTranslator__at_rulenam_9a09(bind)
@rulename=bind[25]; Local.resetnumbering;resetlabels;@locls={}
end
def AmethystCTranslator__at_stoplab_a14e(bind)
@stoplabel=label("stop")
end
def AmethystCTranslator__at_stops_eq_t_c6ab(bind)
@stops=true; @stoplabel? "#{@stoplabel}=1;" : ""
end
def AmethystCTranslator__dq_Amethys_8b00(bind)
"AmethystLambda.new(:#{bind[0]},self,bind)" 
end
def AmethystCTranslator__dq_VALUE_sp_c_8bbf(bind)
"VALUE cls_#{src.name};\n" 
end
def AmethystCTranslator__dq__at__sh__le_bind_f173(bind)
"@#{bind[6]}"

end
def AmethystCTranslator__dq__sh__le__at_gram_5de9(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__055d(bind)
"#{bind[0]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__15a1(bind)
"#{bind[73]}_#{bind[74]}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__5c45(bind)
"#{bind[35]} #{bset(src.name,"it")};\n" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__931f(bind)
"#{bind[28]} arg#{bind[26]-1}=it;"
end
def AmethystCTranslator__dq__sh__le_bind_lb__bb53(bind)
"#{bind[31]} FAILTEST(#{@faillabel});" 
end
def AmethystCTranslator__dq__sh__le_src_dot_n_9acf(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def AmethystCTranslator__dq__sp__sh__le_bind_7194(bind)
" #{bind[30]*""} it=#{callrule(bind[25],bind[26])};"
end
def AmethystCTranslator__dq_class_sp__sh__0b62(bind)
"class #{@grammar} < #{@parent}\n"
end
def AmethystCTranslator__dq_cstruct_c931(bind)
"cstruct #{bind[79]}=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   #{src.enter ?  "ptr->src=#{bget(src.var)}; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}" : 
                    "ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=#{bget(src.var)};ptr->len=1;"
                   }
                   #{bind[83]}
                   goto #{bind[80]};
                   #{bind[78]}: *ptr=#{bind[79]}; goto #{@faillabel};
                   #{bind[80]}: *ptr=#{bind[79]};
                " 
end
def AmethystCTranslator__dq_def_sp__sh__le_b_5b6b(bind)
"def #{bind[5]}(bind)\n#{bind[6]}\nend\n"
end
def AmethystCTranslator__dq_goto_sp__sh__le__f772(bind)
"goto #{@faillabel};"
end
def AmethystCTranslator__dq_if_sp__lp_str_5004(bind)
"if (strncmp(ame_curstr2(ptr),#{bind[22].inspect},#{bind[22].size})) goto #{@faillabel}; else ptr->pos+=#{bind[22].size};"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_38ad(bind)
"int #{bind[56]}=ptr->pos;\n #{bind[47]} x=1; goto #{bind[54]};  #{bind[55]}: x=0; #{bind[54]}: it=Qnil; ptr->pos=#{bind[56]}; if (x==0) goto #{@faillabel};"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_edcd(bind)
"int #{bind[56]}=ptr->pos;\n#{bind[73]}_#{bind[74]}:;"
end
def AmethystCTranslator__dq_it_eq_Qnil_8464(bind)
"it=Qnil;if (ptr->pos<ptr->len) goto #{@faillabel};"
end
def AmethystCTranslator__dq_it_eq__sh__le_bg_281f(bind)
"it=#{bget(src)};" 
end
def AmethystCTranslator__dq_it_eq__sh__le_rb_79a3(bind)
"it=#{rbcall(bind[4],["bind"])}; #{src.pred ? "FAILTEST(#{@faillabel});" :"" }"
end
def AmethystCTranslator__dq_switch_lp__0fc0(bind)
"switch(FIX2LONG(rb_hash_aref(#{bind[100]},rb_obj_class(ame_curobj2(ptr))))){"
end
def AmethystCTranslator__dq_switchh_f207(bind)
"switchhash_#{@grammar}_#{$classlabels[@grammar]+=1}"
end
def AmethystCTranslator__lb_bind_lb_1_rb__8404(bind)
[bind[1],bind[2],bind[0]]

end
def AmethystCTranslator__lp_bind_lb_3_rb__e49d(bind)
(bind[3].is_a? String ) || FAIL
end
def AmethystCTranslator__lp_bind_lb_6_rb__79e0(bind)
(bind[6]=="self") ? "src" : "src.#{bind[6]}#{bind[8]!="" ? "(#{bind[8]})":""}"

end
def AmethystCTranslator_addcallb_68bb(bind)
addcallback(src.pred ? ["(",bind[3],") || FAIL"] : bind[3])
end
def AmethystCTranslator_addcallb_dcd7(bind)
addcallback2(bind[0])
end
def AmethystCTranslator_ar_eq__ti_src_dot__efea(bind)
ar=*src.ccode; 
                   @header<<ar[0] if ar[0]
                   @init<<ar[1] if ar[1]
                   "it=#{ar[2]};"
end
def AmethystCTranslator_bind_lb_0_rb__lt__cac1(bind)
bind[0]<<@defs*"\n";bind[0]<<"\n"
end
def AmethystCTranslator_bind_lb_0_rb__pl__40f3(bind)
bind[0]+="\nend"; bind[0]
end
def AmethystCTranslator_bind_lb_0_rb__pl__c1a5(bind)
bind[0]+=bind[8]*""
end
def AmethystCTranslator_bind_lb_1_rb__lt__2f50(bind)
bind[1]<<bind[6][0];bind[2]<<bind[6][1];bind[0]<<bind[6][2]
end
def AmethystCTranslator_bind_lb_22_rb__2594(bind)
bind[22]+=bind[97].cases(src.first) + " #{bind[47]} break;\n"
end
def AmethystCTranslator_bind_lb_22_rb__336a(bind)
bind[22]+="; #{bind[47]} break;\n"
end
def AmethystCTranslator_bind_lb_22_rb__40fa(bind)
bind[22]+="#{bind[47]}\n#{@cuts ? "ame_setcut(self,Qnil)" : ""};goto #{bind[54]};\n"
end
def AmethystCTranslator_bind_lb_22_rb__5156(bind)
bind[22]+"}"
end
def AmethystCTranslator_bind_lb_22_rb__59b2(bind)
bind[22]+"goto #{@faillabel};\n #{bind[54]}:;\n"
end
def AmethystCTranslator_bind_lb_22_rb__6b71(bind)
bind[22]<<@header.uniq.sort*"\n"+"\n"
              bind[22]<<bind[47].sort*"\n"
              bind[22]<<@lambdas*"\n"
              bind[49]="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
                    failobj=rb_eval_string(\"FAIL\");
                    #{@init.uniq.sort*"\n"}
                    #{@defmethods.sort*"\n" }
                   "
              [bind[22],bind[49],bind[48]] 
end
def AmethystCTranslator_bind_lb_22_rb__8251(bind)
bind[22]+="#{bind[73]}_#{bind[74]}: ptr->pos=#{bind[56]};#{@cuts ? (@cuts=false;"if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto #{@faillabel};}"): ""}"
end
def AmethystCTranslator_bind_lb_22_rb__d832(bind)
bind[22]="int #{bind[56]}; #{@stops ? "int #{@stoplabel}=0;":""} while(1){#{bind[56]}=ptr->pos; #{bind[47]} #{@stops ? "if (#{@stoplabel}) goto #{bind[54]}; } #{bind[68]}: goto #{@faillabel}; #{bind[54]}:;" : "} #{bind[68]}: ptr->pos=#{bind[56]};"}   "
									@stops=@stoplabel=nil
									bind[22]
								
end
def AmethystCTranslator_bind_lb_26_rb__7728(bind)
bind[26]+=1
end
def AmethystCTranslator_bind_lb_2_rb__ti__e7b8(bind)
bind[2]*""
end
def AmethystCTranslator_bind_lb_3_rb_(bind)
bind[3]

end
def AmethystCTranslator_bind_lb_47_rb__d405(bind)
bind[47]*""
end
def AmethystCTranslator_bind_lb_74_rb__945f(bind)
bind[74]+=1
end
def AmethystCTranslator_bind_lb_97_rb__769d(bind)
bind[97].ary.each{|al| bind[49]+="next h[k]=#{bind[26]} if k<=#{al}\\n";bind[22]+="case #{bind[26]}/*#{al}*/:";bind[26]+=1}
end
def AmethystCTranslator_h_eq__dq_VALUE_ed4e(bind)
h="VALUE #{@grammar}_#{bind[25]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
            @header<<h+";"
            @defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
            h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            \n#{bind[88]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_h_eq__dq_VALUE_f86b(bind)
h="VALUE #{bind[0]}(VALUE self,VALUE bind)"
                 @header<<h+";"
                 @defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[0]}\",#{bind[0]},1);"
                 @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/ cstruct *ptr; int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_label_lp__dq_a_f49c(bind)
label("accept")
end
def AmethystCTranslator_label_lp__dq_b_6df7(bind)
label("break")
end
def AmethystCTranslator_label_lp__dq_o_c187(bind)
label("oldpos")
end
def AmethystCTranslator_label_lp__dq_r_95b2(bind)
label("reject")
end
def AmethystCTranslator_mktable_lp__ea79(bind)
mktable(src.rules)
end
def AmethystCTranslator_raise_sp__dq_T_0ab1(bind)
raise "TODO"
end
def AmethystCTranslator_rbbget_lp_s_68a8(bind)
rbbget(src)
end
def AmethystCTranslator_src_dot_body_519e(bind)
src.body
end
def AmethystCTranslator_src_dot_name_80f3(bind)
src.name
end
def AmethystCTranslator_src_dot_rule_5acf(bind)
src.rules
end
def AmethystCTranslator_src_dot_to_5e99(bind)
src.to
end

end


def ctranslator2_compiled_by
'8e2bc93ee223f52996e50bd1212819d9'
end
def ctranslator2_source_hash
'b0e8a37a7672f5bfec55360c39496f9e'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'e1055040b4d1a5b4ce145652a679fd94'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/ctranslator2_c"
