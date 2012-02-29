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
VALUE AmethystParser_term(VALUE self );
VALUE switchhash_AmethystParser_1;
VALUE switchhash_AmethystParser_2;
static VALUE s_;
static VALUE s_Amethyst_fe41;
static VALUE s__bq__8333;
static VALUE s__bs__bs__7f81;
static VALUE s__bs__sh__le__a90f;
static VALUE s__co__at__4bf0;
static VALUE s__dot__dot__58b9;
static VALUE s__dot__dot__dot__2f43;
static VALUE s__gt__cedf;
static VALUE s__lb__8154;
static VALUE s__lb__rb__d751;
static VALUE s__le__f95b;
static VALUE s__lp__84c4;
static VALUE s__lt__524a;
static VALUE s__rb__0fbd;
static VALUE s__re__cbb1;
static VALUE s__rp__9371;
static VALUE sy__;
static VALUE sy__Act_lb_Args_23b1;
static VALUE sy__Act_lb_bind_7d0b;
static VALUE sy__Apply_lb__dq_a_1437;
static VALUE sy__Apply_lb__dq_c_a8b6;
static VALUE sy__Apply_lb__dq_m_2ec1;
static VALUE sy__Apply_lb__dq_r_269c;
static VALUE sy__Apply_lb__dq_s_9322;
static VALUE sy__Apply_lb__dq_t_e958;
static VALUE sy__Apply_lb__lb_b_099b;
static VALUE sy__Apply_lb_bi_9146;
static VALUE sy__Args_lb__le__co_a_9abe;
static VALUE sy__Bind_lb_loc_37df;
static VALUE sy__Comment_lb__ed6f;
static VALUE sy__Contextu_32ad;
static VALUE sy__Contextu_4e8d;
static VALUE sy__Enter_lb_Ap_7d1f;
static VALUE sy__Enter_lb_bi_9246;
static VALUE sy__Global_lb_b_0216;
static VALUE sy__Grammar_dot__a510;
static VALUE sy__Key_lb_bind_5e9f;
static VALUE sy__Lambda_lb_B_2c90;
static VALUE sy__Lookahea_0946;
static VALUE sy__Many_lb_bin_14d1;
static VALUE sy__Nested_lb_b_1ac2;
static VALUE sy__Or_AST_dot_c_19e2;
static VALUE sy__Or_AST_lb_b_0657;
static VALUE sy__Parenthe_261b;
static VALUE sy__Pass_lb_bin_2f93;
static VALUE sy__Pred_lb_bin_ae38;
static VALUE sy__Result_lb__le__a3b4;
static VALUE sy__Rule_dot_cre_3767;
static VALUE sy__Seq_dot_crea_bfbb;
static VALUE sy__Seq_lb_Bind_bbb6;
static VALUE sy__Seq_lb_Cut_lb__3505;
static VALUE sy__Strin_lb__lb__dq__b20e;
static VALUE sy__Strin_lb__lb__qu__88c8;
static VALUE sy___at_appends_975f;
static VALUE sy___at_appends_9f26;
static VALUE sy___at_ary_eq__lb__rb_;
static VALUE sy___at_ary_ff69;
static VALUE sy___at_ary_lt__lt_Ar_59e3;
static VALUE sy___at_bnding_7d3c;
static VALUE sy___at_locals_dot__bdc6;
static VALUE sy___at_locals_eq__4fc1;
static VALUE sy___at_tmp_lt__lt_bi_b81c;
static VALUE sy___dq__le__dq__pl_bind_567e;
static VALUE sy___lb_bind_lb_1_rb__6281;
static VALUE sy___lp_bind_lb_1_rb__a724;
static VALUE sy__a_eq_autova_5b84;
static VALUE sy__bind_lb_1_rb_;
static VALUE sy__bind_lb_1_rb__dot__7b93;
static VALUE sy__bind_lb_1_rb__dot__e879;
static VALUE sy__bind_lb_1_rb__eq__f15c;
static VALUE sy__bind_lb_1_rb__pl__b087;
static VALUE sy__local_lp_bi_196b;
static VALUE sy_argsOpt;
static VALUE sy_call;
static VALUE sy_cases;
static VALUE sy_className;
static VALUE sy_expression;
static VALUE sy_grammar;
static VALUE sy_host_expr;
static VALUE sy_inline_host_expr;
static VALUE sy_key;
static VALUE sy_line;
static VALUE sy_name;
static VALUE sy_nr;
static VALUE sy_number;
static VALUE sy_postfixed;
static VALUE sy_prefixed;
static VALUE sy_procargs2;
static VALUE sy_procargs;
static VALUE sy_rubyarg;
static VALUE sy_rule;
static VALUE sy_ruleargs;
static VALUE sy_sequence;
static VALUE sy_spaces;
static VALUE sy_term;

memo_struct *mem_AmethystParser=NULL;
VALUE memo_val_AmethystParser;
VALUE profile_report_AmethystParser(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if(ptr->mem) {
        fprintf(profile_report,"memo AmethystParser::name  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[113],((memo_struct *)ptr->mem)->miss[113],((memo_struct *)ptr->mem)->ticks[113]);
        ((memo_struct *)ptr->mem)->hits[113]=0;
        ((memo_struct *)ptr->mem)->miss[113]=0;
        ((memo_struct *)ptr->mem)->ticks[113]=0;
    }
    if(ptr->mem) {
        fprintf(profile_report,"memo AmethystParser::argsOpt  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[115],((memo_struct *)ptr->mem)->miss[115],((memo_struct *)ptr->mem)->ticks[115]);
        ((memo_struct *)ptr->mem)->hits[115]=0;
        ((memo_struct *)ptr->mem)->miss[115]=0;
        ((memo_struct *)ptr->mem)->ticks[115]=0;
    }
    return Qnil;
}
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_o,_s,_autovar,_autovar_2,_r,_c,__result;
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
    FAILTEST(fail);
    it=_s;
    it=rb_funcall(self,sy_spaces,0);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(92):
            ;
        case '^' ... '|':
            ;
        case '~' ... UC(255):
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=rb_funcall(self,sy_rubyarg,0);
            FAILTEST(alt1_2);
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
            goto fail;
accept1:
            ;
            break;
        case ')' ... ')':
            ;
        case ']' ... ']':
            ;
        case '}' ... '}':
            ;
            stop1=1;
            break;
        }
    }
    it=_autovar;
    _r=it;;
    it=_c;
    _s=it;;
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    FAILTEST(fail);
    it=_s;
    bind_aset(bind2,1,_r);
    it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
    _r=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
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
    FAILTEST(fail);
    it=_s;
    it=rb_funcall(self,sy_spaces,0);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(92):
            ;
        case '^' ... '|':
            ;
        case '~' ... UC(255):
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=rb_funcall(self,sy_rubyarg,0);
            FAILTEST(alt1_2);
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
            goto fail;
accept1:
            ;
            break;
        case ')' ... ')':
            ;
        case ']' ... ']':
            ;
        case '}' ... '}':
            ;
            stop1=1;
            break;
        }
    }
    it=_autovar;
    _r=it;;
    it=_c_2;
    _s=it;;
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    FAILTEST(fail);
    it=_s;
    bind_aset(bind2,1,_r);
    it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
    _r=bind_aget(bind2,1);;
    __result=it;;
    it=__result;
    _r_2=it;;
    bind_aset(bind2,1,_o);
    bind_aset(bind2,2,_r_2);
    bind_aset(bind2,3,_c);
    it=rb_funcall(self,sy__Args_lb__le__co_a_9abe,1,bind2);
    _o=bind_aget(bind2,1);;
    _r_2=bind_aget(bind2,2);;
    _c=bind_aget(bind2,3);;
    __result_2=it;;

    return it;
fail:
    return failobj;
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
    time_struct time_old=memo_get(ptr->mem,115,ptr->src,ptr->pos);
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
            goto alt1_2;
            break;
        case '(' ... '(':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=rb_funcall(self,sy_spaces,0);
        it=rb_ary_new3(0);
        _autovar=it;;
        int stop1=0;
        while(!stop1) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '(':
                ;
            case '*' ... UC(92):
                ;
            case '^' ... '|':
                ;
            case '~' ... UC(255):
                ;
                int oldpos2=ptr->pos;
                int cut2=0;
alt2_1:
                ;
                it=rb_funcall(self,sy_rubyarg,0);
                FAILTEST(alt2_2);
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
                goto alt1_2;
accept2:
                ;
                break;
            case ')' ... ')':
                ;
            case ']' ... ']':
                ;
            case '}' ... '}':
                ;
                stop1=1;
                break;
            }
        }
        it=_autovar;
        _r=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            goto alt1_2;
            break;
        case ')' ... ')':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _r_2=it;;
        bind_aset(bind2,1,_r_2);
        it=rb_funcall(self,sy__bind_lb_1_rb__pl__b087,1,bind2);
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
        FAILTEST(pass1);
        _autovar_4=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_4;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_funcall(self,sy_procargs,0);
        _autovar_5=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto pass1;
success2:
        *ptr=oldpass2;
        it=_autovar_5;
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
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
        goto memo_fail;
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
        it=rb_funcall(self,sy__,0);
        FAILTEST(alt4_2);
        cut4=1;
        goto alt4_2;
        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        if (cut4) goto alt3_2;
        it=Qnil;
        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto alt3_2;
accept4:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(39):
            ;
        case ')' ... UC(255):
            ;
            goto alt3_2;
            break;
        case '(' ... '(':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=rb_funcall(self,sy_spaces,0);
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
                int oldpos5=ptr->pos;
                int cut5=0;
alt5_1:
                ;
                it=rb_funcall(self,sy_rubyarg,0);
                FAILTEST(alt5_2);
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
                goto alt3_2;
accept5:
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
        _r=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            goto alt3_2;
            break;
        case ')' ... ')':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _r_2=it;;
        bind_aset(bind2,1,_r_2);
        it=rb_funcall(self,sy__bind_lb_1_rb__pl__b087,1,bind2);
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
        FAILTEST(pass3);
        _autovar_4=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_4;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_funcall(self,sy_procargs,0);
        _autovar_5=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto pass3;
success4:
        *ptr=oldpass4;
        it=_autovar_5;
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto alt3_2;
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
        goto memo_fail;
accept3:
        ;
        break;
    }
    memo_add(ptr->mem,115,ptr->src,oldpos,it,ptr->pos,time_old);
    return it;
memo_fail:
    memo_add(ptr->mem,115,ptr->src,oldpos,failobj,ptr->pos,time_old);
    return failobj;

    return it;
fail:
    return failobj;
}
VALUE AmethystParser_call(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_klas,_name,_arg,__result;
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
        goto fail;
        break;
    case 'A' ... 'Z':
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_funcall(self,sy_className,0);
        FAILTEST(alt1_2);
        _klas=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt1_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]==':')  ptr->pos+=1;
            else goto alt1_2;
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
            goto alt1_2;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt1_2);
            _name=it;;
            break;
        }
        it=rb_funcall(self,sy_argsOpt,0);
        _arg=it;;
        bind_aset(bind2,1,_klas);
        bind_aset(bind2,2,_name);
        bind_aset(bind2,3,_arg);
        it=rb_funcall(self,sy__Apply_lb__lb_b_099b,1,bind2);
        _klas=bind_aget(bind2,1);;
        _name=bind_aget(bind2,2);;
        _arg=bind_aget(bind2,3);;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_funcall(self,sy_name,0);
        FAILTEST(alt1_3);
        _name=it;;
        it=rb_funcall(self,sy_argsOpt,0);
        _arg=it;;
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_arg);
        it=rb_funcall(self,sy__Apply_lb_bi_9146,1,bind2);
        _name=bind_aget(bind2,1);;
        _arg=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_funcall(self,sy_name,0);
        FAILTEST(fail);
        _name=it;;
        it=rb_funcall(self,sy_argsOpt,0);
        _arg=it;;
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_arg);
        it=rb_funcall(self,sy__Apply_lb_bi_9146,1,bind2);
        _name=bind_aget(bind2,1);;
        _arg=bind_aget(bind2,2);;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE AmethystParser_cases(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_s,_x,_autovar,_autovar_2,__result,_s_2,__result_2,_autovar_3,_autovar_4,__result_3,_autovar_5,_autovar_6,_it,_num,_clas;
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
        FAILTEST(fail);
        it=_s;
        it=rb_obj_clone(s__gt__cedf);
        it=rb_ary_new3(0);
        _x=it;;
        it=rb_ary_new3(0);
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
                    int oldpos1=ptr->pos;
                    int cut1=0;
alt1_1:
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    goto alt1_2;
                    ;
                    goto accept1;
alt1_2:
                    ptr->pos=oldpos1;
                    int oldpos2=ptr->pos;
                    int cut2=0;
alt2_1:
                    ;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    goto alt2_2;
                    ;
                    goto accept2;
alt2_2:
                    ptr->pos=oldpos2;
                    it=Qnil;
                    ;
                    goto accept2;
alt2_3:
                    ptr->pos=oldpos2;
                    goto alt1_3;
accept2:
                    ;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt1_3);
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    ;
                    goto accept1;
alt1_3:
                    ptr->pos=oldpos1;
                    goto fail;
accept1:
                    ;
                    break;
                case '>' ... '>':
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
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
                    int oldpos3=ptr->pos;
                    int cut3=0;
alt3_1:
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    goto alt3_2;
                    ;
                    goto accept3;
alt3_2:
                    ptr->pos=oldpos3;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_2=it;;
                    it=AmethystCore_append(self,_x,_autovar_2);
                    it=AmethystCore_anything(self );
                    FAILTEST(alt3_3);
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    ;
                    goto accept3;
alt3_3:
                    ptr->pos=oldpos3;
                    goto fail;
