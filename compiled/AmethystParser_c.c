#include "cthyst.h"
#include "memo.c"
VALUE cls_AmethystParser;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_argsOpt(VALUE self );
VALUE AmethystParser_call(VALUE self );
VALUE AmethystParser_cases(VALUE self );
VALUE AmethystParser_className(VALUE self );
VALUE AmethystParser_collect(VALUE self ,VALUE a0);
VALUE AmethystParser_expression(VALUE self );
VALUE AmethystParser_file(VALUE self );
VALUE AmethystParser_grammar(VALUE self );
VALUE AmethystParser_host_expr(VALUE self );
VALUE AmethystParser_inline_host_expr(VALUE self );
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0);
VALUE AmethystParser_key(VALUE self );
VALUE AmethystParser_lambda(VALUE self );
VALUE AmethystParser_name(VALUE self );
VALUE AmethystParser_nr(VALUE self );
VALUE AmethystParser_postfixed(VALUE self );
VALUE AmethystParser_prefixed(VALUE self );
VALUE AmethystParser_procargs(VALUE self );
VALUE AmethystParser_procargs2(VALUE self );
VALUE AmethystParser_rubyarg(VALUE self );
VALUE AmethystParser_rule(VALUE self );
VALUE AmethystParser_ruleargs(VALUE self );
VALUE AmethystParser_sequence(VALUE self );
VALUE AmethystParser_string_like(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_term(VALUE self );
VALUE Amethyst__(VALUE self );
VALUE Amethyst_line(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE switchhash_AmethystParser_1;
VALUE switchhash_AmethystParser_2;
static VALUE s_Amethyst_fe41;
static VALUE s__at__518e;
static VALUE s__bs__bs__7f81;
static VALUE s__bs__sh__le__a90f;
static VALUE s__co__853a;
static VALUE s__co__at__4bf0;
static VALUE s__d41d;
static VALUE s__dot__dot__58b9;
static VALUE s__dot__dot__dot__2f43;
static VALUE s__eq__43ec;
static VALUE s__gt__cedf;
static VALUE s__lb__8154;
static VALUE s__lb__rb__d751;
static VALUE s__le__f95b;
static VALUE s__lp__84c4;
static VALUE s__lt__524a;
static VALUE s__rb__0fbd;
static VALUE s__re__cbb1;
static VALUE s__rp__9371;
static VALUE s__ti__3389;
static VALUE sy_AmethystParser_Act_lb_Args_23b1;
static VALUE sy_AmethystParser_Act_lb_bind_7d0b;
static VALUE sy_AmethystParser_Apply_lb__dq_a_1437;
static VALUE sy_AmethystParser_Apply_lb__dq_c_a8b6;
static VALUE sy_AmethystParser_Apply_lb__dq_m_2ec1;
static VALUE sy_AmethystParser_Apply_lb__dq_r_269c;
static VALUE sy_AmethystParser_Apply_lb__dq_s_9322;
static VALUE sy_AmethystParser_Apply_lb__dq_t_e958;
static VALUE sy_AmethystParser_Apply_lb__lb_b_099b;
static VALUE sy_AmethystParser_Apply_lb_bi_9146;
static VALUE sy_AmethystParser_Args_lb__le__co_a_9abe;
static VALUE sy_AmethystParser_Bind_lb_loc_37df;
static VALUE sy_AmethystParser_Bind_lb_loc_5836;
static VALUE sy_AmethystParser_Comment_lb__ed6f;
static VALUE sy_AmethystParser_Contextu_32ad;
static VALUE sy_AmethystParser_Contextu_4e8d;
static VALUE sy_AmethystParser_Enter_AS_06e8;
static VALUE sy_AmethystParser_Enter_AS_3242;
static VALUE sy_AmethystParser_Global_lb_b_0216;
static VALUE sy_AmethystParser_Grammar_dot__a510;
static VALUE sy_AmethystParser_Key_lb_bind_5e9f;
static VALUE sy_AmethystParser_Lambda_lb_B_2c90;
static VALUE sy_AmethystParser_Lookahea_0946;
static VALUE sy_AmethystParser_Many_lb_bin_14d1;
static VALUE sy_AmethystParser_Or_AST_dot_c_19e2;
static VALUE sy_AmethystParser_Or_AST_lb_b_0657;
static VALUE sy_AmethystParser_Parenthe_261b;
static VALUE sy_AmethystParser_Pass_AST_6bd0;
static VALUE sy_AmethystParser_Pred_lb_bin_ae38;
static VALUE sy_AmethystParser_Result_lb__le__a3b4;
static VALUE sy_AmethystParser_Rule_dot_cre_113e;
static VALUE sy_AmethystParser_Seq_AST_dot__a126;
static VALUE sy_AmethystParser_Seq_AST_lb__1817;
static VALUE sy_AmethystParser_Seq_AST_lb__66a7;
static VALUE sy_AmethystParser_Strin_lb__lb__dq__b20e;
static VALUE sy_AmethystParser_Strin_lb__lb__qu__88c8;
static VALUE sy_AmethystParser__at_appends_b984;
static VALUE sy_AmethystParser__at_appends_d29d;
static VALUE sy_AmethystParser__at_ary_eq__lb__rb_;
static VALUE sy_AmethystParser__at_ary_ff69;
static VALUE sy_AmethystParser__at_ary_lt__lt_Ar_59e3;
static VALUE sy_AmethystParser__at_bnding_7d3c;
static VALUE sy_AmethystParser__at_locals_dot__bdc6;
static VALUE sy_AmethystParser__at_locals_eq__4fc1;
static VALUE sy_AmethystParser__at_tmp_lt__lt_bi_b81c;
static VALUE sy_AmethystParser__dq__le__dq__pl_bind_567e;
static VALUE sy_AmethystParser__lb__dq__lp__dq_;
static VALUE sy_AmethystParser__lb_bind_lb_1_rb__6281;
static VALUE sy_AmethystParser__lp_bind_lb_1_rb__a724;
static VALUE sy_AmethystParser_a_eq_autova_57aa;
static VALUE sy_AmethystParser_bind_lb_1_rb_;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__4688;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__7b93;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__e879;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__3c5b;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__4e2f;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__9a0b;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__a882;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__c77b;
static VALUE sy_AmethystParser_bind_lb_1_rb__lt__798b;
static VALUE sy_AmethystParser_bind_lb_1_rb__pl__b087;
static VALUE sy_AmethystParser_bind_lb_1_rb__sp__5934;
static VALUE sy_AmethystParser_local_lp_bi_196b;
static VALUE sy_AmethystParser_pos_5e0b;
static VALUE sy_AmethystParser_x_eq__dq_ameth_733c;

memo_struct *mem_AmethystParser=NULL;
VALUE memo_val_AmethystParser;
VALUE profile_report_AmethystParser(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if(ptr->mem) {
        fprintf(profile_report,"memo AmethystParser::rule  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[115],((memo_struct *)ptr->mem)->miss[115],((memo_struct *)ptr->mem)->ticks[115]);
        ((memo_struct *)ptr->mem)->hits[115]=0;
        ((memo_struct *)ptr->mem)->miss[115]=0;
        ((memo_struct *)ptr->mem)->ticks[115]=0;
    }
    if(ptr->mem) {
        fprintf(profile_report,"memo AmethystParser::name  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[117],((memo_struct *)ptr->mem)->miss[117],((memo_struct *)ptr->mem)->ticks[117]);
        ((memo_struct *)ptr->mem)->hits[117]=0;
        ((memo_struct *)ptr->mem)->miss[117]=0;
        ((memo_struct *)ptr->mem)->ticks[117]=0;
    }
    if(ptr->mem) {
        fprintf(profile_report,"memo AmethystParser::argsOpt  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[119],((memo_struct *)ptr->mem)->miss[119],((memo_struct *)ptr->mem)->ticks[119]);
        ((memo_struct *)ptr->mem)->hits[119]=0;
        ((memo_struct *)ptr->mem)->miss[119]=0;
        ((memo_struct *)ptr->mem)->ticks[119]=0;
    }
    return Qnil;
}
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_o,_s,_autovar,_autovar_2,_c,_r,__result;
    VALUE bind2=bind_new2(16);
    _o=a0;;
    _c=a1;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_o;
    _s=it;;
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=Amethyst_spaces(self );
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=AmethystParser_rubyarg(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _autovar_2=it;;
        it=AmethystCore_append(self,_autovar,_autovar_2);
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
    }
    it=_c;
    _s=it;;
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=_autovar;
    _r=it;;
    bind_aset(bind2,1,_r);
    it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
    _r=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_c,_c_2,_o,_o_2,_s,_autovar,_autovar_2,_r,__result,_r_2,__result_2;
    VALUE bind2=bind_new2(16);
    _o=a0;;
    _c=a1;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_c;
    _c_2=it;;
    it=_o;
    _o_2=it;;
    it=_o_2;
    _s=it;;
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=Amethyst_spaces(self );
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=AmethystParser_rubyarg(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _autovar_2=it;;
        it=AmethystCore_append(self,_autovar,_autovar_2);
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
    }
    it=_c_2;
    _s=it;;
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=_autovar;
    _r=it;;
    bind_aset(bind2,1,_r);
    it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
    _r=bind_aget(bind2,1);;
    __result=it;;
    it=__result;
    _r_2=it;;
    bind_aset(bind2,1,_o);
    bind_aset(bind2,2,_r_2);
    bind_aset(bind2,3,_c);
    it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);
    _o=bind_aget(bind2,1);;
    _r_2=bind_aget(bind2,2);;
    _c=bind_aget(bind2,3);;
    __result_2=it;;

fail:
    return it;
}
VALUE AmethystParser_argsOpt(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_r,__result,_r_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if (ptr->mem==NULL) {
        ptr->mem=memo_init();
        ptr->memgc=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,ptr->mem);
    }
    time_struct time_old=memo_get(ptr->mem,119,ptr->src,ptr->pos);
    if (time_old.pos!=-1) {
        ptr->pos=time_old.pos;
        return time_old.result;
    }
    int oldpos=ptr->pos;
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... UC(8):
        ;
    case UC(11) ... UC(11):
        ;
    case UC(14) ... UC(31):
        ;
    case '!' ... UC(255):
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Qnil;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt1_2;
            }
            break;
        case '(' ... '(':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=Amethyst_spaces(self );
        it=rb_ary_new3(0);
        _autovar=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=AmethystParser_rubyarg(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept2:
            ;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt1_2;
            }
            break;
        case ')' ... ')':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=_autovar;
        _r=it;;
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _r_2=it;;
        bind_aset(bind2,1,_r_2);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__pl__b087,1,bind2);
        _r_2=bind_aget(bind2,1);;
        _autovar_3=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_3;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _autovar_4=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_4);
        it=AmethystParser_procargs(self );
        _autovar_5=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass2;
        }
        goto success2;
pass2:
        *ptr=oldpass2;
        if (1) {
            it=failobj;
            goto pass1;
        }
success2:
        *ptr=oldpass2;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        it=_autovar_5;
        _autovar_6=it;;

        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto alt1_2;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_6;
        __result_2=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_ary_new3(0);
        __result_2=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto memo_fail;
        };
accept1:
        ;
        break;
    case UC(9) ... UC(10):
        ;
    case UC(12) ... UC(13):
        ;
    case ' ' ... ' ':
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=Amethyst__(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_2;
        }
        cut4=1;
        if (1) {
            it=failobj;
            goto alt4_2;
        }
        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        if (cut4) {
            it=failobj;
            goto alt3_2;
        }
        it=Qnil;
        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto alt3_2;
        };
accept4:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt3_2;
            }
            break;
        case '(' ... '(':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=Amethyst_spaces(self );
        it=rb_ary_new3(0);
        _autovar=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=AmethystParser_rubyarg(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            stop2=1;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto alt3_2;
            };
accept5:
            ;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt3_2;
            }
            break;
        case ')' ... ')':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=_autovar;
        _r=it;;
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _r_2=it;;
        bind_aset(bind2,1,_r_2);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__pl__b087,1,bind2);
        _r_2=bind_aget(bind2,1);;
        _autovar_3=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_3;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _autovar_4=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_4);
        it=AmethystParser_procargs(self );
        _autovar_5=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass4;
        }
        goto success4;
pass4:
        *ptr=oldpass4;
        if (1) {
            it=failobj;
            goto pass3;
        }
success4:
        *ptr=oldpass4;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        it=_autovar_5;
        _autovar_6=it;;

        goto success3;
pass3:
        *ptr=oldpass3;
        if (1) {
            it=failobj;
            goto alt3_2;
        }
success3:
        *ptr=oldpass3;
        it=_autovar_6;
        __result_2=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=rb_ary_new3(0);
        __result_2=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto memo_fail;
        };
accept3:
        ;
        break;
    }
memo_fail:
    memo_add(ptr->mem,119,ptr->src,oldpos,it,ptr->pos,time_old);
    return it;

fail:
    return it;
}
VALUE AmethystParser_call(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_klas,_name,_arg,_autovar,__result,_autovar_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case 'A' ... 'Z':
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=AmethystParser_className(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _klas=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt1_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]==':')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt1_2;
            }
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt1_2;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            _name=it;;
            break;
        }
        it=AmethystParser_argsOpt(self );
        _arg=it;;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... '_':
            ;
        case 'a' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
            break;
        case '(' ... '(':
            ;
        case '`' ... '`':
            ;
            it=AmethystParser_lambda(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _autovar=it;;
            break;
        }
        it=AmethystCore_append(self,_arg,_autovar);
        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=Qnil;
        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_2;
        };
accept2:
        ;
        bind_aset(bind2,1,_klas);
        bind_aset(bind2,2,_name);
        bind_aset(bind2,3,_arg);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__lb_b_099b,1,bind2);
        _klas=bind_aget(bind2,1);;
        _name=bind_aget(bind2,2);;
        _arg=bind_aget(bind2,3);;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystParser_name(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        _name=it;;
        it=AmethystParser_argsOpt(self );
        _arg=it;;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... '_':
            ;
        case 'a' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt3_2;
            }
            break;
        case '(' ... '(':
            ;
        case '`' ... '`':
            ;
            it=AmethystParser_lambda(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_arg,_autovar_2);
        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=Qnil;
        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto alt1_3;
        };
accept3:
        ;
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_arg);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9146,1,bind2);
        _name=bind_aget(bind2,1);;
        _arg=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=AmethystParser_name(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        _name=it;;
        it=AmethystParser_argsOpt(self );
        _arg=it;;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... '_':
            ;
        case 'a' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt4_2;
            }
            break;
        case '(' ... '(':
            ;
        case '`' ... '`':
            ;
            it=AmethystParser_lambda(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_arg,_autovar_2);
        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=Qnil;
        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto fail;
        };
