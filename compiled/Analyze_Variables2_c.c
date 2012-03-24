#include "cthyst.h"
#include "memo.c"
VALUE cls_Analyze_Variables2;
VALUE AmethystCore_anything(VALUE self );
VALUE Analyze_Variables2_flatten(VALUE self );
VALUE Analyze_Variables2_itrans(VALUE self );
VALUE Analyze_Variables2_root(VALUE self );
VALUE Analyze_Variables2_traverse(VALUE self );
VALUE Analyze_Variables2_traverse_item(VALUE self );
VALUE Analyze_Variables2_visit(VALUE self );
VALUE switchhash_Analyze_Variables2_10;
VALUE switchhash_Analyze_Variables2_11;
VALUE switchhash_Analyze_Variables2_1;
VALUE switchhash_Analyze_Variables2_2;
VALUE switchhash_Analyze_Variables2_3;
VALUE switchhash_Analyze_Variables2_4;
VALUE switchhash_Analyze_Variables2_5;
VALUE switchhash_Analyze_Variables2_6;
VALUE switchhash_Analyze_Variables2_7;
VALUE switchhash_Analyze_Variables2_8;
VALUE switchhash_Analyze_Variables2_9;
static VALUE sy_Analyze_Variables2_Act_lb_bind_4ccd;
static VALUE sy_Analyze_Variables2_Append_lb_s_f381;
static VALUE sy_Analyze_Variables2_Concat_lb_s_ba37;
static VALUE sy_Analyze_Variables2_Enter_lb_sr_4871;
static VALUE sy_Analyze_Variables2_Many_dot_cre_6376;
static VALUE sy_Analyze_Variables2_Or_lb__ti_bind_5a27;
static VALUE sy_Analyze_Variables2_Pass_lb_src_99d4;
static VALUE sy_Analyze_Variables2_Placehol_6875;
static VALUE sy_Analyze_Variables2_Seq_lb__ti_bin_1174;
static VALUE sy_Analyze_Variables2__at__contex_5f56;
static VALUE sy_Analyze_Variables2__at__contex_cdb3;
static VALUE sy_Analyze_Variables2__at__contex_d6d5;
static VALUE sy_Analyze_Variables2__at_stop_8c46;
static VALUE sy_Analyze_Variables2__at_stop_eq_bi_5f9f;
static VALUE sy_Analyze_Variables2__at_stop_eq_fa_620e;
static VALUE sy_Analyze_Variables2__at_stop_eq_tr_52d4;
static VALUE sy_Analyze_Variables2__lp_;
static VALUE sy_Analyze_Variables2__lp_bind_lb_1_rb__e3f1;
static VALUE sy_Analyze_Variables2__lp_src_dot_cla_2024;
static VALUE sy_Analyze_Variables2_bind_lb_1_rb_;
static VALUE sy_Analyze_Variables2_bind_lb_1_rb__lb__12e8;
static VALUE sy_Analyze_Variables2_bind_lb_1_rb__lb__9337;
static VALUE sy_Analyze_Variables2_bind_lb_1_rb__lb__eb3a;
static VALUE sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20;
static VALUE sy_Analyze_Variables2_bind_lb_1_rb__sp__6af0;
static VALUE sy_Analyze_Variables2_cls_eq_Obje_d8f9;
static VALUE sy_Analyze_Variables2_connects_04d2;
static VALUE sy_Analyze_Variables2_d_eq_src_dot_du_2c72;
static VALUE sy_Analyze_Variables2_if_sp_bind_lb__1bed;
static VALUE sy_Analyze_Variables2_src_25d9;
static VALUE sy_Analyze_Variables2_src_dot_ary_d5cf;
static VALUE sy_Analyze_Variables2_src_dot_ary_dot__be44;
static VALUE sy_Analyze_Variables2_src_dot_dup_d768;
static VALUE sy_Analyze_Variables2_src_dot_pred_56d4;
static VALUE sy_Analyze_Variables2_src_dot_pure_41d4;
static VALUE sy_Analyze_Variables2_src_dot_rule_5acf;
static VALUE sy_Analyze_Variables2_src_dot_rule_a719;
VALUE profile_report_Analyze_Variables2(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Analyze_Variables2_flatten(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(0);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_7,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Args*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_2=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_2);
            it=Analyze_Variables2_flatten(self );
            _autovar_3=it;;
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
                goto revert2;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_3;
            _autovar_4=it;;

            ;
            goto accept4;
revert2:
            ;
            goto alt2_2;
accept4:
            ;

            ;
            ptr->branches-=2;
            goto accept3;
alt2_2:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert3;
            }
            _autovar_4=it;;

            ;
            goto accept5;
revert3:
            ;
            goto alt2_3;
accept5:
            ;

            ;
            ptr->branches-=1;
            goto accept3;
alt2_3:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto revert1;
            };
accept3:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_4);
            ;
            goto accept2;
revert1:
            ;
            goto alt1_2;
accept2:
            ;

            ;
            ptr->branches-=2;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            stop1=1;
            ;
            goto accept6;
revert4:
            ;
            goto alt1_3;