accept3:
                    ;
                    break;
                case '>' ... '>':
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    stop1=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _x=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _s_2=it;;
        bind_aset(bind2,1,_s_2);
        it=rb_funcall(self,sy__Apply_lb__dq_r_269c,1,bind2);
        _s_2=bind_aget(bind2,1);;
        __result_2=it;;
        break;
    case '-' ... '-':
        ;
    case '0' ... '9':
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        it=rb_ary_new3(0);
        _autovar_3=it;;
        it=rb_funcall(self,sy_number,0);
        FAILTEST(alt5_2);
        _autovar_4=it;;
        it=AmethystCore_append(self,_autovar_3,_autovar_4);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... UC(255):
            ;
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=rb_obj_clone(s__dot__dot__dot__2f43);
            goto alt6_2;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            it=rb_obj_clone(s__dot__dot__58b9);
            goto alt6_3;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto alt5_2;
accept6:
            ;
            break;
        case '.' ... '.':
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=rb_obj_clone(s__dot__dot__dot__2f43);
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2;
            else goto alt7_2;
            it=rb_obj_clone(s__dot__dot__dot__2f43);
            __result_3=it;;
            it=__result_3;
            _autovar_5=it;;

            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            it=rb_obj_clone(s__dot__dot__58b9);
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1;
            else goto alt7_3;
            it=rb_obj_clone(s__dot__dot__58b9);
            __result_3=it;;
            it=__result_3;
            _autovar_5=it;;

            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            goto alt5_2;
accept7:
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
            goto alt5_2;
            break;
        case '-' ... '-':
            ;
        case '0' ... '9':
            ;
            it=rb_funcall(self,sy_number,0);
            FAILTEST(alt5_2);
            _autovar_6=it;;
            break;
        }
        it=AmethystCore_append(self,_autovar_3,_autovar_6);
        it=_autovar_3;
        _it=it;;
        bind_aset(bind2,1,_it);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__7b93,1,bind2);
        _it=bind_aget(bind2,1);;
        _num=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=rb_funcall(self,sy_number,0);
        FAILTEST(alt5_3);
        _num=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        goto alt4_2;
accept5:
        ;
        bind_aset(bind2,1,_num);
        it=rb_funcall(self,sy__Apply_lb__dq_m_2ec1,1,bind2);
        _num=bind_aget(bind2,1);;
        __result_2=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=rb_obj_clone(s__lt__524a);
        _s=it;;
        it=_s;
        arg0=it;
        it=AmethystCore__seq(self ,arg0);
        FAILTEST(alt4_3);
        it=_s;
        it=rb_obj_clone(s__gt__cedf);
        it=rb_ary_new3(0);
        _x=it;;
        it=rb_ary_new3(0);
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
                    int oldpos8=ptr->pos;
                    int cut8=0;
alt8_1:
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    goto alt8_2;
                    ;
                    goto accept8;
alt8_2:
                    ptr->pos=oldpos8;
                    int oldpos9=ptr->pos;
                    int cut9=0;
alt9_1:
                    ;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    goto alt9_2;
                    ;
                    goto accept9;
alt9_2:
                    ptr->pos=oldpos9;
                    it=Qnil;
                    ;
                    goto accept9;
alt9_3:
                    ptr->pos=oldpos9;
                    goto alt8_3;
accept9:
                    ;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt8_3);
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    ;
                    goto accept8;
alt8_3:
                    ptr->pos=oldpos8;
                    goto alt4_3;
accept8:
                    ;
                    break;
                case '>' ... '>':
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    cut4=1;
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
                    int oldpos10=ptr->pos;
                    int cut10=0;
alt10_1:
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    goto alt10_2;
                    ;
                    goto accept10;
alt10_2:
                    ptr->pos=oldpos10;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_2=it;;
                    it=AmethystCore_append(self,_x,_autovar_2);
                    it=AmethystCore_anything(self );
                    FAILTEST(alt10_3);
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    ;
                    goto accept10;
alt10_3:
                    ptr->pos=oldpos10;
                    goto alt4_3;
accept10:
                    ;
                    break;
                case '>' ... '>':
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    cut4=1;
                    stop2=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _x=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _s_2=it;;
        bind_aset(bind2,1,_s_2);
        it=rb_funcall(self,sy__Apply_lb__dq_r_269c,1,bind2);
        _s_2=bind_aget(bind2,1);;
        __result_2=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        if (cut4) goto fail;
        goto fail;
accept4:
        ;
        break;
    case 'A' ... 'Z':
        ;
        int oldpos11=ptr->pos;
        int cut11=0;
alt11_1:
        ;
        it=rb_funcall(self,sy_className,0);
        FAILTEST(alt11_2);
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
            int oldpos12=ptr->pos;
            int cut12=0;
alt12_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]==':')  ptr->pos+=1;
            else goto alt12_2;
            cut12=1;
            goto alt12_2;
            ;
            goto accept12;
alt12_2:
            ptr->pos=oldpos12;
            if (cut12) goto alt11_2;
            it=Qnil;
            ;
            goto accept12;
alt12_3:
            ptr->pos=oldpos12;
            goto alt11_2;
accept12:
            ;
            break;
        }
        bind_aset(bind2,1,_clas);
        it=rb_funcall(self,sy__Apply_lb__dq_c_a8b6,1,bind2);
        _clas=bind_aget(bind2,1);;
        __result_2=it;;

        ;
        goto accept11;
alt11_2:
        ptr->pos=oldpos11;
        it=rb_ary_new3(0);
        goto alt11_3;
        ;
        goto accept11;
alt11_3:
        ptr->pos=oldpos11;
        it=rb_obj_clone(s__lt__524a);
        _s=it;;
        it=_s;
        arg0=it;
        it=AmethystCore__seq(self ,arg0);
        FAILTEST(alt11_4);
        it=_s;
        it=rb_obj_clone(s__gt__cedf);
        it=rb_ary_new3(0);
        _x=it;;
        it=rb_ary_new3(0);
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
                    int oldpos13=ptr->pos;
                    int cut13=0;
alt13_1:
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    goto alt13_2;
                    ;
                    goto accept13;
alt13_2:
                    ptr->pos=oldpos13;
                    int oldpos14=ptr->pos;
                    int cut14=0;
alt14_1:
                    ;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    goto alt14_2;
                    ;
                    goto accept14;
alt14_2:
                    ptr->pos=oldpos14;
                    it=Qnil;
                    ;
                    goto accept14;
alt14_3:
                    ptr->pos=oldpos14;
                    goto alt13_3;
accept14:
                    ;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt13_3);
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    ;
                    goto accept13;
alt13_3:
                    ptr->pos=oldpos13;
                    goto alt11_4;
accept13:
                    ;
                    break;
                case '>' ... '>':
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    cut11=1;
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
                    int oldpos15=ptr->pos;
                    int cut15=0;
alt15_1:
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    goto alt15_2;
                    ;
                    goto accept15;
alt15_2:
                    ptr->pos=oldpos15;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_2=it;;
                    it=AmethystCore_append(self,_x,_autovar_2);
                    it=AmethystCore_anything(self );
                    FAILTEST(alt15_3);
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    ;
                    goto accept15;
alt15_3:
                    ptr->pos=oldpos15;
                    goto alt11_4;
accept15:
                    ;
                    break;
                case '>' ... '>':
                    ;
                    it=rb_obj_clone(s__gt__cedf);
                    _s=it;;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__gt__cedf);
                    cut11=1;
                    stop3=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _x=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _s_2=it;;
        bind_aset(bind2,1,_s_2);
        it=rb_funcall(self,sy__Apply_lb__dq_r_269c,1,bind2);
        _s_2=bind_aget(bind2,1);;
        __result_2=it;;

        ;
        goto accept11;
alt11_4:
        ptr->pos=oldpos11;
        if (cut11) goto fail;
        goto fail;
accept11:
        ;
        break;
    }
    return it;
fail:
    return failobj;
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
        goto fail;
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
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__7b93,1,bind2);
        _it=bind_aget(bind2,1);;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
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
    it=rb_funcall(self,sy__a_eq_autova_5b84,1,bind2);
    _ors=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
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
    it=rb_funcall(self,sy_sequence,0);
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
        it=rb_obj_clone(s_);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s_);
        if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1;
        else goto alt1_2;
        it=rb_obj_clone(s_);
        it=rb_funcall(self,sy_sequence,0);
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
        goto fail;
accept1:
        ;
    }
    it=_autovar_2;
    _autovar_4=it;;
    it=AmethystCore_append(self,_f,_autovar_4);
    bind_aset(bind2,1,_f);
    it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
    _f=bind_aget(bind2,1);;
    __result=it;;
    it=__result;
    _ary=it;;
    bind_aset(bind2,1,_ary);
    it=rb_funcall(self,sy__Or_AST_dot_c_19e2,1,bind2);
    _ary=bind_aget(bind2,1);;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE AmethystParser_file(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_it,_autovar_5,__result,__result_2;
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
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... '`':
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
            it=rb_ary_new3(0);
            _autovar_2=it;;
            it=Qnil;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_2);
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            int stop2=0;
            while(!stop2) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '`':
                    ;
                case 'b' ... UC(255):
                    ;
                    int oldpos3=ptr->pos;
                    int cut3=0;
alt3_1:
                    ;
                    it=Qnil;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt3_2);
                    _autovar_4=it;;
                    it=AmethystCore_append(self,_autovar_2,_autovar_4);
                    ;
                    goto accept3;
alt3_2:
                    ptr->pos=oldpos3;
                    stop2=1;
                    ;
                    goto accept3;
alt3_3:
                    ptr->pos=oldpos3;
                    goto alt2_2;
accept3:
                    ;
                    break;
                case 'a' ... 'a':
                    ;
                    int oldpos4=ptr->pos;
                    int cut4=0;
alt4_1:
                    ;
                    int oldpos5=ptr->pos;
                    int cut5=0;
alt5_1:
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7;
                    else goto alt5_2;
                    cut5=1;
                    goto alt5_2;
                    ;
                    goto accept5;
alt5_2:
                    ptr->pos=oldpos5;
                    if (cut5) goto alt4_2;
                    it=Qnil;
                    ;
                    goto accept5;
alt5_3:
                    ptr->pos=oldpos5;
                    goto alt4_2;
accept5:
                    ;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt4_2);
                    _autovar_4=it;;
                    it=AmethystCore_append(self,_autovar_2,_autovar_4);
                    ;
                    goto accept4;
alt4_2:
                    ptr->pos=oldpos4;
                    stop2=1;
                    ;
                    goto accept4;
alt4_3:
                    ptr->pos=oldpos4;
                    goto alt2_2;
accept4:
                    ;
                    break;
                }
            }
            it=_autovar_2;
            _it=it;;
            bind_aset(bind2,1,_it);
            it=rb_funcall(self,sy__bind_lb_1_rb__dot__7b93,1,bind2);
            _it=bind_aget(bind2,1);;
            _autovar_5=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=rb_obj_clone(s__bq__8333);
            it=rb_funcall(self,sy_spaces,0);
            it=rb_obj_clone(s__bq__8333);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '_':
                ;
            case 'a' ... UC(255):
                ;
                goto alt2_3;
                break;
            case '`' ... '`':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                break;
            }
            it=rb_obj_clone(s__bq__8333);
            it=rb_funcall(self,sy_expression,0);
            it=rb_obj_clone(s__bq__8333);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '_':
                ;
            case 'a' ... UC(255):
                ;
                goto alt2_3;
                break;
            case '`' ... '`':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                break;
            }
            it=rb_obj_clone(s__bq__8333);
            __result=it;;
            it=__result;
            _autovar_5=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto alt1_2;
accept2:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_5);
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            goto fail;
accept1:
            ;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=rb_ary_new3(0);
            _autovar_2=it;;
            it=Qnil;
            it=AmethystCore_anything(self );
            FAILTEST(alt7_2);
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            int stop3=0;
            while(!stop3) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '`':
                    ;
                case 'b' ... UC(255):
                    ;
                    int oldpos8=ptr->pos;
                    int cut8=0;
alt8_1:
                    ;
                    it=Qnil;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt8_2);
                    _autovar_4=it;;
                    it=AmethystCore_append(self,_autovar_2,_autovar_4);
                    ;
                    goto accept8;
alt8_2:
                    ptr->pos=oldpos8;
                    stop3=1;
                    ;
                    goto accept8;
alt8_3:
                    ptr->pos=oldpos8;
                    goto alt7_2;
accept8:
                    ;
                    break;
                case 'a' ... 'a':
                    ;
                    int oldpos9=ptr->pos;
                    int cut9=0;
alt9_1:
                    ;
                    int oldpos10=ptr->pos;
                    int cut10=0;
alt10_1:
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7;
                    else goto alt10_2;
                    cut10=1;
                    goto alt10_2;
                    ;
                    goto accept10;
alt10_2:
                    ptr->pos=oldpos10;
                    if (cut10) goto alt9_2;
                    it=Qnil;
                    ;
                    goto accept10;
alt10_3:
                    ptr->pos=oldpos10;
                    goto alt9_2;
accept10:
                    ;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt9_2);
                    _autovar_4=it;;
                    it=AmethystCore_append(self,_autovar_2,_autovar_4);
                    ;
                    goto accept9;
alt9_2:
                    ptr->pos=oldpos9;
                    stop3=1;
                    ;
                    goto accept9;
alt9_3:
                    ptr->pos=oldpos9;
                    goto alt7_2;