accept4:
        ;
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_arg);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9146,1,bind2);
        _name=bind_aget(bind2,1);;
        _arg=bind_aget(bind2,2);;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_cases(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_s,_x,_autovar,_autovar_2,__result,__result_2,_s_2,__result_3,_autovar_3,_autovar_4,__result_4,_autovar_5,_autovar_6,_it,_num,_clas;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... ',':
        ;
    case '.' ... '/':
        ;
    case ':' ... '@':
        ;
    case '[' ... UC(255):
        ;
        it=rb_obj_clone(s__lt__524a);
        _s=it;;
        it=_s;
        arg0=it;
        it=AmethystCore__seq(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        it=rb_ary_new3(0);
        _x=it;;
        int stop1=0;
        while(!stop1) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '[':
                ;
            case ']' ... UC(255):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '=':
                    ;
                case '?' ... UC(255):
                    ;
                    it=Qnil;
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto fail;
                    }
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case '>' ... '>':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    stop1=1;
                    break;
                }
                break;
            case UC(92) ... UC(92):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '=':
                    ;
                case '?' ... UC(255):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_2=it;;
                    it=AmethystCore_append(self,_x,_autovar_2);
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto fail;
                    }
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case '>' ... '>':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    stop1=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _x=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        __result_2=it;;
        it=__result_2;
        _s_2=it;;
        bind_aset(bind2,1,_s_2);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_269c,1,bind2);
        _s_2=bind_aget(bind2,1);;
        __result_3=it;;
        break;
    case '-' ... '-':
        ;
    case '0' ... '9':
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=rb_ary_new3(0);
        _autovar_3=it;;
        it=Amethyst_number(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        }
        _autovar_4=it;;
        it=AmethystCore_append(self,_autovar_3,_autovar_4);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
            break;
        case '.' ... '.':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto alt3_2;
            }
            it=rb_obj_clone(s__dot__dot__dot__2f43);
            __result_4=it;;
            it=__result_4;
            _autovar_5=it;;

            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt3_3;
            }
            it=rb_obj_clone(s__dot__dot__58b9);
            __result_4=it;;
            it=__result_4;
            _autovar_5=it;;

            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto alt2_2;
            };
accept3:
            ;
            break;
        }
        it=AmethystCore_append(self,_autovar_3,_autovar_5);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... ',':
            ;
        case '.' ... '/':
            ;
        case ':' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
            break;
        case '-' ... '-':
            ;
        case '0' ... '9':
            ;
            it=Amethyst_number(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _autovar_6=it;;
            break;
        }
        it=AmethystCore_append(self,_autovar_3,_autovar_6);
        it=_autovar_3;
        _it=it;;
        bind_aset(bind2,1,_it);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);
        _it=bind_aget(bind2,1);;
        _num=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=Amethyst_number(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        _num=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_2;
        };
accept2:
        ;
        bind_aset(bind2,1,_num);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_2ec1,1,bind2);
        _num=bind_aget(bind2,1);;
        __result_3=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s__lt__524a);
        _s=it;;
        it=_s;
        arg0=it;
        it=AmethystCore__seq(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        it=rb_ary_new3(0);
        _x=it;;
        int stop2=0;
        while(!stop2) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '[':
                ;
            case ']' ... UC(255):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '=':
                    ;
                case '?' ... UC(255):
                    ;
                    it=Qnil;
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt1_3;
                    }
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case '>' ... '>':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    cut1=1;
                    stop2=1;
                    break;
                }
                break;
            case UC(92) ... UC(92):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '=':
                    ;
                case '?' ... UC(255):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_2=it;;
                    it=AmethystCore_append(self,_x,_autovar_2);
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt1_3;
                    }
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case '>' ... '>':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    cut1=1;
                    stop2=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _x=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        __result_2=it;;
        it=__result_2;
        _s_2=it;;
        bind_aset(bind2,1,_s_2);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_269c,1,bind2);
        _s_2=bind_aget(bind2,1);;
        __result_3=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (cut1) {
            it=failobj;
            goto fail;
        }
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    case 'A' ... 'Z':
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=AmethystParser_className(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_2;
        }
        _clas=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            it=Qnil;
            break;
        case ':' ... ':':
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]==':')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt5_2;
            }
            cut5=1;
            if (1) {
                it=failobj;
                goto alt5_2;
            }
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            if (cut5) {
                it=failobj;
                goto alt4_2;
            }
            it=Qnil;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto alt4_2;
            };
accept5:
            ;
            break;
        }
        bind_aset(bind2,1,_clas);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_c_a8b6,1,bind2);
        _clas=bind_aget(bind2,1);;
        __result_3=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=rb_obj_clone(s__lt__524a);
        _s=it;;
        it=_s;
        arg0=it;
        it=AmethystCore__seq(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto alt4_3;
        }
        it=rb_ary_new3(0);
        _x=it;;
        int stop3=0;
        while(!stop3) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '[':
                ;
            case ']' ... UC(255):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '=':
                    ;
                case '?' ... UC(255):
                    ;
                    it=Qnil;
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt4_3;
                    }
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case '>' ... '>':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    cut4=1;
                    stop3=1;
                    break;
                }
                break;
            case UC(92) ... UC(92):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '=':
                    ;
                case '?' ... UC(255):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_2=it;;
                    it=AmethystCore_append(self,_x,_autovar_2);
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt4_3;
                    }
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case '>' ... '>':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    cut4=1;
                    stop3=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _x=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        __result_2=it;;
        it=__result_2;
        _s_2=it;;
        bind_aset(bind2,1,_s_2);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_269c,1,bind2);
        _s_2=bind_aget(bind2,1);;
        __result_3=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        if (cut4) {
            it=failobj;
            goto fail;
        }
        if (1) {
            it=failobj;
            goto fail;
        };
accept4:
        ;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_className(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_it,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case 'A' ... 'Z':
        ;
        it=rb_ary_new3(0);
        _autovar=it;;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _autovar_2=it;;
        it=AmethystCore_append(self,_autovar,_autovar_2);
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case ':' ... '@':
                ;
            case '[' ... '^':
                ;
            case '`' ... '`':
                ;
            case '{' ... UC(255):
                ;
                stop1=1;
                break;
            case '0' ... '9':
                ;
            case 'A' ... 'Z':
                ;
            case '_' ... '_':
                ;
            case 'a' ... 'z':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_4=it;;
                it=AmethystCore_append(self,_autovar_3,_autovar_4);
                break;
            }
        }
        it=_autovar_3;
        _autovar_5=it;;
        it=AmethystCore_append(self,_autovar,_autovar_5);
        it=_autovar;
        _it=it;;
        bind_aset(bind2,1,_it);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);
        _it=bind_aget(bind2,1);;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_collect(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_ors,__result;
    VALUE bind2=bind_new2(16);
    _ors=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_ors);
    it=rb_funcall(self,sy_AmethystParser_a_eq_autova_57aa,1,bind2);
    _ors=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE AmethystParser_expression(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_f,_autovar,_autovar_2,_autovar_3,_autovar_4,__result,_ary,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _f=it;;
    it=AmethystParser_sequence(self );
    _autovar=it;;
    it=AmethystCore_append(self,_f,_autovar);
    it=rb_ary_new3(0);
    _autovar_2=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Amethyst_spaces(self );
        if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1;
        else if (1) {
            it=failobj;
            goto alt1_2;
        }
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        if (ame_curstr2(ptr)[0]==')')  ptr->pos+=1;
        else if (1) {
            it=failobj;
            goto alt2_2;
        }
        cut2=1;
        if (1) {
            it=failobj;
            goto alt2_2;
        }
        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        if (cut2) {
            it=failobj;
            goto alt1_2;
        }
        it=Qnil;
        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_2;
        };
accept2:
        ;
        it=AmethystParser_sequence(self );
        _autovar_3=it;;
        it=AmethystCore_append(self,_autovar_2,_autovar_3);
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
    }
    it=_autovar_2;
    _autovar_4=it;;
    it=AmethystCore_append(self,_f,_autovar_4);
    bind_aset(bind2,1,_f);
    it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
    _f=bind_aget(bind2,1);;
    __result=it;;
    it=__result;
    _ary=it;;
    bind_aset(bind2,1,_ary);
    it=rb_funcall(self,sy_AmethystParser_Or_AST_dot_c_19e2,1,bind2);
    _ary=bind_aget(bind2,1);;
    __result_2=it;;

fail:
    return it;
}
VALUE AmethystParser_file(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_oldpos,_autovar_3,_autovar_4,_g,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... '_':
            ;
        case 'b' ... UC(255):
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=rb_funcall(self,sy_AmethystParser_pos_5e0b,1,bind2);
            it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);
            if (1) {
                it=failobj;
                goto alt2_2;
            }
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=Qnil;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... UC(39):
                ;
            case ')' ... UC(255):
                ;
                it=Qnil;
                break;
            case '(' ... '(':
                ;
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1;
                else if (1) {
                    it=failobj;
                    goto alt3_2;
                }
                cut3=1;
                if (1) {
                    it=failobj;
                    goto alt3_2;
                }
                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                if (cut3) {
                    it=failobj;
                    goto alt2_3;
                }
                it=Qnil;
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                if (1) {
                    it=failobj;
                    goto alt2_3;
                };
accept3:
                ;
                break;
            }
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            _autovar_2=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept2:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case '(' ... '(':
            ;
        case '`' ... '`':
            ;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=rb_funcall(self,sy_AmethystParser_pos_5e0b,1,bind2);
            _oldpos=it;;
            it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);
            it=AmethystParser_lambda(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            bind_aset(bind2,1,_oldpos);
            it=rb_funcall(self,sy_AmethystParser_x_eq__dq_ameth_733c,1,bind2);
            _oldpos=bind_aget(bind2,1);;
            _autovar_3=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_3;
            ptr->len=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass1;
            }
            _autovar_4=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_4);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass2;
                }
                break;
            case 'a' ... 'a':
                ;
                it=AmethystParser_grammar(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass2;
                }
                _g=it;;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass2;
                }
                break;
            }
            goto success2;
pass2:
            *ptr=oldpass2;
            if (1) {
                it=failobj;
                goto pass1;
            }
success2:
            *ptr=oldpass2;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass1;
            }
            goto success1;
pass1:
            *ptr=oldpass1;
            if (1) {
                it=failobj;
                goto alt5_2;
            }
success1:
            *ptr=oldpass1;
            bind_aset(bind2,1,_g);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__4688,1,bind2);
            _g=bind_aget(bind2,1);;
            bind_aset(bind2,1,_g);
            it=rb_funcall(self,sy_AmethystParser__lb__dq__lp__dq_,1,bind2);
            _g=bind_aget(bind2,1);;
            _autovar_2=it;;

            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=Qnil;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... UC(39):
                ;
            case ')' ... UC(255):
                ;
                it=Qnil;
                break;
            case '(' ... '(':
                ;
                int oldpos6=ptr->pos;
                int cut6=0;
alt6_1:
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1;
                else if (1) {
                    it=failobj;
                    goto alt6_2;
                }
                cut6=1;
                if (1) {
                    it=failobj;
                    goto alt6_2;
                }
                ;
                goto accept6;
alt6_2:
                ptr->pos=oldpos6;
                if (cut6) {
                    it=failobj;
                    goto alt5_3;
                }
                it=Qnil;
                ;
                goto accept6;
alt6_3:
                ptr->pos=oldpos6;
                if (1) {
                    it=failobj;
                    goto alt5_3;
                };
accept6:
                ;
                break;
            }
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_3;
            }
            _autovar_2=it;;

            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto alt4_2;
            };
accept5:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            stop1=1;
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto fail;
            };
accept4:
            ;
            break;
        case 'a' ... 'a':
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=AmethystParser_grammar(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_2;
            }
            _autovar_2=it;;

            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            it=rb_funcall(self,sy_AmethystParser_pos_5e0b,1,bind2);
            it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);
            if (1) {
                it=failobj;
                goto alt8_3;
            }
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7;
            else if (1) {
                it=failobj;
                goto alt9_2;
            }
            cut9=1;
            if (1) {
                it=failobj;
                goto alt9_2;
            }
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            if (cut9) {
                it=failobj;
                goto alt8_4;
            }
            it=Qnil;
            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            if (1) {
                it=failobj;
                goto alt8_4;
            };
accept9:
            ;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... UC(39):
                ;
            case ')' ... UC(255):
                ;
                it=Qnil;
                break;
            case '(' ... '(':
                ;
                int oldpos10=ptr->pos;
                int cut10=0;
alt10_1:
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1;
                else if (1) {
                    it=failobj;
                    goto alt10_2;
                }
                cut10=1;
                if (1) {
                    it=failobj;
                    goto alt10_2;
                }
                ;
                goto accept10;
alt10_2:
                ptr->pos=oldpos10;
                if (cut10) {
                    it=failobj;
                    goto alt8_4;
                }
                it=Qnil;
                ;
                goto accept10;
alt10_3:
                ptr->pos=oldpos10;
                if (1) {
                    it=failobj;
                    goto alt8_4;
                };
accept10:
                ;
                break;
            }
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_4;
            }
            _autovar_2=it;;

            ;
            goto accept8;
alt8_4:
            ptr->pos=oldpos8;
            if (1) {
                it=failobj;
                goto alt7_2;
            };
accept8:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            stop1=1;
            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto fail;
            };
accept7:
            ;
            break;
        }
    }
    it=_autovar;
    __result=it;;

fail:
    return it;
}
VALUE AmethystParser_grammar(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_name,_parent,_autovar,_autovar_2,_rules,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '`':
        ;
    case 'b' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case 'a' ... 'a':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7;
        else if (1) {
            it=failobj;
            goto fail;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '^':
            ;
        case '`' ... UC(255):
            ;
            it=Qnil;
            break;
        case '_' ... '_':
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='o'&&ame_curstr2(ptr)[2]=='d'&&ame_curstr2(ptr)[3]=='u'&&ame_curstr2(ptr)[4]=='l'&&ame_curstr2(ptr)[5]=='e')  ptr->pos+=6;
            else if (1) {
                it=failobj;
                goto alt1_2;
            }
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            it=Qnil;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        }
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto fail;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto fail;
            }
            _name=it;;
            break;
        }
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... ';':
            ;
        case '=' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
            break;
        case '<' ... '<':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _parent=it;;
            break;
        }
        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=rb_obj_clone(s_Amethyst_fe41);
        _parent=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept2:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'z':
            ;
        case '|' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto fail;
            }
            break;
        case '{' ... '{':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=rb_ary_new3(0);
        _autovar=it;;
        int stop1=0;
        while(!stop1) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... UC(8):
                ;
            case UC(11) ... UC(11):
                ;
            case UC(14) ... UC(31):
                ;
            case '!' ... '@':
                ;
            case '[' ... '^':
                ;
            case '`' ... '`':
                ;
            case '{' ... UC(255):
                ;
                stop1=1;
                break;
            case UC(9) ... UC(10):
                ;
            case UC(12) ... UC(13):
                ;
            case ' ' ... ' ':
                ;
            case 'A' ... 'Z':
                ;
            case '_' ... '_':
                ;
            case 'a' ... 'z':
                ;
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                it=AmethystParser_rule(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt3_2;
                }
                _autovar_2=it;;
                it=AmethystCore_append(self,_autovar,_autovar_2);
                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                stop1=1;
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                if (1) {
                    it=failobj;
                    goto fail;
                };