accept6:
            ;

            ;
            ptr->branches-=1;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case 1/*Strin*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_5=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_5);
            it=Analyze_Variables2_flatten(self );
            _autovar_6=it;;
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
                goto revert6;
            }
success2:
            *ptr=oldpass2;
            it=_autovar_6;
            _autovar_4=it;;

            ;
            goto accept10;
revert6:
            ;
            goto alt4_2;
accept10:
            ;

            ;
            ptr->branches-=2;
            goto accept9;
alt4_2:
            ptr->pos=oldpos4;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert7;
            }
            _autovar_4=it;;

            ;
            goto accept11;
revert7:
            ;
            goto alt4_3;
accept11:
            ;

            ;
            ptr->branches-=1;
            goto accept9;
alt4_3:
            ptr->pos=oldpos4;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto revert5;
            };
accept9:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_4);
            ;
            goto accept8;
revert5:
            ;
            goto alt3_2;
accept8:
            ;

            ;
            ptr->branches-=2;
            goto accept7;
alt3_2:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            stop1=1;
            ;
            goto accept12;
revert8:
            ;
            goto alt3_3;
accept12:
            ;

            ;
            ptr->branches-=1;
            goto accept7;
alt3_3:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept7:
            ;
            break;
        case 2/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert9;
            }
            _autovar_4=it;;
            it=AmethystCore_append(self,_autovar,_autovar_4);
            ;
            goto accept14;
revert9:
            ;
            goto alt5_2;
accept14:
            ;

            ;
            ptr->branches-=2;
            goto accept13;
alt5_2:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            stop1=1;
            ;
            goto accept15;
revert10:
            ;
            goto alt5_3;
accept15:
            ;

            ;
            ptr->branches-=1;
            goto accept13;
alt5_3:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept13:
            ;
            break;
        }
    }
    it=_autovar;
    __result=it;;

fail:
    return it;
}
VALUE Analyze_Variables2_itrans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_rules=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_1,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Grammar*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_2=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_2);
            it=rb_funcall(self,sy_Analyze_Variables2_src_dot_rule_5acf,1,bind2);
            _autovar_3=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_3;
            ptr->len=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass2;
            }
            _autovar_4=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_4);
            it=rb_ary_new3(0);
            _autovar_5=it;;
            int stop2=0;
            while(!stop2) {
                switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_2,rb_obj_class(ame_curobj2(ptr))))) {
                case 0/*Rule*/:
                    ;
                    int oldpos3=ptr->pos;
                    int cut3=0;
alt3_1:
                    if(!ptr->branches)ptr->discard=ptr->pos;
                    ptr->branches+=2;
                    it=ptr->ary[ptr->pos];            ;
                    ptr->pos++;
                    _autovar_6=it;;
                    cstruct oldpass4=*ptr;
                    ptr->pos=ptr->len=0;
                    ptr->ary=NULL;
                    ame_setsrc2(self,_autovar_6);
                    it=Analyze_Variables2_root(self );
                    if (it==failobj) {
                        it=failobj;
                        goto pass4;
                    }
                    _autovar_7=it;;
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
                        goto revert3;
                    }
success4:
                    *ptr=oldpass4;
                    it=_autovar_7;
                    _autovar_8=it;;
                    it=AmethystCore_append(self,_autovar_5,_autovar_8);
                    ;
                    goto accept6;
revert3:
                    ;
                    goto alt3_2;
accept6:
                    ;

                    ;
                    ptr->branches-=2;
                    goto accept5;
alt3_2:
                    ptr->pos=oldpos3;
                    ptr->branches-=1;
                    stop2=1;
                    ;
                    goto accept7;
revert4:
                    ;
                    goto alt3_3;
accept7:
                    ;

                    ;
                    ptr->branches-=1;
                    goto accept5;
alt3_3:
                    ptr->pos=oldpos3;
                    ptr->branches-=1;
                    if (1) {
                        it=failobj;
                        goto pass3;
                    };
accept5:
                    ;
                    break;
                case 1/*Object*/:
                    ;
                    stop2=1;
                    break;
                }
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            it=_autovar_5;
            _rules=it;;

            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto pass2;
            }
success3:
            *ptr=oldpass3;
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
            bind_aset(bind2,1,_rules);
            it=rb_funcall(self,sy_Analyze_Variables2_src_dot_rule_a719,1,bind2);
            _rules=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind2);
            _autovar_9=it;;
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
                goto revert2;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_9;
            _autovar_10=it;;

            ;
            goto accept4;
revert2:
            ;
            goto alt2_2;
accept4:
            ;

            ;
            ptr->branches-=2;
            goto accept3;
alt2_2:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert5;
            }
            _autovar_10=it;;

            ;
            goto accept8;
revert5:
            ;
            goto alt2_3;
accept8:
            ;

            ;
            ptr->branches-=1;
            goto accept3;
alt2_3:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto revert1;
            };
accept3:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_10);
            ;
            goto accept2;
revert1:
            ;
            goto alt1_2;
accept2:
            ;

            ;
            ptr->branches-=2;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            stop1=1;
            ;
            goto accept9;
revert6:
            ;
            goto alt1_3;
accept9:
            ;

            ;
            ptr->branches-=1;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case 1/*Object*/:
            ;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert7;
            }
            _autovar_10=it;;
            it=AmethystCore_append(self,_autovar,_autovar_10);
            ;
            goto accept11;
revert7:
            ;
            goto alt4_2;
accept11:
            ;

            ;
            ptr->branches-=2;
            goto accept10;
alt4_2:
            ptr->pos=oldpos4;
            ptr->branches-=1;
            stop1=1;
            ;
            goto accept12;
revert8:
            ;
            goto alt4_3;
accept12:
            ;

            ;
            ptr->branches-=1;
            goto accept10;
alt4_3:
            ptr->pos=oldpos4;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept10:
            ;
            break;
        }
    }
    it=_autovar;
    __result=it;;

