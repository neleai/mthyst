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
static VALUE sy_Remove_Left_Recursion_src_dot_body_0dd0;
static VALUE sy_Remove_Left_Recursion_src_dot_body_519e;
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
    int x;
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
        ptr->pos=oldpos1;
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
        ptr->pos=oldpos2;
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
            ptr->pos=oldpos4;
            stop1=1;
            ;
            goto accept4;
alt4_3:
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
        ptr->pos=oldpos3;
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
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_12=it;;
        it=_autovar_12;
        _autovar_13=it;;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
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
            ptr->pos=oldpos7;
            stop2=1;
            ;
            goto accept7;
alt7_3:
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
        ptr->pos=oldpos6;
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
            ptr->pos=oldpos8;
            stop3=1;
            ;
            goto accept8;
alt8_3:
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
        ptr->pos=oldpos5;
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
    int x;
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
    VALUE it ,_autovar,_autovar_2,_a,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_follow,__result,_autovar_10,_x,_autovar_11,_autovar_12,_autovar_13,_autovar_14,_expr,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_ary,_autovar_19,_autovar_20,_autovar_21,_autovar_22,_first,_autovar_23,_autovar_24,_rest,_autovar_25,_autovar_26,_autovar_27,_autovar_28,_autovar_29,_first_2,_autovar_30,_autovar_31,_autovar_32,_autovar_33,_follow_2,_autovar_34,__result_2,_autovar_35;
    VALUE bind2=bind_new2(16);
    int x;
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
        ptr->pos=oldpos1;
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
        ptr->pos=oldpos2;
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
            ptr->pos=oldpos4;
            stop1=1;
            ;
            goto accept4;
alt4_3:
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
        ptr->pos=oldpos3;
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
            ptr->pos=oldpos7;
            stop2=1;
            ;
            goto accept7;
alt7_3:
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
        ptr->pos=oldpos6;
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
            ptr->pos=oldpos8;
            stop3=1;
            ;
            goto accept8;
alt8_3:
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
        ptr->pos=oldpos5;
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
        ptr->pos=oldpos9;
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
        ptr->pos=oldpos10;
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
            ptr->pos=oldpos12;
            stop4=1;
            ;
            goto accept12;
alt12_3:
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
        ptr->pos=oldpos11;
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
            ptr->pos=oldpos15;
            stop5=1;
            ;
            goto accept15;
alt15_3:
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
        ptr->pos=oldpos14;
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
            ptr->pos=oldpos16;
            stop6=1;
            ;
            goto accept16;
alt16_3:
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
        ptr->pos=oldpos13;
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
    bind_aset(bind2,2,_follow_2);
    it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_0dd0,1,bind2);
    _first_2=bind_aget(bind2,1);;
    _follow_2=bind_aget(bind2,2);;
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
    sy_Remove_Left_Recursion_src_dot_body_0dd0=rb_intern("Remove_Left_Recursion_src_dot_body_0dd0");
    sy_Remove_Left_Recursion_src_dot_body_519e=rb_intern("Remove_Left_Recursion_src_dot_body_519e");
    rb_define_method(cls_Remove_Left_Recursion,"first",Remove_Left_Recursion_first,1);
    rb_define_method(cls_Remove_Left_Recursion,"must_empty",Remove_Left_Recursion_must_empty,0);
    rb_define_method(cls_Remove_Left_Recursion,"root",Remove_Left_Recursion_root,0);
}
