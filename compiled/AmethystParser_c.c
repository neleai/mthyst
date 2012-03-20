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
static VALUE sy_AmethystParser_Or_AST_lb_b_3220;
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
static VALUE sy_AmethystParser__at_appends_36ee;
static VALUE sy_AmethystParser__at_appends_b984;
static VALUE sy_AmethystParser__at_ary_eq__lb__rb_;
static VALUE sy_AmethystParser__at_ary_ff69;
static VALUE sy_AmethystParser__at_ary_lt__lt_Ar_59e3;
static VALUE sy_AmethystParser__at_bnding_7d3c;
static VALUE sy_AmethystParser__at_locals_dot__bdc6;
static VALUE sy_AmethystParser__at_locals_eq__4fc1;
static VALUE sy_AmethystParser__at_tmp_lt__lt_bi_b81c;
static VALUE sy_AmethystParser__dq__le__dq__pl_bind_567e;
static VALUE sy_AmethystParser__dq_amethys_673b;
static VALUE sy_AmethystParser__lb__dq__lp__dq_;
static VALUE sy_AmethystParser__lb_bind_lb_1_rb__6281;
static VALUE sy_AmethystParser__lb_bind_lb_1_rb__c1c8;
static VALUE sy_AmethystParser__lb_bind_lb_1_rb__f4d6;
static VALUE sy_AmethystParser__lp_bind_lb_1_rb__a724;
static VALUE sy_AmethystParser_a_eq_autova_57aa;
static VALUE sy_AmethystParser_bind_lb_1_rb_;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__1371;
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
        VALUE lalt12autovar_2=_autovar_2;
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
        _autovar_2=lalt12autovar_2;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_2=_autovar_2;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        _autovar_2=lalt13autovar_2;
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
        VALUE lalt12autovar_2=_autovar_2;
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
        _autovar_2=lalt12autovar_2;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_2=_autovar_2;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        _autovar_2=lalt13autovar_2;
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
    VALUE it ,_autovar,_autovar_2,_r,__result,_r_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,__result_2,_l;
    VALUE bind2=bind_new2(16);
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
    case '!' ... UC(39):
        ;
    case ')' ... '_':
        ;
    case 'a' ... UC(255):
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar=_autovar;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12r=_r;
        VALUE lalt12_result=__result;
        VALUE lalt12r_2=_r_2;
        VALUE lalt12autovar_3=_autovar_3;
        VALUE lalt12autovar_4=_autovar_4;
        VALUE lalt12autovar_5=_autovar_5;
        VALUE lalt12autovar_6=_autovar_6;
        VALUE lalt12_result_2=__result_2;
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
            VALUE lalt22autovar_2=_autovar_2;
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
            _autovar_2=lalt22autovar_2;
            ptr->pos=oldpos2;
            VALUE lalt23autovar_2=_autovar_2;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            _autovar_2=lalt23autovar_2;
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
        _autovar=lalt12autovar;
        _autovar_2=lalt12autovar_2;
        _r=lalt12r;
        __result=lalt12_result;
        _r_2=lalt12r_2;
        _autovar_3=lalt12autovar_3;
        _autovar_4=lalt12autovar_4;
        _autovar_5=lalt12autovar_5;
        _autovar_6=lalt12autovar_6;
        __result_2=lalt12_result_2;
        ptr->pos=oldpos1;
        VALUE lalt13autovar=_autovar;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13r=_r;
        VALUE lalt13_result=__result;
        VALUE lalt13r_2=_r_2;
        VALUE lalt13autovar_3=_autovar_3;
        VALUE lalt13autovar_4=_autovar_4;
        VALUE lalt13autovar_5=_autovar_5;
        VALUE lalt13autovar_6=_autovar_6;
        VALUE lalt13_result_2=__result_2;
        it=rb_ary_new3(0);
        __result_2=it;;

        ;
        goto accept1;
alt1_3:
        _autovar=lalt13autovar;
        _autovar_2=lalt13autovar_2;
        _r=lalt13r;
        __result=lalt13_result;
        _r_2=lalt13r_2;
        _autovar_3=lalt13autovar_3;
        _autovar_4=lalt13autovar_4;
        _autovar_5=lalt13autovar_5;
        _autovar_6=lalt13autovar_6;
        __result_2=lalt13_result_2;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto memo_fail;
        };
accept1:
        ;
        break;
    case '(' ... '(':
        ;
    case '`' ... '`':
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        VALUE lalt32_result_2=__result_2;
        VALUE lalt32l=_l;
        it=AmethystParser_lambda(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_2;
        }
        _l=it;;
        bind_aset(bind2,1,_l);
        it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_1_rb__f4d6,1,bind2);
        _l=bind_aget(bind2,1);;
        __result_2=it;;

        ;
        goto accept3;
alt3_2:
        __result_2=lalt32_result_2;
        _l=lalt32l;
        ptr->pos=oldpos3;
        VALUE lalt33autovar=_autovar;
        VALUE lalt33autovar_2=_autovar_2;
        VALUE lalt33r=_r;
        VALUE lalt33_result=__result;
        VALUE lalt33r_2=_r_2;
        VALUE lalt33autovar_3=_autovar_3;
        VALUE lalt33autovar_4=_autovar_4;
        VALUE lalt33autovar_5=_autovar_5;
        VALUE lalt33autovar_6=_autovar_6;
        VALUE lalt33_result_2=__result_2;
        VALUE lalt33l=_l;
        it=Qnil;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt3_3;
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
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE lalt42autovar_2=_autovar_2;
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
            _autovar_2=lalt42autovar_2;
            ptr->pos=oldpos4;
            VALUE lalt43autovar_2=_autovar_2;
            stop2=1;
            ;
            goto accept4;
alt4_3:
            _autovar_2=lalt43autovar_2;
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto alt3_3;
            };
accept4:
            ;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt3_3;
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
            goto alt3_3;
        }
success3:
        *ptr=oldpass3;
        it=_autovar_6;
        __result_2=it;;

        ;
        goto accept3;
alt3_3:
        _autovar=lalt33autovar;
        _autovar_2=lalt33autovar_2;
        _r=lalt33r;
        __result=lalt33_result;
        _r_2=lalt33r_2;
        _autovar_3=lalt33autovar_3;
        _autovar_4=lalt33autovar_4;
        _autovar_5=lalt33autovar_5;
        _autovar_6=lalt33autovar_6;
        __result_2=lalt33_result_2;
        _l=lalt33l;
        ptr->pos=oldpos3;
        VALUE lalt34autovar=_autovar;
        VALUE lalt34autovar_2=_autovar_2;
        VALUE lalt34r=_r;
        VALUE lalt34_result=__result;
        VALUE lalt34r_2=_r_2;
        VALUE lalt34autovar_3=_autovar_3;
        VALUE lalt34autovar_4=_autovar_4;
        VALUE lalt34autovar_5=_autovar_5;
        VALUE lalt34autovar_6=_autovar_6;
        VALUE lalt34_result_2=__result_2;
        VALUE lalt34l=_l;
        it=rb_ary_new3(0);
        __result_2=it;;

        ;
        goto accept3;
alt3_4:
        _autovar=lalt34autovar;
        _autovar_2=lalt34autovar_2;
        _r=lalt34r;
        __result=lalt34_result;
        _r_2=lalt34r_2;
        _autovar_3=lalt34autovar_3;
        _autovar_4=lalt34autovar_4;
        _autovar_5=lalt34autovar_5;
        _autovar_6=lalt34autovar_6;
        __result_2=lalt34_result_2;
        _l=lalt34l;
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto memo_fail;
        };
accept3:
        ;
        break;
    case UC(9) ... UC(10):
        ;
    case UC(12) ... UC(13):
        ;
    case ' ' ... ' ':
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        VALUE lalt52autovar=_autovar;
        VALUE lalt52autovar_2=_autovar_2;
        VALUE lalt52r=_r;
        VALUE lalt52_result=__result;
        VALUE lalt52r_2=_r_2;
        VALUE lalt52autovar_3=_autovar_3;
        VALUE lalt52autovar_4=_autovar_4;
        VALUE lalt52autovar_5=_autovar_5;
        VALUE lalt52autovar_6=_autovar_6;
        VALUE lalt52_result_2=__result_2;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        it=Amethyst__(self );
        if (it==failobj) {
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
            goto alt5_2;
        }
        it=Qnil;
        ;
        goto accept6;
alt6_3:
        ptr->pos=oldpos6;
        if (1) {
            it=failobj;
            goto alt5_2;
        };
accept6:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt5_2;
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
        int stop3=0;
        while(!stop3) {
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            VALUE lalt72autovar_2=_autovar_2;
            it=AmethystParser_rubyarg(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            ;
            goto accept7;
alt7_2:
            _autovar_2=lalt72autovar_2;
            ptr->pos=oldpos7;
            VALUE lalt73autovar_2=_autovar_2;
            stop3=1;
            ;
            goto accept7;
alt7_3:
            _autovar_2=lalt73autovar_2;
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto alt5_2;
            };
accept7:
            ;
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto alt5_2;
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
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_3;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _autovar_4=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_4);
        it=AmethystParser_procargs(self );
        _autovar_5=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass6;
        }
        goto success6;
pass6:
        *ptr=oldpass6;
        if (1) {
            it=failobj;
            goto pass5;
        }
success6:
        *ptr=oldpass6;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass5;
        }
        it=_autovar_5;
        _autovar_6=it;;

        goto success5;
pass5:
        *ptr=oldpass5;
        if (1) {
            it=failobj;
            goto alt5_2;
        }
success5:
        *ptr=oldpass5;
        it=_autovar_6;
        __result_2=it;;

        ;
        goto accept5;
alt5_2:
        _autovar=lalt52autovar;
        _autovar_2=lalt52autovar_2;
        _r=lalt52r;
        __result=lalt52_result;
        _r_2=lalt52r_2;
        _autovar_3=lalt52autovar_3;
        _autovar_4=lalt52autovar_4;
        _autovar_5=lalt52autovar_5;
        _autovar_6=lalt52autovar_6;
        __result_2=lalt52_result_2;
        ptr->pos=oldpos5;
        VALUE lalt53autovar=_autovar;
        VALUE lalt53autovar_2=_autovar_2;
        VALUE lalt53r=_r;
        VALUE lalt53_result=__result;
        VALUE lalt53r_2=_r_2;
        VALUE lalt53autovar_3=_autovar_3;
        VALUE lalt53autovar_4=_autovar_4;
        VALUE lalt53autovar_5=_autovar_5;
        VALUE lalt53autovar_6=_autovar_6;
        VALUE lalt53_result_2=__result_2;
        it=rb_ary_new3(0);
        __result_2=it;;

        ;
        goto accept5;
alt5_3:
        _autovar=lalt53autovar;
        _autovar_2=lalt53autovar_2;
        _r=lalt53r;
        __result=lalt53_result;
        _r_2=lalt53r_2;
        _autovar_3=lalt53autovar_3;
        _autovar_4=lalt53autovar_4;
        _autovar_5=lalt53autovar_5;
        _autovar_6=lalt53autovar_6;
        __result_2=lalt53_result_2;
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto memo_fail;
        };
accept5:
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
    VALUE it ,_k,_n,_name,_arg,_autovar,__result;
    VALUE bind2=bind_new2(16);
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
        VALUE lalt12k=_k;
        VALUE lalt12n=_n;
        VALUE lalt12name=_name;
        it=AmethystParser_className(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _k=it;;
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
            _n=it;;
            break;
        }
        bind_aset(bind2,1,_k);
        bind_aset(bind2,2,_n);
        it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_1_rb__c1c8,1,bind2);
        _k=bind_aget(bind2,1);;
        _n=bind_aget(bind2,2);;
        _name=it;;

        ;
        goto accept1;
