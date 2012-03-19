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
VALUE Amethyst_spaces(VALUE self );
VALUE switchhash_AmethystCTranslator_10;
VALUE switchhash_AmethystCTranslator_1;
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
static VALUE sy_AmethystCTranslator__at__contex_5f56;
static VALUE sy_AmethystCTranslator__at__contex_cdb3;
static VALUE sy_AmethystCTranslator__at__contex_d6d5;
static VALUE sy_AmethystCTranslator__at_bindno_eq__e294;
static VALUE sy_AmethystCTranslator__at_binds_dot_m_9a36;
static VALUE sy_AmethystCTranslator__at_callbac_2d11;
static VALUE sy_AmethystCTranslator__at_callbac_e37c;
static VALUE sy_AmethystCTranslator__at_cutlabe_7393;
static VALUE sy_AmethystCTranslator__at_cutlabe_7ebc;
static VALUE sy_AmethystCTranslator__at_cuts_7bbc;
static VALUE sy_AmethystCTranslator__at_cuts_eq_ni_f875;
static VALUE sy_AmethystCTranslator__at_cuts_eq_tr_13c6;
static VALUE sy_AmethystCTranslator__at_defs_eq__lb__rb__3b51;
static VALUE sy_AmethystCTranslator__at_faillab_1610;
static VALUE sy_AmethystCTranslator__at_faillab_8142;
static VALUE sy_AmethystCTranslator__at_faillab_e174;
static VALUE sy_AmethystCTranslator__at_faillab_e643;
static VALUE sy_AmethystCTranslator__at_header_eq__7aa9;
static VALUE sy_AmethystCTranslator__at_header_lt__92e2;
static VALUE sy_AmethystCTranslator__at_init_eq__lb__rb__47da;
static VALUE sy_AmethystCTranslator__at_init_sp__sp__lt__aac8;
static VALUE sy_AmethystCTranslator__at_lambdas_ecda;
static VALUE sy_AmethystCTranslator__at_stoplab_2ba4;
static VALUE sy_AmethystCTranslator__at_stoplab_a14e;
static VALUE sy_AmethystCTranslator__at_stops_e2b4;
static VALUE sy_AmethystCTranslator__at_stops_eq_n_588d;
static VALUE sy_AmethystCTranslator__at_stops_eq_t_c6ab;
static VALUE sy_AmethystCTranslator__dq_Amethys_2ed8;
static VALUE sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf;
static VALUE sy_AmethystCTranslator__dq__at__sh__le_bind_3d2b;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__3bec;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__8a62;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__9630;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__9cfd;
static VALUE sy_AmethystCTranslator__dq__sh__le_failw_5360;
static VALUE sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf;
static VALUE sy_AmethystCTranslator__dq_class_sp__sh__cf48;
static VALUE sy_AmethystCTranslator__dq_cstruct_48c2;
static VALUE sy_AmethystCTranslator__dq_def_sp__sh__le_b_b73d;
static VALUE sy_AmethystCTranslator__dq_if_lp_ptr_mi__19f0;
static VALUE sy_AmethystCTranslator__dq_if_sp__lp__sh__le_a_1643;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_0b60;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_f6cd;
static VALUE sy_AmethystCTranslator__dq_it_eq_Amet_82ce;
static VALUE sy_AmethystCTranslator__dq_it_eq_Qnil_a6d5;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f;
static VALUE sy_AmethystCTranslator__dq_switch_lp__f722;
static VALUE sy_AmethystCTranslator__dq_switchh_698e;
static VALUE sy_AmethystCTranslator__lb_bind_lb_1_rb__8fa4;
static VALUE sy_AmethystCTranslator__lp_Current_39be;
static VALUE sy_AmethystCTranslator__lp_bind_lb_1_rb__a948;
static VALUE sy_AmethystCTranslator__lp_bind_lb_1_rb__d1fd;
static VALUE sy_AmethystCTranslator__lp_bind_lb_1_rb__dbc9;
static VALUE sy_AmethystCTranslator_addcallb_2cf7;
static VALUE sy_AmethystCTranslator_ar_eq__ti_src_dot__1348;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb_;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__dot__1364;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__eq__7d1a;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__eq__83f5;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lb__c392;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lb__ff72;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__8b76;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__98f3;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__e3c6;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__1b5e;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__1dcb;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__252c;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__4da1;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__4db9;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__891b;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__916b;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__9a26;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__ti__cfcb;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_8b47;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_f15a;
static VALUE sy_AmethystCTranslator_label_lp__dq_a_f49c;
static VALUE sy_AmethystCTranslator_label_lp__dq_o_c187;
static VALUE sy_AmethystCTranslator_label_lp__dq_r_95b2;
static VALUE sy_AmethystCTranslator_r_eq__dq__sp__sh__le_bi_917c;
static VALUE sy_AmethystCTranslator_raise_sp__dq_T_0ab1;
static VALUE sy_AmethystCTranslator_rbbget_lp_s_68a8;
static VALUE sy_AmethystCTranslator_src_25d9;
static VALUE sy_AmethystCTranslator_src_dot_name_80f3;
static VALUE sy_AmethystCTranslator_src_dot_pred_90f1;
static VALUE sy_AmethystCTranslator_src_dot_rule_5acf;
static VALUE sy_AmethystCTranslator_src_dot_to_5e99;
static VALUE sy_apply;
static VALUE sy_label;
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
    it=AmethystCTranslator_rbtrans2(self );
    _autovar_2=it;;
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
        goto fail;
    }
success1:
    *ptr=oldpass1;
    it=_autovar_2;
    _s=it;;
    bind_aset(bind2,1,_s);
    it=rb_funcall(self,sy_AmethystCTranslator_addcallb_2cf7,1,bind2);
    _s=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE AmethystCTranslator_addlambda(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_lambd,_rwo,_word,_body,_x,__result,_autovar_3;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__8a62,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    _lambd=it;;
    it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2);
    _rwo=it;;
    it=rb_obj_clone(s_fail_e111);
    _word=it;;
    bind_aset(bind2,1,_word);
    it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);
    _word=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=AmethystCTranslator_trans(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _body=it;;
    _x=it;;
    bind_aset(bind2,1,_rwo);
    bind_aset(bind2,2,_x);
    it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);
    _rwo=bind_aget(bind2,1);;
    _x=bind_aget(bind2,2);;
    bind_aset(bind2,1,_lambd);
    bind_aset(bind2,2,_autovar_2);
    bind_aset(bind2,3,_body);
    it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_f15a,1,bind2);
    _lambd=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    _body=bind_aget(bind2,3);;
    bind_aset(bind2,1,_lambd);
    it=rb_funcall(self,sy_AmethystCTranslator__dq_Amethys_2ed8,1,bind2);
    _lambd=bind_aget(bind2,1);;
    __result=it;;
    _autovar_3=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_3);
    it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_3=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE AmethystCTranslator_itrans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_ruby,_c,_init,_c_2,__result,_autovar,_it,__result_2;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _ruby=it;;
    it=rb_ary_new3(0);
    _c=it;;
    it=rb_ary_new3(0);
    _init=it;;
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
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            _c_2=it;;
            bind_aset(bind2,1,_c_2);
            it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_1_rb__a948,1,bind2);
            _c_2=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            };
            bind_aset(bind2,1,_c_2);
            it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb_,1,bind2);
            _c_2=bind_aget(bind2,1);;
            __result=it;;
            it=__result;
            _autovar=it;;
            it=AmethystCore_append(self,_ruby,_autovar);
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            it=AmethystCTranslator_trans(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_3;
            }
            _it=it;;
            bind_aset(bind2,1,_c);
            bind_aset(bind2,2,_it);
            bind_aset(bind2,3,_init);
            bind_aset(bind2,4,_ruby);
            it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lt__98f3,1,bind2);
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
            if (1) {
                it=failobj;
                goto fail;
            };
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
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _c_2=it;;
            bind_aset(bind2,1,_c_2);
            it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_1_rb__a948,1,bind2);
            _c_2=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            };
            bind_aset(bind2,1,_c_2);
            it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb_,1,bind2);
            _c_2=bind_aget(bind2,1);;
            __result=it;;
            it=__result;
            _autovar=it;;
            it=AmethystCore_append(self,_ruby,_autovar);
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
                goto fail;
            };
