#include "cthyst.h"
#include "memo.c"
VALUE cls_AmethystCTranslator;
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0);
VALUE AmethystCTranslator_addlambda(VALUE self );
VALUE AmethystCTranslator_itrans(VALUE self );
VALUE AmethystCTranslator_rbcode(VALUE self );
VALUE AmethystCTranslator_rbtrans(VALUE self );
VALUE AmethystCTranslator_rbtrans2(VALUE self );
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystCTranslator_trans(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE switchhash_AmethystCTranslator_10;
VALUE switchhash_AmethystCTranslator_11;
VALUE switchhash_AmethystCTranslator_12;
VALUE switchhash_AmethystCTranslator_13;
VALUE switchhash_AmethystCTranslator_14;
VALUE switchhash_AmethystCTranslator_15;
VALUE switchhash_AmethystCTranslator_16;
VALUE switchhash_AmethystCTranslator_17;
VALUE switchhash_AmethystCTranslator_18;
VALUE switchhash_AmethystCTranslator_19;
VALUE switchhash_AmethystCTranslator_1;
VALUE switchhash_AmethystCTranslator_20;
VALUE switchhash_AmethystCTranslator_21;
VALUE switchhash_AmethystCTranslator_22;
VALUE switchhash_AmethystCTranslator_23;
VALUE switchhash_AmethystCTranslator_2;
VALUE switchhash_AmethystCTranslator_3;
VALUE switchhash_AmethystCTranslator_4;
VALUE switchhash_AmethystCTranslator_5;
VALUE switchhash_AmethystCTranslator_6;
VALUE switchhash_AmethystCTranslator_7;
VALUE switchhash_AmethystCTranslator_8;
VALUE switchhash_AmethystCTranslator_9;
static VALUE i_0;
static VALUE i_1;
static VALUE s__d41d;
static VALUE s_alt_3482;
static VALUE s_fail_e111;
static VALUE s_it_eq_Qnil;
static VALUE s_it_eq_ptr_mi__gt__d2bb;
static VALUE s_it_eq_rb_st_ee66;
static VALUE s_memo_fai_3620;
static VALUE s_oldpass_6559;
static VALUE s_pass_1a1d;
static VALUE s_ptr_mi__gt_pos_db4c;
static VALUE s_success_260c;
static VALUE s_switch_lp__lp__a839;
static VALUE sy___append_lp__d113;
static VALUE sy___at__contex_160a;
static VALUE sy___at__contex_d6d5;
static VALUE sy___at_bindno_eq__e294;
static VALUE sy___at_binds_dot_m_4c7b;
static VALUE sy___at_callbac_2d11;
static VALUE sy___at_callbac_e37c;
static VALUE sy___at_cutlabe_7393;
static VALUE sy___at_cutlabe_d8d6;
static VALUE sy___at_cuts_7bbc;
static VALUE sy___at_cuts_eq_ni_f875;
static VALUE sy___at_cuts_eq_tr_13c6;
static VALUE sy___at_defs_eq__lb__rb__3b51;
static VALUE sy___at_faillab_1610;
static VALUE sy___at_faillab_8142;
static VALUE sy___at_faillab_e174;
static VALUE sy___at_faillab_e643;
static VALUE sy___at_header_eq__7aa9;
static VALUE sy___at_header_lt__92e2;
static VALUE sy___at_init_eq__lb__rb__47da;
static VALUE sy___at_init_sp__sp__lt__aac8;
static VALUE sy___at_lambdas_ecda;
static VALUE sy___at_stoplab_2ba4;
static VALUE sy___at_stoplab_a14e;
static VALUE sy___at_stops_e2b4;
static VALUE sy___at_stops_eq_n_588d;
static VALUE sy___at_stops_eq_t_c6ab;
static VALUE sy___dq_Amethys_2ed8;
static VALUE sy___dq_VALUE_sp_c_8bbf;
static VALUE sy___dq__at__sh__le_bind_3d2b;
static VALUE sy___dq__sh__le_bind_lb__3bec;
static VALUE sy___dq__sh__le_bind_lb__8a62;
static VALUE sy___dq__sh__le_bind_lb__9630;
static VALUE sy___dq__sh__le_bind_lb__9cfd;
static VALUE sy___dq__sh__le_src_dot_n_9acf;
static VALUE sy___dq_class_sp__sh__cf48;
static VALUE sy___dq_cstruct_ff45;
static VALUE sy___dq_def_sp__sh__le_b_b73d;
static VALUE sy___dq_goto_sp__sh__le__f772;
static VALUE sy___dq_if_lp_ptr_mi__033b;
static VALUE sy___dq_if_sp__lp__sh__le_a_0233;
static VALUE sy___dq_int_sp__sh__le_b_0a35;
static VALUE sy___dq_int_sp__sh__le_b_0b60;
static VALUE sy___dq_it_eq_Qnil_8464;
static VALUE sy___dq_it_eq__sh__le_bg_281f;
static VALUE sy___dq_switch_lp__f722;
static VALUE sy___dq_switchh_698e;
static VALUE sy___lb_bind_lb_1_rb__8fa4;
static VALUE sy___lp_Current_c458;
static VALUE sy___lp_bind_lb_1_rb__a948;
static VALUE sy___lp_bind_lb_1_rb__d1fd;
static VALUE sy__addcallb_0461;
static VALUE sy__addcallb_2cf7;
static VALUE sy__ar_eq__ti_src_dot__efea;
static VALUE sy__bind_lb_1_rb_;
static VALUE sy__bind_lb_1_rb__dot__1364;
static VALUE sy__bind_lb_1_rb__eq__2db7;
static VALUE sy__bind_lb_1_rb__eq__7d1a;
static VALUE sy__bind_lb_1_rb__lb__230a;
static VALUE sy__bind_lb_1_rb__lb__ff72;
static VALUE sy__bind_lb_1_rb__lt__8b76;
static VALUE sy__bind_lb_1_rb__lt__98f3;
static VALUE sy__bind_lb_1_rb__lt__acb7;
static VALUE sy__bind_lb_1_rb__pl__1b5e;
static VALUE sy__bind_lb_1_rb__pl__1dcb;
static VALUE sy__bind_lb_1_rb__pl__22c0;
static VALUE sy__bind_lb_1_rb__pl__252c;
static VALUE sy__bind_lb_1_rb__pl__4da1;
static VALUE sy__bind_lb_1_rb__pl__4db9;
static VALUE sy__bind_lb_1_rb__pl__891b;
static VALUE sy__bind_lb_1_rb__pl__916b;
static VALUE sy__bind_lb_1_rb__ti__cfcb;
static VALUE sy__h_eq__dq_VALUE_037c;
static VALUE sy__h_eq__dq_VALUE_481e;
static VALUE sy__label_lp__dq_a_f49c;
static VALUE sy__label_lp__dq_o_c187;
static VALUE sy__label_lp__dq_r_95b2;
static VALUE sy__r_eq__dq__sp__sh__le_bi_10a8;
static VALUE sy__raise_sp__dq_T_0ab1;
static VALUE sy__rbbget_lp_s_68a8;
static VALUE sy__src_25d9;
static VALUE sy__src_dot_name_80f3;
static VALUE sy__src_dot_rule_5acf;
static VALUE sy__src_dot_to_5e99;
static VALUE sy_addlambda;
static VALUE sy_apply;
static VALUE sy_label;
static VALUE sy_rbcode;
static VALUE sy_rbtrans2;
static VALUE sy_rbtrans;
static VALUE sy_spaces;
static VALUE sy_trans;
VALUE profile_report_AmethystCTranslator(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_s,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_s;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=rb_funcall(self,sy_rbtrans2,0);
    _autovar_2=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass1;
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    it=_autovar_2;
    _s=it;;
    bind_aset(bind2,1,_s);
    it=rb_funcall(self,sy__addcallb_2cf7,1,bind2);
    _s=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE AmethystCTranslator_addlambda(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_lambd,_rwo,_word,_body,_x,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_23,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
    case 1/*Apply*/:
    case 2/*Bind*/:
    case 3/*CAct*/:
    case 4/*Cut*/:
    case 5/*Grammar*/:
    case 6/*Local*/:
    case 7/*Lookahead*/:
    case 8/*Many*/:
    case 9/*Memo*/:
    case 10/*Or*/:
    case 11/*Pass*/:
    case 12/*Rule*/:
    case 13/*Seq*/:
    case 14/*Stop*/:
    case 15/*Switch_Char*/:
    case 16/*Switch_Clas*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___dq__sh__le_bind_lb__8a62,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _lambd=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_obj_clone(s_fail_e111);
        it=rb_funcall(self,sy___at_faillab_1610,1,bind2);
        _rwo=it;;
        it=rb_obj_clone(s_fail_e111);
        it=rb_obj_clone(s_fail_e111);
        _word=it;;
        bind_aset(bind2,1,_word);
        it=rb_funcall(self,sy___at_faillab_e643,1,bind2);
        _word=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_trans,0);
        FAILTEST(fail);
        _body=it;;
        _x=it;;
        bind_aset(bind2,1,_rwo);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy___at_faillab_e174,1,bind2);
        _rwo=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        bind_aset(bind2,1,_lambd);
        bind_aset(bind2,2,_autovar);
        bind_aset(bind2,3,_body);
        it=rb_funcall(self,sy__h_eq__dq_VALUE_481e,1,bind2);
        _lambd=bind_aget(bind2,1);;
        _autovar=bind_aget(bind2,2);;
        _body=bind_aget(bind2,3);;
        bind_aset(bind2,1,_lambd);
        it=rb_funcall(self,sy___dq_Amethys_2ed8,1,bind2);
        _lambd=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 17/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___dq__sh__le_bind_lb__8a62,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_obj_clone(s_fail_e111);
        it=rb_funcall(self,sy___at_faillab_1610,1,bind2);
        it=rb_obj_clone(s_fail_e111);
        it=rb_obj_clone(s_fail_e111);
        _word=it;;
        bind_aset(bind2,1,_word);
        it=rb_funcall(self,sy___at_faillab_e643,1,bind2);
        _word=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        goto fail;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE AmethystCTranslator_itrans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_ruby,_c,_init,_c_2,__result,_autovar,_it,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _ruby=it;;
    it=rb_ary_new3(0);
    _c=it;;
    it=rb_ary_new3(0);
    _init=it;;
    it=rb_ary_new3(0);
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_1,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Apply*/:
        case 2/*Bind*/:
        case 3/*CAct*/:
        case 4/*Cut*/:
        case 5/*Grammar*/:
        case 6/*Local*/:
        case 7/*Lookahead*/:
        case 8/*Many*/:
        case 9/*Memo*/:
        case 10/*Or*/:
        case 11/*Pass*/:
        case 12/*Rule*/:
        case 13/*Seq*/:
        case 14/*Stop*/:
        case 15/*Switch_Char*/:
        case 16/*Switch_Clas*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_2);
            _c_2=it;;
            bind_aset(bind2,1,_c_2);
            it=rb_funcall(self,sy___lp_bind_lb_1_rb__a948,1,bind2);
            _c_2=bind_aget(bind2,1);;
            FAILTEST(alt1_2);
            bind_aset(bind2,1,_c_2);
            it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
            _c_2=bind_aget(bind2,1);;
            __result=it;;
            it=__result;
            _autovar=it;;
            bind_aset(bind2,1,_ruby);
            bind_aset(bind2,2,_autovar);
            it=rb_funcall(self,sy___append_lp__d113,1,bind2);
            _ruby=bind_aget(bind2,1);;
            _autovar=bind_aget(bind2,2);;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            it=rb_funcall(self,sy_trans,0);
            FAILTEST(alt1_3);
            _it=it;;
            bind_aset(bind2,1,_c);
            bind_aset(bind2,2,_it);
            bind_aset(bind2,3,_init);
            bind_aset(bind2,4,_ruby);
            it=rb_funcall(self,sy__bind_lb_1_rb__lt__98f3,1,bind2);
            _c=bind_aget(bind2,1);;
            _it=bind_aget(bind2,2);;
            _init=bind_aget(bind2,3);;
            _ruby=bind_aget(bind2,4);;
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
            break;
        case 17/*Object*/:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_2);
            _c_2=it;;
            bind_aset(bind2,1,_c_2);
            it=rb_funcall(self,sy___lp_bind_lb_1_rb__a948,1,bind2);
            _c_2=bind_aget(bind2,1);;
            FAILTEST(alt2_2);
            bind_aset(bind2,1,_c_2);
            it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
            _c_2=bind_aget(bind2,1);;
            __result=it;;
            it=__result;
            _autovar=it;;
            bind_aset(bind2,1,_ruby);
            bind_aset(bind2,2,_autovar);
            it=rb_funcall(self,sy___append_lp__d113,1,bind2);
            _ruby=bind_aget(bind2,1);;
            _autovar=bind_aget(bind2,2);;
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
    bind_aset(bind2,1,_c);
    bind_aset(bind2,2,_init);
    bind_aset(bind2,3,_ruby);
    it=rb_funcall(self,sy___lb_bind_lb_1_rb__8fa4,1,bind2);
    _c=bind_aget(bind2,1);;
    _init=bind_aget(bind2,2);;
    _ruby=bind_aget(bind2,3);;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE AmethystCTranslator_rbcode(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_s,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_k,_v,_autovar_6,_x,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_160a,1,bind2);
    _autovar=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___dq_class_sp__sh__cf48,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _s=it;;
    bind_aset(bind2,1,_s);
    it=rb_funcall(self,sy__bind_lb_1_rb__lt__acb7,1,bind2);
    _s=bind_aget(bind2,1);;
    it=rb_funcall(self,sy___at_callbac_2d11,1,bind2);
    _autovar_2=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_2;
    ptr->len=1;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
    _autovar=bind_aget(bind2,1);;
    it=AmethystCore_anything(self );
    FAILTEST(pass1);
    _autovar_3=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=_autovar_3;
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
    _autovar_4=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_2);
        _autovar_5=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_5;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass3);
        _k=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass3);
        _v=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto alt1_2;
