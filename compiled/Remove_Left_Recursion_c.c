#include "cthyst.h"
#include "memo.c"
VALUE cls_Remove_Left_Recursion;
VALUE AmethystCore_anything(VALUE self );
VALUE Remove_Left_Recursion_first(VALUE self ,VALUE a0);
VALUE Remove_Left_Recursion_first(VALUE self ,VALUE);
VALUE Remove_Left_Recursion_must_empty(VALUE self );
VALUE Remove_Left_Recursion_root(VALUE self );
VALUE switchhash_Remove_Left_Recursion_1;
VALUE switchhash_Remove_Left_Recursion_2;
VALUE switchhash_Remove_Left_Recursion_3;
VALUE switchhash_Remove_Left_Recursion_4;
static VALUE sy_Remove_Left_Recursion_Bind_lb_src_66c4;
static VALUE sy_Remove_Left_Recursion_Or_lb_bind_lb__3169;
static VALUE sy_Remove_Left_Recursion_Seq_lb_bind_e0fb;
static VALUE sy_Remove_Left_Recursion_Seq_lb_bind_f95b;
static VALUE sy_Remove_Left_Recursion__at__contex_5f56;
static VALUE sy_Remove_Left_Recursion__at__contex_cdb3;
static VALUE sy_Remove_Left_Recursion__at__contex_d6d5;
static VALUE sy_Remove_Left_Recursion__at_left_re_c85d;
static VALUE sy_Remove_Left_Recursion__at_result_eq__b6ab;
static VALUE sy_Remove_Left_Recursion__lp_bind_lb_1_rb__5b9e;
static VALUE sy_Remove_Left_Recursion__lp_must_em_43e9;
static VALUE sy_Remove_Left_Recursion_bind_lb_1_rb__dot__44a5;
static VALUE sy_Remove_Left_Recursion_bind_lb_1_rb__lb__fa06;
static VALUE sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5;
static VALUE sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213;
static VALUE sy_Remove_Left_Recursion_src_25d9;
static VALUE sy_Remove_Left_Recursion_src_dot_body_519e;
static VALUE sy_Remove_Left_Recursion_src_dot_body_b6af;
VALUE profile_report_Remove_Left_Recursion(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Remove_Left_Recursion_first(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_follow,__result,_autovar_4,_x,_autovar_5,_autovar_6,_autovar_7,_expr,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_ary,_autovar_12,_autovar_13,_autovar_14,_first,_autovar_15,_autovar_16,_rest,_autovar_17,_autovar_18,_autovar_19,_autovar_20,_autovar_21;
    VALUE bind2=bind_new2(16);
    _follow=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12autovar_3=_autovar_3;
        VALUE lalt12follow=_follow;
        VALUE lalt12_result=__result;
        VALUE lalt12autovar_4=_autovar_4;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_3);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__lp_bind_lb_1_rb__5b9e,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass1;
        };
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Remove_Left_Recursion__at_left_re_c85d,1,bind2);
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
        bind_aset(bind2,1,_follow);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5,1,bind2);
        _follow=bind_aget(bind2,1);;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept1;
alt1_2:
        _autovar_2=lalt12autovar_2;
        _autovar_3=lalt12autovar_3;
        _follow=lalt12follow;
        __result=lalt12_result;
        _autovar_4=lalt12autovar_4;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13autovar_3=_autovar_3;
        VALUE lalt13follow=_follow;
        VALUE lalt13_result=__result;
        VALUE lalt13autovar_4=_autovar_4;
        VALUE lalt13x=_x;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept1;
