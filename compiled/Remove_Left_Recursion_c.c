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
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_follow=Qnil,__result=Qnil,_autovar_4=Qnil,_x=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_expr=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_autovar_11=Qnil,_ary=Qnil,_autovar_12=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_first=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_rest=Qnil,_autovar_17=Qnil,_autovar_18=Qnil,_autovar_19=Qnil,_autovar_20=Qnil,_autovar_21=Qnil;
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
        VALUE revert1autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
        VALUE revert1autovar_3=rb_funcall(_autovar_3,rb_intern("dup"),0);
        VALUE revert1follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert1_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert1autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
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
            goto revert1;
        }
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_follow);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5,1,bind2);
        _follow=bind_aget(bind2,1);;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept2;
revert1:
        ;
        _autovar_2=revert1autovar_2;
        _autovar_3=revert1autovar_3;
        _follow=revert1follow;
        __result=revert1_result;
        _autovar_4=revert1autovar_4;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        VALUE revert2follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert2_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert2autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert2x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert2;
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
revert2:
        ;
        _follow=revert2follow;
        __result=revert2_result;
        _autovar_4=revert2autovar_4;
        _x=revert2x;
        goto alt1_3;
accept3:
        ;

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
        VALUE revert3autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
        VALUE revert3_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert3autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert3autovar_5=rb_funcall(_autovar_5,rb_intern("dup"),0);
        VALUE revert3autovar_6=rb_funcall(_autovar_6,rb_intern("dup"),0);
        VALUE revert3autovar_7=rb_funcall(_autovar_7,rb_intern("dup"),0);
        VALUE revert3expr=rb_funcall(_expr,rb_intern("dup"),0);
        VALUE revert3autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
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
            goto revert3;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_8;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept5;
revert3:
        ;
        _autovar_2=revert3autovar_2;
        __result=revert3_result;
        _autovar_4=revert3autovar_4;
        _autovar_5=revert3autovar_5;
        _autovar_6=revert3autovar_6;
        _autovar_7=revert3autovar_7;
        _expr=revert3expr;
        _autovar_8=revert3autovar_8;
        goto alt2_2;
accept5:
        ;

        ;
        goto accept4;
alt2_2:
        ptr->pos=oldpos2;
        VALUE revert4follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert4_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert4autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert4x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert4;
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
        goto accept6;
revert4:
        ;
        _follow=revert4follow;
        __result=revert4_result;
        _autovar_4=revert4autovar_4;
        _x=revert4x;
        goto alt2_3;
accept6:
        ;

        ;
        goto accept4;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept4:
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
        VALUE revert5autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
        VALUE revert5_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert5autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert5autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
        VALUE revert5autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert5autovar_11=rb_funcall(_autovar_11,rb_intern("dup"),0);
        VALUE revert5ary=rb_funcall(_ary,rb_intern("dup"),0);
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
            VALUE revert6autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
            VALUE revert6autovar_11=rb_funcall(_autovar_11,rb_intern("dup"),0);
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            it=_follow;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto revert6;
            }
            _autovar_11=it;;
            it=AmethystCore_append(self,_autovar_10,_autovar_11);
            ;
            goto accept10;
revert6:
            ;
            _autovar_2=revert6autovar_2;
            _autovar_11=revert6autovar_11;
            goto alt4_2;
accept10:
            ;

            ;
            goto accept9;
alt4_2:
            ptr->pos=oldpos4;
            stop1=1;
            ;
            goto accept11;
revert7:
            ;
            goto alt4_3;
accept11:
            ;

            ;
            goto accept9;
alt4_3:
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass4;
            };
accept9:
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
            goto revert5;
        }
success4:
        *ptr=oldpass4;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        _autovar_4=it;;

        ;
        goto accept8;
revert5:
        ;
        _autovar_2=revert5autovar_2;
        __result=revert5_result;
        _autovar_4=revert5autovar_4;
        _autovar_9=revert5autovar_9;
        _autovar_10=revert5autovar_10;
        _autovar_11=revert5autovar_11;
        _ary=revert5ary;
        goto alt3_2;
accept8:
        ;

        ;
        goto accept7;
alt3_2:
        ptr->pos=oldpos3;
        VALUE revert8follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert8_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert8autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert8x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert8;
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
        goto accept12;
revert8:
        ;
        _follow=revert8follow;
        __result=revert8_result;
        _autovar_4=revert8autovar_4;
        _x=revert8x;
        goto alt3_3;