alt1_2:
        _k=lalt12k;
        _n=lalt12n;
        _name=lalt12name;
        ptr->pos=oldpos1;
        VALUE lalt13k=_k;
        VALUE lalt13n=_n;
        VALUE lalt13name=_name;
        it=AmethystParser_name(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        _name=it;;

        ;
        goto accept1;
alt1_3:
        _k=lalt13k;
        _n=lalt13n;
        _name=lalt13name;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        it=AmethystParser_argsOpt(self );
        _arg=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... '_':
            ;
        case 'a' ... UC(255):
            ;
            it=Qnil;
            break;
        case '(' ... '(':
            ;
        case '`' ... '`':
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22autovar=_autovar;
            it=AmethystParser_lambda(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_arg,_autovar);
            ;
            goto accept2;
alt2_2:
            _autovar=lalt22autovar;
            ptr->pos=oldpos2;
            VALUE lalt23autovar=_autovar;
            it=Qnil;
            ;
            goto accept2;
alt2_3:
            _autovar=lalt23autovar;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto fail;
            };
accept2:
            ;
            break;
        }
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_arg);
        it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9146,1,bind2);
        _name=bind_aget(bind2,1);;
        _arg=bind_aget(bind2,2);;
        __result=it;;
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
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... '_':
            ;
        case 'a' ... UC(255):
            ;
            it=Qnil;
            break;
        case '(' ... '(':
            ;
        case '`' ... '`':
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE lalt32autovar=_autovar;
            it=AmethystParser_lambda(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_arg,_autovar);
            ;
            goto accept3;
alt3_2:
            _autovar=lalt32autovar;
            ptr->pos=oldpos3;
            VALUE lalt33autovar=_autovar;
            it=Qnil;
            ;
            goto accept3;
alt3_3:
            _autovar=lalt33autovar;
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto fail;
            };
accept3:
            ;
            break;
        }
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
        VALUE lalt12_result_3=__result_3;
        VALUE lalt12autovar_3=_autovar_3;
        VALUE lalt12autovar_4=_autovar_4;
        VALUE lalt12_result_4=__result_4;
        VALUE lalt12autovar_5=_autovar_5;
        VALUE lalt12autovar_6=_autovar_6;
        VALUE lalt12it=_it;
        VALUE lalt12num=_num;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22autovar_3=_autovar_3;
        VALUE lalt22autovar_4=_autovar_4;
        VALUE lalt22_result_4=__result_4;
        VALUE lalt22autovar_5=_autovar_5;
        VALUE lalt22autovar_6=_autovar_6;
        VALUE lalt22it=_it;
        VALUE lalt22num=_num;
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
            VALUE lalt32_result_4=__result_4;
            VALUE lalt32autovar_5=_autovar_5;
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
            __result_4=lalt32_result_4;
            _autovar_5=lalt32autovar_5;
            ptr->pos=oldpos3;
            VALUE lalt33_result_4=__result_4;
            VALUE lalt33autovar_5=_autovar_5;
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
            __result_4=lalt33_result_4;
            _autovar_5=lalt33autovar_5;
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
        _autovar_3=lalt22autovar_3;
        _autovar_4=lalt22autovar_4;
        __result_4=lalt22_result_4;
        _autovar_5=lalt22autovar_5;
        _autovar_6=lalt22autovar_6;
        _it=lalt22it;
        _num=lalt22num;
        ptr->pos=oldpos2;
        VALUE lalt23autovar_3=_autovar_3;
        VALUE lalt23autovar_4=_autovar_4;
        VALUE lalt23_result_4=__result_4;
        VALUE lalt23autovar_5=_autovar_5;
        VALUE lalt23autovar_6=_autovar_6;
        VALUE lalt23it=_it;
        VALUE lalt23num=_num;
        it=Amethyst_number(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        _num=it;;

        ;
        goto accept2;
alt2_3:
        _autovar_3=lalt23autovar_3;
        _autovar_4=lalt23autovar_4;
        __result_4=lalt23_result_4;
        _autovar_5=lalt23autovar_5;
        _autovar_6=lalt23autovar_6;
        _it=lalt23it;
        _num=lalt23num;
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
        __result_3=lalt12_result_3;
        _autovar_3=lalt12autovar_3;
        _autovar_4=lalt12autovar_4;
        __result_4=lalt12_result_4;
        _autovar_5=lalt12autovar_5;
        _autovar_6=lalt12autovar_6;
        _it=lalt12it;
        _num=lalt12num;
        ptr->pos=oldpos1;
        VALUE lalt13s=_s;
        VALUE lalt13x=_x;
        VALUE lalt13autovar=_autovar;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13_result=__result;
        VALUE lalt13_result_2=__result_2;
        VALUE lalt13s_2=_s_2;
        VALUE lalt13_result_3=__result_3;
        VALUE lalt13autovar_3=_autovar_3;
        VALUE lalt13autovar_4=_autovar_4;
        VALUE lalt13_result_4=__result_4;
        VALUE lalt13autovar_5=_autovar_5;
        VALUE lalt13autovar_6=_autovar_6;
        VALUE lalt13it=_it;
        VALUE lalt13num=_num;
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
        _s=lalt13s;
        _x=lalt13x;
        _autovar=lalt13autovar;
        _autovar_2=lalt13autovar_2;
        __result=lalt13_result;
        __result_2=lalt13_result_2;
        _s_2=lalt13s_2;
        __result_3=lalt13_result_3;
        _autovar_3=lalt13autovar_3;
        _autovar_4=lalt13autovar_4;
        __result_4=lalt13_result_4;
        _autovar_5=lalt13autovar_5;
        _autovar_6=lalt13autovar_6;
        _it=lalt13it;
        _num=lalt13num;
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
        VALUE lalt42_result_3=__result_3;
        VALUE lalt42clas=_clas;
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
        __result_3=lalt42_result_3;
        _clas=lalt42clas;
        ptr->pos=oldpos4;
        VALUE lalt43s=_s;
        VALUE lalt43x=_x;
        VALUE lalt43autovar=_autovar;
        VALUE lalt43autovar_2=_autovar_2;
        VALUE lalt43_result=__result;
        VALUE lalt43_result_2=__result_2;
        VALUE lalt43s_2=_s_2;
        VALUE lalt43_result_3=__result_3;
        VALUE lalt43clas=_clas;
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
        _s=lalt43s;
        _x=lalt43x;
        _autovar=lalt43autovar;
        _autovar_2=lalt43autovar_2;
        __result=lalt43_result;
        __result_2=lalt43_result_2;
        _s_2=lalt43s_2;
        __result_3=lalt43_result_3;
        _clas=lalt43clas;
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
        VALUE lalt12autovar_3=_autovar_3;
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
        _autovar_3=lalt12autovar_3;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_3=_autovar_3;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        _autovar_3=lalt13autovar_3;
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
    bind_aset(bind2,1,_f);
    bind_aset(bind2,2,_autovar_4);
    it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__1371,1,bind2);
    _f=bind_aget(bind2,1);;
    _autovar_4=bind_aget(bind2,2);;
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
            VALUE lalt12autovar_2=_autovar_2;
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
            VALUE lalt23autovar_2=_autovar_2;
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
            _autovar_2=lalt23autovar_2;
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
            _autovar_2=lalt12autovar_2;
            ptr->pos=oldpos1;
            VALUE lalt13autovar_2=_autovar_2;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            _autovar_2=lalt13autovar_2;
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
            VALUE lalt42autovar_2=_autovar_2;
            VALUE lalt42oldpos=_oldpos;
            VALUE lalt42autovar_3=_autovar_3;
            VALUE lalt42autovar_4=_autovar_4;
            VALUE lalt42g=_g;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            VALUE lalt52autovar_2=_autovar_2;
            VALUE lalt52oldpos=_oldpos;
            VALUE lalt52autovar_3=_autovar_3;
            VALUE lalt52autovar_4=_autovar_4;
            VALUE lalt52g=_g;
            it=rb_funcall(self,sy_AmethystParser_pos_5e0b,1,bind2);
            _oldpos=it;;
            it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);
            it=AmethystParser_lambda(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            bind_aset(bind2,1,_oldpos);
            it=rb_funcall(self,sy_AmethystParser__dq_amethys_673b,1,bind2);
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
            _autovar_2=lalt52autovar_2;
            _oldpos=lalt52oldpos;
            _autovar_3=lalt52autovar_3;
            _autovar_4=lalt52autovar_4;
            _g=lalt52g;
            ptr->pos=oldpos5;
            VALUE lalt53autovar_2=_autovar_2;
            VALUE lalt53oldpos=_oldpos;
            VALUE lalt53autovar_3=_autovar_3;
            VALUE lalt53autovar_4=_autovar_4;
            VALUE lalt53g=_g;
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
            _autovar_2=lalt53autovar_2;
            _oldpos=lalt53oldpos;
            _autovar_3=lalt53autovar_3;
            _autovar_4=lalt53autovar_4;
            _g=lalt53g;
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
            _autovar_2=lalt42autovar_2;
            _oldpos=lalt42oldpos;
            _autovar_3=lalt42autovar_3;
            _autovar_4=lalt42autovar_4;
            _g=lalt42g;
            ptr->pos=oldpos4;
            VALUE lalt43autovar_2=_autovar_2;
            VALUE lalt43oldpos=_oldpos;
            VALUE lalt43autovar_3=_autovar_3;
            VALUE lalt43autovar_4=_autovar_4;
            VALUE lalt43g=_g;
            stop1=1;
            ;
            goto accept4;
alt4_3:
            _autovar_2=lalt43autovar_2;
            _oldpos=lalt43oldpos;
            _autovar_3=lalt43autovar_3;
            _autovar_4=lalt43autovar_4;
            _g=lalt43g;
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
            VALUE lalt72autovar_2=_autovar_2;
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            VALUE lalt82autovar_2=_autovar_2;
            it=AmethystParser_grammar(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_2;
            }
            _autovar_2=it;;

            ;
            goto accept8;
alt8_2:
            _autovar_2=lalt82autovar_2;
            ptr->pos=oldpos8;
            VALUE lalt83autovar_2=_autovar_2;
            it=rb_funcall(self,sy_AmethystParser_pos_5e0b,1,bind2);
            it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);
            if (1) {
                it=failobj;
                goto alt8_3;
            }
            ;
            goto accept8;
alt8_3:
            _autovar_2=lalt83autovar_2;
            ptr->pos=oldpos8;
            VALUE lalt84autovar_2=_autovar_2;
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
            _autovar_2=lalt84autovar_2;
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
            _autovar_2=lalt72autovar_2;
            ptr->pos=oldpos7;
            VALUE lalt73autovar_2=_autovar_2;
            stop1=1;
            ;
            goto accept7;
alt7_3:
            _autovar_2=lalt73autovar_2;
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
        VALUE lalt22parent=_parent;
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
        _parent=lalt22parent;
        ptr->pos=oldpos2;
        VALUE lalt23parent=_parent;
        it=rb_obj_clone(s_Amethyst_fe41);
        _parent=it;;

        ;
        goto accept2;
alt2_3:
        _parent=lalt23parent;
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
                VALUE lalt32autovar_2=_autovar_2;
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
                _autovar_2=lalt32autovar_2;
                ptr->pos=oldpos3;
                VALUE lalt33autovar_2=_autovar_2;
                stop1=1;
                ;
                goto accept3;
alt3_3:
                _autovar_2=lalt33autovar_2;
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
            VALUE lalt12autovar_2=_autovar_2;
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
            _autovar_2=lalt12autovar_2;
            ptr->pos=oldpos1;
            VALUE lalt13autovar_2=_autovar_2;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            _autovar_2=lalt13autovar_2;
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
            VALUE lalt12s=_s;
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
            _s=lalt12s;
            ptr->pos=oldpos1;
            if (cut1) {
                it=failobj;
                goto fail;
            }
            VALUE lalt13s=_s;
            VALUE lalt13autovar=_autovar;
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
            _s=lalt13s;
            _autovar=lalt13autovar;
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
            VALUE lalt22s=_s;
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
            _s=lalt22s;
            ptr->pos=oldpos2;
            if (cut2) {
                it=failobj;
                goto fail;
            }
            VALUE lalt23s=_s;
            VALUE lalt23autovar_2=_autovar_2;
            VALUE lalt23autovar_3=_autovar_3;
            VALUE lalt23r=_r;
            VALUE lalt23_result=__result;
            VALUE lalt23r_2=_r_2;
            VALUE lalt23o=_o;
            VALUE lalt23c=_c;
            VALUE lalt23_result_2=__result_2;
            VALUE lalt23autovar_4=_autovar_4;
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
                VALUE lalt32autovar_3=_autovar_3;
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
                _autovar_3=lalt32autovar_3;
                ptr->pos=oldpos3;
                VALUE lalt33autovar_3=_autovar_3;
                stop2=1;
                ;
                goto accept3;