alt1_3:
        _autovar_2=lalt13autovar_2;
        _autovar_3=lalt13autovar_3;
        _follow=lalt13follow;
        __result=lalt13_result;
        _autovar_4=lalt13autovar_4;
        _x=lalt13x;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_4);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_4=bind_aget(bind2,2);;
        break;
    case 1/*Bind*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22autovar_2=_autovar_2;
        VALUE lalt22_result=__result;
        VALUE lalt22autovar_4=_autovar_4;
        VALUE lalt22autovar_5=_autovar_5;
        VALUE lalt22autovar_6=_autovar_6;
        VALUE lalt22autovar_7=_autovar_7;
        VALUE lalt22expr=_expr;
        VALUE lalt22autovar_8=_autovar_8;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_5=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_5);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _autovar_6=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_6;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=_follow;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
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
        it=_autovar_7;
        _expr=it;;
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_src_66c4,1,bind2);
        _expr=bind_aget(bind2,1);;
        _autovar_8=it;;
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
        it=_autovar_8;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept2;
alt2_2:
        _autovar_2=lalt22autovar_2;
        __result=lalt22_result;
        _autovar_4=lalt22autovar_4;
        _autovar_5=lalt22autovar_5;
        _autovar_6=lalt22autovar_6;
        _autovar_7=lalt22autovar_7;
        _expr=lalt22expr;
        _autovar_8=lalt22autovar_8;
        ptr->pos=oldpos2;
        VALUE lalt23autovar_2=_autovar_2;
        VALUE lalt23follow=_follow;
        VALUE lalt23_result=__result;
        VALUE lalt23autovar_4=_autovar_4;
        VALUE lalt23x=_x;
        VALUE lalt23autovar_5=_autovar_5;
        VALUE lalt23autovar_6=_autovar_6;
        VALUE lalt23autovar_7=_autovar_7;
        VALUE lalt23expr=_expr;
        VALUE lalt23autovar_8=_autovar_8;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept2;
alt2_3:
        _autovar_2=lalt23autovar_2;
        _follow=lalt23follow;
        __result=lalt23_result;
        _autovar_4=lalt23autovar_4;
        _x=lalt23x;
        _autovar_5=lalt23autovar_5;
        _autovar_6=lalt23autovar_6;
        _autovar_7=lalt23autovar_7;
        _expr=lalt23expr;
        _autovar_8=lalt23autovar_8;
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept2:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_4);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_4=bind_aget(bind2,2);;
        break;
    case 2/*Or*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        VALUE lalt32autovar_2=_autovar_2;
        VALUE lalt32_result=__result;
        VALUE lalt32autovar_4=_autovar_4;
        VALUE lalt32autovar_9=_autovar_9;
        VALUE lalt32autovar_10=_autovar_10;
        VALUE lalt32autovar_11=_autovar_11;
        VALUE lalt32ary=_ary;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_9);
        it=rb_ary_new3(0);
        _autovar_10=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE lalt42autovar_2=_autovar_2;
            VALUE lalt42autovar_11=_autovar_11;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=_follow;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
            _autovar_11=it;;
            it=AmethystCore_append(self,_autovar_10,_autovar_11);
            ;
            goto accept4;
alt4_2:
            _autovar_2=lalt42autovar_2;
            _autovar_11=lalt42autovar_11;
            ptr->pos=oldpos4;
            VALUE lalt43autovar_2=_autovar_2;
            VALUE lalt43autovar_11=_autovar_11;
            stop1=1;
            ;
            goto accept4;
alt4_3:
            _autovar_2=lalt43autovar_2;
            _autovar_11=lalt43autovar_11;
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass4;
            };
accept4:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass4;
        }
        it=_autovar_10;
        _ary=it;;

        goto success4;
pass4:
        *ptr=oldpass4;
        if (1) {
            it=failobj;
            goto alt3_2;
        }
success4:
        *ptr=oldpass4;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept3;
alt3_2:
        _autovar_2=lalt32autovar_2;
        __result=lalt32_result;
        _autovar_4=lalt32autovar_4;
        _autovar_9=lalt32autovar_9;
        _autovar_10=lalt32autovar_10;
        _autovar_11=lalt32autovar_11;
        _ary=lalt32ary;
        ptr->pos=oldpos3;
        VALUE lalt33autovar_2=_autovar_2;
        VALUE lalt33follow=_follow;
        VALUE lalt33_result=__result;
        VALUE lalt33autovar_4=_autovar_4;
        VALUE lalt33x=_x;
        VALUE lalt33autovar_9=_autovar_9;
        VALUE lalt33autovar_10=_autovar_10;
        VALUE lalt33autovar_11=_autovar_11;
        VALUE lalt33ary=_ary;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_3;
        }
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept3;
alt3_3:
        _autovar_2=lalt33autovar_2;
        _follow=lalt33follow;
        __result=lalt33_result;
        _autovar_4=lalt33autovar_4;
        _x=lalt33x;
        _autovar_9=lalt33autovar_9;
        _autovar_10=lalt33autovar_10;
        _autovar_11=lalt33autovar_11;
        _ary=lalt33ary;
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto fail;
        };
accept3:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_4);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_4=bind_aget(bind2,2);;
        break;
    case 3/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        VALUE lalt52autovar_2=_autovar_2;
        VALUE lalt52_result=__result;
        VALUE lalt52autovar_4=_autovar_4;
        VALUE lalt52autovar_12=_autovar_12;
        VALUE lalt52autovar_14=_autovar_14;
        VALUE lalt52first=_first;
        VALUE lalt52autovar_15=_autovar_15;
        VALUE lalt52autovar_16=_autovar_16;
        VALUE lalt52rest=_rest;
        VALUE lalt52autovar_17=_autovar_17;
        VALUE lalt52autovar_18=_autovar_18;
        VALUE lalt52autovar_19=_autovar_19;
        VALUE lalt52autovar_20=_autovar_20;
        VALUE lalt52autovar_21=_autovar_21;
        VALUE lalt52autovar_13=_autovar_13;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_12=it;;
        it=_autovar_12;
        _autovar_13=it;;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        VALUE lalt62autovar_2=_autovar_2;
        VALUE lalt62_result=__result;
        VALUE lalt62autovar_4=_autovar_4;
        VALUE lalt62autovar_14=_autovar_14;
        VALUE lalt62first=_first;
        VALUE lalt62autovar_15=_autovar_15;
        VALUE lalt62autovar_16=_autovar_16;
        VALUE lalt62rest=_rest;
        VALUE lalt62autovar_17=_autovar_17;
        VALUE lalt62autovar_18=_autovar_18;
        it=_autovar_13;
        _autovar_14=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_14);
        it=Remove_Left_Recursion_must_empty(self );
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_15=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            VALUE lalt72autovar_16=_autovar_16;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            _autovar_16=it;;
            it=AmethystCore_append(self,_autovar_15,_autovar_16);
            ;
            goto accept7;
alt7_2:
            _autovar_16=lalt72autovar_16;
            ptr->pos=oldpos7;
            VALUE lalt73autovar_16=_autovar_16;
            stop2=1;
            ;
            goto accept7;
alt7_3:
            _autovar_16=lalt73autovar_16;
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto pass5;
            };
accept7:
            ;
        }
        it=_autovar_15;
        _rest=it;;
        bind_aset(bind2,1,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_e0fb,1,bind2);
        _rest=bind_aget(bind2,1);;
        _autovar_17=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_17;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=_follow;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass6;
        }
        _autovar_18=it;;
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
        it=_autovar_18;
        _rest=it;;

        goto success5;
pass5:
        *ptr=oldpass5;
        if (1) {
            it=failobj;
            goto alt6_2;
        }
success5:
        *ptr=oldpass5;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept6;
alt6_2:
        _autovar_2=lalt62autovar_2;
        __result=lalt62_result;
        _autovar_4=lalt62autovar_4;
        _autovar_14=lalt62autovar_14;
        _first=lalt62first;
        _autovar_15=lalt62autovar_15;
        _autovar_16=lalt62autovar_16;
        _rest=lalt62rest;
        _autovar_17=lalt62autovar_17;
        _autovar_18=lalt62autovar_18;
        ptr->pos=oldpos6;
        VALUE lalt63autovar_2=_autovar_2;
        VALUE lalt63_result=__result;
        VALUE lalt63autovar_4=_autovar_4;
        VALUE lalt63autovar_14=_autovar_14;
        VALUE lalt63first=_first;
        VALUE lalt63autovar_15=_autovar_15;
        VALUE lalt63autovar_16=_autovar_16;
        VALUE lalt63rest=_rest;
        VALUE lalt63autovar_17=_autovar_17;
        VALUE lalt63autovar_18=_autovar_18;
        VALUE lalt63autovar_19=_autovar_19;
        VALUE lalt63autovar_20=_autovar_20;
        VALUE lalt63autovar_21=_autovar_21;
        it=_autovar_13;
        _autovar_19=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_19);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=_follow;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass7;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_20=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            VALUE lalt82autovar_21=_autovar_21;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_2;
            }
            _autovar_21=it;;
            it=AmethystCore_append(self,_autovar_20,_autovar_21);
            ;
            goto accept8;
alt8_2:
            _autovar_21=lalt82autovar_21;
            ptr->pos=oldpos8;
            VALUE lalt83autovar_21=_autovar_21;
            stop3=1;
            ;
            goto accept8;
alt8_3:
            _autovar_21=lalt83autovar_21;
            ptr->pos=oldpos8;
            if (1) {
                it=failobj;
                goto pass7;
            };
accept8:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass7;
        }
        it=_autovar_20;
        _rest=it;;

        goto success7;
pass7:
        *ptr=oldpass7;
        if (1) {
            it=failobj;
            goto alt6_3;
        }
success7:
        *ptr=oldpass7;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept6;
alt6_3:
        _autovar_2=lalt63autovar_2;
        __result=lalt63_result;
        _autovar_4=lalt63autovar_4;
        _autovar_14=lalt63autovar_14;
        _first=lalt63first;
        _autovar_15=lalt63autovar_15;
        _autovar_16=lalt63autovar_16;
        _rest=lalt63rest;
        _autovar_17=lalt63autovar_17;
        _autovar_18=lalt63autovar_18;
        _autovar_19=lalt63autovar_19;
        _autovar_20=lalt63autovar_20;
        _autovar_21=lalt63autovar_21;
        ptr->pos=oldpos6;
        if (1) {
            it=failobj;
            goto alt5_2;
        };
accept6:
        ;

        ;
        goto accept5;
alt5_2:
        _autovar_2=lalt52autovar_2;
        __result=lalt52_result;
        _autovar_4=lalt52autovar_4;
        _autovar_12=lalt52autovar_12;
        _autovar_14=lalt52autovar_14;
        _first=lalt52first;
        _autovar_15=lalt52autovar_15;
        _autovar_16=lalt52autovar_16;
        _rest=lalt52rest;
        _autovar_17=lalt52autovar_17;
        _autovar_18=lalt52autovar_18;
        _autovar_19=lalt52autovar_19;
        _autovar_20=lalt52autovar_20;
        _autovar_21=lalt52autovar_21;
        _autovar_13=lalt52autovar_13;
        ptr->pos=oldpos5;
        VALUE lalt53autovar_2=_autovar_2;
        VALUE lalt53follow=_follow;
        VALUE lalt53_result=__result;
        VALUE lalt53autovar_4=_autovar_4;
        VALUE lalt53x=_x;
        VALUE lalt53autovar_12=_autovar_12;
        VALUE lalt53autovar_14=_autovar_14;
        VALUE lalt53first=_first;
        VALUE lalt53autovar_15=_autovar_15;
        VALUE lalt53autovar_16=_autovar_16;
        VALUE lalt53rest=_rest;
        VALUE lalt53autovar_17=_autovar_17;
        VALUE lalt53autovar_18=_autovar_18;
        VALUE lalt53autovar_19=_autovar_19;
        VALUE lalt53autovar_20=_autovar_20;
        VALUE lalt53autovar_21=_autovar_21;
        VALUE lalt53autovar_13=_autovar_13;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt5_3;
        }
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept5;
alt5_3:
        _autovar_2=lalt53autovar_2;
        _follow=lalt53follow;
        __result=lalt53_result;
        _autovar_4=lalt53autovar_4;
        _x=lalt53x;
        _autovar_12=lalt53autovar_12;
        _autovar_14=lalt53autovar_14;
        _first=lalt53first;
        _autovar_15=lalt53autovar_15;
        _autovar_16=lalt53autovar_16;
        _rest=lalt53rest;
        _autovar_17=lalt53autovar_17;
        _autovar_18=lalt53autovar_18;
        _autovar_19=lalt53autovar_19;
        _autovar_20=lalt53autovar_20;
        _autovar_21=lalt53autovar_21;
        _autovar_13=lalt53autovar_13;
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto fail;
        };
accept5:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_4);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_4=bind_aget(bind2,2);;
        break;
    case 4/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_4=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_4);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_4=bind_aget(bind2,2);;
        break;
    }
fail:
    return it;
}
VALUE Remove_Left_Recursion_must_empty(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_e,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _e=it;;
    bind_aset(bind2,1,_e);
    it=rb_funcall(self,sy_Remove_Left_Recursion__lp_must_em_43e9,1,bind2);
    _e=bind_aget(bind2,1);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_e;
    __result=it;;

fail:
    return it;
}
VALUE Remove_Left_Recursion_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_a,_autovar_3,_autovar_4,_autovar_5,_oldbody,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_follow,__result,_autovar_10,_x,_autovar_11,_autovar_12,_autovar_13,_autovar_14,_expr,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_ary,_autovar_19,_autovar_20,_autovar_21,_autovar_22,_first,_autovar_23,_autovar_24,_rest,_autovar_25,_autovar_26,_autovar_27,_autovar_28,_autovar_29,_first_2,_autovar_30,_autovar_31,_autovar_32,_autovar_33,_follow_2,_autovar_34,__result_2,_autovar_35;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _a=it;;
    bind_aset(bind2,1,_a);
    it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__dot__44a5,1,bind2);
    _a=bind_aget(bind2,1);;
    _autovar_3=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_3;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_1,rb_obj_class(ame_curobj2(ptr))))) {
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
    it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__lb__fa06,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=rb_funcall(self,sy_Remove_Left_Recursion__at_result_eq__b6ab,1,bind2);
    it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_519e,1,bind2);
    _oldbody=it;;
    it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_519e,1,bind2);
    _autovar_6=it;;
    cstruct oldpass3=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_6;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_8=bind_aget(bind2,2);;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar_8=_autovar_8;
        VALUE lalt12autovar_9=_autovar_9;
        VALUE lalt12follow=_follow;
        VALUE lalt12_result=__result;
        VALUE lalt12autovar_10=_autovar_10;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_9);
        bind_aset(bind2,1,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__lp_bind_lb_1_rb__5b9e,1,bind2);
        _autovar_8=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass4;
        };
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Remove_Left_Recursion__at_left_re_c85d,1,bind2);
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
            goto alt1_2;
        }
success4:
        *ptr=oldpass4;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5,1,bind2);
        _follow=bind_aget(bind2,1);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept1;
alt1_2:
        _autovar_8=lalt12autovar_8;
        _autovar_9=lalt12autovar_9;
        _follow=lalt12follow;
        __result=lalt12_result;
        _autovar_10=lalt12autovar_10;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_8=_autovar_8;
        VALUE lalt13autovar_9=_autovar_9;
        VALUE lalt13follow=_follow;
        VALUE lalt13_result=__result;
        VALUE lalt13autovar_10=_autovar_10;
        VALUE lalt13x=_x;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        _x=it;;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept1;
alt1_3:
        _autovar_8=lalt13autovar_8;
        _autovar_9=lalt13autovar_9;
        _follow=lalt13follow;
        __result=lalt13_result;
        _autovar_10=lalt13autovar_10;
        _x=lalt13x;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto pass3;
        };
accept1:
        ;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_10);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_10=bind_aget(bind2,2);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        it=__result;
        _autovar_11=it;;
        break;
    case 1/*Bind*/:
        ;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_8=bind_aget(bind2,2);;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22autovar_8=_autovar_8;
        VALUE lalt22_result=__result;
        VALUE lalt22autovar_10=_autovar_10;
        VALUE lalt22autovar_12=_autovar_12;
        VALUE lalt22autovar_13=_autovar_13;
        VALUE lalt22autovar_14=_autovar_14;
        VALUE lalt22expr=_expr;
        VALUE lalt22autovar_15=_autovar_15;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_12=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_12);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _autovar_13=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_13;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_8=bind_aget(bind2,1);;
        it=Qfalse;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass6;
        }
        _autovar_14=it;;
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
        it=_autovar_14;
        _expr=it;;
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_src_66c4,1,bind2);
        _expr=bind_aget(bind2,1);;
        _autovar_15=it;;
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
            goto alt2_2;
        }
