#include "cthyst.h"
VALUE cls_DetectCalls;
VALUE AmethystCore_anything(VALUE self );
VALUE DetectCalls_root(VALUE self );
VALUE DetectCalls_traverse(VALUE self );
VALUE DetectCalls_traverse_item(VALUE self );
VALUE DetectCalls_visit(VALUE self );
VALUE switchhash_DetectCalls_1;
VALUE switchhash_DetectCalls_2;
VALUE switchhash_DetectCalls_3;
static VALUE sy_DetectCalls__append_lp__d113;
static VALUE sy_DetectCalls__at_calls_7f81;
static VALUE sy_DetectCalls__at_calls_eq__le__39e9;
static VALUE sy_DetectCalls__at_calls_lb_b_e709;
static VALUE sy_DetectCalls__lp_src_dot_ins_a413;
VALUE DetectCalls_root(VALUE self ) {
    VALUE vals[0];
    VALUE var0;
    VALUE var1;
    VALUE var2; ;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    VALUE it;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);

    switch(FIX2LONG(rb_hash_aref(switchhash_DetectCalls_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        var0/*autovar*/=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=var0/*autovar*/;
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
        it=rb_funcall(self,sy_DetectCalls__at_calls_eq__le__39e9,1,bind2);
        it=DetectCalls_traverse(self );
        FAILTEST(pass1);
        it=rb_funcall(self,sy_DetectCalls__at_calls_7f81,1,bind2);
        var1/*autovar*/=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=var1/*autovar*/;
        var2/*_result*/=it;;
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
VALUE DetectCalls_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE var0;
    VALUE var1;
    VALUE var2;
    VALUE var3;
    VALUE var4;
    VALUE var5;
    VALUE var6; ;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    VALUE it;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);

    ptr->pos=ptr->len;
    it=rb_funcall(self,sy_DetectCalls__lp_src_dot_ins_a413,1,bind2);
    var0/*autovar*/=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=var0/*autovar*/;
    ptr->len=1;
    it=AmethystCore_anything(self );
    FAILTEST(pass1);
    var1/*autovar*/=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=var1/*autovar*/;
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
    var2/*autovar*/=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=DetectCalls_traverse_item(self );
        FAILTEST(alt1_2);
        var3/*autovar*/=it;;
        bind_aset(bind2,1,var2/*autovar*/);
        bind_aset(bind2,2,var3/*autovar*/);
        it=rb_funcall(self,sy_DetectCalls__append_lp__d113,1,bind2);
        var2/*autovar*/=bind_aget(bind2,1);;
        var3/*autovar*/=bind_aget(bind2,2);;
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
    it=var2/*autovar*/;
    var4/*autovar*/=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass2;
    goto success2;
pass2:
    *ptr=oldpass2;
    goto pass1;
success2:
    *ptr=oldpass2;
    it=var4/*autovar*/;
    var5/*autovar*/=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass1;
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    it=var5/*autovar*/;
    var6/*_result*/=it;;

    return it;
fail:
    return failobj;
}
VALUE DetectCalls_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE var0;
    VALUE var1;
    VALUE var2;
    VALUE var3;
    VALUE var4;
    VALUE var5;
    VALUE var6; ;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    VALUE it;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);

    switch(FIX2LONG(rb_hash_aref(switchhash_DetectCalls_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=DetectCalls_visit(self );
        FAILTEST(alt1_2);
        var0/*_result*/=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        var1/*autovar*/=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=var1/*autovar*/;
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
        it=DetectCalls_traverse(self );
        FAILTEST(pass1);
        var2/*autovar*/=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_3;
success1:
        *ptr=oldpass1;
        it=var2/*autovar*/;
        var0/*_result*/=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_4);
        var0/*_result*/=it;;

        ;
        goto accept1;
alt1_4:
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
        it=DetectCalls_visit(self );
        FAILTEST(alt2_2);
        var0/*_result*/=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        var3/*autovar*/=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=var3/*autovar*/;
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
        var4/*autovar*/=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=DetectCalls_traverse_item(self );
            FAILTEST(alt3_2);
            var5/*autovar*/=it;;
            bind_aset(bind2,1,var4/*autovar*/);
            bind_aset(bind2,2,var5/*autovar*/);
            it=rb_funcall(self,sy_DetectCalls__append_lp__d113,1,bind2);
            var4/*autovar*/=bind_aget(bind2,1);;
            var5/*autovar*/=bind_aget(bind2,2);;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            stop1=1;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto pass2;
accept3:
            ;
        }
        it=var4/*autovar*/;
        var6/*autovar*/=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt2_3;
success2:
        *ptr=oldpass2;
        it=var6/*autovar*/;
        var0/*_result*/=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_4);
        var0/*_result*/=it;;

        ;
        goto accept2;
