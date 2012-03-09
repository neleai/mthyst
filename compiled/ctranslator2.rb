class Gram
  def memo_no
    if !@memo_no
      if @name=="Amethyst"
        @memo_no=111
      else
        @memo_no=Compiler.grammars[parent].memo_no+2
      end
    else
      @memo_no
    end
  end
  def memo_inc
    @memo_no=memo_no+2
  end
end

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
		return "_#{s}"
  end
  def bset(s,e)
    cm=s[0]
    s=desc(s)
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
  def resetlabels
    @labels=Hash.new(0)
  end
  def label(s)
    @labels[s]+=1
    "#{s}#{@labels[s]}"
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
  def failwhen(cond)
    "if (#{cond}){it=failobj;goto #{@faillabel};}"
  end
end
def gc_mark_var(v)
	"rb_global_variable(&#{v});"
end
$classlabels=Hash.new(0)
class AmethystCTranslator < Amethyst

def __at__contex_160a(bind)
@_context_arguments||={};bind[1]=@_context_arguments.dup
end
def __at__contex_d6d5(bind)
@_context_arguments=bind[1]
end
def __at_bindno_eq__e294(bind)
@bindno=0;@binds={}
end
def __at_binds_dot_m_9a36(bind)
@binds.map{|k,v| "bind_aset(bind2,#{v},#{bget(k)});"}*"" + "it=#{rbcall(bind[1],["bind2"])};"+@binds.map{|k,v|"#{bset(k,"bind_aget(bind2,#{v})")};"}*"" +"#{src.pred ? "#{failwhen("it==failobj")};" :"" }"
end
def __at_callbac_2d11(bind)
@callbacks.to_a.sort
end
def __at_callbac_e37c(bind)
@callbacks={}
end
def __at_cutlabe_7393(bind)
@cutlabel
end
def __at_cutlabe_7ebc(bind)
@cutlabel=bind[1];@cuts=bind[2];bind[3]+"#{failwhen(1)};\n #{bind[4]}:;\n"
end
def __at_cuts_7bbc(bind)
@cuts
end
def __at_cuts_eq_ni_f875(bind)
@cuts=nil;@cutlabel=label("cut")
end
def __at_cuts_eq_tr_13c6(bind)
@cuts=true;  @cutlabel ? "#{@cutlabel}=1;"  : ""
end
def __at_defs_eq__lb__rb__3b51(bind)
@defs=[];@defmethods=[];@profile_report=[]
end
def __at_faillab_1610(bind)
@faillabel
end
def __at_faillab_8142(bind)
@faillabel="fail"
end
def __at_faillab_e174(bind)
@faillabel=bind[1]; bind[2] 
end
def __at_faillab_e643(bind)
@faillabel=bind[1] 
end
def __at_header_eq__7aa9(bind)
@header=[]
end
def __at_header_lt__92e2(bind)
@header<< "VALUE #{bind[1]};"
end
def __at_init_eq__lb__rb__47da(bind)
@init=[]
end
def __at_init_sp__sp__lt__aac8(bind)
@init  <<"#{bind[1]}=rb_eval_string(\"Hash.new{|h,k|#{bind[2]}}\");#{gc_mark_var(bind[1])};"
end
def __at_lambdas_ecda(bind)
@lambdas=[] ;@rcallbacks={};@cbhash={}
end
def __at_stoplab_2ba4(bind)
@stoplabel
end
def __at_stoplab_a14e(bind)
@stoplabel=label("stop")
end
def __at_stops_e2b4(bind)
@stops
end
def __at_stops_eq_n_588d(bind)
@stops=nil
end
def __at_stops_eq_t_c6ab(bind)
@stops=true; @stoplabel? "#{@stoplabel}=1;" : ""
end
def __dq_Amethys_2ed8(bind)
"AmethystLambda.new(:#{bind[1]},self,bind)" 
end
def __dq_VALUE_sp_c_8bbf(bind)
"VALUE cls_#{src.name};\n" 
end
def __dq__at__sh__le_bind_3d2b(bind)
"@#{bind[1]}"

end
def __dq__sh__le_bind_lb__3bec(bind)
"#{bind[1]} arg#{bind[2]-1}=it;"
end
def __dq__sh__le_bind_lb__8a62(bind)
"#{bind[1][:grammar]}_#{bind[1][:rulename]}_#{label("lambda")}"
end
def __dq__sh__le_bind_lb__9630(bind)
"#{bind[1]}_#{bind[2]}"
end
def __dq__sh__le_bind_lb__9cfd(bind)
"#{bind[1]} #{bset(src.name,"it")};\n" 
end
def __dq__sh__le_failw_5360(bind)
"#{failwhen("1")}"
end
def __dq__sh__le_src_dot_n_9acf(bind)
"#{src.name}.create( {#{src.vars.size.times.map{|i| ":#{src.varnames[i]}=>#{rbbget(src.vars[i])}" }.sort*","} })"
end
def __dq_class_sp__sh__cf48(bind)
"class #{bind[1][:grammar]} < #{bind[1][:parent]}\n"
end
def __dq_cstruct_a3c5(bind)
"cstruct #{bind[1]}=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   #{src.enter ?  "ptr->src=#{bget(src.var)}; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0); else ary=rb_ary_new3(0);  ptr->ary2=ary;  ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}" : 
                    "ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=#{bget(src.var)};ptr->len=1;"
                   }
                   #{bind[2]}
                   goto #{bind[3]};
                   #{bind[4]}: *ptr=#{bind[1]};#{failwhen("1")}
                   #{bind[3]}: *ptr=#{bind[1]};
                " 
end
def __dq_def_sp__sh__le_b_b73d(bind)
"def #{bind[1]}(bind)\n#{bind[2]}\nend\n"
end
def __dq_if_lp_ptr_mi__19f0(bind)
"if(ptr->pos+#{bind[1]}>=ptr->len) #{failwhen("1")}"

end
def __dq_if_sp__lp__sh__le_a_1643(bind)
"if (#{ary=bind[1].split("");map_index(ary){|i| "ame_curstr2(ptr)[#{i}]==#{Lattice_Char.new.cchar(ary[i])}" }*"&&" })  ptr->pos+=#{bind[1].size}; else #{failwhen("1")}"
end
def __dq_int_sp__sh__le_b_0b60(bind)
"int #{bind[1]}=ptr->pos;int #{@cutlabel}=0;\n#{bind[2]}_#{bind[3]}:;"
end
def __dq_int_sp__sh__le_b_c039(bind)
"int #{bind[1]}=ptr->pos;\n #{bind[2]} x=1; goto #{bind[3]};  #{bind[4]}: x=0; #{bind[3]}: it=Qnil; ptr->pos=#{bind[1]}; #{failwhen("x==0")}"
end
def __dq_it_eq_Amet_82ce(bind)
"it=AmethystCore_append(self,#{bget(bind[1])},#{bget(bind[2])});"

end
def __dq_it_eq_Qnil_a6d5(bind)
"it=Qnil;#{failwhen("ptr->pos<ptr->len")}"
end
def __dq_it_eq__sh__le_bg_281f(bind)
"it=#{bget(src)};" 
end
def __dq_switch_lp__f722(bind)
"switch(FIX2LONG(rb_hash_aref(#{bind[1]},rb_obj_class(ame_curobj2(ptr))))){"
end
def __dq_switchh_698e(bind)
"switchhash_#{bind[1][:grammar]}_#{$classlabels[bind[1][:grammar]]+=1}"
end
def __lb_bind_lb_1_rb__8fa4(bind)
[bind[1],bind[2],bind[3]]

end
def __lp_Current_39be(bind)
(CurrentParser[:memoize] && ((CurrentParser[:memoize]==:all)||CurrentParser[:memoize].include?(bind[1]))) ? Memo[src.body] : src.body
end
def __lp_bind_lb_1_rb__a948(bind)
(bind[1].is_a? String ) || FAIL
end
def __lp_bind_lb_1_rb__d1fd(bind)
(bind[1]=="self") ? "src" : "src.#{bind[1]}#{bind[2]!="" ? "(#{bind[2]})":""}"

end
def __lp_bind_lb_1_rb__dbc9(bind)
(bind[1]=="_append(") || FAIL
end
def _addcallb_0461(bind)
addcallback(src.pred ? ["(",bind[1],") || FAIL"] : bind[1])
end
def _addcallb_2cf7(bind)
addcallback2(bind[1])
end
def _ar_eq__ti_src_dot__efea(bind)
ar=*src.ccode; 
                   @header<<ar[0] if ar[0]
                   @init<<ar[1] if ar[1]
                   "it=#{ar[2]};"
end
def _bind_lb_1_rb_(bind)
bind[1]

end
def _bind_lb_1_rb__dot__1364(bind)
bind[1].ary.each{|al| bind[2]+="next h[k]=#{bind[3]} if k<=#{al}\\n";bind[4]+="case #{bind[3]}/*#{al}*/:";bind[3]+=1}
end
def _bind_lb_1_rb__eq__7d1a(bind)
bind[1]="int #{@stoplabel}=0; while(!#{@stoplabel}){ #{bind[2]} } "
									@stops=bind[3]; @stoplabel=bind[4]
									bind[1]
								
end
def _bind_lb_1_rb__eq__83f5(bind)
bind[1]=""
                 if CurrentParser[:global_memo]
                   bind[1]+="if (ptr->mem==NULL){ptr->mem=mem_#{bind[2][:grammar]};}" 
                 else
                   bind[1]+="if (ptr->mem==NULL){ptr->mem=memo_init();ptr->memgc=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,ptr->mem);}"
                 end
                 memo_no=Compiler.grammars[bind[2][:grammar]].memo_inc
                 bind[1]+="time_struct time_old=memo_get(ptr->mem,#{memo_no},ptr->src,ptr->pos); if (time_old.pos!=-1) {ptr->pos=time_old.pos;return time_old.result;} int oldpos=ptr->pos;"
                 bind[1]+=bind[3]
                 bind[1]+="memo_fail:  memo_add(ptr->mem,#{memo_no},ptr->src,oldpos,it,ptr->pos,time_old); return it;\n"
                 @profile_report << "if(ptr->mem){fprintf(profile_report,\"memo #{bind[2][:grammar]}::#{bind[2][:rulename]}  hit: %i miss: %i ticks: %i\\n\",((memo_struct *)ptr->mem)->hits[#{memo_no}],((memo_struct *)ptr->mem)->miss[#{memo_no}],((memo_struct *)ptr->mem)->ticks[#{memo_no}]);((memo_struct *)ptr->mem)->hits[#{memo_no}]=0;((memo_struct *)ptr->mem)->miss[#{memo_no}]=0;((memo_struct *)ptr->mem)->ticks[#{memo_no}]=0;}"
                 bind[1]
end
def _bind_lb_1_rb__lb__230a(bind)
bind[1][:grammar]=src.name;bind[1][:parent]=src.parent
end
def _bind_lb_1_rb__lb__ff72(bind)
bind[1][:rulename]=bind[2]; Local.resetnumbering;resetlabels;@locls={}
end
def _bind_lb_1_rb__lt__8b76(bind)
bind[1]<<@header.uniq.sort*"\n"+"\n"
							bind[1]<<"\n memo_struct *mem_#{src.name}=NULL;VALUE memo_val_#{src.name};" if CurrentParser[:memoize]
							bind[1]<<"VALUE profile_report_#{src.name}(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr); #{@profile_report*""} return Qnil;}" 
							@init<<"rb_define_method(cls_#{src.name},\"profile_report\",profile_report_#{src.name},0);"
              @init<<"mem_#{src.name}=memo_init();memo_val_#{src.name}=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_#{src.name});rb_global_variable(&memo_val_#{src.name});" if CurrentParser[:global_memo]
              bind[1]<<bind[2].sort*"\n"
              bind[1]<<@lambdas*"\n"
              bind[3]="\n cls_#{src.name}=rb_define_class(\"#{src.name}\",rb_const_get(rb_cObject,rb_intern(\"#{bind[4][:parent]}\"))); 
                    failobj=rb_eval_string(\"FAIL\");
                    #{@init.uniq.sort*"\n"}
                    #{@defmethods.sort*"\n" }
                   "
              [bind[1],bind[3],bind[5]] 
end
def _bind_lb_1_rb__lt__98f3(bind)
bind[1]<<bind[2][0];bind[3]<<bind[2][1];bind[4]<<bind[2][2]
end
def _bind_lb_1_rb__lt__acb7(bind)
bind[1]<<@defs*"\n";bind[1]<<"\n"
end
def _bind_lb_1_rb__pl__1b5e(bind)
bind[1]+=bind[2]*""
end
def _bind_lb_1_rb__pl__1dcb(bind)
bind[1]+="; #{bind[2]} break;\n"
end
def _bind_lb_1_rb__pl__252c(bind)
bind[1]+=bind[2].cases() + " #{bind[3]} break;\n"
end
def _bind_lb_1_rb__pl__4da1(bind)
bind[1]+="#{bind[2]}\n;goto #{bind[3]};\n"
end
def _bind_lb_1_rb__pl__4db9(bind)
bind[1]+"}"
end
def _bind_lb_1_rb__pl__891b(bind)
bind[1]+=1
end
def _bind_lb_1_rb__pl__916b(bind)
bind[1]+="\nend"; bind[1]
end
def _bind_lb_1_rb__pl__9a26(bind)
bind[1]+="#{bind[2]}_#{bind[3]}: ptr->pos=#{bind[4]};#{@cuts ? (@cuts=nil;failwhen(@cutlabel)): ""}"
end
def _bind_lb_1_rb__ti__cfcb(bind)
bind[1]*""
end
def _h_eq__dq_VALUE_481e(bind)
h="VALUE #{bind[1]}(VALUE self,VALUE bind)"
                 @header<<h+";"
                 @defmethods<<"rb_define_method(cls_#{bind[2][:grammar]},\"#{bind[1]}\",#{bind[1]},1);"
                 @lambdas<< h+"{VALUE vals[0]; /*todo unify with rule and get args*/ cstruct *ptr; int x;VALUE it;VALUE arg0,arg1,arg2,arg3;\n#{bind[3]}\nreturn it;\nfail: return failobj; }" 
end
def _h_eq__dq_VALUE_c5fb(bind)
h="VALUE #{bind[1][:grammar]}_#{bind[2]}(VALUE self #{map_index(src.args){|i| ",VALUE a#{i}"}*""})" 
            @header<<h+";"
            @defmethods<< "rb_define_method(cls_#{bind[1][:grammar]},\"#{src.name}\",#{bind[1][:grammar]}_#{src.name},#{src.args.size});"
						bind[3]=h+"{VALUE vals[#{src.args.size}]; VALUE it #{@locls.map{|k,v| ",_#{k}"}*""};VALUE bind2=bind_new2(16); #{map_index(src.args){|i| bset(src.args[i],"a#{i}")+";"}*""} int x;VALUE arg0,arg1,arg2,arg3; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);"
bind[3]+="#{bind[4]}\n" 
bind[3]+="fail: return it;\n}"
bind[3]

end
def _label_lp__dq_a_f49c(bind)
label("accept")
end
def _label_lp__dq_o_c187(bind)
label("oldpos")
end
def _label_lp__dq_r_95b2(bind)
label("reject")
end
def _r_eq__dq__sp__sh__le_bi_917c(bind)
r=" #{bind[1]*""} it=#{callrule(bind[2],bind[3])};"; cant_fail?(bind[4]) ? r : "#{r} #{failwhen("it==failobj")}"

end
def _raise_sp__dq_T_0ab1(bind)
raise "TODO"
end
def _rbbget_lp_s_68a8(bind)
rbbget(src)
end
def _src_25d9(bind)
src
end
def _src_dot_name_80f3(bind)
src.name
end
def _src_dot_rule_5acf(bind)
src.rules
end
def _src_dot_to_5e99(bind)
src.to
end

end


def ctranslator2_compiled_by
'6d5719e351f1569470663920f3ee1672'
end
def ctranslator2_source_hash
'6a7997a7bddf75d67506cfd906af613e'
end
def testversionctranslator2(r)
 raise "invalid version" if r!=ctranslator2_version
end
def ctranslator2_version
'909b9fa5aa70508f05b3d3b16cd85c0d'
end
require File.expand_path(File.dirname(__FILE__))+"/#{RUBY_VERSION}/ctranslator2_c"