success5:
        *ptr=oldpass5;
        it=_autovar_15;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept2;
alt2_2:
        _autovar_8=lalt22autovar_8;
        __result=lalt22_result;
        _autovar_10=lalt22autovar_10;
        _autovar_12=lalt22autovar_12;
        _autovar_13=lalt22autovar_13;
        _autovar_14=lalt22autovar_14;
        _expr=lalt22expr;
        _autovar_15=lalt22autovar_15;
        ptr->pos=oldpos2;
        VALUE lalt23autovar_8=_autovar_8;
        VALUE lalt23follow=_follow;
        VALUE lalt23_result=__result;
        VALUE lalt23autovar_10=_autovar_10;
        VALUE lalt23x=_x;
        VALUE lalt23autovar_12=_autovar_12;
        VALUE lalt23autovar_13=_autovar_13;
        VALUE lalt23autovar_14=_autovar_14;
        VALUE lalt23expr=_expr;
        VALUE lalt23autovar_15=_autovar_15;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        _x=it;;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept2;
alt2_3:
        _autovar_8=lalt23autovar_8;
        _follow=lalt23follow;
        __result=lalt23_result;
        _autovar_10=lalt23autovar_10;
        _x=lalt23x;
        _autovar_12=lalt23autovar_12;
        _autovar_13=lalt23autovar_13;
        _autovar_14=lalt23autovar_14;
        _expr=lalt23expr;
        _autovar_15=lalt23autovar_15;
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto pass3;
        };
