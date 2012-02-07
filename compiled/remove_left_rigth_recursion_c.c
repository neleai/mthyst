#include "cthyst.h"
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
static VALUE sy_Remove_Left_Recursion__append_lp__d113;
static VALUE sy_Remove_Left_Recursion__at_left_re_c85d;
static VALUE sy_Remove_Left_Recursion__at_name_eq_sr_362f;
static VALUE sy_Remove_Left_Recursion__at_result_eq__b6ab;
static VALUE sy_Remove_Left_Recursion__lp__at_name_eq__eq__2784;
static VALUE sy_Remove_Left_Recursion__lp_must_em_43e9;
static VALUE sy_Remove_Left_Recursion_a_eq_autova_d0a0;
static VALUE sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5;
static VALUE sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213;
static VALUE sy_Remove_Left_Recursion_src_25d9;
static VALUE sy_Remove_Left_Recursion_src_dot_body_519e;
VALUE Remove_Left_Recursion_first(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_autovar,_follow,__result,_x,_autovar_2,_autovar_3,_autovar_4,_expr,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_ary,_autovar_9,_autovar_10,_autovar_11,_first,_autovar_12,_autovar_13,_rest,_autovar_14,_autovar_15,_autovar_16,_autovar_17,_autovar_18;
    VALUE bind2=bind_new2(16);
    _follow=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
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
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_funcall(self,sy_Remove_Left_Recursion__lp__at_name_eq__eq__2784,1,bind2);
        FAILTEST(pass1);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Remove_Left_Recursion__at_left_re_c85d,1,bind2);
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_follow);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5,1,bind2);
        _follow=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 1/*Bind*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        _autovar_3=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_3;
        ptr->len=1;
        it=_follow;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        FAILTEST(pass3);
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto pass2;
success3:
        *ptr=oldpass3;
        it=_autovar_4;
        _expr=it;;
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_src_66c4,1,bind2);
        _expr=bind_aget(bind2,1);;
        _autovar_5=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt2_2;
success2:
        *ptr=oldpass2;
        it=_autovar_5;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 2/*Or*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
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
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_ary_new3(0);
        _autovar_7=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=_follow;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            FAILTEST(alt4_2);
            _autovar_8=it;;
            bind_aset(bind2,1,_autovar_7);
            bind_aset(bind2,2,_autovar_8);
            it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);
            _autovar_7=bind_aget(bind2,1);;
            _autovar_8=bind_aget(bind2,2);;
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            stop1=1;
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            goto pass4;
accept4:
            ;
        }
        it=_autovar_7;
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt3_2;
success4:
        *ptr=oldpass4;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        FAILTEST(alt3_3);
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto fail;
accept3:
        ;
        break;
    case 3/*Seq*/:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        it=_autovar_9;
        _autovar_10=it;;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=Remove_Left_Recursion_must_empty(self );
        FAILTEST(pass5);
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_12=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt7_2);
            _autovar_13=it;;
            bind_aset(bind2,1,_autovar_12);
            bind_aset(bind2,2,_autovar_13);
            it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);
            _autovar_12=bind_aget(bind2,1);;
            _autovar_13=bind_aget(bind2,2);;
            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            stop2=1;
            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            goto pass5;
accept7:
            ;
        }
        it=_autovar_12;
        _rest=it;;
        bind_aset(bind2,1,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_e0fb,1,bind2);
        _rest=bind_aget(bind2,1);;
        _autovar_14=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_14;
        ptr->len=1;
        it=_follow;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        FAILTEST(pass6);
        _autovar_15=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto pass5;
success6:
        *ptr=oldpass6;
        it=_autovar_15;
        _rest=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto alt6_2;
success5:
        *ptr=oldpass5;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept6;
