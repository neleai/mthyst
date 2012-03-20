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
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
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
            ;
            VALUE lalt12autovar_2=_autovar_2;
            VALUE lalt12autovar_3=_autovar_3;
            VALUE lalt12autovar_4=_autovar_4;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22autovar_2=_autovar_2;
            VALUE lalt22autovar_3=_autovar_3;
            VALUE lalt22autovar_4=_autovar_4;
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
                goto alt2_2;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_3;
            _autovar_4=it;;

            ;
            goto accept2;
alt2_2:
            _autovar_2=lalt22autovar_2;
            _autovar_3=lalt22autovar_3;
            _autovar_4=lalt22autovar_4;
            ptr->pos=oldpos2;
            VALUE lalt23autovar_2=_autovar_2;
            VALUE lalt23autovar_3=_autovar_3;
            VALUE lalt23autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            _autovar_4=it;;

            ;
            goto accept2;
alt2_3:
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
            it=AmethystCore_append(self,_autovar,_autovar_4);
            ;
            goto accept1;
alt1_2:
            _autovar_2=lalt12autovar_2;
            _autovar_3=lalt12autovar_3;
            _autovar_4=lalt12autovar_4;
            ptr->pos=oldpos1;
            VALUE lalt13autovar_2=_autovar_2;
            VALUE lalt13autovar_3=_autovar_3;
            VALUE lalt13autovar_4=_autovar_4;
            stop1=1;
            ;
            goto accept1;