accept3:
                ;
                break;
            }
        }
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '|':
            ;
        case '~' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto fail;
            }
            break;
        case '}' ... '}':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=_autovar;
        _rules=it;;
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_parent);
        bind_aset(bind2,3,_rules);
        it=rb_funcall(self,sy_AmethystParser_Grammar_dot__a510,1,bind2);
        _name=bind_aget(bind2,1);;
        _parent=bind_aget(bind2,2);;
        _rules=bind_aget(bind2,3);;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_host_expr(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_s,_autovar,_autovar_2,_autovar_3,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... ',':
        ;
    case '.' ... 'z':
        ;
    case '|' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case '{' ... '{':
        ;
        it=AmethystParser_inline_host_expr(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        __result=it;;
        break;
    case '-' ... '-':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1;
        else if (1) {
            it=failobj;
            goto fail;
        }
        it=Amethyst_line(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy_AmethystParser__dq__le__dq__pl_bind_567e,1,bind2);
        _s=bind_aget(bind2,1);;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_2);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'z':
            ;
        case '|' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass2;
            }
            break;
        case '{' ... '{':
            ;
            it=AmethystParser_inline_host_expr(self );
            if (it==failobj) {
                it=failobj;
                goto pass2;
            }
            _autovar_3=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass2;
            }
            break;
        }
        goto success2;
pass2:
        *ptr=oldpass2;
        if (1) {
            it=failobj;
            goto pass1;
        }
success2:
        *ptr=oldpass2;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        it=_autovar_3;
        _autovar_4=it;;

        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_4;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_inline_host_expr(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_r,__result,_r_2,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... 'z':
        ;
    case '|' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case '{' ... '{':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=Amethyst_spaces(self );
        it=rb_ary_new3(0);
        _autovar=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=AmethystParser_rubyarg(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '|':
            ;
        case '~' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto fail;
            }
            break;
        case '}' ... '}':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=_autovar;
        _r=it;;
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _r_2=it;;
        bind_aset(bind2,1,_r_2);
        it=rb_funcall(self,sy_AmethystParser_Act_lb_Args_23b1,1,bind2);
        _r_2=bind_aget(bind2,1);;
        __result_2=it;;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_x,_e,_s,_autovar,_autovar_2,_autovar_3,_r,__result,_r_2,_o,_c,__result_2,_autovar_4,_autovar_5,__result_3;
    VALUE bind2=bind_new2(16);
    _e=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _x=it;;
    int stop1=0;
    while(!stop1) {
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(34):
            ;
        case '$' ... '[':
            ;
        case ']' ... UC(255):
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            cut1=1;
            stop1=1;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            if (cut1) {
                it=failobj;
                goto fail;
            }
            it=Qnil;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_3;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case '#' ... '#':
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            cut2=1;
            stop1=1;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            if (cut2) {
                it=failobj;
                goto fail;
            }
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='{')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt2_3;
            }
            it=Amethyst_spaces(self );
            it=rb_ary_new3(0);
            _autovar_2=it;;
            int stop2=0;
            while(!stop2) {
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                it=AmethystParser_rubyarg(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt3_2;
                }
                _autovar_3=it;;
                it=AmethystCore_append(self,_autovar_2,_autovar_3);
                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                stop2=1;
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                if (1) {
                    it=failobj;
                    goto alt2_3;
                };
accept3:
                ;
            }
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '|':
                ;
            case '~' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt2_3;
                }
                break;
            case '}' ... '}':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                break;
            }
            it=_autovar_2;
            _r=it;;
            bind_aset(bind2,1,_r);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
            _r=bind_aget(bind2,1);;
            __result=it;;
            it=__result;
            _r_2=it;;
            it=rb_obj_clone(s__bs__sh__le__a90f);
            _o=it;;
            it=rb_obj_clone(s__re__cbb1);
            _c=it;;
            bind_aset(bind2,1,_o);
            bind_aset(bind2,2,_r_2);
            bind_aset(bind2,3,_c);
            it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);
            _o=bind_aget(bind2,1);;
            _r_2=bind_aget(bind2,2);;
            _c=bind_aget(bind2,3);;
            __result_2=it;;
            it=__result_2;
            _autovar_4=it;;
            it=AmethystCore_append(self,_x,_autovar_4);
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            it=Qnil;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_4;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept2;
alt2_4:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto fail;
            };
accept2:
            ;
            break;
        case UC(92) ... UC(92):
            ;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
            cut4=1;
            stop1=1;
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            if (cut4) {
                it=failobj;
                goto fail;
            }
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__bs__bs__7f81);
            _autovar_5=it;;
            it=AmethystCore_append(self,_x,_autovar_5);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_3;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto fail;
            };
accept4:
            ;
            break;
        }
    }
    bind_aset(bind2,1,_x);
    it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
    _x=bind_aget(bind2,1);;
    __result_3=it;;

fail:
    return it;
}
VALUE AmethystParser_key(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_name,__result,_arg;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '?':
        ;
    case 'A' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case '@' ... '@':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt1_2;
            }
            break;
        case 'A' ... 'Z':
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=AmethystParser_className(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _name=it;;
            bind_aset(bind2,1,_name);
            it=rb_funcall(self,sy_AmethystParser_Result_lb__le__a3b4,1,bind2);
            _name=bind_aget(bind2,1);;
            __result=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            _name=it;;
            it=AmethystParser_argsOpt(self );
            _arg=it;;
            bind_aset(bind2,1,_name);
            bind_aset(bind2,2,_arg);
            it=rb_funcall(self,sy_AmethystParser_Key_lb_bind_5e9f,1,bind2);
            _name=bind_aget(bind2,1);;
            _arg=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept2:
            ;
            break;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            _name=it;;
            it=AmethystParser_argsOpt(self );
            _arg=it;;
            bind_aset(bind2,1,_name);
            bind_aset(bind2,2,_arg);
            it=rb_funcall(self,sy_AmethystParser_Key_lb_bind_5e9f,1,bind2);
            _name=bind_aget(bind2,1);;
            _arg=bind_aget(bind2,2);;
            __result=it;;
            break;
        }
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
        else if (1) {
            it=failobj;
            goto alt1_3;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt1_3;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_3;
            }
            _name=it;;
            break;
        }
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_AmethystParser_Global_lb_b_0216,1,bind2);
        _name=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1;
        else if (1) {
            it=failobj;
            goto alt1_4;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt1_4;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_4;
            }
            _name=it;;
            break;
        }
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_AmethystParser_Contextu_4e8d,1,bind2);
        _name=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        if (ame_curstr2(ptr)[0]=='<')  ptr->pos+=1;
        else if (1) {
            it=failobj;
            goto alt1_5;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt1_5;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_5;
            }
            _name=it;;
            break;
        }
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_AmethystParser_Contextu_32ad,1,bind2);
        _name=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_5:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_lambda(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_e,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... UC(39):
        ;
    case ')' ... '_':
        ;
    case 'a' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case '(' ... '(':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1;
        else if (1) {
            it=failobj;
            goto fail;
        }
        it=AmethystParser_expression(self );
        _e=it;;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '{':
            ;
        case '}' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto fail;
            }
            break;
        case '|' ... '|':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]==')')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto fail;
            }
            break;
        }
        bind_aset(bind2,1,_e);
        it=rb_funcall(self,sy_AmethystParser_Lambda_lb_B_2c90,1,bind2);
        _e=bind_aget(bind2,1);;
        __result=it;;
        break;
    case '`' ... '`':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=AmethystParser_expression(self );
        _e=it;;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '_':
            ;
        case 'a' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto fail;
            }
            break;
        case '`' ... '`':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        bind_aset(bind2,1,_e);
        it=rb_funcall(self,sy_AmethystParser_Lambda_lb_B_2c90,1,bind2);
        _e=bind_aget(bind2,1);;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_name(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_it,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if (ptr->mem==NULL) {
        ptr->mem=memo_init();
        ptr->memgc=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,ptr->mem);
    }
    time_struct time_old=memo_get(ptr->mem,117,ptr->src,ptr->pos);
    if (time_old.pos!=-1) {
        ptr->pos=time_old.pos;
        return time_old.result;
    }
    int oldpos=ptr->pos;
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto memo_fail;
        }
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_ary_new3(0);
        _autovar=it;;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _autovar_2=it;;
        it=AmethystCore_append(self,_autovar,_autovar_2);
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case ':' ... '@':
                ;
            case '[' ... '^':
                ;
            case '`' ... '`':
                ;
            case '{' ... UC(255):
                ;
                stop1=1;
                break;
            case '0' ... '9':
                ;
            case 'A' ... 'Z':
                ;
            case '_' ... '_':
                ;
            case 'a' ... 'z':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_4=it;;
                it=AmethystCore_append(self,_autovar_3,_autovar_4);
                break;
            }
        }
        it=_autovar_3;
        _autovar_5=it;;
        it=AmethystCore_append(self,_autovar,_autovar_5);
        it=_autovar;
        _it=it;;
        bind_aset(bind2,1,_it);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);
        _it=bind_aget(bind2,1);;
        __result=it;;
        break;
    }
memo_fail:
    memo_add(ptr->mem,117,ptr->src,oldpos,it,ptr->pos,time_old);
    return it;

fail:
    return it;
}
VALUE AmethystParser_nr(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_s,_s_2,_what,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=Amethyst_spaces(self );
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto alt1_2;
        }
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=AmethystParser_name(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        break;
    }
    int oldpos2=ptr->pos;
    int cut2=0;
alt2_1:
    ;
    it=Amethyst_spaces(self );
    it=rb_obj_clone(s__lp__84c4);
    _s=it;;
    it=_s;
    _s_2=it;;
    it=_s_2;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto alt2_2;
    }
    int stop1=0;
    while(!stop1) {
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '+':
            ;
        case '-' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt4_2;
            }
            break;
        case ',' ... ',':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=Qnil;
        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto alt3_2;
        };
accept4:
        ;
        it=Amethyst_spaces(self );
        it=rb_obj_clone(s__d41d);
        _s=it;;
        it=rb_obj_clone(s__d41d);
        _s_2=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... ')':
            ;
        case '+' ... '?':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt3_2;
            }
            break;
        case '*' ... '*':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__ti__3389);
            _s_2=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '@':
                ;
            case '[' ... '^':
                ;
            case '`' ... '`':
                ;
            case '{' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt3_2;
                }
                break;
            case 'A' ... 'Z':
                ;
            case '_' ... '_':
                ;
            case 'a' ... 'z':
                ;
                it=AmethystParser_name(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt3_2;
                }
                _what=it;;
                break;
            }
            break;
        case '@' ... '@':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__at__518e);
            _s_2=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '@':
                ;
            case '[' ... '^':
                ;
            case '`' ... '`':
                ;
            case '{' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt3_2;
                }
                break;
            case 'A' ... 'Z':
                ;
            case '_' ... '_':
                ;
            case 'a' ... 'z':
                ;
                it=AmethystParser_name(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt3_2;
                }
                _what=it;;
                break;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            _what=it;;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... '<':
            ;
        case '>' ... UC(255):
            ;
            bind_aset(bind2,1,_what);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
            _what=bind_aget(bind2,1);;
            break;
        case ':' ... ':':
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=AmethystParser_postfixed(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            it=rb_obj_clone(s__co__853a);
            _s_2=it;;

            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            bind_aset(bind2,1,_what);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
            _what=bind_aget(bind2,1);;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto alt3_2;
            };
accept5:
            ;
            break;
        case '=' ... '=':
            ;
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '(':
                ;
            case '*' ... UC(92):
                ;
            case '^' ... '|':
                ;
            case '~' ... UC(255):
                ;
                it=AmethystParser_rubyarg(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt6_2;
                }
                break;
            case ')' ... ')':
                ;
            case ']' ... ']':
                ;
            case '}' ... '}':
                ;
                if (1) {
                    it=failobj;
                    goto alt6_2;
                }
                break;
            }
            it=rb_obj_clone(s__eq__43ec);
            _s_2=it;;

            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            bind_aset(bind2,1,_what);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
            _what=bind_aget(bind2,1);;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            if (1) {
                it=failobj;
                goto alt3_2;
            };
accept6:
            ;
            break;
        }
        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        stop1=1;
        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto alt2_2;
        };
accept3:
        ;
    }
    it=Amethyst_spaces(self );
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '(':
        ;
    case '*' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto alt2_2;
        }
        break;
    case ')' ... ')':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        break;
    }
    ;
    goto accept2;
alt2_2:
    ptr->pos=oldpos2;
    it=Qnil;
    ;
    goto accept2;
alt2_3:
    ptr->pos=oldpos2;
    if (1) {
        it=failobj;
        goto alt1_2;
    };
accept2:
    ;
    it=Amethyst_spaces(self );
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '<':
        ;
    case '>' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto alt1_2;
        }
        break;
    case '=' ... '=':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        break;
    }
    cut1=1;
    if (1) {
        it=failobj;
        goto alt1_2;
    }
    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    if (cut1) {
        it=failobj;
        goto fail;
    }
    it=Qnil;
    __result=it;;

    ;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    if (1) {
        it=failobj;
        goto fail;
    };
accept1:
    ;

fail:
    return it;
}
VALUE AmethystParser_postfixed(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_from,_one,_e,_name,_append,__result,_autovar,_autovar_2,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystParser_term(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _from=it;;
    int stop1=0;
    while(!stop1) {
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=Qnil;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... ')':
                ;
            case ',' ... '9':
                ;
            case ';' ... '<':
                ;
            case '>' ... '>':
                ;
            case '@' ... 'Z':
                ;
            case UC(92) ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt1_2;
                }
                break;
            case '*' ... '+':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _one=it;;
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_one);
                it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_14d1,1,bind2);
                _from=bind_aget(bind2,1);;
                _one=bind_aget(bind2,2);;
                _from=it;;
                break;
            case ':' ... ':':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '?':
                    ;
                case UC(92) ... '^':
                    ;
                case '`' ... '`':
                    ;
                case '|' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt1_2;
                    }
                    break;
                case '{' ... '{':
                    ;
                    it=AmethystParser_inline_host_expr(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt1_2;
                    }
                    _e=it;;
                    bind_aset(bind2,1,_from);
                    bind_aset(bind2,2,_e);
                    it=rb_funcall(self,sy_AmethystParser_Seq_AST_lb__66a7,1,bind2);
                    _from=bind_aget(bind2,1);;
                    _e=bind_aget(bind2,2);;
                    _from=it;;
                    break;
                case '@' ... '@':
                    ;
                    it=AmethystParser_key(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt1_2;
                    }
                    _name=it;;
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... 'Z':
                        ;
                    case UC(92) ... UC(255):
                        ;
                        it=Qnil;
                        _append=it;;
                        break;
                    case '[' ... '[':
                        ;
                        int oldpos2=ptr->pos;
                        int cut2=0;
alt2_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                        else if (1) {
                            it=failobj;
                            goto alt2_2;
                        }
                        it=rb_obj_clone(s__lb__rb__d751);
                        __result=it;;
                        it=__result;
                        _append=it;;

                        ;
                        goto accept2;
alt2_2:
                        ptr->pos=oldpos2;
                        it=Qnil;
                        _append=it;;

                        ;
                        goto accept2;
alt2_3:
                        ptr->pos=oldpos2;
                        if (1) {
                            it=failobj;
                            goto alt1_2;
                        };