alt6_2:
        ptr->pos=oldpos6;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=_follow;
        arg0=it;
        it=Remove_Left_Recursion_first(self ,arg0);
        FAILTEST(pass7);
        _first=it;;
        it=rb_ary_new3(0);
        _autovar_17=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt8_2);
            _autovar_18=it;;
            bind_aset(bind2,1,_autovar_17);
            bind_aset(bind2,2,_autovar_18);
            it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);
            _autovar_17=bind_aget(bind2,1);;
            _autovar_18=bind_aget(bind2,2);;
            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            stop3=1;
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            goto pass7;
accept8:
            ;
        }
        it=_autovar_17;
        _rest=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt6_3;
success7:
        *ptr=oldpass7;
        bind_aset(bind2,1,_first);
        bind_aset(bind2,2,_rest);
        it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
        _first=bind_aget(bind2,1);;
        _rest=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept6;
alt6_3:
        ptr->pos=oldpos6;
        goto alt5_2;
accept6:
        ;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=AmethystCore_anything(self );
        FAILTEST(alt5_3);
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        goto fail;
accept5:
        ;
        break;
    case 4/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(fail);
        _x=it;;
        bind_aset(bind2,1,_follow);
        bind_aset(bind2,2,_x);
        it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
        _follow=bind_aget(bind2,1);;
        _x=bind_aget(bind2,2);;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
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
    FAILTEST(fail);
    _e=it;;
    bind_aset(bind2,1,_e);
    it=rb_funcall(self,sy_Remove_Left_Recursion__lp_must_em_43e9,1,bind2);
    _e=bind_aget(bind2,1);;
    FAILTEST(fail);
    it=_e;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Remove_Left_Recursion_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_follow,__result,_x,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_expr,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_ary,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_first,_autovar_16,_autovar_17,_rest,_autovar_18,_autovar_19,_autovar_20,_autovar_21,_autovar_22,_first_2,_autovar_23,_autovar_24,_autovar_25,_autovar_26,_follow_2,_autovar_27,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
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
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_funcall(self,sy_Remove_Left_Recursion__at_name_eq_sr_362f,1,bind2);
        it=rb_funcall(self,sy_Remove_Left_Recursion__at_result_eq__b6ab,1,bind2);
        it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_519e,1,bind2);
        it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_519e,1,bind2);
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_2;
        ptr->len=1;
        switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass3=*ptr;
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
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=rb_funcall(self,sy_Remove_Left_Recursion__lp__at_name_eq__eq__2784,1,bind2);
            FAILTEST(pass3);
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Remove_Left_Recursion__at_left_re_c85d,1,bind2);
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass3;
            goto success3;
pass3:
            *ptr=oldpass3;
            goto alt1_2;
success3:
            *ptr=oldpass3;
            it=Qfalse;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5,1,bind2);
            _follow=bind_aget(bind2,1);;
            __result=it;;

            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_3);
            _x=it;;
            it=Qfalse;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
            _follow=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            goto pass2;
accept1:
            ;
            it=__result;
            _autovar_4=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            break;
        case 1/*Bind*/:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_5=it;;
            cstruct oldpass4=*ptr;
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
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=AmethystCore_anything(self );
            FAILTEST(pass4);
            _autovar_6=it;;
            cstruct oldpass5=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_6;
            ptr->len=1;
            it=Qfalse;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            FAILTEST(pass5);
            _autovar_7=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass5;
            goto success5;
pass5:
            *ptr=oldpass5;
            goto pass4;
success5:
            *ptr=oldpass5;
            it=_autovar_7;
            _expr=it;;
            bind_aset(bind2,1,_expr);
            it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_src_66c4,1,bind2);
            _expr=bind_aget(bind2,1);;
            _autovar_8=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass4;
            goto success4;
pass4:
            *ptr=oldpass4;
            goto alt2_2;
success4:
            *ptr=oldpass4;
            it=_autovar_8;
            __result=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_3);
            _x=it;;
            it=Qfalse;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
            _follow=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto pass2;