success3:
        *ptr=oldpass3;
        bind_aset(bind2,1,_k);
        bind_aset(bind2,2,_v);
        it=rb_funcall(self,sy___dq_def_sp__sh__le_b_b73d,1,bind2);
        _k=bind_aget(bind2,1);;
        _v=bind_aget(bind2,2);;
        _autovar_6=it;;
        bind_aset(bind2,1,_autovar_4);
        bind_aset(bind2,2,_autovar_6);
        it=rb_funcall(self,sy___append_lp__d113,1,bind2);
        _autovar_4=bind_aget(bind2,1);;
        _autovar_6=bind_aget(bind2,2);;
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
    }
    it=_autovar_4;
    _x=it;;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
    _autovar=bind_aget(bind2,1);;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass2;
    goto success2;
pass2:
    *ptr=oldpass2;
    goto pass1;
success2:
    *ptr=oldpass2;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
    _autovar=bind_aget(bind2,1);;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass1;
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    bind_aset(bind2,1,_s);
    bind_aset(bind2,2,_x);
    it=rb_funcall(self,sy__bind_lb_1_rb__pl__1b5e,1,bind2);
    _s=bind_aget(bind2,1);;
    _x=bind_aget(bind2,2);;
    bind_aset(bind2,1,_s);
    it=rb_funcall(self,sy__bind_lb_1_rb__pl__916b,1,bind2);
    _s=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE AmethystCTranslator_rbtrans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_autovar_4,_autovar_5,_name,_autovar_6,_args,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_2,rb_obj_class(ame_curobj2(ptr))))) {
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
        it=rb_funcall(self,sy_rbtrans2,0);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
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
    case 1/*Array*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_3;
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
        it=rb_funcall(self,sy_rbtrans2,0);
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt2_2;
success2:
        *ptr=oldpass2;
        it=_autovar_4;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 2/*Global*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_5=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_5;
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
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto alt3_2;
success3:
        *ptr=oldpass3;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy___dq__at__sh__le_bind_3d2b,1,bind2);
        _name=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        FAILTEST(alt3_3);
        __result=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto fail;
accept3:
        ;
        break;
    case 3/*Key*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_6=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_6;
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
        FAILTEST(pass4);
        _name=it;;
        it=rb_funcall(self,sy_rbtrans,0);
        FAILTEST(pass4);
        _args=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt4_2;
success4:
        *ptr=oldpass4;
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_args);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__d1fd,1,bind2);
        _name=bind_aget(bind2,1);;
        _args=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        FAILTEST(alt4_3);
        __result=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto fail;
accept4:
        ;
        break;
    case 4/*Lambda*/:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_7=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_7;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Apply*/:
        case 2/*Bind*/:
        case 3/*CAct*/:
        case 4/*Cut*/:
        case 5/*Grammar*/:
        case 6/*Local*/:
        case 7/*Lookahead*/:
        case 8/*Many*/:
        case 9/*Memo*/:
        case 10/*Or*/:
        case 11/*Pass*/:
        case 12/*Rule*/:
        case 13/*Seq*/:
        case 14/*Stop*/:
        case 15/*Switch_Char*/:
        case 16/*Switch_Clas*/:
            ;
            it=rb_funcall(self,sy_addlambda,0);
            FAILTEST(pass5);
            _autovar_8=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass5;
            break;
        case 17/*Object*/:
            ;
            goto pass5;
            break;
        }
        goto success5;
pass5:
        *ptr=oldpass5;
        goto alt5_2;
success5:
        *ptr=oldpass5;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=AmethystCore_anything(self );
        FAILTEST(alt5_3);
        __result=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        goto fail;
accept5:
        ;
        break;
    case 5/*Local*/:
        ;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_9;
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
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy__rbbget_lp_s_68a8,1,bind2);
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto alt6_2;
success6:
        *ptr=oldpass6;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept6;
alt6_2:
        ptr->pos=oldpos6;
        it=AmethystCore_anything(self );
        FAILTEST(alt6_3);
        __result=it;;

        ;
        goto accept6;
alt6_3:
        ptr->pos=oldpos6;
        goto fail;
accept6:
        ;
        break;
    case 6/*Result*/:
        ;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_11=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_11;
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
        it=rb_funcall(self,sy___dq__sh__le_src_dot_n_9acf,1,bind2);
        _autovar_12=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt7_2;
success7:
        *ptr=oldpass7;
        it=_autovar_12;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=AmethystCore_anything(self );
        FAILTEST(alt7_3);
        __result=it;;

        ;
        goto accept7;
alt7_3:
        ptr->pos=oldpos7;
        goto fail;
accept7:
        ;
        break;
    case 7/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(fail);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE AmethystCTranslator_rbtrans2(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_it,__result;
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
        it=rb_funcall(self,sy_rbtrans,0);
        FAILTEST(alt1_2);
        _autovar_2=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy___append_lp__d113,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
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
    _it=it;;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy__bind_lb_1_rb__ti__cfcb,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_rwo,_word,_prc,_x,__result;
    VALUE bind2=bind_new2(16);
    _word=a0;;
    _prc=a1;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy___at_faillab_1610,1,bind2);
    _rwo=it;;
    bind_aset(bind2,1,_word);
    it=rb_funcall(self,sy___at_faillab_e643,1,bind2);
    _word=bind_aget(bind2,1);;
    it=_prc;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    FAILTEST(fail);
    _x=it;;
    bind_aset(bind2,1,_rwo);
    bind_aset(bind2,2,_x);
    it=rb_funcall(self,sy___at_faillab_e174,1,bind2);
    _rwo=bind_aget(bind2,1);;
    _x=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE AmethystCTranslator_trans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_it,_cbno,_autovar_5,__result,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_s,_autovar_14,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_autovar_19,_autovar_20,_autovar_21,_autovar_22,_autovar_23,_autovar_24,_autovar_25,_autovar_26,_autovar_27,_autovar_28,_autovar_29,_autovar_30,_name,_ii,_autovar_31,_aa,_autovar_32,_args,_app,_autovar_33,_e,_autovar_34,_autovar_35,_autovar_36,_autovar_37,_autovar_38,_autovar_39,_autovar_40,_autovar_41,_autovar_42,_autovar_43,_autovar_44,_t,_rbcode,_init,_autovar_45,_autovar_46,_autovar_47,_autovar_48,_accept,_reject,_oldpos,_word,_rwo,_x,_autovar_49,_autovar_50,_autovar_51,_autovar_52,_autovar_53,_autovar_54,_autovar_55,_autovar_56,_autovar_57,_oldstops,_oldstoplabel,_autovar_58,_autovar_59,_autovar_60,__result_2,_autovar_61,_autovar_62,_autovar_63,_alt,_altno,_oldcutlabel,_oldcuts,_autovar_64,_autovar_65,_pass,_oldpass,_success,_autovar_66,_autovar_67,_to,_autovar_68,_autovar_69,_autovar_70,_autovar_71,_body,_autovar_72,_autovar_73,_autovar_74,_autovar_75,_autovar_76,_autovar_77,_autovar_78,_autovar_79,_c,_autovar_80,_autovar_81,_sh,_autovar_82,_autovar_83;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
        cstruct oldpass1=*ptr;
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
        it=rb_funcall(self,sy___at_bindno_eq__e294,1,bind2);
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_2);
            _autovar_4=it;;
            bind_aset(bind2,1,_autovar_3);
            bind_aset(bind2,2,_autovar_4);
            it=rb_funcall(self,sy___append_lp__d113,1,bind2);
            _autovar_3=bind_aget(bind2,1);;
            _autovar_4=bind_aget(bind2,2);;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            goto pass1;