accept12:
        ;

        ;
        goto accept7;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto fail;
        };
accept7:
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
        VALUE revert9autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
        VALUE revert9_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert9autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert9autovar_12=rb_funcall(_autovar_12,rb_intern("dup"),0);
        VALUE revert9autovar_14=rb_funcall(_autovar_14,rb_intern("dup"),0);
        VALUE revert9first=rb_funcall(_first,rb_intern("dup"),0);
        VALUE revert9autovar_15=rb_funcall(_autovar_15,rb_intern("dup"),0);
        VALUE revert9autovar_16=rb_funcall(_autovar_16,rb_intern("dup"),0);
        VALUE revert9rest=rb_funcall(_rest,rb_intern("dup"),0);
        VALUE revert9autovar_17=rb_funcall(_autovar_17,rb_intern("dup"),0);
        VALUE revert9autovar_18=rb_funcall(_autovar_18,rb_intern("dup"),0);
        VALUE revert9autovar_19=rb_funcall(_autovar_19,rb_intern("dup"),0);
        VALUE revert9autovar_20=rb_funcall(_autovar_20,rb_intern("dup"),0);
        VALUE revert9autovar_21=rb_funcall(_autovar_21,rb_intern("dup"),0);
        VALUE revert9autovar_13=rb_funcall(_autovar_13,rb_intern("dup"),0);
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_12=it;;
        it=_autovar_12;
        _autovar_13=it;;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        VALUE revert10autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
        VALUE revert10_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert10autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert10autovar_14=rb_funcall(_autovar_14,rb_intern("dup"),0);
        VALUE revert10first=rb_funcall(_first,rb_intern("dup"),0);
        VALUE revert10autovar_15=rb_funcall(_autovar_15,rb_intern("dup"),0);
        VALUE revert10autovar_16=rb_funcall(_autovar_16,rb_intern("dup"),0);
        VALUE revert10rest=rb_funcall(_rest,rb_intern("dup"),0);
        VALUE revert10autovar_17=rb_funcall(_autovar_17,rb_intern("dup"),0);
        VALUE revert10autovar_18=rb_funcall(_autovar_18,rb_intern("dup"),0);
        it=_autovar_13;
        _autovar_14=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_14);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(255):
            ;
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
                VALUE revert11autovar_16=rb_funcall(_autovar_16,rb_intern("dup"),0);
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert11;
                }
                _autovar_16=it;;
                it=AmethystCore_append(self,_autovar_15,_autovar_16);
                ;
                goto accept18;
revert11:
                ;
                _autovar_16=revert11autovar_16;
                goto alt7_2;
accept18:
                ;

                ;
                goto accept17;
alt7_2:
                ptr->pos=oldpos7;
                stop2=1;
                ;
                goto accept19;
revert12:
                ;
                goto alt7_3;
accept19:
                ;

                ;
                goto accept17;
alt7_3:
                ptr->pos=oldpos7;
                if (1) {
                    it=failobj;
                    goto pass5;
                };
accept17:
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
            break;
            if (1) {
                it=failobj;
                goto pass5;
            }
            break;
        }
        goto success5;
pass5:
        *ptr=oldpass5;
        if (1) {
            it=failobj;
            goto revert10;
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
        goto accept16;
revert10:
        ;
        _autovar_2=revert10autovar_2;
        __result=revert10_result;
        _autovar_4=revert10autovar_4;
        _autovar_14=revert10autovar_14;
        _first=revert10first;
        _autovar_15=revert10autovar_15;
        _autovar_16=revert10autovar_16;
        _rest=revert10rest;
        _autovar_17=revert10autovar_17;
        _autovar_18=revert10autovar_18;
        goto alt6_2;
accept16:
        ;

        ;
        goto accept15;
alt6_2:
        ptr->pos=oldpos6;
        VALUE revert13autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
        VALUE revert13_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert13autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert13first=rb_funcall(_first,rb_intern("dup"),0);
        VALUE revert13rest=rb_funcall(_rest,rb_intern("dup"),0);
        VALUE revert13autovar_19=rb_funcall(_autovar_19,rb_intern("dup"),0);
        VALUE revert13autovar_20=rb_funcall(_autovar_20,rb_intern("dup"),0);
        VALUE revert13autovar_21=rb_funcall(_autovar_21,rb_intern("dup"),0);
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
            VALUE revert14autovar_21=rb_funcall(_autovar_21,rb_intern("dup"),0);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert14;
            }
            _autovar_21=it;;
            it=AmethystCore_append(self,_autovar_20,_autovar_21);
            ;
            goto accept22;