accept2:
            ;
            break;
        }
    }
    bind_aset(bind2,1,_c);
    bind_aset(bind2,2,_init);
    bind_aset(bind2,3,_ruby);
    it=rb_funcall(self,sy_AmethystCTranslator__lb_bind_lb_1_rb__8fa4,1,bind2);
    _c=bind_aget(bind2,1);;
    _init=bind_aget(bind2,2);;
    _ruby=bind_aget(bind2,3);;
    __result_2=it;;

fail:
    return it;
}
VALUE AmethystCTranslator_rbcode(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_s,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_k,_v,_autovar_7,_x,__result,_autovar_8;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_AmethystCTranslator__dq_class_sp__sh__cf48,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    _s=it;;
    bind_aset(bind2,1,_s);
    it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lt__e3c6,1,bind2);
    _s=bind_aget(bind2,1);;
    it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_2d11,1,bind2);
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
    it=rb_ary_new3(0);
    _autovar_5=it;;
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
        _autovar_6=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_6);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _k=it;;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _v=it;;
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
        bind_aset(bind2,1,_k);
        bind_aset(bind2,2,_v);
        it=rb_funcall(self,sy_AmethystCTranslator__dq_def_sp__sh__le_b_b73d,1,bind2);
        _k=bind_aget(bind2,1);;
        _v=bind_aget(bind2,2);;
        _autovar_7=it;;
        it=AmethystCore_append(self,_autovar_5,_autovar_7);
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
    }
    it=Qnil;
    if (ptr->pos<ptr->len) {
        it=failobj;
        goto pass2;
    }
    it=_autovar_5;
    _x=it;;

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
        goto fail;
    }
success1:
    *ptr=oldpass1;
    bind_aset(bind2,1,_s);
    bind_aset(bind2,2,_x);
    it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__1b5e,1,bind2);
    _s=bind_aget(bind2,1);;
    _x=bind_aget(bind2,2);;
    bind_aset(bind2,1,_s);
    it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__916b,1,bind2);
    _s=bind_aget(bind2,1);;
    __result=it;;
    _autovar_8=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_8);
    it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_8=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE AmethystCTranslator_rbtrans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_autovar_4,_autovar_5,_name,_autovar_6,_args,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12;
    VALUE bind2=bind_new2(16);
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
        ame_setsrc2(self,_autovar);
        it=AmethystCTranslator_rbtrans2(self );
        _autovar_2=it;;
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
            goto alt1_2;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_2;
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
        ame_setsrc2(self,_autovar_3);
        it=AmethystCTranslator_rbtrans2(self );
        _autovar_4=it;;
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
            goto alt2_2;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_4;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        __result=it;;

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
        ame_setsrc2(self,_autovar_5);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _name=it;;
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
            goto alt3_2;
        }
success3:
        *ptr=oldpass3;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_AmethystCTranslator__dq__at__sh__le_bind_3d2b,1,bind2);
        _name=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_3;
        }
        __result=it;;

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
        ame_setsrc2(self,_autovar_6);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass4;
        }
        _name=it;;
        it=AmethystCTranslator_rbtrans(self );
        if (it==failobj) {
            it=failobj;
            goto pass4;
        }
        _args=it;;
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
            goto alt4_2;
        }
success4:
        *ptr=oldpass4;
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_args);
        it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_1_rb__d1fd,1,bind2);
        _name=bind_aget(bind2,1);;
        _args=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_3;
        }
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
        ame_setsrc2(self,_autovar_7);
        it=AmethystCTranslator_addlambda(self );
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _autovar_8=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass5;
        }
        goto success5;
pass5:
        *ptr=oldpass5;
        if (1) {
            it=failobj;
            goto alt5_2;
        }
success5:
        *ptr=oldpass5;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt5_3;
        }
        __result=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto fail;
        };
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
        ame_setsrc2(self,_autovar_9);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_AmethystCTranslator_rbbget_lp_s_68a8,1,bind2);
        _autovar_10=it;;
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
            goto alt6_2;
        }
success6:
        *ptr=oldpass6;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept6;
alt6_2:
        ptr->pos=oldpos6;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt6_3;
        }
        __result=it;;

        ;
        goto accept6;
alt6_3:
        ptr->pos=oldpos6;
        if (1) {
            it=failobj;
            goto fail;
        };
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
        ame_setsrc2(self,_autovar_11);
        it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf,1,bind2);
        _autovar_12=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass7;
        }
        goto success7;
pass7:
        *ptr=oldpass7;
        if (1) {
            it=failobj;
            goto alt7_2;
        }
success7:
        *ptr=oldpass7;
        it=_autovar_12;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt7_3;
        }
        __result=it;;

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
    case 7/*Object*/:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE AmethystCTranslator_rbtrans2(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_it,__result;
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
        it=AmethystCTranslator_rbtrans(self );
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
    _it=it;;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__ti__cfcb,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_rwo,_word,_prc,_x,__result;
    VALUE bind2=bind_new2(16);
    _word=a0;;
    _prc=a1;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2);
    _rwo=it;;
    bind_aset(bind2,1,_word);
    it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);
    _word=bind_aget(bind2,1);;
    it=_prc;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _x=it;;
    bind_aset(bind2,1,_rwo);
    bind_aset(bind2,2,_x);
    it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);
    _rwo=bind_aget(bind2,1);;
    _x=bind_aget(bind2,2);;
    __result=it;;

fail:
    return it;
}
VALUE AmethystCTranslator_trans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_a,_x,_y,__result,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_it,_s,_autovar_11,_autovar_12,__result_2,_cbno,_autovar_13,_autovar_14,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_autovar_19,_autovar_20,_autovar_21,_autovar_22,_s_2,_autovar_23,_autovar_24,_autovar_25,_autovar_26,_autovar_27,_autovar_28,_autovar_29,_autovar_30,_autovar_31,_autovar_32,_autovar_33,_autovar_34,_autovar_35,_autovar_36,_autovar_37,_autovar_38,_autovar_39,_name,_ii,_autovar_40,_aa,_autovar_41,_args,_app,_autovar_42,_e,_autovar_43,_autovar_44,_autovar_45,_autovar_46,_autovar_47,_autovar_48,_autovar_49,_autovar_50,_autovar_51,_autovar_52,_autovar_53,_t,_rbcode,_init,_autovar_54,_autovar_55,_autovar_56,_autovar_57,_accept,_reject,_oldpos,_word,_rwo,_x_2,_autovar_58,_autovar_59,_autovar_60,_autovar_61,_autovar_62,_autovar_63,_autovar_64,_autovar_65,_autovar_66,_autovar_67,_oldstops,_oldstoplabel,_autovar_68,_autovar_69,__result_3,_autovar_70,_alt,_altno,_oldcutlabel,_oldcuts,_autovar_71,_autovar_72,_pass,_oldpass,_success,_autovar_73,_autovar_74,_to,_autovar_75,_autovar_76,_autovar_77,_autovar_78,_body,_autovar_79,_autovar_80,_autovar_81,_autovar_82,_autovar_83,_autovar_84,_autovar_85,_autovar_86,_c,_autovar_87,_autovar_88,_sh,_autovar_89,_autovar_90;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        it=_autovar_3;
        _autovar_4=it;;
        it=_autovar_4;
        _autovar_5=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=_autovar_5;
        _autovar_6=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_6);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _a=it;;
        bind_aset(bind2,1,_a);
        it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_1_rb__dbc9,1,bind2);
        _a=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass1;
        };
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_4,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Local*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _x=it;;
            break;
        case 1/*Object*/:
            ;
            if (1) {
                it=failobj;
                goto pass1;
            }
            break;
        }
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Local*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _y=it;;
            break;
        case 1/*Object*/:
            ;
            if (1) {
                it=failobj;
                goto pass1;
            }
            break;
        }
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
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
            goto alt1_2;
        }
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_x);
        bind_aset(bind2,2,_y);
        it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq_Amet_82ce,1,bind2);
        _x=bind_aget(bind2,1);;
        _y=bind_aget(bind2,2);;
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=_autovar_5;
        _autovar_8=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_8);
        it=rb_funcall(self,sy_AmethystCTranslator__at_bindno_eq__e294,1,bind2);
        it=rb_ary_new3(0);
        _autovar_9=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _autovar_10=it;;
            it=AmethystCore_append(self,_autovar_9,_autovar_10);
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
                goto pass2;
            };