accept1:
            ;
        }
        it=_autovar_3;
        _it=it;;
        bind_aset(bind2,1,_it);
        it=rb_funcall(self,sy__addcallb_0461,1,bind2);
        _it=bind_aget(bind2,1);;
        _cbno=it;;
        bind_aset(bind2,1,_cbno);
        it=rb_funcall(self,sy___at_binds_dot_m_4c7b,1,bind2);
        _cbno=bind_aget(bind2,1);;
        _autovar_5=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=_autovar_5;
        __result=it;;
        break;
    case 1/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_6=it;;
        it=_autovar_6;
        _autovar_7=it;;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=_autovar_7;
        _autovar_8=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_8;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        _autovar_9=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_9;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_spaces,0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '^':
            ;
        case '`' ... UC(255):
            ;
            goto pass3;
            break;
        case '_' ... '_':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='f'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='n'&&ame_curstr2(ptr)[3]=='d')  ptr->pos+=4;
            else goto pass3;
            break;
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto pass2;
success3:
        *ptr=oldpass3;
        it=rb_funcall(self,sy__raise_sp__dq_T_0ab1,1,bind2);
        _autovar_10=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt2_2;
success2:
        *ptr=oldpass2;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=_autovar_7;
        _autovar_11=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_11;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass4);
        _autovar_12=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_12;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_spaces,0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '^':
            ;
        case '`' ... UC(255):
            ;
            goto pass5;
            break;
        case '_' ... '_':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='t'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='t'&&ame_curstr2(ptr)[4]=='_'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='i'&&ame_curstr2(ptr)[7]=='z'&&ame_curstr2(ptr)[8]=='e')  ptr->pos+=9;
            else goto pass5;
            break;
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto pass4;
success5:
        *ptr=oldpass5;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_13=it;;
            break;
        case 1/*Object*/:
            ;
            goto pass4;
            break;
        }
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_13;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass6);
        _s=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto pass4;
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt2_3;
success4:
        *ptr=oldpass4;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy___dq_if_lp_ptr_mi__033b,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        it=_autovar_7;
        _autovar_14=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_14;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass7);
        _autovar_15=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_15;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_spaces,0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'e':
            ;
        case 'g' ... UC(255):
            ;
            goto pass8;
            break;
        case 'f' ... 'f':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
            else goto pass8;
            break;
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass8;
        goto success8;
pass8:
        *ptr=oldpass8;
        goto pass7;
success8:
        *ptr=oldpass8;
        it=rb_funcall(self,sy___dq_goto_sp__sh__le__f772,1,bind2);
        _autovar_16=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt2_4;
success7:
        *ptr=oldpass7;
        it=_autovar_16;
        __result=it;;

        ;
        goto accept2;
alt2_4:
        ptr->pos=oldpos2;
        it=_autovar_7;
        _autovar_17=it;;
        cstruct oldpass9=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_17;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass9);
        _autovar_18=it;;
        cstruct oldpass10=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_18;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_spaces,0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'd':
            ;
        case 'f' ... UC(255):
            ;
            goto pass10;
            break;
        case 'e' ... 'e':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='o'&&ame_curstr2(ptr)[1]=='f')  ptr->pos+=2;
            else goto pass10;
            break;
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass10;
        goto success10;
pass10:
        *ptr=oldpass10;
        goto pass9;
success10:
        *ptr=oldpass10;
        it=rb_funcall(self,sy___dq_it_eq_Qnil_8464,1,bind2);
        _autovar_19=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass9;
        goto success9;
pass9:
        *ptr=oldpass9;
        goto alt2_5;
success9:
        *ptr=oldpass9;
        it=_autovar_19;
        __result=it;;

        ;
        goto accept2;
alt2_5:
        ptr->pos=oldpos2;
        it=_autovar_7;
        _autovar_20=it;;
        cstruct oldpass11=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_20;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass11);
        _autovar_21=it;;
        cstruct oldpass12=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_21;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_spaces,0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'd':
            ;
        case 'f' ... UC(255):
            ;
            goto pass12;
            break;
        case 'e' ... 'e':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
            else goto pass12;
            break;
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass12;
        goto success12;
pass12:
        *ptr=oldpass12;
        goto pass11;
success12:
        *ptr=oldpass12;
        it=rb_obj_clone(s_it_eq_Qnil);
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass11;
        goto success11;
pass11:
        *ptr=oldpass11;
        goto alt2_6;
success11:
        *ptr=oldpass11;
        it=rb_obj_clone(s_it_eq_Qnil);
        __result=it;;

        ;
        goto accept2;
alt2_6:
        ptr->pos=oldpos2;
        it=_autovar_7;
        _autovar_22=it;;
        cstruct oldpass13=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_22;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass13);
        _autovar_23=it;;
        cstruct oldpass14=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_23;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_spaces,0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '`':
            ;
        case 'b' ... UC(255):
            ;
            goto pass14;
            break;
        case 'a' ... 'a':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
            else goto pass14;
            break;
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass14;
        goto success14;
pass14:
        *ptr=oldpass14;
        goto pass13;
success14:
        *ptr=oldpass14;
        it=rb_obj_clone(s_it_eq_rb_st_ee66);
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass13;
        goto success13;
pass13:
        *ptr=oldpass13;
        goto alt2_7;
success13:
        *ptr=oldpass13;
        it=rb_obj_clone(s_it_eq_rb_st_ee66);
        __result=it;;

        ;
        goto accept2;
alt2_7:
        ptr->pos=oldpos2;
        it=_autovar_7;
        _autovar_24=it;;
        cstruct oldpass15=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_24;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass15);
        _autovar_25=it;;
        cstruct oldpass16=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_25;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_spaces,0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '`':
            ;
        case 'b' ... UC(255):
            ;
            goto pass16;
            break;
        case 'a' ... 'a':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
            else goto pass16;
            break;
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass16;
        goto success16;
pass16:
        *ptr=oldpass16;
        goto pass15;
success16:
        *ptr=oldpass16;
        it=rb_obj_clone(s_it_eq_ptr_mi__gt__d2bb);
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass15;
        goto success15;
pass15:
        *ptr=oldpass15;
        goto alt2_8;
success15:
        *ptr=oldpass15;
        it=rb_obj_clone(s_it_eq_ptr_mi__gt__d2bb);
        __result=it;;

        ;
        goto accept2;
alt2_8:
        ptr->pos=oldpos2;
        it=_autovar_7;
        _autovar_26=it;;
        cstruct oldpass17=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_26;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass17);
        _autovar_27=it;;
        cstruct oldpass18=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_27;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_spaces,0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '^':
            ;
        case '`' ... UC(255):
            ;
            goto pass18;
            break;
        case '_' ... '_':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
            else goto pass18;
            break;
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass18;
        goto success18;
pass18:
        *ptr=oldpass18;
        goto pass17;
success18:
        *ptr=oldpass18;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_6,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_28=it;;
            break;
        case 1/*Object*/:
            ;
            goto pass17;
            break;
        }
        cstruct oldpass19=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_28;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass19);
        _s=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass19;
        goto success19;
pass19:
        *ptr=oldpass19;
        goto pass17;
success19:
        *ptr=oldpass19;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy___dq_if_sp__lp__sh__le_a_0233,1,bind2);
        _s=bind_aget(bind2,1);;
        _autovar_29=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass17;
        goto success17;
pass17:
        *ptr=oldpass17;
        goto alt2_9;
success17:
        *ptr=oldpass17;
        it=_autovar_29;
        __result=it;;

        ;
        goto accept2;
alt2_9:
        ptr->pos=oldpos2;
        it=_autovar_7;
        _autovar_30=it;;
        cstruct oldpass20=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_30;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass20);
        _name=it;;
        it=i_0;
        _ii=it;;
        it=rb_ary_new3(0);
        _autovar_31=it;;
        int stop2=0;
        while(!stop2) {
            switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_7,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Act*/:
            case 1/*Apply*/:
            case 2/*Bind*/:
            case 3/*CAct*/:
            case 4/*Cut*/:
            case 5/*Grammar*/:
            case 6/*Local*/:
            case 7/*Lookahead*/:
            case 8/*Many*/:
            case 9/*Memo*/:
            case 10/*Or*/:
            case 11/*Pass*/:
            case 12/*Rule*/:
            case 13/*Seq*/:
            case 14/*Stop*/:
            case 15/*Switch_Char*/:
            case 16/*Switch_Clas*/:
                ;
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=rb_funcall(self,sy_trans,0);
                FAILTEST(alt3_2);
                _aa=it;;
                bind_aset(bind2,1,_ii);
                it=rb_funcall(self,sy__bind_lb_1_rb__pl__891b,1,bind2);
                _ii=bind_aget(bind2,1);;
                bind_aset(bind2,1,_aa);
                bind_aset(bind2,2,_ii);
                it=rb_funcall(self,sy___dq__sh__le_bind_lb__3bec,1,bind2);
                _aa=bind_aget(bind2,1);;
                _ii=bind_aget(bind2,2);;
                _autovar_32=it;;
                bind_aset(bind2,1,_autovar_31);
                bind_aset(bind2,2,_autovar_32);
                it=rb_funcall(self,sy___append_lp__d113,1,bind2);
                _autovar_31=bind_aget(bind2,1);;
                _autovar_32=bind_aget(bind2,2);;
                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                stop2=1;
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                goto pass20;
accept3:
                ;
                break;
            case 17/*Object*/:
                ;
                int oldpos4=ptr->pos;
                int cut4=0;
alt4_1:
                ;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                goto alt4_2;
                ;
                goto accept4;
alt4_2:
                ptr->pos=oldpos4;
                stop2=1;
                ;
                goto accept4;
alt4_3:
                ptr->pos=oldpos4;
                goto pass20;
accept4:
                ;
                break;
            }
        }
        it=_autovar_31;
        _args=it;;
        it=rb_funcall(self,sy__src_25d9,1,bind2);
        _app=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass20;
        goto success20;
pass20:
        *ptr=oldpass20;
        goto alt2_10;