revert14:
            ;
            _autovar_21=revert14autovar_21;
            goto alt8_2;
accept22:
            ;

            ;
            goto accept21;
alt8_2:
            ptr->pos=oldpos8;
            stop3=1;
            ;
            goto accept23;
revert15:
            ;
            goto alt8_3;
accept23:
            ;

            ;
            goto accept21;
alt8_3:
            ptr->pos=oldpos8;
            if (1) {
                it=failobj;
                goto pass7;
            };
accept21:
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
            goto revert13;
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
        goto accept20;
revert13:
        ;
        _autovar_2=revert13autovar_2;
        __result=revert13_result;
        _autovar_4=revert13autovar_4;
        _first=revert13first;
        _rest=revert13rest;
        _autovar_19=revert13autovar_19;
        _autovar_20=revert13autovar_20;
        _autovar_21=revert13autovar_21;
        goto alt6_3;
accept20:
        ;

        ;
        goto accept15;
alt6_3:
        ptr->pos=oldpos6;
        if (1) {
            it=failobj;
            goto revert9;
        };
accept15:
        ;

        ;
        goto accept14;
revert9:
        ;
        _autovar_2=revert9autovar_2;
        __result=revert9_result;
        _autovar_4=revert9autovar_4;
        _autovar_12=revert9autovar_12;
        _autovar_14=revert9autovar_14;
        _first=revert9first;
        _autovar_15=revert9autovar_15;
        _autovar_16=revert9autovar_16;
        _rest=revert9rest;
        _autovar_17=revert9autovar_17;
        _autovar_18=revert9autovar_18;
        _autovar_19=revert9autovar_19;
        _autovar_20=revert9autovar_20;
        _autovar_21=revert9autovar_21;
        _autovar_13=revert9autovar_13;
        goto alt5_2;
accept14:
        ;

        ;
        goto accept13;
alt5_2:
        ptr->pos=oldpos5;
        VALUE revert16follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert16_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert16autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert16x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert16;
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
        goto accept24;
revert16:
        ;
        _follow=revert16follow;
        __result=revert16_result;
        _autovar_4=revert16autovar_4;
        _x=revert16x;
        goto alt5_3;
accept24:
        ;

        ;
        goto accept13;
alt5_3:
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto fail;
        };
accept13:
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
    VALUE it ,_e=Qnil,__result=Qnil;
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
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_a=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_oldbody=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_follow=Qnil,__result=Qnil,_autovar_10=Qnil,_x=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_expr=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_autovar_17=Qnil,_autovar_18=Qnil,_ary=Qnil,_autovar_19=Qnil,_autovar_20=Qnil,_autovar_21=Qnil,_autovar_22=Qnil,_first=Qnil,_autovar_23=Qnil,_autovar_24=Qnil,_rest=Qnil,_autovar_25=Qnil,_autovar_26=Qnil,_autovar_27=Qnil,_autovar_28=Qnil,_autovar_29=Qnil,_first_2=Qnil,_autovar_30=Qnil,_autovar_31=Qnil,_autovar_32=Qnil,_autovar_33=Qnil,_follow_2=Qnil,_autovar_34=Qnil,__result_2=Qnil,_autovar_35=Qnil;
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
        VALUE revert1autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert1autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
        VALUE revert1follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert1_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert1autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
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
            goto revert1;
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
        goto accept2;
revert1:
        ;
        _autovar_8=revert1autovar_8;
        _autovar_9=revert1autovar_9;
        _follow=revert1follow;
        __result=revert1_result;
        _autovar_10=revert1autovar_10;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        VALUE revert2follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert2_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert2autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert2x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert2;
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
revert2:
        ;
        _follow=revert2follow;
        __result=revert2_result;
        _autovar_10=revert2autovar_10;
        _x=revert2x;
        goto alt1_3;
accept3:
        ;

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
        VALUE revert3autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert3_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert3autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert3autovar_12=rb_funcall(_autovar_12,rb_intern("dup"),0);
        VALUE revert3autovar_13=rb_funcall(_autovar_13,rb_intern("dup"),0);
        VALUE revert3autovar_14=rb_funcall(_autovar_14,rb_intern("dup"),0);
        VALUE revert3expr=rb_funcall(_expr,rb_intern("dup"),0);
        VALUE revert3autovar_15=rb_funcall(_autovar_15,rb_intern("dup"),0);
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
            goto revert3;
        }