alt1_3:
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
        case 1/*Strin*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE lalt32autovar_4=_autovar_4;
            VALUE lalt32autovar_5=_autovar_5;
            VALUE lalt32autovar_6=_autovar_6;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE lalt42autovar_4=_autovar_4;
            VALUE lalt42autovar_5=_autovar_5;
            VALUE lalt42autovar_6=_autovar_6;
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
                goto alt4_2;
            }
success2:
            *ptr=oldpass2;
            it=_autovar_6;
            _autovar_4=it;;

            ;
            goto accept4;
alt4_2:
            _autovar_4=lalt42autovar_4;
            _autovar_5=lalt42autovar_5;
            _autovar_6=lalt42autovar_6;
            ptr->pos=oldpos4;
            VALUE lalt43autovar_4=_autovar_4;
            VALUE lalt43autovar_5=_autovar_5;
            VALUE lalt43autovar_6=_autovar_6;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_3;
            }
            _autovar_4=it;;

            ;
            goto accept4;
alt4_3:
            _autovar_4=lalt43autovar_4;
            _autovar_5=lalt43autovar_5;
            _autovar_6=lalt43autovar_6;
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto alt3_2;
            };
accept4:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_4);
            ;
            goto accept3;
alt3_2:
            _autovar_4=lalt32autovar_4;
            _autovar_5=lalt32autovar_5;
            _autovar_6=lalt32autovar_6;
            ptr->pos=oldpos3;
            VALUE lalt33autovar_4=_autovar_4;
            VALUE lalt33autovar_5=_autovar_5;
            VALUE lalt33autovar_6=_autovar_6;
            stop1=1;
            ;
            goto accept3;
alt3_3:
            _autovar_4=lalt33autovar_4;
            _autovar_5=lalt33autovar_5;
            _autovar_6=lalt33autovar_6;
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto fail;
            };
accept3:
            ;
            break;
        case 2/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            VALUE lalt52autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            _autovar_4=it;;
            it=AmethystCore_append(self,_autovar,_autovar_4);
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
                goto fail;
            };
accept5:
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
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_rules,_autovar_9,_autovar_10,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
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
            ;
            VALUE lalt12autovar_2=_autovar_2;
            VALUE lalt12autovar_3=_autovar_3;
            VALUE lalt12autovar_4=_autovar_4;
            VALUE lalt12autovar_5=_autovar_5;
            VALUE lalt12autovar_6=_autovar_6;
            VALUE lalt12autovar_7=_autovar_7;
            VALUE lalt12autovar_8=_autovar_8;
            VALUE lalt12rules=_rules;
            VALUE lalt12autovar_9=_autovar_9;
            VALUE lalt12autovar_10=_autovar_10;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22autovar_2=_autovar_2;
            VALUE lalt22autovar_3=_autovar_3;
            VALUE lalt22autovar_4=_autovar_4;
            VALUE lalt22autovar_5=_autovar_5;
            VALUE lalt22autovar_6=_autovar_6;
            VALUE lalt22autovar_7=_autovar_7;
            VALUE lalt22autovar_8=_autovar_8;
            VALUE lalt22rules=_rules;
            VALUE lalt22autovar_9=_autovar_9;
            VALUE lalt22autovar_10=_autovar_10;
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
                    ;
                    VALUE lalt32autovar_6=_autovar_6;
                    VALUE lalt32autovar_7=_autovar_7;
                    VALUE lalt32autovar_8=_autovar_8;
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
                        goto alt3_2;
                    }
success4:
                    *ptr=oldpass4;
                    it=_autovar_7;
                    _autovar_8=it;;
                    it=AmethystCore_append(self,_autovar_5,_autovar_8);
                    ;
                    goto accept3;
alt3_2:
                    _autovar_6=lalt32autovar_6;
                    _autovar_7=lalt32autovar_7;
                    _autovar_8=lalt32autovar_8;
                    ptr->pos=oldpos3;
                    VALUE lalt33autovar_6=_autovar_6;
                    VALUE lalt33autovar_7=_autovar_7;
                    VALUE lalt33autovar_8=_autovar_8;
                    stop2=1;
                    ;
                    goto accept3;
alt3_3:
                    _autovar_6=lalt33autovar_6;
                    _autovar_7=lalt33autovar_7;
                    _autovar_8=lalt33autovar_8;
                    ptr->pos=oldpos3;
                    if (1) {
                        it=failobj;
                        goto pass3;
                    };
accept3:
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
                goto alt2_2;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_9;
            _autovar_10=it;;

            ;
            goto accept2;
alt2_2:
            _autovar_2=lalt22autovar_2;
            _autovar_3=lalt22autovar_3;
            _autovar_4=lalt22autovar_4;
            _autovar_5=lalt22autovar_5;
            _autovar_6=lalt22autovar_6;
            _autovar_7=lalt22autovar_7;
            _autovar_8=lalt22autovar_8;
            _rules=lalt22rules;
            _autovar_9=lalt22autovar_9;
            _autovar_10=lalt22autovar_10;
            ptr->pos=oldpos2;
            VALUE lalt23autovar_2=_autovar_2;
            VALUE lalt23autovar_3=_autovar_3;
            VALUE lalt23autovar_4=_autovar_4;
            VALUE lalt23autovar_5=_autovar_5;
            VALUE lalt23autovar_6=_autovar_6;
            VALUE lalt23autovar_7=_autovar_7;
            VALUE lalt23autovar_8=_autovar_8;
            VALUE lalt23rules=_rules;
            VALUE lalt23autovar_9=_autovar_9;
            VALUE lalt23autovar_10=_autovar_10;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            _autovar_10=it;;

            ;
            goto accept2;
alt2_3:
            _autovar_2=lalt23autovar_2;
            _autovar_3=lalt23autovar_3;
            _autovar_4=lalt23autovar_4;
            _autovar_5=lalt23autovar_5;
            _autovar_6=lalt23autovar_6;
            _autovar_7=lalt23autovar_7;
            _autovar_8=lalt23autovar_8;
            _rules=lalt23rules;
            _autovar_9=lalt23autovar_9;
            _autovar_10=lalt23autovar_10;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept2:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_10);
            ;
            goto accept1;
alt1_2:
            _autovar_2=lalt12autovar_2;
            _autovar_3=lalt12autovar_3;
            _autovar_4=lalt12autovar_4;
            _autovar_5=lalt12autovar_5;
            _autovar_6=lalt12autovar_6;
            _autovar_7=lalt12autovar_7;
            _autovar_8=lalt12autovar_8;
            _rules=lalt12rules;
            _autovar_9=lalt12autovar_9;
            _autovar_10=lalt12autovar_10;
            ptr->pos=oldpos1;
            VALUE lalt13autovar_2=_autovar_2;
            VALUE lalt13autovar_3=_autovar_3;
            VALUE lalt13autovar_4=_autovar_4;
            VALUE lalt13autovar_5=_autovar_5;
            VALUE lalt13autovar_6=_autovar_6;
            VALUE lalt13autovar_7=_autovar_7;
            VALUE lalt13autovar_8=_autovar_8;
            VALUE lalt13rules=_rules;
            VALUE lalt13autovar_9=_autovar_9;
            VALUE lalt13autovar_10=_autovar_10;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            _autovar_2=lalt13autovar_2;
            _autovar_3=lalt13autovar_3;
            _autovar_4=lalt13autovar_4;
            _autovar_5=lalt13autovar_5;
            _autovar_6=lalt13autovar_6;
            _autovar_7=lalt13autovar_7;
            _autovar_8=lalt13autovar_8;
            _rules=lalt13rules;
            _autovar_9=lalt13autovar_9;
            _autovar_10=lalt13autovar_10;
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
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE lalt42autovar_10=_autovar_10;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
            _autovar_10=it;;
            it=AmethystCore_append(self,_autovar,_autovar_10);
            ;
            goto accept4;
alt4_2:
            _autovar_10=lalt42autovar_10;
            ptr->pos=oldpos4;
            VALUE lalt43autovar_10=_autovar_10;
            stop1=1;
            ;
            goto accept4;
alt4_3:
            _autovar_10=lalt43autovar_10;
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
    it=_autovar;
    __result=it;;

fail:
    return it;
}
VALUE Analyze_Variables2_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,__result,_autovar_9;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
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
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
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
        ;
        VALUE lalt12nvars=_nvars;
        VALUE lalt12it=_it;
        it=Analyze_Variables2_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        ;
        goto accept1;
alt1_2:
        _nvars=lalt12nvars;
        _it=lalt12it;
        ptr->pos=oldpos1;
        VALUE lalt13nvars=_nvars;
        VALUE lalt13it=_it;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        _nvars=lalt13nvars;
        _it=lalt13it;
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
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
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
            ;
            VALUE lalt12_result=__result;
            it=Analyze_Variables2_visit(self );
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
            VALUE lalt13autovar=_autovar;
            VALUE lalt13autovar_2=_autovar_2;
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
                goto alt1_3;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept1;
alt1_3:
            __result=lalt13_result;
            _autovar=lalt13autovar;
            _autovar_2=lalt13autovar_2;
            ptr->pos=oldpos1;
            VALUE lalt14_result=__result;
            VALUE lalt14autovar=_autovar;
            VALUE lalt14autovar_2=_autovar_2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_4;
            }
            __result=it;;

            ;
            goto accept1;
alt1_4:
            __result=lalt14_result;
            _autovar=lalt14autovar;
            _autovar_2=lalt14autovar_2;
            ptr->pos=oldpos1;
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
            ;
            VALUE lalt22_result=__result;
            VALUE lalt22autovar=_autovar;
            VALUE lalt22autovar_2=_autovar_2;
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
                goto alt2_2;
            }
success2:
            *ptr=oldpass2;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept2;
alt2_2:
            __result=lalt22_result;
            _autovar=lalt22autovar;
            _autovar_2=lalt22autovar_2;
            ptr->pos=oldpos2;
            VALUE lalt23_result=__result;
            VALUE lalt23autovar=_autovar;
            VALUE lalt23autovar_2=_autovar_2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            __result=it;;

            ;
            goto accept2;
alt2_3:
            __result=lalt23_result;
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
            ;
            VALUE lalt32_result=__result;
            it=Analyze_Variables2_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            __result=it;;

            ;
            goto accept3;
alt3_2:
            __result=lalt32_result;
            ptr->pos=oldpos3;
            VALUE lalt33_result=__result;
            VALUE lalt33autovar_3=_autovar_3;
            VALUE lalt33ar=_ar;
            VALUE lalt33it=_it;
            VALUE lalt33autovar_4=_autovar_4;
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
                ;
                VALUE lalt42ar=_ar;
                VALUE lalt42it=_it;
                it=Analyze_Variables2_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt4_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept4;
alt4_2:
                _ar=lalt42ar;
                _it=lalt42it;
                ptr->pos=oldpos4;
                VALUE lalt43ar=_ar;
                VALUE lalt43it=_it;
                stop1=1;
                ;
                goto accept4;
alt4_3:
                _ar=lalt43ar;
                _it=lalt43it;
                ptr->pos=oldpos4;
                if (1) {
                    it=failobj;
                    goto pass3;
                };
accept4:
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
                goto alt3_3;
            }
success3:
            *ptr=oldpass3;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept3;
alt3_3:
            __result=lalt33_result;
            _autovar_3=lalt33autovar_3;
            _ar=lalt33ar;
            _it=lalt33it;
            _autovar_4=lalt33autovar_4;
            ptr->pos=oldpos3;
            VALUE lalt34_result=__result;
            VALUE lalt34autovar_3=_autovar_3;
            VALUE lalt34ar=_ar;
            VALUE lalt34it=_it;
            VALUE lalt34autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_4;
            }
            __result=it;;

            ;
            goto accept3;
alt3_4:
            __result=lalt34_result;
            _autovar_3=lalt34autovar_3;
            _ar=lalt34ar;
            _it=lalt34it;
            _autovar_4=lalt34autovar_4;
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto fail;
            };
accept3:
            ;
            break;
        case 14/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            VALUE lalt52_result=__result;
            VALUE lalt52autovar_3=_autovar_3;
            VALUE lalt52ar=_ar;
            VALUE lalt52it=_it;
            VALUE lalt52autovar_4=_autovar_4;
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
                ;
                VALUE lalt62ar=_ar;
                VALUE lalt62it=_it;
                it=Analyze_Variables2_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt6_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept6;
alt6_2:
                _ar=lalt62ar;
                _it=lalt62it;
                ptr->pos=oldpos6;
                VALUE lalt63ar=_ar;
                VALUE lalt63it=_it;
                stop2=1;
                ;
                goto accept6;
alt6_3:
                _ar=lalt63ar;
                _it=lalt63it;
                ptr->pos=oldpos6;
                if (1) {
                    it=failobj;
                    goto pass4;
                };
accept6:
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
                goto alt5_2;
            }
success4:
            *ptr=oldpass4;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept5;
alt5_2:
            __result=lalt52_result;
            _autovar_3=lalt52autovar_3;
            _ar=lalt52ar;
            _it=lalt52it;
            _autovar_4=lalt52autovar_4;
            ptr->pos=oldpos5;
            VALUE lalt53_result=__result;
            VALUE lalt53autovar_3=_autovar_3;
            VALUE lalt53ar=_ar;
            VALUE lalt53it=_it;
            VALUE lalt53autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_3;
            }
            __result=it;;

            ;
            goto accept5;
alt5_3:
            __result=lalt53_result;
            _autovar_3=lalt53autovar_3;
            _ar=lalt53ar;
            _it=lalt53it;
            _autovar_4=lalt53autovar_4;
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto fail;
            };
accept5:
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
            ;
            VALUE lalt72_result=__result;
            it=Analyze_Variables2_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            __result=it;;

            ;
            goto accept7;
alt7_2:
            __result=lalt72_result;
            ptr->pos=oldpos7;
            VALUE lalt73_result=__result;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_3;
            }
            __result=it;;

            ;
            goto accept7;
alt7_3:
            __result=lalt73_result;
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto fail;
            };
accept7:
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
    VALUE it ,_autovar,_autovar_2,_autovar_3,_pred,_pure,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_ary,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_autovar_14,__result,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_autovar_19,_autovar_20,_autovar_21,_autovar_22,_autovar_23,_autovar_24,_a,_autovar_25,_autovar_26,_autovar_27,_autovar_28,_autovar_29,_autovar_30,_autovar_31,_autovar_32,_autovar_33,_autovar_34,_autovar_35,_autovar_36,_autovar_37,_oldstop,_ary2,_ret,_autovar_38,_autovar_39,_autovar_40,_autovar_41,_autovar_42,_autovar_43,_autovar_44,_autovar_45,_autovar_46,_autovar_47,_autovar_48,_autovar_49,_autovar_50,_autovar_51,_autovar_52,_autovar_53,_autovar_54,_autovar_55,_autovar_56;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
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
            ;
            VALUE lalt12pred=_pred;
            bind_aset(bind2,1,_pred);
            it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind2);
            _pred=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            };
            if (1) {
                it=failobj;
                goto alt1_2;
            }
            ;
            goto accept1;
alt1_2:
            _pred=lalt12pred;
            ptr->pos=oldpos1;
            VALUE lalt13pred=_pred;
            VALUE lalt13pure=_pure;
            VALUE lalt13autovar_7=_autovar_7;
            VALUE lalt13autovar_8=_autovar_8;
            VALUE lalt13autovar_9=_autovar_9;
            VALUE lalt13ary=_ary;
            VALUE lalt13autovar_10=_autovar_10;
            VALUE lalt13autovar_11=_autovar_11;
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
                ;
                VALUE lalt22autovar_9=_autovar_9;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt2_2;
                }
                _autovar_9=it;;
                it=AmethystCore_append(self,_autovar_8,_autovar_9);
                ;
                goto accept2;
alt2_2:
                _autovar_9=lalt22autovar_9;
                ptr->pos=oldpos2;
                VALUE lalt23autovar_9=_autovar_9;
                stop1=1;
                ;
                goto accept2;
alt2_3:
                _autovar_9=lalt23autovar_9;
                ptr->pos=oldpos2;
                if (1) {
                    it=failobj;
                    goto pass5;
                };
accept2:
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
                goto alt1_3;
            }
success5:
            *ptr=oldpass5;
            it=_autovar_10;
            _autovar_11=it;;

            ;
            goto accept1;
alt1_3:
            _pred=lalt13pred;
            _pure=lalt13pure;
            _autovar_7=lalt13autovar_7;
            _autovar_8=lalt13autovar_8;
            _autovar_9=lalt13autovar_9;
            _ary=lalt13ary;
            _autovar_10=lalt13autovar_10;
            _autovar_11=lalt13autovar_11;
            ptr->pos=oldpos1;
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
                ;
                VALUE lalt32autovar_2=_autovar_2;
                VALUE lalt32autovar_22=_autovar_22;
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
                    goto alt3_2;
                }
success10:
                *ptr=oldpass10;

                ;
                goto accept3;
alt3_2:
                _autovar_2=lalt32autovar_2;
                _autovar_22=lalt32autovar_22;
                ptr->pos=oldpos3;
                VALUE lalt33autovar_2=_autovar_2;
                VALUE lalt33autovar_22=_autovar_22;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt3_3;
                }
                ;
                goto accept3;
alt3_3:
                _autovar_2=lalt33autovar_2;
                _autovar_22=lalt33autovar_22;
                ptr->pos=oldpos3;
                VALUE lalt34autovar_2=_autovar_2;
                VALUE lalt34autovar_22=_autovar_22;
                stop2=1;
                ;
                goto accept3;
alt3_4:
                _autovar_2=lalt34autovar_2;
                _autovar_22=lalt34autovar_22;
                ptr->pos=oldpos3;
                if (1) {
                    it=failobj;
                    goto pass9;
                };
accept3:
                ;
                break;
            case 1/*Object*/:
                ;
                int oldpos4=ptr->pos;
                int cut4=0;