success20:
        *ptr=oldpass20;
        bind_aset(bind2,1,_args);
        bind_aset(bind2,2,_name);
        bind_aset(bind2,3,_ii);
        bind_aset(bind2,4,_app);
        it=rb_funcall(self,sy__r_eq__dq__sp__sh__le_bi_10a8,1,bind2);
        _args=bind_aget(bind2,1);;
        _name=bind_aget(bind2,2);;
        _ii=bind_aget(bind2,3);;
        _app=bind_aget(bind2,4);;
        __result=it;;

        ;
        goto accept2;
alt2_10:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 2/*Bind*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_33=it;;
        cstruct oldpass21=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_33;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_8,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Apply*/:
        case 2/*Bind*/:
        case 3/*CAct*/:
        case 4/*Cut*/:
        case 5/*Grammar*/:
        case 6/*Local*/:
        case 7/*Lookahead*/:
        case 8/*Many*/:
        case 9/*Memo*/:
        case 10/*Or*/:
        case 11/*Pass*/:
        case 12/*Rule*/:
        case 13/*Seq*/:
        case 14/*Stop*/:
        case 15/*Switch_Char*/:
        case 16/*Switch_Clas*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_trans,0);
            FAILTEST(pass21);
            _e=it;;
            bind_aset(bind2,1,_e);
            it=rb_funcall(self,sy___dq__sh__le_bind_lb__9cfd,1,bind2);
            _e=bind_aget(bind2,1);;
            _autovar_34=it;;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass21;
            break;
        case 17/*Object*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            goto pass21;
            break;
        }
        goto success21;
pass21:
        *ptr=oldpass21;
        goto fail;
success21:
        *ptr=oldpass21;
        it=_autovar_34;
        __result=it;;
        break;
    case 3/*CAct*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_35=it;;
        cstruct oldpass22=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_35;
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
        int stop3=0;
        while(!stop3) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            FAILTEST(alt5_2);
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            stop3=1;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            goto pass22;
accept5:
            ;
        }
        it=rb_funcall(self,sy__ar_eq__ti_src_dot__efea,1,bind2);
        _autovar_36=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass22;
        goto success22;
pass22:
        *ptr=oldpass22;
        goto fail;
success22:
        *ptr=oldpass22;
        it=_autovar_36;
        __result=it;;
        break;
    case 4/*Cut*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_37=it;;
        cstruct oldpass23=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_37;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass23;
        goto success23;
pass23:
        *ptr=oldpass23;
        goto fail;
success23:
        *ptr=oldpass23;
        it=rb_funcall(self,sy___at_cuts_eq_tr_13c6,1,bind2);
        __result=it;;
        break;
    case 5/*Grammar*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_38=it;;
        cstruct oldpass24=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_38;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy__bind_lb_1_rb__lb__230a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy___at_lambdas_ecda,1,bind2);
        it=rb_funcall(self,sy___at_defs_eq__lb__rb__3b51,1,bind2);
        it=rb_funcall(self,sy___at_faillab_8142,1,bind2);
        it=rb_funcall(self,sy___at_callbac_e37c,1,bind2);
        it=rb_funcall(self,sy___at_header_eq__7aa9,1,bind2);
        it=rb_funcall(self,sy___at_init_eq__lb__rb__47da,1,bind2);
        it=rb_funcall(self,sy__src_dot_rule_5acf,1,bind2);
        _autovar_39=it;;
        cstruct oldpass25=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_39;
        ptr->len=1;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        FAILTEST(pass25);
        _autovar_40=it;;
        cstruct oldpass26=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_40;
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
        _autovar_41=it;;
        int stop4=0;
        while(!stop4) {
            switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_9,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Act*/:
            case 1/*Apply*/:
            case 2/*Bind*/:
            case 3/*CAct*/:
            case 4/*Cut*/:
            case 5/*Grammar*/:
            case 6/*Local*/:
            case 7/*Lookahead*/:
            case 8/*Many*/:
            case 9/*Memo*/:
            case 10/*Or*/:
            case 11/*Pass*/:
            case 12/*Rule*/:
            case 13/*Seq*/:
            case 14/*Stop*/:
            case 15/*Switch_Char*/:
            case 16/*Switch_Clas*/:
                ;
                int oldpos6=ptr->pos;
                int cut6=0;
alt6_1:
                ;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=rb_funcall(self,sy_trans,0);
                FAILTEST(alt6_2);
                _autovar_42=it;;
                bind_aset(bind2,1,_autovar_41);
                bind_aset(bind2,2,_autovar_42);
                it=rb_funcall(self,sy___append_lp__d113,1,bind2);
                _autovar_41=bind_aget(bind2,1);;
                _autovar_42=bind_aget(bind2,2);;
                ;
                goto accept6;
alt6_2:
                ptr->pos=oldpos6;
                stop4=1;
                ;
                goto accept6;
alt6_3:
                ptr->pos=oldpos6;
                goto pass26;
accept6:
                ;
                break;
            case 17/*Object*/:
                ;
                int oldpos7=ptr->pos;
                int cut7=0;
alt7_1:
                ;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                goto alt7_2;
                ;
                goto accept7;
alt7_2:
                ptr->pos=oldpos7;
                stop4=1;
                ;
                goto accept7;
alt7_3:
                ptr->pos=oldpos7;
                goto pass26;
accept7:
                ;
                break;
            }
        }
        it=_autovar_41;
        _autovar_43=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass26;
        goto success26;
pass26:
        *ptr=oldpass26;
        goto pass25;
success26:
        *ptr=oldpass26;
        it=_autovar_43;
        _autovar_44=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass25;
        goto success25;
pass25:
        *ptr=oldpass25;
        goto pass24;
success25:
        *ptr=oldpass25;
        it=_autovar_44;
        _t=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_rbcode,0);
        FAILTEST(pass24);
        _rbcode=it;;
        it=rb_funcall(self,sy___dq_VALUE_sp_c_8bbf,1,bind2);
        _s=it;;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_t);
        bind_aset(bind2,3,_init);
        bind_aset(bind2,4,_autovar);
        bind_aset(bind2,5,_rbcode);
        it=rb_funcall(self,sy__bind_lb_1_rb__lt__8b76,1,bind2);
        _s=bind_aget(bind2,1);;
        _t=bind_aget(bind2,2);;
        _init=bind_aget(bind2,3);;
        _autovar=bind_aget(bind2,4);;
        _rbcode=bind_aget(bind2,5);;
        _autovar_45=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass24;
        goto success24;
pass24:
        *ptr=oldpass24;
        goto fail;
success24:
        *ptr=oldpass24;
        it=_autovar_45;
        __result=it;;
        break;
    case 6/*Local*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_46=it;;
        cstruct oldpass27=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_46;
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
        int stop5=0;
        while(!stop5) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            FAILTEST(alt8_2);
            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            stop5=1;
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            goto pass27;
accept8:
            ;
        }
        it=rb_funcall(self,sy___dq_it_eq__sh__le_bg_281f,1,bind2);
        _autovar_47=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass27;
        goto success27;
pass27:
        *ptr=oldpass27;
        goto fail;
success27:
        *ptr=oldpass27;
        it=_autovar_47;
        __result=it;;
        break;
    case 7/*Lookahead*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_48=it;;
        cstruct oldpass28=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_48;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_10,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Apply*/:
        case 2/*Bind*/:
        case 3/*CAct*/:
        case 4/*Cut*/:
        case 5/*Grammar*/:
        case 6/*Local*/:
        case 7/*Lookahead*/:
        case 8/*Many*/:
        case 9/*Memo*/:
        case 10/*Or*/:
        case 11/*Pass*/:
        case 12/*Rule*/:
        case 13/*Seq*/:
        case 14/*Stop*/:
        case 15/*Switch_Char*/:
        case 16/*Switch_Clas*/:
            ;
            it=rb_funcall(self,sy__label_lp__dq_a_f49c,1,bind2);
            _accept=it;;
            it=rb_funcall(self,sy__label_lp__dq_r_95b2,1,bind2);
            _reject=it;;
            it=rb_funcall(self,sy__label_lp__dq_o_c187,1,bind2);
            _oldpos=it;;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=_reject;
            _word=it;;
            it=rb_funcall(self,sy___at_faillab_1610,1,bind2);
            _rwo=it;;
            bind_aset(bind2,1,_word);
            it=rb_funcall(self,sy___at_faillab_e643,1,bind2);
            _word=bind_aget(bind2,1);;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_trans,0);
            FAILTEST(pass28);
            _t=it;;
            _x=it;;
            bind_aset(bind2,1,_rwo);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy___at_faillab_e174,1,bind2);
            _rwo=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            bind_aset(bind2,1,_oldpos);
            bind_aset(bind2,2,_t);
            bind_aset(bind2,3,_accept);
            bind_aset(bind2,4,_reject);
            it=rb_funcall(self,sy___dq_int_sp__sh__le_b_0a35,1,bind2);
            _oldpos=bind_aget(bind2,1);;
            _t=bind_aget(bind2,2);;
            _accept=bind_aget(bind2,3);;
            _reject=bind_aget(bind2,4);;
            _autovar_49=it;;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass28;
            break;
        case 17/*Object*/:
            ;
            it=rb_funcall(self,sy__label_lp__dq_a_f49c,1,bind2);
            it=rb_funcall(self,sy__label_lp__dq_r_95b2,1,bind2);
            _reject=it;;
            it=rb_funcall(self,sy__label_lp__dq_o_c187,1,bind2);
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=_reject;
            _word=it;;
            it=rb_funcall(self,sy___at_faillab_1610,1,bind2);
            bind_aset(bind2,1,_word);
            it=rb_funcall(self,sy___at_faillab_e643,1,bind2);
            _word=bind_aget(bind2,1);;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            goto pass28;
            break;
        }
        goto success28;
pass28:
        *ptr=oldpass28;
        goto fail;
success28:
        *ptr=oldpass28;
        it=_autovar_49;
        __result=it;;
        break;
    case 8/*Many*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_50=it;;
        it=_autovar_50;
        _autovar_51=it;;
        int oldpos9=ptr->pos;
        int cut9=0;
alt9_1:
        ;
        it=_autovar_51;
        _autovar_52=it;;
        cstruct oldpass29=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_52;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_11,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Or*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_53=it;;
            cstruct oldpass30=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_53;
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
            switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_12,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Apply*/:
                ;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                _autovar_54=it;;
                cstruct oldpass31=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ptr->src=_autovar_54;
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
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=AmethystCore_anything(self );
                FAILTEST(pass31);
                _autovar_55=it;;
                cstruct oldpass32=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ptr->src=_autovar_55;
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
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=rb_funcall(self,sy_spaces,0);
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '`':
                    ;
                case 'b' ... UC(255):
                    ;
                    goto pass32;
                    break;
                case 'a' ... 'a':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                    else goto pass32;
                    break;
                }
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=Qnil;
                if (ptr->pos<ptr->len) goto pass32;
                goto success32;