success5:
        *ptr=oldpass5;
        it=_autovar_15;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept5;
revert3:
        ;
        _autovar_8=revert3autovar_8;
        __result=revert3_result;
        _autovar_10=revert3autovar_10;
        _autovar_12=revert3autovar_12;
        _autovar_13=revert3autovar_13;
        _autovar_14=revert3autovar_14;
        _expr=revert3expr;
        _autovar_15=revert3autovar_15;
        goto alt2_2;
accept5:
        ;

        ;
        goto accept4;
alt2_2:
        ptr->pos=oldpos2;
        VALUE revert4follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert4_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert4autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert4x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert4;
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
        goto accept6;
revert4:
        ;
        _follow=revert4follow;
        __result=revert4_result;
        _autovar_10=revert4autovar_10;
        _x=revert4x;
        goto alt2_3;
accept6:
        ;

        ;
        goto accept4;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto pass3;
        };
accept4:
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
        VALUE revert5autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert5_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert5autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert5autovar_16=rb_funcall(_autovar_16,rb_intern("dup"),0);
        VALUE revert5autovar_17=rb_funcall(_autovar_17,rb_intern("dup"),0);
        VALUE revert5autovar_18=rb_funcall(_autovar_18,rb_intern("dup"),0);
        VALUE revert5ary=rb_funcall(_ary,rb_intern("dup"),0);
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
            VALUE revert6autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
            VALUE revert6autovar_18=rb_funcall(_autovar_18,rb_intern("dup"),0);
            bind_aset(bind2,1,_autovar_8);
            it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
            _autovar_8=bind_aget(bind2,1);;
            it=Qfalse;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto revert6;
            }
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_17,_autovar_18);
            ;
            goto accept10;
revert6:
            ;
            _autovar_8=revert6autovar_8;
            _autovar_18=revert6autovar_18;
            goto alt4_2;
accept10:
            ;

            ;
            goto accept9;
alt4_2:
            ptr->pos=oldpos4;
            stop1=1;
            ;
            goto accept11;
revert7:
            ;
            goto alt4_3;
accept11:
            ;

            ;
            goto accept9;
alt4_3:
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass7;
            };
accept9:
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
            goto revert5;
        }
success7:
        *ptr=oldpass7;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept8;
revert5:
        ;
        _autovar_8=revert5autovar_8;
        __result=revert5_result;
        _autovar_10=revert5autovar_10;
        _autovar_16=revert5autovar_16;
        _autovar_17=revert5autovar_17;
        _autovar_18=revert5autovar_18;
        _ary=revert5ary;
        goto alt3_2;
accept8:
        ;

        ;
        goto accept7;
alt3_2:
        ptr->pos=oldpos3;
        VALUE revert8follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert8_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert8autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert8x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert8;
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
        goto accept12;
revert8:
        ;
        _follow=revert8follow;
        __result=revert8_result;
        _autovar_10=revert8autovar_10;
        _x=revert8x;
        goto alt3_3;
accept12:
        ;

        ;
        goto accept7;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto pass3;
        };
accept7:
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
        VALUE revert9autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert9_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert9autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert9autovar_19=rb_funcall(_autovar_19,rb_intern("dup"),0);
        VALUE revert9autovar_20=rb_funcall(_autovar_20,rb_intern("dup"),0);
        VALUE revert9autovar_21=rb_funcall(_autovar_21,rb_intern("dup"),0);
        VALUE revert9autovar_22=rb_funcall(_autovar_22,rb_intern("dup"),0);
        VALUE revert9first=rb_funcall(_first,rb_intern("dup"),0);
        VALUE revert9autovar_23=rb_funcall(_autovar_23,rb_intern("dup"),0);
        VALUE revert9autovar_24=rb_funcall(_autovar_24,rb_intern("dup"),0);
        VALUE revert9rest=rb_funcall(_rest,rb_intern("dup"),0);
        VALUE revert9autovar_25=rb_funcall(_autovar_25,rb_intern("dup"),0);
        VALUE revert9autovar_26=rb_funcall(_autovar_26,rb_intern("dup"),0);
        VALUE revert9autovar_27=rb_funcall(_autovar_27,rb_intern("dup"),0);
        VALUE revert9autovar_28=rb_funcall(_autovar_28,rb_intern("dup"),0);
        VALUE revert9autovar_29=rb_funcall(_autovar_29,rb_intern("dup"),0);
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
        VALUE revert10autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert10_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert10autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert10autovar_22=rb_funcall(_autovar_22,rb_intern("dup"),0);
        VALUE revert10first=rb_funcall(_first,rb_intern("dup"),0);
        VALUE revert10autovar_23=rb_funcall(_autovar_23,rb_intern("dup"),0);
        VALUE revert10autovar_24=rb_funcall(_autovar_24,rb_intern("dup"),0);
        VALUE revert10rest=rb_funcall(_rest,rb_intern("dup"),0);
        VALUE revert10autovar_25=rb_funcall(_autovar_25,rb_intern("dup"),0);
        VALUE revert10autovar_26=rb_funcall(_autovar_26,rb_intern("dup"),0);
        it=_autovar_21;
        _autovar_22=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_22);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(255):
            ;
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
                VALUE revert11autovar_24=rb_funcall(_autovar_24,rb_intern("dup"),0);
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert11;
                }
                _autovar_24=it;;
                it=AmethystCore_append(self,_autovar_23,_autovar_24);
                ;
                goto accept18;