accept2:
        ;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_10);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_10=bind_aget(bind2,2);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        it=__result;
        _autovar_11=it;;
        break;
    case 2/*Or*/:
        ;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_8=bind_aget(bind2,2);;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        VALUE lalt32autovar_8=_autovar_8;
        VALUE lalt32_result=__result;
        VALUE lalt32autovar_10=_autovar_10;
        VALUE lalt32autovar_16=_autovar_16;
        VALUE lalt32autovar_17=_autovar_17;
        VALUE lalt32autovar_18=_autovar_18;
        VALUE lalt32ary=_ary;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_16=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_16);
        it=rb_ary_new3(0);
        _autovar_17=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE lalt42autovar_8=_autovar_8;
            VALUE lalt42autovar_18=_autovar_18;
            bind_aset(bind2,1,_autovar_8);
            it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
            _autovar_8=bind_aget(bind2,1);;
            it=Qfalse;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_17,_autovar_18);
            ;
            goto accept4;
alt4_2:
            _autovar_8=lalt42autovar_8;
            _autovar_18=lalt42autovar_18;
            ptr->pos=oldpos4;
            VALUE lalt43autovar_8=_autovar_8;
            VALUE lalt43autovar_18=_autovar_18;
            stop1=1;
            ;
            goto accept4;
alt4_3:
            _autovar_8=lalt43autovar_8;
            _autovar_18=lalt43autovar_18;
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass7;
            };
accept4:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass7;
        }
        it=_autovar_17;
        _ary=it;;

        goto success7;
pass7:
        *ptr=oldpass7;
        if (1) {
            it=failobj;
            goto alt3_2;
        }
success7:
        *ptr=oldpass7;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept3;
alt3_2:
        _autovar_8=lalt32autovar_8;
        __result=lalt32_result;
        _autovar_10=lalt32autovar_10;
        _autovar_16=lalt32autovar_16;
        _autovar_17=lalt32autovar_17;
        _autovar_18=lalt32autovar_18;
        _ary=lalt32ary;
        ptr->pos=oldpos3;
        VALUE lalt33autovar_8=_autovar_8;
        VALUE lalt33follow=_follow;
        VALUE lalt33_result=__result;
        VALUE lalt33autovar_10=_autovar_10;
        VALUE lalt33x=_x;
        VALUE lalt33autovar_16=_autovar_16;
        VALUE lalt33autovar_17=_autovar_17;
        VALUE lalt33autovar_18=_autovar_18;
        VALUE lalt33ary=_ary;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_3;
        }
        _x=it;;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept3;
alt3_3:
        _autovar_8=lalt33autovar_8;
        _follow=lalt33follow;
        __result=lalt33_result;
        _autovar_10=lalt33autovar_10;
        _x=lalt33x;
        _autovar_16=lalt33autovar_16;
        _autovar_17=lalt33autovar_17;
        _autovar_18=lalt33autovar_18;
        _ary=lalt33ary;
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto pass3;
        };
accept3:
        ;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_10);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_10=bind_aget(bind2,2);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        it=__result;
        _autovar_11=it;;
        break;
    case 3/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_8=bind_aget(bind2,2);;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        VALUE lalt52autovar_8=_autovar_8;
        VALUE lalt52_result=__result;
        VALUE lalt52autovar_10=_autovar_10;
        VALUE lalt52autovar_19=_autovar_19;
        VALUE lalt52autovar_20=_autovar_20;
        VALUE lalt52autovar_21=_autovar_21;
        VALUE lalt52autovar_22=_autovar_22;
        VALUE lalt52first=_first;
        VALUE lalt52autovar_23=_autovar_23;
        VALUE lalt52autovar_24=_autovar_24;
        VALUE lalt52rest=_rest;
        VALUE lalt52autovar_25=_autovar_25;
        VALUE lalt52autovar_26=_autovar_26;
        VALUE lalt52autovar_27=_autovar_27;
        VALUE lalt52autovar_28=_autovar_28;
        VALUE lalt52autovar_29=_autovar_29;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_19=it;;
        it=_autovar_19;
        _autovar_20=it;;
        it=_autovar_20;
        _autovar_21=it;;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        VALUE lalt62autovar_8=_autovar_8;
        VALUE lalt62_result=__result;
        VALUE lalt62autovar_10=_autovar_10;
        VALUE lalt62autovar_22=_autovar_22;
        VALUE lalt62first=_first;
        VALUE lalt62autovar_23=_autovar_23;
        VALUE lalt62autovar_24=_autovar_24;
        VALUE lalt62rest=_rest;
        VALUE lalt62autovar_25=_autovar_25;
        VALUE lalt62autovar_26=_autovar_26;
        it=_autovar_21;
        _autovar_22=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_22);
        it=Remove_Left_Recursion_must_empty(self );
        if (it==failobj) {
            it=failobj;
            goto pass8;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_23=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            VALUE lalt72autovar_24=_autovar_24;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            _autovar_24=it;;
            it=AmethystCore_append(self,_autovar_23,_autovar_24);
            ;
            goto accept7;
alt7_2:
            _autovar_24=lalt72autovar_24;
            ptr->pos=oldpos7;
            VALUE lalt73autovar_24=_autovar_24;
            stop2=1;
            ;
            goto accept7;
alt7_3:
            _autovar_24=lalt73autovar_24;
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto pass8;
            };
accept7:
            ;
        }
        it=_autovar_23;
        _rest=it;;
        bind_aset(bind2,1,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_e0fb,1,bind2);
        _rest=bind_aget(bind2,1);;
        _autovar_25=it;;
        cstruct oldpass9=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_25;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_8=bind_aget(bind2,1);;
        it=Qfalse;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass9;
        }
        _autovar_26=it;;
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
        it=_autovar_26;
        _rest=it;;

        goto success8;
pass8:
        *ptr=oldpass8;
        if (1) {
            it=failobj;
            goto alt6_2;
        }
success8:
        *ptr=oldpass8;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept6;
