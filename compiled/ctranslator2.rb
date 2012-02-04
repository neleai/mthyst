
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
def gc_mark_var(v)
	"rb_global_variable(&#{v});"
end
$classlabels=Hash.new(0)
class AmethystCTranslator < Amethyst

def AmethystCTranslator__append_lp__3a29(bind)
_append(bind[109],bind[110])
end
def AmethystCTranslator__append_lp__3d0f(bind)
_append(bind[50],bind[51])
end
def AmethystCTranslator__append_lp__5e3c(bind)
_append(bind[3],bind[7])
end
def AmethystCTranslator__append_lp__7ec6(bind)
_append(bind[36],bind[38])
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
def AmethystCTranslator__at_callbac_2d11(bind)
@callbacks.to_a.sort
end
def AmethystCTranslator__at_callbac_e37c(bind)
@callbacks={}
end
def AmethystCTranslator__at_cutlabe_7393(bind)
@cutlabel
end
def AmethystCTranslator__at_cutlabe_b3fd(bind)
@cutlabel=bind[84];@cuts=bind[85];bind[16]+"goto #{@faillabel};\n #{bind[61]}:;\n"
end
def AmethystCTranslator__at_cuts_7bbc(bind)
@cuts
end
def AmethystCTranslator__at_cuts_eq_ni_f875(bind)
@cuts=nil;@cutlabel=label("cut")
end
def AmethystCTranslator__at_cuts_eq_tr_13c6(bind)
@cuts=true;  @cutlabel ? "#{@cutlabel}=1;"  : ""
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
def AmethystCTranslator__at_faillab_296d(bind)
@faillabel=bind[1]; bind[4] 
end
def AmethystCTranslator__at_faillab_37e7(bind)
@faillabel=bind[0]; bind[3] 
end
def AmethystCTranslator__at_faillab_4a73(bind)
@faillabel=bind[64] 
end
def AmethystCTranslator__at_faillab_5f0a(bind)
@faillabel=bind[65]; bind[66] 
end
def AmethystCTranslator__at_faillab_8142(bind)
@faillabel="fail"
end
def AmethystCTranslator__at_faillab_81c6(bind)
@faillabel=bind[2] 
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
def AmethystCTranslator__at_header_lt__62d2(bind)
@header<< "VALUE #{bind[118]};"
end
def AmethystCTranslator__at_init_eq__lb__rb__47da(bind)
@init=[]
end
def AmethystCTranslator__at_init_sp__sp__lt__ea5b(bind)
@init  <<"#{bind[118]}=rb_eval_string(\"Hash.new{|h,k|#{bind[56]}}\");#{gc_mark_var(bind[118])};"
end
def AmethystCTranslator__at_lambdas_ecda(bind)
@lambdas=[] ;@rcallbacks={};@cbhash={}
end
def AmethystCTranslator__at_rulenam_d72e(bind)
@rulename=bind[34]; Local.resetnumbering;resetlabels;@locls={}
end
def AmethystCTranslator__at_stoplab_2ba4(bind)
@stoplabel
end
def AmethystCTranslator__at_stoplab_a14e(bind)
@stoplabel=label("stop")
end
def AmethystCTranslator__at_stops_e2b4(bind)
@stops
end
def AmethystCTranslator__at_stops_eq_n_588d(bind)
@stops=nil
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
def AmethystCTranslator__dq__sh__le_bind_lb__1eef(bind)
"#{bind[37]} arg#{bind[35]-1}=it;"
end
def AmethystCTranslator__dq__sh__le_bind_lb__4c59(bind)
"#{bind[42]} #{bset(src.name,"it")};\n" 
end
def AmethystCTranslator__dq__sh__le_bind_lb__965a(bind)
"#{bind[82]}_#{bind[83]}"
end
def AmethystCTranslator__dq__sh__le_src_dot_n_9acf(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def AmethystCTranslator__dq_class_sp__sh__0b62(bind)
"class #{@grammar} < #{@parent}\n"
end
def AmethystCTranslator__dq_cstruct_061f(bind)
"cstruct #{bind[90]}=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   #{src.enter ?  "ptr->src=#{bget(src.var)}; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}" : 
                    "ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=#{bget(src.var)};ptr->len=1;"
                   }
                   #{bind[94]}
                   goto #{bind[91]};
                   #{bind[89]}: *ptr=#{bind[90]}; goto #{@faillabel};
                   #{bind[91]}: *ptr=#{bind[90]};
                " 