accept2:
            ;
        }
        it=_autovar_9;
        _it=it;;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_it);
        it=rb_funcall(self,sy_AmethystCTranslator_src_dot_pred_90f1,1,bind2);
        _it=bind_aget(bind2,1);;
        _s=it;;
        it=_s;
        _autovar_11=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_11;
        ptr->len=1;
        it=AmethystCTranslator_rbtrans2(self );
        _autovar_12=it;;
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
            goto pass2;
        }
success3:
        *ptr=oldpass3;
        it=_autovar_12;
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy_AmethystCTranslator_addcallb_2cf7,1,bind2);
        _s=bind_aget(bind2,1);;
        __result_2=it;;
        it=__result_2;
        _cbno=it;;
        bind_aset(bind2,1,_cbno);
        it=rb_funcall(self,sy_AmethystCTranslator__at_binds_dot_m_9a36,1,bind2);
        _cbno=bind_aget(bind2,1);;
        _autovar_13=it;;
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
            goto alt1_3;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_13;
        __result=it;;
        _autovar_7=it;;

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
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 1/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_14=it;;
        it=_autovar_14;
        _autovar_15=it;;
        it=_autovar_15;
        _autovar_16=it;;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=_autovar_16;
        _autovar_17=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_17);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass4;
        }
        _autovar_18=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_18);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '^':
            ;
        case '`' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass5;
            }
            break;
        case '_' ... '_':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='f'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='n'&&ame_curstr2(ptr)[3]=='d')  ptr->pos+=4;
            else if (1) {
                it=failobj;
                goto pass5;
            }
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass5;
        }
        goto success5;
pass5:
        *ptr=oldpass5;
        if (1) {
            it=failobj;
            goto pass4;
        }
success5:
        *ptr=oldpass5;
        it=rb_funcall(self,sy_AmethystCTranslator_raise_sp__dq_T_0ab1,1,bind2);
        _autovar_19=it;;
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
            goto alt3_2;
        }
success4:
        *ptr=oldpass4;
        it=_autovar_19;
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=_autovar_16;
        _autovar_20=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_20);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass6;
        }
        _autovar_21=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_21);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '^':
            ;
        case '`' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass7;
            }
            break;
        case '_' ... '_':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='t'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='t'&&ame_curstr2(ptr)[4]=='_'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='i'&&ame_curstr2(ptr)[7]=='z'&&ame_curstr2(ptr)[8]=='e')  ptr->pos+=9;
            else if (1) {
                it=failobj;
                goto pass7;
            }
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass7;
        }
        goto success7;
pass7:
        *ptr=oldpass7;
        if (1) {
            it=failobj;
            goto pass6;
        }
success7:
        *ptr=oldpass7;
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_6,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_22=it;;
            break;
        case 1/*Object*/:
            ;
            if (1) {
                it=failobj;
                goto pass6;
            }
            break;
        }
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_22);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass8;
        }
        _s_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass8;
        }
        goto success8;
pass8:
        *ptr=oldpass8;
        if (1) {
            it=failobj;
            goto pass6;
        }
success8:
        *ptr=oldpass8;
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
            goto alt3_3;
        }
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_s_2);
        it=rb_funcall(self,sy_AmethystCTranslator__dq_if_lp_ptr_mi__19f0,1,bind2);
        _s_2=bind_aget(bind2,1);;
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        it=_autovar_16;
        _autovar_23=it;;
        cstruct oldpass9=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_23);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass9;
        }
        _autovar_24=it;;
        cstruct oldpass10=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_24);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'e':
            ;
        case 'g' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass10;
            }
            break;
        case 'f' ... 'f':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
            else if (1) {
                it=failobj;
                goto pass10;
            }
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass10;
        }
        goto success10;
pass10:
        *ptr=oldpass10;
        if (1) {
            it=failobj;
            goto pass9;
        }
success10:
        *ptr=oldpass10;
        it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_failw_5360,1,bind2);
        _autovar_25=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass9;
        }
        goto success9;
pass9:
        *ptr=oldpass9;
        if (1) {
            it=failobj;
            goto alt3_4;
        }
success9:
        *ptr=oldpass9;
        it=_autovar_25;
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept3;
alt3_4:
        ptr->pos=oldpos3;
        it=_autovar_16;
        _autovar_26=it;;
        cstruct oldpass11=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_26);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass11;
        }
        _autovar_27=it;;
        cstruct oldpass12=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_27);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'd':
            ;
        case 'f' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass12;
            }
            break;
        case 'e' ... 'e':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='o'&&ame_curstr2(ptr)[1]=='f')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto pass12;
            }
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass12;
        }
        goto success12;
pass12:
        *ptr=oldpass12;
        if (1) {
            it=failobj;
            goto pass11;
        }
success12:
        *ptr=oldpass12;
        it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq_Qnil_a6d5,1,bind2);
        _autovar_28=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        goto success11;
pass11:
        *ptr=oldpass11;
        if (1) {
            it=failobj;
            goto alt3_5;
        }
success11:
        *ptr=oldpass11;
        it=_autovar_28;
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept3;
alt3_5:
        ptr->pos=oldpos3;
        it=_autovar_16;
        _autovar_29=it;;
        cstruct oldpass13=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_29);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass13;
        }
        _autovar_30=it;;
        cstruct oldpass14=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_30);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'd':
            ;
        case 'f' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass14;
            }
            break;
        case 'e' ... 'e':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
            else if (1) {
                it=failobj;
                goto pass14;
            }
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass14;
        }
        goto success14;
pass14:
        *ptr=oldpass14;
        if (1) {
            it=failobj;
            goto pass13;
        }
success14:
        *ptr=oldpass14;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass13;
        }
        goto success13;
pass13:
        *ptr=oldpass13;
        if (1) {
            it=failobj;
            goto alt3_6;
        }
success13:
        *ptr=oldpass13;
        it=rb_obj_clone(s_it_eq_Qnil);
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept3;
alt3_6:
        ptr->pos=oldpos3;
        it=_autovar_16;
        _autovar_31=it;;
        cstruct oldpass15=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_31);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass15;
        }
        _autovar_32=it;;
        cstruct oldpass16=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_32);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '`':
            ;
        case 'b' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass16;
            }
            break;
        case 'a' ... 'a':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
            else if (1) {
                it=failobj;
                goto pass16;
            }
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass16;
        }
        goto success16;
pass16:
        *ptr=oldpass16;
        if (1) {
            it=failobj;
            goto pass15;
        }
success16:
        *ptr=oldpass16;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass15;
        }
        goto success15;
pass15:
        *ptr=oldpass15;
        if (1) {
            it=failobj;
            goto alt3_7;
        }
success15:
        *ptr=oldpass15;
        it=rb_obj_clone(s_it_eq_rb_st_ee66);
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept3;
alt3_7:
        ptr->pos=oldpos3;
        it=_autovar_16;
        _autovar_33=it;;
        cstruct oldpass17=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_33);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass17;
        }
        _autovar_34=it;;
        cstruct oldpass18=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_34);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '`':
            ;
        case 'b' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass18;
            }
            break;
        case 'a' ... 'a':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
            else if (1) {
                it=failobj;
                goto pass18;
            }
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass18;
        }
        goto success18;
pass18:
        *ptr=oldpass18;
        if (1) {
            it=failobj;
            goto pass17;
        }
success18:
        *ptr=oldpass18;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass17;
        }
        goto success17;
pass17:
        *ptr=oldpass17;
        if (1) {
            it=failobj;
            goto alt3_8;
        }