accept9:
                    ;
                    break;
                }
            }
            it=_autovar_2;
            _it=it;;
            bind_aset(bind2,1,_it);
            it=rb_funcall(self,sy__bind_lb_1_rb__dot__7b93,1,bind2);
            _it=bind_aget(bind2,1);;
            _autovar_5=it;;

            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            it=rb_funcall(self,sy_grammar,0);
            FAILTEST(alt7_3);
            _autovar_5=it;;

            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            it=rb_obj_clone(s__bq__8333);
            it=rb_funcall(self,sy_spaces,0);
            it=rb_obj_clone(s__bq__8333);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '_':
                ;
            case 'a' ... UC(255):
                ;
                goto alt7_4;
                break;
            case '`' ... '`':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                break;
            }
            it=rb_obj_clone(s__bq__8333);
            it=rb_funcall(self,sy_expression,0);
            it=rb_obj_clone(s__bq__8333);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '_':
                ;
            case 'a' ... UC(255):
                ;
                goto alt7_4;
                break;
            case '`' ... '`':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                break;
            }
            it=rb_obj_clone(s__bq__8333);
            __result=it;;
            it=__result;
            _autovar_5=it;;

            ;
            goto accept7;
alt7_4:
            ptr->pos=oldpos7;
            goto alt6_2;
accept7:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_5);
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto fail;
accept6:
            ;
            break;
        case 'a' ... 'a':
            ;
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            int oldpos12=ptr->pos;
            int cut12=0;
alt12_1:
            ;
            it=rb_ary_new3(0);
            _autovar_2=it;;
            int oldpos13=ptr->pos;
            int cut13=0;
alt13_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7;
            else goto alt13_2;
            cut13=1;
            goto alt13_2;
            ;
            goto accept13;
alt13_2:
            ptr->pos=oldpos13;
            if (cut13) goto alt12_2;
            it=Qnil;
            ;
            goto accept13;
alt13_3:
            ptr->pos=oldpos13;
            goto alt12_2;
accept13:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt12_2);
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            int stop4=0;
            while(!stop4) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '`':
                    ;
                case 'b' ... UC(255):
                    ;
                    int oldpos14=ptr->pos;
                    int cut14=0;
alt14_1:
                    ;
                    it=Qnil;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt14_2);
                    _autovar_4=it;;
                    it=AmethystCore_append(self,_autovar_2,_autovar_4);
                    ;
                    goto accept14;
alt14_2:
                    ptr->pos=oldpos14;
                    stop4=1;
                    ;
                    goto accept14;
alt14_3:
                    ptr->pos=oldpos14;
                    goto alt12_2;
accept14:
                    ;
                    break;
                case 'a' ... 'a':
                    ;
                    int oldpos15=ptr->pos;
                    int cut15=0;
alt15_1:
                    ;
                    int oldpos16=ptr->pos;
                    int cut16=0;
alt16_1:
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7;
                    else goto alt16_2;
                    cut16=1;
                    goto alt16_2;
                    ;
                    goto accept16;
alt16_2:
                    ptr->pos=oldpos16;
                    if (cut16) goto alt15_2;
                    it=Qnil;
                    ;
                    goto accept16;
alt16_3:
                    ptr->pos=oldpos16;
                    goto alt15_2;
accept16:
                    ;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt15_2);
                    _autovar_4=it;;
                    it=AmethystCore_append(self,_autovar_2,_autovar_4);
                    ;
                    goto accept15;
alt15_2:
                    ptr->pos=oldpos15;
                    stop4=1;
                    ;
                    goto accept15;
alt15_3:
                    ptr->pos=oldpos15;
                    goto alt12_2;
accept15:
                    ;
                    break;
                }
            }
            it=_autovar_2;
            _it=it;;
            bind_aset(bind2,1,_it);
            it=rb_funcall(self,sy__bind_lb_1_rb__dot__7b93,1,bind2);
            _it=bind_aget(bind2,1);;
            _autovar_5=it;;

            ;
            goto accept12;
alt12_2:
            ptr->pos=oldpos12;
            it=rb_funcall(self,sy_grammar,0);
            FAILTEST(alt12_3);
            _autovar_5=it;;

            ;
            goto accept12;
alt12_3:
            ptr->pos=oldpos12;
            it=rb_obj_clone(s__bq__8333);
            it=rb_funcall(self,sy_spaces,0);
            it=rb_obj_clone(s__bq__8333);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '_':
                ;
            case 'a' ... UC(255):
                ;
                goto alt12_4;
                break;
            case '`' ... '`':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                break;
            }
            it=rb_obj_clone(s__bq__8333);
            it=rb_funcall(self,sy_expression,0);
            it=rb_obj_clone(s__bq__8333);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '_':
                ;
            case 'a' ... UC(255):
                ;
                goto alt12_4;
                break;
            case '`' ... '`':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                break;
            }
            it=rb_obj_clone(s__bq__8333);
            __result=it;;
            it=__result;
            _autovar_5=it;;

            ;
            goto accept12;
alt12_4:
            ptr->pos=oldpos12;
            goto alt11_2;
accept12:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_5);
            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            stop1=1;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            goto fail;
accept11:
            ;
            break;
        }
    }
    it=_autovar;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE AmethystParser_grammar(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_name,_parent,_autovar,_autovar_2,_rules,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '`':
        ;
    case 'b' ... UC(255):
        ;
        goto fail;
        break;
    case 'a' ... 'a':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7;
        else goto fail;
        break;
    }
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto fail;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_funcall(self,sy_name,0);
        FAILTEST(fail);
        _name=it;;
        break;
    }
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... ';':
        ;
    case '=' ... UC(255):
        ;
        goto alt1_2;
        break;
    case '<' ... '<':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        break;
    }
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto alt1_2;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_funcall(self,sy_name,0);
        FAILTEST(alt1_2);
        _parent=it;;
        break;
    }
    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    it=rb_obj_clone(s_Amethyst_fe41);
    _parent=it;;

    ;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    goto fail;
accept1:
    ;
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... 'z':
        ;
    case '|' ... UC(255):
        ;
        goto fail;
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
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=rb_funcall(self,sy_rule,0);
            FAILTEST(alt2_2);
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
            goto fail;
accept2:
            ;
            break;
        }
    }
    it=_autovar;
    _rules=it;;
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '|':
        ;
    case '~' ... UC(255):
        ;
        goto fail;
        break;
    case '}' ... '}':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        break;
    }
    bind_aset(bind2,1,_name);
    bind_aset(bind2,2,_parent);
    bind_aset(bind2,3,_rules);
    it=rb_funcall(self,sy__Grammar_dot__a510,1,bind2);
    _name=bind_aget(bind2,1);;
    _parent=bind_aget(bind2,2);;
    _rules=bind_aget(bind2,3);;
    __result=it;;

    return it;
fail:
    return failobj;
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
        goto fail;
        break;
    case '{' ... '{':
        ;
        it=rb_funcall(self,sy_inline_host_expr,0);
        FAILTEST(fail);
        __result=it;;
        break;
    case '-' ... '-':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1;
        else goto fail;
        it=rb_funcall(self,sy_line,0);
        FAILTEST(fail);
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy___dq__le__dq__pl_bind_567e,1,bind2);
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
        FAILTEST(pass1);
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_2;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'z':
            ;
        case '|' ... UC(255):
            ;
            goto pass2;
            break;
        case '{' ... '{':
            ;
            it=rb_funcall(self,sy_inline_host_expr,0);
            FAILTEST(pass2);
            _autovar_3=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            break;
        }
        goto success2;
pass2:
        *ptr=oldpass2;
        goto pass1;
success2:
        *ptr=oldpass2;
        it=_autovar_3;
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=_autovar_4;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
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
        goto fail;
        break;
    case '{' ... '{':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_funcall(self,sy_spaces,0);
        it=rb_ary_new3(0);
        _autovar=it;;
        int stop1=0;
        while(!stop1) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '(':
                ;
            case '*' ... UC(92):
                ;
            case '^' ... '|':
                ;
            case '~' ... UC(255):
                ;
                int oldpos1=ptr->pos;
                int cut1=0;
alt1_1:
                ;
                it=rb_funcall(self,sy_rubyarg,0);
                FAILTEST(alt1_2);
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
                goto fail;
accept1:
                ;
                break;
            case ')' ... ')':
                ;
            case ']' ... ']':
                ;
            case '}' ... '}':
                ;
                stop1=1;
                break;
            }
        }
        it=_autovar;
        _r=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '|':
            ;
        case '~' ... UC(255):
            ;
            goto fail;
            break;
        case '}' ... '}':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _r_2=it;;
        bind_aset(bind2,1,_r_2);
        it=rb_funcall(self,sy__Act_lb_Args_23b1,1,bind2);
        _r_2=bind_aget(bind2,1);;
        __result_2=it;;
        break;
    }
    return it;
fail:
    return failobj;
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
    it=rb_ary_new3(0);
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
            FAILTEST(alt1_2);
            it=_s;
            cut1=1;
            stop1=1;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            if (cut1) goto fail;
            it=rb_obj_clone(s__re__cbb1);
            it=rb_obj_clone(s__bs__sh__le__a90f);
            it=rb_obj_clone(s__re__cbb1);
            it=rb_obj_clone(s__bs__sh__le__a90f);
            it=rb_obj_clone(s__bs__sh__le__a90f);
            goto alt1_3;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=rb_obj_clone(s__bs__bs__7f81);
            goto alt2_2;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=Qnil;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto alt1_4;
accept2:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_4);
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept1;
alt1_4:
            ptr->pos=oldpos1;
            goto fail;
accept1:
            ;
            break;
        case '#' ... '#':
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            FAILTEST(alt3_2);
            it=_s;
            cut3=1;
            stop1=1;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            if (cut3) goto fail;
            it=rb_obj_clone(s__re__cbb1);
            it=rb_obj_clone(s__bs__sh__le__a90f);
            it=rb_obj_clone(s__re__cbb1);
            it=rb_obj_clone(s__bs__sh__le__a90f);
            it=rb_obj_clone(s__bs__sh__le__a90f);
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='{')  ptr->pos+=1;
            else goto alt3_3;
            it=rb_obj_clone(s__bs__sh__le__a90f);
            it=rb_funcall(self,sy_spaces,0);
            it=rb_ary_new3(0);
            _autovar_2=it;;
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
                    it=rb_funcall(self,sy_rubyarg,0);
                    FAILTEST(alt4_2);
                    _autovar_3=it;;
                    it=AmethystCore_append(self,_autovar_2,_autovar_3);
                    ;
                    goto accept4;
alt4_2:
                    ptr->pos=oldpos4;
                    stop2=1;
                    ;
                    goto accept4;
alt4_3:
                    ptr->pos=oldpos4;
                    goto alt3_3;
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
            it=_autovar_2;
            _r=it;;
            it=rb_obj_clone(s__re__cbb1);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '|':
                ;
            case '~' ... UC(255):
                ;
                goto alt3_3;
                break;
            case '}' ... '}':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                break;
            }
            it=rb_obj_clone(s__re__cbb1);
            bind_aset(bind2,1,_r);
            it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
            _r=bind_aget(bind2,1);;
            __result=it;;
            it=__result;
            _r_2=it;;
            it=rb_obj_clone(s__bs__sh__le__a90f);
            it=rb_obj_clone(s__re__cbb1);
            it=rb_obj_clone(s__bs__sh__le__a90f);
            _o=it;;
            it=rb_obj_clone(s__re__cbb1);
            _c=it;;
            bind_aset(bind2,1,_o);
            bind_aset(bind2,2,_r_2);
            bind_aset(bind2,3,_c);
            it=rb_funcall(self,sy__Args_lb__le__co_a_9abe,1,bind2);
            _o=bind_aget(bind2,1);;
            _r_2=bind_aget(bind2,2);;
            _c=bind_aget(bind2,3);;
            __result_2=it;;
            it=__result_2;
            _autovar_4=it;;
            it=AmethystCore_append(self,_x,_autovar_4);
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=rb_obj_clone(s__bs__bs__7f81);
            goto alt5_2;
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=Qnil;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            goto alt3_4;
accept5:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt3_4);
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept3;
alt3_4:
            ptr->pos=oldpos3;
            goto fail;
accept3:
            ;
            break;
        case UC(92) ... UC(92):
            ;
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            FAILTEST(alt6_2);
            it=_s;
            cut6=1;
            stop1=1;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            if (cut6) goto fail;
            it=rb_obj_clone(s__re__cbb1);
            it=rb_obj_clone(s__bs__sh__le__a90f);
            it=rb_obj_clone(s__re__cbb1);
            it=rb_obj_clone(s__bs__sh__le__a90f);
            it=rb_obj_clone(s__bs__sh__le__a90f);
            goto alt6_3;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            it=rb_obj_clone(s__bs__bs__7f81);
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__bs__bs__7f81);
            it=rb_obj_clone(s__bs__bs__7f81);
            it=rb_obj_clone(s__bs__bs__7f81);
            _autovar_5=it;;
            it=AmethystCore_append(self,_x,_autovar_5);
            it=AmethystCore_anything(self );
            FAILTEST(alt6_4);
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept6;
alt6_4:
            ptr->pos=oldpos6;
            goto fail;
accept6:
            ;
            break;
        }
    }
    bind_aset(bind2,1,_x);
    it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
    _x=bind_aget(bind2,1);;
    __result_3=it;;

    return it;
fail:
    return failobj;
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
        goto fail;
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
            goto alt1_2;
            break;
        case 'A' ... 'Z':
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=rb_funcall(self,sy_className,0);
            FAILTEST(alt2_2);
            _name=it;;
            bind_aset(bind2,1,_name);
            it=rb_funcall(self,sy__Result_lb__le__a3b4,1,bind2);
            _name=bind_aget(bind2,1);;
            __result=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt2_3);
            _name=it;;
            it=rb_funcall(self,sy_argsOpt,0);
            _arg=it;;
            bind_aset(bind2,1,_name);
            bind_aset(bind2,2,_arg);
            it=rb_funcall(self,sy__Key_lb_bind_5e9f,1,bind2);
            _name=bind_aget(bind2,1);;
            _arg=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto alt1_2;