alt3_3:
                _autovar_3=lalt33autovar_3;
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
            _s=lalt23s;
            _autovar_2=lalt23autovar_2;
            _autovar_3=lalt23autovar_3;
            _r=lalt23r;
            __result=lalt23_result;
            _r_2=lalt23r_2;
            _o=lalt23o;
            _c=lalt23c;
            __result_2=lalt23_result_2;
            _autovar_4=lalt23autovar_4;
            ptr->pos=oldpos2;
            VALUE lalt24s=_s;
            VALUE lalt24autovar_2=_autovar_2;
            VALUE lalt24autovar_3=_autovar_3;
            VALUE lalt24r=_r;
            VALUE lalt24_result=__result;
            VALUE lalt24r_2=_r_2;
            VALUE lalt24o=_o;
            VALUE lalt24c=_c;
            VALUE lalt24_result_2=__result_2;
            VALUE lalt24autovar=_autovar;
            VALUE lalt24autovar_4=_autovar_4;
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
            _s=lalt24s;
            _autovar_2=lalt24autovar_2;
            _autovar_3=lalt24autovar_3;
            _r=lalt24r;
            __result=lalt24_result;
            _r_2=lalt24r_2;
            _o=lalt24o;
            _c=lalt24c;
            __result_2=lalt24_result_2;
            _autovar=lalt24autovar;
            _autovar_4=lalt24autovar_4;
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
            VALUE lalt42s=_s;
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
            _s=lalt42s;
            ptr->pos=oldpos4;
            if (cut4) {
                it=failobj;
                goto fail;
            }
            VALUE lalt43s=_s;
            VALUE lalt43autovar=_autovar;
            VALUE lalt43autovar_5=_autovar_5;
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
            _s=lalt43s;
            _autovar=lalt43autovar;
            _autovar_5=lalt43autovar_5;
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
        VALUE lalt12name=_name;
        VALUE lalt12_result=__result;
        VALUE lalt12arg=_arg;
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
            VALUE lalt22name=_name;
            VALUE lalt22_result=__result;
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
            _name=lalt22name;
            __result=lalt22_result;
            ptr->pos=oldpos2;
            VALUE lalt23name=_name;
            VALUE lalt23_result=__result;
            VALUE lalt23arg=_arg;
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
            _name=lalt23name;
            __result=lalt23_result;
            _arg=lalt23arg;
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
        _name=lalt12name;
        __result=lalt12_result;
        _arg=lalt12arg;
        ptr->pos=oldpos1;
        VALUE lalt13name=_name;
        VALUE lalt13_result=__result;
        VALUE lalt13arg=_arg;
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
        _name=lalt13name;
        __result=lalt13_result;
        _arg=lalt13arg;
        ptr->pos=oldpos1;
        VALUE lalt14name=_name;
        VALUE lalt14_result=__result;
        VALUE lalt14arg=_arg;
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
        _name=lalt14name;
        __result=lalt14_result;
        _arg=lalt14arg;
        ptr->pos=oldpos1;
        VALUE lalt15name=_name;
        VALUE lalt15_result=__result;
        VALUE lalt15arg=_arg;
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
        _name=lalt15name;
        __result=lalt15_result;
        _arg=lalt15arg;
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
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    VALUE lalt12s=_s;
    VALUE lalt12s_2=_s_2;
    VALUE lalt12what=_what;
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
    VALUE lalt22s=_s;
    VALUE lalt22s_2=_s_2;
    VALUE lalt22what=_what;
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
        VALUE lalt32s=_s;
        VALUE lalt32s_2=_s_2;
        VALUE lalt32what=_what;
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
            VALUE lalt52s_2=_s_2;
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
            _s_2=lalt52s_2;
            ptr->pos=oldpos5;
            VALUE lalt53s_2=_s_2;
            VALUE lalt53what=_what;
            bind_aset(bind2,1,_what);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
            _what=bind_aget(bind2,1);;
            ;
            goto accept5;
alt5_3:
            _s_2=lalt53s_2;
            _what=lalt53what;
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
            VALUE lalt62s_2=_s_2;
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
            _s_2=lalt62s_2;
            ptr->pos=oldpos6;
            VALUE lalt63s_2=_s_2;
            VALUE lalt63what=_what;
            bind_aset(bind2,1,_what);
            it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);
            _what=bind_aget(bind2,1);;
            ;
            goto accept6;
alt6_3:
            _s_2=lalt63s_2;
            _what=lalt63what;
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
        _s=lalt32s;
        _s_2=lalt32s_2;
        _what=lalt32what;
        ptr->pos=oldpos3;
        VALUE lalt33s=_s;
        VALUE lalt33s_2=_s_2;
        VALUE lalt33what=_what;
        stop1=1;
        ;
        goto accept3;
alt3_3:
        _s=lalt33s;
        _s_2=lalt33s_2;
        _what=lalt33what;
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
    _s=lalt22s;
    _s_2=lalt22s_2;
    _what=lalt22what;
    ptr->pos=oldpos2;
    VALUE lalt23s=_s;
    VALUE lalt23s_2=_s_2;
    VALUE lalt23what=_what;
    it=Qnil;
    ;
    goto accept2;
alt2_3:
    _s=lalt23s;
    _s_2=lalt23s_2;
    _what=lalt23what;
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
    _s=lalt12s;
    _s_2=lalt12s_2;
    _what=lalt12what;
    ptr->pos=oldpos1;
    if (cut1) {
        it=failobj;
        goto fail;
    }
    VALUE lalt13s=_s;
    VALUE lalt13s_2=_s_2;
    VALUE lalt13what=_what;
    VALUE lalt13_result=__result;
    it=Qnil;
    __result=it;;

    ;
    goto accept1;
alt1_3:
    _s=lalt13s;
    _s_2=lalt13s_2;
    _what=lalt13what;
    __result=lalt13_result;
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
    VALUE it ,_from,_one,_e,_name,_autovar,_autovar_2,_autovar_3,_autovar_4,__result;
    VALUE bind2=bind_new2(16);
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
            VALUE lalt12from=_from;
            VALUE lalt12one=_one;
            VALUE lalt12e=_e;
            VALUE lalt12name=_name;
            VALUE lalt12autovar=_autovar;
            VALUE lalt12autovar_2=_autovar_2;
            VALUE lalt12autovar_3=_autovar_3;
            VALUE lalt12autovar_4=_autovar_4;
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
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_from);
                    it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_5836,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _from=bind_aget(bind2,2);;
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
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_from);
                    it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_5836,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _from=bind_aget(bind2,2);;
                    _from=it;;
                    break;
                case '[' ... '[':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    int oldpos2=ptr->pos;
                    int cut2=0;
alt2_1:
                    ;
                    VALUE lalt22from=_from;
                    VALUE lalt22name=_name;
                    VALUE lalt22autovar=_autovar;
                    VALUE lalt22autovar_2=_autovar_2;
                    if (ame_curstr2(ptr)[0]=='*')  ptr->pos+=1;
                    else if (1) {
                        it=failobj;
                        goto alt2_2;
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
                                int oldpos3=ptr->pos;
                                int cut3=0;
alt3_1:
                                ;
                                VALUE lalt32autovar_2=_autovar_2;
                                it=AmethystParser_rubyarg(self );
                                if (it==failobj) {
                                    it=failobj;
                                    goto alt3_2;
                                }
                                _autovar_2=it;;
                                it=AmethystCore_append(self,_autovar,_autovar_2);
                                ;
                                goto accept3;
alt3_2:
                                _autovar_2=lalt32autovar_2;
                                ptr->pos=oldpos3;
                                VALUE lalt33autovar_2=_autovar_2;
                                stop2=1;
                                ;
                                goto accept3;
alt3_3:
                                _autovar_2=lalt33autovar_2;
                                ptr->pos=oldpos3;
                                if (1) {
                                    it=failobj;
                                    goto alt2_2;
                                };
accept3:
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
                        int oldpos4=ptr->pos;
                        int cut4=0;
alt4_1:
                        ;
                        VALUE lalt42name=_name;
                        it=AmethystParser_name(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt4_2;
                        }
                        _name=it;;

                        ;
                        goto accept4;
alt4_2:
                        _name=lalt42name;
                        ptr->pos=oldpos4;
                        VALUE lalt43name=_name;
                        VALUE lalt43autovar=_autovar;
                        VALUE lalt43autovar_2=_autovar_2;
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
                                int oldpos5=ptr->pos;
                                int cut5=0;
alt5_1:
                                ;
                                VALUE lalt52autovar_2=_autovar_2;
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
                                _autovar_2=lalt52autovar_2;
                                ptr->pos=oldpos5;
                                VALUE lalt53autovar_2=_autovar_2;
                                stop3=1;
                                ;
                                goto accept5;
alt5_3:
                                _autovar_2=lalt53autovar_2;
                                ptr->pos=oldpos5;
                                if (1) {
                                    it=failobj;
                                    goto alt4_3;
                                };
accept5:
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
                        goto accept4;
alt4_3:
                        _name=lalt43name;
                        _autovar=lalt43autovar;
                        _autovar_2=lalt43autovar_2;
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
                    case UC(0) ... UC(92):
                        ;
                    case '^' ... UC(255):
                        ;
                        if (1) {
                            it=failobj;
                            goto alt2_2;
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
                    it=rb_funcall(self,sy_AmethystParser__at_appends_36ee,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _from=bind_aget(bind2,2);;
                    _from=it;;

                    ;
                    goto accept2;
alt2_2:
                    _from=lalt22from;
                    _name=lalt22name;
                    _autovar=lalt22autovar;
                    _autovar_2=lalt22autovar_2;
                    ptr->pos=oldpos2;
                    VALUE lalt23from=_from;
                    VALUE lalt23name=_name;
                    VALUE lalt23autovar=_autovar;
                    VALUE lalt23autovar_2=_autovar_2;
                    VALUE lalt23autovar_3=_autovar_3;
                    VALUE lalt23autovar_4=_autovar_4;
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
                        _autovar_3=it;;
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
                                int oldpos6=ptr->pos;
                                int cut6=0;
alt6_1:
                                ;
                                VALUE lalt62autovar_4=_autovar_4;
                                it=AmethystParser_rubyarg(self );
                                if (it==failobj) {
                                    it=failobj;
                                    goto alt6_2;
                                }
                                _autovar_4=it;;
                                it=AmethystCore_append(self,_autovar_3,_autovar_4);
                                ;
                                goto accept6;
alt6_2:
                                _autovar_4=lalt62autovar_4;
                                ptr->pos=oldpos6;
                                VALUE lalt63autovar_4=_autovar_4;
                                stop4=1;
                                ;
                                goto accept6;
alt6_3:
                                _autovar_4=lalt63autovar_4;
                                ptr->pos=oldpos6;
                                if (1) {
                                    it=failobj;
                                    goto alt2_3;
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
                                stop4=1;
                                break;
                            }
                        }
                        it=_autovar_3;
                        _name=it;;
                        break;
                    case 'A' ... 'Z':
                        ;
                    case '_' ... '_':
                        ;
                    case 'a' ... 'z':
                        ;
                        int oldpos7=ptr->pos;
                        int cut7=0;
alt7_1:
                        ;
                        VALUE lalt72name=_name;
                        it=AmethystParser_name(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt7_2;
                        }
                        _name=it;;

                        ;
                        goto accept7;
alt7_2:
                        _name=lalt72name;
                        ptr->pos=oldpos7;
                        VALUE lalt73name=_name;
                        VALUE lalt73autovar_3=_autovar_3;
                        VALUE lalt73autovar_4=_autovar_4;
                        it=rb_ary_new3(0);
                        _autovar_3=it;;
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
                                int oldpos8=ptr->pos;
                                int cut8=0;
alt8_1:
                                ;
                                VALUE lalt82autovar_4=_autovar_4;
                                it=AmethystParser_rubyarg(self );
                                if (it==failobj) {
                                    it=failobj;
                                    goto alt8_2;
                                }
                                _autovar_4=it;;
                                it=AmethystCore_append(self,_autovar_3,_autovar_4);
                                ;
                                goto accept8;
alt8_2:
                                _autovar_4=lalt82autovar_4;
                                ptr->pos=oldpos8;
                                VALUE lalt83autovar_4=_autovar_4;
                                stop5=1;
                                ;
                                goto accept8;
alt8_3:
                                _autovar_4=lalt83autovar_4;
                                ptr->pos=oldpos8;
                                if (1) {
                                    it=failobj;
                                    goto alt7_3;
                                };
accept8:
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
                        it=_autovar_3;
                        _name=it;;

                        ;
                        goto accept7;
alt7_3:
                        _name=lalt73name;
                        _autovar_3=lalt73autovar_3;
                        _autovar_4=lalt73autovar_4;
                        ptr->pos=oldpos7;
                        if (1) {
                            it=failobj;
                            goto alt2_3;
                        };
accept7:
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
                            goto alt2_3;
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

                    ;
                    goto accept2;
alt2_3:
                    _from=lalt23from;
                    _name=lalt23name;
                    _autovar=lalt23autovar;
                    _autovar_2=lalt23autovar_2;
                    _autovar_3=lalt23autovar_3;
                    _autovar_4=lalt23autovar_4;
                    ptr->pos=oldpos2;
                    if (1) {
                        it=failobj;
                        goto alt1_2;
                    };
accept2:
                    ;
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
                int oldpos9=ptr->pos;
                int cut9=0;
alt9_1:
                ;
                VALUE lalt92from=_from;
                VALUE lalt92e=_e;
                if (ame_curstr2(ptr)[0]=='=')  ptr->pos+=1;
                else if (1) {
                    it=failobj;
                    goto alt9_2;
                }
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... 'z':
                    ;
                case '|' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt9_2;
                    }
                    break;
                case '{' ... '{':
                    ;
                    it=AmethystParser_inline_host_expr(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt9_2;
                    }
                    _e=it;;
                    break;
                }
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_e);
                it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_3220,1,bind2);
                _from=bind_aget(bind2,1);;
                _e=bind_aget(bind2,2);;
                _from=it;;

                ;
                goto accept9;