fail:
    return it;
}
VALUE Analyze_Variables2_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,__result=Qnil,_autovar_9=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=rb_funcall(self,sy_Analyze_Variables2_src_dot_dup_d768,1,bind2);
    _autovar_3=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_3;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 1/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto pass1;
        }
        break;
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
    it=_autovar_4;
    _autovar_5=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar_5);
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__lb__9337,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__lb__12e8,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__lb__eb3a,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=Analyze_Variables2_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto pass2;
    }
    _autovar_6=it;;
    cstruct oldpass3=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar_6);
    ptr->pos=ptr->len;
    it=rb_funcall(self,sy_Analyze_Variables2_d_eq_src_dot_du_2c72,1,bind2);
    _autovar_7=it;;
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
    it=Qnil;
    if (ptr->pos<ptr->len) {
        it=failobj;
        goto pass2;
    }
    it=_autovar_7;
    _autovar_8=it;;

    goto success2;
pass2:
    *ptr=oldpass2;
    if (1) {
        it=failobj;
        goto fail;
    }
success2:
    *ptr=oldpass2;
    it=_autovar_8;
    __result=it;;
    _autovar_9=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_9);
    it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_9=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Analyze_Variables2_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Analyze_Variables2__lp_src_dot_cla_2024,1,bind2);
    _ivars=it;;
    it=_ivars;
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
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        if(!ptr->branches)ptr->discard=ptr->pos;
        ptr->branches+=2;
        it=Analyze_Variables2_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        ;
        goto accept2;
revert1:
        ;
        goto alt1_2;
accept2:
        ;

        ;
        ptr->branches-=2;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        ptr->branches-=1;
        stop1=1;
        ;
        goto accept3;
revert2:
        ;
        goto alt1_3;
accept3:
        ;

        ;
        ptr->branches-=1;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        ptr->branches-=1;
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
    bind_aset(bind2,1,_ivars);
    bind_aset(bind2,2,_nvars);
    it=rb_funcall(self,sy_Analyze_Variables2_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

fail:
    return it;
}
VALUE Analyze_Variables2_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_8,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_9,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Append_AST*/:
        case 2/*Args*/:
        case 3/*Comment*/:
        case 4/*Concat_AST*/:
        case 5/*Enter_AST*/:
        case 6/*Many*/:
        case 7/*Or_AST*/:
        case 8/*Parenthesis*/:
        case 9/*Pass_AST*/:
        case 10/*Result*/:
        case 11/*Seq*/:
        case 12/*Seq_AST*/:
        case 13/*Stop*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=3;
            it=Analyze_Variables2_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert1;
            }
            __result=it;;

            ;
            goto accept2;
revert1:
            ;
            goto alt1_2;
accept2:
            ;

            ;
            ptr->branches-=3;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Analyze_Variables2_traverse(self );
            if (it==failobj) {
                it=failobj;
                goto pass1;
            }
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
                goto revert2;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept3;
revert2:
            ;
            goto alt1_3;
accept3:
            ;

            ;
            ptr->branches-=2;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert3;
            }
            __result=it;;

            ;
            goto accept4;
revert3:
            ;
            goto alt1_4;
accept4:
            ;

            ;
            ptr->branches-=1;
            goto accept1;
alt1_4:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case 14/*Object*/:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Analyze_Variables2_traverse(self );
            if (it==failobj) {
                it=failobj;
                goto pass2;
            }
            _autovar_2=it;;
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
                goto revert4;
            }
success2:
            *ptr=oldpass2;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept6;
revert4:
            ;
            goto alt2_2;
accept6:
            ;

            ;
            ptr->branches-=2;
            goto accept5;
alt2_2:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert5;
            }
            __result=it;;

            ;
            goto accept7;
revert5:
            ;
            goto alt2_3;
accept7:
            ;

            ;
            ptr->branches-=1;
            goto accept5;