alt2_4:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 2/*Object*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=DetectCalls_visit(self );
        FAILTEST(alt4_2);
        var0/*_result*/=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        FAILTEST(alt4_3);
        var0/*_result*/=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto fail;
accept4:
        ;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE DetectCalls_visit(VALUE self ) {
    VALUE vals[0];
    VALUE var0;
    VALUE var1;
    VALUE var2;
    VALUE var3; ;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    VALUE it;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);

    switch(FIX2LONG(rb_hash_aref(switchhash_DetectCalls_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        var0/*autovar*/=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=var0/*autovar*/;
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
        FAILTEST(pass1);
        var1/*name*/=it;;
        ptr->pos=ptr->len;
        bind_aset(bind2,1,var1/*name*/);
        it=rb_funcall(self,sy_DetectCalls__at_calls_lb_b_e709,1,bind2);
        var1/*name*/=bind_aget(bind2,1);;
        var2/*autovar*/=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=var2/*autovar*/;
        var3/*_result*/=it;;
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
VALUE cls_Inliner2;
VALUE AmethystCore_anything(VALUE self );
VALUE Inliner2_root(VALUE self );
VALUE Inliner2_traverse(VALUE self );
VALUE Inliner2_traverse_item(VALUE self );
VALUE Inliner2_visit(VALUE self );
VALUE switchhash_Inliner2_1;
VALUE switchhash_Inliner2_2;
VALUE switchhash_Inliner2_3;
VALUE switchhash_Inliner2_4;
static VALUE sy_Inliner2_Seq_lb_src_dot__3406;
static VALUE sy_Inliner2__append_lp__d113;
static VALUE sy_Inliner2__at_changed_5352;
static VALUE sy_Inliner2__at_changed_b885;
static VALUE sy_Inliner2__at_changed_c681;
static VALUE sy_Inliner2__at_name_eq_bi_5da3;
static VALUE sy_Inliner2__lp_bind_lb_1_rb__709e;
static VALUE sy_Inliner2__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Inliner2__lp_src_dot_ins_6a75;
static VALUE sy_Inliner2_bind_lb_1_rb__lt__7b20;
static VALUE sy_Inliner2_body_eq__at_bo_4270;
static VALUE sy_Inliner2_if_sp_bind_lb__8e0b;
static VALUE sy_Inliner2_src_25d9;
static VALUE sy_Inliner2_src_dot_args_2df5;
static VALUE sy_Inliner2_src_dot_loca_1df0;
static VALUE sy_Inliner2_src_dot_name_80f3;
VALUE Inliner2_root(VALUE self ) {
    VALUE vals[0];
    VALUE var0;
    VALUE var1;
    VALUE var2;
    VALUE var3;
    VALUE var4;
    VALUE var5;
    VALUE var6;
    VALUE var7;
    VALUE var8;
    VALUE var9;
    VALUE var10;
    VALUE var11;
    VALUE var12; ;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    VALUE it;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);

    it=AmethystCore_anything(self );
    FAILTEST(fail);
    var0/*from*/=it;;
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    var1/*to*/=it;;
    it=var0/*from*/;
    var2/*autovar*/=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=var2/*autovar*/;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Inliner2_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        var3/*autovar*/=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 1/*Object*/:
        ;
        goto pass1;
        break;
    }
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    it=var3/*autovar*/;
    var4/*autovar*/=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=var4/*autovar*/;
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
    it=rb_funcall(self,sy_Inliner2_src_dot_name_80f3,1,bind2);
    var5/*name*/=it;;
    it=rb_funcall(self,sy_Inliner2_src_dot_args_2df5,1,bind2);
    var6/*args*/=it;;
    it=rb_funcall(self,sy_Inliner2_src_dot_loca_1df0,1,bind2);
    it=rb_funcall(self,sy_Inliner2_Seq_lb_src_dot__3406,1,bind2);
    var7/*body*/=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass2;
    goto success2;
pass2:
    *ptr=oldpass2;
    goto fail;
success2:
    *ptr=oldpass2;
    bind_aset(bind2,1,var5/*name*/);
    bind_aset(bind2,2,var6/*args*/);
    bind_aset(bind2,3,var7/*body*/);
    it=rb_funcall(self,sy_Inliner2__at_name_eq_bi_5da3,1,bind2);
    var5/*name*/=bind_aget(bind2,1);;
    var6/*args*/=bind_aget(bind2,2);;
    var7/*body*/=bind_aget(bind2,3);;
    it=var1/*to*/;
    var8/*autovar*/=it;;
    cstruct oldpass3=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=var8/*autovar*/;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Inliner2_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        var9/*autovar*/=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        break;
    case 1/*Object*/:
        ;
        goto pass3;
        break;
    }
    goto success3;
pass3:
    *ptr=oldpass3;
    goto fail;
success3:
    *ptr=oldpass3;
    it=var9/*autovar*/;
    var10/*autovar*/=it;;
    cstruct oldpass4=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=var10/*autovar*/;
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
    it=Inliner2_traverse(self );
    FAILTEST(pass4);
    var11/*autovar*/=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass4;
    goto success4;
pass4:
    *ptr=oldpass4;
    goto fail;
success4:
    *ptr=oldpass4;
    it=var11/*autovar*/;
    var12/*_result*/=it;;

    return it;
fail:
    return failobj;
}
VALUE Inliner2_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE var0;
    VALUE var1;
    VALUE var2;
    VALUE var3;
    VALUE var4;
    VALUE var5;
    VALUE var6;
    VALUE var7;
    VALUE var8;
    VALUE var9; ;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    VALUE it;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);

    ptr->pos=ptr->len;
    it=rb_funcall(self,sy_Inliner2__at_changed_c681,1,bind2);
    var0/*oldchanged*/=it;;
    it=rb_funcall(self,sy_Inliner2_src_25d9,1,bind2);
    var1/*this*/=it;;
    it=Qnil;
    var2/*clon*/=it;;
    it=Qfalse;
    var3/*changed*/=it;;
    it=rb_funcall(self,sy_Inliner2__lp_src_dot_ins_6a75,1,bind2);
    var4/*autovar*/=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=var4/*autovar*/;
    ptr->len=1;
    it=AmethystCore_anything(self );
    FAILTEST(pass1);
    var5/*autovar*/=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=var5/*autovar*/;
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
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_2);
        var6/*autovar*/=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=var6/*autovar*/;
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
        FAILTEST(pass3);
        var7/*key*/=it;;
        it=rb_funcall(self,sy_Inliner2__at_changed_b885,1,bind2);
        it=Inliner2_traverse_item(self );
        FAILTEST(pass3);
        var8/*val*/=it;;
        bind_aset(bind2,1,var2/*clon*/);
        bind_aset(bind2,2,var1/*this*/);
        bind_aset(bind2,3,var3/*changed*/);
        bind_aset(bind2,4,var7/*key*/);
        bind_aset(bind2,5,var8/*val*/);
        it=rb_funcall(self,sy_Inliner2__lp_bind_lb_1_rb__ee3d,1,bind2);
        var2/*clon*/=bind_aget(bind2,1);;
        var1/*this*/=bind_aget(bind2,2);;
        var3/*changed*/=bind_aget(bind2,3);;
        var7/*key*/=bind_aget(bind2,4);;
        var8/*val*/=bind_aget(bind2,5);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto alt1_2;