alt9_2:
                _from=lalt92from;
                _e=lalt92e;
                ptr->pos=oldpos9;
                VALUE lalt93from=_from;
                VALUE lalt93e=_e;
                bind_aset(bind2,1,_from);
                it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_0657,1,bind2);
                _from=bind_aget(bind2,1);;
                _from=it;;

                ;
                goto accept9;
alt9_3:
                _from=lalt93from;
                _e=lalt93e;
                ptr->pos=oldpos9;
                if (1) {
                    it=failobj;
                    goto alt1_2;
                };
accept9:
                ;
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
            _from=lalt12from;
            _one=lalt12one;
            _e=lalt12e;
            _name=lalt12name;
            _autovar=lalt12autovar;
            _autovar_2=lalt12autovar_2;
            _autovar_3=lalt12autovar_3;
            _autovar_4=lalt12autovar_4;
            ptr->pos=oldpos1;
            VALUE lalt13from=_from;
            VALUE lalt13one=_one;
            VALUE lalt13e=_e;
            VALUE lalt13name=_name;
            VALUE lalt13autovar=_autovar;
            VALUE lalt13autovar_2=_autovar_2;
            VALUE lalt13autovar_3=_autovar_3;
            VALUE lalt13autovar_4=_autovar_4;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            _from=lalt13from;
            _one=lalt13one;
            _e=lalt13e;
            _name=lalt13name;
            _autovar=lalt13autovar;
            _autovar_2=lalt13autovar_2;
            _autovar_3=lalt13autovar_3;
            _autovar_4=lalt13autovar_4;
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
            int oldpos10=ptr->pos;
            int cut10=0;
alt10_1:
            ;
            VALUE lalt102from=_from;
            VALUE lalt102one=_one;
            VALUE lalt102e=_e;
            VALUE lalt102name=_name;
            VALUE lalt102autovar=_autovar;
            VALUE lalt102autovar_2=_autovar_2;
            VALUE lalt102autovar_3=_autovar_3;
            VALUE lalt102autovar_4=_autovar_4;
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            it=Amethyst__(self );
            if (it==failobj) {
                it=failobj;
                goto alt11_2;
            }
            cut11=1;
            if (1) {
                it=failobj;
                goto alt11_2;
            }
            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            if (cut11) {
                it=failobj;
                goto alt10_2;
            }
            it=Qnil;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            if (1) {
                it=failobj;
                goto alt10_2;
            };
accept11:
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
                    goto alt10_2;
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
                        goto alt10_2;
                    }
                    break;
                case '{' ... '{':
                    ;
                    it=AmethystParser_inline_host_expr(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt10_2;
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
                        goto alt10_2;
                    }
                    _name=it;;
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_from);
                    it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_5836,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _from=bind_aget(bind2,2);;
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
                        goto alt10_2;
                    }
                    _name=it;;
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_from);
                    it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_5836,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _from=bind_aget(bind2,2);;
                    _from=it;;
                    break;
                case '[' ... '[':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    int oldpos12=ptr->pos;
                    int cut12=0;
alt12_1:
                    ;
                    VALUE lalt122from=_from;
                    VALUE lalt122name=_name;
                    VALUE lalt122autovar=_autovar;
                    VALUE lalt122autovar_2=_autovar_2;
                    if (ame_curstr2(ptr)[0]=='*')  ptr->pos+=1;
                    else if (1) {
                        it=failobj;
                        goto alt12_2;
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
                        it=rb_ary_new3(0);
                        _autovar=it;;
                        int stop6=0;
                        while(!stop6) {
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
                                VALUE lalt132autovar_2=_autovar_2;
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
                                _autovar_2=lalt132autovar_2;
                                ptr->pos=oldpos13;
                                VALUE lalt133autovar_2=_autovar_2;
                                stop6=1;
                                ;
                                goto accept13;
alt13_3:
                                _autovar_2=lalt133autovar_2;
                                ptr->pos=oldpos13;
                                if (1) {
                                    it=failobj;
                                    goto alt12_2;
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
                                stop6=1;
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
                        int oldpos14=ptr->pos;
                        int cut14=0;
alt14_1:
                        ;
                        VALUE lalt142name=_name;
                        it=AmethystParser_name(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt14_2;
                        }
                        _name=it;;

                        ;
                        goto accept14;
alt14_2:
                        _name=lalt142name;
                        ptr->pos=oldpos14;
                        VALUE lalt143name=_name;
                        VALUE lalt143autovar=_autovar;
                        VALUE lalt143autovar_2=_autovar_2;
                        it=rb_ary_new3(0);
                        _autovar=it;;
                        int stop7=0;
                        while(!stop7) {
                            switch((unsigned char)*ame_curstr2(ptr)) {
                            case UC(0) ... '(':
                                ;
                            case '*' ... UC(92):
                                ;
                            case '^' ... '|':
                                ;
                            case '~' ... UC(255):
                                ;
                                int oldpos15=ptr->pos;
                                int cut15=0;
alt15_1:
                                ;
                                VALUE lalt152autovar_2=_autovar_2;
                                it=AmethystParser_rubyarg(self );
                                if (it==failobj) {
                                    it=failobj;
                                    goto alt15_2;
                                }
                                _autovar_2=it;;
                                it=AmethystCore_append(self,_autovar,_autovar_2);
                                ;
                                goto accept15;
alt15_2:
                                _autovar_2=lalt152autovar_2;
                                ptr->pos=oldpos15;
                                VALUE lalt153autovar_2=_autovar_2;
                                stop7=1;
                                ;
                                goto accept15;
alt15_3:
                                _autovar_2=lalt153autovar_2;
                                ptr->pos=oldpos15;
                                if (1) {
                                    it=failobj;
                                    goto alt14_3;
                                };
accept15:
                                ;
                                break;
                            case ')' ... ')':
                                ;
                            case ']' ... ']':
                                ;
                            case '}' ... '}':
                                ;
                                stop7=1;
                                break;
                            }
                        }
                        it=_autovar;
                        _name=it;;

                        ;
                        goto accept14;
alt14_3:
                        _name=lalt143name;
                        _autovar=lalt143autovar;
                        _autovar_2=lalt143autovar_2;
                        ptr->pos=oldpos14;
                        if (1) {
                            it=failobj;
                            goto alt12_2;
                        };
accept14:
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
                            goto alt12_2;
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
                    it=rb_funcall(self,sy_AmethystParser__at_appends_36ee,1,bind2);
                    _name=bind_aget(bind2,1);;
                    _from=bind_aget(bind2,2);;
                    _from=it;;

                    ;
                    goto accept12;
alt12_2:
                    _from=lalt122from;
                    _name=lalt122name;
                    _autovar=lalt122autovar;
                    _autovar_2=lalt122autovar_2;
                    ptr->pos=oldpos12;
                    VALUE lalt123from=_from;
                    VALUE lalt123name=_name;
                    VALUE lalt123autovar=_autovar;
                    VALUE lalt123autovar_2=_autovar_2;
                    VALUE lalt123autovar_3=_autovar_3;
                    VALUE lalt123autovar_4=_autovar_4;
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
                        _autovar_3=it;;
                        int stop8=0;
                        while(!stop8) {
                            switch((unsigned char)*ame_curstr2(ptr)) {
                            case UC(0) ... '(':
                                ;
                            case '*' ... UC(92):
                                ;
                            case '^' ... '|':
                                ;
                            case '~' ... UC(255):
                                ;
                                int oldpos16=ptr->pos;
                                int cut16=0;
alt16_1:
                                ;
                                VALUE lalt162autovar_4=_autovar_4;
                                it=AmethystParser_rubyarg(self );
                                if (it==failobj) {
                                    it=failobj;
                                    goto alt16_2;
                                }
                                _autovar_4=it;;
                                it=AmethystCore_append(self,_autovar_3,_autovar_4);
                                ;
                                goto accept16;
alt16_2:
                                _autovar_4=lalt162autovar_4;
                                ptr->pos=oldpos16;
                                VALUE lalt163autovar_4=_autovar_4;
                                stop8=1;
                                ;
                                goto accept16;
alt16_3:
                                _autovar_4=lalt163autovar_4;
                                ptr->pos=oldpos16;
                                if (1) {
                                    it=failobj;
                                    goto alt12_3;
                                };
accept16:
                                ;
                                break;
                            case ')' ... ')':
                                ;
                            case ']' ... ']':
                                ;
                            case '}' ... '}':
                                ;
                                stop8=1;
                                break;
                            }
                        }
                        it=_autovar_3;
                        _name=it;;
                        break;
                    case 'A' ... 'Z':
                        ;
                    case '_' ... '_':
                        ;
                    case 'a' ... 'z':
                        ;
                        int oldpos17=ptr->pos;
                        int cut17=0;
alt17_1:
                        ;
                        VALUE lalt172name=_name;
                        it=AmethystParser_name(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt17_2;
                        }
                        _name=it;;

                        ;
                        goto accept17;
alt17_2:
                        _name=lalt172name;
                        ptr->pos=oldpos17;
                        VALUE lalt173name=_name;
                        VALUE lalt173autovar_3=_autovar_3;
                        VALUE lalt173autovar_4=_autovar_4;
                        it=rb_ary_new3(0);
                        _autovar_3=it;;
                        int stop9=0;
                        while(!stop9) {
                            switch((unsigned char)*ame_curstr2(ptr)) {
                            case UC(0) ... '(':
                                ;
                            case '*' ... UC(92):
                                ;
                            case '^' ... '|':
                                ;
                            case '~' ... UC(255):
                                ;
                                int oldpos18=ptr->pos;
                                int cut18=0;
alt18_1:
                                ;
                                VALUE lalt182autovar_4=_autovar_4;
                                it=AmethystParser_rubyarg(self );
                                if (it==failobj) {
                                    it=failobj;
                                    goto alt18_2;
                                }
                                _autovar_4=it;;
                                it=AmethystCore_append(self,_autovar_3,_autovar_4);
                                ;
                                goto accept18;
alt18_2:
                                _autovar_4=lalt182autovar_4;
                                ptr->pos=oldpos18;
                                VALUE lalt183autovar_4=_autovar_4;
                                stop9=1;
                                ;
                                goto accept18;
alt18_3:
                                _autovar_4=lalt183autovar_4;
                                ptr->pos=oldpos18;
                                if (1) {
                                    it=failobj;
                                    goto alt17_3;
                                };
accept18:
                                ;
                                break;
                            case ')' ... ')':
                                ;
                            case ']' ... ']':
                                ;
                            case '}' ... '}':
                                ;
                                stop9=1;
                                break;
                            }
                        }
                        it=_autovar_3;
                        _name=it;;

                        ;
                        goto accept17;
alt17_3:
                        _name=lalt173name;
                        _autovar_3=lalt173autovar_3;
                        _autovar_4=lalt173autovar_4;
                        ptr->pos=oldpos17;
                        if (1) {
                            it=failobj;
                            goto alt12_3;
                        };
accept17:
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
                            goto alt12_3;
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

                    ;
                    goto accept12;
alt12_3:
                    _from=lalt123from;
                    _name=lalt123name;
                    _autovar=lalt123autovar;
                    _autovar_2=lalt123autovar_2;
                    _autovar_3=lalt123autovar_3;
                    _autovar_4=lalt123autovar_4;
                    ptr->pos=oldpos12;
                    if (1) {
                        it=failobj;
                        goto alt10_2;
                    };
accept12:
                    ;
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
                    goto alt10_2;
                }
                it=AmethystParser_term(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt10_2;
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
                int oldpos19=ptr->pos;
                int cut19=0;
alt19_1:
                ;
                VALUE lalt192from=_from;
                VALUE lalt192e=_e;
                if (ame_curstr2(ptr)[0]=='=')  ptr->pos+=1;
                else if (1) {
                    it=failobj;
                    goto alt19_2;
                }
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... 'z':
                    ;
                case '|' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt19_2;
                    }
                    break;
                case '{' ... '{':
                    ;
                    it=AmethystParser_inline_host_expr(self );
                    if (it==failobj) {
                        it=failobj;
                        goto alt19_2;
                    }
                    _e=it;;
                    break;
                }
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_e);
                it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_3220,1,bind2);
                _from=bind_aget(bind2,1);;
                _e=bind_aget(bind2,2);;
                _from=it;;

                ;
                goto accept19;