accept2:
                        ;
                        break;
                    }
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_append);
                    bind_aset(bind2,3,_from);
                    it=rb_funcall(self,sy_AmethystParser__at_appends_d29d,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _append=bind_aget(bind2,2);;
                    _from=bind_aget(bind2,3);;
                    _from=it;;
                    break;
                case 'A' ... 'Z':
                    ;
                case '_' ... '_':
                    ;
                case 'a' ... 'z':
                    ;
                    it=AmethystParser_name(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt1_2;
                    }
                    _name=it;;
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... 'Z':
                        ;
                    case UC(92) ... UC(255):
                        ;
                        it=Qnil;
                        _append=it;;
                        break;
                    case '[' ... '[':
                        ;
                        int oldpos3=ptr->pos;
                        int cut3=0;
alt3_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                        else if (1) {
                            it=failobj;
                            goto alt3_2;
                        }
                        it=rb_obj_clone(s__lb__rb__d751);
                        __result=it;;
                        it=__result;
                        _append=it;;

                        ;
                        goto accept3;
alt3_2:
                        ptr->pos=oldpos3;
                        it=Qnil;
                        _append=it;;

                        ;
                        goto accept3;
alt3_3:
                        ptr->pos=oldpos3;
                        if (1) {
                            it=failobj;
                            goto alt1_2;
                        };
accept3:
                        ;
                        break;
                    }
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_append);
                    bind_aset(bind2,3,_from);
                    it=rb_funcall(self,sy_AmethystParser__at_appends_d29d,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _append=bind_aget(bind2,2);;
                    _from=bind_aget(bind2,3);;
                    _from=it;;
                    break;
                case '[' ... '[':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... '@':
                        ;
                    case '[' ... '^':
                        ;
                    case '`' ... '`':
                        ;
                    case '{' ... UC(255):
                        ;
                        it=rb_ary_new3(0);
                        _autovar=it;;
                        int stop2=0;
                        while(!stop2) {
                            switch((unsigned char)*ame_curstr2(ptr)) {
                            case UC(0) ... '(':
                                ;
                            case '*' ... UC(92):
                                ;
                            case '^' ... '|':
                                ;
                            case '~' ... UC(255):
                                ;
                                int oldpos4=ptr->pos;
                                int cut4=0;
alt4_1:
                                ;
                                it=AmethystParser_rubyarg(self );
                                if (it==failobj) {
                                    it=failobj;
                                    goto alt4_2;
                                }
                                _autovar_2=it;;
                                it=AmethystCore_append(self,_autovar,_autovar_2);
                                ;
                                goto accept4;
alt4_2:
                                ptr->pos=oldpos4;
                                stop2=1;
                                ;
                                goto accept4;
alt4_3:
                                ptr->pos=oldpos4;
                                if (1) {
                                    it=failobj;
                                    goto alt1_2;
                                };
accept4:
                                ;
                                break;
                            case ')' ... ')':
                                ;
                            case ']' ... ']':
                                ;
                            case '}' ... '}':
                                ;
                                stop2=1;
                                break;
                            }
                        }
                        it=_autovar;
                        _name=it;;
                        break;
                    case 'A' ... 'Z':
                        ;
                    case '_' ... '_':
                        ;
                    case 'a' ... 'z':
                        ;
                        int oldpos5=ptr->pos;
                        int cut5=0;
alt5_1:
                        ;
                        it=AmethystParser_name(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt5_2;
                        }
                        _name=it;;

                        ;
                        goto accept5;
alt5_2:
                        ptr->pos=oldpos5;
                        it=rb_ary_new3(0);
                        _autovar=it;;
                        int stop3=0;
                        while(!stop3) {
                            switch((unsigned char)*ame_curstr2(ptr)) {
                            case UC(0) ... '(':
                                ;
                            case '*' ... UC(92):
                                ;
                            case '^' ... '|':
                                ;
                            case '~' ... UC(255):
                                ;
                                int oldpos6=ptr->pos;
                                int cut6=0;
alt6_1:
                                ;
                                it=AmethystParser_rubyarg(self );
                                if (it==failobj) {
                                    it=failobj;
                                    goto alt6_2;
                                }
                                _autovar_2=it;;
                                it=AmethystCore_append(self,_autovar,_autovar_2);
                                ;
                                goto accept6;
alt6_2:
                                ptr->pos=oldpos6;
                                stop3=1;
                                ;
                                goto accept6;
alt6_3:
                                ptr->pos=oldpos6;
                                if (1) {
                                    it=failobj;
                                    goto alt5_3;
                                };
accept6:
                                ;
                                break;
                            case ')' ... ')':
                                ;
                            case ']' ... ']':
                                ;
                            case '}' ... '}':
                                ;
                                stop3=1;
                                break;
                            }
                        }
                        it=_autovar;
                        _name=it;;

                        ;
                        goto accept5;
alt5_3:
                        ptr->pos=oldpos5;
                        if (1) {
                            it=failobj;
                            goto alt1_2;
                        };
accept5:
                        ;
                        break;
                    }
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... UC(92):
                        ;
                    case '^' ... UC(255):
                        ;
                        if (1) {
                            it=failobj;
                            goto alt1_2;
                        }
                        break;
                    case ']' ... ']':
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        break;
                    }
                    bind_aset(bind2,1,_name);
                    it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__a882,1,bind2);
                    _name=bind_aget(bind2,1);;
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_from);
                    it=rb_funcall(self,sy_AmethystParser__at_appends_b984,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _from=bind_aget(bind2,2);;
                    _from=it;;
                    break;
                }
                break;
            case '=' ... '=':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1;
                else if (1) {
                    it=failobj;
                    goto alt1_2;
                }
                it=AmethystParser_term(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt1_2;
                }
                _e=it;;
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_e);
                it=rb_funcall(self,sy_AmethystParser_Pass_AST_6bd0,1,bind2);
                _from=bind_aget(bind2,1);;
                _e=bind_aget(bind2,2);;
                _from=it;;
                break;
            case '?' ... '?':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                bind_aset(bind2,1,_from);
                it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_0657,1,bind2);
                _from=bind_aget(bind2,1);;
                _from=it;;
                break;
            case '[' ... '[':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                it=AmethystParser_expression(self );
                _e=it;;
                it=Amethyst_spaces(self );
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... UC(92):
                    ;
                case '^' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt1_2;
                    }
                    break;
                case ']' ... ']':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    break;
                }
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_e);
                it=rb_funcall(self,sy_AmethystParser_Enter_AS_3242,1,bind2);
                _from=bind_aget(bind2,1);;
                _e=bind_aget(bind2,2);;
                _from=it;;
                break;
            }
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_2;
            }
            cut8=1;
            if (1) {
                it=failobj;
                goto alt8_2;
            }
            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            if (cut8) {
                it=failobj;
                goto alt7_2;
            }
            it=Qnil;
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            if (1) {
                it=failobj;
                goto alt7_2;
            };
accept8:
            ;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... ')':
                ;
            case ',' ... '9':
                ;
            case ';' ... '<':
                ;
            case '>' ... '>':
                ;
            case '@' ... 'Z':
                ;
            case UC(92) ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt7_2;
                }
                break;
            case '*' ... '+':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _one=it;;
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_one);
                it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_14d1,1,bind2);
                _from=bind_aget(bind2,1);;
                _one=bind_aget(bind2,2);;
                _from=it;;
                break;
            case ':' ... ':':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '?':
                    ;
                case UC(92) ... '^':
                    ;
                case '`' ... '`':
                    ;
                case '|' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt7_2;
                    }
                    break;
                case '{' ... '{':
                    ;
                    it=AmethystParser_inline_host_expr(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt7_2;
                    }
                    _e=it;;
                    bind_aset(bind2,1,_from);
                    bind_aset(bind2,2,_e);
                    it=rb_funcall(self,sy_AmethystParser_Seq_AST_lb__66a7,1,bind2);
                    _from=bind_aget(bind2,1);;
                    _e=bind_aget(bind2,2);;
                    _from=it;;
                    break;
                case '@' ... '@':
                    ;
                    it=AmethystParser_key(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt7_2;
                    }
                    _name=it;;
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... 'Z':
                        ;
                    case UC(92) ... UC(255):
                        ;
                        it=Qnil;
                        _append=it;;
                        break;
                    case '[' ... '[':
                        ;
                        int oldpos9=ptr->pos;
                        int cut9=0;
alt9_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                        else if (1) {
                            it=failobj;
                            goto alt9_2;
                        }
                        it=rb_obj_clone(s__lb__rb__d751);
                        __result=it;;
                        it=__result;
                        _append=it;;

                        ;
                        goto accept9;
alt9_2:
                        ptr->pos=oldpos9;
                        it=Qnil;
                        _append=it;;

                        ;
                        goto accept9;
alt9_3:
                        ptr->pos=oldpos9;
                        if (1) {
                            it=failobj;
                            goto alt7_2;
                        };
accept9:
                        ;
                        break;
                    }
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_append);
                    bind_aset(bind2,3,_from);
                    it=rb_funcall(self,sy_AmethystParser__at_appends_d29d,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _append=bind_aget(bind2,2);;
                    _from=bind_aget(bind2,3);;
                    _from=it;;
                    break;
                case 'A' ... 'Z':
                    ;
                case '_' ... '_':
                    ;
                case 'a' ... 'z':
                    ;
                    it=AmethystParser_name(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt7_2;
                    }
                    _name=it;;
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... 'Z':
                        ;
                    case UC(92) ... UC(255):
                        ;
                        it=Qnil;
                        _append=it;;
                        break;
                    case '[' ... '[':
                        ;
                        int oldpos10=ptr->pos;
                        int cut10=0;
alt10_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                        else if (1) {
                            it=failobj;
                            goto alt10_2;
                        }
                        it=rb_obj_clone(s__lb__rb__d751);
                        __result=it;;
                        it=__result;
                        _append=it;;

                        ;
                        goto accept10;
alt10_2:
                        ptr->pos=oldpos10;
                        it=Qnil;
                        _append=it;;

                        ;
                        goto accept10;
alt10_3:
                        ptr->pos=oldpos10;
                        if (1) {
                            it=failobj;
                            goto alt7_2;
                        };
accept10:
                        ;
                        break;
                    }
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_append);
                    bind_aset(bind2,3,_from);
                    it=rb_funcall(self,sy_AmethystParser__at_appends_d29d,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _append=bind_aget(bind2,2);;
                    _from=bind_aget(bind2,3);;
                    _from=it;;
                    break;
                case '[' ... '[':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... '@':
                        ;
                    case '[' ... '^':
                        ;
                    case '`' ... '`':
                        ;
                    case '{' ... UC(255):
                        ;
                        it=rb_ary_new3(0);
                        _autovar=it;;
                        int stop4=0;
                        while(!stop4) {
                            switch((unsigned char)*ame_curstr2(ptr)) {
                            case UC(0) ... '(':
                                ;
                            case '*' ... UC(92):
                                ;
                            case '^' ... '|':
                                ;
                            case '~' ... UC(255):
                                ;
                                int oldpos11=ptr->pos;
                                int cut11=0;
alt11_1:
                                ;
                                it=AmethystParser_rubyarg(self );
                                if (it==failobj) {
                                    it=failobj;
                                    goto alt11_2;
                                }
                                _autovar_2=it;;
                                it=AmethystCore_append(self,_autovar,_autovar_2);
                                ;
                                goto accept11;
alt11_2:
                                ptr->pos=oldpos11;
                                stop4=1;
                                ;
                                goto accept11;
alt11_3:
                                ptr->pos=oldpos11;
                                if (1) {
                                    it=failobj;
                                    goto alt7_2;
                                };
accept11:
                                ;
                                break;
                            case ')' ... ')':
                                ;
                            case ']' ... ']':
                                ;
                            case '}' ... '}':
                                ;
                                stop4=1;
                                break;
                            }
                        }
                        it=_autovar;
                        _name=it;;
                        break;
                    case 'A' ... 'Z':
                        ;
                    case '_' ... '_':
                        ;
                    case 'a' ... 'z':
                        ;
                        int oldpos12=ptr->pos;
                        int cut12=0;
alt12_1:
                        ;
                        it=AmethystParser_name(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt12_2;
                        }
                        _name=it;;

                        ;
                        goto accept12;
alt12_2:
                        ptr->pos=oldpos12;
                        it=rb_ary_new3(0);
                        _autovar=it;;
                        int stop5=0;
                        while(!stop5) {
                            switch((unsigned char)*ame_curstr2(ptr)) {
                            case UC(0) ... '(':
                                ;
                            case '*' ... UC(92):
                                ;
                            case '^' ... '|':
                                ;
                            case '~' ... UC(255):
                                ;
                                int oldpos13=ptr->pos;
                                int cut13=0;
alt13_1:
                                ;
                                it=AmethystParser_rubyarg(self );
                                if (it==failobj) {
                                    it=failobj;
                                    goto alt13_2;
                                }
                                _autovar_2=it;;
                                it=AmethystCore_append(self,_autovar,_autovar_2);
                                ;
                                goto accept13;
alt13_2:
                                ptr->pos=oldpos13;
                                stop5=1;
                                ;
                                goto accept13;
alt13_3:
                                ptr->pos=oldpos13;
                                if (1) {
                                    it=failobj;
                                    goto alt12_3;
                                };
accept13:
                                ;
                                break;
                            case ')' ... ')':
                                ;
                            case ']' ... ']':
                                ;
                            case '}' ... '}':
                                ;
                                stop5=1;
                                break;
                            }
                        }
                        it=_autovar;
                        _name=it;;

                        ;
                        goto accept12;
alt12_3:
                        ptr->pos=oldpos12;
                        if (1) {
                            it=failobj;
                            goto alt7_2;
                        };
accept12:
                        ;
                        break;
                    }
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... UC(92):
                        ;
                    case '^' ... UC(255):
                        ;
                        if (1) {
                            it=failobj;
                            goto alt7_2;
                        }
                        break;
                    case ']' ... ']':
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        break;
                    }
                    bind_aset(bind2,1,_name);
                    it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__a882,1,bind2);
                    _name=bind_aget(bind2,1);;
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_from);
                    it=rb_funcall(self,sy_AmethystParser__at_appends_b984,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _from=bind_aget(bind2,2);;
                    _from=it;;
                    break;
                }
                break;
            case '=' ... '=':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1;
                else if (1) {
                    it=failobj;
                    goto alt7_2;
                }
                it=AmethystParser_term(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt7_2;
                }
                _e=it;;
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_e);
                it=rb_funcall(self,sy_AmethystParser_Pass_AST_6bd0,1,bind2);
                _from=bind_aget(bind2,1);;
                _e=bind_aget(bind2,2);;
                _from=it;;
                break;
            case '?' ... '?':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                bind_aset(bind2,1,_from);
                it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_0657,1,bind2);
                _from=bind_aget(bind2,1);;
                _from=it;;
                break;
            case '[' ... '[':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                it=AmethystParser_expression(self );
                _e=it;;
                it=Amethyst_spaces(self );
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... UC(92):
                    ;
                case '^' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt7_2;
                    }
                    break;
                case ']' ... ']':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    break;
                }
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_e);
                it=rb_funcall(self,sy_AmethystParser_Enter_AS_3242,1,bind2);
                _from=bind_aget(bind2,1);;
                _e=bind_aget(bind2,2);;
                _from=it;;
                break;
            }
            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            stop1=1;
            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto fail;
            };