pass32:
                *ptr=oldpass32;
                goto pass31;
success32:
                *ptr=oldpass32;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=Qnil;
                if (ptr->pos<ptr->len) goto pass31;
                goto success31;
pass31:
                *ptr=oldpass31;
                goto pass30;
success31:
                *ptr=oldpass31;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_13,rb_obj_class(ame_curobj2(ptr))))) {
                case 0/*Stop*/:
                    ;
                    it=ptr->ary[ptr->pos];            ;
                    ptr->pos++;
                    _autovar_56=it;;
                    break;
                case 1/*Object*/:
                    ;
                    goto pass30;
                    break;
                }
                cstruct oldpass33=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ptr->src=_autovar_56;
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
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=Qnil;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=Qnil;
                if (ptr->pos<ptr->len) goto pass33;
                goto success33;
pass33:
                *ptr=oldpass33;
                goto pass30;
success33:
                *ptr=oldpass33;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=Qnil;
                if (ptr->pos<ptr->len) goto pass30;
                break;
            case 1/*Object*/:
                ;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                goto pass30;
                break;
            }
            goto success30;
pass30:
            *ptr=oldpass30;
            goto pass29;
success30:
            *ptr=oldpass30;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass29;
            break;
        case 1/*Object*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            goto pass29;
            break;
        }
        goto success29;
pass29:
        *ptr=oldpass29;
        goto alt9_2;
success29:
        *ptr=oldpass29;
        it=rb_obj_clone(s_ptr_mi__gt_pos_db4c);
        __result=it;;

        ;
        goto accept9;
alt9_2:
        ptr->pos=oldpos9;
        it=_autovar_51;
        _autovar_57=it;;
        cstruct oldpass34=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_57;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_14,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Apply*/:
        case 2/*Bind*/:
        case 3/*CAct*/:
        case 4/*Cut*/:
        case 5/*Grammar*/:
        case 6/*Local*/:
        case 7/*Lookahead*/:
        case 8/*Many*/:
        case 9/*Memo*/:
        case 10/*Or*/:
        case 11/*Pass*/:
        case 12/*Rule*/:
        case 13/*Seq*/:
        case 14/*Stop*/:
        case 15/*Switch_Char*/:
        case 16/*Switch_Clas*/:
            ;
            it=rb_funcall(self,sy___at_stops_e2b4,1,bind2);
            _oldstops=it;;
            it=rb_funcall(self,sy___at_stoplab_2ba4,1,bind2);
            _oldstoplabel=it;;
            it=rb_funcall(self,sy___at_stops_eq_n_588d,1,bind2);
            it=rb_funcall(self,sy___at_stoplab_a14e,1,bind2);
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_trans,0);
            FAILTEST(pass34);
            _t=it;;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_t);
            bind_aset(bind2,3,_oldstops);
            bind_aset(bind2,4,_oldstoplabel);
            it=rb_funcall(self,sy__bind_lb_1_rb__eq__7d1a,1,bind2);
            _s=bind_aget(bind2,1);;
            _t=bind_aget(bind2,2);;
            _oldstops=bind_aget(bind2,3);;
            _oldstoplabel=bind_aget(bind2,4);;
            _autovar_58=it;;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass34;
            break;
        case 17/*Object*/:
            ;
            it=rb_funcall(self,sy___at_stops_e2b4,1,bind2);
            it=rb_funcall(self,sy___at_stoplab_2ba4,1,bind2);
            it=rb_funcall(self,sy___at_stops_eq_n_588d,1,bind2);
            it=rb_funcall(self,sy___at_stoplab_a14e,1,bind2);
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            goto pass34;
            break;
        }
        goto success34;
pass34:
        *ptr=oldpass34;
        goto alt9_3;
success34:
        *ptr=oldpass34;
        it=_autovar_58;
        __result=it;;

        ;
        goto accept9;
alt9_3:
        ptr->pos=oldpos9;
        goto fail;
accept9:
        ;
        break;
    case 9/*Memo*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_59=it;;
        int oldpos10=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=_autovar_59;
        _autovar_60=it;;
        cstruct oldpass35=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_60;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_obj_clone(s_memo_fai_3620);
        it=rb_funcall(self,sy___at_faillab_1610,1,bind2);
        _rwo=it;;
        it=rb_obj_clone(s_memo_fai_3620);
        it=rb_obj_clone(s_memo_fai_3620);
        _word=it;;
        bind_aset(bind2,1,_word);
        it=rb_funcall(self,sy___at_faillab_e643,1,bind2);
        _word=bind_aget(bind2,1);;
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_15,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Apply*/:
        case 2/*Bind*/:
        case 3/*CAct*/:
        case 4/*Cut*/:
        case 5/*Grammar*/:
        case 6/*Local*/:
        case 7/*Lookahead*/:
        case 8/*Many*/:
        case 9/*Memo*/:
        case 10/*Or*/:
        case 11/*Pass*/:
        case 12/*Rule*/:
        case 13/*Seq*/:
        case 14/*Stop*/:
        case 15/*Switch_Char*/:
        case 16/*Switch_Clas*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_trans,0);
            FAILTEST(pass35);
            _x=it;;
            break;
        case 17/*Object*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            goto pass35;
            break;
        }
        bind_aset(bind2,1,_rwo);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy___at_faillab_e174,1,bind2);
        _rwo=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result_2=it;;
        it=__result_2;
        _t=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass35;
        goto success35;
pass35:
        *ptr=oldpass35;
        goto alt10_2;
success35:
        *ptr=oldpass35;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_autovar);
        bind_aset(bind2,3,_t);
        it=rb_funcall(self,sy__bind_lb_1_rb__eq__2db7,1,bind2);
        _s=bind_aget(bind2,1);;
        _autovar=bind_aget(bind2,2);;
        _t=bind_aget(bind2,3);;
        __result=it;;

        ;
        goto accept10;
alt10_2:
        ptr->pos=oldpos10;
        it=_autovar_59;
        _autovar_61=it;;
        cstruct oldpass36=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_61;
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
        int stop6=0;
        while(!stop6) {
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            FAILTEST(alt11_2);
            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            stop6=1;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            goto pass36;
accept11:
            ;
        }
        it=rb_funcall(self,sy__raise_sp__dq_T_0ab1,1,bind2);
        _autovar_62=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass36;
        goto success36;
pass36:
        *ptr=oldpass36;
        goto alt10_3;
success36:
        *ptr=oldpass36;
        it=_autovar_62;
        __result=it;;

        ;
        goto accept10;
alt10_3:
        ptr->pos=oldpos10;
        goto fail;
accept10:
        ;
        break;
    case 10/*Memo*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_61=it;;
        cstruct oldpass37=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_61;
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
        int stop7=0;
        while(!stop7) {
            int oldpos12=ptr->pos;
            int cut12=0;
alt12_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            FAILTEST(alt12_2);
            ;
            goto accept12;
alt12_2:
            ptr->pos=oldpos12;
            stop7=1;
            ;
            goto accept12;
alt12_3:
            ptr->pos=oldpos12;
            goto pass37;
accept12:
            ;
        }
        it=rb_funcall(self,sy__raise_sp__dq_T_0ab1,1,bind2);
        _autovar_62=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass37;
        goto success37;
pass37:
        *ptr=oldpass37;
        goto fail;
success37:
        *ptr=oldpass37;
        it=_autovar_62;
        __result=it;;
        break;
    case 11/*Memo*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_60=it;;
        cstruct oldpass38=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_60;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_obj_clone(s_memo_fai_3620);
        it=rb_funcall(self,sy___at_faillab_1610,1,bind2);
        _rwo=it;;
        it=rb_obj_clone(s_memo_fai_3620);
        it=rb_obj_clone(s_memo_fai_3620);
        _word=it;;
        bind_aset(bind2,1,_word);
        it=rb_funcall(self,sy___at_faillab_e643,1,bind2);
        _word=bind_aget(bind2,1);;
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_16,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Apply*/:
        case 2/*Bind*/:
        case 3/*CAct*/:
        case 4/*Cut*/:
        case 5/*Grammar*/:
        case 6/*Local*/:
        case 7/*Lookahead*/:
        case 8/*Many*/:
        case 9/*Memo*/:
        case 10/*Or*/:
        case 11/*Pass*/:
        case 12/*Rule*/:
        case 13/*Seq*/:
        case 14/*Stop*/:
        case 15/*Switch_Char*/:
        case 16/*Switch_Clas*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_trans,0);
            FAILTEST(pass38);
            _x=it;;
            break;
        case 17/*Object*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            goto pass38;
            break;
        }
        bind_aset(bind2,1,_rwo);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy___at_faillab_e174,1,bind2);
        _rwo=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result_2=it;;
        it=__result_2;
        _t=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass38;
        goto success38;
pass38:
        *ptr=oldpass38;
        goto fail;
success38:
        *ptr=oldpass38;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_autovar);
        bind_aset(bind2,3,_t);
        it=rb_funcall(self,sy__bind_lb_1_rb__eq__2db7,1,bind2);
        _s=bind_aget(bind2,1);;
        _autovar=bind_aget(bind2,2);;
        _t=bind_aget(bind2,3);;
        __result=it;;
        break;
    case 12/*Or*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_63=it;;
        cstruct oldpass39=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_63;
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
        it=rb_funcall(self,sy__label_lp__dq_a_f49c,1,bind2);
        _accept=it;;
        it=rb_funcall(self,sy__label_lp__dq_o_c187,1,bind2);
        _oldpos=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_obj_clone(s_alt_3482);
        arg0=it;
        it=rb_funcall(self,sy_label,1,arg0);
        FAILTEST(pass39);
        _alt=it;;
        it=i_1;
        _altno=it;;
        it=rb_funcall(self,sy___at_cutlabe_7393,1,bind2);
        _oldcutlabel=it;;
        it=rb_funcall(self,sy___at_cuts_7bbc,1,bind2);
        _oldcuts=it;;
        it=rb_funcall(self,sy___at_cuts_eq_ni_f875,1,bind2);
        bind_aset(bind2,1,_oldpos);
        bind_aset(bind2,2,_alt);
        bind_aset(bind2,3,_altno);
        it=rb_funcall(self,sy___dq_int_sp__sh__le_b_0b60,1,bind2);
        _oldpos=bind_aget(bind2,1);;
        _alt=bind_aget(bind2,2);;
        _altno=bind_aget(bind2,3);;
        _s=it;;
        it=rb_ary_new3(0);
        int stop8=0;
        while(!stop8) {
            switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_17,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Act*/:
            case 1/*Apply*/:
            case 2/*Bind*/:
            case 3/*CAct*/:
            case 4/*Cut*/:
            case 5/*Grammar*/:
            case 6/*Local*/:
            case 7/*Lookahead*/:
            case 8/*Many*/:
            case 9/*Memo*/:
            case 10/*Or*/:
            case 11/*Pass*/:
            case 12/*Rule*/:
            case 13/*Seq*/:
            case 14/*Stop*/:
            case 15/*Switch_Char*/:
            case 16/*Switch_Clas*/:
                ;
                int oldpos13=ptr->pos;
                int cut13=0;