accept2:
            ;
            break;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt1_2);
            _name=it;;
            it=rb_funcall(self,sy_argsOpt,0);
            _arg=it;;
            bind_aset(bind2,1,_name);
            bind_aset(bind2,2,_arg);
            it=rb_funcall(self,sy__Key_lb_bind_5e9f,1,bind2);
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
        else goto alt1_3;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            goto alt1_3;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt1_3);
            _name=it;;
            break;
        }
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy__Global_lb_b_0216,1,bind2);
        _name=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1;
        else goto alt1_4;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            goto alt1_4;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt1_4);
            _name=it;;
            break;
        }
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy__Contextu_4e8d,1,bind2);
        _name=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        if (ame_curstr2(ptr)[0]=='<')  ptr->pos+=1;
        else goto alt1_5;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            goto alt1_5;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt1_5);
            _name=it;;
            break;
        }
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy__Contextu_32ad,1,bind2);
        _name=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_5:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    }
    return it;
fail:
    return failobj;
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
    time_struct time_old=memo_get(ptr->mem,113,ptr->src,ptr->pos);
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
        goto memo_fail;
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
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__7b93,1,bind2);
        _it=bind_aget(bind2,1);;
        __result=it;;
        break;
    }
    memo_add(ptr->mem,113,ptr->src,oldpos,it,ptr->pos,time_old);
    return it;
memo_fail:
    memo_add(ptr->mem,113,ptr->src,oldpos,failobj,ptr->pos,time_old);
    return failobj;

    return it;
fail:
    return failobj;
}
VALUE AmethystParser_nr(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto alt1_2;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_funcall(self,sy_name,0);
        FAILTEST(alt1_2);
        break;
    }
    it=rb_funcall(self,sy_argsOpt,0);
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '<':
        ;
    case '>' ... UC(255):
        ;
        goto alt1_2;
        break;
    case '=' ... '=':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        break;
    }
    cut1=1;
    goto alt1_2;
    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    if (cut1) goto fail;
    it=Qnil;
    __result=it;;

    ;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    goto fail;
accept1:
    ;

    return it;
fail:
    return failobj;
}
VALUE AmethystParser_postfixed(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_from,_one,_e,_name,_append,__result,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_term,0);
    FAILTEST(fail);
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
                goto alt1_2;
                break;
            case '*' ... '+':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _one=it;;
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_one);
                it=rb_funcall(self,sy__Many_lb_bin_14d1,1,bind2);
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
                    goto alt1_2;
                    break;
                case '{' ... '{':
                    ;
                    it=rb_funcall(self,sy_inline_host_expr,0);
                    FAILTEST(alt1_2);
                    _e=it;;
                    bind_aset(bind2,1,_from);
                    bind_aset(bind2,2,_e);
                    it=rb_funcall(self,sy__Seq_lb_Bind_bbb6,1,bind2);
                    _from=bind_aget(bind2,1);;
                    _e=bind_aget(bind2,2);;
                    _from=it;;
                    break;
                case '@' ... '@':
                    ;
                    it=rb_funcall(self,sy_key,0);
                    FAILTEST(alt1_2);
                    _name=it;;
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... 'Z':
                        ;
                    case UC(92) ... UC(255):
                        ;
                        int oldpos2=ptr->pos;
                        int cut2=0;
alt2_1:
                        ;
                        it=rb_obj_clone(s__lb__rb__d751);
                        goto alt2_2;
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
                        goto alt1_2;
accept2:
                        ;
                        break;
                    case '[' ... '[':
                        ;
                        int oldpos3=ptr->pos;
                        int cut3=0;
alt3_1:
                        ;
                        it=rb_obj_clone(s__lb__rb__d751);
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                        else goto alt3_2;
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
                        goto alt1_2;
accept3:
                        ;
                        break;
                    }
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_append);
                    bind_aset(bind2,3,_from);
                    it=rb_funcall(self,sy___at_appends_975f,1,bind2);
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
                    it=rb_funcall(self,sy_name,0);
                    FAILTEST(alt1_2);
                    _name=it;;
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... 'Z':
                        ;
                    case UC(92) ... UC(255):
                        ;
                        int oldpos4=ptr->pos;
                        int cut4=0;
alt4_1:
                        ;
                        it=rb_obj_clone(s__lb__rb__d751);
                        goto alt4_2;
                        ;
                        goto accept4;
alt4_2:
                        ptr->pos=oldpos4;
                        it=Qnil;
                        _append=it;;

                        ;
                        goto accept4;
alt4_3:
                        ptr->pos=oldpos4;
                        goto alt1_2;
accept4:
                        ;
                        break;
                    case '[' ... '[':
                        ;
                        int oldpos5=ptr->pos;
                        int cut5=0;
alt5_1:
                        ;
                        it=rb_obj_clone(s__lb__rb__d751);
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                        else goto alt5_2;
                        it=rb_obj_clone(s__lb__rb__d751);
                        __result=it;;
                        it=__result;
                        _append=it;;

                        ;
                        goto accept5;
alt5_2:
                        ptr->pos=oldpos5;
                        it=Qnil;
                        _append=it;;

                        ;
                        goto accept5;
alt5_3:
                        ptr->pos=oldpos5;
                        goto alt1_2;
accept5:
                        ;
                        break;
                    }
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_append);
                    bind_aset(bind2,3,_from);
                    it=rb_funcall(self,sy___at_appends_975f,1,bind2);
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
                    case UC(0) ... '?':
                        ;
                    case '[' ... '^':
                        ;
                    case '`' ... '`':
                        ;
                    case '{' ... UC(255):
                        ;
                        goto alt1_2;
                        break;
                    case '@' ... '@':
                        ;
                        it=rb_funcall(self,sy_key,0);
                        FAILTEST(alt1_2);
                        _name=it;;
                        break;
                    case 'A' ... 'Z':
                        ;
                    case '_' ... '_':
                        ;
                    case 'a' ... 'z':
                        ;
                        it=rb_funcall(self,sy_name,0);
                        FAILTEST(alt1_2);
                        _name=it;;
                        break;
                    }
                    it=rb_obj_clone(s__rb__0fbd);
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... UC(92):
                        ;
                    case '^' ... UC(255):
                        ;
                        goto alt1_2;
                        break;
                    case ']' ... ']':
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        break;
                    }
                    it=rb_obj_clone(s__rb__0fbd);
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_from);
                    it=rb_funcall(self,sy___at_appends_9f26,1,bind2);
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
                else goto alt1_2;
                it=rb_funcall(self,sy_term,0);
                FAILTEST(alt1_2);
                _e=it;;
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_e);
                it=rb_funcall(self,sy__Pass_lb_bin_2f93,1,bind2);
                _from=bind_aget(bind2,1);;
                _e=bind_aget(bind2,2);;
                _from=it;;
                break;
            case '?' ... '?':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                bind_aset(bind2,1,_from);
                it=rb_funcall(self,sy__Or_AST_lb_b_0657,1,bind2);
                _from=bind_aget(bind2,1);;
                _from=it;;
                break;
            case '[' ... '[':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                it=rb_funcall(self,sy_expression,0);
                _e=it;;
                it=rb_obj_clone(s__rb__0fbd);
                it=rb_funcall(self,sy_spaces,0);
                it=rb_obj_clone(s__rb__0fbd);
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... UC(92):
                    ;
                case '^' ... UC(255):
                    ;
                    goto alt1_2;
                    break;
                case ']' ... ']':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    break;
                }
                it=rb_obj_clone(s__rb__0fbd);
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_e);
                it=rb_funcall(self,sy__Enter_lb_bi_9246,1,bind2);
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
            goto fail;
accept1:
            ;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt7_2);
            cut7=1;
            goto alt7_2;
            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            if (cut7) goto alt6_2;
            it=Qnil;
            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            goto alt6_2;
accept7:
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
                goto alt6_2;
                break;
            case '*' ... '+':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _one=it;;
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_one);
                it=rb_funcall(self,sy__Many_lb_bin_14d1,1,bind2);
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
                    goto alt6_2;
                    break;
                case '{' ... '{':
                    ;
                    it=rb_funcall(self,sy_inline_host_expr,0);
                    FAILTEST(alt6_2);
                    _e=it;;
                    bind_aset(bind2,1,_from);
                    bind_aset(bind2,2,_e);
                    it=rb_funcall(self,sy__Seq_lb_Bind_bbb6,1,bind2);
                    _from=bind_aget(bind2,1);;
                    _e=bind_aget(bind2,2);;
                    _from=it;;
                    break;
                case '@' ... '@':
                    ;
                    it=rb_funcall(self,sy_key,0);
                    FAILTEST(alt6_2);
                    _name=it;;
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... 'Z':
                        ;
                    case UC(92) ... UC(255):
                        ;
                        int oldpos8=ptr->pos;
                        int cut8=0;
alt8_1:
                        ;
                        it=rb_obj_clone(s__lb__rb__d751);
                        goto alt8_2;
                        ;
                        goto accept8;
alt8_2:
                        ptr->pos=oldpos8;
                        it=Qnil;
                        _append=it;;

                        ;
                        goto accept8;
alt8_3:
                        ptr->pos=oldpos8;
                        goto alt6_2;
accept8:
                        ;
                        break;
                    case '[' ... '[':
                        ;
                        int oldpos9=ptr->pos;
                        int cut9=0;
alt9_1:
                        ;
                        it=rb_obj_clone(s__lb__rb__d751);
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                        else goto alt9_2;
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
                        goto alt6_2;
accept9:
                        ;
                        break;
                    }
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_append);
                    bind_aset(bind2,3,_from);
                    it=rb_funcall(self,sy___at_appends_975f,1,bind2);
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
                    it=rb_funcall(self,sy_name,0);
                    FAILTEST(alt6_2);
                    _name=it;;
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... 'Z':
                        ;
                    case UC(92) ... UC(255):
                        ;
                        int oldpos10=ptr->pos;
                        int cut10=0;
alt10_1:
                        ;
                        it=rb_obj_clone(s__lb__rb__d751);
                        goto alt10_2;
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
                        goto alt6_2;
accept10:
                        ;
                        break;
                    case '[' ... '[':
                        ;
                        int oldpos11=ptr->pos;
                        int cut11=0;
alt11_1:
                        ;
                        it=rb_obj_clone(s__lb__rb__d751);
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                        else goto alt11_2;
                        it=rb_obj_clone(s__lb__rb__d751);
                        __result=it;;
                        it=__result;
                        _append=it;;

                        ;
                        goto accept11;
alt11_2:
                        ptr->pos=oldpos11;
                        it=Qnil;
                        _append=it;;

                        ;
                        goto accept11;
alt11_3:
                        ptr->pos=oldpos11;
                        goto alt6_2;
accept11:
                        ;
                        break;
                    }
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_append);
                    bind_aset(bind2,3,_from);
                    it=rb_funcall(self,sy___at_appends_975f,1,bind2);
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
                    case UC(0) ... '?':
                        ;
                    case '[' ... '^':
                        ;
                    case '`' ... '`':
                        ;
                    case '{' ... UC(255):
                        ;
                        goto alt6_2;
                        break;
                    case '@' ... '@':
                        ;
                        it=rb_funcall(self,sy_key,0);
                        FAILTEST(alt6_2);
                        _name=it;;
                        break;
                    case 'A' ... 'Z':
                        ;
                    case '_' ... '_':
                        ;
                    case 'a' ... 'z':
                        ;
                        it=rb_funcall(self,sy_name,0);
                        FAILTEST(alt6_2);
                        _name=it;;
                        break;
                    }
                    it=rb_obj_clone(s__rb__0fbd);
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... UC(92):
                        ;
                    case '^' ... UC(255):
                        ;
                        goto alt6_2;
                        break;
                    case ']' ... ']':
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        break;
                    }
                    it=rb_obj_clone(s__rb__0fbd);
                    bind_aset(bind2,1,_name);
                    bind_aset(bind2,2,_from);
                    it=rb_funcall(self,sy___at_appends_9f26,1,bind2);
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
                else goto alt6_2;
                it=rb_funcall(self,sy_term,0);
                FAILTEST(alt6_2);
                _e=it;;
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_e);
                it=rb_funcall(self,sy__Pass_lb_bin_2f93,1,bind2);
                _from=bind_aget(bind2,1);;
                _e=bind_aget(bind2,2);;
                _from=it;;
                break;
            case '?' ... '?':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                bind_aset(bind2,1,_from);
                it=rb_funcall(self,sy__Or_AST_lb_b_0657,1,bind2);
                _from=bind_aget(bind2,1);;
                _from=it;;
                break;
            case '[' ... '[':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                it=rb_funcall(self,sy_expression,0);
                _e=it;;
                it=rb_obj_clone(s__rb__0fbd);
                it=rb_funcall(self,sy_spaces,0);
                it=rb_obj_clone(s__rb__0fbd);
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... UC(92):
                    ;
                case '^' ... UC(255):
                    ;
                    goto alt6_2;
                    break;
                case ']' ... ']':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    break;
                }
                it=rb_obj_clone(s__rb__0fbd);
                bind_aset(bind2,1,_from);
                bind_aset(bind2,2,_e);
                it=rb_funcall(self,sy__Enter_lb_bi_9246,1,bind2);
                _from=bind_aget(bind2,1);;
                _e=bind_aget(bind2,2);;
                _from=it;;
                break;
            }
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto fail;
accept6:
            ;
            break;
        }
    }
    it=_from;
    __result_2=it;;

    return it;