end
def AmethystCTranslator__dq_def_sp__sh__le_b_5b6b(bind)
"def #{bind[5]}(bind)\n#{bind[6]}\nend\n"
end
def AmethystCTranslator__dq_goto_sp__sh__le__f772(bind)
"goto #{@faillabel};"
end
def AmethystCTranslator__dq_if_lp_ptr_mi__6e29(bind)
"if(ptr->pos+#{bind[16]}>=ptr->len) goto #{@faillabel};"

end
def AmethystCTranslator__dq_if_sp__lp__sh__le_a_11e0(bind)
"if (#{ary=bind[16].split("");map_index(ary){|i| "ame_curstr2(ptr)[#{i}]==#{Lattice_Char.new.cchar(ary[i])}" }*"&&" })  ptr->pos+=#{bind[16].size}; else goto #{@faillabel};"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_127b(bind)
"int #{bind[63]}=ptr->pos;\n #{bind[54]} x=1; goto #{bind[61]};  #{bind[62]}: x=0; #{bind[61]}: it=Qnil; ptr->pos=#{bind[63]}; if (x==0) goto #{@faillabel};"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_88ff(bind)
"int #{bind[63]}=ptr->pos;int #{@cutlabel}=0;\n#{bind[82]}_#{bind[83]}:;"
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
def AmethystCTranslator__dq_switch_lp__e906(bind)
"switch(FIX2LONG(rb_hash_aref(#{bind[118]},rb_obj_class(ame_curobj2(ptr))))){"
end
def AmethystCTranslator__dq_switchh_f207(bind)
"switchhash_#{@grammar}_#{$classlabels[@grammar]+=1}"
end
def AmethystCTranslator__lb_bind_lb_1_rb__8404(bind)
[bind[1],bind[2],bind[0]]

end
def AmethystCTranslator__lp_Current_4bd3(bind)
(CurrentParser[:memoize]&&CurrentParser[:memoize].include?(bind[34])) || FAIL
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
def AmethystCTranslator_bind_lb_115_c115(bind)
bind[115].ary.each{|al| bind[56]+="next h[k]=#{bind[35]} if k<=#{al}\\n";bind[16]+="case #{bind[35]}/*#{al}*/:";bind[35]+=1}
end
def AmethystCTranslator_bind_lb_16_rb__0369(bind)
bind[16]<<@header.uniq.sort*"\n"+"\n"
							bind[16]<<"\n#include \"../lib/c/memo.c\"\n memo_struct *mem;VALUE memo_val;" if CurrentParser[:memoize]
							@init<<"mem=memo_init(); memo_val=Data_Wrap_Struct(cls_AmethystParser,memo_mark,memo_free,mem); rb_global_variable(&memo_val); " if CurrentParser[:memoize]
              bind[16]<<bind[54].sort*"\n"
              bind[16]<<@lambdas*"\n"
              bind[56]="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
                    failobj=rb_eval_string(\"FAIL\");
                    #{@init.uniq.sort*"\n"}
                    #{@defmethods.sort*"\n" }
                   "
              [bind[16],bind[56],bind[55]] 
end
def AmethystCTranslator_bind_lb_16_rb__1922(bind)
bind[16]+"}"
end
def AmethystCTranslator_bind_lb_16_rb__24cb(bind)
bind[16]+="; #{bind[54]} break;\n"
end
def AmethystCTranslator_bind_lb_16_rb__2732(bind)
bind[16]+="#{bind[82]}_#{bind[83]}: ptr->pos=#{bind[63]};#{@cuts ? (@cuts=nil;"if (#{@cutlabel}) goto #{@faillabel};"): ""}"
end
def AmethystCTranslator_bind_lb_16_rb__4555(bind)
bind[16]+=bind[115].cases() + " #{bind[54]} break;\n"
end
def AmethystCTranslator_bind_lb_16_rb__6742(bind)
bind[16]="int #{bind[63]}; #{@stops ? "int #{@stoplabel}=0;":""} while(1){#{bind[63]}=ptr->pos; #{bind[54]} #{@stops ? "if (#{@stoplabel}) goto #{bind[61]}; } #{bind[75]}: goto #{@faillabel}; #{bind[61]}:;" : "} #{bind[75]}: ptr->pos=#{bind[63]};"}   "
									@stops=bind[76]; @stoplabel=bind[77]
									bind[16]
								
end
def AmethystCTranslator_bind_lb_16_rb__878f(bind)
bind[16]+="#{bind[54]}\n;goto #{bind[61]};\n"
end
def AmethystCTranslator_bind_lb_1_rb__lt__2f50(bind)
bind[1]<<bind[6][0];bind[2]<<bind[6][1];bind[0]<<bind[6][2]
end
def AmethystCTranslator_bind_lb_2_rb__ti__e7b8(bind)
bind[2]*""
end
def AmethystCTranslator_bind_lb_35_rb__2567(bind)
bind[35]+=1
end
def AmethystCTranslator_bind_lb_3_rb_(bind)
bind[3]

end
def AmethystCTranslator_bind_lb_54_rb__06ed(bind)
bind[54]*""
end
def AmethystCTranslator_bind_lb_83_rb__7cae(bind)
bind[83]+=1
end
def AmethystCTranslator_h_eq__dq_VALUE_0b24(bind)
h="VALUE #{@grammar}_#{bind[34]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
            @header<<h+";"
            @defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
						bind[16]=h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
int oldpos=ptr->pos;if (memo_pos(mem,#{@memo_no=(@memo_no||111)+2},ptr->src,ptr->pos)!=-1) {it=memo_value(mem,#{@memo_no},ptr->src,ptr->pos);ptr->pos=memo_pos(mem,#{@memo_no},ptr->src,ptr->pos);return it;} #{bind[102]}\n memo_add(mem,#{@memo_no},ptr->src,oldpos,it,ptr->pos); return it;\nfail: memo_add(mem,#{@memo_no},ptr->src,oldpos,failobj,ptr->pos); return failobj; }" 
end
def AmethystCTranslator_h_eq__dq_VALUE_5d11(bind)
h="VALUE #{@grammar}_#{bind[34]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
            @header<<h+";"
            @defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
            h+"{VALUE vals[#{src.args.size}]; VALUE bind=bind_new2(#{@locls.size}); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            \n#{bind[102]}\nreturn it;\nfail: return failobj; }" 
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
def AmethystCTranslator_r_eq__dq__sp__sh__le_bi_39fa(bind)
r=" #{bind[39]*""} it=#{callrule(bind[34],bind[35])};"; cant_fail?(bind[40]) ? r : "#{r} FAILTEST(#{@faillabel});"

end
def AmethystCTranslator_raise_sp__dq_T_0ab1(bind)
raise "TODO"
end
def AmethystCTranslator_rbbget_lp_s_68a8(bind)
rbbget(src)
end
def AmethystCTranslator_src_25d9(bind)
src
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
'fa5c5fa85ebaf89fb3c3a2ccdc088436'
end
def ctranslator2_source_hash
'5c37b50cf1e4b25c231d30a68f574943'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'3ca469a90d1a17bfc911dcab12b88940'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/ctranslator2_c"