alt6_2:
        _autovar_8=lalt62autovar_8;
        __result=lalt62_result;
        _autovar_10=lalt62autovar_10;
        _autovar_22=lalt62autovar_22;
        _first=lalt62first;
        _autovar_23=lalt62autovar_23;
        _autovar_24=lalt62autovar_24;
        _rest=lalt62rest;
        _autovar_25=lalt62autovar_25;
        _autovar_26=lalt62autovar_26;
        ptr->pos=oldpos6;
        VALUE lalt63autovar_8=_autovar_8;
        VALUE lalt63_result=__result;
        VALUE lalt63autovar_10=_autovar_10;
        VALUE lalt63autovar_22=_autovar_22;
        VALUE lalt63first=_first;
        VALUE lalt63autovar_23=_autovar_23;
        VALUE lalt63autovar_24=_autovar_24;
        VALUE lalt63rest=_rest;
        VALUE lalt63autovar_25=_autovar_25;
        VALUE lalt63autovar_26=_autovar_26;
        VALUE lalt63autovar_27=_autovar_27;
        VALUE lalt63autovar_28=_autovar_28;
        VALUE lalt63autovar_29=_autovar_29;
        it=_autovar_21;
        _autovar_27=it;;
        cstruct oldpass10=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_27);
        bind_aset(bind2,1,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_8=bind_aget(bind2,1);;
        it=Qfalse;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass10;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_28=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            VALUE lalt82autovar_29=_autovar_29;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_2;
            }
            _autovar_29=it;;
            it=AmethystCore_append(self,_autovar_28,_autovar_29);
            ;
            goto accept8;
alt8_2:
            _autovar_29=lalt82autovar_29;
            ptr->pos=oldpos8;
            VALUE lalt83autovar_29=_autovar_29;
            stop3=1;
            ;
            goto accept8;
alt8_3:
            _autovar_29=lalt83autovar_29;
            ptr->pos=oldpos8;
            if (1) {
                it=failobj;
                goto pass10;
            };
accept8:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass10;
        }
        it=_autovar_28;
        _rest=it;;

        goto success10;
pass10:
        *ptr=oldpass10;
        if (1) {
            it=failobj;
            goto alt6_3;
        }
success10:
        *ptr=oldpass10;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept6;
alt6_3:
        _autovar_8=lalt63autovar_8;
        __result=lalt63_result;
        _autovar_10=lalt63autovar_10;
        _autovar_22=lalt63autovar_22;
        _first=lalt63first;
        _autovar_23=lalt63autovar_23;
        _autovar_24=lalt63autovar_24;
        _rest=lalt63rest;
        _autovar_25=lalt63autovar_25;
        _autovar_26=lalt63autovar_26;
        _autovar_27=lalt63autovar_27;
        _autovar_28=lalt63autovar_28;
        _autovar_29=lalt63autovar_29;
        ptr->pos=oldpos6;
        if (1) {
            it=failobj;
            goto alt5_2;
        };
accept6:
        ;

        ;
        goto accept5;
alt5_2:
        _autovar_8=lalt52autovar_8;
        __result=lalt52_result;
        _autovar_10=lalt52autovar_10;
        _autovar_19=lalt52autovar_19;
        _autovar_20=lalt52autovar_20;
        _autovar_21=lalt52autovar_21;
        _autovar_22=lalt52autovar_22;
        _first=lalt52first;
        _autovar_23=lalt52autovar_23;
        _autovar_24=lalt52autovar_24;
        _rest=lalt52rest;
        _autovar_25=lalt52autovar_25;
        _autovar_26=lalt52autovar_26;
        _autovar_27=lalt52autovar_27;
        _autovar_28=lalt52autovar_28;
        _autovar_29=lalt52autovar_29;
        ptr->pos=oldpos5;
        VALUE lalt53autovar_8=_autovar_8;
        VALUE lalt53follow=_follow;
        VALUE lalt53_result=__result;
        VALUE lalt53autovar_10=_autovar_10;
        VALUE lalt53x=_x;
        VALUE lalt53autovar_19=_autovar_19;
        VALUE lalt53autovar_20=_autovar_20;
        VALUE lalt53autovar_21=_autovar_21;
        VALUE lalt53autovar_22=_autovar_22;
        VALUE lalt53first=_first;
        VALUE lalt53autovar_23=_autovar_23;
        VALUE lalt53autovar_24=_autovar_24;
        VALUE lalt53rest=_rest;
        VALUE lalt53autovar_25=_autovar_25;
        VALUE lalt53autovar_26=_autovar_26;
        VALUE lalt53autovar_27=_autovar_27;
        VALUE lalt53autovar_28=_autovar_28;
        VALUE lalt53autovar_29=_autovar_29;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt5_3;
        }
        _x=it;;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept5;
alt5_3:
        _autovar_8=lalt53autovar_8;
        _follow=lalt53follow;
        __result=lalt53_result;
        _autovar_10=lalt53autovar_10;
        _x=lalt53x;
        _autovar_19=lalt53autovar_19;
        _autovar_20=lalt53autovar_20;
        _autovar_21=lalt53autovar_21;
        _autovar_22=lalt53autovar_22;
        _first=lalt53first;
        _autovar_23=lalt53autovar_23;
        _autovar_24=lalt53autovar_24;
        _rest=lalt53rest;
        _autovar_25=lalt53autovar_25;
        _autovar_26=lalt53autovar_26;
        _autovar_27=lalt53autovar_27;
        _autovar_28=lalt53autovar_28;
        _autovar_29=lalt53autovar_29;
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto pass3;
        };
accept5:
        ;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_10);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_10=bind_aget(bind2,2);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        it=__result;
        _autovar_11=it;;
        break;
    case 4/*Object*/:
        ;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_8=bind_aget(bind2,2);;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _x=it;;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_10);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_10=bind_aget(bind2,2);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        it=__result;
        _autovar_11=it;;
        break;
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
    it=_autovar_11;
    _first_2=it;;
    it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_519e,1,bind2);
    _autovar_30=it;;
    cstruct oldpass11=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_30;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_8=bind_aget(bind2,2);;
        int oldpos9=ptr->pos;
        int cut9=0;
alt9_1:
        ;
        VALUE lalt92autovar_8=_autovar_8;
        VALUE lalt92autovar_9=_autovar_9;
        VALUE lalt92follow=_follow;
        VALUE lalt92_result=__result;
        VALUE lalt92autovar_10=_autovar_10;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        cstruct oldpass12=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_9);
        bind_aset(bind2,1,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__lp_bind_lb_1_rb__5b9e,1,bind2);
        _autovar_8=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass12;
        };
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Remove_Left_Recursion__at_left_re_c85d,1,bind2);
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
            goto alt9_2;
        }
success12:
        *ptr=oldpass12;
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5,1,bind2);
        _follow=bind_aget(bind2,1);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept9;