accept7:
            ;
            break;
        }
    }
    it=_from;
    __result_2=it;;

fail:
    return it;
}
VALUE AmethystParser_prefixed(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_neg,_expr,_m;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '%':
        ;
    case UC(39) ... '}':
        ;
    case UC(127) ... UC(255):
        ;
        it=AmethystParser_postfixed(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        __result=it;;
        break;
    case '&' ... '&':
        ;
    case '~' ... '~':
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _autovar=it;;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=_autovar;
        _neg=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'z':
            ;
        case '|' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
            break;
        case '{' ... '{':
            ;
            it=AmethystParser_inline_host_expr(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _expr=it;;
            break;
        }
        bind_aset(bind2,1,_expr);
        bind_aset(bind2,2,_neg);
        it=rb_funcall(self,sy_AmethystParser_Pred_lb_bin_ae38,1,bind2);
        _expr=bind_aget(bind2,1);;
        _neg=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=_autovar;
        _neg=it;;
        it=AmethystParser_prefixed(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        _m=it;;
        bind_aset(bind2,1,_m);
        bind_aset(bind2,2,_neg);
        it=rb_funcall(self,sy_AmethystParser_Lookahea_0946,1,bind2);
        _m=bind_aget(bind2,1);;
        _neg=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_2;
        };
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystParser_postfixed(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_procargs(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_c,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_AmethystParser__at_ary_eq__lb__rb_,1,bind2);
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _c=it;;
        bind_aset(bind2,1,_c);
        it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_1_rb__a724,1,bind2);
        _c=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        };
        it=rb_funcall(self,sy_AmethystParser__at_ary_lt__lt_Ar_59e3,1,bind2);
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystParser_procargs2(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
    }
    it=rb_funcall(self,sy_AmethystParser__at_ary_ff69,1,bind2);
    __result=it;;

fail:
    return it;
}
VALUE AmethystParser_procargs2(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,__result,_a;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_AmethystParser_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Args*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        it=rb_ary_new3(0);
        _autovar_2=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=AmethystParser_procargs2(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass1;
            };
accept2:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        it=_autovar_2;
        _autovar_4=it;;

        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto alt1_2;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_4;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        _a=it;;
        bind_aset(bind2,1,_a);
        it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_b81c,1,bind2);
        _a=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    case 1/*Object*/:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        _a=it;;
        bind_aset(bind2,1,_a);
        it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_b81c,1,bind2);
        _a=bind_aget(bind2,1);;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_rubyarg(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_n,_autovar,_autovar_2,__result,_autovar_3,_autovar_4,_r,__result_2,_r_2,_o,_c,__result_3,_x,_autovar_5,_autovar_6,_autovar_7,__result_4,_s,_autovar_8,_x_2,_autovar_9,_autovar_10,__result_5,__result_6,__result_7,_e;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '!':
        ;
    case '#' ... '#':
        ;
    case '%' ... '&':
        ;
    case '*' ... '-':
        ;
    case '/' ... '/':
        ;
    case ';' ... '?':
        ;
    case 'A' ... 'Z':
        ;
    case UC(92) ... UC(92):
        ;
    case '^' ... '^':
        ;
    case '|' ... '|':
        ;
    case '~' ... UC(255):
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt2_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=Qnil;
        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_2;
        };
accept2:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            cut3=1;
            if (1) {
                it=failobj;
                goto alt3_2;
            }
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            if (cut3) {
                it=failobj;
                goto alt1_2;
            }
            it=Qnil;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept3:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt1_2;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    case '{' ... '{':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=Amethyst_spaces(self );
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=AmethystParser_rubyarg(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            _autovar_4=it;;
            it=AmethystCore_append(self,_autovar_3,_autovar_4);
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            stop1=1;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto alt4_2;
            };
accept5:
            ;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '|':
            ;
        case '~' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt4_2;
            }
            break;
        case '}' ... '}':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=_autovar_3;
        _r=it;;
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        _r_2=it;;
        it=rb_obj_clone(s__le__f95b);
        _o=it;;
        it=rb_obj_clone(s__re__cbb1);
        _c=it;;
        bind_aset(bind2,1,_o);
        bind_aset(bind2,2,_r_2);
        bind_aset(bind2,3,_c);
        it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);
        _o=bind_aget(bind2,1);;
        _r_2=bind_aget(bind2,2);;
        _c=bind_aget(bind2,3);;
        __result_3=it;;
        it=__result_3;
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt6_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt6_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept6;
alt6_2:
        ptr->pos=oldpos6;
        it=Qnil;
        ;
        goto accept6;
alt6_3:
        ptr->pos=oldpos6;
        if (1) {
            it=failobj;
            goto alt4_3;
        };
accept6:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            cut7=1;
            if (1) {
                it=failobj;
                goto alt7_2;
            }
            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            if (cut7) {
                it=failobj;
                goto alt4_3;
            }
            it=Qnil;
            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto alt4_3;
            };
accept7:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt4_3;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_3;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto fail;
        };
accept4:
        ;
        break;
    case UC(34) ... UC(34):
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos8=ptr->pos;
        int cut8=0;
alt8_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_ary_new3(0);
        _x=it;;
        int stop2=0;
        while(!stop2) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '!':
                ;
            case '$' ... '[':
                ;
            case ']' ... UC(255):
                ;
                it=Qnil;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt8_2;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_x,_autovar_5);
                break;
            case UC(34) ... UC(34):
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                cut8=1;
                stop2=1;
                break;
            case '#' ... '#':
                ;
                int oldpos9=ptr->pos;
                int cut9=0;
alt9_1:
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='{')  ptr->pos+=1;
                else if (1) {
                    it=failobj;
                    goto alt9_2;
                }
                it=Amethyst_spaces(self );
                it=rb_ary_new3(0);
                _autovar_3=it;;
                int stop3=0;
                while(!stop3) {
                    int oldpos10=ptr->pos;
                    int cut10=0;
alt10_1:
                    ;
                    it=AmethystParser_rubyarg(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt10_2;
                    }
                    _autovar_4=it;;
                    it=AmethystCore_append(self,_autovar_3,_autovar_4);
                    ;
                    goto accept10;
alt10_2:
                    ptr->pos=oldpos10;
                    stop3=1;
                    ;
                    goto accept10;
alt10_3:
                    ptr->pos=oldpos10;
                    if (1) {
                        it=failobj;
                        goto alt9_2;
                    };
accept10:
                    ;
                }
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '|':
                    ;
                case '~' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt9_2;
                    }
                    break;
                case '}' ... '}':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    break;
                }
                it=_autovar_3;
                _r=it;;
                bind_aset(bind2,1,_r);
                it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
                _r=bind_aget(bind2,1);;
                __result_2=it;;
                it=__result_2;
                _r_2=it;;
                it=rb_obj_clone(s__bs__sh__le__a90f);
                _o=it;;
                it=rb_obj_clone(s__re__cbb1);
                _c=it;;
                bind_aset(bind2,1,_o);
                bind_aset(bind2,2,_r_2);
                bind_aset(bind2,3,_c);
                it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);
                _o=bind_aget(bind2,1);;
                _r_2=bind_aget(bind2,2);;
                _c=bind_aget(bind2,3);;
                __result_3=it;;
                it=__result_3;
                _autovar_6=it;;
                it=AmethystCore_append(self,_x,_autovar_6);
                ;
                goto accept9;
alt9_2:
                ptr->pos=oldpos9;
                it=Qnil;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt9_3;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_x,_autovar_5);
                ;
                goto accept9;
alt9_3:
                ptr->pos=oldpos9;
                if (1) {
                    it=failobj;
                    goto alt8_2;
                };
accept9:
                ;
                break;
            case UC(92) ... UC(92):
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                it=rb_obj_clone(s__bs__bs__7f81);
                _autovar_7=it;;
                it=AmethystCore_append(self,_x,_autovar_7);
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt8_2;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_x,_autovar_5);
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
        _x=bind_aget(bind2,1);;
        __result_4=it;;
        it=__result_4;
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__88c8,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept8;
alt8_2:
        ptr->pos=oldpos8;
        if (cut8) {
            it=failobj;
            goto fail;
        }
        int oldpos11=ptr->pos;
        int cut11=0;
alt11_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt11_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt11_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept11;
alt11_2:
        ptr->pos=oldpos11;
        it=Qnil;
        ;
        goto accept11;
alt11_3:
        ptr->pos=oldpos11;
        if (1) {
            it=failobj;
            goto alt8_3;
        };
accept11:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos12=ptr->pos;
            int cut12=0;
alt12_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt12_2;
            }
            cut12=1;
            if (1) {
                it=failobj;
                goto alt12_2;
            }
            ;
            goto accept12;
alt12_2:
            ptr->pos=oldpos12;
            if (cut12) {
                it=failobj;
                goto alt8_3;
            }
            it=Qnil;
            ;
            goto accept12;
alt12_3:
            ptr->pos=oldpos12;
            if (1) {
                it=failobj;
                goto alt8_3;
            };
accept12:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt8_3;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_3;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept8;
alt8_3:
        ptr->pos=oldpos8;
        if (1) {
            it=failobj;
            goto fail;
        };
accept8:
        ;
        break;
    case '$' ... '$':
        ;
    case ':' ... ':':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos13=ptr->pos;
        int cut13=0;
alt13_1:
        ;
        int oldpos14=ptr->pos;
        int cut14=0;
alt14_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt14_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt14_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept14;
alt14_2:
        ptr->pos=oldpos14;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _autovar_8=it;;
        it=AmethystCore_append(self,_n,_autovar_8);
        ;
        goto accept14;
alt14_3:
        ptr->pos=oldpos14;
        if (1) {
            it=failobj;
            goto alt13_2;
        };
accept14:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos15=ptr->pos;
            int cut15=0;
alt15_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt15_2;
            }
            cut15=1;
            if (1) {
                it=failobj;
                goto alt15_2;
            }
            ;
            goto accept15;
alt15_2:
            ptr->pos=oldpos15;
            if (cut15) {
                it=failobj;
                goto alt13_2;
            }
            it=Qnil;
            ;
            goto accept15;
alt15_3:
            ptr->pos=oldpos15;
            if (1) {
                it=failobj;
                goto alt13_2;
            };
accept15:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt13_2;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt13_2;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept13;
alt13_2:
        ptr->pos=oldpos13;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept13;
alt13_3:
        ptr->pos=oldpos13;
        if (1) {
            it=failobj;
            goto fail;
        };
accept13:
        ;
        break;
    case UC(39) ... UC(39):
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos16=ptr->pos;
        int cut16=0;
alt16_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_ary_new3(0);
        _x_2=it;;
        int stop4=0;
        while(!stop4) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '[':
                ;
            case ']' ... UC(255):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '&':
                    ;
                case '(' ... UC(255):
                    ;
                    it=Qnil;
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt16_2;
                    }
                    _autovar_9=it;;
                    it=AmethystCore_append(self,_x_2,_autovar_9);
                    break;
                case UC(39) ... UC(39):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut16=1;
                    stop4=1;
                    break;
                }
                break;
            case UC(92) ... UC(92):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '&':
                    ;
                case '(' ... UC(255):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_10=it;;
                    it=AmethystCore_append(self,_x_2,_autovar_10);
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt16_2;
                    }
                    _autovar_9=it;;
                    it=AmethystCore_append(self,_x_2,_autovar_9);
                    break;
                case UC(39) ... UC(39):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut16=1;
                    stop4=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x_2);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _x_2=bind_aget(bind2,1);;
        __result_5=it;;
        it=__result_5;
        __result_6=it;;
        it=__result_6;
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__dq__b20e,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept16;
alt16_2:
        ptr->pos=oldpos16;
        if (cut16) {
            it=failobj;
            goto fail;
        }
        int oldpos17=ptr->pos;
        int cut17=0;
alt17_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt17_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt17_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept17;
alt17_2:
        ptr->pos=oldpos17;
        it=Qnil;
        ;
        goto accept17;
alt17_3:
        ptr->pos=oldpos17;
        if (1) {
            it=failobj;
            goto alt16_3;
        };
accept17:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos18=ptr->pos;
            int cut18=0;
alt18_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt18_2;
            }
            cut18=1;
            if (1) {
                it=failobj;
                goto alt18_2;
            }
            ;
            goto accept18;
alt18_2:
            ptr->pos=oldpos18;
            if (cut18) {
                it=failobj;
                goto alt16_3;
            }
            it=Qnil;
            ;
            goto accept18;
alt18_3:
            ptr->pos=oldpos18;
            if (1) {
                it=failobj;
                goto alt16_3;
            };
accept18:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt16_3;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt16_3;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept16;
alt16_3:
        ptr->pos=oldpos16;
        if (1) {
            it=failobj;
            goto fail;
        };
accept16:
        ;
        break;
    case '(' ... '(':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos19=ptr->pos;
        int cut19=0;
alt19_1:
        ;
        it=AmethystParser_lambda(self );
        if (it==failobj) {
            it=failobj;
            goto alt19_2;
        }
        __result=it;;

        ;
        goto accept19;
alt19_2:
        ptr->pos=oldpos19;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=Amethyst_spaces(self );
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop5=0;
        while(!stop5) {
            int oldpos20=ptr->pos;
            int cut20=0;
alt20_1:
            ;
            it=AmethystParser_rubyarg(self );
            if (it==failobj) {
                it=failobj;
                goto alt20_2;
            }
            _autovar_4=it;;
            it=AmethystCore_append(self,_autovar_3,_autovar_4);
            ;
            goto accept20;
alt20_2:
            ptr->pos=oldpos20;
            stop5=1;
            ;
            goto accept20;
alt20_3:
            ptr->pos=oldpos20;
            if (1) {
                it=failobj;
                goto alt19_3;
            };
accept20:
            ;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt19_3;
            }
            break;
        case ')' ... ')':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=_autovar_3;
        _r=it;;
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        _r_2=it;;
        it=rb_obj_clone(s__lp__84c4);
        _o=it;;
        it=rb_obj_clone(s__rp__9371);
        _c=it;;
        bind_aset(bind2,1,_o);
        bind_aset(bind2,2,_r_2);
        bind_aset(bind2,3,_c);
        it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);
        _o=bind_aget(bind2,1);;
        _r_2=bind_aget(bind2,2);;
        _c=bind_aget(bind2,3);;
        __result_3=it;;
        it=__result_3;
        __result=it;;

        ;
        goto accept19;
alt19_3:
        ptr->pos=oldpos19;
        int oldpos21=ptr->pos;
        int cut21=0;
alt21_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt21_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt21_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept21;
alt21_2:
        ptr->pos=oldpos21;
        it=Qnil;
        ;
        goto accept21;
alt21_3:
        ptr->pos=oldpos21;
        if (1) {
            it=failobj;
            goto alt19_4;
        };
accept21:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos22=ptr->pos;
            int cut22=0;