alt2_3:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept5:
            ;
            break;
        }
        break;
    case 1/*Array*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_10,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Append_AST*/:
        case 2/*Args*/:
        case 3/*Comment*/:
        case 4/*Concat_AST*/:
        case 5/*Enter_AST*/:
        case 6/*Many*/:
        case 7/*Or_AST*/:
        case 8/*Parenthesis*/:
        case 9/*Pass_AST*/:
        case 10/*Result*/:
        case 11/*Seq*/:
        case 12/*Seq_AST*/:
        case 13/*Stop*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=3;
            it=Analyze_Variables2_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert6;
            }
            __result=it;;

            ;
            goto accept9;
revert6:
            ;
            goto alt3_2;
accept9:
            ;

            ;
            ptr->branches-=3;
            goto accept8;
alt3_2:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_ary_new3(0);
            _ar=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos4=ptr->pos;
                int cut4=0;
alt4_1:
                if(!ptr->branches)ptr->discard=ptr->pos;
                ptr->branches+=2;
                it=Analyze_Variables2_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert8;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept12;
revert8:
                ;
                goto alt4_2;
accept12:
                ;

                ;
                ptr->branches-=2;
                goto accept11;
alt4_2:
                ptr->pos=oldpos4;
                ptr->branches-=1;
                stop1=1;
                ;
                goto accept13;
revert9:
                ;
                goto alt4_3;
accept13:
                ;

                ;
                ptr->branches-=1;
                goto accept11;
alt4_3:
                ptr->pos=oldpos4;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto pass3;
                };
accept11:
                ;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            it=_ar;
            _autovar_4=it;;

            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto revert7;
            }
success3:
            *ptr=oldpass3;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept10;
revert7:
            ;
            goto alt3_3;
accept10:
            ;

            ;
            ptr->branches-=2;
            goto accept8;
alt3_3:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert10;
            }
            __result=it;;

            ;
            goto accept14;
revert10:
            ;
            goto alt3_4;
accept14:
            ;

            ;
            ptr->branches-=1;
            goto accept8;
alt3_4:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept8:
            ;
            break;
        case 14/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_ary_new3(0);
            _ar=it;;
            int stop2=0;
            while(!stop2) {
                int oldpos6=ptr->pos;
                int cut6=0;
alt6_1:
                if(!ptr->branches)ptr->discard=ptr->pos;
                ptr->branches+=2;
                it=Analyze_Variables2_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert12;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept18;
revert12:
                ;
                goto alt6_2;
accept18:
                ;

                ;
                ptr->branches-=2;
                goto accept17;
alt6_2:
                ptr->pos=oldpos6;
                ptr->branches-=1;
                stop2=1;
                ;
                goto accept19;
revert13:
                ;
                goto alt6_3;
accept19:
                ;

                ;
                ptr->branches-=1;
                goto accept17;
alt6_3:
                ptr->pos=oldpos6;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto pass4;
                };
accept17:
                ;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass4;
            }
            it=_ar;
            _autovar_4=it;;

            goto success4;
pass4:
            *ptr=oldpass4;
            if (1) {
                it=failobj;
                goto revert11;
            }
success4:
            *ptr=oldpass4;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept16;
revert11:
            ;
            goto alt5_2;
accept16:
            ;

            ;
            ptr->branches-=2;
            goto accept15;
alt5_2:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert14;
            }
            __result=it;;

            ;
            goto accept20;
revert14:
            ;
            goto alt5_3;
accept20:
            ;

            ;
            ptr->branches-=1;
            goto accept15;
alt5_3:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept15:
            ;
            break;
        }
        break;
    case 2/*Object*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_11,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Append_AST*/:
        case 2/*Args*/:
        case 3/*Comment*/:
        case 4/*Concat_AST*/:
        case 5/*Enter_AST*/:
        case 6/*Many*/:
        case 7/*Or_AST*/:
        case 8/*Parenthesis*/:
        case 9/*Pass_AST*/:
        case 10/*Result*/:
        case 11/*Seq*/:
        case 12/*Seq_AST*/:
        case 13/*Stop*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=Analyze_Variables2_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert15;
            }
            __result=it;;

            ;
            goto accept22;
revert15:
            ;
            goto alt7_2;
accept22:
            ;

            ;
            ptr->branches-=2;
            goto accept21;
alt7_2:
            ptr->pos=oldpos7;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert16;
            }
            __result=it;;

            ;
            goto accept23;
revert16:
            ;
            goto alt7_3;
accept23:
            ;

            ;
            ptr->branches-=1;
            goto accept21;
alt7_3:
            ptr->pos=oldpos7;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept21:
            ;
            break;
        case 14/*Object*/:
            ;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto fail;
            }
            __result=it;;
            break;
        }
        break;
    }
fail:
    return it;
}
VALUE Analyze_Variables2_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_pred=Qnil,_pure=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_ary=Qnil,_autovar_10=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,__result=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_autovar_17=Qnil,_autovar_18=Qnil,_autovar_19=Qnil,_autovar_20=Qnil,_autovar_21=Qnil,_autovar_22=Qnil,_autovar_23=Qnil,_autovar_24=Qnil,_a=Qnil,_autovar_25=Qnil,_autovar_26=Qnil,_autovar_27=Qnil,_autovar_28=Qnil,_autovar_29=Qnil,_autovar_30=Qnil,_autovar_31=Qnil,_autovar_32=Qnil,_autovar_33=Qnil,_autovar_34=Qnil,_autovar_35=Qnil,_autovar_36=Qnil,_autovar_37=Qnil,_oldstop=Qnil,_ary2=Qnil,_ret=Qnil,_autovar_38=Qnil,_autovar_39=Qnil,_autovar_40=Qnil,_autovar_41=Qnil,_autovar_42=Qnil,_autovar_43=Qnil,_autovar_44=Qnil,_autovar_45=Qnil,_autovar_46=Qnil,_autovar_47=Qnil,_autovar_48=Qnil,_autovar_49=Qnil,_autovar_50=Qnil,_autovar_51=Qnil,_autovar_52=Qnil,_autovar_53=Qnil,_autovar_54=Qnil,_autovar_55=Qnil,_autovar_56=Qnil;
    VALUE bind2=bind_new2(3);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_3);
        it=rb_funcall(self,sy_Analyze_Variables2_src_dot_pred_56d4,1,bind2);
        _pred=it;;
        it=rb_funcall(self,sy_Analyze_Variables2_src_dot_pure_41d4,1,bind2);
        _pure=it;;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Analyze_Variables2_traverse(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _autovar_4=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_4);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Analyze_Variables2_src_dot_ary_d5cf,1,bind2);
        _autovar_5=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_5;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _autovar_6=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_6);
        switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Args*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            bind_aset(bind2,1,_pred);
            it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind2);
            _pred=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto revert1;
            };
            if (1) {
                it=failobj;
                goto revert1;
            }
            ;
            goto accept2;
revert1:
            ;
            goto alt1_2;
accept2:
            ;

            ;
            ptr->branches-=2;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_7=it;;
            cstruct oldpass5=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_7);
            it=rb_ary_new3(0);
            _autovar_8=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos2=ptr->pos;
                int cut2=0;
alt2_1:
                if(!ptr->branches)ptr->discard=ptr->pos;
                ptr->branches+=2;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert3;
                }
                _autovar_9=it;;
                it=AmethystCore_append(self,_autovar_8,_autovar_9);
                ;
                goto accept5;
revert3:
                ;
                goto alt2_2;
accept5:
                ;

                ;
                ptr->branches-=2;
                goto accept4;
alt2_2:
                ptr->pos=oldpos2;
                ptr->branches-=1;
                stop1=1;
                ;
                goto accept6;
revert4:
                ;
                goto alt2_3;