revert11:
                ;
                _autovar_24=revert11autovar_24;
                goto alt7_2;
accept18:
                ;

                ;
                goto accept17;
alt7_2:
                ptr->pos=oldpos7;
                stop2=1;
                ;
                goto accept19;
revert12:
                ;
                goto alt7_3;
accept19:
                ;

                ;
                goto accept17;
alt7_3:
                ptr->pos=oldpos7;
                if (1) {
                    it=failobj;
                    goto pass8;
                };
accept17:
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
            break;
            if (1) {
                it=failobj;
                goto pass8;
            }
            break;
        }
        goto success8;
pass8:
        *ptr=oldpass8;
        if (1) {
            it=failobj;
            goto revert10;
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
        goto accept16;
revert10:
        ;
        _autovar_8=revert10autovar_8;
        __result=revert10_result;
        _autovar_10=revert10autovar_10;
        _autovar_22=revert10autovar_22;
        _first=revert10first;
        _autovar_23=revert10autovar_23;
        _autovar_24=revert10autovar_24;
        _rest=revert10rest;
        _autovar_25=revert10autovar_25;
        _autovar_26=revert10autovar_26;
        goto alt6_2;
accept16:
        ;

        ;
        goto accept15;
alt6_2:
        ptr->pos=oldpos6;
        VALUE revert13autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert13_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert13autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert13first=rb_funcall(_first,rb_intern("dup"),0);
        VALUE revert13rest=rb_funcall(_rest,rb_intern("dup"),0);
        VALUE revert13autovar_27=rb_funcall(_autovar_27,rb_intern("dup"),0);
        VALUE revert13autovar_28=rb_funcall(_autovar_28,rb_intern("dup"),0);
        VALUE revert13autovar_29=rb_funcall(_autovar_29,rb_intern("dup"),0);
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
            VALUE revert14autovar_29=rb_funcall(_autovar_29,rb_intern("dup"),0);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert14;
            }
            _autovar_29=it;;
            it=AmethystCore_append(self,_autovar_28,_autovar_29);
            ;
            goto accept22;
revert14:
            ;
            _autovar_29=revert14autovar_29;
            goto alt8_2;
accept22:
            ;

            ;
            goto accept21;
alt8_2:
            ptr->pos=oldpos8;
            stop3=1;
            ;
            goto accept23;
revert15:
            ;
            goto alt8_3;
accept23:
            ;

            ;
            goto accept21;
alt8_3:
            ptr->pos=oldpos8;
            if (1) {
                it=failobj;
                goto pass10;
            };
accept21:
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
            goto revert13;
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
        goto accept20;
revert13:
        ;
        _autovar_8=revert13autovar_8;
        __result=revert13_result;
        _autovar_10=revert13autovar_10;
        _first=revert13first;
        _rest=revert13rest;
        _autovar_27=revert13autovar_27;
        _autovar_28=revert13autovar_28;
        _autovar_29=revert13autovar_29;
        goto alt6_3;
accept20:
        ;

        ;
        goto accept15;
alt6_3:
        ptr->pos=oldpos6;
        if (1) {
            it=failobj;
            goto revert9;
        };
accept15:
        ;

        ;
        goto accept14;