alt13_1:
                ;
                int oldpos14=ptr->pos;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=AmethystCore_anything(self );
                FAILTEST(reject1);
                x=1;
                goto accept14;
reject1:
                x=0;
accept14:
                it=Qnil;
                ptr->pos=oldpos14;
                if (x==0) goto alt13_2;
                bind_aset(bind2,1,_altno);
                it=rb_funcall(self,sy__bind_lb_1_rb__pl__891b,1,bind2);
                _altno=bind_aget(bind2,1);;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                bind_aset(bind2,1,_alt);
                bind_aset(bind2,2,_altno);
                it=rb_funcall(self,sy___dq__sh__le_bind_lb__9630,1,bind2);
                _alt=bind_aget(bind2,1);;
                _altno=bind_aget(bind2,2);;
                _word=it;;
                it=rb_funcall(self,sy___at_faillab_1610,1,bind2);
                _rwo=it;;
                bind_aset(bind2,1,_word);
                it=rb_funcall(self,sy___at_faillab_e643,1,bind2);
                _word=bind_aget(bind2,1);;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=rb_funcall(self,sy_trans,0);
                FAILTEST(alt13_2);
                __result=it;;
                _x=it;;
                bind_aset(bind2,1,_rwo);
                bind_aset(bind2,2,_x);
                it=rb_funcall(self,sy___at_faillab_e174,1,bind2);
                _rwo=bind_aget(bind2,1);;
                _x=bind_aget(bind2,2);;
                __result_2=it;;
                it=__result_2;
                _t=it;;
                bind_aset(bind2,1,_s);
                bind_aset(bind2,2,_t);
                bind_aset(bind2,3,_accept);
                it=rb_funcall(self,sy__bind_lb_1_rb__pl__4da1,1,bind2);
                _s=bind_aget(bind2,1);;
                _t=bind_aget(bind2,2);;
                _accept=bind_aget(bind2,3);;
                bind_aset(bind2,1,_s);
                bind_aset(bind2,2,_alt);
                bind_aset(bind2,3,_altno);
                bind_aset(bind2,4,_oldpos);
                it=rb_funcall(self,sy__bind_lb_1_rb__pl__22c0,1,bind2);
                _s=bind_aget(bind2,1);;
                _alt=bind_aget(bind2,2);;
                _altno=bind_aget(bind2,3);;
                _oldpos=bind_aget(bind2,4);;
                ;
                goto accept13;
alt13_2:
                ptr->pos=oldpos13;
                stop8=1;
                ;
                goto accept13;
alt13_3:
                ptr->pos=oldpos13;
                goto pass39;
accept13:
                ;
                break;
            case 17/*Object*/:
                ;
                int oldpos15=ptr->pos;
                int cut14=0;
alt14_1:
                ;
                int oldpos16=ptr->pos;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=AmethystCore_anything(self );
                FAILTEST(reject2);
                x=1;
                goto accept16;
reject2:
                x=0;
accept16:
                it=Qnil;
                ptr->pos=oldpos16;
                if (x==0) goto alt14_2;
                bind_aset(bind2,1,_altno);
                it=rb_funcall(self,sy__bind_lb_1_rb__pl__891b,1,bind2);
                _altno=bind_aget(bind2,1);;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                bind_aset(bind2,1,_alt);
                bind_aset(bind2,2,_altno);
                it=rb_funcall(self,sy___dq__sh__le_bind_lb__9630,1,bind2);
                _alt=bind_aget(bind2,1);;
                _altno=bind_aget(bind2,2);;
                _word=it;;
                it=rb_funcall(self,sy___at_faillab_1610,1,bind2);
                bind_aset(bind2,1,_word);
                it=rb_funcall(self,sy___at_faillab_e643,1,bind2);
                _word=bind_aget(bind2,1);;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                goto alt14_2;
                ;
                goto accept15;
alt14_2:
                ptr->pos=oldpos15;
                stop8=1;
                ;
                goto accept15;
alt14_3:
                ptr->pos=oldpos15;
                goto pass39;
accept15:
                ;
                break;
            }
        }
        bind_aset(bind2,1,_oldcutlabel);
        bind_aset(bind2,2,_oldcuts);
        bind_aset(bind2,3,_s);
        bind_aset(bind2,4,_accept);
        it=rb_funcall(self,sy___at_cutlabe_d8d6,1,bind2);
        _oldcutlabel=bind_aget(bind2,1);;
        _oldcuts=bind_aget(bind2,2);;
        _s=bind_aget(bind2,3);;
        _accept=bind_aget(bind2,4);;
        _autovar_64=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass39;
        goto success39;
pass39:
        *ptr=oldpass39;
        goto fail;
success39:
        *ptr=oldpass39;
        it=_autovar_64;
        __result=it;;
        break;
    case 13/*Pass*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_65=it;;
        cstruct oldpass40=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_65;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_obj_clone(s_pass_1a1d);
        arg0=it;
        it=rb_funcall(self,sy_label,1,arg0);
        FAILTEST(pass40);
        _pass=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_obj_clone(s_oldpass_6559);
        arg0=it;
        it=rb_funcall(self,sy_label,1,arg0);
        FAILTEST(pass40);
        _oldpass=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_obj_clone(s_success_260c);
        arg0=it;
        it=rb_funcall(self,sy_label,1,arg0);
        FAILTEST(pass40);
        _success=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=_pass;
        _word=it;;
        it=rb_funcall(self,sy___at_faillab_1610,1,bind2);
        _rwo=it;;
        bind_aset(bind2,1,_word);
        it=rb_funcall(self,sy___at_faillab_e643,1,bind2);
        _word=bind_aget(bind2,1);;
        it=rb_funcall(self,sy__src_dot_to_5e99,1,bind2);
        _autovar_66=it;;
        cstruct oldpass41=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_66;
        ptr->len=1;
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_18,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Apply*/:
        case 2/*Bind*/:
        case 3/*CAct*/:
        case 4/*Cut*/:
        case 5/*Grammar*/:
        case 6/*Local*/:
        case 7/*Lookahead*/:
        case 8/*Many*/:
        case 9/*Memo*/:
        case 10/*Or*/:
        case 11/*Pass*/:
        case 12/*Rule*/:
        case 13/*Seq*/:
        case 14/*Stop*/:
        case 15/*Switch_Char*/:
        case 16/*Switch_Clas*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_trans,0);
            FAILTEST(pass41);
            _autovar_67=it;;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass41;
            break;
        case 17/*Object*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            goto pass41;
            break;
        }
        goto success41;
pass41:
        *ptr=oldpass41;
        goto pass40;
success41:
        *ptr=oldpass41;
        it=_autovar_67;
        _to=it;;
        _x=it;;
        bind_aset(bind2,1,_rwo);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy___at_faillab_e174,1,bind2);
        _rwo=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        bind_aset(bind2,1,_oldpass);
        bind_aset(bind2,2,_to);
        bind_aset(bind2,3,_success);
        bind_aset(bind2,4,_pass);
        it=rb_funcall(self,sy___dq_cstruct_ff45,1,bind2);
        _oldpass=bind_aget(bind2,1);;
        _to=bind_aget(bind2,2);;
        _success=bind_aget(bind2,3);;
        _pass=bind_aget(bind2,4);;
        _autovar_68=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass40;
        goto success40;
pass40:
        *ptr=oldpass40;
        goto fail;
success40:
        *ptr=oldpass40;
        it=_autovar_68;
        __result=it;;
        break;
    case 14/*Rule*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_69=it;;
        cstruct oldpass42=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_69;
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
        it=rb_funcall(self,sy__src_dot_name_80f3,1,bind2);
        _name=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_name);
        it=rb_funcall(self,sy__bind_lb_1_rb__lb__ff72,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _name=bind_aget(bind2,2);;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy___lp_Current_c458,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_70=it;;
        cstruct oldpass43=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_70;
        ptr->len=1;
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_19,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Apply*/:
        case 2/*Bind*/:
        case 3/*CAct*/:
        case 4/*Cut*/:
        case 5/*Grammar*/:
        case 6/*Local*/:
        case 7/*Lookahead*/:
        case 8/*Many*/:
        case 9/*Memo*/:
        case 10/*Or*/:
        case 11/*Pass*/:
        case 12/*Rule*/:
        case 13/*Seq*/:
        case 14/*Stop*/:
        case 15/*Switch_Char*/:
        case 16/*Switch_Clas*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_trans,0);
            FAILTEST(pass43);
            _autovar_71=it;;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass43;
            break;
        case 17/*Object*/:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            goto pass43;
            break;
        }
        goto success43;
pass43:
        *ptr=oldpass43;
        goto pass42;
success43:
        *ptr=oldpass43;
        it=_autovar_71;
        _body=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_name);
        bind_aset(bind2,3,_s);
        bind_aset(bind2,4,_body);
        it=rb_funcall(self,sy__h_eq__dq_VALUE_037c,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _name=bind_aget(bind2,2);;
        _s=bind_aget(bind2,3);;
        _body=bind_aget(bind2,4);;
        _autovar_72=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass42;
        goto success42;
pass42:
        *ptr=oldpass42;
        goto fail;
success42:
        *ptr=oldpass42;
        it=_autovar_72;
        __result=it;;
        break;
    case 15/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_73=it;;
        cstruct oldpass44=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_73;
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
        _autovar_74=it;;
        int stop9=0;
        while(!stop9) {
            switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_20,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Act*/:
            case 1/*Apply*/:
            case 2/*Bind*/:
            case 3/*CAct*/:
            case 4/*Cut*/:
            case 5/*Grammar*/:
            case 6/*Local*/:
            case 7/*Lookahead*/:
            case 8/*Many*/:
            case 9/*Memo*/:
            case 10/*Or*/:
            case 11/*Pass*/:
            case 12/*Rule*/:
            case 13/*Seq*/:
            case 14/*Stop*/:
            case 15/*Switch_Char*/:
            case 16/*Switch_Clas*/:
                ;
                int oldpos17=ptr->pos;
                int cut15=0;
alt15_1:
                ;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=rb_funcall(self,sy_trans,0);
                FAILTEST(alt15_2);
                _autovar_75=it;;
                bind_aset(bind2,1,_autovar_74);
                bind_aset(bind2,2,_autovar_75);
                it=rb_funcall(self,sy___append_lp__d113,1,bind2);
                _autovar_74=bind_aget(bind2,1);;
                _autovar_75=bind_aget(bind2,2);;
                ;
                goto accept17;
alt15_2:
                ptr->pos=oldpos17;
                stop9=1;
                ;
                goto accept17;
alt15_3:
                ptr->pos=oldpos17;
                goto pass44;
accept17:
                ;
                break;
            case 17/*Object*/:
                ;
                int oldpos18=ptr->pos;
                int cut16=0;
alt16_1:
                ;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                goto alt16_2;
                ;
                goto accept18;
alt16_2:
                ptr->pos=oldpos18;
                stop9=1;
                ;
                goto accept18;
alt16_3:
                ptr->pos=oldpos18;
                goto pass44;
accept18:
                ;
                break;
            }
        }
        it=_autovar_74;
        _t=it;;
        bind_aset(bind2,1,_t);
        it=rb_funcall(self,sy__bind_lb_1_rb__ti__cfcb,1,bind2);
        _t=bind_aget(bind2,1);;
        _autovar_76=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass44;
        goto success44;