alt19_2:
                _from=lalt192from;
                _e=lalt192e;
                ptr->pos=oldpos19;
                VALUE lalt193from=_from;
                VALUE lalt193e=_e;
                bind_aset(bind2,1,_from);
                it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_0657,1,bind2);
                _from=bind_aget(bind2,1);;
                _from=it;;

                ;
                goto accept19;
alt19_3:
                _from=lalt193from;
                _e=lalt193e;
                ptr->pos=oldpos19;
                if (1) {
                    it=failobj;
                    goto alt10_2;
                };
accept19:
                ;
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
                        goto alt10_2;
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
            goto accept10;
alt10_2:
            _from=lalt102from;
            _one=lalt102one;
            _e=lalt102e;
            _name=lalt102name;
            _autovar=lalt102autovar;
            _autovar_2=lalt102autovar_2;
            _autovar_3=lalt102autovar_3;
            _autovar_4=lalt102autovar_4;
            ptr->pos=oldpos10;
            VALUE lalt103from=_from;
            VALUE lalt103one=_one;
            VALUE lalt103e=_e;
            VALUE lalt103name=_name;
            VALUE lalt103autovar=_autovar;
            VALUE lalt103autovar_2=_autovar_2;
            VALUE lalt103autovar_3=_autovar_3;
            VALUE lalt103autovar_4=_autovar_4;
            stop1=1;
            ;
            goto accept10;
alt10_3:
            _from=lalt103from;
            _one=lalt103one;
            _e=lalt103e;
            _name=lalt103name;
            _autovar=lalt103autovar;
            _autovar_2=lalt103autovar_2;
            _autovar_3=lalt103autovar_3;
            _autovar_4=lalt103autovar_4;
            ptr->pos=oldpos10;
            if (1) {
                it=failobj;
                goto fail;
            };
accept10:
            ;
            break;
        }
    }
    it=_from;
    __result=it;;