alt22_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt22_2;
            }
            cut22=1;
            if (1) {
                it=failobj;
                goto alt22_2;
            }
            ;
            goto accept22;
alt22_2:
            ptr->pos=oldpos22;
            if (cut22) {
                it=failobj;
                goto alt19_4;
            }
            it=Qnil;
            ;
            goto accept22;
alt22_3:
            ptr->pos=oldpos22;
            if (1) {
                it=failobj;
                goto alt19_4;
            };
accept22:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt19_4;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt19_4;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept19;
alt19_4:
        ptr->pos=oldpos19;
        if (1) {
            it=failobj;
            goto fail;
        };
accept19:
        ;
        break;
    case ')' ... ')':
        ;
    case ']' ... ']':
        ;
    case '}' ... '}':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos23=ptr->pos;
        int cut23=0;
alt23_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt23_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt23_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept23;
alt23_2:
        ptr->pos=oldpos23;
        it=Qnil;
        ;
        goto accept23;
alt23_3:
        ptr->pos=oldpos23;
        if (1) {
            it=failobj;
            goto fail;
        };
accept23:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos24=ptr->pos;
            int cut24=0;
alt24_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt24_2;
            }
            cut24=1;
            if (1) {
                it=failobj;
                goto alt24_2;
            }
            ;
            goto accept24;
alt24_2:
            ptr->pos=oldpos24;
            if (cut24) {
                it=failobj;
                goto fail;
            }
            it=Qnil;
            ;
            goto accept24;
alt24_3:
            ptr->pos=oldpos24;
            if (1) {
                it=failobj;
                goto fail;
            };
accept24:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto fail;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto fail;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;
        break;
    case '.' ... '.':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos25=ptr->pos;
        int cut25=0;
alt25_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        int oldpos26=ptr->pos;
        int cut26=0;
alt26_1:
        ;
        if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2;
        else if (1) {
            it=failobj;
            goto alt26_2;
        }
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        __result_7=it;;
        it=__result_7;
        __result=it;;

        ;
        goto accept26;
alt26_2:
        ptr->pos=oldpos26;
        if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1;
        else if (1) {
            it=failobj;
            goto alt26_3;
        }
        it=rb_obj_clone(s__dot__dot__58b9);
        __result_7=it;;
        it=__result_7;
        __result=it;;

        ;
        goto accept26;
alt26_3:
        ptr->pos=oldpos26;
        if (1) {
            it=failobj;
            goto alt25_2;
        };
accept26:
        ;

        ;
        goto accept25;
alt25_2:
        ptr->pos=oldpos25;
        int oldpos27=ptr->pos;
        int cut27=0;
alt27_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt27_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt27_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept27;
alt27_2:
        ptr->pos=oldpos27;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _autovar_8=it;;
        it=AmethystCore_append(self,_n,_autovar_8);
        ;
        goto accept27;
alt27_3:
        ptr->pos=oldpos27;
        if (1) {
            it=failobj;
            goto alt25_3;
        };
accept27:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos28=ptr->pos;
            int cut28=0;
alt28_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt28_2;
            }
            cut28=1;
            if (1) {
                it=failobj;
                goto alt28_2;
            }
            ;
            goto accept28;
alt28_2:
            ptr->pos=oldpos28;
            if (cut28) {
                it=failobj;
                goto alt25_3;
            }
            it=Qnil;
            ;
            goto accept28;
alt28_3:
            ptr->pos=oldpos28;
            if (1) {
                it=failobj;
                goto alt25_3;
            };
accept28:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt25_3;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt25_3;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept25;
alt25_3:
        ptr->pos=oldpos25;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept25;
alt25_4:
        ptr->pos=oldpos25;
        if (1) {
            it=failobj;
            goto fail;
        };
accept25:
        ;
        break;
    case '0' ... '9':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos29=ptr->pos;
        int cut29=0;
alt29_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _e=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... ';':
            ;
        case '=' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt29_2;
            }
            break;
        case '<' ... '<':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='<')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt29_2;
            }
            break;
        }
        bind_aset(bind2,1,_e);
        it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_1_rb__6281,1,bind2);
        _e=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept29;
alt29_2:
        ptr->pos=oldpos29;
        int oldpos30=ptr->pos;
        int cut30=0;
alt30_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt30_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt30_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept30;
alt30_2:
        ptr->pos=oldpos30;
        it=Qnil;
        ;
        goto accept30;
alt30_3:
        ptr->pos=oldpos30;
        if (1) {
            it=failobj;
            goto alt29_3;
        };
accept30:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos31=ptr->pos;
            int cut31=0;
alt31_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt31_2;
            }
            cut31=1;
            if (1) {
                it=failobj;
                goto alt31_2;
            }
            ;
            goto accept31;
alt31_2:
            ptr->pos=oldpos31;
            if (cut31) {
                it=failobj;
                goto alt29_3;
            }
            it=Qnil;
            ;
            goto accept31;
alt31_3:
            ptr->pos=oldpos31;
            if (1) {
                it=failobj;
                goto alt29_3;
            };
accept31:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt29_3;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt29_3;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept29;
alt29_3:
        ptr->pos=oldpos29;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept29;
alt29_4:
        ptr->pos=oldpos29;
        if (1) {
            it=failobj;
            goto fail;
        };
accept29:
        ;
        break;
    case '@' ... '@':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos32=ptr->pos;
        int cut32=0;
alt32_1:
        ;
        int oldpos33=ptr->pos;
        int cut33=0;
alt33_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt33_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt33_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept33;
alt33_2:
        ptr->pos=oldpos33;
        it=Qnil;
        ;
        goto accept33;
alt33_3:
        ptr->pos=oldpos33;
        if (1) {
            it=failobj;
            goto alt32_2;
        };
accept33:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos34=ptr->pos;
            int cut34=0;
alt34_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt34_2;
            }
            cut34=1;
            if (1) {
                it=failobj;
                goto alt34_2;
            }
            ;
            goto accept34;
alt34_2:
            ptr->pos=oldpos34;
            if (cut34) {
                it=failobj;
                goto alt32_2;
            }
            it=Qnil;
            ;
            goto accept34;
alt34_3:
            ptr->pos=oldpos34;
            if (1) {
                it=failobj;
                goto alt32_2;
            };
accept34:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt32_2;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt32_2;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept32;
alt32_2:
        ptr->pos=oldpos32;
        it=AmethystParser_key(self );
        if (it==failobj) {
            it=failobj;
            goto alt32_3;
        }
        __result=it;;

        ;
        goto accept32;
alt32_3:
        ptr->pos=oldpos32;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept32;
alt32_4:
        ptr->pos=oldpos32;
        if (1) {
            it=failobj;
            goto fail;
        };
accept32:
        ;
        break;
    case '[' ... '[':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos35=ptr->pos;
        int cut35=0;
alt35_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=Amethyst_spaces(self );
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop6=0;
        while(!stop6) {
            int oldpos36=ptr->pos;
            int cut36=0;
alt36_1:
            ;
            it=AmethystParser_rubyarg(self );
            if (it==failobj) {
                it=failobj;
                goto alt36_2;
            }
            _autovar_4=it;;
            it=AmethystCore_append(self,_autovar_3,_autovar_4);
            ;
            goto accept36;
alt36_2:
            ptr->pos=oldpos36;
            stop6=1;
            ;
            goto accept36;
alt36_3:
            ptr->pos=oldpos36;
            if (1) {
                it=failobj;
                goto alt35_2;
            };
accept36:
            ;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(92):
            ;
        case '^' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt35_2;
            }
            break;
        case ']' ... ']':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=_autovar_3;
        _r=it;;
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        _r_2=it;;
        it=rb_obj_clone(s__lb__8154);
        _o=it;;
        it=rb_obj_clone(s__rb__0fbd);
        _c=it;;
        bind_aset(bind2,1,_o);
        bind_aset(bind2,2,_r_2);
        bind_aset(bind2,3,_c);
        it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);
        _o=bind_aget(bind2,1);;
        _r_2=bind_aget(bind2,2);;
        _c=bind_aget(bind2,3);;
        __result_3=it;;
        it=__result_3;
        __result=it;;

        ;
        goto accept35;
alt35_2:
        ptr->pos=oldpos35;
        int oldpos37=ptr->pos;
        int cut37=0;
alt37_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt37_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt37_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept37;
alt37_2:
        ptr->pos=oldpos37;
        it=Qnil;
        ;
        goto accept37;
alt37_3:
        ptr->pos=oldpos37;
        if (1) {
            it=failobj;
            goto alt35_3;
        };
accept37:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos38=ptr->pos;
            int cut38=0;
alt38_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt38_2;
            }
            cut38=1;
            if (1) {
                it=failobj;
                goto alt38_2;
            }
            ;
            goto accept38;
alt38_2:
            ptr->pos=oldpos38;
            if (cut38) {
                it=failobj;
                goto alt35_3;
            }
            it=Qnil;
            ;
            goto accept38;
alt38_3:
            ptr->pos=oldpos38;
            if (1) {
                it=failobj;
                goto alt35_3;
            };
accept38:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt35_3;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt35_3;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept35;
alt35_3:
        ptr->pos=oldpos35;
        if (1) {
            it=failobj;
            goto fail;
        };
accept35:
        ;
        break;
    case '`' ... '`':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos39=ptr->pos;
        int cut39=0;
alt39_1:
        ;
        it=AmethystParser_lambda(self );
        if (it==failobj) {
            it=failobj;
            goto alt39_2;
        }
        __result=it;;

        ;
        goto accept39;
alt39_2:
        ptr->pos=oldpos39;
        int oldpos40=ptr->pos;
        int cut40=0;
alt40_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt40_2;
            }
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt40_2;
            }
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept40;
alt40_2:
        ptr->pos=oldpos40;
        it=Qnil;
        ;
        goto accept40;
alt40_3:
        ptr->pos=oldpos40;
        if (1) {
            it=failobj;
            goto alt39_3;
        };
accept40:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            it=Qnil;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos41=ptr->pos;
            int cut41=0;
alt41_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt41_2;
            }
            cut41=1;
            if (1) {
                it=failobj;
                goto alt41_2;
            }
            ;
            goto accept41;
alt41_2:
            ptr->pos=oldpos41;
            if (cut41) {
                it=failobj;
                goto alt39_3;
            }
            it=Qnil;
            ;
            goto accept41;
alt41_3:
            ptr->pos=oldpos41;
            if (1) {
                it=failobj;
                goto alt39_3;
            };
accept41:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt39_3;
            }
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt39_3;
            }
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept39;
alt39_3:
        ptr->pos=oldpos39;
        if (1) {
            it=failobj;
            goto fail;
        };
accept39:
        ;
        break;
    }
fail:
    return it;
}
VALUE AmethystParser_rule(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_bnding,_varargs,_arg2,_name,_s,_s_2,_autovar,_k,_what,_r,_e,_autovar_2,_arg,_body,_args,_locals,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if (ptr->mem==NULL) {
        ptr->mem=memo_init();
        ptr->memgc=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,ptr->mem);
    }
    time_struct time_old=memo_get(ptr->mem,115,ptr->src,ptr->pos);
    if (time_old.pos!=-1) {
        ptr->pos=time_old.pos;
        return time_old.result;
    }
    int oldpos=ptr->pos;
    it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);
    it=rb_funcall(self,sy_AmethystParser__at_bnding_7d3c,1,bind2);
    _bnding=it;;
    it=Amethyst_spaces(self );
    it=Qfalse;
    _varargs=it;;
    it=rb_ary_new3(0);
    _arg2=it;;
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto memo_fail;
        }
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=AmethystParser_name(self );
        if (it==failobj) {
            it=failobj;
            goto memo_fail;
        }
        _name=it;;
        break;
    }
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=Amethyst_spaces(self );
    it=rb_obj_clone(s__lp__84c4);
    _s=it;;
    it=_s;
    _s_2=it;;
    it=_s_2;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto alt1_2;
    }
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '+':
            ;
        case '-' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt3_2;
            }
            break;
        case ',' ... ',':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=Qnil;
        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto alt2_2;
        };
accept3:
        ;
        it=Amethyst_spaces(self );
        it=rb_obj_clone(s__d41d);
        _s=it;;
        it=rb_obj_clone(s__d41d);
        _s_2=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... ')':
            ;
        case '+' ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
            break;
        case '*' ... '*':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__ti__3389);
            _s_2=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '@':
                ;
            case '[' ... '^':
                ;
            case '`' ... '`':
                ;
            case '{' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt2_2;
                }
                break;
            case 'A' ... 'Z':
                ;
            case '_' ... '_':
                ;
            case 'a' ... 'z':
                ;
                it=AmethystParser_name(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt2_2;
                }
                _k=it;;
                break;
            }
            bind_aset(bind2,1,_varargs);
            bind_aset(bind2,2,_k);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__4e2f,1,bind2);
            _varargs=bind_aget(bind2,1);;
            _k=bind_aget(bind2,2);;
            _what=it;;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=AmethystParser_name(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _k=it;;
            bind_aset(bind2,1,_arg2);
            bind_aset(bind2,2,_k);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__lt__798b,1,bind2);
            _arg2=bind_aget(bind2,1);;
            _k=bind_aget(bind2,2);;
            _what=it;;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '<':
            ;
        case '>' ... UC(255):
            ;
            it=Qnil;
            break;
        case '=' ... '=':
            ;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__eq__43ec);
            _s_2=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '(':
                ;
            case '*' ... UC(92):
                ;
            case '^' ... '|':
                ;
            case '~' ... UC(255):
                ;
                it=AmethystParser_rubyarg(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt4_2;
                }
                _r=it;;
                break;
            case ')' ... ')':
                ;
            case ']' ... ']':
                ;
            case '}' ... '}':
                ;
                if (1) {
                    it=failobj;
                    goto alt4_2;
                }
                break;
            }
            bind_aset(bind2,1,_varargs);
            bind_aset(bind2,2,_what);
            bind_aset(bind2,3,_r);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__c77b,1,bind2);
            _varargs=bind_aget(bind2,1);;
            _what=bind_aget(bind2,2);;
            _r=bind_aget(bind2,3);;
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=Qnil;
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto alt2_2;
            };
accept4:
            ;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            it=Qnil;
            break;
        case ':' ... ':':
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__co__853a);
            _s_2=it;;
            it=AmethystParser_postfixed(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            _e=it;;
            bind_aset(bind2,1,_varargs);
            bind_aset(bind2,2,_what);
            bind_aset(bind2,3,_e);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__3c5b,1,bind2);
            _varargs=bind_aget(bind2,1);;
            _what=bind_aget(bind2,2);;
            _e=bind_aget(bind2,3);;
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=Qnil;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto alt2_2;
            };
accept5:
            ;
            break;
        }
        bind_aset(bind2,1,_k);
        bind_aset(bind2,2,_what);
        it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_5836,1,bind2);
        _k=bind_aget(bind2,1);;
        _what=bind_aget(bind2,2);;
        _autovar_2=it;;
        it=AmethystCore_append(self,_autovar,_autovar_2);
        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        stop1=1;
        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_2;
        };