accept2:
            ;
            it=__result;
            _autovar_4=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            break;
        case 2/*Or*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
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
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=rb_ary_new3(0);
            _autovar_10=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos4=ptr->pos;
                int cut4=0;
alt4_1:
                ;
                it=Qfalse;
                arg0=it;
                it=Remove_Left_Recursion_first(self ,arg0);
                FAILTEST(alt4_2);
                _autovar_11=it;;
                bind_aset(bind2,1,_autovar_10);
                bind_aset(bind2,2,_autovar_11);
                it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);
                _autovar_10=bind_aget(bind2,1);;
                _autovar_11=bind_aget(bind2,2);;
                ;
                goto accept4;
alt4_2:
                ptr->pos=oldpos4;
                stop1=1;
                ;
                goto accept4;
alt4_3:
                ptr->pos=oldpos4;
                goto pass6;
accept4:
                ;
            }
            it=_autovar_10;
            _ary=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass6;
            goto success6;
pass6:
            *ptr=oldpass6;
            goto alt3_2;
success6:
            *ptr=oldpass6;
            bind_aset(bind2,1,_ary);
            it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);
            _ary=bind_aget(bind2,1);;
            __result=it;;

            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            it=AmethystCore_anything(self );
            FAILTEST(alt3_3);
            _x=it;;
            it=Qfalse;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
            _follow=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto pass2;
accept3:
            ;
            it=__result;
            _autovar_4=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            break;
        case 3/*Seq*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_12=it;;
            it=_autovar_12;
            _autovar_13=it;;
            it=_autovar_13;
            _autovar_14=it;;
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=_autovar_14;
            _autovar_15=it;;
            cstruct oldpass7=*ptr;
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
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=Remove_Left_Recursion_must_empty(self );
            FAILTEST(pass7);
            _first=it;;
            it=rb_ary_new3(0);
            _autovar_16=it;;
            int stop2=0;
            while(!stop2) {
                int oldpos7=ptr->pos;
                int cut7=0;
alt7_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt7_2);
                _autovar_17=it;;
                bind_aset(bind2,1,_autovar_16);
                bind_aset(bind2,2,_autovar_17);
                it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);
                _autovar_16=bind_aget(bind2,1);;
                _autovar_17=bind_aget(bind2,2);;
                ;
                goto accept7;
alt7_2:
                ptr->pos=oldpos7;
                stop2=1;
                ;
                goto accept7;
alt7_3:
                ptr->pos=oldpos7;
                goto pass7;
accept7:
                ;
            }
            it=_autovar_16;
            _rest=it;;
            bind_aset(bind2,1,_rest);
            it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_e0fb,1,bind2);
            _rest=bind_aget(bind2,1);;
            _autovar_18=it;;
            cstruct oldpass8=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_18;
            ptr->len=1;
            it=Qfalse;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            FAILTEST(pass8);
            _autovar_19=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto pass7;
success8:
            *ptr=oldpass8;
            it=_autovar_19;
            _rest=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass7;
            goto success7;
pass7:
            *ptr=oldpass7;
            goto alt6_2;
success7:
            *ptr=oldpass7;
            bind_aset(bind2,1,_first);
            bind_aset(bind2,2,_rest);
            it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
            _first=bind_aget(bind2,1);;
            _rest=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            it=_autovar_14;
            _autovar_20=it;;
            cstruct oldpass9=*ptr;
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
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=Qfalse;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            FAILTEST(pass9);
            _first=it;;
            it=rb_ary_new3(0);
            _autovar_21=it;;
            int stop3=0;
            while(!stop3) {
                int oldpos8=ptr->pos;
                int cut8=0;
alt8_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt8_2);
                _autovar_22=it;;
                bind_aset(bind2,1,_autovar_21);
                bind_aset(bind2,2,_autovar_22);
                it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);
                _autovar_21=bind_aget(bind2,1);;
                _autovar_22=bind_aget(bind2,2);;
                ;
                goto accept8;
alt8_2:
                ptr->pos=oldpos8;
                stop3=1;
                ;
                goto accept8;
alt8_3:
                ptr->pos=oldpos8;
                goto pass9;
accept8:
                ;
            }
            it=_autovar_21;
            _rest=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass9;
            goto success9;
pass9:
            *ptr=oldpass9;
            goto alt6_3;
success9:
            *ptr=oldpass9;
            bind_aset(bind2,1,_first);
            bind_aset(bind2,2,_rest);
            it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
            _first=bind_aget(bind2,1);;
            _rest=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto alt5_2;
accept6:
            ;

            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=AmethystCore_anything(self );
            FAILTEST(alt5_3);
            _x=it;;
            it=Qfalse;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
            _follow=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            goto pass2;
accept5:
            ;
            it=__result;
            _autovar_4=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            break;
        case 4/*Object*/:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(pass2);
            _x=it;;
            it=Qfalse;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
            _follow=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            __result=it;;
            it=__result;
            _autovar_4=it;;
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
        it=_autovar_4;
        _first_2=it;;
        it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_519e,1,bind2);
        _autovar_23=it;;
        cstruct oldpass10=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_23;
        ptr->len=1;
        switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass11=*ptr;
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
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=rb_funcall(self,sy_Remove_Left_Recursion__lp__at_name_eq__eq__2784,1,bind2);
            FAILTEST(pass11);
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Remove_Left_Recursion__at_left_re_c85d,1,bind2);
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass11;
            goto success11;