success3:
        *ptr=oldpass3;

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
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass2;
    goto success2;
pass2:
    *ptr=oldpass2;
    goto pass1;
success2:
    *ptr=oldpass2;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass1;
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    bind_aset(bind2,1,var3/*changed*/);
    bind_aset(bind2,2,var2/*clon*/);
    bind_aset(bind2,3,var0/*oldchanged*/);
    it=rb_funcall(self,sy_Inliner2_if_sp_bind_lb__8e0b,1,bind2);
    var3/*changed*/=bind_aget(bind2,1);;
    var2/*clon*/=bind_aget(bind2,2);;
    var0/*oldchanged*/=bind_aget(bind2,3);;
    var9/*_result*/=it;;

    return it;
fail:
    return failobj;
}
VALUE Inliner2_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE var0;
    VALUE var1;
    VALUE var2;
    VALUE var3;
    VALUE var4;
    VALUE var5;
    VALUE var6;
    VALUE var7; ;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    VALUE it;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);

    switch(FIX2LONG(rb_hash_aref(switchhash_Inliner2_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Inliner2_visit(self );
        FAILTEST(alt1_2);
        var0/*a*/=it;;
        it=rb_funcall(self,sy_Inliner2__at_changed_5352,1,bind2);
        it=var0/*a*/;
        var1/*_result*/=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        var2/*autovar*/=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=var2/*autovar*/;
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
        it=Inliner2_traverse(self );
        FAILTEST(pass1);
        var3/*autovar*/=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_3;
success1:
        *ptr=oldpass1;
        it=var3/*autovar*/;
        var1/*_result*/=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_4);
        var1/*_result*/=it;;

        ;
        goto accept1;
alt1_4:
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
        it=Inliner2_visit(self );
        FAILTEST(alt2_2);
        var0/*a*/=it;;
        it=rb_funcall(self,sy_Inliner2__at_changed_5352,1,bind2);
        it=var0/*a*/;
        var1/*_result*/=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        var4/*autovar*/=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=var4/*autovar*/;
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
        var5/*ar*/=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=Inliner2_traverse_item(self );
            FAILTEST(alt3_2);
            var6/*it*/=it;;
            bind_aset(bind2,1,var5/*ar*/);
            bind_aset(bind2,2,var6/*it*/);
            it=rb_funcall(self,sy_Inliner2_bind_lb_1_rb__lt__7b20,1,bind2);
            var5/*ar*/=bind_aget(bind2,1);;
            var6/*it*/=bind_aget(bind2,2);;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            stop1=1;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto pass2;
accept3:
            ;
        }
        it=var5/*ar*/;
        var7/*autovar*/=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt2_3;
success2:
        *ptr=oldpass2;
        it=var7/*autovar*/;
        var1/*_result*/=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_4);
        var1/*_result*/=it;;

        ;
        goto accept2;