accept2:
        ;
    }
    it=Amethyst_spaces(self );
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '(':
        ;
    case '*' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto alt1_2;
        }
        break;
    case ')' ... ')':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        break;
    }
    it=_autovar;
    _arg=it;;

    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    it=Qnil;
    ;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    if (1) {
        it=failobj;
        goto memo_fail;
    };
accept1:
    ;
    it=Amethyst_spaces(self );
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '<':
        ;
    case '>' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto memo_fail;
        }
        break;
    case '=' ... '=':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        break;
    }
    it=AmethystParser_expression(self );
    _body=it;;
    bind_aset(bind2,1,_varargs);
    bind_aset(bind2,2,_arg2);
    it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__sp__5934,1,bind2);
    _varargs=bind_aget(bind2,1);;
    _arg2=bind_aget(bind2,2);;
    _args=it;;
    bind_aset(bind2,1,_body);
    it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_37df,1,bind2);
    _body=bind_aget(bind2,1);;
    _body=it;;
    it=rb_funcall(self,sy_AmethystParser__at_locals_dot__bdc6,1,bind2);
    _locals=it;;
    bind_aset(bind2,1,_body);
    bind_aset(bind2,2,_varargs);
    bind_aset(bind2,3,_name);
    bind_aset(bind2,4,_arg);
    it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__9a0b,1,bind2);
    _body=bind_aget(bind2,1);;
    _varargs=bind_aget(bind2,2);;
    _name=bind_aget(bind2,3);;
    _arg=bind_aget(bind2,4);;
    bind_aset(bind2,1,_bnding);
    bind_aset(bind2,2,_varargs);
    bind_aset(bind2,3,_name);
    bind_aset(bind2,4,_body);
    bind_aset(bind2,5,_args);
    bind_aset(bind2,6,_locals);
    it=rb_funcall(self,sy_AmethystParser_Rule_dot_cre_113e,1,bind2);
    _bnding=bind_aget(bind2,1);;
    _varargs=bind_aget(bind2,2);;
    _name=bind_aget(bind2,3);;
    _body=bind_aget(bind2,4);;
    _args=bind_aget(bind2,5);;
    _locals=bind_aget(bind2,6);;
    __result=it;;
memo_fail:
    memo_add(ptr->mem,115,ptr->src,oldpos,it,ptr->pos,time_old);
    return it;

fail:
    return it;
}
VALUE AmethystParser_ruleargs(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_name,_autovar_5,_autovar_6,_autovar_7,_autovar_8,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystParser_argsOpt(self );
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto pass1;
    }
    _autovar_2=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar_2);
    it=rb_ary_new3(0);
    _autovar_3=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystParser_1,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Args*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_4=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_4);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass3;
            }
            _name=it;;
            bind_aset(bind2,1,_name);
            it=rb_funcall(self,sy_AmethystParser_local_lp_bi_196b,1,bind2);
            _name=bind_aget(bind2,1);;
            _autovar_5=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto alt1_2;
            }
success3:
            *ptr=oldpass3;
            it=_autovar_5;
            _autovar_6=it;;
            it=AmethystCore_append(self,_autovar_3,_autovar_6);
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto pass2;
            };
accept1:
            ;
            break;
        case 1/*Object*/:
            ;
            stop1=1;
            break;
        }
    }
    it=Qnil;
    if (ptr->pos<ptr->len) {
        it=failobj;
        goto pass2;
    }
    it=_autovar_3;
    _autovar_7=it;;

    goto success2;
pass2:
    *ptr=oldpass2;
    if (1) {
        it=failobj;
        goto pass1;
    }
success2:
    *ptr=oldpass2;
    it=Qnil;
    if (ptr->pos<ptr->len) {
        it=failobj;
        goto pass1;
    }
    it=_autovar_7;
    _autovar_8=it;;

    goto success1;
pass1:
    *ptr=oldpass1;
    if (1) {
        it=failobj;
        goto fail;
    }
success1:
    *ptr=oldpass1;
    it=_autovar_8;
    __result=it;;

fail:
    return it;
}
VALUE AmethystParser_sequence(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_ary,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=AmethystParser_nr(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '+':
            ;
        case '-' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
            break;
        case ',' ... ',':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=Qnil;
        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_2;
        };
accept2:
        ;
        it=Amethyst_spaces(self );
        it=AmethystParser_prefixed(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _autovar_2=it;;
        it=AmethystCore_append(self,_autovar,_autovar_2);
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
    }
    it=_autovar;
    _ary=it;;
    bind_aset(bind2,1,_ary);
    it=rb_funcall(self,sy_AmethystParser_Seq_AST_dot__a126,1,bind2);
    _ary=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE AmethystParser_string_like(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_start,_s,_end,_e,_x,_autovar,_autovar_2,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _start=a0;;
    _end=a1;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_start;
    _s=it;;
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=_end;
    _e=it;;
    it=rb_ary_new3(0);
    _x=it;;
    int stop1=0;
    while(!stop1) {
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '[':
            ;
        case ']' ... UC(255):
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            cut1=1;
            stop1=1;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            if (cut1) {
                it=failobj;
                goto fail;
            }
            it=Qnil;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_3;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case UC(92) ... UC(92):
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            cut2=1;
            stop1=1;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            if (cut2) {
                it=failobj;
                goto fail;
            }
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__bs__bs__7f81);
            _autovar_2=it;;
            it=AmethystCore_append(self,_x,_autovar_2);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto fail;
            };
accept2:
            ;
            break;
        }
    }
    bind_aset(bind2,1,_x);
    it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
    _x=bind_aget(bind2,1);;
    __result=it;;
    it=__result;
    __result_2=it;;

fail:
    return it;
}
VALUE AmethystParser_term(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_x,_autovar,_autovar_2,__result_2,__result_3,_s,_x_2,_ors,__result_4,_it,_e;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '!':
        ;
    case '$' ... '&':
        ;
    case ')' ... ',':
        ;
    case '/' ... '?':
        ;
    case UC(92) ... '^':
        ;
    case '`' ... '`':
        ;
    case '|' ... UC(255):
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        int oldpos2=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject1;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept2;
reject1:
        x=0;
accept2:
        it=Qnil;
        ptr->pos=oldpos2;
        if (x==0) {
            it=failobj;
            goto alt1_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    case UC(34) ... UC(34):
        ;
        int oldpos3=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        }
        __result=it;;

        ;
        goto accept3;
alt2_2:
        ptr->pos=oldpos3;
        int oldpos4=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject2;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept4;
reject2:
        x=0;
accept4:
        it=Qnil;
        ptr->pos=oldpos4;
        if (x==0) {
            it=failobj;
            goto alt2_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt2_3:
        ptr->pos=oldpos3;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_ary_new3(0);
        _x=it;;
        int stop1=0;
        while(!stop1) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '[':
                ;
            case ']' ... UC(255):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '!':
                    ;
                case '#' ... UC(255):
                    ;
                    it=Qnil;
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt2_4;
                    }
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case UC(34) ... UC(34):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut2=1;
                    stop1=1;
                    break;
                }
                break;
            case UC(92) ... UC(92):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '!':
                    ;
                case '#' ... UC(255):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_2=it;;
                    it=AmethystCore_append(self,_x,_autovar_2);
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt2_4;
                    }
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case UC(34) ... UC(34):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut2=1;
                    stop1=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _x=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        __result_3=it;;
        it=__result_3;
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_t_e958,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept3;
alt2_4:
        ptr->pos=oldpos3;
        if (cut2) {
            it=failobj;
            goto fail;
        }
        if (1) {
            it=failobj;
            goto fail;
        };
accept3:
        ;
        break;
    case '#' ... '#':
        ;
        int oldpos5=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_2;
        }
        __result=it;;

        ;
        goto accept5;
alt3_2:
        ptr->pos=oldpos5;
        int oldpos6=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject3;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept6;
reject3:
        x=0;
accept6:
        it=Qnil;
        ptr->pos=oldpos6;
        if (x==0) {
            it=failobj;
            goto alt3_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt3_3:
        ptr->pos=oldpos5;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=Amethyst_line(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_4;
        }
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy_AmethystParser_Comment_lb__ed6f,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt3_4:
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto fail;
        };
accept5:
        ;
        break;
    case UC(39) ... UC(39):
        ;
        int oldpos7=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_2;
        }
        __result=it;;

        ;
        goto accept7;
alt4_2:
        ptr->pos=oldpos7;
        int oldpos8=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject4;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept8;
reject4:
        x=0;
accept8:
        it=Qnil;
        ptr->pos=oldpos8;
        if (x==0) {
            it=failobj;
            goto alt4_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept7;
alt4_3:
        ptr->pos=oldpos7;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_ary_new3(0);
        _x=it;;
        int stop2=0;
        while(!stop2) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '[':
                ;
            case ']' ... UC(255):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '&':
                    ;
                case '(' ... UC(255):
                    ;
                    it=Qnil;
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt4_4;
                    }
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case UC(39) ... UC(39):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut4=1;
                    stop2=1;
                    break;
                }
                break;
            case UC(92) ... UC(92):
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '&':
                    ;
                case '(' ... UC(255):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_2=it;;
                    it=AmethystCore_append(self,_x,_autovar_2);
                    it=AmethystCore_anything(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt4_4;
                    }
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case UC(39) ... UC(39):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut4=1;
                    stop2=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);
        _x=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        __result_3=it;;
        it=__result_3;
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_s_9322,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept7;
alt4_4:
        ptr->pos=oldpos7;
        if (cut4) {
            it=failobj;
            goto fail;
        }
        if (1) {
            it=failobj;
            goto fail;
        };
accept7:
        ;
        break;
    case '(' ... '(':
        ;
        int oldpos9=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt5_2;
        }
        __result=it;;

        ;
        goto accept9;
alt5_2:
        ptr->pos=oldpos9;
        int oldpos10=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject5;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept10;
reject5:
        x=0;
accept10:
        it=Qnil;
        ptr->pos=oldpos10;
        if (x==0) {
            it=failobj;
            goto alt5_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept9;
alt5_3:
        ptr->pos=oldpos9;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=AmethystParser_expression(self );
        _x_2=it;;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt5_4;
            }
            break;
        case ')' ... ')':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'Z':
            ;
        case UC(92) ... UC(255):
            ;
            bind_aset(bind2,1,_x_2);
            it=rb_funcall(self,sy_AmethystParser_Parenthe_261b,1,bind2);
            _x_2=bind_aget(bind2,1);;
            __result=it;;
            break;
        case '[' ... '[':
            ;
            int oldpos11=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt6_2;
            }
            it=_x_2;
            _ors=it;;
            bind_aset(bind2,1,_ors);
            it=rb_funcall(self,sy_AmethystParser_a_eq_autova_57aa,1,bind2);
            _ors=bind_aget(bind2,1);;
            __result_4=it;;
            it=__result_4;
            __result=it;;

            ;
            goto accept11;
alt6_2:
            ptr->pos=oldpos11;
            bind_aset(bind2,1,_x_2);
            it=rb_funcall(self,sy_AmethystParser_Parenthe_261b,1,bind2);
            _x_2=bind_aget(bind2,1);;
            __result=it;;

            ;
            goto accept11;
alt6_3:
            ptr->pos=oldpos11;
            if (1) {
                it=failobj;
                goto alt5_4;
            };
accept11:
            ;
            break;
        }
        ;
        goto accept9;
alt5_4:
        ptr->pos=oldpos9;
        if (1) {
            it=failobj;
            goto fail;
        };
accept9:
        ;
        break;
    case '-' ... '-':
        ;
    case '{' ... '{':
        ;
        int oldpos12=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt7_2;
        }
        __result=it;;

        ;
        goto accept12;
alt7_2:
        ptr->pos=oldpos12;
        int oldpos13=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject6;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept13;
reject6:
        x=0;
accept13:
        it=Qnil;
        ptr->pos=oldpos13;
        if (x==0) {
            it=failobj;
            goto alt7_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept12;
alt7_3:
        ptr->pos=oldpos12;
        it=AmethystParser_host_expr(self );
        if (it==failobj) {
            it=failobj;
            goto alt7_4;
        }
        __result=it;;

        ;
        goto accept12;
alt7_4:
        ptr->pos=oldpos12;
        if (1) {
            it=failobj;
            goto fail;
        };
accept12:
        ;
        break;
    case '.' ... '.':
        ;
        int oldpos14=ptr->pos;
        int cut8=0;
alt8_1:
        ;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt8_2;
        }
        __result=it;;

        ;
        goto accept14;
alt8_2:
        ptr->pos=oldpos14;
        int oldpos15=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject7;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept15;
reject7:
        x=0;
accept15:
        it=Qnil;
        ptr->pos=oldpos15;
        if (x==0) {
            it=failobj;
            goto alt8_3;
        }
        int oldpos16=ptr->pos;
        int cut9=0;
alt9_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        ;
        goto accept16;
alt9_2:
        ptr->pos=oldpos16;
        it=Qnil;
        ;
        goto accept16;
alt9_3:
        ptr->pos=oldpos16;
        if (1) {
            it=failobj;
            goto alt8_3;
        };
accept16:
        ;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept14;
alt8_3:
        ptr->pos=oldpos14;
        if (1) {
            it=failobj;
            goto fail;
        };
accept14:
        ;
        break;
    case '@' ... '@':
        ;
        int oldpos17=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt10_2;
        }
        __result=it;;

        ;
        goto accept17;
alt10_2:
        ptr->pos=oldpos17;
        int oldpos18=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject8;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept18;
reject8:
        x=0;
accept18:
        it=Qnil;
        ptr->pos=oldpos18;
        if (x==0) {
            it=failobj;
            goto alt10_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept17;
alt10_3:
        ptr->pos=oldpos17;
        it=AmethystParser_key(self );
        if (it==failobj) {
            it=failobj;
            goto alt10_4;
        }
        _it=it;;
        bind_aset(bind2,1,_it);
        it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);
        _it=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept17;
alt10_4:
        ptr->pos=oldpos17;
        if (1) {
            it=failobj;
            goto fail;
        };
accept17:
        ;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'a':
        ;
    case 'c' ... 'z':
        ;
        int oldpos19=ptr->pos;
        int cut11=0;
alt11_1:
        ;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt11_2;
        }
        __result=it;;

        ;
        goto accept19;
alt11_2:
        ptr->pos=oldpos19;
        it=AmethystParser_call(self );
        if (it==failobj) {
            it=failobj;
            goto alt11_3;
        }
        __result=it;;

        ;
        goto accept19;
alt11_3:
        ptr->pos=oldpos19;
        int oldpos20=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject9;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept20;
reject9:
        x=0;
accept20:
        it=Qnil;
        ptr->pos=oldpos20;
        if (x==0) {
            it=failobj;
            goto alt11_4;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept19;
alt11_4:
        ptr->pos=oldpos19;
        if (1) {
            it=failobj;
            goto fail;
        };
accept19:
        ;
        break;
    case '[' ... '[':
        ;
        int oldpos21=ptr->pos;
        int cut12=0;
alt12_1:
        ;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt12_2;
        }
        __result=it;;

        ;
        goto accept21;