fail:
    return it;
}
VALUE AmethystParser_prefixed(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_neg,_expr,_m;
    VALUE bind2=bind_new2(16);
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
        VALUE lalt12_result=__result;
        VALUE lalt12autovar=_autovar;
        VALUE lalt12neg=_neg;
        VALUE lalt12expr=_expr;
        VALUE lalt12m=_m;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _autovar=it;;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22_result=__result;
        VALUE lalt22neg=_neg;
        VALUE lalt22expr=_expr;
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
        __result=lalt22_result;
        _neg=lalt22neg;
        _expr=lalt22expr;
        ptr->pos=oldpos2;
        VALUE lalt23_result=__result;
        VALUE lalt23neg=_neg;
        VALUE lalt23expr=_expr;
        VALUE lalt23m=_m;
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
        __result=lalt23_result;
        _neg=lalt23neg;
        _expr=lalt23expr;
        _m=lalt23m;
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
        __result=lalt12_result;
        _autovar=lalt12autovar;
        _neg=lalt12neg;
        _expr=lalt12expr;
        _m=lalt12m;
        ptr->pos=oldpos1;
        VALUE lalt13_result=__result;
        VALUE lalt13autovar=_autovar;
        VALUE lalt13neg=_neg;
        VALUE lalt13expr=_expr;
        VALUE lalt13m=_m;
        it=AmethystParser_postfixed(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        __result=it;;

        ;
        goto accept1;
alt1_3:
        __result=lalt13_result;
        _autovar=lalt13autovar;
        _neg=lalt13neg;
        _expr=lalt13expr;
        _m=lalt13m;
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
        VALUE lalt12c=_c;
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
        _c=lalt12c;
        ptr->pos=oldpos1;
        VALUE lalt13c=_c;
        it=AmethystParser_procargs2(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        ;
        goto accept1;
alt1_3:
        _c=lalt13c;
        ptr->pos=oldpos1;
        VALUE lalt14c=_c;
        stop1=1;
        ;
        goto accept1;
alt1_4:
        _c=lalt14c;
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
        VALUE lalt12autovar=_autovar;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12autovar_3=_autovar_3;
        VALUE lalt12autovar_4=_autovar_4;
        VALUE lalt12_result=__result;
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
            VALUE lalt22autovar_3=_autovar_3;
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
            _autovar_3=lalt22autovar_3;
            ptr->pos=oldpos2;
            VALUE lalt23autovar_3=_autovar_3;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            _autovar_3=lalt23autovar_3;
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
        _autovar=lalt12autovar;
        _autovar_2=lalt12autovar_2;
        _autovar_3=lalt12autovar_3;
        _autovar_4=lalt12autovar_4;
        __result=lalt12_result;
        ptr->pos=oldpos1;
        VALUE lalt13autovar=_autovar;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13autovar_3=_autovar_3;
        VALUE lalt13autovar_4=_autovar_4;
        VALUE lalt13_result=__result;
        VALUE lalt13a=_a;
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
        _autovar=lalt13autovar;
        _autovar_2=lalt13autovar_2;
        _autovar_3=lalt13autovar_3;
        _autovar_4=lalt13autovar_4;
        __result=lalt13_result;
        _a=lalt13a;
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
        VALUE lalt12n=_n;
        VALUE lalt12autovar=_autovar;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12_result=__result;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22autovar=_autovar;
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
        _autovar=lalt22autovar;
        ptr->pos=oldpos2;
        VALUE lalt23autovar=_autovar;
        it=Qnil;
        ;
        goto accept2;
alt2_3:
        _autovar=lalt23autovar;
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
        _n=lalt12n;
        _autovar=lalt12autovar;
        _autovar_2=lalt12autovar_2;
        __result=lalt12_result;
        ptr->pos=oldpos1;
        VALUE lalt13n=_n;
        VALUE lalt13autovar=_autovar;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13_result=__result;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        _n=lalt13n;
        _autovar=lalt13autovar;
        _autovar_2=lalt13autovar_2;
        __result=lalt13_result;
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
        VALUE lalt42autovar_3=_autovar_3;
        VALUE lalt42autovar_4=_autovar_4;
        VALUE lalt42r=_r;
        VALUE lalt42_result_2=__result_2;
        VALUE lalt42r_2=_r_2;
        VALUE lalt42o=_o;
        VALUE lalt42c=_c;
        VALUE lalt42_result_3=__result_3;
        VALUE lalt42_result=__result;
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
            VALUE lalt52autovar_4=_autovar_4;
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
            _autovar_4=lalt52autovar_4;
            ptr->pos=oldpos5;
            VALUE lalt53autovar_4=_autovar_4;
            stop1=1;
            ;
            goto accept5;
alt5_3:
            _autovar_4=lalt53autovar_4;
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
        _autovar_3=lalt42autovar_3;
        _autovar_4=lalt42autovar_4;
        _r=lalt42r;
        __result_2=lalt42_result_2;
        _r_2=lalt42r_2;
        _o=lalt42o;
        _c=lalt42c;
        __result_3=lalt42_result_3;
        __result=lalt42_result;
        ptr->pos=oldpos4;
        VALUE lalt43autovar_3=_autovar_3;
        VALUE lalt43autovar_4=_autovar_4;
        VALUE lalt43r=_r;
        VALUE lalt43_result_2=__result_2;
        VALUE lalt43r_2=_r_2;
        VALUE lalt43o=_o;
        VALUE lalt43c=_c;
        VALUE lalt43_result_3=__result_3;
        VALUE lalt43n=_n;
        VALUE lalt43autovar=_autovar;
        VALUE lalt43autovar_2=_autovar_2;
        VALUE lalt43_result=__result;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        VALUE lalt62autovar=_autovar;
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
        _autovar=lalt62autovar;
        ptr->pos=oldpos6;
        VALUE lalt63autovar=_autovar;
        it=Qnil;
        ;
        goto accept6;
alt6_3:
        _autovar=lalt63autovar;
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
        _autovar_3=lalt43autovar_3;
        _autovar_4=lalt43autovar_4;
        _r=lalt43r;
        __result_2=lalt43_result_2;
        _r_2=lalt43r_2;
        _o=lalt43o;
        _c=lalt43c;
        __result_3=lalt43_result_3;
        _n=lalt43n;
        _autovar=lalt43autovar;
        _autovar_2=lalt43autovar_2;
        __result=lalt43_result;
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
        VALUE lalt82autovar_3=_autovar_3;
        VALUE lalt82autovar_4=_autovar_4;
        VALUE lalt82r=_r;
        VALUE lalt82_result_2=__result_2;
        VALUE lalt82r_2=_r_2;
        VALUE lalt82o=_o;
        VALUE lalt82c=_c;
        VALUE lalt82_result_3=__result_3;
        VALUE lalt82_result=__result;
        VALUE lalt82x=_x;
        VALUE lalt82autovar_5=_autovar_5;
        VALUE lalt82autovar_6=_autovar_6;
        VALUE lalt82autovar_7=_autovar_7;
        VALUE lalt82_result_4=__result_4;
        VALUE lalt82s=_s;
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
                VALUE lalt92autovar_3=_autovar_3;
                VALUE lalt92autovar_4=_autovar_4;
                VALUE lalt92r=_r;
                VALUE lalt92_result_2=__result_2;
                VALUE lalt92r_2=_r_2;
                VALUE lalt92o=_o;
                VALUE lalt92c=_c;
                VALUE lalt92_result_3=__result_3;
                VALUE lalt92autovar_6=_autovar_6;
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
                    VALUE lalt102autovar_4=_autovar_4;
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
                    _autovar_4=lalt102autovar_4;
                    ptr->pos=oldpos10;
                    VALUE lalt103autovar_4=_autovar_4;
                    stop3=1;
                    ;
                    goto accept10;
alt10_3:
                    _autovar_4=lalt103autovar_4;
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
                _autovar_3=lalt92autovar_3;
                _autovar_4=lalt92autovar_4;
                _r=lalt92r;
                __result_2=lalt92_result_2;
                _r_2=lalt92r_2;
                _o=lalt92o;
                _c=lalt92c;
                __result_3=lalt92_result_3;
                _autovar_6=lalt92autovar_6;
                ptr->pos=oldpos9;
                VALUE lalt93autovar_3=_autovar_3;
                VALUE lalt93autovar_4=_autovar_4;
                VALUE lalt93r=_r;
                VALUE lalt93_result_2=__result_2;
                VALUE lalt93r_2=_r_2;
                VALUE lalt93o=_o;
                VALUE lalt93c=_c;
                VALUE lalt93_result_3=__result_3;
                VALUE lalt93autovar_5=_autovar_5;
                VALUE lalt93autovar_6=_autovar_6;
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
                _autovar_3=lalt93autovar_3;
                _autovar_4=lalt93autovar_4;
                _r=lalt93r;
                __result_2=lalt93_result_2;
                _r_2=lalt93r_2;
                _o=lalt93o;
                _c=lalt93c;
                __result_3=lalt93_result_3;
                _autovar_5=lalt93autovar_5;
                _autovar_6=lalt93autovar_6;
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
        _autovar_3=lalt82autovar_3;
        _autovar_4=lalt82autovar_4;
        _r=lalt82r;
        __result_2=lalt82_result_2;
        _r_2=lalt82r_2;
        _o=lalt82o;
        _c=lalt82c;
        __result_3=lalt82_result_3;
        __result=lalt82_result;
        _x=lalt82x;
        _autovar_5=lalt82autovar_5;
        _autovar_6=lalt82autovar_6;
        _autovar_7=lalt82autovar_7;
        __result_4=lalt82_result_4;
        _s=lalt82s;
        ptr->pos=oldpos8;
        if (cut8) {
            it=failobj;
            goto fail;
        }
        VALUE lalt83autovar_3=_autovar_3;
        VALUE lalt83autovar_4=_autovar_4;
        VALUE lalt83r=_r;
        VALUE lalt83_result_2=__result_2;
        VALUE lalt83r_2=_r_2;
        VALUE lalt83o=_o;
        VALUE lalt83c=_c;
        VALUE lalt83_result_3=__result_3;
        VALUE lalt83n=_n;
        VALUE lalt83autovar=_autovar;
        VALUE lalt83autovar_2=_autovar_2;
        VALUE lalt83_result=__result;
        VALUE lalt83x=_x;
        VALUE lalt83autovar_5=_autovar_5;
        VALUE lalt83autovar_6=_autovar_6;
        VALUE lalt83autovar_7=_autovar_7;
        VALUE lalt83_result_4=__result_4;
        VALUE lalt83s=_s;
        int oldpos11=ptr->pos;
        int cut11=0;
alt11_1:
        ;
        VALUE lalt112autovar=_autovar;
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
        _autovar=lalt112autovar;
        ptr->pos=oldpos11;
        VALUE lalt113autovar=_autovar;
        it=Qnil;
        ;
        goto accept11;
alt11_3:
        _autovar=lalt113autovar;
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
        _autovar_3=lalt83autovar_3;
        _autovar_4=lalt83autovar_4;
        _r=lalt83r;
        __result_2=lalt83_result_2;
        _r_2=lalt83r_2;
        _o=lalt83o;
        _c=lalt83c;
        __result_3=lalt83_result_3;
        _n=lalt83n;
        _autovar=lalt83autovar;
        _autovar_2=lalt83autovar_2;
        __result=lalt83_result;
        _x=lalt83x;
        _autovar_5=lalt83autovar_5;
        _autovar_6=lalt83autovar_6;
        _autovar_7=lalt83autovar_7;
        __result_4=lalt83_result_4;
        _s=lalt83s;
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
        VALUE lalt132n=_n;
        VALUE lalt132autovar=_autovar;
        VALUE lalt132autovar_2=_autovar_2;
        VALUE lalt132_result=__result;
        VALUE lalt132autovar_8=_autovar_8;
        int oldpos14=ptr->pos;
        int cut14=0;
alt14_1:
        ;
        VALUE lalt142autovar=_autovar;
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
        _autovar=lalt142autovar;
        ptr->pos=oldpos14;
        VALUE lalt143autovar=_autovar;
        VALUE lalt143autovar_8=_autovar_8;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _autovar_8=it;;
        it=AmethystCore_append(self,_n,_autovar_8);
        ;
        goto accept14;
alt14_3:
        _autovar=lalt143autovar;
        _autovar_8=lalt143autovar_8;
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
        _n=lalt132n;
        _autovar=lalt132autovar;
        _autovar_2=lalt132autovar_2;
        __result=lalt132_result;
        _autovar_8=lalt132autovar_8;
        ptr->pos=oldpos13;
        VALUE lalt133n=_n;
        VALUE lalt133autovar=_autovar;
        VALUE lalt133autovar_2=_autovar_2;
        VALUE lalt133_result=__result;
        VALUE lalt133autovar_8=_autovar_8;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept13;
alt13_3:
        _n=lalt133n;
        _autovar=lalt133autovar;
        _autovar_2=lalt133autovar_2;
        __result=lalt133_result;
        _autovar_8=lalt133autovar_8;
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
        VALUE lalt162x_2=_x_2;
        VALUE lalt162autovar_9=_autovar_9;
        VALUE lalt162autovar_10=_autovar_10;
        VALUE lalt162_result_5=__result_5;
        VALUE lalt162_result_6=__result_6;
        VALUE lalt162_result=__result;
        VALUE lalt162s=_s;
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
        _x_2=lalt162x_2;
        _autovar_9=lalt162autovar_9;
        _autovar_10=lalt162autovar_10;
        __result_5=lalt162_result_5;
        __result_6=lalt162_result_6;
        __result=lalt162_result;
        _s=lalt162s;
        ptr->pos=oldpos16;
        if (cut16) {
            it=failobj;
            goto fail;
        }
        VALUE lalt163x_2=_x_2;
        VALUE lalt163autovar_9=_autovar_9;
        VALUE lalt163autovar_10=_autovar_10;
        VALUE lalt163_result_5=__result_5;
        VALUE lalt163_result_6=__result_6;
        VALUE lalt163n=_n;
        VALUE lalt163autovar=_autovar;
        VALUE lalt163autovar_2=_autovar_2;
        VALUE lalt163_result=__result;
        VALUE lalt163s=_s;
        int oldpos17=ptr->pos;
        int cut17=0;
alt17_1:
        ;
        VALUE lalt172autovar=_autovar;
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
        _autovar=lalt172autovar;
        ptr->pos=oldpos17;
        VALUE lalt173autovar=_autovar;
        it=Qnil;
        ;
        goto accept17;
alt17_3:
        _autovar=lalt173autovar;
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
        _x_2=lalt163x_2;
        _autovar_9=lalt163autovar_9;
        _autovar_10=lalt163autovar_10;
        __result_5=lalt163_result_5;
        __result_6=lalt163_result_6;
        _n=lalt163n;
        _autovar=lalt163autovar;
        _autovar_2=lalt163autovar_2;
        __result=lalt163_result;
        _s=lalt163s;
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
        VALUE lalt192_result=__result;
        it=AmethystParser_lambda(self );
        if (it==failobj) {
            it=failobj;
            goto alt19_2;
        }
        __result=it;;

        ;
        goto accept19;
alt19_2:
        __result=lalt192_result;
        ptr->pos=oldpos19;
        VALUE lalt193autovar_3=_autovar_3;
        VALUE lalt193autovar_4=_autovar_4;
        VALUE lalt193r=_r;
        VALUE lalt193_result_2=__result_2;
        VALUE lalt193r_2=_r_2;
        VALUE lalt193o=_o;
        VALUE lalt193c=_c;
        VALUE lalt193_result_3=__result_3;
        VALUE lalt193_result=__result;
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
            VALUE lalt202autovar_4=_autovar_4;
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
            _autovar_4=lalt202autovar_4;
            ptr->pos=oldpos20;
            VALUE lalt203autovar_4=_autovar_4;
            stop5=1;
            ;
            goto accept20;
alt20_3:
            _autovar_4=lalt203autovar_4;
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
        _autovar_3=lalt193autovar_3;
        _autovar_4=lalt193autovar_4;
        _r=lalt193r;
        __result_2=lalt193_result_2;
        _r_2=lalt193r_2;
        _o=lalt193o;
        _c=lalt193c;
        __result_3=lalt193_result_3;
        __result=lalt193_result;
        ptr->pos=oldpos19;
        VALUE lalt194autovar_3=_autovar_3;
        VALUE lalt194autovar_4=_autovar_4;
        VALUE lalt194r=_r;
        VALUE lalt194_result_2=__result_2;
        VALUE lalt194r_2=_r_2;
        VALUE lalt194o=_o;
        VALUE lalt194c=_c;
        VALUE lalt194_result_3=__result_3;
        VALUE lalt194n=_n;
        VALUE lalt194autovar=_autovar;
        VALUE lalt194autovar_2=_autovar_2;
        VALUE lalt194_result=__result;
        int oldpos21=ptr->pos;
        int cut21=0;
alt21_1:
        ;
        VALUE lalt212autovar=_autovar;
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
        _autovar=lalt212autovar;
        ptr->pos=oldpos21;
        VALUE lalt213autovar=_autovar;
        it=Qnil;
        ;
        goto accept21;
alt21_3:
        _autovar=lalt213autovar;
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
        _autovar_3=lalt194autovar_3;
        _autovar_4=lalt194autovar_4;
        _r=lalt194r;
        __result_2=lalt194_result_2;
        _r_2=lalt194r_2;
        _o=lalt194o;
        _c=lalt194c;
        __result_3=lalt194_result_3;
        _n=lalt194n;
        _autovar=lalt194autovar;
        _autovar_2=lalt194autovar_2;
        __result=lalt194_result;
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
        VALUE lalt232autovar=_autovar;
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
        _autovar=lalt232autovar;
        ptr->pos=oldpos23;
        VALUE lalt233autovar=_autovar;
        it=Qnil;
        ;
        goto accept23;
alt23_3:
        _autovar=lalt233autovar;
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
        VALUE lalt252_result_7=__result_7;
        VALUE lalt252_result=__result;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        int oldpos26=ptr->pos;
        int cut26=0;
alt26_1:
        ;
        VALUE lalt262_result_7=__result_7;
        VALUE lalt262_result=__result;
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
        __result_7=lalt262_result_7;
        __result=lalt262_result;
        ptr->pos=oldpos26;
        VALUE lalt263_result_7=__result_7;
        VALUE lalt263_result=__result;
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
        __result_7=lalt263_result_7;
        __result=lalt263_result;
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
        __result_7=lalt252_result_7;
        __result=lalt252_result;
        ptr->pos=oldpos25;
        VALUE lalt253_result_7=__result_7;
        VALUE lalt253n=_n;
        VALUE lalt253autovar=_autovar;
        VALUE lalt253autovar_2=_autovar_2;
        VALUE lalt253_result=__result;
        VALUE lalt253autovar_8=_autovar_8;
        int oldpos27=ptr->pos;
        int cut27=0;
alt27_1:
        ;
        VALUE lalt272autovar=_autovar;
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
        _autovar=lalt272autovar;
        ptr->pos=oldpos27;
        VALUE lalt273autovar=_autovar;
        VALUE lalt273autovar_8=_autovar_8;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _autovar_8=it;;
        it=AmethystCore_append(self,_n,_autovar_8);
        ;
        goto accept27;
alt27_3:
        _autovar=lalt273autovar;
        _autovar_8=lalt273autovar_8;
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
        __result_7=lalt253_result_7;
        _n=lalt253n;
        _autovar=lalt253autovar;
        _autovar_2=lalt253autovar_2;
        __result=lalt253_result;
        _autovar_8=lalt253autovar_8;
        ptr->pos=oldpos25;
        VALUE lalt254_result_7=__result_7;
        VALUE lalt254n=_n;
        VALUE lalt254autovar=_autovar;
        VALUE lalt254autovar_2=_autovar_2;
        VALUE lalt254_result=__result;
        VALUE lalt254autovar_8=_autovar_8;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept25;
alt25_4:
        __result_7=lalt254_result_7;
        _n=lalt254n;
        _autovar=lalt254autovar;
        _autovar_2=lalt254autovar_2;
        __result=lalt254_result;
        _autovar_8=lalt254autovar_8;
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
        VALUE lalt292_result=__result;
        VALUE lalt292e=_e;
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
        __result=lalt292_result;
        _e=lalt292e;
        ptr->pos=oldpos29;
        VALUE lalt293n=_n;
        VALUE lalt293autovar=_autovar;
        VALUE lalt293autovar_2=_autovar_2;
        VALUE lalt293_result=__result;
        VALUE lalt293e=_e;
        int oldpos30=ptr->pos;
        int cut30=0;
alt30_1:
        ;
        VALUE lalt302autovar=_autovar;
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
        _autovar=lalt302autovar;
        ptr->pos=oldpos30;
        VALUE lalt303autovar=_autovar;
        it=Qnil;
        ;
        goto accept30;
alt30_3:
        _autovar=lalt303autovar;
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
        _n=lalt293n;
        _autovar=lalt293autovar;
        _autovar_2=lalt293autovar_2;
        __result=lalt293_result;
        _e=lalt293e;
        ptr->pos=oldpos29;
        VALUE lalt294n=_n;
        VALUE lalt294autovar=_autovar;
        VALUE lalt294autovar_2=_autovar_2;
        VALUE lalt294_result=__result;
        VALUE lalt294e=_e;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept29;
alt29_4:
        _n=lalt294n;
        _autovar=lalt294autovar;
        _autovar_2=lalt294autovar_2;
        __result=lalt294_result;
        _e=lalt294e;
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
        VALUE lalt322n=_n;
        VALUE lalt322autovar=_autovar;
        VALUE lalt322autovar_2=_autovar_2;
        VALUE lalt322_result=__result;
        int oldpos33=ptr->pos;
        int cut33=0;
alt33_1:
        ;
        VALUE lalt332autovar=_autovar;
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
        _autovar=lalt332autovar;
        ptr->pos=oldpos33;
        VALUE lalt333autovar=_autovar;
        it=Qnil;
        ;
        goto accept33;
alt33_3:
        _autovar=lalt333autovar;
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
        _n=lalt322n;
        _autovar=lalt322autovar;
        _autovar_2=lalt322autovar_2;
        __result=lalt322_result;
        ptr->pos=oldpos32;
        VALUE lalt323n=_n;
        VALUE lalt323autovar=_autovar;
        VALUE lalt323autovar_2=_autovar_2;
        VALUE lalt323_result=__result;
        it=AmethystParser_key(self );
        if (it==failobj) {
            it=failobj;
            goto alt32_3;
        }
        __result=it;;

        ;
        goto accept32;
alt32_3:
        _n=lalt323n;
        _autovar=lalt323autovar;
        _autovar_2=lalt323autovar_2;
        __result=lalt323_result;
        ptr->pos=oldpos32;
        VALUE lalt324n=_n;
        VALUE lalt324autovar=_autovar;
        VALUE lalt324autovar_2=_autovar_2;
        VALUE lalt324_result=__result;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept32;
alt32_4:
        _n=lalt324n;
        _autovar=lalt324autovar;
        _autovar_2=lalt324autovar_2;
        __result=lalt324_result;
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
        VALUE lalt352autovar_3=_autovar_3;
        VALUE lalt352autovar_4=_autovar_4;
        VALUE lalt352r=_r;
        VALUE lalt352_result_2=__result_2;
        VALUE lalt352r_2=_r_2;
        VALUE lalt352o=_o;
        VALUE lalt352c=_c;
        VALUE lalt352_result_3=__result_3;
        VALUE lalt352_result=__result;
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
            VALUE lalt362autovar_4=_autovar_4;
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
            _autovar_4=lalt362autovar_4;
            ptr->pos=oldpos36;
            VALUE lalt363autovar_4=_autovar_4;
            stop6=1;
            ;
            goto accept36;
alt36_3:
            _autovar_4=lalt363autovar_4;
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
        _autovar_3=lalt352autovar_3;
        _autovar_4=lalt352autovar_4;
        _r=lalt352r;
        __result_2=lalt352_result_2;
        _r_2=lalt352r_2;
        _o=lalt352o;
        _c=lalt352c;
        __result_3=lalt352_result_3;
        __result=lalt352_result;
        ptr->pos=oldpos35;
        VALUE lalt353autovar_3=_autovar_3;
        VALUE lalt353autovar_4=_autovar_4;
        VALUE lalt353r=_r;
        VALUE lalt353_result_2=__result_2;
        VALUE lalt353r_2=_r_2;
        VALUE lalt353o=_o;
        VALUE lalt353c=_c;
        VALUE lalt353_result_3=__result_3;
        VALUE lalt353n=_n;
        VALUE lalt353autovar=_autovar;
        VALUE lalt353autovar_2=_autovar_2;
        VALUE lalt353_result=__result;
        int oldpos37=ptr->pos;
        int cut37=0;
alt37_1:
        ;
        VALUE lalt372autovar=_autovar;
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
        _autovar=lalt372autovar;
        ptr->pos=oldpos37;
        VALUE lalt373autovar=_autovar;
        it=Qnil;
        ;
        goto accept37;
alt37_3:
        _autovar=lalt373autovar;
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
        _autovar_3=lalt353autovar_3;
        _autovar_4=lalt353autovar_4;
        _r=lalt353r;
        __result_2=lalt353_result_2;
        _r_2=lalt353r_2;
        _o=lalt353o;
        _c=lalt353c;
        __result_3=lalt353_result_3;
        _n=lalt353n;
        _autovar=lalt353autovar;
        _autovar_2=lalt353autovar_2;
        __result=lalt353_result;
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
        VALUE lalt392_result=__result;
        it=AmethystParser_lambda(self );
        if (it==failobj) {
            it=failobj;
            goto alt39_2;
        }
        __result=it;;

        ;
        goto accept39;
alt39_2:
        __result=lalt392_result;
        ptr->pos=oldpos39;
        VALUE lalt393n=_n;
        VALUE lalt393autovar=_autovar;
        VALUE lalt393autovar_2=_autovar_2;
        VALUE lalt393_result=__result;
        int oldpos40=ptr->pos;
        int cut40=0;
alt40_1:
        ;
        VALUE lalt402autovar=_autovar;
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
        _autovar=lalt402autovar;
        ptr->pos=oldpos40;
        VALUE lalt403autovar=_autovar;
        it=Qnil;
        ;
        goto accept40;
alt40_3:
        _autovar=lalt403autovar;
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
        _n=lalt393n;
        _autovar=lalt393autovar;
        _autovar_2=lalt393autovar_2;
        __result=lalt393_result;
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
    VALUE lalt12varargs=_varargs;
    VALUE lalt12arg2=_arg2;
    VALUE lalt12s=_s;
    VALUE lalt12s_2=_s_2;
    VALUE lalt12autovar=_autovar;
    VALUE lalt12k=_k;
    VALUE lalt12what=_what;
    VALUE lalt12r=_r;
    VALUE lalt12e=_e;
    VALUE lalt12autovar_2=_autovar_2;
    VALUE lalt12arg=_arg;
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
        VALUE lalt22varargs=_varargs;
        VALUE lalt22arg2=_arg2;
        VALUE lalt22s=_s;
        VALUE lalt22s_2=_s_2;
        VALUE lalt22k=_k;
        VALUE lalt22what=_what;
        VALUE lalt22r=_r;
        VALUE lalt22e=_e;
        VALUE lalt22autovar_2=_autovar_2;
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
            VALUE lalt42varargs=_varargs;
            VALUE lalt42s_2=_s_2;
            VALUE lalt42what=_what;
            VALUE lalt42r=_r;
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
            _varargs=lalt42varargs;
            _s_2=lalt42s_2;
            _what=lalt42what;
            _r=lalt42r;
            ptr->pos=oldpos4;
            VALUE lalt43varargs=_varargs;
            VALUE lalt43s_2=_s_2;
            VALUE lalt43what=_what;
            VALUE lalt43r=_r;
            it=Qnil;
            ;
            goto accept4;
alt4_3:
            _varargs=lalt43varargs;
            _s_2=lalt43s_2;
            _what=lalt43what;
            _r=lalt43r;
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
            VALUE lalt52varargs=_varargs;
            VALUE lalt52s_2=_s_2;
            VALUE lalt52what=_what;
            VALUE lalt52e=_e;
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
            _varargs=lalt52varargs;
            _s_2=lalt52s_2;
            _what=lalt52what;
            _e=lalt52e;
            ptr->pos=oldpos5;
            VALUE lalt53varargs=_varargs;
            VALUE lalt53s_2=_s_2;
            VALUE lalt53what=_what;
            VALUE lalt53e=_e;
            it=Qnil;
            ;
            goto accept5;
alt5_3:
            _varargs=lalt53varargs;
            _s_2=lalt53s_2;
            _what=lalt53what;
            _e=lalt53e;
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
        _varargs=lalt22varargs;
        _arg2=lalt22arg2;
        _s=lalt22s;
        _s_2=lalt22s_2;
        _k=lalt22k;
        _what=lalt22what;
        _r=lalt22r;
        _e=lalt22e;
        _autovar_2=lalt22autovar_2;
        ptr->pos=oldpos2;
        VALUE lalt23varargs=_varargs;
        VALUE lalt23arg2=_arg2;
        VALUE lalt23s=_s;
        VALUE lalt23s_2=_s_2;
        VALUE lalt23k=_k;
        VALUE lalt23what=_what;
        VALUE lalt23r=_r;
        VALUE lalt23e=_e;
        VALUE lalt23autovar_2=_autovar_2;
        stop1=1;
        ;
        goto accept2;
alt2_3:
        _varargs=lalt23varargs;
        _arg2=lalt23arg2;
        _s=lalt23s;
        _s_2=lalt23s_2;
        _k=lalt23k;
        _what=lalt23what;
        _r=lalt23r;
        _e=lalt23e;
        _autovar_2=lalt23autovar_2;
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
    _varargs=lalt12varargs;
    _arg2=lalt12arg2;
    _s=lalt12s;
    _s_2=lalt12s_2;
    _autovar=lalt12autovar;
    _k=lalt12k;
    _what=lalt12what;
    _r=lalt12r;
    _e=lalt12e;
    _autovar_2=lalt12autovar_2;
    _arg=lalt12arg;
    ptr->pos=oldpos1;
    VALUE lalt13varargs=_varargs;
    VALUE lalt13arg2=_arg2;
    VALUE lalt13s=_s;
    VALUE lalt13s_2=_s_2;
    VALUE lalt13autovar=_autovar;
    VALUE lalt13k=_k;
    VALUE lalt13what=_what;
    VALUE lalt13r=_r;
    VALUE lalt13e=_e;
    VALUE lalt13autovar_2=_autovar_2;
    VALUE lalt13arg=_arg;
    it=Qnil;
    ;
    goto accept1;
alt1_3:
    _varargs=lalt13varargs;
    _arg2=lalt13arg2;
    _s=lalt13s;
    _s_2=lalt13s_2;
    _autovar=lalt13autovar;
    _k=lalt13k;
    _what=lalt13what;
    _r=lalt13r;
    _e=lalt13e;
    _autovar_2=lalt13autovar_2;
    _arg=lalt13arg;
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
            VALUE lalt12autovar_4=_autovar_4;
            VALUE lalt12name=_name;
            VALUE lalt12autovar_5=_autovar_5;
            VALUE lalt12autovar_6=_autovar_6;
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
            _autovar_4=lalt12autovar_4;
            _name=lalt12name;
            _autovar_5=lalt12autovar_5;
            _autovar_6=lalt12autovar_6;
            ptr->pos=oldpos1;
            VALUE lalt13autovar_4=_autovar_4;
            VALUE lalt13name=_name;
            VALUE lalt13autovar_5=_autovar_5;
            VALUE lalt13autovar_6=_autovar_6;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            _autovar_4=lalt13autovar_4;
            _name=lalt13name;
            _autovar_5=lalt13autovar_5;
            _autovar_6=lalt13autovar_6;
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
        VALUE lalt12autovar_2=_autovar_2;
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
        _autovar_2=lalt12autovar_2;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_2=_autovar_2;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        _autovar_2=lalt13autovar_2;
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
            VALUE lalt12s=_s;
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
            _s=lalt12s;
            ptr->pos=oldpos1;
            if (cut1) {
                it=failobj;
                goto fail;
            }
            VALUE lalt13s=_s;
            VALUE lalt13autovar=_autovar;
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
            _s=lalt13s;
            _autovar=lalt13autovar;
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
            VALUE lalt22s=_s;
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
            _s=lalt22s;
            ptr->pos=oldpos2;
            if (cut2) {
                it=failobj;
                goto fail;
            }
            VALUE lalt23s=_s;
            VALUE lalt23autovar=_autovar;
            VALUE lalt23autovar_2=_autovar_2;
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
            _s=lalt23s;
            _autovar=lalt23autovar;
            _autovar_2=lalt23autovar_2;
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
        VALUE lalt12_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        __result=it;;

        ;
        goto accept1;
alt1_2:
        __result=lalt12_result;
        ptr->pos=oldpos1;
        VALUE lalt13_result=__result;
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
        it=Qnil;
        goto accept2;
reject1:
        it=failobj;
accept2:
        ptr->pos=oldpos2;
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        __result=lalt13_result;
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
        VALUE lalt22_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        }
        __result=it;;

        ;
        goto accept3;
alt2_2:
        __result=lalt22_result;
        ptr->pos=oldpos3;
        VALUE lalt23_result=__result;
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
        it=Qnil;
        goto accept4;
reject2:
        it=failobj;
accept4:
        ptr->pos=oldpos4;
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt2_3:
        __result=lalt23_result;
        ptr->pos=oldpos3;
        VALUE lalt24x=_x;
        VALUE lalt24autovar=_autovar;
        VALUE lalt24autovar_2=_autovar_2;
        VALUE lalt24_result_2=__result_2;
        VALUE lalt24_result_3=__result_3;
        VALUE lalt24_result=__result;
        VALUE lalt24s=_s;
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
        _x=lalt24x;
        _autovar=lalt24autovar;
        _autovar_2=lalt24autovar_2;
        __result_2=lalt24_result_2;
        __result_3=lalt24_result_3;
        __result=lalt24_result;
        _s=lalt24s;
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
        VALUE lalt32_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_2;
        }
        __result=it;;

        ;
        goto accept5;
alt3_2:
        __result=lalt32_result;
        ptr->pos=oldpos5;
        VALUE lalt33_result=__result;
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
        it=Qnil;
        goto accept6;
reject3:
        it=failobj;
accept6:
        ptr->pos=oldpos6;
        if (it==failobj) {
            it=failobj;
            goto alt3_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt3_3:
        __result=lalt33_result;
        ptr->pos=oldpos5;
        VALUE lalt34_result=__result;
        VALUE lalt34s=_s;
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
        __result=lalt34_result;
        _s=lalt34s;
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
        VALUE lalt42_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_2;
        }
        __result=it;;

        ;
        goto accept7;
alt4_2:
        __result=lalt42_result;
        ptr->pos=oldpos7;
        VALUE lalt43_result=__result;
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
        it=Qnil;
        goto accept8;
reject4:
        it=failobj;
accept8:
        ptr->pos=oldpos8;
        if (it==failobj) {
            it=failobj;
            goto alt4_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept7;
alt4_3:
        __result=lalt43_result;
        ptr->pos=oldpos7;
        VALUE lalt44x=_x;
        VALUE lalt44autovar=_autovar;
        VALUE lalt44autovar_2=_autovar_2;
        VALUE lalt44_result_2=__result_2;
        VALUE lalt44_result_3=__result_3;
        VALUE lalt44_result=__result;
        VALUE lalt44s=_s;
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
        _x=lalt44x;
        _autovar=lalt44autovar;
        _autovar_2=lalt44autovar_2;
        __result_2=lalt44_result_2;
        __result_3=lalt44_result_3;
        __result=lalt44_result;
        _s=lalt44s;
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
        VALUE lalt52_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt5_2;
        }
        __result=it;;

        ;
        goto accept9;
alt5_2:
        __result=lalt52_result;
        ptr->pos=oldpos9;
        VALUE lalt53_result=__result;
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
        it=Qnil;
        goto accept10;
reject5:
        it=failobj;
accept10:
        ptr->pos=oldpos10;
        if (it==failobj) {
            it=failobj;
            goto alt5_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept9;
alt5_3:
        __result=lalt53_result;
        ptr->pos=oldpos9;
        VALUE lalt54_result=__result;
        VALUE lalt54x_2=_x_2;
        VALUE lalt54ors=_ors;
        VALUE lalt54_result_4=__result_4;
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
            VALUE lalt62_result=__result;
            VALUE lalt62ors=_ors;
            VALUE lalt62_result_4=__result_4;
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
            __result=lalt62_result;
            _ors=lalt62ors;
            __result_4=lalt62_result_4;
            ptr->pos=oldpos11;
            VALUE lalt63_result=__result;
            VALUE lalt63x_2=_x_2;
            VALUE lalt63ors=_ors;
            VALUE lalt63_result_4=__result_4;
            bind_aset(bind2,1,_x_2);
            it=rb_funcall(self,sy_AmethystParser_Parenthe_261b,1,bind2);
            _x_2=bind_aget(bind2,1);;
            __result=it;;

            ;
            goto accept11;
alt6_3:
            __result=lalt63_result;
            _x_2=lalt63x_2;
            _ors=lalt63ors;
            __result_4=lalt63_result_4;
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
        __result=lalt54_result;
        _x_2=lalt54x_2;
        _ors=lalt54ors;
        __result_4=lalt54_result_4;
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
        VALUE lalt72_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt7_2;
        }
        __result=it;;

        ;
        goto accept12;
alt7_2:
        __result=lalt72_result;
        ptr->pos=oldpos12;
        VALUE lalt73_result=__result;
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
        it=Qnil;
        goto accept13;
reject6:
        it=failobj;
accept13:
        ptr->pos=oldpos13;
        if (it==failobj) {
            it=failobj;
            goto alt7_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept12;
alt7_3:
        __result=lalt73_result;
        ptr->pos=oldpos12;
        VALUE lalt74_result=__result;
        it=AmethystParser_host_expr(self );
        if (it==failobj) {
            it=failobj;
            goto alt7_4;
        }
        __result=it;;

        ;
        goto accept12;
alt7_4:
        __result=lalt74_result;
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
        VALUE lalt82_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt8_2;
        }
        __result=it;;

        ;
        goto accept14;
alt8_2:
        __result=lalt82_result;
        ptr->pos=oldpos14;
        VALUE lalt83_result=__result;
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
        it=Qnil;
        goto accept15;
reject7:
        it=failobj;
accept15:
        ptr->pos=oldpos15;
        if (it==failobj) {
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
        __result=lalt83_result;
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
        VALUE lalt102_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt10_2;
        }
        __result=it;;

        ;
        goto accept17;
alt10_2:
        __result=lalt102_result;
        ptr->pos=oldpos17;
        VALUE lalt103_result=__result;
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
        it=Qnil;
        goto accept18;
reject8:
        it=failobj;
accept18:
        ptr->pos=oldpos18;
        if (it==failobj) {
            it=failobj;
            goto alt10_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept17;
alt10_3:
        __result=lalt103_result;
        ptr->pos=oldpos17;
        VALUE lalt104_result=__result;
        VALUE lalt104it=_it;
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
        __result=lalt104_result;
        _it=lalt104it;
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
        VALUE lalt112_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt11_2;
        }
        __result=it;;

        ;
        goto accept19;
alt11_2:
        __result=lalt112_result;
        ptr->pos=oldpos19;
        VALUE lalt113_result=__result;
        it=AmethystParser_call(self );
        if (it==failobj) {
            it=failobj;
            goto alt11_3;
        }
        __result=it;;

        ;
        goto accept19;
alt11_3:
        __result=lalt113_result;
        ptr->pos=oldpos19;
        VALUE lalt114_result=__result;
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
        it=Qnil;
        goto accept20;
reject9:
        it=failobj;
accept20:
        ptr->pos=oldpos20;
        if (it==failobj) {
            it=failobj;
            goto alt11_4;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept19;
alt11_4:
        __result=lalt114_result;
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
        VALUE lalt122_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt12_2;
        }
        __result=it;;

        ;
        goto accept21;
alt12_2:
        __result=lalt122_result;
        ptr->pos=oldpos21;
        VALUE lalt123_result=__result;
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
        it=Qnil;
        goto accept22;
reject10:
        it=failobj;
accept22:
        ptr->pos=oldpos22;
        if (it==failobj) {
            it=failobj;
            goto alt12_3;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept21;
alt12_3:
        __result=lalt123_result;
        ptr->pos=oldpos21;
        VALUE lalt124_result=__result;
        VALUE lalt124e=_e;
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
        __result=lalt124_result;
        _e=lalt124e;
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
        VALUE lalt132_result=__result;
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
        __result=lalt132_result;
        ptr->pos=oldpos23;
        VALUE lalt133_result=__result;
        it=AmethystParser_cases(self );
        if (it==failobj) {
            it=failobj;
            goto alt13_3;
        }
        __result=it;;

        ;
        goto accept23;
alt13_3:
        __result=lalt133_result;
        ptr->pos=oldpos23;
        VALUE lalt134_result=__result;
        it=AmethystParser_call(self );
        if (it==failobj) {
            it=failobj;
            goto alt13_4;
        }
        __result=it;;

        ;
        goto accept23;
alt13_4:
        __result=lalt134_result;
        ptr->pos=oldpos23;
        VALUE lalt135_result=__result;
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
        it=Qnil;
        goto accept24;
reject11:
        it=failobj;
accept24:
        ptr->pos=oldpos24;
        if (it==failobj) {
            it=failobj;
            goto alt13_5;
        }
        it=Qnil;
        it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept23;
alt13_5:
        __result=lalt135_result;
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
    sy_AmethystParser_Or_AST_lb_b_3220=rb_intern("AmethystParser_Or_AST_lb_b_3220");
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
    sy_AmethystParser__at_appends_36ee=rb_intern("AmethystParser__at_appends_36ee");
    sy_AmethystParser__at_appends_b984=rb_intern("AmethystParser__at_appends_b984");
    sy_AmethystParser__at_ary_eq__lb__rb_=rb_intern("AmethystParser__at_ary_eq__lb__rb_");
    sy_AmethystParser__at_ary_ff69=rb_intern("AmethystParser__at_ary_ff69");
    sy_AmethystParser__at_ary_lt__lt_Ar_59e3=rb_intern("AmethystParser__at_ary_lt__lt_Ar_59e3");
    sy_AmethystParser__at_bnding_7d3c=rb_intern("AmethystParser__at_bnding_7d3c");
    sy_AmethystParser__at_locals_dot__bdc6=rb_intern("AmethystParser__at_locals_dot__bdc6");
    sy_AmethystParser__at_locals_eq__4fc1=rb_intern("AmethystParser__at_locals_eq__4fc1");
    sy_AmethystParser__at_tmp_lt__lt_bi_b81c=rb_intern("AmethystParser__at_tmp_lt__lt_bi_b81c");
    sy_AmethystParser__dq__le__dq__pl_bind_567e=rb_intern("AmethystParser__dq__le__dq__pl_bind_567e");
    sy_AmethystParser__dq_amethys_673b=rb_intern("AmethystParser__dq_amethys_673b");
    sy_AmethystParser__lb__dq__lp__dq_=rb_intern("AmethystParser__lb__dq__lp__dq_");
    sy_AmethystParser__lb_bind_lb_1_rb__6281=rb_intern("AmethystParser__lb_bind_lb_1_rb__6281");
    sy_AmethystParser__lb_bind_lb_1_rb__c1c8=rb_intern("AmethystParser__lb_bind_lb_1_rb__c1c8");
    sy_AmethystParser__lb_bind_lb_1_rb__f4d6=rb_intern("AmethystParser__lb_bind_lb_1_rb__f4d6");
    sy_AmethystParser__lp_bind_lb_1_rb__a724=rb_intern("AmethystParser__lp_bind_lb_1_rb__a724");
    sy_AmethystParser_a_eq_autova_57aa=rb_intern("AmethystParser_a_eq_autova_57aa");
    sy_AmethystParser_bind_lb_1_rb_=rb_intern("AmethystParser_bind_lb_1_rb_");
    sy_AmethystParser_bind_lb_1_rb__dot__1371=rb_intern("AmethystParser_bind_lb_1_rb__dot__1371");
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