success17:
        *ptr=oldpass17;
        it=rb_obj_clone(s_it_eq_ptr_mi__gt__d2bb);
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept3;
alt3_8:
        ptr->pos=oldpos3;
        it=_autovar_16;
        _autovar_35=it;;
        cstruct oldpass19=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_35);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass19;
        }
        _autovar_36=it;;
        cstruct oldpass20=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_36);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '^':
            ;
        case '`' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass20;
            }
            break;
        case '_' ... '_':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
            else if (1) {
                it=failobj;
                goto pass20;
            }
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass20;
        }
        goto success20;
pass20:
        *ptr=oldpass20;
        if (1) {
            it=failobj;
            goto pass19;
        }
success20:
        *ptr=oldpass20;
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_7,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_37=it;;
            break;
        case 1/*Object*/:
            ;
            if (1) {
                it=failobj;
                goto pass19;
            }
            break;
        }
        cstruct oldpass21=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_37);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass21;
        }
        _s_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass21;
        }
        goto success21;
pass21:
        *ptr=oldpass21;
        if (1) {
            it=failobj;
            goto pass19;
        }
success21:
        *ptr=oldpass21;
        bind_aset(bind2,1,_s_2);
        it=rb_funcall(self,sy_AmethystCTranslator__dq_if_sp__lp__sh__le_a_1643,1,bind2);
        _s_2=bind_aget(bind2,1);;
        _autovar_38=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass19;
        }
        goto success19;
pass19:
        *ptr=oldpass19;
        if (1) {
            it=failobj;
            goto alt3_9;
        }
success19:
        *ptr=oldpass19;
        it=_autovar_38;
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept3;
alt3_9:
        ptr->pos=oldpos3;
        it=_autovar_16;
        _autovar_39=it;;
        cstruct oldpass22=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_39);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass22;
        }
        _name=it;;
        it=i_0;
        _ii=it;;
        it=rb_ary_new3(0);
        _autovar_40=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=AmethystCTranslator_trans(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
            _aa=it;;
            bind_aset(bind2,1,_ii);
            it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__891b,1,bind2);
            _ii=bind_aget(bind2,1);;
            bind_aset(bind2,1,_aa);
            bind_aset(bind2,2,_ii);
            it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__3bec,1,bind2);
            _aa=bind_aget(bind2,1);;
            _ii=bind_aget(bind2,2);;
            _autovar_41=it;;
            it=AmethystCore_append(self,_autovar_40,_autovar_41);
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
                goto pass22;
            };
accept4:
            ;
        }
        it=_autovar_40;
        _args=it;;
        it=rb_funcall(self,sy_AmethystCTranslator_src_25d9,1,bind2);
        _app=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass22;
        }
        goto success22;
pass22:
        *ptr=oldpass22;
        if (1) {
            it=failobj;
            goto alt3_10;
        }
success22:
        *ptr=oldpass22;
        bind_aset(bind2,1,_args);
        bind_aset(bind2,2,_name);
        bind_aset(bind2,3,_ii);
        bind_aset(bind2,4,_app);
        it=rb_funcall(self,sy_AmethystCTranslator_r_eq__dq__sp__sh__le_bi_917c,1,bind2);
        _args=bind_aget(bind2,1);;
        _name=bind_aget(bind2,2);;
        _ii=bind_aget(bind2,3);;
        _app=bind_aget(bind2,4);;
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept3;
alt3_10:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto fail;
        };
accept3:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 2/*Bind*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_42=it;;
        cstruct oldpass23=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_42);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=AmethystCTranslator_trans(self );
        if (it==failobj) {
            it=failobj;
            goto pass23;
        }
        _e=it;;
        bind_aset(bind2,1,_e);
        it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__9cfd,1,bind2);
        _e=bind_aget(bind2,1);;
        _autovar_43=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass23;
        }
        goto success23;
pass23:
        *ptr=oldpass23;
        if (1) {
            it=failobj;
            goto fail;
        }
success23:
        *ptr=oldpass23;
        it=_autovar_43;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 3/*CAct*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_44=it;;
        cstruct oldpass24=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_44);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_AmethystCTranslator_ar_eq__ti_src_dot__1348,1,bind2);
        _autovar_45=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass24;
        }
        goto success24;
pass24:
        *ptr=oldpass24;
        if (1) {
            it=failobj;
            goto fail;
        }
success24:
        *ptr=oldpass24;
        it=_autovar_45;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 4/*Cut*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_46=it;;
        cstruct oldpass25=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_46);
        it=Qnil;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass25;
        }
        goto success25;
pass25:
        *ptr=oldpass25;
        if (1) {
            it=failobj;
            goto fail;
        }
success25:
        *ptr=oldpass25;
        it=rb_funcall(self,sy_AmethystCTranslator__at_cuts_eq_tr_13c6,1,bind2);
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 5/*Grammar*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_47=it;;
        cstruct oldpass26=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_47);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lb__c392,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_AmethystCTranslator__at_lambdas_ecda,1,bind2);
        it=rb_funcall(self,sy_AmethystCTranslator__at_defs_eq__lb__rb__3b51,1,bind2);
        it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_8142,1,bind2);
        it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_e37c,1,bind2);
        it=rb_funcall(self,sy_AmethystCTranslator__at_header_eq__7aa9,1,bind2);
        it=rb_funcall(self,sy_AmethystCTranslator__at_init_eq__lb__rb__47da,1,bind2);
        it=rb_funcall(self,sy_AmethystCTranslator_src_dot_rule_5acf,1,bind2);
        _autovar_48=it;;
        cstruct oldpass27=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_48;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass27;
        }
        _autovar_49=it;;
        cstruct oldpass28=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_49);
        it=rb_ary_new3(0);
        _autovar_50=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=AmethystCTranslator_trans(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            _autovar_51=it;;
            it=AmethystCore_append(self,_autovar_50,_autovar_51);
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            stop3=1;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto pass28;
            };
accept5:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass28;
        }
        it=_autovar_50;
        _autovar_52=it;;

        goto success28;
pass28:
        *ptr=oldpass28;
        if (1) {
            it=failobj;
            goto pass27;
        }
success28:
        *ptr=oldpass28;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass27;
        }
        it=_autovar_52;
        _autovar_53=it;;

        goto success27;
pass27:
        *ptr=oldpass27;
        if (1) {
            it=failobj;
            goto pass26;
        }
success27:
        *ptr=oldpass27;
        it=_autovar_53;
        _t=it;;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=AmethystCTranslator_rbcode(self );
        if (it==failobj) {
            it=failobj;
            goto pass26;
        }
        _rbcode=it;;
        it=rb_funcall(self,sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf,1,bind2);
        _s_2=it;;
        bind_aset(bind2,1,_s_2);
        bind_aset(bind2,2,_t);
        bind_aset(bind2,3,_init);
        bind_aset(bind2,4,_autovar_2);
        bind_aset(bind2,5,_rbcode);
        it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lt__8b76,1,bind2);
        _s_2=bind_aget(bind2,1);;
        _t=bind_aget(bind2,2);;
        _init=bind_aget(bind2,3);;
        _autovar_2=bind_aget(bind2,4);;
        _rbcode=bind_aget(bind2,5);;
        _autovar_54=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass26;
        }
        goto success26;
pass26:
        *ptr=oldpass26;
        if (1) {
            it=failobj;
            goto fail;
        }
success26:
        *ptr=oldpass26;
        it=_autovar_54;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 6/*Local*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_55=it;;
        cstruct oldpass29=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_55);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f,1,bind2);
        _autovar_56=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass29;
        }
        goto success29;
pass29:
        *ptr=oldpass29;
        if (1) {
            it=failobj;
            goto fail;
        }
success29:
        *ptr=oldpass29;
        it=_autovar_56;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 7/*Lookahead*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_57=it;;
        cstruct oldpass30=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_57);
        it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind2);
        _accept=it;;
        it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_r_95b2,1,bind2);
        _reject=it;;
        it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind2);
        _oldpos=it;;
        it=_reject;
        _word=it;;
        it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2);
        _rwo=it;;
        bind_aset(bind2,1,_word);
        it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);
        _word=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=AmethystCTranslator_trans(self );
        if (it==failobj) {
            it=failobj;
            goto pass30;
        }
        _t=it;;
        _x_2=it;;
        bind_aset(bind2,1,_rwo);
        bind_aset(bind2,2,_x_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);
        _rwo=bind_aget(bind2,1);;
        _x_2=bind_aget(bind2,2);;
        bind_aset(bind2,1,_oldpos);
        bind_aset(bind2,2,_t);
        bind_aset(bind2,3,_accept);
        bind_aset(bind2,4,_reject);
        it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_f6cd,1,bind2);
        _oldpos=bind_aget(bind2,1);;
        _t=bind_aget(bind2,2);;
        _accept=bind_aget(bind2,3);;
        _reject=bind_aget(bind2,4);;
        _autovar_58=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass30;
        }
        goto success30;
pass30:
        *ptr=oldpass30;
        if (1) {
            it=failobj;
            goto fail;
        }
success30:
        *ptr=oldpass30;
        it=_autovar_58;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 8/*Many*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_59=it;;
        it=_autovar_59;
        _autovar_60=it;;
        it=_autovar_60;
        _autovar_61=it;;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        it=_autovar_61;
        _autovar_62=it;;
        cstruct oldpass31=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_62);
        switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_8,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Or*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_63=it;;
            cstruct oldpass32=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_63);
            switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_9,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Apply*/:
                ;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                _autovar_64=it;;
                cstruct oldpass33=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_64);
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass33;
                }
                _autovar_65=it;;
                cstruct oldpass34=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_65);
                it=Amethyst_spaces(self );
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '`':
                    ;
                case 'b' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto pass34;
                    }
                    break;
                case 'a' ... 'a':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                    else if (1) {
                        it=failobj;
                        goto pass34;
                    }
                    break;
                }
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass34;
                }
                goto success34;