pass11:
            *ptr=oldpass11;
            goto alt9_2;
success11:
            *ptr=oldpass11;
            it=Qtrue;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5,1,bind2);
            _follow=bind_aget(bind2,1);;
            __result=it;;

            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            it=AmethystCore_anything(self );
            FAILTEST(alt9_3);
            _x=it;;
            it=Qtrue;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
            _follow=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            goto pass10;
accept9:
            ;
            it=__result;
            _autovar_24=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            break;
        case 1/*Bind*/:
            ;
            int oldpos10=ptr->pos;
            int cut10=0;
alt10_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_5=it;;
            cstruct oldpass12=*ptr;
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
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=AmethystCore_anything(self );
            FAILTEST(pass12);
            _autovar_6=it;;
            cstruct oldpass13=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_6;
            ptr->len=1;
            it=Qtrue;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            FAILTEST(pass13);
            _autovar_7=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass13;
            goto success13;
pass13:
            *ptr=oldpass13;
            goto pass12;
success13:
            *ptr=oldpass13;
            it=_autovar_7;
            _expr=it;;
            bind_aset(bind2,1,_expr);
            it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_src_66c4,1,bind2);
            _expr=bind_aget(bind2,1);;
            _autovar_8=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass12;
            goto success12;
pass12:
            *ptr=oldpass12;
            goto alt10_2;
success12:
            *ptr=oldpass12;
            it=_autovar_8;
            __result=it;;

            ;
            goto accept10;
alt10_2:
            ptr->pos=oldpos10;
            it=AmethystCore_anything(self );
            FAILTEST(alt10_3);
            _x=it;;
            it=Qtrue;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
            _follow=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept10;
alt10_3:
            ptr->pos=oldpos10;
            goto pass10;
accept10:
            ;
            it=__result;
            _autovar_24=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            break;
        case 2/*Or*/:
            ;
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_9=it;;
            cstruct oldpass14=*ptr;
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
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=rb_ary_new3(0);
            _autovar_10=it;;
            int stop4=0;
            while(!stop4) {
                int oldpos12=ptr->pos;
                int cut12=0;
alt12_1:
                ;
                it=Qtrue;
                arg0=it;
                it=Remove_Left_Recursion_first(self ,arg0);
                FAILTEST(alt12_2);
                _autovar_11=it;;
                bind_aset(bind2,1,_autovar_10);
                bind_aset(bind2,2,_autovar_11);
                it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);
                _autovar_10=bind_aget(bind2,1);;
                _autovar_11=bind_aget(bind2,2);;
                ;
                goto accept12;
alt12_2:
                ptr->pos=oldpos12;
                stop4=1;
                ;
                goto accept12;
alt12_3:
                ptr->pos=oldpos12;
                goto pass14;
accept12:
                ;
            }
            it=_autovar_10;
            _ary=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass14;
            goto success14;
pass14:
            *ptr=oldpass14;
            goto alt11_2;
