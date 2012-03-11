#include "cthyst.h"
#include "memo.c"
VALUE cls_Remove_Left_Recursion;
VALUE AmethystCore_anything(VALUE self );
VALUE Remove_Left_Recursion_first(VALUE self ,VALUE a0);
VALUE Remove_Left_Recursion_must_empty(VALUE self );
VALUE Remove_Left_Recursion_root(VALUE self );
VALUE switchhash_Remove_Left_Recursion_1;
VALUE switchhash_Remove_Left_Recursion_2;
VALUE switchhash_Remove_Left_Recursion_3;
VALUE switchhash_Remove_Left_Recursion_4;
static VALUE sy__Bind_lb_src_66c4;
static VALUE sy__Or_lb_bind_lb__3169;
static VALUE sy__Seq_lb_bind_e0fb;
static VALUE sy__Seq_lb_bind_f95b;
static VALUE sy___at__contex_160a;
static VALUE sy___at__contex_d6d5;
static VALUE sy___at_left_re_c85d;
static VALUE sy___at_result_eq__b6ab;
static VALUE sy___lp_bind_lb_1_rb__5b9e;
static VALUE sy___lp_must_em_43e9;
static VALUE sy__bind_lb_1_rb__dot__44a5;
static VALUE sy__bind_lb_1_rb__eq__56ab;
static VALUE sy__bind_lb_1_rb__lb__fa06;
static VALUE sy__bind_lb_1_rb__sp__4ee5;
static VALUE sy__bind_lb_1_rb__sp__c213;
static VALUE sy__src_25d9;
static VALUE sy__src_dot_body_519e;
static VALUE sy_first;
static VALUE sy_must_empty;
VALUE profile_report_Remove_Left_Recursion(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Remove_Left_Recursion_first(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_autovar,_autovar_2,_follow,__result,_x,_autovar_3,_autovar_4,_autovar_5,_expr,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_ary,_autovar_10,_autovar_11,_first,_autovar_12,_autovar_13,_rest,_autovar_14,_autovar_15,_autovar_16,_autovar_17,_autovar_18;
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
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__5b9e,1,bind2);
        _autovar=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass1;
        };
        it=rb_ary_new3(0);
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
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
        it=rb_funcall(self,sy___at_left_re_c85d,1,bind2);
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__4ee5,1,bind2);
        _follow=bind_aget(bind2,1);;
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
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
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
    case 1/*Bind*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_4;
        ptr->len=1;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=_follow;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _autovar_5=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
        it=_autovar_5;
        _expr=it;;
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy__Bind_lb_src_66c4,1,bind2);
        _expr=bind_aget(bind2,1);;
        _autovar_6=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
            goto alt3_2;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_6;
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
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
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
    case 2/*Or*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_7=it;;
        cstruct oldpass4=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_ary_new3(0);
        _autovar_8=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=_follow;
            arg0=it;
            it=rb_funcall(self,sy_first,1,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            _autovar_9=it;;
            it=AmethystCore_append(self,_autovar_8,_autovar_9);
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
                goto pass4;
            };
accept5:
            ;
        }
        it=_autovar_8;
        _ary=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy__Or_lb_bind_lb__3169,1,bind2);
        _ary=bind_aget(bind2,1);;
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
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
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
    case 3/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_10=it;;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=_autovar_10;
        _autovar_11=it;;
        cstruct oldpass5=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_must_empty,0);
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_12=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_2;
            }
            _autovar_13=it;;
            it=AmethystCore_append(self,_autovar_12,_autovar_13);
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
                goto pass5;
            };
accept8:
            ;
        }
        it=_autovar_12;
        _rest=it;;
        bind_aset(bind2,1,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_e0fb,1,bind2);
        _rest=bind_aget(bind2,1);;
        _autovar_14=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_14;
        ptr->len=1;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=_follow;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass6;
        }
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
        it=_autovar_15;
        _rest=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
            goto alt7_2;
        }
success5:
        *ptr=oldpass5;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=_autovar_10;
        _autovar_16=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_16;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=_follow;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass7;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_17=it;;
        int stop4=0;
        while(!stop4) {
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt9_2;
            }
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_17,_autovar_18);
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            stop4=1;
            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            if (1) {
                it=failobj;
                goto pass7;
            };
accept9:
            ;
        }
        it=_autovar_17;
        _rest=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
            goto alt7_3;
        }
success7:
        *ptr=oldpass7;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept7;
alt7_3:
        ptr->pos=oldpos7;
        if (1) {
            it=failobj;
            goto alt6_2;
        };
accept7:
        ;

        ;
        goto accept6;
alt6_2:
        ptr->pos=oldpos6;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt6_3;
        }
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
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
    case 4/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        int oldpos10=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_11=it;;
        cstruct oldpass8=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_must_empty,0);
        if (it==failobj) {
            it=failobj;
            goto pass8;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_12=it;;
        int stop5=0;
        while(!stop5) {
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt11_2;
            }
            _autovar_13=it;;
            it=AmethystCore_append(self,_autovar_12,_autovar_13);
            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            stop5=1;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            if (1) {
                it=failobj;
                goto pass8;
            };
accept11:
            ;
        }
        it=_autovar_12;
        _rest=it;;
        bind_aset(bind2,1,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_e0fb,1,bind2);
        _rest=bind_aget(bind2,1);;
        _autovar_14=it;;
        cstruct oldpass9=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_14;
        ptr->len=1;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=_follow;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass9;
        }
        _autovar_15=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
        it=_autovar_15;
        _rest=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
            goto alt10_2;
        }
success8:
        *ptr=oldpass8;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;

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
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept10;
alt10_3:
        ptr->pos=oldpos10;
        if (1) {
            it=failobj;
            goto fail;
        };
accept10:
        ;
        break;
    case 5/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        int oldpos12=ptr->pos;
        int cut12=0;
alt12_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_16=it;;
        cstruct oldpass10=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_16;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=_follow;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass10;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_17=it;;
        int stop6=0;
        while(!stop6) {
            int oldpos13=ptr->pos;
            int cut13=0;
alt13_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt13_2;
            }
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_17,_autovar_18);
            ;
            goto accept13;
alt13_2:
            ptr->pos=oldpos13;
            stop6=1;
            ;
            goto accept13;
alt13_3:
            ptr->pos=oldpos13;
            if (1) {
                it=failobj;
                goto pass10;
            };
accept13:
            ;
        }
        it=_autovar_17;
        _rest=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
            goto alt12_2;
        }
success10:
        *ptr=oldpass10;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept12;
alt12_2:
        ptr->pos=oldpos12;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt12_3;
        }
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept12;
alt12_3:
        ptr->pos=oldpos12;
        if (1) {
            it=failobj;
            goto fail;
        };
accept12:
        ;
        break;
    case 6/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
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
    it=rb_funcall(self,sy___lp_must_em_43e9,1,bind2);
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
    VALUE it ,_autovar,_a,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_follow,__result,_x,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_expr,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_ary,_autovar_16,_autovar_17,_autovar_18,_first,_autovar_19,_autovar_20,_rest,_autovar_21,_autovar_22,_autovar_23,_autovar_24,_autovar_25,_first_2,_autovar_26,_autovar_27,_autovar_28,_autovar_29,_follow_2,_autovar_30,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_160a,1,bind2);
    _autovar=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
    _autovar=bind_aget(bind2,1);;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _a=it;;
    bind_aset(bind2,1,_a);
    it=rb_funcall(self,sy__bind_lb_1_rb__dot__44a5,1,bind2);
    _a=bind_aget(bind2,1);;
    _autovar_2=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_2;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 1/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
    it=_autovar_3;
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
        else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
        else ary=rb_ary_new3(0);
        ptr->ary2=ary;
        ptr->ary=RARRAY_PTR(ary);
        ptr->len=RARRAY_LEN(ary);
    }
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy__bind_lb_1_rb__lb__fa06,1,bind2);
    _autovar=bind_aget(bind2,1);;
    it=rb_funcall(self,sy___at_result_eq__b6ab,1,bind2);
    it=rb_funcall(self,sy__src_dot_body_519e,1,bind2);
    it=rb_funcall(self,sy__src_dot_body_519e,1,bind2);
    _autovar_5=it;;
    cstruct oldpass3=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_5;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qfalse;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_7=it;;
        cstruct oldpass4=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__5b9e,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass4;
        };
        it=rb_ary_new3(0);
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            bind_aset(bind2,1,_autovar_6);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar_6=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
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
                goto pass4;
            };
accept2:
            ;
        }
        it=rb_funcall(self,sy___at_left_re_c85d,1,bind2);
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__4ee5,1,bind2);
        _follow=bind_aget(bind2,1);;
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
        _x=it;;
        it=Qfalse;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

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
        it=__result;
        _autovar_8=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        break;
    case 1/*Bind*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qfalse;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        cstruct oldpass5=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _autovar_10=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_10;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qfalse;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass6;
        }
        _autovar_11=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
        it=_autovar_11;
        _expr=it;;
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy__Bind_lb_src_66c4,1,bind2);
        _expr=bind_aget(bind2,1);;
        _autovar_12=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
            goto alt3_2;
        }
success5:
        *ptr=oldpass5;
        it=_autovar_12;
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
        _x=it;;
        it=Qfalse;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

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
        it=__result;
        _autovar_8=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        break;
    case 2/*Or*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qfalse;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_13=it;;
        cstruct oldpass7=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_ary_new3(0);
        _autovar_14=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            bind_aset(bind2,1,_autovar_6);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar_6=bind_aget(bind2,1);;
            it=Qfalse;
            arg0=it;
            it=rb_funcall(self,sy_first,1,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt5_2;
            }
            _autovar_15=it;;
            it=AmethystCore_append(self,_autovar_14,_autovar_15);
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
                goto pass7;
            };
accept5:
            ;
        }
        it=_autovar_14;
        _ary=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
            goto alt4_2;
        }
success7:
        *ptr=oldpass7;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy__Or_lb_bind_lb__3169,1,bind2);
        _ary=bind_aget(bind2,1);;
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
        _x=it;;
        it=Qfalse;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto pass3;
        };
accept4:
        ;
        it=__result;
        _autovar_8=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        break;
    case 3/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qfalse;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_16=it;;
        it=_autovar_16;
        _autovar_17=it;;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=_autovar_17;
        _autovar_18=it;;
        cstruct oldpass8=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_must_empty,0);
        if (it==failobj) {
            it=failobj;
            goto pass8;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_19=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            bind_aset(bind2,1,_autovar_6);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar_6=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt8_2;
            }
            _autovar_20=it;;
            it=AmethystCore_append(self,_autovar_19,_autovar_20);
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
                goto pass8;
            };
accept8:
            ;
        }
        it=_autovar_19;
        _rest=it;;
        bind_aset(bind2,1,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_e0fb,1,bind2);
        _rest=bind_aget(bind2,1);;
        _autovar_21=it;;
        cstruct oldpass9=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_21;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qfalse;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass9;
        }
        _autovar_22=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
        it=_autovar_22;
        _rest=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
            goto alt7_2;
        }
success8:
        *ptr=oldpass8;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=_autovar_17;
        _autovar_23=it;;
        cstruct oldpass10=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qfalse;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass10;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_24=it;;
        int stop4=0;
        while(!stop4) {
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            bind_aset(bind2,1,_autovar_6);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar_6=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt9_2;
            }
            _autovar_25=it;;
            it=AmethystCore_append(self,_autovar_24,_autovar_25);
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            stop4=1;
            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            if (1) {
                it=failobj;
                goto pass10;
            };
accept9:
            ;
        }
        it=_autovar_24;
        _rest=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
            goto alt7_3;
        }
success10:
        *ptr=oldpass10;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept7;
alt7_3:
        ptr->pos=oldpos7;
        if (1) {
            it=failobj;
            goto alt6_2;
        };
accept7:
        ;

        ;
        goto accept6;
alt6_2:
        ptr->pos=oldpos6;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt6_3;
        }
        _x=it;;
        it=Qfalse;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept6;
alt6_3:
        ptr->pos=oldpos6;
        if (1) {
            it=failobj;
            goto pass3;
        };
accept6:
        ;
        it=__result;
        _autovar_8=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        break;
    case 4/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qfalse;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _x=it;;
        it=Qfalse;
        it=Qfalse;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        it=__result;
        _autovar_8=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
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
    it=_autovar_8;
    _first_2=it;;
    it=rb_funcall(self,sy__src_dot_body_519e,1,bind2);
    _autovar_26=it;;
    cstruct oldpass11=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_26;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qtrue;
        int oldpos10=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_7=it;;
        cstruct oldpass12=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__5b9e,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass12;
        };
        it=rb_ary_new3(0);
        int stop5=0;
        while(!stop5) {
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            bind_aset(bind2,1,_autovar_6);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar_6=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt11_2;
            }
            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            stop5=1;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            if (1) {
                it=failobj;
                goto pass12;
            };
accept11:
            ;
        }
        it=rb_funcall(self,sy___at_left_re_c85d,1,bind2);
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
            goto alt10_2;
        }
success12:
        *ptr=oldpass12;
        it=Qtrue;
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__4ee5,1,bind2);
        _follow=bind_aget(bind2,1);;
        __result=it;;

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
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

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
        it=__result;
        _autovar_27=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        break;
    case 1/*Bind*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qtrue;
        int oldpos12=ptr->pos;
        int cut12=0;
alt12_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        cstruct oldpass13=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass13;
        }
        _autovar_10=it;;
        cstruct oldpass14=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_10;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qtrue;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass14;
        }
        _autovar_11=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
        it=_autovar_11;
        _expr=it;;
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy__Bind_lb_src_66c4,1,bind2);
        _expr=bind_aget(bind2,1);;
        _autovar_12=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
            goto alt12_2;
        }
success13:
        *ptr=oldpass13;
        it=_autovar_12;
        __result=it;;

        ;
        goto accept12;
alt12_2:
        ptr->pos=oldpos12;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt12_3;
        }
        _x=it;;
        it=Qtrue;
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept12;
alt12_3:
        ptr->pos=oldpos12;
        if (1) {
            it=failobj;
            goto pass11;
        };
accept12:
        ;
        it=__result;
        _autovar_27=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        break;
    case 2/*Or*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qtrue;
        int oldpos13=ptr->pos;
        int cut13=0;
alt13_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_13=it;;
        cstruct oldpass15=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_ary_new3(0);
        _autovar_14=it;;
        int stop6=0;
        while(!stop6) {
            int oldpos14=ptr->pos;
            int cut14=0;
alt14_1:
            ;
            bind_aset(bind2,1,_autovar_6);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar_6=bind_aget(bind2,1);;
            it=Qtrue;
            arg0=it;
            it=rb_funcall(self,sy_first,1,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt14_2;
            }
            _autovar_15=it;;
            it=AmethystCore_append(self,_autovar_14,_autovar_15);
            ;
            goto accept14;
alt14_2:
            ptr->pos=oldpos14;
            stop6=1;
            ;
            goto accept14;
alt14_3:
            ptr->pos=oldpos14;
            if (1) {
                it=failobj;
                goto pass15;
            };
accept14:
            ;
        }
        it=_autovar_14;
        _ary=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
            goto alt13_2;
        }
success15:
        *ptr=oldpass15;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy__Or_lb_bind_lb__3169,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;

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
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

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
        it=__result;
        _autovar_27=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        break;
    case 3/*Seq*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qtrue;
        int oldpos15=ptr->pos;
        int cut15=0;
alt15_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_28=it;;
        it=_autovar_28;
        _autovar_29=it;;
        int oldpos16=ptr->pos;
        int cut16=0;
alt16_1:
        ;
        it=_autovar_29;
        _autovar_18=it;;
        cstruct oldpass16=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_must_empty,0);
        if (it==failobj) {
            it=failobj;
            goto pass16;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_19=it;;
        int stop7=0;
        while(!stop7) {
            int oldpos17=ptr->pos;
            int cut17=0;
alt17_1:
            ;
            bind_aset(bind2,1,_autovar_6);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar_6=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt17_2;
            }
            _autovar_20=it;;
            it=AmethystCore_append(self,_autovar_19,_autovar_20);
            ;
            goto accept17;
alt17_2:
            ptr->pos=oldpos17;
            stop7=1;
            ;
            goto accept17;
alt17_3:
            ptr->pos=oldpos17;
            if (1) {
                it=failobj;
                goto pass16;
            };
accept17:
            ;
        }
        it=_autovar_19;
        _rest=it;;
        bind_aset(bind2,1,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_e0fb,1,bind2);
        _rest=bind_aget(bind2,1);;
        _autovar_21=it;;
        cstruct oldpass17=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_21;
        ptr->len=1;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qtrue;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass17;
        }
        _autovar_22=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
        it=_autovar_22;
        _rest=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
            goto alt16_2;
        }
success16:
        *ptr=oldpass16;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept16;
alt16_2:
        ptr->pos=oldpos16;
        it=_autovar_29;
        _autovar_23=it;;
        cstruct oldpass18=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qtrue;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass18;
        }
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_24=it;;
        int stop8=0;
        while(!stop8) {
            int oldpos18=ptr->pos;
            int cut18=0;
alt18_1:
            ;
            bind_aset(bind2,1,_autovar_6);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar_6=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt18_2;
            }
            _autovar_25=it;;
            it=AmethystCore_append(self,_autovar_24,_autovar_25);
            ;
            goto accept18;
alt18_2:
            ptr->pos=oldpos18;
            stop8=1;
            ;
            goto accept18;
alt18_3:
            ptr->pos=oldpos18;
            if (1) {
                it=failobj;
                goto pass18;
            };
accept18:
            ;
        }
        it=_autovar_24;
        _rest=it;;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
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
            goto alt16_3;
        }
success18:
        *ptr=oldpass18;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy__Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept16;
alt16_3:
        ptr->pos=oldpos16;
        if (1) {
            it=failobj;
            goto alt15_2;
        };
accept16:
        ;

        ;
        goto accept15;
alt15_2:
        ptr->pos=oldpos15;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt15_3;
        }
        _x=it;;
        it=Qtrue;
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept15;
alt15_3:
        ptr->pos=oldpos15;
        if (1) {
            it=failobj;
            goto pass11;
        };
accept15:
        ;
        it=__result;
        _autovar_27=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
        break;
    case 4/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar_6);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        it=Qtrue;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass11;
        }
        _x=it;;
        it=Qtrue;
        it=Qtrue;
        _follow=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        it=__result;
        _autovar_27=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass11;
        }
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
    it=_autovar_27;
    _follow_2=it;;
    bind_aset(bind2,1,_a);
    bind_aset(bind2,2,_first_2);
    bind_aset(bind2,3,_follow_2);
    it=rb_funcall(self,sy__bind_lb_1_rb__eq__56ab,1,bind2);
    _a=bind_aget(bind2,1);;
    _first_2=bind_aget(bind2,2);;
    _follow_2=bind_aget(bind2,3);;
    it=rb_funcall(self,sy__src_25d9,1,bind2);
    _autovar_30=it;;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
    _autovar=bind_aget(bind2,1);;
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
    it=_autovar_30;
    __result_2=it;;

fail:
    return it;
}
void Init_remove_left_rigth_recursion_c() {
    cls_Remove_Left_Recursion=rb_define_class("Remove_Left_Recursion",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Remove_Left_Recursion,"profile_report",profile_report_Remove_Left_Recursion,0);
    switchhash_Remove_Left_Recursion_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Remove_Left_Recursion_1);;
    switchhash_Remove_Left_Recursion_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Remove_Left_Recursion_2);;
    switchhash_Remove_Left_Recursion_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Remove_Left_Recursion_3);;
    switchhash_Remove_Left_Recursion_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Seq\nnext h[k]=5 if k<=Seq\nnext h[k]=6 if k<=Object\n}");
    rb_global_variable(&switchhash_Remove_Left_Recursion_4);;
    sy__Bind_lb_src_66c4=rb_intern("_Bind_lb_src_66c4");
    sy__Or_lb_bind_lb__3169=rb_intern("_Or_lb_bind_lb__3169");
    sy__Seq_lb_bind_e0fb=rb_intern("_Seq_lb_bind_e0fb");
    sy__Seq_lb_bind_f95b=rb_intern("_Seq_lb_bind_f95b");
    sy___at__contex_160a=rb_intern("__at__contex_160a");
    sy___at__contex_d6d5=rb_intern("__at__contex_d6d5");
    sy___at_left_re_c85d=rb_intern("__at_left_re_c85d");
    sy___at_result_eq__b6ab=rb_intern("__at_result_eq__b6ab");
    sy___lp_bind_lb_1_rb__5b9e=rb_intern("__lp_bind_lb_1_rb__5b9e");
    sy___lp_must_em_43e9=rb_intern("__lp_must_em_43e9");
    sy__bind_lb_1_rb__dot__44a5=rb_intern("_bind_lb_1_rb__dot__44a5");
    sy__bind_lb_1_rb__eq__56ab=rb_intern("_bind_lb_1_rb__eq__56ab");
    sy__bind_lb_1_rb__lb__fa06=rb_intern("_bind_lb_1_rb__lb__fa06");
    sy__bind_lb_1_rb__sp__4ee5=rb_intern("_bind_lb_1_rb__sp__4ee5");
    sy__bind_lb_1_rb__sp__c213=rb_intern("_bind_lb_1_rb__sp__c213");
    sy__src_25d9=rb_intern("_src_25d9");
    sy__src_dot_body_519e=rb_intern("_src_dot_body_519e");
    sy_first=rb_intern("first");
    sy_must_empty=rb_intern("must_empty");
    rb_define_method(cls_Remove_Left_Recursion,"first",Remove_Left_Recursion_first,1);
    rb_define_method(cls_Remove_Left_Recursion,"must_empty",Remove_Left_Recursion_must_empty,0);
    rb_define_method(cls_Remove_Left_Recursion,"root",Remove_Left_Recursion_root,0);
    rb_eval_string("testversionremove_left_rigth_recursion('b3d8909106bdd99e86ed090492224e15')");
}