fail:
    return failobj;
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
        it=rb_funcall(self,sy_postfixed,0);
        FAILTEST(fail);
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
            goto alt2_2;
            break;
        case '{' ... '{':
            ;
            it=rb_funcall(self,sy_inline_host_expr,0);
            FAILTEST(alt2_2);
            _expr=it;;
            break;
        }
        bind_aset(bind2,1,_expr);
        bind_aset(bind2,2,_neg);
        it=rb_funcall(self,sy__Pred_lb_bin_ae38,1,bind2);
        _expr=bind_aget(bind2,1);;
        _neg=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=_autovar;
        _neg=it;;
        it=rb_funcall(self,sy_prefixed,0);
        FAILTEST(alt2_3);
        _m=it;;
        bind_aset(bind2,1,_m);
        bind_aset(bind2,2,_neg);
        it=rb_funcall(self,sy__Lookahea_0946,1,bind2);
        _m=bind_aget(bind2,1);;
        _neg=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_funcall(self,sy_postfixed,0);
        FAILTEST(alt1_3);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE AmethystParser_procargs(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_c,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy___at_ary_eq__lb__rb_,1,bind2);
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_2);
        _c=it;;
        bind_aset(bind2,1,_c);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__a724,1,bind2);
        _c=bind_aget(bind2,1);;
        FAILTEST(alt1_2);
        it=rb_funcall(self,sy___at_ary_lt__lt_Ar_59e3,1,bind2);
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_funcall(self,sy_procargs2,0);
        FAILTEST(alt1_3);
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
    }
    it=rb_funcall(self,sy___at_ary_ff69,1,bind2);
    __result=it;;

    return it;
fail:
    return failobj;
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
        ptr->src=_autovar;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_ary_new3(0);
        _autovar_2=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=rb_funcall(self,sy_procargs2,0);
            FAILTEST(alt2_2);
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
            goto pass1;
accept2:
            ;
        }
        it=_autovar_2;
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_4;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        _a=it;;
        bind_aset(bind2,1,_a);
        it=rb_funcall(self,sy___at_tmp_lt__lt_bi_b81c,1,bind2);
        _a=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 1/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(fail);
        _a=it;;
        bind_aset(bind2,1,_a);
        it=rb_funcall(self,sy___at_tmp_lt__lt_bi_b81c,1,bind2);
        _a=bind_aget(bind2,1);;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE AmethystParser_rubyarg(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_n,_autovar,_autovar_2,__result,_autovar_3,_autovar_4,_r,__result_2,_r_2,_o,_c,__result_3,_x,_autovar_5,_autovar_6,_autovar_7,__result_4,_s,_autovar_8,_x_2,_autovar_9,_autovar_10,__result_5,__result_6,_e;
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
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt1_2;
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt1_3;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt1_4;
        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt1_5;
        ;
        goto accept1;
alt1_5:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt1_6;
        ;
        goto accept1;
alt1_6:
        ptr->pos=oldpos1;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt2_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt2_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
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
        goto alt1_7;
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
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt3_2);
            cut3=1;
            goto alt3_2;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            if (cut3) goto alt1_7;
            it=Qnil;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto alt1_7;
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
            goto alt1_7;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt1_7);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_7:
        ptr->pos=oldpos1;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept1;
alt1_8:
        ptr->pos=oldpos1;
        goto fail;
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
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt4_2;
        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt4_3;
        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s__le__f95b);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
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
                it=rb_funcall(self,sy_rubyarg,0);
                FAILTEST(alt5_2);
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
                goto alt4_4;
accept5:
                ;
                break;
            case ')' ... ')':
                ;
            case ']' ... ']':
                ;
            case '}' ... '}':
                ;
                stop1=1;
                break;
            }
        }
        it=_autovar_3;
        _r=it;;
        it=rb_obj_clone(s__re__cbb1);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '|':
            ;
        case '~' ... UC(255):
            ;
            goto alt4_4;
            break;
        case '}' ... '}':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=rb_obj_clone(s__re__cbb1);
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        _r_2=it;;
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        _o=it;;
        it=rb_obj_clone(s__re__cbb1);
        _c=it;;
        bind_aset(bind2,1,_o);
        bind_aset(bind2,2,_r_2);
        bind_aset(bind2,3,_c);
        it=rb_funcall(self,sy__Args_lb__le__co_a_9abe,1,bind2);
        _o=bind_aget(bind2,1);;
        _r_2=bind_aget(bind2,2);;
        _c=bind_aget(bind2,3);;
        __result_3=it;;
        it=__result_3;
        __result=it;;

        ;
        goto accept4;
alt4_4:
        ptr->pos=oldpos4;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt4_5;
        ;
        goto accept4;
alt4_5:
        ptr->pos=oldpos4;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt4_6;
        ;
        goto accept4;
alt4_6:
        ptr->pos=oldpos4;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt6_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt6_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
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
        goto alt4_7;
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
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt7_2);
            cut7=1;
            goto alt7_2;
            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            if (cut7) goto alt4_7;
            it=Qnil;
            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            goto alt4_7;
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
            goto alt4_7;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt4_7);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept4;
alt4_7:
        ptr->pos=oldpos4;
        goto fail;
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
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt8_2;
        ;
        goto accept8;
alt8_2:
        ptr->pos=oldpos8;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt8_3;
        ;
        goto accept8;
alt8_3:
        ptr->pos=oldpos8;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt8_4;
        ;
        goto accept8;
alt8_4:
        ptr->pos=oldpos8;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_ary_new3(0);
        _x=it;;
        it=rb_ary_new3(0);
        int stop2=0;
        while(!stop2) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '!':
                ;
            case '$' ... '[':
                ;
            case ']' ... UC(255):
                ;
                int oldpos9=ptr->pos;
                int cut9=0;
alt9_1:
                ;
                it=rb_obj_clone(s__re__cbb1);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                it=rb_obj_clone(s__re__cbb1);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                goto alt9_2;
                ;
                goto accept9;
alt9_2:
                ptr->pos=oldpos9;
                int oldpos10=ptr->pos;
                int cut10=0;
alt10_1:
                ;
                it=rb_obj_clone(s__bs__bs__7f81);
                goto alt10_2;
                ;
                goto accept10;
alt10_2:
                ptr->pos=oldpos10;
                it=Qnil;
                ;
                goto accept10;
alt10_3:
                ptr->pos=oldpos10;
                goto alt9_3;
accept10:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt9_3);
                _autovar_5=it;;
                it=AmethystCore_append(self,_x,_autovar_5);
                ;
                goto accept9;
alt9_3:
                ptr->pos=oldpos9;
                goto alt8_5;
accept9:
                ;
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
                int oldpos11=ptr->pos;
                int cut11=0;
alt11_1:
                ;
                it=rb_obj_clone(s__re__cbb1);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                it=rb_obj_clone(s__re__cbb1);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='{')  ptr->pos+=1;
                else goto alt11_2;
                it=rb_obj_clone(s__bs__sh__le__a90f);
                it=rb_funcall(self,sy_spaces,0);
                it=rb_ary_new3(0);
                _autovar_3=it;;
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
                        int oldpos12=ptr->pos;
                        int cut12=0;
alt12_1:
                        ;
                        it=rb_funcall(self,sy_rubyarg,0);
                        FAILTEST(alt12_2);
                        _autovar_4=it;;
                        it=AmethystCore_append(self,_autovar_3,_autovar_4);
                        ;
                        goto accept12;
alt12_2:
                        ptr->pos=oldpos12;
                        stop3=1;
                        ;
                        goto accept12;
alt12_3:
                        ptr->pos=oldpos12;
                        goto alt11_2;
accept12:
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
                it=_autovar_3;
                _r=it;;
                it=rb_obj_clone(s__re__cbb1);
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '|':
                    ;
                case '~' ... UC(255):
                    ;
                    goto alt11_2;
                    break;
                case '}' ... '}':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    break;
                }
                it=rb_obj_clone(s__re__cbb1);
                bind_aset(bind2,1,_r);
                it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
                _r=bind_aget(bind2,1);;
                __result_2=it;;
                it=__result_2;
                _r_2=it;;
                it=rb_obj_clone(s__bs__sh__le__a90f);
                it=rb_obj_clone(s__re__cbb1);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                it=rb_obj_clone(s__re__cbb1);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                _o=it;;
                it=rb_obj_clone(s__re__cbb1);
                _c=it;;
                bind_aset(bind2,1,_o);
                bind_aset(bind2,2,_r_2);
                bind_aset(bind2,3,_c);
                it=rb_funcall(self,sy__Args_lb__le__co_a_9abe,1,bind2);
                _o=bind_aget(bind2,1);;
                _r_2=bind_aget(bind2,2);;
                _c=bind_aget(bind2,3);;
                __result_3=it;;
                it=__result_3;
                _autovar_6=it;;
                it=AmethystCore_append(self,_x,_autovar_6);
                ;
                goto accept11;
alt11_2:
                ptr->pos=oldpos11;
                int oldpos13=ptr->pos;
                int cut13=0;
alt13_1:
                ;
                it=rb_obj_clone(s__bs__bs__7f81);
                goto alt13_2;
                ;
                goto accept13;
alt13_2:
                ptr->pos=oldpos13;
                it=Qnil;
                ;
                goto accept13;
alt13_3:
                ptr->pos=oldpos13;
                goto alt11_3;
accept13:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt11_3);
                _autovar_5=it;;
                it=AmethystCore_append(self,_x,_autovar_5);
                ;
                goto accept11;
alt11_3:
                ptr->pos=oldpos11;
                goto alt8_5;
accept11:
                ;
                break;
            case UC(92) ... UC(92):
                ;
                int oldpos14=ptr->pos;
                int cut14=0;
alt14_1:
                ;
                it=rb_obj_clone(s__re__cbb1);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                it=rb_obj_clone(s__re__cbb1);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                it=rb_obj_clone(s__bs__sh__le__a90f);
                goto alt14_2;
                ;
                goto accept14;
alt14_2:
                ptr->pos=oldpos14;
                it=rb_obj_clone(s__bs__bs__7f81);
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                it=rb_obj_clone(s__bs__bs__7f81);
                it=rb_obj_clone(s__bs__bs__7f81);
                it=rb_obj_clone(s__bs__bs__7f81);
                it=rb_obj_clone(s__bs__bs__7f81);
                _autovar_7=it;;
                it=AmethystCore_append(self,_x,_autovar_7);
                it=AmethystCore_anything(self );
                FAILTEST(alt14_3);
                _autovar_5=it;;
                it=AmethystCore_append(self,_x,_autovar_5);
                ;
                goto accept14;
alt14_3:
                ptr->pos=oldpos14;
                goto alt8_5;
accept14:
                ;
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
        _x=bind_aget(bind2,1);;
        __result_4=it;;
        it=__result_4;
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__Strin_lb__lb__qu__88c8,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept8;
alt8_5:
        ptr->pos=oldpos8;
        if (cut8) goto fail;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt8_6;
        ;
        goto accept8;
alt8_6:
        ptr->pos=oldpos8;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt8_7;
        ;
        goto accept8;
alt8_7:
        ptr->pos=oldpos8;
        int oldpos15=ptr->pos;
        int cut15=0;
alt15_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt15_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt15_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept15;
alt15_2:
        ptr->pos=oldpos15;
        it=Qnil;
        ;
        goto accept15;
alt15_3:
        ptr->pos=oldpos15;
        goto alt8_8;
accept15:
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
            int oldpos16=ptr->pos;
            int cut16=0;
alt16_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt16_2);
            cut16=1;
            goto alt16_2;
            ;
            goto accept16;
alt16_2:
            ptr->pos=oldpos16;
            if (cut16) goto alt8_8;
            it=Qnil;
            ;
            goto accept16;
alt16_3:
            ptr->pos=oldpos16;
            goto alt8_8;
accept16:
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
            goto alt8_8;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt8_8);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept8;
alt8_8:
        ptr->pos=oldpos8;
        goto fail;
accept8:
        ;
        break;
    case '$' ... '$':
        ;
    case ':' ... ':':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos17=ptr->pos;
        int cut17=0;
alt17_1:
        ;
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt17_2;
        ;
        goto accept17;
alt17_2:
        ptr->pos=oldpos17;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt17_3;
        ;
        goto accept17;
alt17_3:
        ptr->pos=oldpos17;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt17_4;
        ;
        goto accept17;
alt17_4:
        ptr->pos=oldpos17;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt17_5;
        ;
        goto accept17;
alt17_5:
        ptr->pos=oldpos17;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt17_6;
        ;
        goto accept17;
alt17_6:
        ptr->pos=oldpos17;
        int oldpos18=ptr->pos;
        int cut18=0;
alt18_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt18_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt18_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept18;
alt18_2:
        ptr->pos=oldpos18;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _autovar_8=it;;
        it=AmethystCore_append(self,_n,_autovar_8);
        ;
        goto accept18;
alt18_3:
        ptr->pos=oldpos18;
        goto alt17_7;
accept18:
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
            int oldpos19=ptr->pos;
            int cut19=0;
alt19_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt19_2);
            cut19=1;
            goto alt19_2;
            ;
            goto accept19;
alt19_2:
            ptr->pos=oldpos19;
            if (cut19) goto alt17_7;
            it=Qnil;
            ;
            goto accept19;
alt19_3:
            ptr->pos=oldpos19;
            goto alt17_7;
accept19:
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
            goto alt17_7;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt17_7);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept17;
alt17_7:
        ptr->pos=oldpos17;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept17;
alt17_8:
        ptr->pos=oldpos17;
        goto fail;
accept17:
        ;
        break;
    case UC(39) ... UC(39):
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos20=ptr->pos;
        int cut20=0;
alt20_1:
        ;
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt20_2;
        ;
        goto accept20;
alt20_2:
        ptr->pos=oldpos20;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt20_3;
        ;
        goto accept20;
alt20_3:
        ptr->pos=oldpos20;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt20_4;
        ;
        goto accept20;
alt20_4:
        ptr->pos=oldpos20;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_ary_new3(0);
        _x_2=it;;
        it=rb_ary_new3(0);
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
                    int oldpos21=ptr->pos;
                    int cut21=0;
alt21_1:
                    ;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    goto alt21_2;
                    ;
                    goto accept21;
alt21_2:
                    ptr->pos=oldpos21;
                    it=Qnil;
                    ;
                    goto accept21;