revert9:
        ;
        _autovar_8=revert9autovar_8;
        __result=revert9_result;
        _autovar_10=revert9autovar_10;
        _autovar_19=revert9autovar_19;
        _autovar_20=revert9autovar_20;
        _autovar_21=revert9autovar_21;
        _autovar_22=revert9autovar_22;
        _first=revert9first;
        _autovar_23=revert9autovar_23;
        _autovar_24=revert9autovar_24;
        _rest=revert9rest;
        _autovar_25=revert9autovar_25;
        _autovar_26=revert9autovar_26;
        _autovar_27=revert9autovar_27;
        _autovar_28=revert9autovar_28;
        _autovar_29=revert9autovar_29;
        goto alt5_2;
accept14:
        ;

        ;
        goto accept13;
alt5_2:
        ptr->pos=oldpos5;
        VALUE revert16follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert16_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert16autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert16x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert16;
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
        goto accept24;
revert16:
        ;
        _follow=revert16follow;
        __result=revert16_result;
        _autovar_10=revert16autovar_10;
        _x=revert16x;
        goto alt5_3;
accept24:
        ;

        ;
        goto accept13;
alt5_3:
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto pass3;
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
        VALUE revert17autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert17autovar_9=rb_funcall(_autovar_9,rb_intern("dup"),0);
        VALUE revert17follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert17_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert17autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
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
            goto revert17;
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
        goto accept26;
revert17:
        ;
        _autovar_8=revert17autovar_8;
        _autovar_9=revert17autovar_9;
        _follow=revert17follow;
        __result=revert17_result;
        _autovar_10=revert17autovar_10;
        goto alt9_2;
accept26:
        ;

        ;
        goto accept25;
alt9_2:
        ptr->pos=oldpos9;
        VALUE revert18follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert18_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert18autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert18x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert18;
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
        goto accept27;
revert18:
        ;
        _follow=revert18follow;
        __result=revert18_result;
        _autovar_10=revert18autovar_10;
        _x=revert18x;
        goto alt9_3;
accept27:
        ;

        ;
        goto accept25;
alt9_3:
        ptr->pos=oldpos9;
        if (1) {
            it=failobj;
            goto pass11;
        };
accept25:
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
        VALUE revert19autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert19_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert19autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert19autovar_12=rb_funcall(_autovar_12,rb_intern("dup"),0);
        VALUE revert19autovar_13=rb_funcall(_autovar_13,rb_intern("dup"),0);
        VALUE revert19autovar_14=rb_funcall(_autovar_14,rb_intern("dup"),0);
        VALUE revert19expr=rb_funcall(_expr,rb_intern("dup"),0);
        VALUE revert19autovar_15=rb_funcall(_autovar_15,rb_intern("dup"),0);
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
            goto revert19;
        }
success13:
        *ptr=oldpass13;
        it=_autovar_15;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept29;
revert19:
        ;
        _autovar_8=revert19autovar_8;
        __result=revert19_result;
        _autovar_10=revert19autovar_10;
        _autovar_12=revert19autovar_12;
        _autovar_13=revert19autovar_13;
        _autovar_14=revert19autovar_14;
        _expr=revert19expr;
        _autovar_15=revert19autovar_15;
        goto alt10_2;
accept29:
        ;

        ;
        goto accept28;
alt10_2:
        ptr->pos=oldpos10;
        VALUE revert20follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert20_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert20autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert20x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert20;
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
        goto accept30;
revert20:
        ;
        _follow=revert20follow;
        __result=revert20_result;
        _autovar_10=revert20autovar_10;
        _x=revert20x;
        goto alt10_3;
accept30:
        ;

        ;
        goto accept28;
alt10_3:
        ptr->pos=oldpos10;
        if (1) {
            it=failobj;
            goto pass11;
        };
accept28:
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
        VALUE revert21autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert21_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert21autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert21autovar_16=rb_funcall(_autovar_16,rb_intern("dup"),0);
        VALUE revert21autovar_17=rb_funcall(_autovar_17,rb_intern("dup"),0);
        VALUE revert21autovar_18=rb_funcall(_autovar_18,rb_intern("dup"),0);
        VALUE revert21ary=rb_funcall(_ary,rb_intern("dup"),0);
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
            VALUE revert22autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
            VALUE revert22autovar_18=rb_funcall(_autovar_18,rb_intern("dup"),0);
            bind_aset(bind2,1,_autovar_8);
            it=rb_funcall(self,sy_Remove_Left_Recursion__at__contex_d6d5,1,bind2);
            _autovar_8=bind_aget(bind2,1);;
            it=Qtrue;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto revert22;
            }
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_17,_autovar_18);
            ;
            goto accept34;