alt9_2:
        _autovar_8=lalt92autovar_8;
        _autovar_9=lalt92autovar_9;
        _follow=lalt92follow;
        __result=lalt92_result;
        _autovar_10=lalt92autovar_10;
        ptr->pos=oldpos9;
        VALUE lalt93autovar_8=_autovar_8;
        VALUE lalt93autovar_9=_autovar_9;
        VALUE lalt93follow=_follow;
        VALUE lalt93_result=__result;
        VALUE lalt93autovar_10=_autovar_10;
        VALUE lalt93x=_x;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt9_3;
        }
        _x=it;;
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept9;
alt9_3:
        _autovar_8=lalt93autovar_8;
        _autovar_9=lalt93autovar_9;
        _follow=lalt93follow;
        __result=lalt93_result;
        _autovar_10=lalt93autovar_10;
        _x=lalt93x;
        ptr->pos=oldpos9;
        if (1) {
            it=failobj;
            goto pass11;
        };
accept9:
        ;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_10);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_10=bind_aget(bind2,2);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        it=__result;
        _autovar_31=it;;
        break;
    case 1/*Bind*/:
        ;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_8=bind_aget(bind2,2);;
        int oldpos10=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        VALUE lalt102autovar_8=_autovar_8;
        VALUE lalt102_result=__result;
        VALUE lalt102autovar_10=_autovar_10;
        VALUE lalt102autovar_12=_autovar_12;
        VALUE lalt102autovar_13=_autovar_13;
        VALUE lalt102autovar_14=_autovar_14;
        VALUE lalt102expr=_expr;
        VALUE lalt102autovar_15=_autovar_15;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_12=it;;
        cstruct oldpass13=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_12);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass13;
        }
        _autovar_13=it;;
        cstruct oldpass14=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_13;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_8=bind_aget(bind2,1);;
        it=Qtrue;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass14;
        }
        _autovar_14=it;;
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
        it=_autovar_14;
        _expr=it;;
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_src_66c4,1,bind2);
        _expr=bind_aget(bind2,1);;
        _autovar_15=it;;
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
            goto alt10_2;
        }
success13:
        *ptr=oldpass13;
        it=_autovar_15;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept10;
alt10_2:
        _autovar_8=lalt102autovar_8;
        __result=lalt102_result;
        _autovar_10=lalt102autovar_10;
        _autovar_12=lalt102autovar_12;
        _autovar_13=lalt102autovar_13;
        _autovar_14=lalt102autovar_14;
        _expr=lalt102expr;
        _autovar_15=lalt102autovar_15;
        ptr->pos=oldpos10;
        VALUE lalt103autovar_8=_autovar_8;
        VALUE lalt103follow=_follow;
        VALUE lalt103_result=__result;
        VALUE lalt103autovar_10=_autovar_10;
        VALUE lalt103x=_x;
        VALUE lalt103autovar_12=_autovar_12;
        VALUE lalt103autovar_13=_autovar_13;
        VALUE lalt103autovar_14=_autovar_14;
        VALUE lalt103expr=_expr;
        VALUE lalt103autovar_15=_autovar_15;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt10_3;
        }
        _x=it;;
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept10;
alt10_3:
        _autovar_8=lalt103autovar_8;
        _follow=lalt103follow;
        __result=lalt103_result;
        _autovar_10=lalt103autovar_10;
        _x=lalt103x;
        _autovar_12=lalt103autovar_12;
        _autovar_13=lalt103autovar_13;
        _autovar_14=lalt103autovar_14;
        _expr=lalt103expr;
        _autovar_15=lalt103autovar_15;
        ptr->pos=oldpos10;
        if (1) {
            it=failobj;
            goto pass11;
        };
accept10:
        ;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_10);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_10=bind_aget(bind2,2);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        it=__result;
        _autovar_31=it;;
        break;
    case 2/*Or*/:
        ;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_8=bind_aget(bind2,2);;
        int oldpos11=ptr->pos;
        int cut11=0;
alt11_1:
        ;
        VALUE lalt112autovar_8=_autovar_8;
        VALUE lalt112_result=__result;
        VALUE lalt112autovar_10=_autovar_10;
        VALUE lalt112autovar_16=_autovar_16;
        VALUE lalt112autovar_17=_autovar_17;
        VALUE lalt112autovar_18=_autovar_18;
        VALUE lalt112ary=_ary;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_16=it;;
        cstruct oldpass15=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_16);
        it=rb_ary_new3(0);
        _autovar_17=it;;
        int stop4=0;
        while(!stop4) {
            int oldpos12=ptr->pos;
            int cut12=0;
alt12_1:
            ;
            VALUE lalt122autovar_8=_autovar_8;
            VALUE lalt122autovar_18=_autovar_18;
            bind_aset(bind2,1,_autovar_8);
            it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
            _autovar_8=bind_aget(bind2,1);;
            it=Qtrue;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt12_2;
            }
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_17,_autovar_18);
            ;
            goto accept12;
alt12_2:
            _autovar_8=lalt122autovar_8;
            _autovar_18=lalt122autovar_18;
            ptr->pos=oldpos12;
            VALUE lalt123autovar_8=_autovar_8;
            VALUE lalt123autovar_18=_autovar_18;
            stop4=1;
            ;
            goto accept12;
alt12_3:
            _autovar_8=lalt123autovar_8;
            _autovar_18=lalt123autovar_18;
            ptr->pos=oldpos12;
            if (1) {
                it=failobj;
                goto pass15;
            };
accept12:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass15;
        }
        it=_autovar_17;
        _ary=it;;

        goto success15;
pass15:
        *ptr=oldpass15;
        if (1) {
            it=failobj;
            goto alt11_2;
        }
success15:
        *ptr=oldpass15;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept11;
alt11_2:
        _autovar_8=lalt112autovar_8;
        __result=lalt112_result;
        _autovar_10=lalt112autovar_10;
        _autovar_16=lalt112autovar_16;
        _autovar_17=lalt112autovar_17;
        _autovar_18=lalt112autovar_18;
        _ary=lalt112ary;
        ptr->pos=oldpos11;
        VALUE lalt113autovar_8=_autovar_8;
        VALUE lalt113follow=_follow;
        VALUE lalt113_result=__result;
        VALUE lalt113autovar_10=_autovar_10;
        VALUE lalt113x=_x;
        VALUE lalt113autovar_16=_autovar_16;
        VALUE lalt113autovar_17=_autovar_17;
        VALUE lalt113autovar_18=_autovar_18;
        VALUE lalt113ary=_ary;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt11_3;
        }
        _x=it;;
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept11;
alt11_3:
        _autovar_8=lalt113autovar_8;
        _follow=lalt113follow;
        __result=lalt113_result;
        _autovar_10=lalt113autovar_10;
        _x=lalt113x;
        _autovar_16=lalt113autovar_16;
        _autovar_17=lalt113autovar_17;
        _autovar_18=lalt113autovar_18;
        _ary=lalt113ary;
        ptr->pos=oldpos11;
        if (1) {
            it=failobj;
            goto pass11;
        };
accept11:
        ;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_10);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_10=bind_aget(bind2,2);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        it=__result;
        _autovar_31=it;;
        break;
    case 3/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_8=bind_aget(bind2,2);;
        int oldpos13=ptr->pos;
        int cut13=0;