accept6:
                ;

                ;
                ptr->branches-=1;
                goto accept4;
alt2_3:
                ptr->pos=oldpos2;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto pass5;
                };
accept4:
                ;
            }
            it=_autovar_8;
            _ary=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_pred);
            bind_aset(bind2,3,_pure);
            it=rb_funcall(self,sy_Analyze_Variables2_Act_lb_bind_4ccd,1,bind2);
            _ary=bind_aget(bind2,1);;
            _pred=bind_aget(bind2,2);;
            _pure=bind_aget(bind2,3);;
            _autovar_10=it;;
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
                goto revert2;
            }
success5:
            *ptr=oldpass5;
            it=_autovar_10;
            _autovar_11=it;;

            ;
            goto accept3;
revert2:
            ;
            goto alt1_3;
accept3:
            ;

            ;
            ptr->branches-=1;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass4;
            };
accept1:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass4;
            }
            break;
        case 1/*Local*/:
            ;
            bind_aset(bind2,1,_pred);
            it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind2);
            _pred=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto pass4;
            };
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_11=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass4;
            }
            break;
        case 2/*Object*/:
            ;
            bind_aset(bind2,1,_pred);
            it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind2);
            _pred=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto pass4;
            };
            if (1) {
                it=failobj;
                goto pass4;
            }
            break;
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
        it=_autovar_11;
        _autovar_12=it;;

        goto success3;
pass3:
        *ptr=oldpass3;
        if (1) {
            it=failobj;
            goto pass2;
        }
success3:
        *ptr=oldpass3;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass2;
        }
        it=_autovar_12;
        _autovar_13=it;;

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
        it=_autovar_13;
        _autovar_14=it;;

        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_14;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 1/*Append_AST*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_16=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_16);
        it=rb_funcall(self,sy_Analyze_Variables2_Append_lb_s_f381,1,bind2);
        _autovar_17=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_17);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Analyze_Variables2_traverse(self );
        if (it==failobj) {
            it=failobj;
            goto pass7;
        }
        _autovar_18=it;;
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
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass6;
        }
        it=_autovar_18;
        _autovar_19=it;;

        goto success6;
pass6:
        *ptr=oldpass6;
        if (1) {
            it=failobj;
            goto fail;
        }
success6:
        *ptr=oldpass6;
        it=_autovar_19;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 2/*Args*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_20=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_20);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Analyze_Variables2_traverse(self );
        if (it==failobj) {
            it=failobj;
            goto pass8;
        }
        _autovar_21=it;;
        cstruct oldpass9=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_21);
        int stop2=0;
        while(!stop2) {
            switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_6,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Lambda*/:
                ;
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                if(!ptr->branches)ptr->discard=ptr->pos;
                ptr->branches+=3;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                _autovar_22=it;;
                cstruct oldpass10=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_22);
                bind_aset(bind2,1,_autovar_2);
                it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
                _autovar_2=bind_aget(bind2,1);;
                it=Analyze_Variables2_traverse(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass10;
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
                    goto revert5;
                }
success10:
                *ptr=oldpass10;

                ;
                goto accept8;
revert5:
                ;
                goto alt3_2;
accept8:
                ;

                ;
                ptr->branches-=3;
                goto accept7;
alt3_2:
                ptr->pos=oldpos3;
                ptr->branches-=1;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert6;
                }
                ;
                goto accept9;
revert6:
                ;
                goto alt3_3;
accept9:
                ;

                ;
                ptr->branches-=2;
                goto accept7;
alt3_3:
                ptr->pos=oldpos3;
                ptr->branches-=1;
                stop2=1;
                ;
                goto accept10;
revert7:
                ;
                goto alt3_4;
accept10:
                ;

                ;
                ptr->branches-=1;
                goto accept7;
alt3_4:
                ptr->pos=oldpos3;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto pass9;
                };
accept7:
                ;
                break;
            case 1/*Object*/:
                ;
                int oldpos4=ptr->pos;
                int cut4=0;
alt4_1:
                if(!ptr->branches)ptr->discard=ptr->pos;
                ptr->branches+=2;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert8;
                }
                ;
                goto accept12;
revert8:
                ;
                goto alt4_2;
accept12:
                ;

                ;
                ptr->branches-=2;
                goto accept11;
alt4_2:
                ptr->pos=oldpos4;
                ptr->branches-=1;
                stop2=1;
                ;
                goto accept13;
revert9:
                ;
                goto alt4_3;
accept13:
                ;

                ;
                ptr->branches-=1;
                goto accept11;
alt4_3:
                ptr->pos=oldpos4;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto pass9;
                };
accept11:
                ;
                break;
            }
        }
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2_src_dot_ary_dot__be44,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _autovar_23=it;;
        cstruct oldpass11=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_23;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass11;
        }
        _autovar_24=it;;
        cstruct oldpass12=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_24);
        it=Analyze_Variables2_flatten(self );
        _a=it;;
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
            goto pass9;
        }
success11:
        *ptr=oldpass11;
        bind_aset(bind2,1,_a);
        it=rb_funcall(self,sy_Analyze_Variables2_connects_04d2,1,bind2);
        _a=bind_aget(bind2,1);;
        _ary=it;;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Analyze_Variables2__lp_bind_lb_1_rb__e3f1,1,bind2);
        _ary=bind_aget(bind2,1);;
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
            goto pass8;
        }
success9:
        *ptr=oldpass9;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass8;
        }
        it=_autovar_25;
        _autovar_26=it;;

        goto success8;
pass8:
        *ptr=oldpass8;
        if (1) {
            it=failobj;
            goto fail;
        }