alt21_3:
                    ptr->pos=oldpos21;
                    goto alt20_5;
accept21:
                    ;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt20_5);
                    _autovar_9=it;;
                    it=AmethystCore_append(self,_x_2,_autovar_9);
                    break;
                case UC(39) ... UC(39):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut20=1;
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
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_10=it;;
                    it=AmethystCore_append(self,_x_2,_autovar_10);
                    it=AmethystCore_anything(self );
                    FAILTEST(alt20_5);
                    _autovar_9=it;;
                    it=AmethystCore_append(self,_x_2,_autovar_9);
                    break;
                case UC(39) ... UC(39):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut20=1;
                    stop4=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x_2);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _x_2=bind_aget(bind2,1);;
        __result_5=it;;
        it=__result_5;
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__Strin_lb__lb__dq__b20e,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept20;
alt20_5:
        ptr->pos=oldpos20;
        if (cut20) goto fail;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt20_6;
        ;
        goto accept20;
alt20_6:
        ptr->pos=oldpos20;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt20_7;
        ;
        goto accept20;
alt20_7:
        ptr->pos=oldpos20;
        int oldpos22=ptr->pos;
        int cut22=0;
alt22_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt22_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt22_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept22;
alt22_2:
        ptr->pos=oldpos22;
        it=Qnil;
        ;
        goto accept22;
alt22_3:
        ptr->pos=oldpos22;
        goto alt20_8;
accept22:
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
            int oldpos23=ptr->pos;
            int cut23=0;
alt23_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt23_2);
            cut23=1;
            goto alt23_2;
            ;
            goto accept23;
alt23_2:
            ptr->pos=oldpos23;
            if (cut23) goto alt20_8;
            it=Qnil;
            ;
            goto accept23;
alt23_3:
            ptr->pos=oldpos23;
            goto alt20_8;
accept23:
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
            goto alt20_8;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt20_8);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept20;
alt20_8:
        ptr->pos=oldpos20;
        goto fail;
accept20:
        ;
        break;
    case '(' ... '(':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos24=ptr->pos;
        int cut24=0;
alt24_1:
        ;
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s__lp__84c4);
        it=rb_funcall(self,sy_spaces,0);
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
                int oldpos25=ptr->pos;
                int cut25=0;
alt25_1:
                ;
                it=rb_funcall(self,sy_rubyarg,0);
                FAILTEST(alt25_2);
                _autovar_4=it;;
                it=AmethystCore_append(self,_autovar_3,_autovar_4);
                ;
                goto accept25;
alt25_2:
                ptr->pos=oldpos25;
                stop5=1;
                ;
                goto accept25;
alt25_3:
                ptr->pos=oldpos25;
                goto alt24_2;
accept25:
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
        _r=it;;
        it=rb_obj_clone(s__rp__9371);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            goto alt24_2;
            break;
        case ')' ... ')':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=rb_obj_clone(s__rp__9371);
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        _r_2=it;;
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        _o=it;;
        it=rb_obj_clone(s__rp__9371);
        _c=it;;
        bind_aset(bind2,1,_o);
        bind_aset(bind2,2,_r_2);
        bind_aset(bind2,3,_c);
        it=rb_funcall(self,sy__Args_lb__le__co_a_9abe,1,bind2);
        _o=bind_aget(bind2,1);;
        _r_2=bind_aget(bind2,2);;
        _c=bind_aget(bind2,3);;
        __result_3=it;;
        it=__result_3;
        __result=it;;

        ;
        goto accept24;
alt24_2:
        ptr->pos=oldpos24;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt24_3;
        ;
        goto accept24;
alt24_3:
        ptr->pos=oldpos24;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt24_4;
        ;
        goto accept24;
alt24_4:
        ptr->pos=oldpos24;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt24_5;
        ;
        goto accept24;
alt24_5:
        ptr->pos=oldpos24;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt24_6;
        ;
        goto accept24;
alt24_6:
        ptr->pos=oldpos24;
        int oldpos26=ptr->pos;
        int cut26=0;
alt26_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt26_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt26_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept26;
alt26_2:
        ptr->pos=oldpos26;
        it=Qnil;
        ;
        goto accept26;
alt26_3:
        ptr->pos=oldpos26;
        goto alt24_7;
accept26:
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
            int oldpos27=ptr->pos;
            int cut27=0;
alt27_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt27_2);
            cut27=1;
            goto alt27_2;
            ;
            goto accept27;
alt27_2:
            ptr->pos=oldpos27;
            if (cut27) goto alt24_7;
            it=Qnil;
            ;
            goto accept27;
alt27_3:
            ptr->pos=oldpos27;
            goto alt24_7;
accept27:
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
            goto alt24_7;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt24_7);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept24;
alt24_7:
        ptr->pos=oldpos24;
        goto fail;
accept24:
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
        int oldpos28=ptr->pos;
        int cut28=0;
alt28_1:
        ;
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt28_2;
        ;
        goto accept28;
alt28_2:
        ptr->pos=oldpos28;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt28_3;
        ;
        goto accept28;
alt28_3:
        ptr->pos=oldpos28;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt28_4;
        ;
        goto accept28;
alt28_4:
        ptr->pos=oldpos28;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt28_5;
        ;
        goto accept28;
alt28_5:
        ptr->pos=oldpos28;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt28_6;
        ;
        goto accept28;
alt28_6:
        ptr->pos=oldpos28;
        int oldpos29=ptr->pos;
        int cut29=0;
alt29_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt29_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt29_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept29;
alt29_2:
        ptr->pos=oldpos29;
        it=Qnil;
        ;
        goto accept29;
alt29_3:
        ptr->pos=oldpos29;
        goto alt28_7;
accept29:
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
            int oldpos30=ptr->pos;
            int cut30=0;
alt30_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt30_2);
            cut30=1;
            goto alt30_2;
            ;
            goto accept30;
alt30_2:
            ptr->pos=oldpos30;
            if (cut30) goto alt28_7;
            it=Qnil;
            ;
            goto accept30;
alt30_3:
            ptr->pos=oldpos30;
            goto alt28_7;
accept30:
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
            goto alt28_7;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt28_7);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept28;
alt28_7:
        ptr->pos=oldpos28;
        goto fail;
accept28:
        ;
        break;
    case '.' ... '.':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos31=ptr->pos;
        int cut31=0;
alt31_1:
        ;
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt31_2;
        ;
        goto accept31;
alt31_2:
        ptr->pos=oldpos31;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt31_3;
        ;
        goto accept31;
alt31_3:
        ptr->pos=oldpos31;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt31_4;
        ;
        goto accept31;
alt31_4:
        ptr->pos=oldpos31;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2;
        else goto alt31_5;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        __result_6=it;;
        it=__result_6;
        __result=it;;

        ;
        goto accept31;
alt31_5:
        ptr->pos=oldpos31;
        it=rb_obj_clone(s__dot__dot__58b9);
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1;
        else goto alt31_6;
        it=rb_obj_clone(s__dot__dot__58b9);
        __result_6=it;;
        it=__result_6;
        __result=it;;

        ;
        goto accept31;
alt31_6:
        ptr->pos=oldpos31;
        int oldpos32=ptr->pos;
        int cut32=0;
alt32_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt32_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt32_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept32;
alt32_2:
        ptr->pos=oldpos32;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _autovar_8=it;;
        it=AmethystCore_append(self,_n,_autovar_8);
        ;
        goto accept32;
alt32_3:
        ptr->pos=oldpos32;
        goto alt31_7;
accept32:
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
            int oldpos33=ptr->pos;
            int cut33=0;
alt33_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt33_2);
            cut33=1;
            goto alt33_2;
            ;
            goto accept33;
alt33_2:
            ptr->pos=oldpos33;
            if (cut33) goto alt31_7;
            it=Qnil;
            ;
            goto accept33;
alt33_3:
            ptr->pos=oldpos33;
            goto alt31_7;
accept33:
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
            goto alt31_7;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt31_7);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept31;
alt31_7:
        ptr->pos=oldpos31;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept31;
alt31_8:
        ptr->pos=oldpos31;
        goto fail;
accept31:
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
        int oldpos34=ptr->pos;
        int cut34=0;
alt34_1:
        ;
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt34_2;
        ;
        goto accept34;
alt34_2:
        ptr->pos=oldpos34;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt34_3;
        ;
        goto accept34;
alt34_3:
        ptr->pos=oldpos34;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt34_4;
        ;
        goto accept34;
alt34_4:
        ptr->pos=oldpos34;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _e=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... ';':
            ;
        case '=' ... UC(255):
            ;
            goto alt34_5;
            break;
        case '<' ... '<':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='<')  ptr->pos+=1;
            else goto alt34_5;
            break;
        }
        bind_aset(bind2,1,_e);
        it=rb_funcall(self,sy___lb_bind_lb_1_rb__6281,1,bind2);
        _e=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept34;
alt34_5:
        ptr->pos=oldpos34;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt34_6;
        ;
        goto accept34;
alt34_6:
        ptr->pos=oldpos34;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt34_7;
        ;
        goto accept34;
alt34_7:
        ptr->pos=oldpos34;
        int oldpos35=ptr->pos;
        int cut35=0;
alt35_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt35_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt35_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept35;
alt35_2:
        ptr->pos=oldpos35;
        it=Qnil;
        ;
        goto accept35;
alt35_3:
        ptr->pos=oldpos35;
        goto alt34_8;
accept35:
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
            int oldpos36=ptr->pos;
            int cut36=0;
alt36_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt36_2);
            cut36=1;
            goto alt36_2;
            ;
            goto accept36;
alt36_2:
            ptr->pos=oldpos36;
            if (cut36) goto alt34_8;
            it=Qnil;
            ;
            goto accept36;
alt36_3:
            ptr->pos=oldpos36;
            goto alt34_8;
accept36:
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
            goto alt34_8;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt34_8);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept34;
alt34_8:
        ptr->pos=oldpos34;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept34;
alt34_9:
        ptr->pos=oldpos34;
        goto fail;
accept34:
        ;
        break;
    case '@' ... '@':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos37=ptr->pos;
        int cut37=0;
alt37_1:
        ;
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt37_2;
        ;
        goto accept37;
alt37_2:
        ptr->pos=oldpos37;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt37_3;
        ;
        goto accept37;
alt37_3:
        ptr->pos=oldpos37;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt37_4;
        ;
        goto accept37;
alt37_4:
        ptr->pos=oldpos37;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt37_5;
        ;
        goto accept37;
alt37_5:
        ptr->pos=oldpos37;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt37_6;
        ;
        goto accept37;
alt37_6:
        ptr->pos=oldpos37;
        int oldpos38=ptr->pos;
        int cut38=0;
alt38_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt38_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt38_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept38;
alt38_2:
        ptr->pos=oldpos38;
        it=Qnil;
        ;
        goto accept38;
alt38_3:
        ptr->pos=oldpos38;
        goto alt37_7;
accept38:
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
            int oldpos39=ptr->pos;
            int cut39=0;
alt39_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt39_2);
            cut39=1;
            goto alt39_2;
            ;
            goto accept39;
alt39_2:
            ptr->pos=oldpos39;
            if (cut39) goto alt37_7;
            it=Qnil;
            ;
            goto accept39;
alt39_3:
            ptr->pos=oldpos39;
            goto alt37_7;
accept39:
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
            goto alt37_7;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt37_7);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept37;
alt37_7:
        ptr->pos=oldpos37;
        it=rb_funcall(self,sy_key,0);
        FAILTEST(alt37_8);
        __result=it;;

        ;
        goto accept37;
alt37_8:
        ptr->pos=oldpos37;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept37;
alt37_9:
        ptr->pos=oldpos37;
        goto fail;
accept37:
        ;
        break;
    case '[' ... '[':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos40=ptr->pos;
        int cut40=0;
alt40_1:
        ;
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt40_2;
        ;
        goto accept40;
alt40_2:
        ptr->pos=oldpos40;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s__lb__8154);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_ary_new3(0);
        _autovar_3=it;;
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
                int oldpos41=ptr->pos;
                int cut41=0;
alt41_1:
                ;
                it=rb_funcall(self,sy_rubyarg,0);
                FAILTEST(alt41_2);
                _autovar_4=it;;
                it=AmethystCore_append(self,_autovar_3,_autovar_4);
                ;
                goto accept41;
alt41_2:
                ptr->pos=oldpos41;
                stop6=1;
                ;
                goto accept41;
alt41_3:
                ptr->pos=oldpos41;
                goto alt40_3;
accept41:
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
        it=_autovar_3;
        _r=it;;
        it=rb_obj_clone(s__rb__0fbd);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(92):
            ;
        case '^' ... UC(255):
            ;
            goto alt40_3;
            break;
        case ']' ... ']':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=rb_obj_clone(s__rb__0fbd);
        bind_aset(bind2,1,_r);
        it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
        _r=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        _r_2=it;;
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        _o=it;;
        it=rb_obj_clone(s__rb__0fbd);
        _c=it;;
        bind_aset(bind2,1,_o);
        bind_aset(bind2,2,_r_2);
        bind_aset(bind2,3,_c);
        it=rb_funcall(self,sy__Args_lb__le__co_a_9abe,1,bind2);
        _o=bind_aget(bind2,1);;
        _r_2=bind_aget(bind2,2);;
        _c=bind_aget(bind2,3);;
        __result_3=it;;
        it=__result_3;
        __result=it;;

        ;
        goto accept40;
alt40_3:
        ptr->pos=oldpos40;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt40_4;
        ;
        goto accept40;
alt40_4:
        ptr->pos=oldpos40;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt40_5;
        ;
        goto accept40;
alt40_5:
        ptr->pos=oldpos40;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt40_6;
        ;
        goto accept40;
alt40_6:
        ptr->pos=oldpos40;
        int oldpos42=ptr->pos;
        int cut42=0;