pass34:
                *ptr=oldpass34;
                if (1) {
                    it=failobj;
                    goto pass33;
                }
success34:
                *ptr=oldpass34;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass33;
                }
                goto success33;
pass33:
                *ptr=oldpass33;
                if (1) {
                    it=failobj;
                    goto pass32;
                }
success33:
                *ptr=oldpass33;
                switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_10,rb_obj_class(ame_curobj2(ptr))))) {
                case 0/*Stop*/:
                    ;
                    it=ptr->ary[ptr->pos];            ;
                    ptr->pos++;
                    _autovar_66=it;;
                    break;
                case 1/*Object*/:
                    ;
                    if (1) {
                        it=failobj;
                        goto pass32;
                    }
                    break;
                }
                cstruct oldpass35=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_66);
                it=Qnil;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass35;
                }
                goto success35;
pass35:
                *ptr=oldpass35;
                if (1) {
                    it=failobj;
                    goto pass32;
                }
success35:
                *ptr=oldpass35;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass32;
                }
                break;
            case 1/*Object*/:
                ;
                if (1) {
                    it=failobj;
                    goto pass32;
                }
                break;
            }
            goto success32;
pass32:
            *ptr=oldpass32;
            if (1) {
                it=failobj;
                goto pass31;
            }
success32:
            *ptr=oldpass32;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass31;
            }
            break;
        case 1/*Object*/:
            ;
            if (1) {
                it=failobj;
                goto pass31;
            }
            break;
        }
        goto success31;
pass31:
        *ptr=oldpass31;
        if (1) {
            it=failobj;
            goto alt6_2;
        }
success31:
        *ptr=oldpass31;
        it=rb_obj_clone(s_ptr_mi__gt_pos_db4c);
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept6;
alt6_2:
        ptr->pos=oldpos6;
        it=_autovar_61;
        _autovar_67=it;;
        cstruct oldpass36=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_67);
        it=rb_funcall(self,sy_AmethystCTranslator__at_stops_e2b4,1,bind2);
        _oldstops=it;;
        it=rb_funcall(self,sy_AmethystCTranslator__at_stoplab_2ba4,1,bind2);
        _oldstoplabel=it;;
        it=rb_funcall(self,sy_AmethystCTranslator__at_stops_eq_n_588d,1,bind2);
        it=rb_funcall(self,sy_AmethystCTranslator__at_stoplab_a14e,1,bind2);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=AmethystCTranslator_trans(self );
        if (it==failobj) {
            it=failobj;
            goto pass36;
        }
        _t=it;;
        bind_aset(bind2,1,_s_2);
        bind_aset(bind2,2,_t);
        bind_aset(bind2,3,_oldstops);
        bind_aset(bind2,4,_oldstoplabel);
        it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__eq__7d1a,1,bind2);
        _s_2=bind_aget(bind2,1);;
        _t=bind_aget(bind2,2);;
        _oldstops=bind_aget(bind2,3);;
        _oldstoplabel=bind_aget(bind2,4);;
        _autovar_68=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass36;
        }
        goto success36;
pass36:
        *ptr=oldpass36;
        if (1) {
            it=failobj;
            goto alt6_3;
        }
success36:
        *ptr=oldpass36;
        it=_autovar_68;
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept6;
alt6_3:
        ptr->pos=oldpos6;
        if (1) {
            it=failobj;
            goto fail;
        };