revert22:
            ;
            _autovar_8=revert22autovar_8;
            _autovar_18=revert22autovar_18;
            goto alt12_2;
accept34:
            ;

            ;
            goto accept33;
alt12_2:
            ptr->pos=oldpos12;
            stop4=1;
            ;
            goto accept35;
revert23:
            ;
            goto alt12_3;
accept35:
            ;

            ;
            goto accept33;
alt12_3:
            ptr->pos=oldpos12;
            if (1) {
                it=failobj;
                goto pass15;
            };
accept33:
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
            goto revert21;
        }
success15:
        *ptr=oldpass15;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        _autovar_10=it;;

        ;
        goto accept32;
revert21:
        ;
        _autovar_8=revert21autovar_8;
        __result=revert21_result;
        _autovar_10=revert21autovar_10;
        _autovar_16=revert21autovar_16;
        _autovar_17=revert21autovar_17;
        _autovar_18=revert21autovar_18;
        _ary=revert21ary;
        goto alt11_2;
accept32:
        ;

        ;
        goto accept31;
alt11_2:
        ptr->pos=oldpos11;
        VALUE revert24follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert24_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert24autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert24x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert24;
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
        goto accept36;
revert24:
        ;
        _follow=revert24follow;
        __result=revert24_result;
        _autovar_10=revert24autovar_10;
        _x=revert24x;
        goto alt11_3;
accept36:
        ;

        ;
        goto accept31;
alt11_3:
        ptr->pos=oldpos11;
        if (1) {
            it=failobj;
            goto pass11;
        };
accept31:
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
        VALUE revert25autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert25_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert25autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert25autovar_19=rb_funcall(_autovar_19,rb_intern("dup"),0);
        VALUE revert25autovar_22=rb_funcall(_autovar_22,rb_intern("dup"),0);
        VALUE revert25first=rb_funcall(_first,rb_intern("dup"),0);
        VALUE revert25autovar_23=rb_funcall(_autovar_23,rb_intern("dup"),0);
        VALUE revert25autovar_24=rb_funcall(_autovar_24,rb_intern("dup"),0);
        VALUE revert25rest=rb_funcall(_rest,rb_intern("dup"),0);
        VALUE revert25autovar_25=rb_funcall(_autovar_25,rb_intern("dup"),0);
        VALUE revert25autovar_26=rb_funcall(_autovar_26,rb_intern("dup"),0);
        VALUE revert25autovar_27=rb_funcall(_autovar_27,rb_intern("dup"),0);
        VALUE revert25autovar_28=rb_funcall(_autovar_28,rb_intern("dup"),0);
        VALUE revert25autovar_29=rb_funcall(_autovar_29,rb_intern("dup"),0);
        VALUE revert25autovar_32=rb_funcall(_autovar_32,rb_intern("dup"),0);
        VALUE revert25autovar_33=rb_funcall(_autovar_33,rb_intern("dup"),0);
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
        VALUE revert26autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert26_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert26autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert26autovar_22=rb_funcall(_autovar_22,rb_intern("dup"),0);
        VALUE revert26first=rb_funcall(_first,rb_intern("dup"),0);
        VALUE revert26autovar_23=rb_funcall(_autovar_23,rb_intern("dup"),0);
        VALUE revert26autovar_24=rb_funcall(_autovar_24,rb_intern("dup"),0);
        VALUE revert26rest=rb_funcall(_rest,rb_intern("dup"),0);
        VALUE revert26autovar_25=rb_funcall(_autovar_25,rb_intern("dup"),0);
        VALUE revert26autovar_26=rb_funcall(_autovar_26,rb_intern("dup"),0);
        it=_autovar_33;
        _autovar_22=it;;
        cstruct oldpass16=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_22);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(255):
            ;
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
                VALUE revert27autovar_24=rb_funcall(_autovar_24,rb_intern("dup"),0);
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert27;
                }
                _autovar_24=it;;
                it=AmethystCore_append(self,_autovar_23,_autovar_24);
                ;
                goto accept42;
revert27:
                ;
                _autovar_24=revert27autovar_24;
                goto alt15_2;
accept42:
                ;

                ;
                goto accept41;
alt15_2:
                ptr->pos=oldpos15;
                stop5=1;
                ;
                goto accept43;
revert28:
                ;
                goto alt15_3;