pass44:
        *ptr=oldpass44;
        goto fail;
success44:
        *ptr=oldpass44;
        it=_autovar_76;
        __result=it;;
        break;
    case 16/*Stop*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_77=it;;
        cstruct oldpass45=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_77;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass45;
        goto success45;
pass45:
        *ptr=oldpass45;
        goto fail;
success45:
        *ptr=oldpass45;
        it=rb_funcall(self,sy___at_stops_eq_t_c6ab,1,bind2);
        __result=it;;
        break;
    case 17/*Switch_Char*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_78=it;;
        cstruct oldpass46=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_78;
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
        it=rb_obj_clone(s_switch_lp__lp__a839);
        _s=it;;
        it=rb_ary_new3(0);
        int stop10=0;
        while(!stop10) {
            int oldpos19=ptr->pos;
            int cut17=0;
alt17_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            FAILTEST(alt17_2);
            _autovar_79=it;;
            cstruct oldpass47=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_79;
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
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            FAILTEST(pass47);
            _c=it;;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_21,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Act*/:
            case 1/*Apply*/:
            case 2/*Bind*/:
            case 3/*CAct*/:
            case 4/*Cut*/:
            case 5/*Grammar*/:
            case 6/*Local*/:
            case 7/*Lookahead*/:
            case 8/*Many*/:
            case 9/*Memo*/:
            case 10/*Or*/:
            case 11/*Pass*/:
            case 12/*Rule*/:
            case 13/*Seq*/:
            case 14/*Stop*/:
            case 15/*Switch_Char*/:
            case 16/*Switch_Clas*/:
                ;
                it=rb_funcall(self,sy_trans,0);
                FAILTEST(pass47);
                _t=it;;
                break;
            case 17/*Object*/:
                ;
                goto pass47;
                break;
            }
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass47;
            goto success47;
pass47:
            *ptr=oldpass47;
            goto alt17_2;
success47:
            *ptr=oldpass47;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_c);
            bind_aset(bind2,3,_t);
            it=rb_funcall(self,sy__bind_lb_1_rb__pl__252c,1,bind2);
            _s=bind_aget(bind2,1);;
            _c=bind_aget(bind2,2);;
            _t=bind_aget(bind2,3);;
            ;
            goto accept19;
alt17_2:
            ptr->pos=oldpos19;
            stop10=1;
            ;
            goto accept19;
alt17_3:
            ptr->pos=oldpos19;
            goto pass46;
accept19:
            ;
        }
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__bind_lb_1_rb__pl__4db9,1,bind2);
        _s=bind_aget(bind2,1);;
        _autovar_80=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass46;
        goto success46;
pass46:
        *ptr=oldpass46;
        goto fail;
success46:
        *ptr=oldpass46;
        it=_autovar_80;
        __result=it;;
        break;
    case 18/*Switch_Clas*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_81=it;;
        cstruct oldpass48=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_81;
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
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___dq_switchh_698e,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _sh=it;;
        it=i_0;
        _ii=it;;
        it=rb_obj_clone(s__d41d);
        _init=it;;
        bind_aset(bind2,1,_sh);
        it=rb_funcall(self,sy___at_header_lt__92e2,1,bind2);
        _sh=bind_aget(bind2,1);;
        bind_aset(bind2,1,_sh);
        it=rb_funcall(self,sy___dq_switch_lp__f722,1,bind2);
        _sh=bind_aget(bind2,1);;
        _s=it;;
        it=rb_ary_new3(0);
        int stop11=0;
        while(!stop11) {
            int oldpos20=ptr->pos;
            int cut18=0;
alt18_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            FAILTEST(alt18_2);
            _autovar_82=it;;
            cstruct oldpass49=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_82;
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
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            FAILTEST(pass49);
            _c=it;;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_22,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Act*/:
            case 1/*Apply*/:
            case 2/*Bind*/:
            case 3/*CAct*/:
            case 4/*Cut*/:
            case 5/*Grammar*/:
            case 6/*Local*/:
            case 7/*Lookahead*/:
            case 8/*Many*/:
            case 9/*Memo*/:
            case 10/*Or*/:
            case 11/*Pass*/:
            case 12/*Rule*/:
            case 13/*Seq*/:
            case 14/*Stop*/:
            case 15/*Switch_Char*/:
            case 16/*Switch_Clas*/:
                ;
                it=rb_funcall(self,sy_trans,0);
                FAILTEST(pass49);
                _t=it;;
                break;
            case 17/*Object*/:
                ;
                goto pass49;
                break;
            }
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass49;
            goto success49;
pass49:
            *ptr=oldpass49;
            goto alt18_2;
success49:
            *ptr=oldpass49;
            bind_aset(bind2,1,_c);
            bind_aset(bind2,2,_init);
            bind_aset(bind2,3,_ii);
            bind_aset(bind2,4,_s);
            it=rb_funcall(self,sy__bind_lb_1_rb__dot__1364,1,bind2);
            _c=bind_aget(bind2,1);;
            _init=bind_aget(bind2,2);;
            _ii=bind_aget(bind2,3);;
            _s=bind_aget(bind2,4);;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_t);
            it=rb_funcall(self,sy__bind_lb_1_rb__pl__1dcb,1,bind2);
            _s=bind_aget(bind2,1);;
            _t=bind_aget(bind2,2);;
            ;
            goto accept20;
alt18_2:
            ptr->pos=oldpos20;
            stop11=1;
            ;
            goto accept20;
alt18_3:
            ptr->pos=oldpos20;
            goto pass48;
accept20:
            ;
        }
        bind_aset(bind2,1,_sh);
        bind_aset(bind2,2,_init);
        it=rb_funcall(self,sy___at_init_sp__sp__lt__aac8,1,bind2);
        _sh=bind_aget(bind2,1);;
        _init=bind_aget(bind2,2);;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__bind_lb_1_rb__pl__4db9,1,bind2);
        _s=bind_aget(bind2,1);;
        _autovar_83=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass48;
        goto success48;
pass48:
        *ptr=oldpass48;
        goto fail;
success48:
        *ptr=oldpass48;
        it=_autovar_83;
        __result=it;;
        break;
    case 19/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        goto fail;
        break;
    }
    return it;