success14:
            *ptr=oldpass14;
            bind_aset(bind2,1,_ary);
            it=rb_funcall(self,sy_Remove_Left_Recursion_Or_lb_bind_lb__3169,1,bind2);
            _ary=bind_aget(bind2,1);;
            __result=it;;

            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            it=AmethystCore_anything(self );
            FAILTEST(alt11_3);
            _x=it;;
            it=Qtrue;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
            _follow=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            goto pass10;
accept11:
            ;
            it=__result;
            _autovar_24=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            break;
        case 3/*Seq*/:
            ;
            int oldpos13=ptr->pos;
            int cut13=0;
alt13_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_12=it;;
            it=_autovar_12;
            _autovar_25=it;;
            it=_autovar_25;
            _autovar_26=it;;
            int oldpos14=ptr->pos;
            int cut14=0;
alt14_1:
            ;
            it=_autovar_26;
            _autovar_15=it;;
            cstruct oldpass15=*ptr;
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
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=Remove_Left_Recursion_must_empty(self );
            FAILTEST(pass15);
            _first=it;;
            it=rb_ary_new3(0);
            _autovar_16=it;;
            int stop5=0;
            while(!stop5) {
                int oldpos15=ptr->pos;
                int cut15=0;
alt15_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt15_2);
                _autovar_17=it;;
                bind_aset(bind2,1,_autovar_16);
                bind_aset(bind2,2,_autovar_17);
                it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);
                _autovar_16=bind_aget(bind2,1);;
                _autovar_17=bind_aget(bind2,2);;
                ;
                goto accept15;
alt15_2:
                ptr->pos=oldpos15;
                stop5=1;
                ;
                goto accept15;
alt15_3:
                ptr->pos=oldpos15;
                goto pass15;
accept15:
                ;
            }
            it=_autovar_16;
            _rest=it;;
            bind_aset(bind2,1,_rest);
            it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_e0fb,1,bind2);
            _rest=bind_aget(bind2,1);;
            _autovar_18=it;;
            cstruct oldpass16=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_18;
            ptr->len=1;
            it=Qtrue;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            FAILTEST(pass16);
            _autovar_19=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass16;
            goto success16;
pass16:
            *ptr=oldpass16;
            goto pass15;
success16:
            *ptr=oldpass16;
            it=_autovar_19;
            _rest=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass15;
            goto success15;
pass15:
            *ptr=oldpass15;
            goto alt14_2;
success15:
            *ptr=oldpass15;
            bind_aset(bind2,1,_first);
            bind_aset(bind2,2,_rest);
            it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
            _first=bind_aget(bind2,1);;
            _rest=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept14;
alt14_2:
            ptr->pos=oldpos14;
            it=_autovar_26;
            _autovar_20=it;;
            cstruct oldpass17=*ptr;
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
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=Qtrue;
            arg0=it;
            it=Remove_Left_Recursion_first(self ,arg0);
            FAILTEST(pass17);
            _first=it;;
            it=rb_ary_new3(0);
            _autovar_21=it;;
            int stop6=0;
            while(!stop6) {
                int oldpos16=ptr->pos;
                int cut16=0;
alt16_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt16_2);
                _autovar_22=it;;
                bind_aset(bind2,1,_autovar_21);
                bind_aset(bind2,2,_autovar_22);
                it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__d113,1,bind2);
                _autovar_21=bind_aget(bind2,1);;
                _autovar_22=bind_aget(bind2,2);;
                ;
                goto accept16;
alt16_2:
                ptr->pos=oldpos16;
                stop6=1;
                ;
                goto accept16;
alt16_3:
                ptr->pos=oldpos16;
                goto pass17;
accept16:
                ;
            }
            it=_autovar_21;
            _rest=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass17;
            goto success17;
pass17:
            *ptr=oldpass17;
            goto alt14_3;
success17:
            *ptr=oldpass17;
            bind_aset(bind2,1,_first);
            bind_aset(bind2,2,_rest);
            it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_bind_f95b,1,bind2);
            _first=bind_aget(bind2,1);;
            _rest=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept14;