alt42_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt42_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt42_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept42;
alt42_2:
        ptr->pos=oldpos42;
        it=Qnil;
        ;
        goto accept42;
alt42_3:
        ptr->pos=oldpos42;
        goto alt40_7;
accept42:
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
            int oldpos43=ptr->pos;
            int cut43=0;
alt43_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt43_2);
            cut43=1;
            goto alt43_2;
            ;
            goto accept43;
alt43_2:
            ptr->pos=oldpos43;
            if (cut43) goto alt40_7;
            it=Qnil;
            ;
            goto accept43;
alt43_3:
            ptr->pos=oldpos43;
            goto alt40_7;
accept43:
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
            goto alt40_7;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt40_7);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept40;
alt40_7:
        ptr->pos=oldpos40;
        goto fail;
accept40:
        ;
        break;
    case '`' ... '`':
        ;
        it=rb_ary_new3(0);
        _n=it;;
        int oldpos44=ptr->pos;
        int cut44=0;
alt44_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_funcall(self,sy_expression,0);
        _e=it;;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '_':
            ;
        case 'a' ... UC(255):
            ;
            goto alt44_2;
            break;
        case '`' ... '`':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        bind_aset(bind2,1,_e);
        it=rb_funcall(self,sy__Lambda_lb_B_2c90,1,bind2);
        _e=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept44;
alt44_2:
        ptr->pos=oldpos44;
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__rp__9371);
        it=rb_obj_clone(s__lp__84c4);
        it=rb_obj_clone(s__lp__84c4);
        goto alt44_3;
        ;
        goto accept44;
alt44_3:
        ptr->pos=oldpos44;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_obj_clone(s__lb__8154);
        it=rb_obj_clone(s__lb__8154);
        goto alt44_4;
        ;
        goto accept44;
alt44_4:
        ptr->pos=oldpos44;
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__re__cbb1);
        it=rb_obj_clone(s__le__f95b);
        it=rb_obj_clone(s__le__f95b);
        goto alt44_5;
        ;
        goto accept44;
alt44_5:
        ptr->pos=oldpos44;
        it=rb_obj_clone(s__dot__dot__dot__2f43);
        goto alt44_6;
        ;
        goto accept44;
alt44_6:
        ptr->pos=oldpos44;
        it=rb_obj_clone(s__dot__dot__58b9);
        goto alt44_7;
        ;
        goto accept44;
alt44_7:
        ptr->pos=oldpos44;
        int oldpos45=ptr->pos;
        int cut45=0;
alt45_1:
        ;
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__co__at__4bf0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto alt45_2;
            break;
        case ':' ... ':':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1;
            else goto alt45_2;
            break;
        }
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        it=rb_obj_clone(s__co__at__4bf0);
        _autovar=it;;
        it=AmethystCore_append(self,_n,_autovar);
        ;
        goto accept45;
alt45_2:
        ptr->pos=oldpos45;
        it=Qnil;
        ;
        goto accept45;
alt45_3:
        ptr->pos=oldpos45;
        goto alt44_8;
accept45:
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
            int oldpos46=ptr->pos;
            int cut46=0;
alt46_1:
            ;
            it=rb_funcall(self,sy__,0);
            FAILTEST(alt46_2);
            cut46=1;
            goto alt46_2;
            ;
            goto accept46;
alt46_2:
            ptr->pos=oldpos46;
            if (cut46) goto alt44_8;
            it=Qnil;
            ;
            goto accept46;
alt46_3:
            ptr->pos=oldpos46;
            goto alt44_8;
accept46:
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
            goto alt44_8;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt44_8);
            _autovar_2=it;;
            break;
        }
        it=AmethystCore_append(self,_n,_autovar_2);
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept44;
alt44_8:
        ptr->pos=oldpos44;
        goto fail;
accept44:
        ;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE AmethystParser_rule(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_bnding,_name,_args,_body,_locals,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy___at_locals_eq__4fc1,1,bind2);
    it=rb_funcall(self,sy___at_bnding_7d3c,1,bind2);
    _bnding=it;;
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto fail;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_funcall(self,sy_name,0);
        FAILTEST(fail);
        _name=it;;
        break;
    }
    it=rb_funcall(self,sy_ruleargs,0);
    FAILTEST(fail);
    _args=it;;
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '<':
        ;
    case '>' ... UC(255):
        ;
        goto fail;
        break;
    case '=' ... '=':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        break;
    }
    it=rb_funcall(self,sy_expression,0);
    _body=it;;
    bind_aset(bind2,1,_body);
    it=rb_funcall(self,sy__Bind_lb_loc_37df,1,bind2);
    _body=bind_aget(bind2,1);;
    _body=it;;
    it=rb_funcall(self,sy___at_locals_dot__bdc6,1,bind2);
    _locals=it;;
    bind_aset(bind2,1,_body);
    it=rb_funcall(self,sy__bind_lb_1_rb__eq__f15c,1,bind2);
    _body=bind_aget(bind2,1);;
    bind_aset(bind2,1,_bnding);
    bind_aset(bind2,2,_name);
    bind_aset(bind2,3,_args);
    bind_aset(bind2,4,_body);
    bind_aset(bind2,5,_locals);
    it=rb_funcall(self,sy__Rule_dot_cre_3767,1,bind2);
    _bnding=bind_aget(bind2,1);;
    _name=bind_aget(bind2,2);;
    _args=bind_aget(bind2,3);;
    _body=bind_aget(bind2,4);;
    _locals=bind_aget(bind2,5);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE AmethystParser_ruleargs(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_name,_autovar_5,_autovar_6,_autovar_7,_autovar_8,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_argsOpt,0);
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=AmethystCore_anything(self );
    FAILTEST(pass1);
    _autovar_2=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=_autovar_2;
    if(TYPE(ptr->src)==T_STRING) {
        ptr->str=RSTRING_PTR(ptr->src);
        ptr->len=RSTRING_LEN(ptr->src);
    }
    else {
        VALUE ary;
        if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
        else  ary=rb_funcall(ptr->src,s_to_a,0);
        ptr->ary2=ary;
        ptr->ary=RARRAY_PTR(ary);
        ptr->len=RARRAY_LEN(ary);
    }
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
            ptr->src=_autovar_4;
            if(TYPE(ptr->src)==T_STRING) {
                ptr->str=RSTRING_PTR(ptr->src);
                ptr->len=RSTRING_LEN(ptr->src);
            }
            else {
                VALUE ary;
                if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
                else  ary=rb_funcall(ptr->src,s_to_a,0);
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=AmethystCore_anything(self );
            FAILTEST(pass3);
            _name=it;;
            bind_aset(bind2,1,_name);
            it=rb_funcall(self,sy__local_lp_bi_196b,1,bind2);
            _name=bind_aget(bind2,1);;
            _autovar_5=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass3;
            goto success3;
pass3:
            *ptr=oldpass3;
            goto alt1_2;
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
            goto pass2;
accept1:
            ;
            break;
        case 1/*Object*/:
            ;
            stop1=1;
            break;
        }
    }
    it=_autovar_3;
    _autovar_7=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass2;
    goto success2;
pass2:
    *ptr=oldpass2;
    goto pass1;
success2:
    *ptr=oldpass2;
    it=_autovar_7;
    _autovar_8=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass1;
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    it=_autovar_8;
    __result=it;;

    return it;
fail:
    return failobj;
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
        it=rb_funcall(self,sy_nr,0);
        FAILTEST(alt1_2);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_funcall(self,sy_prefixed,0);
        FAILTEST(alt1_2);
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
        goto fail;
accept1:
        ;
    }
    it=_autovar;
    _ary=it;;
    bind_aset(bind2,1,_ary);
    it=rb_funcall(self,sy__Seq_dot_crea_bfbb,1,bind2);
    _ary=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE AmethystParser_term(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_expr,_x,_autovar,_autovar_2,__result_2,_s,_x_2,_ors,__result_3,_it,_e;
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
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt1_2);
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
            goto reject1;
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
        if (x==0) goto alt1_3;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 'n' ... 'n':
        ;
        int oldpos3=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='s'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='e'&&ame_curstr2(ptr)[4]=='d'&&ame_curstr2(ptr)[5]=='(')  ptr->pos+=6;
        else goto alt2_2;
        it=rb_funcall(self,sy_expression,0);
        _expr=it;;
        it=rb_funcall(self,sy_spaces,0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            goto alt2_2;
            break;
        case ')' ... ')':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy__Nested_lb_b_1ac2,1,bind2);
        _expr=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept3;
alt2_2:
        ptr->pos=oldpos3;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt2_3);
        __result=it;;

        ;
        goto accept3;
alt2_3:
        ptr->pos=oldpos3;
        it=rb_funcall(self,sy_call,0);
        FAILTEST(alt2_4);
        __result=it;;

        ;
        goto accept3;
alt2_4:
        ptr->pos=oldpos3;
        int oldpos4=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto reject2;
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
        if (x==0) goto alt2_5;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt2_5:
        ptr->pos=oldpos3;
        goto fail;
accept3:
        ;
        break;
    case UC(34) ... UC(34):
        ;
        int oldpos5=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt3_2);
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
            goto reject3;
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
        if (x==0) goto alt3_3;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt3_3:
        ptr->pos=oldpos5;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_ary_new3(0);
        _x=it;;
        it=rb_ary_new3(0);
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
                    int oldpos7=ptr->pos;
                    int cut4=0;
alt4_1:
                    ;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    goto alt4_2;
                    ;
                    goto accept7;
alt4_2:
                    ptr->pos=oldpos7;
                    it=Qnil;
                    ;
                    goto accept7;
alt4_3:
                    ptr->pos=oldpos7;
                    goto alt3_4;
accept7:
                    ;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt3_4);
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case UC(34) ... UC(34):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut3=1;
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
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_2=it;;
                    it=AmethystCore_append(self,_x,_autovar_2);
                    it=AmethystCore_anything(self );
                    FAILTEST(alt3_4);
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case UC(34) ... UC(34):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut3=1;
                    stop1=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _x=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__Apply_lb__dq_t_e958,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt3_4:
        ptr->pos=oldpos5;
        if (cut3) goto fail;
        goto fail;
accept5:
        ;
        break;
    case '#' ... '#':
        ;
        int oldpos8=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt5_2);
        __result=it;;

        ;
        goto accept8;
alt5_2:
        ptr->pos=oldpos8;
        int oldpos9=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto reject4;
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
        goto accept9;
reject4:
        x=0;
accept9:
        it=Qnil;
        ptr->pos=oldpos9;
        if (x==0) goto alt5_3;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept8;
alt5_3:
        ptr->pos=oldpos8;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_funcall(self,sy_line,0);
        FAILTEST(alt5_4);
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__Comment_lb__ed6f,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept8;
alt5_4:
        ptr->pos=oldpos8;
        goto fail;
accept8:
        ;
        break;
    case UC(39) ... UC(39):
        ;
        int oldpos10=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt6_2);
        __result=it;;

        ;
        goto accept10;
alt6_2:
        ptr->pos=oldpos10;
        int oldpos11=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto reject5;
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
        goto accept11;
reject5:
        x=0;
accept11:
        it=Qnil;
        ptr->pos=oldpos11;
        if (x==0) goto alt6_3;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept10;
alt6_3:
        ptr->pos=oldpos10;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_ary_new3(0);
        _x=it;;
        it=rb_ary_new3(0);
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
                    int oldpos12=ptr->pos;
                    int cut7=0;
alt7_1:
                    ;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    goto alt7_2;
                    ;
                    goto accept12;
alt7_2:
                    ptr->pos=oldpos12;
                    it=Qnil;
                    ;
                    goto accept12;
alt7_3:
                    ptr->pos=oldpos12;
                    goto alt6_4;
accept12:
                    ;
                    it=AmethystCore_anything(self );
                    FAILTEST(alt6_4);
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case UC(39) ... UC(39):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut6=1;
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
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    it=rb_obj_clone(s__bs__bs__7f81);
                    _autovar_2=it;;
                    it=AmethystCore_append(self,_x,_autovar_2);
                    it=AmethystCore_anything(self );
                    FAILTEST(alt6_4);
                    _autovar=it;;
                    it=AmethystCore_append(self,_x,_autovar);
                    break;
                case UC(39) ... UC(39):
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    cut6=1;
                    stop2=1;
                    break;
                }
                break;
            }
        }
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
        _x=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__Apply_lb__dq_s_9322,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept10;
alt6_4:
        ptr->pos=oldpos10;
        if (cut6) goto fail;
        goto fail;
accept10:
        ;
        break;
    case '(' ... '(':
        ;
        int oldpos13=ptr->pos;
        int cut8=0;
alt8_1:
        ;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt8_2);
        __result=it;;

        ;
        goto accept13;
alt8_2:
        ptr->pos=oldpos13;
        int oldpos14=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto reject6;
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
        goto accept14;
reject6:
        x=0;
accept14:
        it=Qnil;
        ptr->pos=oldpos14;
        if (x==0) goto alt8_3;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept13;
alt8_3:
        ptr->pos=oldpos13;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_funcall(self,sy_expression,0);
        _x_2=it;;
        it=rb_funcall(self,sy_spaces,0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '(':
            ;
        case '*' ... UC(255):
            ;
            goto alt8_4;
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
            it=rb_funcall(self,sy__Parenthe_261b,1,bind2);
            _x_2=bind_aget(bind2,1);;
            __result=it;;
            break;
        case '[' ... '[':
            ;
            int oldpos15=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
            else goto alt9_2;
            it=_x_2;
            _ors=it;;
            bind_aset(bind2,1,_ors);
            it=rb_funcall(self,sy__a_eq_autova_5b84,1,bind2);
            _ors=bind_aget(bind2,1);;
            __result_3=it;;
            it=__result_3;
            __result=it;;

            ;
            goto accept15;
alt9_2:
            ptr->pos=oldpos15;
            bind_aset(bind2,1,_x_2);
            it=rb_funcall(self,sy__Parenthe_261b,1,bind2);
            _x_2=bind_aget(bind2,1);;
            __result=it;;

            ;
            goto accept15;
alt9_3:
            ptr->pos=oldpos15;
            goto alt8_4;
accept15:
            ;
            break;
        }
        ;
        goto accept13;