accept43:
                ;

                ;
                goto accept41;
alt15_3:
                ptr->pos=oldpos15;
                if (1) {
                    it=failobj;
                    goto pass16;
                };
accept41:
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
            break;
            if (1) {
                it=failobj;
                goto pass16;
            }
            break;
        }
        goto success16;
pass16:
        *ptr=oldpass16;
        if (1) {
            it=failobj;
            goto revert26;
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
        goto accept40;
revert26:
        ;
        _autovar_8=revert26autovar_8;
        __result=revert26_result;
        _autovar_10=revert26autovar_10;
        _autovar_22=revert26autovar_22;
        _first=revert26first;
        _autovar_23=revert26autovar_23;
        _autovar_24=revert26autovar_24;
        _rest=revert26rest;
        _autovar_25=revert26autovar_25;
        _autovar_26=revert26autovar_26;
        goto alt14_2;
accept40:
        ;

        ;
        goto accept39;
alt14_2:
        ptr->pos=oldpos14;
        VALUE revert29autovar_8=rb_funcall(_autovar_8,rb_intern("dup"),0);
        VALUE revert29_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert29autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert29first=rb_funcall(_first,rb_intern("dup"),0);
        VALUE revert29rest=rb_funcall(_rest,rb_intern("dup"),0);
        VALUE revert29autovar_27=rb_funcall(_autovar_27,rb_intern("dup"),0);
        VALUE revert29autovar_28=rb_funcall(_autovar_28,rb_intern("dup"),0);
        VALUE revert29autovar_29=rb_funcall(_autovar_29,rb_intern("dup"),0);
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
            VALUE revert30autovar_29=rb_funcall(_autovar_29,rb_intern("dup"),0);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert30;
            }
            _autovar_29=it;;
            it=AmethystCore_append(self,_autovar_28,_autovar_29);
            ;
            goto accept46;
revert30:
            ;
            _autovar_29=revert30autovar_29;
            goto alt16_2;
accept46:
            ;

            ;
            goto accept45;
alt16_2:
            ptr->pos=oldpos16;
            stop6=1;
            ;
            goto accept47;
revert31:
            ;
            goto alt16_3;
accept47:
            ;

            ;
            goto accept45;
alt16_3:
            ptr->pos=oldpos16;
            if (1) {
                it=failobj;
                goto pass18;
            };
accept45:
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
            goto revert29;
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
        goto accept44;
revert29:
        ;
        _autovar_8=revert29autovar_8;
        __result=revert29_result;
        _autovar_10=revert29autovar_10;
        _first=revert29first;
        _rest=revert29rest;
        _autovar_27=revert29autovar_27;
        _autovar_28=revert29autovar_28;
        _autovar_29=revert29autovar_29;
        goto alt14_3;
accept44:
        ;

        ;
        goto accept39;
alt14_3:
        ptr->pos=oldpos14;
        if (1) {
            it=failobj;
            goto revert25;
        };
accept39:
        ;

        ;
        goto accept38;
revert25:
        ;
        _autovar_8=revert25autovar_8;
        __result=revert25_result;
        _autovar_10=revert25autovar_10;
        _autovar_19=revert25autovar_19;
        _autovar_22=revert25autovar_22;
        _first=revert25first;
        _autovar_23=revert25autovar_23;
        _autovar_24=revert25autovar_24;
        _rest=revert25rest;
        _autovar_25=revert25autovar_25;
        _autovar_26=revert25autovar_26;
        _autovar_27=revert25autovar_27;
        _autovar_28=revert25autovar_28;
        _autovar_29=revert25autovar_29;
        _autovar_32=revert25autovar_32;
        _autovar_33=revert25autovar_33;
        goto alt13_2;
accept38:
        ;

        ;
        goto accept37;
alt13_2:
        ptr->pos=oldpos13;
        VALUE revert32follow=rb_funcall(_follow,rb_intern("dup"),0);
        VALUE revert32_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert32autovar_10=rb_funcall(_autovar_10,rb_intern("dup"),0);
        VALUE revert32x=rb_funcall(_x,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert32;
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
        goto accept48;
revert32:
        ;
        _follow=revert32follow;
        __result=revert32_result;
        _autovar_10=revert32autovar_10;
        _x=revert32x;
        goto alt13_3;
accept48:
        ;

        ;
        goto accept37;
alt13_3:
        ptr->pos=oldpos13;
        if (1) {
            it=failobj;
            goto pass11;
        };
accept37:
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