accept6:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 9/*Memo*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_69=it;;
        cstruct oldpass37=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_69);
        it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2);
        _rwo=it;;
        it=rb_obj_clone(s_memo_fai_3620);
        _word=it;;
        bind_aset(bind2,1,_word);
        it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);
        _word=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=AmethystCTranslator_trans(self );
        if (it==failobj) {
            it=failobj;
            goto pass37;
        }
        _x_2=it;;
        bind_aset(bind2,1,_rwo);
        bind_aset(bind2,2,_x_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);
        _rwo=bind_aget(bind2,1);;
        _x_2=bind_aget(bind2,2);;
        __result_3=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass37;
        }
        it=__result_3;
        _t=it;;

        goto success37;
pass37:
        *ptr=oldpass37;
        if (1) {
            it=failobj;
            goto fail;
        }
success37:
        *ptr=oldpass37;
        bind_aset(bind2,1,_s_2);
        bind_aset(bind2,2,_autovar_2);
        bind_aset(bind2,3,_t);
        it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__eq__83f5,1,bind2);
        _s_2=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        _t=bind_aget(bind2,3);;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 10/*Or*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_70=it;;
        cstruct oldpass38=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_70);
        it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind2);
        _accept=it;;
        it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind2);
        _oldpos=it;;
        it=rb_obj_clone(s_alt_3482);
        arg0=it;
        it=rb_funcall(self,sy_label,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass38;
        }
        _alt=it;;
        it=i_1;
        _altno=it;;
        it=rb_funcall(self,sy_AmethystCTranslator__at_cutlabe_7393,1,bind2);
        _oldcutlabel=it;;
        it=rb_funcall(self,sy_AmethystCTranslator__at_cuts_7bbc,1,bind2);
        _oldcuts=it;;
        it=rb_funcall(self,sy_AmethystCTranslator__at_cuts_eq_ni_f875,1,bind2);
        bind_aset(bind2,1,_oldpos);
        bind_aset(bind2,2,_alt);
        bind_aset(bind2,3,_altno);
        it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_0b60,1,bind2);
        _oldpos=bind_aget(bind2,1);;
        _alt=bind_aget(bind2,2);;
        _altno=bind_aget(bind2,3);;
        _s_2=it;;
        int stop4=0;
        while(!stop4) {
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            int oldpos8=ptr->pos;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto reject1;
            }
            it=Qnil;
            goto accept8;
reject1:
            it=failobj;
accept8:
            ptr->pos=oldpos8;
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            bind_aset(bind2,1,_altno);
            it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__891b,1,bind2);
            _altno=bind_aget(bind2,1);;
            bind_aset(bind2,1,_alt);
            bind_aset(bind2,2,_altno);
            it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__9630,1,bind2);
            _alt=bind_aget(bind2,1);;
            _altno=bind_aget(bind2,2);;
            _word=it;;
            it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2);
            _rwo=it;;
            bind_aset(bind2,1,_word);
            it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);
            _word=bind_aget(bind2,1);;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=AmethystCTranslator_trans(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            __result=it;;
            _x_2=it;;
            bind_aset(bind2,1,_rwo);
            bind_aset(bind2,2,_x_2);
            it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);
            _rwo=bind_aget(bind2,1);;
            _x_2=bind_aget(bind2,2);;
            __result_3=it;;
            it=__result_3;
            _t=it;;
            bind_aset(bind2,1,_s_2);
            bind_aset(bind2,2,_t);
            bind_aset(bind2,3,_accept);
            it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__4da1,1,bind2);
            _s_2=bind_aget(bind2,1);;
            _t=bind_aget(bind2,2);;
            _accept=bind_aget(bind2,3);;
            bind_aset(bind2,1,_s_2);
            bind_aset(bind2,2,_alt);
            bind_aset(bind2,3,_altno);
            bind_aset(bind2,4,_oldpos);
            it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__9a26,1,bind2);
            _s_2=bind_aget(bind2,1);;
            _alt=bind_aget(bind2,2);;
            _altno=bind_aget(bind2,3);;
            _oldpos=bind_aget(bind2,4);;
            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            stop4=1;
            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto pass38;
            };
accept7:
            ;
        }
        bind_aset(bind2,1,_oldcutlabel);
        bind_aset(bind2,2,_oldcuts);
        bind_aset(bind2,3,_s_2);
        bind_aset(bind2,4,_accept);
        it=rb_funcall(self,sy_AmethystCTranslator__at_cutlabe_7ebc,1,bind2);
        _oldcutlabel=bind_aget(bind2,1);;
        _oldcuts=bind_aget(bind2,2);;
        _s_2=bind_aget(bind2,3);;
        _accept=bind_aget(bind2,4);;
        _autovar_71=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass38;
        }
        goto success38;
pass38:
        *ptr=oldpass38;
        if (1) {
            it=failobj;
            goto fail;
        }
success38:
        *ptr=oldpass38;
        it=_autovar_71;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 11/*Pass*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_72=it;;
        cstruct oldpass39=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_72);
        it=rb_obj_clone(s_pass_1a1d);
        arg0=it;
        it=rb_funcall(self,sy_label,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass39;
        }
        _pass=it;;
        it=rb_obj_clone(s_oldpass_6559);
        arg0=it;
        it=rb_funcall(self,sy_label,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass39;
        }
        _oldpass=it;;
        it=rb_obj_clone(s_success_260c);
        arg0=it;
        it=rb_funcall(self,sy_label,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass39;
        }
        _success=it;;
        it=_pass;
        _word=it;;
        it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2);
        _rwo=it;;
        bind_aset(bind2,1,_word);
        it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);
        _word=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_AmethystCTranslator_src_dot_to_5e99,1,bind2);
        _autovar_73=it;;
        cstruct oldpass40=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_73;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=AmethystCTranslator_trans(self );
        if (it==failobj) {
            it=failobj;
            goto pass40;
        }
        _autovar_74=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass40;
        }
        goto success40;
pass40:
        *ptr=oldpass40;
        if (1) {
            it=failobj;
            goto pass39;
        }
success40:
        *ptr=oldpass40;
        it=_autovar_74;
        _to=it;;
        _x_2=it;;
        bind_aset(bind2,1,_rwo);
        bind_aset(bind2,2,_x_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);
        _rwo=bind_aget(bind2,1);;
        _x_2=bind_aget(bind2,2);;
        bind_aset(bind2,1,_oldpass);
        bind_aset(bind2,2,_to);
        bind_aset(bind2,3,_success);
        bind_aset(bind2,4,_pass);
        it=rb_funcall(self,sy_AmethystCTranslator__dq_cstruct_48c2,1,bind2);
        _oldpass=bind_aget(bind2,1);;
        _to=bind_aget(bind2,2);;
        _success=bind_aget(bind2,3);;
        _pass=bind_aget(bind2,4);;
        _autovar_75=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass39;
        }
        goto success39;
pass39:
        *ptr=oldpass39;
        if (1) {
            it=failobj;
            goto fail;
        }
success39:
        *ptr=oldpass39;
        it=_autovar_75;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 12/*Rule*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_76=it;;
        cstruct oldpass41=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_76);
        it=rb_funcall(self,sy_AmethystCTranslator_src_dot_name_80f3,1,bind2);
        _name=it;;
        bind_aset(bind2,1,_autovar_2);
        bind_aset(bind2,2,_name);
        it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lb__ff72,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _name=bind_aget(bind2,2);;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_AmethystCTranslator__lp_Current_39be,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_77=it;;
        cstruct oldpass42=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_77;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=AmethystCTranslator_trans(self );
        if (it==failobj) {
            it=failobj;
            goto pass42;
        }
        _autovar_78=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass42;
        }
        goto success42;
pass42:
        *ptr=oldpass42;
        if (1) {
            it=failobj;
            goto pass41;
        }
success42:
        *ptr=oldpass42;
        it=_autovar_78;
        _body=it;;
        bind_aset(bind2,1,_autovar_2);
        bind_aset(bind2,2,_name);
        bind_aset(bind2,3,_s_2);
        bind_aset(bind2,4,_body);
        it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_8b47,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _name=bind_aget(bind2,2);;
        _s_2=bind_aget(bind2,3);;
        _body=bind_aget(bind2,4);;
        _autovar_79=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass41;
        }
        goto success41;
pass41:
        *ptr=oldpass41;
        if (1) {
            it=failobj;
            goto fail;
        }
success41:
        *ptr=oldpass41;
        it=_autovar_79;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 13/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_80=it;;
        cstruct oldpass43=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_80);
        it=rb_ary_new3(0);
        _autovar_81=it;;
        int stop5=0;
        while(!stop5) {
            int oldpos9=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=AmethystCTranslator_trans(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_2;
            }
            _autovar_82=it;;
            it=AmethystCore_append(self,_autovar_81,_autovar_82);
            ;
            goto accept9;
alt8_2:
            ptr->pos=oldpos9;
            stop5=1;
            ;
            goto accept9;
alt8_3:
            ptr->pos=oldpos9;
            if (1) {
                it=failobj;
                goto pass43;
            };
accept9:
            ;
        }
        it=_autovar_81;
        _t=it;;
        bind_aset(bind2,1,_t);
        it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__ti__cfcb,1,bind2);
        _t=bind_aget(bind2,1);;
        _autovar_83=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass43;
        }
        goto success43;
pass43:
        *ptr=oldpass43;
        if (1) {
            it=failobj;
            goto fail;
        }
success43:
        *ptr=oldpass43;
        it=_autovar_83;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 14/*Stop*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_84=it;;
        cstruct oldpass44=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_84);
        it=Qnil;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass44;
        }
        goto success44;
pass44:
        *ptr=oldpass44;
        if (1) {
            it=failobj;
            goto fail;
        }
success44:
        *ptr=oldpass44;
        it=rb_funcall(self,sy_AmethystCTranslator__at_stops_eq_t_c6ab,1,bind2);
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 15/*Switch_Char*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_85=it;;
        cstruct oldpass45=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_85);
        it=rb_obj_clone(s_switch_lp__lp__a839);
        _s_2=it;;
        int stop6=0;
        while(!stop6) {
            int oldpos10=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt9_2;
            }
            _autovar_86=it;;
            cstruct oldpass46=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_86);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass46;
            }
            _c=it;;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=AmethystCTranslator_trans(self );
            if (it==failobj) {
                it=failobj;
                goto pass46;
            }
            _t=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass46;
            }
            goto success46;
pass46:
            *ptr=oldpass46;
            if (1) {
                it=failobj;
                goto alt9_2;
            }
success46:
            *ptr=oldpass46;
            bind_aset(bind2,1,_s_2);
            bind_aset(bind2,2,_c);
            bind_aset(bind2,3,_t);
            it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__252c,1,bind2);
            _s_2=bind_aget(bind2,1);;
            _c=bind_aget(bind2,2);;
            _t=bind_aget(bind2,3);;
            ;
            goto accept10;
alt9_2:
            ptr->pos=oldpos10;
            stop6=1;
            ;
            goto accept10;
alt9_3:
            ptr->pos=oldpos10;
            if (1) {
                it=failobj;
                goto pass45;
            };
accept10:
            ;
        }
        bind_aset(bind2,1,_s_2);
        it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__4db9,1,bind2);
        _s_2=bind_aget(bind2,1);;
        _autovar_87=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass45;
        }
        goto success45;
pass45:
        *ptr=oldpass45;
        if (1) {
            it=failobj;
            goto fail;
        }
success45:
        *ptr=oldpass45;
        it=_autovar_87;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 16/*Switch_Clas*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_88=it;;
        cstruct oldpass47=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_88);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__dq_switchh_698e,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _sh=it;;
        bind_aset(bind2,1,_sh);
        it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__92e2,1,bind2);
        _sh=bind_aget(bind2,1);;
        it=i_0;
        _ii=it;;
        it=rb_obj_clone(s__d41d);
        _init=it;;
        bind_aset(bind2,1,_sh);
        it=rb_funcall(self,sy_AmethystCTranslator__dq_switch_lp__f722,1,bind2);
        _sh=bind_aget(bind2,1);;
        _s_2=it;;
        int stop7=0;
        while(!stop7) {
            int oldpos11=ptr->pos;
            int cut10=0;
alt10_1:
            ;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt10_2;
            }
            _autovar_89=it;;
            cstruct oldpass48=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_89);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass48;
            }
            _c=it;;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_AmethystCTranslator__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=AmethystCTranslator_trans(self );
            if (it==failobj) {
                it=failobj;
                goto pass48;
            }
            _t=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass48;
            }
            goto success48;
pass48:
            *ptr=oldpass48;
            if (1) {
                it=failobj;
                goto alt10_2;
            }
success48:
            *ptr=oldpass48;
            bind_aset(bind2,1,_c);
            bind_aset(bind2,2,_init);
            bind_aset(bind2,3,_ii);
            bind_aset(bind2,4,_s_2);
            it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__dot__1364,1,bind2);
            _c=bind_aget(bind2,1);;
            _init=bind_aget(bind2,2);;
            _ii=bind_aget(bind2,3);;
            _s_2=bind_aget(bind2,4);;
            bind_aset(bind2,1,_s_2);
            bind_aset(bind2,2,_t);
            it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__1dcb,1,bind2);
            _s_2=bind_aget(bind2,1);;
            _t=bind_aget(bind2,2);;
            ;
            goto accept11;
alt10_2:
            ptr->pos=oldpos11;
            stop7=1;
            ;
            goto accept11;
alt10_3:
            ptr->pos=oldpos11;
            if (1) {
                it=failobj;
                goto pass47;
            };
accept11:
            ;
        }
        bind_aset(bind2,1,_sh);
        bind_aset(bind2,2,_init);
        it=rb_funcall(self,sy_AmethystCTranslator__at_init_sp__sp__lt__aac8,1,bind2);
        _sh=bind_aget(bind2,1);;
        _init=bind_aget(bind2,2);;
        bind_aset(bind2,1,_s_2);
        it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__4db9,1,bind2);
        _s_2=bind_aget(bind2,1);;
        _autovar_90=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass47;
        }
        goto success47;
pass47:
        *ptr=oldpass47;
        if (1) {
            it=failobj;
            goto fail;
        }
success47:
        *ptr=oldpass47;
        it=_autovar_90;
        __result=it;;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 17/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_AmethystCTranslator__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
void Init_AmethystCTranslator_c() {
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
    switchhash_AmethystCTranslator_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Stop\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_10);;
    switchhash_AmethystCTranslator_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_1);;
    switchhash_AmethystCTranslator_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Global\nnext h[k]=3 if k<=Key\nnext h[k]=4 if k<=Lambda\nnext h[k]=5 if k<=Local\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_2);;
    switchhash_AmethystCTranslator_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_3);;
    switchhash_AmethystCTranslator_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_4);;
    switchhash_AmethystCTranslator_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_5);;
    switchhash_AmethystCTranslator_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_6);;
    switchhash_AmethystCTranslator_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_7);;
    switchhash_AmethystCTranslator_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_8);;
    switchhash_AmethystCTranslator_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_AmethystCTranslator_9);;
    sy_AmethystCTranslator__at__contex_5f56=rb_intern("AmethystCTranslator__at__contex_5f56");
    sy_AmethystCTranslator__at__contex_cdb3=rb_intern("AmethystCTranslator__at__contex_cdb3");
    sy_AmethystCTranslator__at__contex_d6d5=rb_intern("AmethystCTranslator__at__contex_d6d5");
    sy_AmethystCTranslator__at_bindno_eq__e294=rb_intern("AmethystCTranslator__at_bindno_eq__e294");
    sy_AmethystCTranslator__at_binds_dot_m_9a36=rb_intern("AmethystCTranslator__at_binds_dot_m_9a36");
    sy_AmethystCTranslator__at_callbac_2d11=rb_intern("AmethystCTranslator__at_callbac_2d11");
    sy_AmethystCTranslator__at_callbac_e37c=rb_intern("AmethystCTranslator__at_callbac_e37c");
    sy_AmethystCTranslator__at_cutlabe_7393=rb_intern("AmethystCTranslator__at_cutlabe_7393");
    sy_AmethystCTranslator__at_cutlabe_7ebc=rb_intern("AmethystCTranslator__at_cutlabe_7ebc");
    sy_AmethystCTranslator__at_cuts_7bbc=rb_intern("AmethystCTranslator__at_cuts_7bbc");
    sy_AmethystCTranslator__at_cuts_eq_ni_f875=rb_intern("AmethystCTranslator__at_cuts_eq_ni_f875");
    sy_AmethystCTranslator__at_cuts_eq_tr_13c6=rb_intern("AmethystCTranslator__at_cuts_eq_tr_13c6");
    sy_AmethystCTranslator__at_defs_eq__lb__rb__3b51=rb_intern("AmethystCTranslator__at_defs_eq__lb__rb__3b51");
    sy_AmethystCTranslator__at_faillab_1610=rb_intern("AmethystCTranslator__at_faillab_1610");
    sy_AmethystCTranslator__at_faillab_8142=rb_intern("AmethystCTranslator__at_faillab_8142");
    sy_AmethystCTranslator__at_faillab_e174=rb_intern("AmethystCTranslator__at_faillab_e174");
    sy_AmethystCTranslator__at_faillab_e643=rb_intern("AmethystCTranslator__at_faillab_e643");
    sy_AmethystCTranslator__at_header_eq__7aa9=rb_intern("AmethystCTranslator__at_header_eq__7aa9");
    sy_AmethystCTranslator__at_header_lt__92e2=rb_intern("AmethystCTranslator__at_header_lt__92e2");
    sy_AmethystCTranslator__at_init_eq__lb__rb__47da=rb_intern("AmethystCTranslator__at_init_eq__lb__rb__47da");
    sy_AmethystCTranslator__at_init_sp__sp__lt__aac8=rb_intern("AmethystCTranslator__at_init_sp__sp__lt__aac8");
    sy_AmethystCTranslator__at_lambdas_ecda=rb_intern("AmethystCTranslator__at_lambdas_ecda");
    sy_AmethystCTranslator__at_stoplab_2ba4=rb_intern("AmethystCTranslator__at_stoplab_2ba4");
    sy_AmethystCTranslator__at_stoplab_a14e=rb_intern("AmethystCTranslator__at_stoplab_a14e");
    sy_AmethystCTranslator__at_stops_e2b4=rb_intern("AmethystCTranslator__at_stops_e2b4");
    sy_AmethystCTranslator__at_stops_eq_n_588d=rb_intern("AmethystCTranslator__at_stops_eq_n_588d");
    sy_AmethystCTranslator__at_stops_eq_t_c6ab=rb_intern("AmethystCTranslator__at_stops_eq_t_c6ab");
    sy_AmethystCTranslator__dq_Amethys_2ed8=rb_intern("AmethystCTranslator__dq_Amethys_2ed8");
    sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf=rb_intern("AmethystCTranslator__dq_VALUE_sp_c_8bbf");
    sy_AmethystCTranslator__dq__at__sh__le_bind_3d2b=rb_intern("AmethystCTranslator__dq__at__sh__le_bind_3d2b");
    sy_AmethystCTranslator__dq__sh__le_bind_lb__3bec=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__3bec");
    sy_AmethystCTranslator__dq__sh__le_bind_lb__8a62=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__8a62");
    sy_AmethystCTranslator__dq__sh__le_bind_lb__9630=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__9630");
    sy_AmethystCTranslator__dq__sh__le_bind_lb__9cfd=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__9cfd");
    sy_AmethystCTranslator__dq__sh__le_failw_5360=rb_intern("AmethystCTranslator__dq__sh__le_failw_5360");
    sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf=rb_intern("AmethystCTranslator__dq__sh__le_src_dot_n_9acf");
    sy_AmethystCTranslator__dq_class_sp__sh__cf48=rb_intern("AmethystCTranslator__dq_class_sp__sh__cf48");
    sy_AmethystCTranslator__dq_cstruct_48c2=rb_intern("AmethystCTranslator__dq_cstruct_48c2");
    sy_AmethystCTranslator__dq_def_sp__sh__le_b_b73d=rb_intern("AmethystCTranslator__dq_def_sp__sh__le_b_b73d");
    sy_AmethystCTranslator__dq_if_lp_ptr_mi__19f0=rb_intern("AmethystCTranslator__dq_if_lp_ptr_mi__19f0");
    sy_AmethystCTranslator__dq_if_sp__lp__sh__le_a_1643=rb_intern("AmethystCTranslator__dq_if_sp__lp__sh__le_a_1643");
    sy_AmethystCTranslator__dq_int_sp__sh__le_b_0b60=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_0b60");
    sy_AmethystCTranslator__dq_int_sp__sh__le_b_f6cd=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_f6cd");
    sy_AmethystCTranslator__dq_it_eq_Amet_82ce=rb_intern("AmethystCTranslator__dq_it_eq_Amet_82ce");
    sy_AmethystCTranslator__dq_it_eq_Qnil_a6d5=rb_intern("AmethystCTranslator__dq_it_eq_Qnil_a6d5");
    sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_bg_281f");
    sy_AmethystCTranslator__dq_switch_lp__f722=rb_intern("AmethystCTranslator__dq_switch_lp__f722");
    sy_AmethystCTranslator__dq_switchh_698e=rb_intern("AmethystCTranslator__dq_switchh_698e");
    sy_AmethystCTranslator__lb_bind_lb_1_rb__8fa4=rb_intern("AmethystCTranslator__lb_bind_lb_1_rb__8fa4");
    sy_AmethystCTranslator__lp_Current_39be=rb_intern("AmethystCTranslator__lp_Current_39be");
    sy_AmethystCTranslator__lp_bind_lb_1_rb__a948=rb_intern("AmethystCTranslator__lp_bind_lb_1_rb__a948");
    sy_AmethystCTranslator__lp_bind_lb_1_rb__d1fd=rb_intern("AmethystCTranslator__lp_bind_lb_1_rb__d1fd");
    sy_AmethystCTranslator__lp_bind_lb_1_rb__dbc9=rb_intern("AmethystCTranslator__lp_bind_lb_1_rb__dbc9");
    sy_AmethystCTranslator_addcallb_2cf7=rb_intern("AmethystCTranslator_addcallb_2cf7");
    sy_AmethystCTranslator_ar_eq__ti_src_dot__1348=rb_intern("AmethystCTranslator_ar_eq__ti_src_dot__1348");
    sy_AmethystCTranslator_bind_lb_1_rb_=rb_intern("AmethystCTranslator_bind_lb_1_rb_");
    sy_AmethystCTranslator_bind_lb_1_rb__dot__1364=rb_intern("AmethystCTranslator_bind_lb_1_rb__dot__1364");
    sy_AmethystCTranslator_bind_lb_1_rb__eq__7d1a=rb_intern("AmethystCTranslator_bind_lb_1_rb__eq__7d1a");
    sy_AmethystCTranslator_bind_lb_1_rb__eq__83f5=rb_intern("AmethystCTranslator_bind_lb_1_rb__eq__83f5");
    sy_AmethystCTranslator_bind_lb_1_rb__lb__c392=rb_intern("AmethystCTranslator_bind_lb_1_rb__lb__c392");
    sy_AmethystCTranslator_bind_lb_1_rb__lb__ff72=rb_intern("AmethystCTranslator_bind_lb_1_rb__lb__ff72");
    sy_AmethystCTranslator_bind_lb_1_rb__lt__8b76=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__8b76");
    sy_AmethystCTranslator_bind_lb_1_rb__lt__98f3=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__98f3");
    sy_AmethystCTranslator_bind_lb_1_rb__lt__e3c6=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__e3c6");
    sy_AmethystCTranslator_bind_lb_1_rb__pl__1b5e=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__1b5e");
    sy_AmethystCTranslator_bind_lb_1_rb__pl__1dcb=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__1dcb");
    sy_AmethystCTranslator_bind_lb_1_rb__pl__252c=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__252c");
    sy_AmethystCTranslator_bind_lb_1_rb__pl__4da1=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__4da1");
    sy_AmethystCTranslator_bind_lb_1_rb__pl__4db9=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__4db9");
    sy_AmethystCTranslator_bind_lb_1_rb__pl__891b=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__891b");
    sy_AmethystCTranslator_bind_lb_1_rb__pl__916b=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__916b");
    sy_AmethystCTranslator_bind_lb_1_rb__pl__9a26=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__9a26");
    sy_AmethystCTranslator_bind_lb_1_rb__ti__cfcb=rb_intern("AmethystCTranslator_bind_lb_1_rb__ti__cfcb");
    sy_AmethystCTranslator_h_eq__dq_VALUE_8b47=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_8b47");
    sy_AmethystCTranslator_h_eq__dq_VALUE_f15a=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_f15a");
    sy_AmethystCTranslator_label_lp__dq_a_f49c=rb_intern("AmethystCTranslator_label_lp__dq_a_f49c");
    sy_AmethystCTranslator_label_lp__dq_o_c187=rb_intern("AmethystCTranslator_label_lp__dq_o_c187");
    sy_AmethystCTranslator_label_lp__dq_r_95b2=rb_intern("AmethystCTranslator_label_lp__dq_r_95b2");
    sy_AmethystCTranslator_r_eq__dq__sp__sh__le_bi_917c=rb_intern("AmethystCTranslator_r_eq__dq__sp__sh__le_bi_917c");
    sy_AmethystCTranslator_raise_sp__dq_T_0ab1=rb_intern("AmethystCTranslator_raise_sp__dq_T_0ab1");
    sy_AmethystCTranslator_rbbget_lp_s_68a8=rb_intern("AmethystCTranslator_rbbget_lp_s_68a8");
    sy_AmethystCTranslator_src_25d9=rb_intern("AmethystCTranslator_src_25d9");
    sy_AmethystCTranslator_src_dot_name_80f3=rb_intern("AmethystCTranslator_src_dot_name_80f3");
    sy_AmethystCTranslator_src_dot_pred_90f1=rb_intern("AmethystCTranslator_src_dot_pred_90f1");
    sy_AmethystCTranslator_src_dot_rule_5acf=rb_intern("AmethystCTranslator_src_dot_rule_5acf");
    sy_AmethystCTranslator_src_dot_to_5e99=rb_intern("AmethystCTranslator_src_dot_to_5e99");
    sy_apply=rb_intern("apply");
    sy_label=rb_intern("label");
    rb_define_method(cls_AmethystCTranslator,"addcallback",AmethystCTranslator_addcallback,1);
    rb_define_method(cls_AmethystCTranslator,"addlambda",AmethystCTranslator_addlambda,0);
    rb_define_method(cls_AmethystCTranslator,"itrans",AmethystCTranslator_itrans,0);
    rb_define_method(cls_AmethystCTranslator,"rbcode",AmethystCTranslator_rbcode,0);
    rb_define_method(cls_AmethystCTranslator,"rbtrans",AmethystCTranslator_rbtrans,0);
    rb_define_method(cls_AmethystCTranslator,"rbtrans2",AmethystCTranslator_rbtrans2,0);
    rb_define_method(cls_AmethystCTranslator,"rw",AmethystCTranslator_rw,2);
    rb_define_method(cls_AmethystCTranslator,"trans",AmethystCTranslator_trans,0);
}