alt8_4:
        ptr->pos=oldpos13;
        goto fail;
accept13:
        ;
        break;
    case '-' ... '-':
        ;
    case '{' ... '{':
        ;
        int oldpos16=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt10_2);
        __result=it;;

        ;
        goto accept16;
alt10_2:
        ptr->pos=oldpos16;
        int oldpos17=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto reject7;
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
        goto accept17;
reject7:
        x=0;
accept17:
        it=Qnil;
        ptr->pos=oldpos17;
        if (x==0) goto alt10_3;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept16;
alt10_3:
        ptr->pos=oldpos16;
        it=rb_funcall(self,sy_host_expr,0);
        FAILTEST(alt10_4);
        __result=it;;

        ;
        goto accept16;
alt10_4:
        ptr->pos=oldpos16;
        goto fail;
accept16:
        ;
        break;
    case '.' ... '.':
        ;
        int oldpos18=ptr->pos;
        int cut11=0;
alt11_1:
        ;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt11_2);
        __result=it;;

        ;
        goto accept18;
alt11_2:
        ptr->pos=oldpos18;
        int oldpos19=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto reject8;
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
        goto accept19;
reject8:
        x=0;
accept19:
        it=Qnil;
        ptr->pos=oldpos19;
        if (x==0) goto alt11_3;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept18;
alt11_3:
        ptr->pos=oldpos18;
        goto fail;
accept18:
        ;
        break;
    case '@' ... '@':
        ;
        int oldpos20=ptr->pos;
        int cut12=0;
alt12_1:
        ;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt12_2);
        __result=it;;

        ;
        goto accept20;
alt12_2:
        ptr->pos=oldpos20;
        int oldpos21=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto reject9;
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
        goto accept21;
reject9:
        x=0;
accept21:
        it=Qnil;
        ptr->pos=oldpos21;
        if (x==0) goto alt12_3;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept20;
alt12_3:
        ptr->pos=oldpos20;
        it=rb_funcall(self,sy_key,0);
        FAILTEST(alt12_4);
        _it=it;;
        bind_aset(bind2,1,_it);
        it=rb_funcall(self,sy__Act_lb_bind_7d0b,1,bind2);
        _it=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept20;
alt12_4:
        ptr->pos=oldpos20;
        goto fail;
accept20:
        ;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'a':
        ;
    case 'c' ... 'm':
        ;
    case 'o' ... 'z':
        ;
        int oldpos22=ptr->pos;
        int cut13=0;
alt13_1:
        ;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt13_2);
        __result=it;;

        ;
        goto accept22;
alt13_2:
        ptr->pos=oldpos22;
        it=rb_funcall(self,sy_call,0);
        FAILTEST(alt13_3);
        __result=it;;

        ;
        goto accept22;
alt13_3:
        ptr->pos=oldpos22;
        int oldpos23=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto reject10;
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
        goto accept23;
reject10:
        x=0;
accept23:
        it=Qnil;
        ptr->pos=oldpos23;
        if (x==0) goto alt13_4;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept22;
alt13_4:
        ptr->pos=oldpos22;
        goto fail;
accept22:
        ;
        break;
    case '[' ... '[':
        ;
        int oldpos24=ptr->pos;
        int cut14=0;
alt14_1:
        ;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt14_2);
        __result=it;;

        ;
        goto accept24;
alt14_2:
        ptr->pos=oldpos24;
        int oldpos25=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto reject11;
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
        goto accept25;
reject11:
        x=0;
accept25:
        it=Qnil;
        ptr->pos=oldpos25;
        if (x==0) goto alt14_3;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept24;
alt14_3:
        ptr->pos=oldpos24;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_funcall(self,sy_expression,0);
        _e=it;;
        it=rb_obj_clone(s__rb__0fbd);
        it=rb_funcall(self,sy_spaces,0);
        it=rb_obj_clone(s__rb__0fbd);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(92):
            ;
        case '^' ... UC(255):
            ;
            goto alt14_4;
            break;
        case ']' ... ']':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=rb_obj_clone(s__rb__0fbd);
        bind_aset(bind2,1,_e);
        it=rb_funcall(self,sy__Enter_lb_Ap_7d1f,1,bind2);
        _e=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept24;
alt14_4:
        ptr->pos=oldpos24;
        goto fail;
accept24:
        ;
        break;
    case 'b' ... 'b':
        ;
        int oldpos26=ptr->pos;
        int cut15=0;
alt15_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='k')  ptr->pos+=4;
        else goto alt15_2;
        it=rb_funcall(self,sy__Seq_lb_Cut_lb__3505,1,bind2);
        __result=it;;

        ;
        goto accept26;
alt15_2:
        ptr->pos=oldpos26;
        it=rb_funcall(self,sy_cases,0);
        FAILTEST(alt15_3);
        __result=it;;

        ;
        goto accept26;
alt15_3:
        ptr->pos=oldpos26;
        it=rb_funcall(self,sy_call,0);
        FAILTEST(alt15_4);
        __result=it;;

        ;
        goto accept26;
alt15_4:
        ptr->pos=oldpos26;
        int oldpos27=ptr->pos;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '-':
            ;
        case '/' ... '9':
            ;
        case ';' ... UC(255):
            ;
            goto reject12;
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
        goto accept27;
reject12:
        x=0;
accept27:
        it=Qnil;
        ptr->pos=oldpos27;
        if (x==0) goto alt15_5;
        it=Qnil;
        it=rb_funcall(self,sy__Apply_lb__dq_a_1437,1,bind2);
        __result=it;;

        ;
        goto accept26;
alt15_5:
        ptr->pos=oldpos26;
        goto fail;
accept26:
        ;
        break;
    }
    return it;
fail:
    return failobj;
}
void Init_parser_c() {
    cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_AmethystParser,"profile_report",profile_report_AmethystParser,0);
    s_=rb_str_new2("|");
    rb_global_variable(&s_);
    s_Amethyst_fe41=rb_str_new2("Amethyst");
    rb_global_variable(&s_Amethyst_fe41);
    s__bq__8333=rb_str_new2("`");
    rb_global_variable(&s__bq__8333);
    s__bs__bs__7f81=rb_str_new2("\\");
    rb_global_variable(&s__bs__bs__7f81);
    s__bs__sh__le__a90f=rb_str_new2("#{");
    rb_global_variable(&s__bs__sh__le__a90f);
    s__co__at__4bf0=rb_str_new2(":@");
    rb_global_variable(&s__co__at__4bf0);
    s__dot__dot__58b9=rb_str_new2("..");
    rb_global_variable(&s__dot__dot__58b9);
    s__dot__dot__dot__2f43=rb_str_new2("...");
    rb_global_variable(&s__dot__dot__dot__2f43);
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
    switchhash_AmethystParser_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystParser_1);;
    switchhash_AmethystParser_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystParser_2);;
    sy__=rb_intern("_");
    sy__Act_lb_Args_23b1=rb_intern("_Act_lb_Args_23b1");
    sy__Act_lb_bind_7d0b=rb_intern("_Act_lb_bind_7d0b");
    sy__Apply_lb__dq_a_1437=rb_intern("_Apply_lb__dq_a_1437");
    sy__Apply_lb__dq_c_a8b6=rb_intern("_Apply_lb__dq_c_a8b6");
    sy__Apply_lb__dq_m_2ec1=rb_intern("_Apply_lb__dq_m_2ec1");
    sy__Apply_lb__dq_r_269c=rb_intern("_Apply_lb__dq_r_269c");
    sy__Apply_lb__dq_s_9322=rb_intern("_Apply_lb__dq_s_9322");
    sy__Apply_lb__dq_t_e958=rb_intern("_Apply_lb__dq_t_e958");
    sy__Apply_lb__lb_b_099b=rb_intern("_Apply_lb__lb_b_099b");
    sy__Apply_lb_bi_9146=rb_intern("_Apply_lb_bi_9146");
    sy__Args_lb__le__co_a_9abe=rb_intern("_Args_lb__le__co_a_9abe");
    sy__Bind_lb_loc_37df=rb_intern("_Bind_lb_loc_37df");
    sy__Comment_lb__ed6f=rb_intern("_Comment_lb__ed6f");
    sy__Contextu_32ad=rb_intern("_Contextu_32ad");
    sy__Contextu_4e8d=rb_intern("_Contextu_4e8d");
    sy__Enter_lb_Ap_7d1f=rb_intern("_Enter_lb_Ap_7d1f");
    sy__Enter_lb_bi_9246=rb_intern("_Enter_lb_bi_9246");
    sy__Global_lb_b_0216=rb_intern("_Global_lb_b_0216");
    sy__Grammar_dot__a510=rb_intern("_Grammar_dot__a510");
    sy__Key_lb_bind_5e9f=rb_intern("_Key_lb_bind_5e9f");
    sy__Lambda_lb_B_2c90=rb_intern("_Lambda_lb_B_2c90");
    sy__Lookahea_0946=rb_intern("_Lookahea_0946");
    sy__Many_lb_bin_14d1=rb_intern("_Many_lb_bin_14d1");
    sy__Nested_lb_b_1ac2=rb_intern("_Nested_lb_b_1ac2");
    sy__Or_AST_dot_c_19e2=rb_intern("_Or_AST_dot_c_19e2");
    sy__Or_AST_lb_b_0657=rb_intern("_Or_AST_lb_b_0657");
    sy__Parenthe_261b=rb_intern("_Parenthe_261b");
    sy__Pass_lb_bin_2f93=rb_intern("_Pass_lb_bin_2f93");
    sy__Pred_lb_bin_ae38=rb_intern("_Pred_lb_bin_ae38");
    sy__Result_lb__le__a3b4=rb_intern("_Result_lb__le__a3b4");
    sy__Rule_dot_cre_3767=rb_intern("_Rule_dot_cre_3767");
    sy__Seq_dot_crea_bfbb=rb_intern("_Seq_dot_crea_bfbb");
    sy__Seq_lb_Bind_bbb6=rb_intern("_Seq_lb_Bind_bbb6");
    sy__Seq_lb_Cut_lb__3505=rb_intern("_Seq_lb_Cut_lb__3505");
    sy__Strin_lb__lb__dq__b20e=rb_intern("_Strin_lb__lb__dq__b20e");
    sy__Strin_lb__lb__qu__88c8=rb_intern("_Strin_lb__lb__qu__88c8");
    sy___at_appends_975f=rb_intern("__at_appends_975f");
    sy___at_appends_9f26=rb_intern("__at_appends_9f26");
    sy___at_ary_eq__lb__rb_=rb_intern("__at_ary_eq__lb__rb_");
    sy___at_ary_ff69=rb_intern("__at_ary_ff69");
    sy___at_ary_lt__lt_Ar_59e3=rb_intern("__at_ary_lt__lt_Ar_59e3");
    sy___at_bnding_7d3c=rb_intern("__at_bnding_7d3c");
    sy___at_locals_dot__bdc6=rb_intern("__at_locals_dot__bdc6");
    sy___at_locals_eq__4fc1=rb_intern("__at_locals_eq__4fc1");
    sy___at_tmp_lt__lt_bi_b81c=rb_intern("__at_tmp_lt__lt_bi_b81c");
    sy___dq__le__dq__pl_bind_567e=rb_intern("__dq__le__dq__pl_bind_567e");
    sy___lb_bind_lb_1_rb__6281=rb_intern("__lb_bind_lb_1_rb__6281");
    sy___lp_bind_lb_1_rb__a724=rb_intern("__lp_bind_lb_1_rb__a724");
    sy__a_eq_autova_5b84=rb_intern("_a_eq_autova_5b84");
    sy__bind_lb_1_rb_=rb_intern("_bind_lb_1_rb_");
    sy__bind_lb_1_rb__dot__7b93=rb_intern("_bind_lb_1_rb__dot__7b93");
    sy__bind_lb_1_rb__dot__e879=rb_intern("_bind_lb_1_rb__dot__e879");
    sy__bind_lb_1_rb__eq__f15c=rb_intern("_bind_lb_1_rb__eq__f15c");
    sy__bind_lb_1_rb__pl__b087=rb_intern("_bind_lb_1_rb__pl__b087");
    sy__local_lp_bi_196b=rb_intern("_local_lp_bi_196b");
    sy_argsOpt=rb_intern("argsOpt");
    sy_call=rb_intern("call");
    sy_cases=rb_intern("cases");
    sy_className=rb_intern("className");
    sy_expression=rb_intern("expression");
    sy_grammar=rb_intern("grammar");
    sy_host_expr=rb_intern("host_expr");
    sy_inline_host_expr=rb_intern("inline_host_expr");
    sy_key=rb_intern("key");
    sy_line=rb_intern("line");
    sy_name=rb_intern("name");
    sy_nr=rb_intern("nr");
    sy_number=rb_intern("number");
    sy_postfixed=rb_intern("postfixed");
    sy_prefixed=rb_intern("prefixed");
    sy_procargs2=rb_intern("procargs2");
    sy_procargs=rb_intern("procargs");
    sy_rubyarg=rb_intern("rubyarg");
    sy_rule=rb_intern("rule");
    sy_ruleargs=rb_intern("ruleargs");
    sy_sequence=rb_intern("sequence");
    sy_spaces=rb_intern("spaces");
    sy_term=rb_intern("term");
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
    rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
    rb_eval_string("testversionparser('c730eb11b4dd7a9716e0d75b2f0a50f2')");
}