fail:
    return failobj;
}
void Init_ctranslator2_c() {
    cls_AmethystCTranslator=rb_define_class("AmethystCTranslator",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    i_0=rb_funcall(rb_str_new2("0"),rb_intern("to_i"),0);
    rb_global_variable(&i_0);
    i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);
    rb_global_variable(&i_1);
    rb_define_method(cls_AmethystCTranslator,"profile_report",profile_report_AmethystCTranslator,0);
    s__d41d=rb_str_new2("");
    rb_global_variable(&s__d41d);
    s_alt_3482=rb_str_new2("alt");
    rb_global_variable(&s_alt_3482);
    s_fail_e111=rb_str_new2("fail");
    rb_global_variable(&s_fail_e111);
    s_it_eq_Qnil=rb_str_new2("it=Qnil;");
    rb_global_variable(&s_it_eq_Qnil);
    s_it_eq_ptr_mi__gt__d2bb=rb_str_new2("it=ptr->ary[ptr->pos];            ;ptr->pos++;");
    rb_global_variable(&s_it_eq_ptr_mi__gt__d2bb);
    s_it_eq_rb_st_ee66=rb_str_new2("it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;");
    rb_global_variable(&s_it_eq_rb_st_ee66);
    s_memo_fai_3620=rb_str_new2("memo_fail");
    rb_global_variable(&s_memo_fai_3620);
    s_oldpass_6559=rb_str_new2("oldpass");
    rb_global_variable(&s_oldpass_6559);
    s_pass_1a1d=rb_str_new2("pass");
    rb_global_variable(&s_pass_1a1d);
    s_ptr_mi__gt_pos_db4c=rb_str_new2("ptr->pos=ptr->len;");
    rb_global_variable(&s_ptr_mi__gt_pos_db4c);
    s_success_260c=rb_str_new2("success");
    rb_global_variable(&s_success_260c);
    s_switch_lp__lp__a839=rb_str_new2("switch((unsigned char)*ame_curstr2(ptr)){");
    rb_global_variable(&s_switch_lp__lp__a839);
    switchhash_AmethystCTranslator_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_10);;
    switchhash_AmethystCTranslator_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_11);;
    switchhash_AmethystCTranslator_12=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_12);;
    switchhash_AmethystCTranslator_13=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Stop\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_13);;
    switchhash_AmethystCTranslator_14=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_14);;
    switchhash_AmethystCTranslator_15=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_15);;
    switchhash_AmethystCTranslator_16=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_16);;
    switchhash_AmethystCTranslator_17=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_17);;
    switchhash_AmethystCTranslator_18=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_18);;
    switchhash_AmethystCTranslator_19=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_19);;
    switchhash_AmethystCTranslator_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_1);;
    switchhash_AmethystCTranslator_20=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_20);;
    switchhash_AmethystCTranslator_21=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_21);;
    switchhash_AmethystCTranslator_22=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_22);;
    switchhash_AmethystCTranslator_23=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_23);;
    switchhash_AmethystCTranslator_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Global\nnext h[k]=3 if k<=Key\nnext h[k]=4 if k<=Lambda\nnext h[k]=5 if k<=Local\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_2);;
    switchhash_AmethystCTranslator_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_3);;
    switchhash_AmethystCTranslator_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Memo\nnext h[k]=11 if k<=Memo\nnext h[k]=12 if k<=Or\nnext h[k]=13 if k<=Pass\nnext h[k]=14 if k<=Rule\nnext h[k]=15 if k<=Seq\nnext h[k]=16 if k<=Stop\nnext h[k]=17 if k<=Switch_Char\nnext h[k]=18 if k<=Switch_Clas\nnext h[k]=19 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_4);;
    switchhash_AmethystCTranslator_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_5);;
    switchhash_AmethystCTranslator_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_6);;
    switchhash_AmethystCTranslator_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_7);;
    switchhash_AmethystCTranslator_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_8);;
    switchhash_AmethystCTranslator_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_9);;
    sy___append_lp__d113=rb_intern("__append_lp__d113");
    sy___at__contex_160a=rb_intern("__at__contex_160a");
    sy___at__contex_d6d5=rb_intern("__at__contex_d6d5");
    sy___at_bindno_eq__e294=rb_intern("__at_bindno_eq__e294");
    sy___at_binds_dot_m_4c7b=rb_intern("__at_binds_dot_m_4c7b");
    sy___at_callbac_2d11=rb_intern("__at_callbac_2d11");
    sy___at_callbac_e37c=rb_intern("__at_callbac_e37c");
    sy___at_cutlabe_7393=rb_intern("__at_cutlabe_7393");
    sy___at_cutlabe_d8d6=rb_intern("__at_cutlabe_d8d6");
    sy___at_cuts_7bbc=rb_intern("__at_cuts_7bbc");
    sy___at_cuts_eq_ni_f875=rb_intern("__at_cuts_eq_ni_f875");
    sy___at_cuts_eq_tr_13c6=rb_intern("__at_cuts_eq_tr_13c6");
    sy___at_defs_eq__lb__rb__3b51=rb_intern("__at_defs_eq__lb__rb__3b51");
    sy___at_faillab_1610=rb_intern("__at_faillab_1610");
    sy___at_faillab_8142=rb_intern("__at_faillab_8142");
    sy___at_faillab_e174=rb_intern("__at_faillab_e174");
    sy___at_faillab_e643=rb_intern("__at_faillab_e643");
    sy___at_header_eq__7aa9=rb_intern("__at_header_eq__7aa9");
    sy___at_header_lt__92e2=rb_intern("__at_header_lt__92e2");
    sy___at_init_eq__lb__rb__47da=rb_intern("__at_init_eq__lb__rb__47da");
    sy___at_init_sp__sp__lt__aac8=rb_intern("__at_init_sp__sp__lt__aac8");
    sy___at_lambdas_ecda=rb_intern("__at_lambdas_ecda");
    sy___at_stoplab_2ba4=rb_intern("__at_stoplab_2ba4");
    sy___at_stoplab_a14e=rb_intern("__at_stoplab_a14e");
    sy___at_stops_e2b4=rb_intern("__at_stops_e2b4");
    sy___at_stops_eq_n_588d=rb_intern("__at_stops_eq_n_588d");
    sy___at_stops_eq_t_c6ab=rb_intern("__at_stops_eq_t_c6ab");
    sy___dq_Amethys_2ed8=rb_intern("__dq_Amethys_2ed8");
    sy___dq_VALUE_sp_c_8bbf=rb_intern("__dq_VALUE_sp_c_8bbf");
    sy___dq__at__sh__le_bind_3d2b=rb_intern("__dq__at__sh__le_bind_3d2b");
    sy___dq__sh__le_bind_lb__3bec=rb_intern("__dq__sh__le_bind_lb__3bec");
    sy___dq__sh__le_bind_lb__8a62=rb_intern("__dq__sh__le_bind_lb__8a62");
    sy___dq__sh__le_bind_lb__9630=rb_intern("__dq__sh__le_bind_lb__9630");
    sy___dq__sh__le_bind_lb__9cfd=rb_intern("__dq__sh__le_bind_lb__9cfd");
    sy___dq__sh__le_src_dot_n_9acf=rb_intern("__dq__sh__le_src_dot_n_9acf");
    sy___dq_class_sp__sh__cf48=rb_intern("__dq_class_sp__sh__cf48");
    sy___dq_cstruct_ff45=rb_intern("__dq_cstruct_ff45");
    sy___dq_def_sp__sh__le_b_b73d=rb_intern("__dq_def_sp__sh__le_b_b73d");
    sy___dq_goto_sp__sh__le__f772=rb_intern("__dq_goto_sp__sh__le__f772");
    sy___dq_if_lp_ptr_mi__033b=rb_intern("__dq_if_lp_ptr_mi__033b");
    sy___dq_if_sp__lp__sh__le_a_0233=rb_intern("__dq_if_sp__lp__sh__le_a_0233");
    sy___dq_int_sp__sh__le_b_0a35=rb_intern("__dq_int_sp__sh__le_b_0a35");
    sy___dq_int_sp__sh__le_b_0b60=rb_intern("__dq_int_sp__sh__le_b_0b60");
    sy___dq_it_eq_Qnil_8464=rb_intern("__dq_it_eq_Qnil_8464");
    sy___dq_it_eq__sh__le_bg_281f=rb_intern("__dq_it_eq__sh__le_bg_281f");
    sy___dq_switch_lp__f722=rb_intern("__dq_switch_lp__f722");
    sy___dq_switchh_698e=rb_intern("__dq_switchh_698e");
    sy___lb_bind_lb_1_rb__8fa4=rb_intern("__lb_bind_lb_1_rb__8fa4");
    sy___lp_Current_c458=rb_intern("__lp_Current_c458");
    sy___lp_bind_lb_1_rb__a948=rb_intern("__lp_bind_lb_1_rb__a948");
    sy___lp_bind_lb_1_rb__d1fd=rb_intern("__lp_bind_lb_1_rb__d1fd");
    sy__addcallb_0461=rb_intern("_addcallb_0461");
    sy__addcallb_2cf7=rb_intern("_addcallb_2cf7");
    sy__ar_eq__ti_src_dot__efea=rb_intern("_ar_eq__ti_src_dot__efea");
    sy__bind_lb_1_rb_=rb_intern("_bind_lb_1_rb_");
    sy__bind_lb_1_rb__dot__1364=rb_intern("_bind_lb_1_rb__dot__1364");
    sy__bind_lb_1_rb__eq__2db7=rb_intern("_bind_lb_1_rb__eq__2db7");
    sy__bind_lb_1_rb__eq__7d1a=rb_intern("_bind_lb_1_rb__eq__7d1a");
    sy__bind_lb_1_rb__lb__230a=rb_intern("_bind_lb_1_rb__lb__230a");
    sy__bind_lb_1_rb__lb__ff72=rb_intern("_bind_lb_1_rb__lb__ff72");
    sy__bind_lb_1_rb__lt__8b76=rb_intern("_bind_lb_1_rb__lt__8b76");
    sy__bind_lb_1_rb__lt__98f3=rb_intern("_bind_lb_1_rb__lt__98f3");
    sy__bind_lb_1_rb__lt__acb7=rb_intern("_bind_lb_1_rb__lt__acb7");
    sy__bind_lb_1_rb__pl__1b5e=rb_intern("_bind_lb_1_rb__pl__1b5e");
    sy__bind_lb_1_rb__pl__1dcb=rb_intern("_bind_lb_1_rb__pl__1dcb");
    sy__bind_lb_1_rb__pl__22c0=rb_intern("_bind_lb_1_rb__pl__22c0");
    sy__bind_lb_1_rb__pl__252c=rb_intern("_bind_lb_1_rb__pl__252c");
    sy__bind_lb_1_rb__pl__4da1=rb_intern("_bind_lb_1_rb__pl__4da1");
    sy__bind_lb_1_rb__pl__4db9=rb_intern("_bind_lb_1_rb__pl__4db9");
    sy__bind_lb_1_rb__pl__891b=rb_intern("_bind_lb_1_rb__pl__891b");
    sy__bind_lb_1_rb__pl__916b=rb_intern("_bind_lb_1_rb__pl__916b");
    sy__bind_lb_1_rb__ti__cfcb=rb_intern("_bind_lb_1_rb__ti__cfcb");
    sy__h_eq__dq_VALUE_037c=rb_intern("_h_eq__dq_VALUE_037c");
    sy__h_eq__dq_VALUE_481e=rb_intern("_h_eq__dq_VALUE_481e");
    sy__label_lp__dq_a_f49c=rb_intern("_label_lp__dq_a_f49c");
    sy__label_lp__dq_o_c187=rb_intern("_label_lp__dq_o_c187");
    sy__label_lp__dq_r_95b2=rb_intern("_label_lp__dq_r_95b2");
    sy__r_eq__dq__sp__sh__le_bi_10a8=rb_intern("_r_eq__dq__sp__sh__le_bi_10a8");
    sy__raise_sp__dq_T_0ab1=rb_intern("_raise_sp__dq_T_0ab1");
    sy__rbbget_lp_s_68a8=rb_intern("_rbbget_lp_s_68a8");
    sy__src_25d9=rb_intern("_src_25d9");
    sy__src_dot_name_80f3=rb_intern("_src_dot_name_80f3");
    sy__src_dot_rule_5acf=rb_intern("_src_dot_rule_5acf");
    sy__src_dot_to_5e99=rb_intern("_src_dot_to_5e99");
    sy_addlambda=rb_intern("addlambda");
    sy_apply=rb_intern("apply");
    sy_label=rb_intern("label");
    sy_rbcode=rb_intern("rbcode");
    sy_rbtrans2=rb_intern("rbtrans2");
    sy_rbtrans=rb_intern("rbtrans");
    sy_spaces=rb_intern("spaces");
    sy_trans=rb_intern("trans");
    rb_define_method(cls_AmethystCTranslator,"addcallback",AmethystCTranslator_addcallback,1);
    rb_define_method(cls_AmethystCTranslator,"addlambda",AmethystCTranslator_addlambda,0);
    rb_define_method(cls_AmethystCTranslator,"itrans",AmethystCTranslator_itrans,0);
    rb_define_method(cls_AmethystCTranslator,"rbcode",AmethystCTranslator_rbcode,0);
    rb_define_method(cls_AmethystCTranslator,"rbtrans",AmethystCTranslator_rbtrans,0);
    rb_define_method(cls_AmethystCTranslator,"rbtrans2",AmethystCTranslator_rbtrans2,0);
    rb_define_method(cls_AmethystCTranslator,"rw",AmethystCTranslator_rw,2);
    rb_define_method(cls_AmethystCTranslator,"trans",AmethystCTranslator_trans,0);
    rb_eval_string("testversionctranslator2('aa835d4359a1d810b6dcc3baf923bfba')");
}