alt4_1:
                ;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt4_2;
                }
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
                    goto pass9;
                };
accept4:
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
            ;
            VALUE lalt52autovar_2=_autovar_2;
            VALUE lalt52autovar_40=_autovar_40;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=Analyze_Variables2_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            _autovar_40=it;;
            it=AmethystCore_append(self,_autovar_39,_autovar_40);
            ;
            goto accept5;
alt5_2:
            _autovar_2=lalt52autovar_2;
            _autovar_40=lalt52autovar_40;
            ptr->pos=oldpos5;
            VALUE lalt53autovar_2=_autovar_2;
            VALUE lalt53autovar_40=_autovar_40;
            stop3=1;
            ;
            goto accept5;
alt5_3:
            _autovar_2=lalt53autovar_2;
            _autovar_40=lalt53autovar_40;
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto pass19;
            };
accept5:
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
            ;
            VALUE lalt62autovar_2=_autovar_2;
            VALUE lalt62autovar_51=_autovar_51;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=Analyze_Variables2_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto alt6_2;
            }
            _autovar_51=it;;
            it=AmethystCore_append(self,_autovar_50,_autovar_51);
            ;
            goto accept6;
alt6_2:
            _autovar_2=lalt62autovar_2;
            _autovar_51=lalt62autovar_51;
            ptr->pos=oldpos6;
            VALUE lalt63autovar_2=_autovar_2;
            VALUE lalt63autovar_51=_autovar_51;
            stop4=1;
            ;
            goto accept6;
alt6_3:
            _autovar_2=lalt63autovar_2;
            _autovar_51=lalt63autovar_51;
            ptr->pos=oldpos6;
            if (1) {
                it=failobj;
                goto pass24;
            };
accept6:
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
            ;
            VALUE lalt72autovar_2=_autovar_2;
            VALUE lalt72autovar_54=_autovar_54;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Analyze_Variables2__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=Analyze_Variables2_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            _autovar_54=it;;
            it=AmethystCore_append(self,_autovar_53,_autovar_54);
            ;
            goto accept7;
alt7_2:
            _autovar_2=lalt72autovar_2;
            _autovar_54=lalt72autovar_54;
            ptr->pos=oldpos7;
            VALUE lalt73autovar_2=_autovar_2;
            VALUE lalt73autovar_54=_autovar_54;
            stop5=1;
            ;
            goto accept7;
alt7_3:
            _autovar_2=lalt73autovar_2;
            _autovar_54=lalt73autovar_54;
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto pass25;
            };
accept7:
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
