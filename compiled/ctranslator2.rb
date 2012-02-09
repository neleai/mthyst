
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
		a=s[0];i=1
		while @locls[a] && @locls[a]!=s
			i+=1;a=s[0]+"_"+i.to_s
		end
		@locls[a]=s
		return a 
  end
  def bget(s)
    cm=s[0]
    s=desc(s)
 #   return "bind_aget(bind,#{s}/*#{cm}*/)"
		return "_#{s}"
  end
  def bset(s,e)
    cm=s[0]
    s=desc(s)
#    return "bind_aset(bind,#{s}/*#{cm}*/,#{e})"
		"_#{s}=#{e};"
  end
  def rbbget(s)
		return "bind[#{@binds[s]}]" if @binds[s]
		@bindno+=1
		@binds[s]=@bindno
		rbbget(s)
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

def AmethystCTranslator__append_lp__d113(bind)
_append(bind[1],bind[2])
end
def AmethystCTranslator__at_bindno_eq__e294(bind)
@bindno=0;@binds={}
end
def AmethystCTranslator__at_binds_dot_m_4c7b(bind)
@binds.map{|k,v| "bind_aset(bind2,#{v},#{bget(k)});"}*"" + "it=#{rbcall(bind[1],["bind2"])};"+@binds.map{|k,v|"#{bset(k,"bind_aget(bind2,#{v})")};"}*"" +"#{src.pred ? "FAILTEST(#{@faillabel});" :"" }"
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
def AmethystCTranslator__at_cutlabe_d8d6(bind)
@cutlabel=bind[1];@cuts=bind[2];bind[3]+"goto #{@faillabel};\n #{bind[4]}:;\n"
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
def AmethystCTranslator__at_faillab_8142(bind)
@faillabel="fail"
end
def AmethystCTranslator__at_faillab_e174(bind)
@faillabel=bind[1]; bind[2] 
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
def AmethystCTranslator__at_header_lt__92e2(bind)
@header<< "VALUE #{bind[1]};"
end
def AmethystCTranslator__at_init_eq__lb__rb__47da(bind)
@init=[]
end
def AmethystCTranslator__at_init_sp__sp__lt__aac8(bind)
@init  <<"#{bind[1]}=rb_eval_string(\"Hash.new{|h,k|#{bind[2]}}\");#{gc_mark_var(bind[1])};"
end
def AmethystCTranslator__at_lambdas_ecda(bind)
@lambdas=[] ;@rcallbacks={};@cbhash={}
end
def AmethystCTranslator__at_rulenam_f912(bind)
@rulename=bind[1]; Local.resetnumbering;resetlabels;@locls={}
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
def AmethystCTranslator__dq_Amethys_2ed8(bind)
"AmethystLambda.new(:#{bind[1]},self,bind)" 
end
def AmethystCTranslator__dq_VALUE_sp_c_8bbf(bind)
"VALUE cls_#{src.name};\n" 
end
def AmethystCTranslator__dq__at__sh__le_bind_3d2b(bind)
"@#{bind[1]}"

end
def AmethystCTranslator__dq__sh__le__at_gram_5de9(bind)
"#{@grammar}_#{@rulename}_#{label("lambda")}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__3bec(bind)
"#{bind[1]} arg#{bind[2]-1}=it;"
end
def AmethystCTranslator__dq__sh__le_bind_lb__9630(bind)
"#{bind[1]}_#{bind[2]}"
end
def AmethystCTranslator__dq__sh__le_bind_lb__9cfd(bind)
"#{bind[1]} #{bset(src.name,"it")};\n" 
end
def AmethystCTranslator__dq__sh__le_src_dot_n_9acf(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def AmethystCTranslator__dq_class_sp__sh__0b62(bind)
"class #{@grammar} < #{@parent}\n"
end
def AmethystCTranslator__dq_cstruct_ff45(bind)
"cstruct #{bind[1]}=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   #{src.enter ?  "ptr->src=#{bget(src.var)}; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);  ptr->ary2=ary;  ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}" : 
                    "ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=#{bget(src.var)};ptr->len=1;"
                   }
                   #{bind[2]}
                   goto #{bind[3]};
                   #{bind[4]}: *ptr=#{bind[1]}; goto #{@faillabel};
                   #{bind[3]}: *ptr=#{bind[1]};
                " 
end
def AmethystCTranslator__dq_def_sp__sh__le_b_b73d(bind)
"def #{bind[1]}(bind)\n#{bind[2]}\nend\n"
end
def AmethystCTranslator__dq_goto_sp__sh__le__f772(bind)
"goto #{@faillabel};"
end
def AmethystCTranslator__dq_if_lp_ptr_mi__033b(bind)
"if(ptr->pos+#{bind[1]}>=ptr->len) goto #{@faillabel};"

end
def AmethystCTranslator__dq_if_sp__lp__sh__le_a_0233(bind)
"if (#{ary=bind[1].split("");map_index(ary){|i| "ame_curstr2(ptr)[#{i}]==#{Lattice_Char.new.cchar(ary[i])}" }*"&&" })  ptr->pos+=#{bind[1].size}; else goto #{@faillabel};"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_0a35(bind)
"int #{bind[1]}=ptr->pos;\n #{bind[2]} x=1; goto #{bind[3]};  #{bind[4]}: x=0; #{bind[3]}: it=Qnil; ptr->pos=#{bind[1]}; if (x==0) goto #{@faillabel};"
end
def AmethystCTranslator__dq_int_sp__sh__le_b_0b60(bind)
"int #{bind[1]}=ptr->pos;int #{@cutlabel}=0;\n#{bind[2]}_#{bind[3]}:;"
end
def AmethystCTranslator__dq_it_eq_Qnil_8464(bind)
"it=Qnil;if (ptr->pos<ptr->len) goto #{@faillabel};"
end
def AmethystCTranslator__dq_it_eq__sh__le_bg_281f(bind)
"it=#{bget(src)};" 
end
def AmethystCTranslator__dq_switch_lp__f722(bind)
"switch(FIX2LONG(rb_hash_aref(#{bind[1]},rb_obj_class(ame_curobj2(ptr))))){"
end
def AmethystCTranslator__dq_switchh_f207(bind)
"switchhash_#{@grammar}_#{$classlabels[@grammar]+=1}"
end
def AmethystCTranslator__lb_bind_lb_1_rb__8fa4(bind)
[bind[1],bind[2],bind[3]]

end
def AmethystCTranslator__lp_bind_lb_1_rb__a948(bind)
(bind[1].is_a? String ) || FAIL
end
def AmethystCTranslator__lp_bind_lb_1_rb__d1fd(bind)
(bind[1]=="self") ? "src" : "src.#{bind[1]}#{bind[2]!="" ? "(#{bind[2]})":""}"

end
def AmethystCTranslator_addcallb_0461(bind)
addcallback(src.pred ? ["(",bind[1],") || FAIL"] : bind[1])
end
def AmethystCTranslator_addcallb_2cf7(bind)
addcallback2(bind[1])
end
def AmethystCTranslator_ar_eq__ti_src_dot__efea(bind)
ar=*src.ccode; 
                   @header<<ar[0] if ar[0]
                   @init<<ar[1] if ar[1]
                   "it=#{ar[2]};"
end
def AmethystCTranslator_bind_lb_1_rb_(bind)
bind[1]

end
def AmethystCTranslator_bind_lb_1_rb__dot__1364(bind)
bind[1].ary.each{|al| bind[2]+="next h[k]=#{bind[3]} if k<=#{al}\\n";bind[4]+="case #{bind[3]}/*#{al}*/:";bind[3]+=1}
end
def AmethystCTranslator_bind_lb_1_rb__eq__7d1a(bind)
bind[1]="int #{@stoplabel}=0; while(!#{@stoplabel}){ #{bind[2]} } "
									@stops=bind[3]; @stoplabel=bind[4]
									bind[1]
								
end
def AmethystCTranslator_bind_lb_1_rb__lt__98f3(bind)
bind[1]<<bind[2][0];bind[3]<<bind[2][1];bind[4]<<bind[2][2]
end
def AmethystCTranslator_bind_lb_1_rb__lt__acb7(bind)
bind[1]<<@defs*"\n";bind[1]<<"\n"
end
def AmethystCTranslator_bind_lb_1_rb__lt__f2f5(bind)
bind[1]<<@header.uniq.sort*"\n"+"\n"
							bind[1]<<"\n#include \"../lib/c/memo.c\"\n memo_struct *mem;VALUE memo_val;" if CurrentParser[:memoize]
							bind[1]<<"VALUE profile_report(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr); if(ptr->mem){#{map_index(CurrentParser[:memoize]){|i| "printf(\"#{CurrentParser[:memoize][i]} hit: %i miss: %i\\n\",((memo_struct *)ptr->mem)->hits[#{113+2*i}],((memo_struct *)ptr->mem)->miss[#{113+2*i}]);"}*""}}return Qnil;}" if CurrentParser[:memoize]
							@init<<"rb_define_method(cls_AmethystParser,\"profile_report\",profile_report,0);" if CurrentParser[:memoize]
              bind[1]<<bind[2].sort*"\n"
              bind[1]<<@lambdas*"\n"
              bind[3]="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{@parent}\"))); 
                    failobj=rb_eval_string(\"FAIL\");
                    #{@init.uniq.sort*"\n"}
                    #{@defmethods.sort*"\n" }
                   "
              [bind[1],bind[3],bind[4]] 
end
def AmethystCTranslator_bind_lb_1_rb__pl__1b5e(bind)
bind[1]+=bind[2]*""
end
def AmethystCTranslator_bind_lb_1_rb__pl__1dcb(bind)
bind[1]+="; #{bind[2]} break;\n"
end
def AmethystCTranslator_bind_lb_1_rb__pl__22c0(bind)
bind[1]+="#{bind[2]}_#{bind[3]}: ptr->pos=#{bind[4]};#{@cuts ? (@cuts=nil;"if (#{@cutlabel}) goto #{@faillabel};"): ""}"
end
def AmethystCTranslator_bind_lb_1_rb__pl__252c(bind)
bind[1]+=bind[2].cases() + " #{bind[3]} break;\n"
end
def AmethystCTranslator_bind_lb_1_rb__pl__4da1(bind)
bind[1]+="#{bind[2]}\n;goto #{bind[3]};\n"
end
def AmethystCTranslator_bind_lb_1_rb__pl__4db9(bind)
bind[1]+"}"
end
def AmethystCTranslator_bind_lb_1_rb__pl__891b(bind)
bind[1]+=1
end
def AmethystCTranslator_bind_lb_1_rb__pl__916b(bind)
bind[1]+="\nend"; bind[1]
end
def AmethystCTranslator_bind_lb_1_rb__ti__cfcb(bind)
bind[1]*""
end
def AmethystCTranslator_h_eq__dq_VALUE_3d5e(bind)
h="VALUE #{bind[1]}(VALUE self,VALUE bind)"
                 @header<<h+";"
                 @defmethods<<"rb_define_method(cls_#{@grammar},\"#{bind[1]}\",#{bind[1]},1);"
                 @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/ cstruct *ptr; int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[2]}\nreturn it;\nfail: return failobj; }" 
end
def AmethystCTranslator_h_eq__dq_VALUE_ffcc(bind)
h="VALUE #{@grammar}_#{bind[1]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
            @header<<h+";"
            @defmethods<< "rb_define_method(cls_#{@grammar},\"#{src.name}\",#{@grammar}_#{src.name},#{src.args.size});"
						bind[2]=h+"{VALUE vals[#{src.args.size}]; VALUE it #{@locls.map{|k,v| ",_#{k}"}*""};VALUE bind2=bind_new2(16); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);"
bind[2]+="if (ptr->mem==NULL){ptr->mem=memo_init();ptr->memgc=Data_Wrap_Struct(cls_AmethystParser,memo_mark,memo_free,ptr->mem);}" if CurrentParser[:memoize]&&CurrentParser[:memoize].include?(bind[1])
bind[2]+="int oldpos=ptr->pos;if (memo_pos(ptr->mem,#{@memo_no=(@memo_no||111)+2},ptr->src,ptr->pos)!=-1) {it=memo_value(ptr->mem,#{@memo_no},ptr->src,ptr->pos);ptr->pos=memo_pos(ptr->mem,#{@memo_no},ptr->src,ptr->pos);return it;}" if CurrentParser[:memoize]&&CurrentParser[:memoize].include?(bind[1])
bind[2]+="#{bind[3]}\n" 
if CurrentParser[:memoize]&&CurrentParser[:memoize].include?(bind[1])
bind[2]+="memo_add(ptr->mem,#{@memo_no},ptr->src,oldpos,it,ptr->pos); return it;\nfail: memo_add(ptr->mem,#{@memo_no},ptr->src,oldpos,failobj,ptr->pos); return failobj; }" 
else
bind[2]+="return it;\nfail: return failobj;}"
end
bind[2]

end
def AmethystCTranslator_label_lp__dq_a_f49c(bind)
label("accept")
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
def AmethystCTranslator_r_eq__dq__sp__sh__le_bi_10a8(bind)
r=" #{bind[1]*""} it=#{callrule(bind[2],bind[3])};"; cant_fail?(bind[4]) ? r : "#{r} FAILTEST(#{@faillabel});"

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
'782e58ce8fbeedb030b83501a9b8736e'
end
def ctranslator2_source_hash
'13d271fe8d1e49663adc22fcaebde61f'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'ccdebcbac04fd81b7f9bb126393e1e3e'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/ctranslator2_c"