success8:
        *ptr=oldpass8;
        it=_autovar_26;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 3/*Comment*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_27=it;;
        cstruct oldpass13=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_27);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Analyze_Variables2_Placehol_6875,1,bind2);
        _autovar_28=it;;
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
            goto fail;
        }
success13:
        *ptr=oldpass13;
        it=_autovar_28;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 4/*Concat_AST*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_29=it;;
        cstruct oldpass14=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_29);
        it=rb_funcall(self,sy_Analyze_Variables2_Concat_lb_s_ba37,1,bind2);
        _autovar_30=it;;
        cstruct oldpass15=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_30);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Analyze_Variables2_traverse(self );
        if (it==failobj) {
            it=failobj;
            goto pass15;
        }
        _autovar_31=it;;
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
            goto pass14;
        }
success15:
        *ptr=oldpass15;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass14;
        }
        it=_autovar_31;
        _autovar_32=it;;

        goto success14;
pass14:
        *ptr=oldpass14;
        if (1) {
            it=failobj;
            goto fail;
        }
success14:
        *ptr=oldpass14;
        it=_autovar_32;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 5/*Enter_AST*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_33=it;;
        cstruct oldpass16=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_33);
        it=rb_funcall(self,sy_Analyze_Variables2_Enter_lb_sr_4871,1,bind2);
        _autovar_34=it;;
        cstruct oldpass17=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_34);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Analyze_Variables2_traverse(self );
        if (it==failobj) {
            it=failobj;
            goto pass17;
        }
        _autovar_35=it;;
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
            goto pass16;
        }
success17:
        *ptr=oldpass17;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass16;
        }
        it=_autovar_35;
        _autovar_36=it;;

        goto success16;
pass16:
        *ptr=oldpass16;
        if (1) {
            it=failobj;
            goto fail;
        }
success16:
        *ptr=oldpass16;
        it=_autovar_36;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 6/*Many*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_37=it;;
        cstruct oldpass18=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_37);
        it=rb_funcall(self,sy_Analyze_Variables2__at_stop_8c46,1,bind2);
        _oldstop=it;;
        it=rb_funcall(self,sy_Analyze_Variables2__at_stop_eq_fa_620e,1,bind2);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Analyze_Variables2_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto pass18;
        }
        _ary2=it;;
        bind_aset(bind2,1,_ary2);
        it=rb_funcall(self,sy_Analyze_Variables2_Many_dot_cre_6376,1,bind2);
        _ary2=bind_aget(bind2,1);;
        _ret=it;;
        bind_aset(bind2,1,_oldstop);
        it=rb_funcall(self,sy_Analyze_Variables2__at_stop_eq_bi_5f9f,1,bind2);
        _oldstop=bind_aget(bind2,1);;
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
            goto fail;
        }
success18:
        *ptr=oldpass18;
        bind_aset(bind2,1,_ret);
        it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb_,1,bind2);
        _ret=bind_aget(bind2,1);;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 7/*Or_AST*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_38=it;;
        cstruct oldpass19=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_38);
        it=rb_ary_new3(0);
        _autovar_39=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=Analyze_Variables2_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto revert10;
            }
            _autovar_40=it;;
            it=AmethystCore_append(self,_autovar_39,_autovar_40);
            ;
            goto accept15;
revert10:
            ;
            goto alt5_2;
accept15:
            ;

            ;
            ptr->branches-=2;
            goto accept14;
alt5_2:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            stop3=1;
            ;
            goto accept16;
revert11:
            ;
            goto alt5_3;
accept16:
            ;

            ;
            ptr->branches-=1;
            goto accept14;
alt5_3:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass19;
            };
accept14:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass19;
        }
        it=_autovar_39;
        _ary=it;;

        goto success19;
pass19:
        *ptr=oldpass19;
        if (1) {
            it=failobj;
            goto fail;
        }
success19:
        *ptr=oldpass19;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Analyze_Variables2_Or_lb__ti_bind_5a27,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 8/*Parenthesis*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_41=it;;
        cstruct oldpass20=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_41);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Analyze_Variables2_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto pass20;
        }
        _autovar_42=it;;
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
            goto fail;
        }
success20:
        *ptr=oldpass20;
        it=_autovar_42;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 9/*Pass_AST*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_43=it;;
        cstruct oldpass21=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_43);
        it=rb_funcall(self,sy_Analyze_Variables2_Pass_lb_src_99d4,1,bind2);
        _autovar_44=it;;
        cstruct oldpass22=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_44);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Analyze_Variables2_traverse(self );
        if (it==failobj) {
            it=failobj;
            goto pass22;
        }
        _autovar_45=it;;
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
            goto pass21;
        }
success22:
        *ptr=oldpass22;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass21;
        }
        it=_autovar_45;
        _autovar_46=it;;

        goto success21;
pass21:
        *ptr=oldpass21;
        if (1) {
            it=failobj;
            goto fail;
        }
success21:
        *ptr=oldpass21;
        it=_autovar_46;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 10/*Result*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_47=it;;
        cstruct oldpass23=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_47);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2_cls_eq_Obje_d8f9,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _autovar_48=it;;
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
        it=_autovar_48;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 11/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_49=it;;
        cstruct oldpass24=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_49);
        it=rb_ary_new3(0);
        _autovar_50=it;;
        int stop4=0;
        while(!stop4) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=Analyze_Variables2_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto revert12;
            }
            _autovar_51=it;;
            it=AmethystCore_append(self,_autovar_50,_autovar_51);
            ;
            goto accept18;
revert12:
            ;
            goto alt6_2;
accept18:
            ;

            ;
            ptr->branches-=2;
            goto accept17;
alt6_2:
            ptr->pos=oldpos6;
            ptr->branches-=1;
            stop4=1;
            ;
            goto accept19;
revert13:
            ;
            goto alt6_3;
accept19:
            ;

            ;
            ptr->branches-=1;
            goto accept17;
alt6_3:
            ptr->pos=oldpos6;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass24;
            };
accept17:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass24;
        }
        it=_autovar_50;
        _ary=it;;

        goto success24;
pass24:
        *ptr=oldpass24;
        if (1) {
            it=failobj;
            goto fail;
        }
success24:
        *ptr=oldpass24;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Analyze_Variables2_Seq_lb__ti_bin_1174,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 12/*Seq_AST*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_52=it;;
        cstruct oldpass25=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_52);
        it=rb_ary_new3(0);
        _autovar_53=it;;
        int stop5=0;
        while(!stop5) {
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=Analyze_Variables2_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto revert14;
            }
            _autovar_54=it;;
            it=AmethystCore_append(self,_autovar_53,_autovar_54);
            ;
            goto accept21;
revert14:
            ;
            goto alt7_2;
accept21:
            ;

            ;
            ptr->branches-=2;
            goto accept20;
alt7_2:
            ptr->pos=oldpos7;
            ptr->branches-=1;
            stop5=1;
            ;
            goto accept22;
revert15:
            ;
            goto alt7_3;
accept22:
            ;

            ;
            ptr->branches-=1;
            goto accept20;
alt7_3:
            ptr->pos=oldpos7;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto pass25;
            };
accept20:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass25;
        }
        it=_autovar_53;
        _ary=it;;

        goto success25;
pass25:
        *ptr=oldpass25;
        if (1) {
            it=failobj;
            goto fail;
        }
success25:
        *ptr=oldpass25;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Analyze_Variables2_Seq_lb__ti_bin_1174,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 13/*Stop*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_55=it;;
        cstruct oldpass26=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_55);
        it=rb_funcall(self,sy_Analyze_Variables2__at_stop_eq_tr_52d4,1,bind2);
        _autovar_56=it;;
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
        it=_autovar_56;
        __result=it;;
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_15);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_15=bind_aget(bind2,2);;
        break;
    case 14/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Analyze_Variables2__at__contex_5f56,1,bind2);
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
void Init_Analyze_Variables2_c() {
    cls_Analyze_Variables2=rb_define_class("Analyze_Variables2",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Analyze_Variables2,"profile_report",profile_report_Analyze_Variables2,0);
    switchhash_Analyze_Variables2_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Append_AST\nnext h[k]=2 if k<=Args\nnext h[k]=3 if k<=Comment\nnext h[k]=4 if k<=Concat_AST\nnext h[k]=5 if k<=Enter_AST\nnext h[k]=6 if k<=Many\nnext h[k]=7 if k<=Or_AST\nnext h[k]=8 if k<=Parenthesis\nnext h[k]=9 if k<=Pass_AST\nnext h[k]=10 if k<=Result\nnext h[k]=11 if k<=Seq\nnext h[k]=12 if k<=Seq_AST\nnext h[k]=13 if k<=Stop\nnext h[k]=14 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_10);;
    switchhash_Analyze_Variables2_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Append_AST\nnext h[k]=2 if k<=Args\nnext h[k]=3 if k<=Comment\nnext h[k]=4 if k<=Concat_AST\nnext h[k]=5 if k<=Enter_AST\nnext h[k]=6 if k<=Many\nnext h[k]=7 if k<=Or_AST\nnext h[k]=8 if k<=Parenthesis\nnext h[k]=9 if k<=Pass_AST\nnext h[k]=10 if k<=Result\nnext h[k]=11 if k<=Seq\nnext h[k]=12 if k<=Seq_AST\nnext h[k]=13 if k<=Stop\nnext h[k]=14 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_11);;
    switchhash_Analyze_Variables2_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_1);;
    switchhash_Analyze_Variables2_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_2);;
    switchhash_Analyze_Variables2_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_3);;
    switchhash_Analyze_Variables2_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Append_AST\nnext h[k]=2 if k<=Args\nnext h[k]=3 if k<=Comment\nnext h[k]=4 if k<=Concat_AST\nnext h[k]=5 if k<=Enter_AST\nnext h[k]=6 if k<=Many\nnext h[k]=7 if k<=Or_AST\nnext h[k]=8 if k<=Parenthesis\nnext h[k]=9 if k<=Pass_AST\nnext h[k]=10 if k<=Result\nnext h[k]=11 if k<=Seq\nnext h[k]=12 if k<=Seq_AST\nnext h[k]=13 if k<=Stop\nnext h[k]=14 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_4);;
    switchhash_Analyze_Variables2_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Local\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_5);;
    switchhash_Analyze_Variables2_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Lambda\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_6);;
    switchhash_Analyze_Variables2_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Strin\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_7);;
    switchhash_Analyze_Variables2_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_8);;
    switchhash_Analyze_Variables2_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Append_AST\nnext h[k]=2 if k<=Args\nnext h[k]=3 if k<=Comment\nnext h[k]=4 if k<=Concat_AST\nnext h[k]=5 if k<=Enter_AST\nnext h[k]=6 if k<=Many\nnext h[k]=7 if k<=Or_AST\nnext h[k]=8 if k<=Parenthesis\nnext h[k]=9 if k<=Pass_AST\nnext h[k]=10 if k<=Result\nnext h[k]=11 if k<=Seq\nnext h[k]=12 if k<=Seq_AST\nnext h[k]=13 if k<=Stop\nnext h[k]=14 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_9);;
    sy_Analyze_Variables2_Act_lb_bind_4ccd=rb_intern("Analyze_Variables2_Act_lb_bind_4ccd");
    sy_Analyze_Variables2_Append_lb_s_f381=rb_intern("Analyze_Variables2_Append_lb_s_f381");
    sy_Analyze_Variables2_Concat_lb_s_ba37=rb_intern("Analyze_Variables2_Concat_lb_s_ba37");
    sy_Analyze_Variables2_Enter_lb_sr_4871=rb_intern("Analyze_Variables2_Enter_lb_sr_4871");
    sy_Analyze_Variables2_Many_dot_cre_6376=rb_intern("Analyze_Variables2_Many_dot_cre_6376");
    sy_Analyze_Variables2_Or_lb__ti_bind_5a27=rb_intern("Analyze_Variables2_Or_lb__ti_bind_5a27");
    sy_Analyze_Variables2_Pass_lb_src_99d4=rb_intern("Analyze_Variables2_Pass_lb_src_99d4");
    sy_Analyze_Variables2_Placehol_6875=rb_intern("Analyze_Variables2_Placehol_6875");
    sy_Analyze_Variables2_Seq_lb__ti_bin_1174=rb_intern("Analyze_Variables2_Seq_lb__ti_bin_1174");
    sy_Analyze_Variables2__at__contex_5f56=rb_intern("Analyze_Variables2__at__contex_5f56");
    sy_Analyze_Variables2__at__contex_cdb3=rb_intern("Analyze_Variables2__at__contex_cdb3");
    sy_Analyze_Variables2__at__contex_d6d5=rb_intern("Analyze_Variables2__at__contex_d6d5");
    sy_Analyze_Variables2__at_stop_8c46=rb_intern("Analyze_Variables2__at_stop_8c46");
    sy_Analyze_Variables2__at_stop_eq_bi_5f9f=rb_intern("Analyze_Variables2__at_stop_eq_bi_5f9f");
    sy_Analyze_Variables2__at_stop_eq_fa_620e=rb_intern("Analyze_Variables2__at_stop_eq_fa_620e");
    sy_Analyze_Variables2__at_stop_eq_tr_52d4=rb_intern("Analyze_Variables2__at_stop_eq_tr_52d4");
    sy_Analyze_Variables2__lp_=rb_intern("Analyze_Variables2__lp_");
    sy_Analyze_Variables2__lp_bind_lb_1_rb__e3f1=rb_intern("Analyze_Variables2__lp_bind_lb_1_rb__e3f1");
    sy_Analyze_Variables2__lp_src_dot_cla_2024=rb_intern("Analyze_Variables2__lp_src_dot_cla_2024");
    sy_Analyze_Variables2_bind_lb_1_rb_=rb_intern("Analyze_Variables2_bind_lb_1_rb_");
    sy_Analyze_Variables2_bind_lb_1_rb__lb__12e8=rb_intern("Analyze_Variables2_bind_lb_1_rb__lb__12e8");
    sy_Analyze_Variables2_bind_lb_1_rb__lb__9337=rb_intern("Analyze_Variables2_bind_lb_1_rb__lb__9337");
    sy_Analyze_Variables2_bind_lb_1_rb__lb__eb3a=rb_intern("Analyze_Variables2_bind_lb_1_rb__lb__eb3a");
    sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20=rb_intern("Analyze_Variables2_bind_lb_1_rb__lt__7b20");
    sy_Analyze_Variables2_bind_lb_1_rb__sp__6af0=rb_intern("Analyze_Variables2_bind_lb_1_rb__sp__6af0");
    sy_Analyze_Variables2_cls_eq_Obje_d8f9=rb_intern("Analyze_Variables2_cls_eq_Obje_d8f9");
    sy_Analyze_Variables2_connects_04d2=rb_intern("Analyze_Variables2_connects_04d2");
    sy_Analyze_Variables2_d_eq_src_dot_du_2c72=rb_intern("Analyze_Variables2_d_eq_src_dot_du_2c72");
    sy_Analyze_Variables2_if_sp_bind_lb__1bed=rb_intern("Analyze_Variables2_if_sp_bind_lb__1bed");
    sy_Analyze_Variables2_src_25d9=rb_intern("Analyze_Variables2_src_25d9");
    sy_Analyze_Variables2_src_dot_ary_d5cf=rb_intern("Analyze_Variables2_src_dot_ary_d5cf");
    sy_Analyze_Variables2_src_dot_ary_dot__be44=rb_intern("Analyze_Variables2_src_dot_ary_dot__be44");
    sy_Analyze_Variables2_src_dot_dup_d768=rb_intern("Analyze_Variables2_src_dot_dup_d768");
    sy_Analyze_Variables2_src_dot_pred_56d4=rb_intern("Analyze_Variables2_src_dot_pred_56d4");
    sy_Analyze_Variables2_src_dot_pure_41d4=rb_intern("Analyze_Variables2_src_dot_pure_41d4");
    sy_Analyze_Variables2_src_dot_rule_5acf=rb_intern("Analyze_Variables2_src_dot_rule_5acf");
    sy_Analyze_Variables2_src_dot_rule_a719=rb_intern("Analyze_Variables2_src_dot_rule_a719");
    rb_define_method(cls_Analyze_Variables2,"flatten",Analyze_Variables2_flatten,0);
    rb_define_method(cls_Analyze_Variables2,"itrans",Analyze_Variables2_itrans,0);
    rb_define_method(cls_Analyze_Variables2,"root",Analyze_Variables2_root,0);
    rb_define_method(cls_Analyze_Variables2,"traverse",Analyze_Variables2_traverse,0);
    rb_define_method(cls_Analyze_Variables2,"traverse_item",Analyze_Variables2_traverse_item,0);
    rb_define_method(cls_Analyze_Variables2,"visit",Analyze_Variables2_visit,0);
}