alt13_1:
        ;
        VALUE lalt132autovar_8=_autovar_8;
        VALUE lalt132_result=__result;
        VALUE lalt132autovar_10=_autovar_10;
        VALUE lalt132autovar_19=_autovar_19;
        VALUE lalt132autovar_22=_autovar_22;
        VALUE lalt132first=_first;
        VALUE lalt132autovar_23=_autovar_23;
        VALUE lalt132autovar_24=_autovar_24;
        VALUE lalt132rest=_rest;
        VALUE lalt132autovar_25=_autovar_25;
        VALUE lalt132autovar_26=_autovar_26;
        VALUE lalt132autovar_27=_autovar_27;
        VALUE lalt132autovar_28=_autovar_28;
        VALUE lalt132autovar_29=_autovar_29;
        VALUE lalt132autovar_32=_autovar_32;
        VALUE lalt132autovar_33=_autovar_33;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_19=it;;
        it=_autovar_19;
        _autovar_32=it;;
        it=_autovar_32;
        _autovar_33=it;;
        int oldpos14=ptr->pos;
        int cut14=0;
alt14_1:
        ;
        VALUE lalt142autovar_8=_autovar_8;
        VALUE lalt142_result=__result;
        VALUE lalt142autovar_10=_autovar_10;
        VALUE lalt142autovar_22=_autovar_22;
        VALUE lalt142first=_first;
        VALUE lalt142autovar_23=_autovar_23;
        VALUE lalt142autovar_24=_autovar_24;
        VALUE lalt142rest=_rest;
        VALUE lalt142autovar_25=_autovar_25;
        VALUE lalt142autovar_26=_autovar_26;
        it=_autovar_33;
        _autovar_22=it;;
        cstruct oldpass16=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_22);
        it=Remove_Left_Recursion_must_empty(self );
        if (it==failobj) {
            it=failobj;
            goto pass16;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_23=it;;
        int stop5=0;
        while(!stop5) {
            int oldpos15=ptr->pos;
            int cut15=0;
alt15_1:
            ;
            VALUE lalt152autovar_24=_autovar_24;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt15_2;
            }
            _autovar_24=it;;
            it=AmethystCore_append(self,_autovar_23,_autovar_24);
            ;
            goto accept15;
alt15_2:
            _autovar_24=lalt152autovar_24;
            ptr->pos=oldpos15;
            VALUE lalt153autovar_24=_autovar_24;
            stop5=1;
            ;
            goto accept15;
alt15_3:
            _autovar_24=lalt153autovar_24;
            ptr->pos=oldpos15;
            if (1) {
                it=failobj;
                goto pass16;
            };
accept15:
            ;
        }
        it=_autovar_23;
        _rest=it;;
        bind_aset(bind2,1,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_e0fb,1,bind2);
        _rest=bind_aget(bind2,1);;
        _autovar_25=it;;
        cstruct oldpass17=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_25;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_8=bind_aget(bind2,1);;
        it=Qtrue;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass17;
        }
        _autovar_26=it;;
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
        it=_autovar_26;
        _rest=it;;

        goto success16;
pass16:
        *ptr=oldpass16;
        if (1) {
            it=failobj;
            goto alt14_2;
        }
success16:
        *ptr=oldpass16;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept14;
alt14_2:
        _autovar_8=lalt142autovar_8;
        __result=lalt142_result;
        _autovar_10=lalt142autovar_10;
        _autovar_22=lalt142autovar_22;
        _first=lalt142first;
        _autovar_23=lalt142autovar_23;
        _autovar_24=lalt142autovar_24;
        _rest=lalt142rest;
        _autovar_25=lalt142autovar_25;
        _autovar_26=lalt142autovar_26;
        ptr->pos=oldpos14;
        VALUE lalt143autovar_8=_autovar_8;
        VALUE lalt143_result=__result;
        VALUE lalt143autovar_10=_autovar_10;
        VALUE lalt143autovar_22=_autovar_22;
        VALUE lalt143first=_first;
        VALUE lalt143autovar_23=_autovar_23;
        VALUE lalt143autovar_24=_autovar_24;
        VALUE lalt143rest=_rest;
        VALUE lalt143autovar_25=_autovar_25;
        VALUE lalt143autovar_26=_autovar_26;
        VALUE lalt143autovar_27=_autovar_27;
        VALUE lalt143autovar_28=_autovar_28;
        VALUE lalt143autovar_29=_autovar_29;
        it=_autovar_33;
        _autovar_27=it;;
        cstruct oldpass18=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_27);
        bind_aset(bind2,1,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_8=bind_aget(bind2,1);;
        it=Qtrue;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass18;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_28=it;;
        int stop6=0;
        while(!stop6) {
            int oldpos16=ptr->pos;
            int cut16=0;
alt16_1:
            ;
            VALUE lalt162autovar_29=_autovar_29;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt16_2;
            }
            _autovar_29=it;;
            it=AmethystCore_append(self,_autovar_28,_autovar_29);
            ;
            goto accept16;
alt16_2:
            _autovar_29=lalt162autovar_29;
            ptr->pos=oldpos16;
            VALUE lalt163autovar_29=_autovar_29;
            stop6=1;
            ;
            goto accept16;
alt16_3:
            _autovar_29=lalt163autovar_29;
            ptr->pos=oldpos16;
            if (1) {
                it=failobj;
                goto pass18;
            };
accept16:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass18;
        }
        it=_autovar_28;
        _rest=it;;

        goto success18;
pass18:
        *ptr=oldpass18;
        if (1) {
            it=failobj;
            goto alt14_3;
        }
success18:
        *ptr=oldpass18;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept14;
alt14_3:
        _autovar_8=lalt143autovar_8;
        __result=lalt143_result;
        _autovar_10=lalt143autovar_10;
        _autovar_22=lalt143autovar_22;
        _first=lalt143first;
        _autovar_23=lalt143autovar_23;
        _autovar_24=lalt143autovar_24;
        _rest=lalt143rest;
        _autovar_25=lalt143autovar_25;
        _autovar_26=lalt143autovar_26;
        _autovar_27=lalt143autovar_27;
        _autovar_28=lalt143autovar_28;
        _autovar_29=lalt143autovar_29;
        ptr->pos=oldpos14;
        if (1) {
            it=failobj;
            goto alt13_2;
        };
accept14:
        ;

        ;
        goto accept13;