alt2_4:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 2/*Object*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=Inliner2_visit(self );
        FAILTEST(alt4_2);
        var0/*a*/=it;;
        it=rb_funcall(self,sy_Inliner2__at_changed_5352,1,bind2);
        it=var0/*a*/;
        var1/*_result*/=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        FAILTEST(alt4_3);
        var1/*_result*/=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto fail;
accept4:
        ;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Inliner2_visit(VALUE self ) {
    VALUE vals[0];
    VALUE var0;
    VALUE var1;
    VALUE var2;
    VALUE var3;
    VALUE var4;
    VALUE var5; ;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    VALUE it;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);

    switch(FIX2LONG(rb_hash_aref(switchhash_Inliner2_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        var0/*autovar*/=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=var0/*autovar*/;
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
        FAILTEST(pass1);
        var1/*name*/=it;;
        bind_aset(bind2,1,var1/*name*/);
        it=rb_funcall(self,sy_Inliner2__lp_bind_lb_1_rb__709e,1,bind2);
        var1/*name*/=bind_aget(bind2,1);;
        FAILTEST(pass1);
        it=rb_ary_new3(0);
        var2/*autovar*/=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_2);
            var3/*autovar*/=it;;
            bind_aset(bind2,1,var2/*autovar*/);
            bind_aset(bind2,2,var3/*autovar*/);
            it=rb_funcall(self,sy_Inliner2__append_lp__d113,1,bind2);
            var2/*autovar*/=bind_aget(bind2,1);;
            var3/*autovar*/=bind_aget(bind2,2);;
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
        it=var2/*autovar*/;
        var4/*args*/=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,var4/*args*/);
        it=rb_funcall(self,sy_Inliner2_body_eq__at_bo_4270,1,bind2);
        var4/*args*/=bind_aget(bind2,1);;
        var5/*_result*/=it;;
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
void Init_inliner2_c() {
    cls_DetectCalls=rb_define_class("DetectCalls",rb_const_get(rb_cObject,rb_intern("Visitor")));
    failobj=rb_eval_string("FAIL");
    switchhash_DetectCalls_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_DetectCalls_1);;
    switchhash_DetectCalls_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_DetectCalls_2);;
    switchhash_DetectCalls_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_DetectCalls_3);;
    sy_DetectCalls__append_lp__d113=rb_intern("DetectCalls__append_lp__d113");
    sy_DetectCalls__at_calls_7f81=rb_intern("DetectCalls__at_calls_7f81");
    sy_DetectCalls__at_calls_eq__le__39e9=rb_intern("DetectCalls__at_calls_eq__le__39e9");
    sy_DetectCalls__at_calls_lb_b_e709=rb_intern("DetectCalls__at_calls_lb_b_e709");
    sy_DetectCalls__lp_src_dot_ins_a413=rb_intern("DetectCalls__lp_src_dot_ins_a413");
    rb_define_method(cls_DetectCalls,"root",DetectCalls_root,0);
    rb_define_method(cls_DetectCalls,"traverse",DetectCalls_traverse,0);
    rb_define_method(cls_DetectCalls,"traverse_item",DetectCalls_traverse_item,0);
    rb_define_method(cls_DetectCalls,"visit",DetectCalls_visit,0);

    cls_Inliner2=rb_define_class("Inliner2",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    switchhash_Inliner2_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Inliner2_1);;
    switchhash_Inliner2_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Inliner2_2);;
    switchhash_Inliner2_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Inliner2_3);;
    switchhash_Inliner2_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Inliner2_4);;
    sy_Inliner2_Seq_lb_src_dot__3406=rb_intern("Inliner2_Seq_lb_src_dot__3406");
    sy_Inliner2__append_lp__d113=rb_intern("Inliner2__append_lp__d113");
    sy_Inliner2__at_changed_5352=rb_intern("Inliner2__at_changed_5352");
    sy_Inliner2__at_changed_b885=rb_intern("Inliner2__at_changed_b885");
    sy_Inliner2__at_changed_c681=rb_intern("Inliner2__at_changed_c681");
    sy_Inliner2__at_name_eq_bi_5da3=rb_intern("Inliner2__at_name_eq_bi_5da3");
    sy_Inliner2__lp_bind_lb_1_rb__709e=rb_intern("Inliner2__lp_bind_lb_1_rb__709e");
    sy_Inliner2__lp_bind_lb_1_rb__ee3d=rb_intern("Inliner2__lp_bind_lb_1_rb__ee3d");
    sy_Inliner2__lp_src_dot_ins_6a75=rb_intern("Inliner2__lp_src_dot_ins_6a75");
    sy_Inliner2_bind_lb_1_rb__lt__7b20=rb_intern("Inliner2_bind_lb_1_rb__lt__7b20");
    sy_Inliner2_body_eq__at_bo_4270=rb_intern("Inliner2_body_eq__at_bo_4270");
    sy_Inliner2_if_sp_bind_lb__8e0b=rb_intern("Inliner2_if_sp_bind_lb__8e0b");
    sy_Inliner2_src_25d9=rb_intern("Inliner2_src_25d9");
    sy_Inliner2_src_dot_args_2df5=rb_intern("Inliner2_src_dot_args_2df5");
    sy_Inliner2_src_dot_loca_1df0=rb_intern("Inliner2_src_dot_loca_1df0");
    sy_Inliner2_src_dot_name_80f3=rb_intern("Inliner2_src_dot_name_80f3");
    rb_define_method(cls_Inliner2,"root",Inliner2_root,0);
    rb_define_method(cls_Inliner2,"traverse",Inliner2_traverse,0);
    rb_define_method(cls_Inliner2,"traverse_item",Inliner2_traverse_item,0);
    rb_define_method(cls_Inliner2,"visit",Inliner2_visit,0);
    rb_eval_string("testversioninliner2('821728e6fa47c44ab4b0eddda9cc715e')");
}