alt14_3:
            ptr->pos=oldpos14;
            goto alt13_2;
accept14:
            ;

            ;
            goto accept13;
alt13_2:
            ptr->pos=oldpos13;
            it=AmethystCore_anything(self );
            FAILTEST(alt13_3);
            _x=it;;
            it=Qtrue;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
            _follow=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            __result=it;;

            ;
            goto accept13;
alt13_3:
            ptr->pos=oldpos13;
            goto pass10;
accept13:
            ;
            it=__result;
            _autovar_24=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            break;
        case 4/*Object*/:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(pass10);
            _x=it;;
            it=Qtrue;
            _follow=it;;
            bind_aset(bind2,1,_follow);
            bind_aset(bind2,2,_x);
            it=rb_funcall(self,sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213,1,bind2);
            _follow=bind_aget(bind2,1);;
            _x=bind_aget(bind2,2);;
            __result=it;;
            it=__result;
            _autovar_24=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            break;
        }
        goto success10;
pass10:
        *ptr=oldpass10;
        goto pass1;
success10:
        *ptr=oldpass10;
        it=_autovar_24;
        _follow_2=it;;
        bind_aset(bind2,1,_first_2);
        bind_aset(bind2,2,_follow_2);
        it=rb_funcall(self,sy_Remove_Left_Recursion_a_eq_autova_d0a0,1,bind2);
        _first_2=bind_aget(bind2,1);;
        _follow_2=bind_aget(bind2,2);;
        it=rb_funcall(self,sy_Remove_Left_Recursion_src_25d9,1,bind2);
        _autovar_27=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=_autovar_27;
        __result_2=it;;
        break;
    case 1/*Object*/:
        ;
        goto fail;
        break;
    }
    return it;
fail:
    return failobj;
}
void Init_remove_left_rigth_recursion_c() {
    cls_Remove_Left_Recursion=rb_define_class("Remove_Left_Recursion",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
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
    sy_Remove_Left_Recursion__append_lp__d113=rb_intern("Remove_Left_Recursion__append_lp__d113");
    sy_Remove_Left_Recursion__at_left_re_c85d=rb_intern("Remove_Left_Recursion__at_left_re_c85d");
    sy_Remove_Left_Recursion__at_name_eq_sr_362f=rb_intern("Remove_Left_Recursion__at_name_eq_sr_362f");
    sy_Remove_Left_Recursion__at_result_eq__b6ab=rb_intern("Remove_Left_Recursion__at_result_eq__b6ab");
    sy_Remove_Left_Recursion__lp__at_name_eq__eq__2784=rb_intern("Remove_Left_Recursion__lp__at_name_eq__eq__2784");
    sy_Remove_Left_Recursion__lp_must_em_43e9=rb_intern("Remove_Left_Recursion__lp_must_em_43e9");
    sy_Remove_Left_Recursion_a_eq_autova_d0a0=rb_intern("Remove_Left_Recursion_a_eq_autova_d0a0");
    sy_Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5=rb_intern("Remove_Left_Recursion_bind_lb_1_rb__sp__4ee5");
    sy_Remove_Left_Recursion_bind_lb_1_rb__sp__c213=rb_intern("Remove_Left_Recursion_bind_lb_1_rb__sp__c213");
    sy_Remove_Left_Recursion_src_25d9=rb_intern("Remove_Left_Recursion_src_25d9");
    sy_Remove_Left_Recursion_src_dot_body_519e=rb_intern("Remove_Left_Recursion_src_dot_body_519e");
    rb_define_method(cls_Remove_Left_Recursion,"first",Remove_Left_Recursion_first,1);
    rb_define_method(cls_Remove_Left_Recursion,"must_empty",Remove_Left_Recursion_must_empty,0);
    rb_define_method(cls_Remove_Left_Recursion,"root",Remove_Left_Recursion_root,0);
    rb_eval_string("testversionremove_left_rigth_recursion('4faea07208cb5281969926255dfe0e48')");
}