alt13_2:
        _autovar_8=lalt132autovar_8;
        __result=lalt132_result;
        _autovar_10=lalt132autovar_10;
        _autovar_19=lalt132autovar_19;
        _autovar_22=lalt132autovar_22;
        _first=lalt132first;
        _autovar_23=lalt132autovar_23;
        _autovar_24=lalt132autovar_24;
        _rest=lalt132rest;
        _autovar_25=lalt132autovar_25;
        _autovar_26=lalt132autovar_26;
        _autovar_27=lalt132autovar_27;
        _autovar_28=lalt132autovar_28;
        _autovar_29=lalt132autovar_29;
        _autovar_32=lalt132autovar_32;
        _autovar_33=lalt132autovar_33;
        ptr->pos=oldpos13;
        VALUE lalt133autovar_8=_autovar_8;
        VALUE lalt133follow=_follow;
        VALUE lalt133_result=__result;
        VALUE lalt133autovar_10=_autovar_10;
        VALUE lalt133x=_x;
        VALUE lalt133autovar_19=_autovar_19;
        VALUE lalt133autovar_22=_autovar_22;
        VALUE lalt133first=_first;
        VALUE lalt133autovar_23=_autovar_23;
        VALUE lalt133autovar_24=_autovar_24;
        VALUE lalt133rest=_rest;
        VALUE lalt133autovar_25=_autovar_25;
        VALUE lalt133autovar_26=_autovar_26;
        VALUE lalt133autovar_27=_autovar_27;
        VALUE lalt133autovar_28=_autovar_28;
        VALUE lalt133autovar_29=_autovar_29;
        VALUE lalt133autovar_32=_autovar_32;
        VALUE lalt133autovar_33=_autovar_33;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt13_3;
        }
        _x=it;;
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept13;
alt13_3:
        _autovar_8=lalt133autovar_8;
        _follow=lalt133follow;
        __result=lalt133_result;
        _autovar_10=lalt133autovar_10;
        _x=lalt133x;
        _autovar_19=lalt133autovar_19;
        _autovar_22=lalt133autovar_22;
        _first=lalt133first;
        _autovar_23=lalt133autovar_23;
        _autovar_24=lalt133autovar_24;
        _rest=lalt133rest;
        _autovar_25=lalt133autovar_25;
        _autovar_26=lalt133autovar_26;
        _autovar_27=lalt133autovar_27;
        _autovar_28=lalt133autovar_28;
        _autovar_29=lalt133autovar_29;
        _autovar_32=lalt133autovar_32;
        _autovar_33=lalt133autovar_33;
        ptr->pos=oldpos13;
        if (1) {
            it=failobj;
            goto pass11;
        };
accept13:
        ;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_10);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_10=bind_aget(bind2,2);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        it=__result;
        _autovar_31=it;;
        break;
    case 4/*Object*/:
        ;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_8);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_5f56,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_8=bind_aget(bind2,2);;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass11;
        }
        _x=it;;
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        _autovar_10=it;;
        bind_aset(bind2,1,_autovar_7);
        bind_aset(bind2,2,_autovar_10);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
        _autovar_7=bind_aget(bind2,1);;
        _autovar_10=bind_aget(bind2,2);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        it=__result;
        _autovar_31=it;;
        break;
    }
    goto success11;
pass11:
    *ptr=oldpass11;
    if (1) {
        it=failobj;
        goto pass2;
    }
success11:
    *ptr=oldpass11;
    it=_autovar_31;
    _follow_2=it;;
    bind_aset(bind2,1,_first_2);
    bind_aset(bind2,2,_oldbody);
    bind_aset(bind2,3,_follow_2);
    it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_b6af,1,bind2);
    _first_2=bind_aget(bind2,1);;
    _oldbody=bind_aget(bind2,2);;
    _follow_2=bind_aget(bind2,3);;
    it=rb_funcall(self,sy_Remove_Left_Recursion_src_25d9,1,bind2);
    _autovar_34=it;;
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
        goto fail;
    }
success2:
    *ptr=oldpass2;
    it=_autovar_34;
    __result_2=it;;
    _autovar_35=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_35);
    it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_35=bind_aget(bind2,2);;
fail:
    return it;
}
void Init_Remove_Left_Recursion_c() {
    cls_Remove_Left_Recursion=rb_define_class("Remove_Left_Recursion",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Remove_Left_Recursion,"profile_report",profile_report_Remove_Left_Recursion,0);
    switchhash_Remove_Left_Recursion_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Remove_Left_Recursion_1);;
    switchhash_Remove_Left_Recursion_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Remove_Left_Recursion_2);;
    switchhash_Remove_Left_Recursion_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Remove_Left_Recursion_3);;
    switchhash_Remove_Left_Recursion_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Remove_Left_Recursion_4);;
    sy_Remove_Left_Recursion_Bind_lb_src_66c4=rb_intern("Remove_Left_Recursion_Bind_lb_src_66c4");
    sy_Remove_Left_Recursion_Or_lb_bind_lb__3169=rb_intern("Remove_Left_Recursion_Or_lb_bind_lb__3169");
    sy_Remove_Left_Recursion_Seq_lb_bind_e0fb=rb_intern("Remove_Left_Recursion_Seq_lb_bind_e0fb");
    sy_Remove_Left_Recursion_Seq_lb_bind_f95b=rb_intern("Remove_Left_Recursion_Seq_lb_bind_f95b");
    sy_Remove_Left_Recursion__at__contex_5f56=rb_intern("Remove_Left_Recursion__at__contex_5f56");
    sy_Remove_Left_Recursion__at__contex_cdb3=rb_intern("Remove_Left_Recursion__at__contex_cdb3");
    sy_Remove_Left_Recursion__at__contex_d6d5=rb_intern("Remove_Left_Recursion__at__contex_d6d5");
    sy_Remove_Left_Recursion__at_left_re_c85d=rb_intern("Remove_Left_Recursion__at_left_re_c85d");
    sy_Remove_Left_Recursion__at_result_eq__b6ab=rb_intern("Remove_Left_Recursion__at_result_eq__b6ab");
    sy_Remove_Left_Recursion__lp_bind_lb_1_rb__5b9e=rb_intern("Remove_Left_Recursion__lp_bind_lb_1_rb__5b9e");
    sy_Remove_Left_Recursion__lp_must_em_43e9=rb_intern("Remove_Left_Recursion__lp_must_em_43e9");
    sy_Remove_Left_Recursion_bind_lb_1_rb__dot__44a5=rb_intern("Remove_Left_Recursion_bind_lb_1_rb__dot__44a5");
    sy_Remove_Left_Recursion_bind_lb_1_rb__lb__fa06=rb_intern("Remove_Left_Recursion_bind_lb_1_rb__lb__fa06");
    sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5=rb_intern("Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5");
    sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213=rb_intern("Remove_Left_Recursion_bind_lb_1_rb__sp__c213");
    sy_Remove_Left_Recursion_src_25d9=rb_intern("Remove_Left_Recursion_src_25d9");
    sy_Remove_Left_Recursion_src_dot_body_519e=rb_intern("Remove_Left_Recursion_src_dot_body_519e");
    sy_Remove_Left_Recursion_src_dot_body_b6af=rb_intern("Remove_Left_Recursion_src_dot_body_b6af");
    rb_define_method(cls_Remove_Left_Recursion,"first",Remove_Left_Recursion_first,1);
    rb_define_method(cls_Remove_Left_Recursion,"must_empty",Remove_Left_Recursion_must_empty,0);
    rb_define_method(cls_Remove_Left_Recursion,"root",Remove_Left_Recursion_root,0);
}