alt12_2:
        ptr->pos=oldpos21;
        int oldpos22=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject10;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept22;
reject10:
        x=0;
accept22:
        it=Qnil;
        ptr->pos=oldpos22;
        if (x==0) {
            it=failobj;
            goto alt12_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept21;
alt12_3:
        ptr->pos=oldpos21;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=AmethystParser_expression(self );
        _e=it;;
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(92):
            ;
        case '^' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt12_4;
            }
            break;
        case ']' ... ']':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        bind_aset(bind2,1,_e);
        it=rb_funcall(self,sy_AmethystParser_Enter_AS_06e8,1,bind2);
        _e=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept21;
alt12_4:
        ptr->pos=oldpos21;
        if (1) {
            it=failobj;
            goto fail;
        };
accept21:
        ;
        break;
    case 'b' ... 'b':
        ;
        int oldpos23=ptr->pos;
        int cut13=0;
alt13_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='k')  ptr->pos+=4;
        else if (1) {
            it=failobj;
            goto alt13_2;
        }
        it=rb_funcall(self,sy_AmethystParser_Seq_AST_lb__1817,1,bind2);
        __result=it;;

        ;
        goto accept23;
alt13_2:
        ptr->pos=oldpos23;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt13_3;
        }
        __result=it;;

        ;
        goto accept23;
alt13_3:
        ptr->pos=oldpos23;
        it=AmethystParser_call(self );
        if (it==failobj) {
            it=failobj;
            goto alt13_4;
        }
        __result=it;;

        ;
        goto accept23;
alt13_4:
        ptr->pos=oldpos23;
        int oldpos24=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto reject11;
            }
            break;
        case '.' ... '.':
            ;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        x=1;
        goto accept24;
reject11:
        x=0;
accept24:
        it=Qnil;
        ptr->pos=oldpos24;
        if (x==0) {
            it=failobj;
            goto alt13_5;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept23;
alt13_5:
        ptr->pos=oldpos23;
        if (1) {
            it=failobj;
            goto fail;
        };
accept23:
        ;
        break;
    }
fail:
    return it;
}
void Init_AmethystParser_c() {
    cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_AmethystParser,"profile_report",profile_report_AmethystParser,0);
    s_Amethyst_fe41=rb_str_new2("Amethyst");
    rb_global_variable(&s_Amethyst_fe41);
    s__at__518e=rb_str_new2("@");
    rb_global_variable(&s__at__518e);
    s__bs__bs__7f81=rb_str_new2("\\");
    rb_global_variable(&s__bs__bs__7f81);
    s__bs__sh__le__a90f=rb_str_new2("#{");
    rb_global_variable(&s__bs__sh__le__a90f);
    s__co__853a=rb_str_new2(":");
    rb_global_variable(&s__co__853a);
    s__co__at__4bf0=rb_str_new2(":@");
    rb_global_variable(&s__co__at__4bf0);
    s__d41d=rb_str_new2("");
    rb_global_variable(&s__d41d);
    s__dot__dot__58b9=rb_str_new2("..");
    rb_global_variable(&s__dot__dot__58b9);
    s__dot__dot__dot__2f43=rb_str_new2("...");
    rb_global_variable(&s__dot__dot__dot__2f43);
    s__eq__43ec=rb_str_new2("=");
    rb_global_variable(&s__eq__43ec);
    s__gt__cedf=rb_str_new2(">");
    rb_global_variable(&s__gt__cedf);
    s__lb__8154=rb_str_new2("[");
    rb_global_variable(&s__lb__8154);
    s__lb__rb__d751=rb_str_new2("[]");
    rb_global_variable(&s__lb__rb__d751);
    s__le__f95b=rb_str_new2("{");
    rb_global_variable(&s__le__f95b);
    s__lp__84c4=rb_str_new2("(");
    rb_global_variable(&s__lp__84c4);
    s__lt__524a=rb_str_new2("<");
    rb_global_variable(&s__lt__524a);
    s__rb__0fbd=rb_str_new2("]");
    rb_global_variable(&s__rb__0fbd);
    s__re__cbb1=rb_str_new2("}");
    rb_global_variable(&s__re__cbb1);
    s__rp__9371=rb_str_new2(")");
    rb_global_variable(&s__rp__9371);
    s__ti__3389=rb_str_new2("*");
    rb_global_variable(&s__ti__3389);
    switchhash_AmethystParser_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystParser_1);;
    switchhash_AmethystParser_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystParser_2);;
    sy_AmethystParser_Act_lb_Args_23b1=rb_intern("AmethystParser_Act_lb_Args_23b1");
    sy_AmethystParser_Act_lb_bind_7d0b=rb_intern("AmethystParser_Act_lb_bind_7d0b");
    sy_AmethystParser_Apply_lb__dq_a_1437=rb_intern("AmethystParser_Apply_lb__dq_a_1437");
    sy_AmethystParser_Apply_lb__dq_c_a8b6=rb_intern("AmethystParser_Apply_lb__dq_c_a8b6");
    sy_AmethystParser_Apply_lb__dq_m_2ec1=rb_intern("AmethystParser_Apply_lb__dq_m_2ec1");
    sy_AmethystParser_Apply_lb__dq_r_269c=rb_intern("AmethystParser_Apply_lb__dq_r_269c");
    sy_AmethystParser_Apply_lb__dq_s_9322=rb_intern("AmethystParser_Apply_lb__dq_s_9322");
    sy_AmethystParser_Apply_lb__dq_t_e958=rb_intern("AmethystParser_Apply_lb__dq_t_e958");
    sy_AmethystParser_Apply_lb__lb_b_099b=rb_intern("AmethystParser_Apply_lb__lb_b_099b");
    sy_AmethystParser_Apply_lb_bi_9146=rb_intern("AmethystParser_Apply_lb_bi_9146");
    sy_AmethystParser_Args_lb__le__co_a_9abe=rb_intern("AmethystParser_Args_lb__le__co_a_9abe");
    sy_AmethystParser_Bind_lb_loc_37df=rb_intern("AmethystParser_Bind_lb_loc_37df");
    sy_AmethystParser_Bind_lb_loc_5836=rb_intern("AmethystParser_Bind_lb_loc_5836");
    sy_AmethystParser_Comment_lb__ed6f=rb_intern("AmethystParser_Comment_lb__ed6f");
    sy_AmethystParser_Contextu_32ad=rb_intern("AmethystParser_Contextu_32ad");
    sy_AmethystParser_Contextu_4e8d=rb_intern("AmethystParser_Contextu_4e8d");
    sy_AmethystParser_Enter_AS_06e8=rb_intern("AmethystParser_Enter_AS_06e8");
    sy_AmethystParser_Enter_AS_3242=rb_intern("AmethystParser_Enter_AS_3242");
    sy_AmethystParser_Global_lb_b_0216=rb_intern("AmethystParser_Global_lb_b_0216");
    sy_AmethystParser_Grammar_dot__a510=rb_intern("AmethystParser_Grammar_dot__a510");
    sy_AmethystParser_Key_lb_bind_5e9f=rb_intern("AmethystParser_Key_lb_bind_5e9f");
    sy_AmethystParser_Lambda_lb_B_2c90=rb_intern("AmethystParser_Lambda_lb_B_2c90");
    sy_AmethystParser_Lookahea_0946=rb_intern("AmethystParser_Lookahea_0946");
    sy_AmethystParser_Many_lb_bin_14d1=rb_intern("AmethystParser_Many_lb_bin_14d1");
    sy_AmethystParser_Or_AST_dot_c_19e2=rb_intern("AmethystParser_Or_AST_dot_c_19e2");
    sy_AmethystParser_Or_AST_lb_b_0657=rb_intern("AmethystParser_Or_AST_lb_b_0657");
    sy_AmethystParser_Parenthe_261b=rb_intern("AmethystParser_Parenthe_261b");
    sy_AmethystParser_Pass_AST_6bd0=rb_intern("AmethystParser_Pass_AST_6bd0");
    sy_AmethystParser_Pred_lb_bin_ae38=rb_intern("AmethystParser_Pred_lb_bin_ae38");
    sy_AmethystParser_Result_lb__le__a3b4=rb_intern("AmethystParser_Result_lb__le__a3b4");
    sy_AmethystParser_Rule_dot_cre_113e=rb_intern("AmethystParser_Rule_dot_cre_113e");
    sy_AmethystParser_Seq_AST_dot__a126=rb_intern("AmethystParser_Seq_AST_dot__a126");
    sy_AmethystParser_Seq_AST_lb__1817=rb_intern("AmethystParser_Seq_AST_lb__1817");
    sy_AmethystParser_Seq_AST_lb__66a7=rb_intern("AmethystParser_Seq_AST_lb__66a7");
    sy_AmethystParser_Strin_lb__lb__dq__b20e=rb_intern("AmethystParser_Strin_lb__lb__dq__b20e");
    sy_AmethystParser_Strin_lb__lb__qu__88c8=rb_intern("AmethystParser_Strin_lb__lb__qu__88c8");
    sy_AmethystParser__at_appends_b984=rb_intern("AmethystParser__at_appends_b984");
    sy_AmethystParser__at_appends_d29d=rb_intern("AmethystParser__at_appends_d29d");
    sy_AmethystParser__at_ary_eq__lb__rb_=rb_intern("AmethystParser__at_ary_eq__lb__rb_");
    sy_AmethystParser__at_ary_ff69=rb_intern("AmethystParser__at_ary_ff69");
    sy_AmethystParser__at_ary_lt__lt_Ar_59e3=rb_intern("AmethystParser__at_ary_lt__lt_Ar_59e3");
    sy_AmethystParser__at_bnding_7d3c=rb_intern("AmethystParser__at_bnding_7d3c");
    sy_AmethystParser__at_locals_dot__bdc6=rb_intern("AmethystParser__at_locals_dot__bdc6");
    sy_AmethystParser__at_locals_eq__4fc1=rb_intern("AmethystParser__at_locals_eq__4fc1");
    sy_AmethystParser__at_tmp_lt__lt_bi_b81c=rb_intern("AmethystParser__at_tmp_lt__lt_bi_b81c");
    sy_AmethystParser__dq__le__dq__pl_bind_567e=rb_intern("AmethystParser__dq__le__dq__pl_bind_567e");
    sy_AmethystParser__lb__dq__lp__dq_=rb_intern("AmethystParser__lb__dq__lp__dq_");
    sy_AmethystParser__lb_bind_lb_1_rb__6281=rb_intern("AmethystParser__lb_bind_lb_1_rb__6281");
    sy_AmethystParser__lp_bind_lb_1_rb__a724=rb_intern("AmethystParser__lp_bind_lb_1_rb__a724");
    sy_AmethystParser_a_eq_autova_57aa=rb_intern("AmethystParser_a_eq_autova_57aa");
    sy_AmethystParser_bind_lb_1_rb_=rb_intern("AmethystParser_bind_lb_1_rb_");
    sy_AmethystParser_bind_lb_1_rb__dot__4688=rb_intern("AmethystParser_bind_lb_1_rb__dot__4688");
    sy_AmethystParser_bind_lb_1_rb__dot__7b93=rb_intern("AmethystParser_bind_lb_1_rb__dot__7b93");
    sy_AmethystParser_bind_lb_1_rb__dot__e879=rb_intern("AmethystParser_bind_lb_1_rb__dot__e879");
    sy_AmethystParser_bind_lb_1_rb__eq__3c5b=rb_intern("AmethystParser_bind_lb_1_rb__eq__3c5b");
    sy_AmethystParser_bind_lb_1_rb__eq__4e2f=rb_intern("AmethystParser_bind_lb_1_rb__eq__4e2f");
    sy_AmethystParser_bind_lb_1_rb__eq__9a0b=rb_intern("AmethystParser_bind_lb_1_rb__eq__9a0b");
    sy_AmethystParser_bind_lb_1_rb__eq__a882=rb_intern("AmethystParser_bind_lb_1_rb__eq__a882");
    sy_AmethystParser_bind_lb_1_rb__eq__c77b=rb_intern("AmethystParser_bind_lb_1_rb__eq__c77b");
    sy_AmethystParser_bind_lb_1_rb__lt__798b=rb_intern("AmethystParser_bind_lb_1_rb__lt__798b");
    sy_AmethystParser_bind_lb_1_rb__pl__b087=rb_intern("AmethystParser_bind_lb_1_rb__pl__b087");
    sy_AmethystParser_bind_lb_1_rb__sp__5934=rb_intern("AmethystParser_bind_lb_1_rb__sp__5934");
    sy_AmethystParser_local_lp_bi_196b=rb_intern("AmethystParser_local_lp_bi_196b");
    sy_AmethystParser_pos_5e0b=rb_intern("AmethystParser_pos_5e0b");
    sy_AmethystParser_x_eq__dq_ameth_733c=rb_intern("AmethystParser_x_eq__dq_ameth_733c");
    rb_define_method(cls_AmethystParser,"_args",AmethystParser__args,2);
    rb_define_method(cls_AmethystParser,"args",AmethystParser_args,2);
    rb_define_method(cls_AmethystParser,"argsOpt",AmethystParser_argsOpt,0);
    rb_define_method(cls_AmethystParser,"call",AmethystParser_call,0);
    rb_define_method(cls_AmethystParser,"cases",AmethystParser_cases,0);
    rb_define_method(cls_AmethystParser,"className",AmethystParser_className,0);
    rb_define_method(cls_AmethystParser,"collect",AmethystParser_collect,1);
    rb_define_method(cls_AmethystParser,"expression",AmethystParser_expression,0);
    rb_define_method(cls_AmethystParser,"file",AmethystParser_file,0);
    rb_define_method(cls_AmethystParser,"grammar",AmethystParser_grammar,0);
    rb_define_method(cls_AmethystParser,"host_expr",AmethystParser_host_expr,0);
    rb_define_method(cls_AmethystParser,"inline_host_expr",AmethystParser_inline_host_expr,0);
    rb_define_method(cls_AmethystParser,"interpolated",AmethystParser_interpolated,1);
    rb_define_method(cls_AmethystParser,"key",AmethystParser_key,0);
    rb_define_method(cls_AmethystParser,"lambda",AmethystParser_lambda,0);
    rb_define_method(cls_AmethystParser,"name",AmethystParser_name,0);
    rb_define_method(cls_AmethystParser,"nr",AmethystParser_nr,0);
    rb_define_method(cls_AmethystParser,"postfixed",AmethystParser_postfixed,0);
    rb_define_method(cls_AmethystParser,"prefixed",AmethystParser_prefixed,0);
    rb_define_method(cls_AmethystParser,"procargs",AmethystParser_procargs,0);
    rb_define_method(cls_AmethystParser,"procargs2",AmethystParser_procargs2,0);
    rb_define_method(cls_AmethystParser,"rubyarg",AmethystParser_rubyarg,0);
    rb_define_method(cls_AmethystParser,"rule",AmethystParser_rule,0);
    rb_define_method(cls_AmethystParser,"ruleargs",AmethystParser_ruleargs,0);
    rb_define_method(cls_AmethystParser,"sequence",AmethystParser_sequence,0);
    rb_define_method(cls_AmethystParser,"string_like",AmethystParser_string_like,2);
    rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
}
