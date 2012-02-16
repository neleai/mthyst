#include "cthyst.h"
#include "memo.c"
VALUE cls_Detect_Implicit_Variables;
VALUE AmethystCore_anything(VALUE self );
VALUE Detect_Implicit_Variables_root(VALUE self );
VALUE Detect_Implicit_Variables_traverse(VALUE self );
VALUE Detect_Implicit_Variables_traverse_item(VALUE self );
VALUE Detect_Implicit_Variables_visit(VALUE self );
VALUE switchhash_Detect_Implicit_Variables_1;
VALUE switchhash_Detect_Implicit_Variables_2;
static VALUE sy_Detect_Implicit_Variables__append_lp__d113;
static VALUE sy_Detect_Implicit_Variables__at_vars_a187;
static VALUE sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8;
static VALUE sy_Detect_Implicit_Variables__at_vars_lb_bi_edce;
static VALUE sy_Detect_Implicit_Variables__lp_src_dot_ins_a413;
VALUE profile_report_Detect_Implicit_Variables(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Detect_Implicit_Variables_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8,1,bind2);
    it=Detect_Implicit_Variables_traverse(self );
    FAILTEST(fail);
    it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_a187,1,bind2);
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_Implicit_Variables_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_funcall(self,sy_Detect_Implicit_Variables__lp_src_dot_ins_a413,1,bind2);
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=AmethystCore_anything(self );
    FAILTEST(pass1);
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
        ptr->ary2=ary;
        ptr->ary=RARRAY_PTR(ary);
        ptr->len=RARRAY_LEN(ary);
    }
    it=rb_ary_new3(0);
    _autovar_3=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Detect_Implicit_Variables_traverse_item(self );
        FAILTEST(alt1_2);
        _autovar_4=it;;
        bind_aset(bind2,1,_autovar_3);
        bind_aset(bind2,2,_autovar_4);
        it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp__d113,1,bind2);
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
        goto pass2;
accept1:
        ;
    }
    it=_autovar_3;
    _autovar_5=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass2;
    goto success2;
pass2:
    *ptr=oldpass2;
    goto pass1;
success2:
    *ptr=oldpass2;
    it=_autovar_5;
    _autovar_6=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass1;
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    it=_autovar_6;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_Implicit_Variables_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Implicit_Variables_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Detect_Implicit_Variables_visit(self );
        FAILTEST(alt1_2);
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
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
        it=Detect_Implicit_Variables_traverse(self );
        FAILTEST(pass1);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_3;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_4);
        __result=it;;

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
        it=Detect_Implicit_Variables_visit(self );
        FAILTEST(alt2_2);
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
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
        it=rb_ary_new3(0);
        _autovar_4=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=Detect_Implicit_Variables_traverse_item(self );
            FAILTEST(alt3_2);
            _autovar_5=it;;
            bind_aset(bind2,1,_autovar_4);
            bind_aset(bind2,2,_autovar_5);
            it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp__d113,1,bind2);
            _autovar_4=bind_aget(bind2,1);;
            _autovar_5=bind_aget(bind2,2);;
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
        it=_autovar_4;
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt2_3;
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_4);
        __result=it;;

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
        it=Detect_Implicit_Variables_visit(self );
        FAILTEST(alt4_2);
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
    }
    return it;
fail:
    return failobj;
}
VALUE Detect_Implicit_Variables_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_name,_autovar_2,_autovar_3,_autovar_4,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Implicit_Variables_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
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
        it=AmethystCore_anything(self );
        FAILTEST(pass1);
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_lb_bi_edce,1,bind2);
        _name=bind_aget(bind2,1);;
        it=rb_ary_new3(0);
        _autovar_2=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_2);
            _autovar_3=it;;
            bind_aset(bind2,1,_autovar_2);
            bind_aset(bind2,2,_autovar_3);
            it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp__d113,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            _autovar_3=bind_aget(bind2,2);;
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
        it=_autovar_2;
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=_autovar_4;
        __result=it;;
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
VALUE cls_Add_Implicit_Variables;
VALUE Add_Implicit_Variables_root(VALUE self );
VALUE Add_Implicit_Variables_traverse(VALUE self );
VALUE Add_Implicit_Variables_traverse_item(VALUE self );
VALUE Add_Implicit_Variables_visit(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE switchhash_Add_Implicit_Variables_1;
VALUE switchhash_Add_Implicit_Variables_2;
VALUE switchhash_Add_Implicit_Variables_3;
static VALUE sy_Add_Implicit_Variables__at_bnding_eq__b94a;
static VALUE sy_Add_Implicit_Variables__at_locals_eq__545d;
static VALUE sy_Add_Implicit_Variables__at_vars_eq_bi_1ca4;
static VALUE sy_Add_Implicit_Variables__lp__at_vars_lb_b_160d;
static VALUE sy_Add_Implicit_Variables__lp__at_vars_lb_b_5cb3;
static VALUE sy_Add_Implicit_Variables__lp_src_dot_cla_e144;
static VALUE sy_Add_Implicit_Variables_bind_lb_1_rb__eq__1818;
static VALUE sy_Add_Implicit_Variables_bind_lb_1_rb__lt__7b20;
static VALUE sy_Add_Implicit_Variables_bind_lb_1_rb__sp__6af0;
static VALUE sy_Add_Implicit_Variables_if_sp_bind_lb__1bed;
static VALUE sy_Add_Implicit_Variables_l_eq_Local_lb__2887;
static VALUE sy_Add_Implicit_Variables_l_eq_Local_lb__a11b;
VALUE profile_report_Add_Implicit_Variables(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Add_Implicit_Variables_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_t,_autovar_3,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _autovar=it;;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Add_Implicit_Variables__at_vars_eq_bi_1ca4,1,bind2);
    _autovar=bind_aget(bind2,1);;
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
        break;
    case 1/*Object*/:
        ;
        goto fail;
        break;
    }
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
    it=rb_funcall(self,sy_Add_Implicit_Variables__at_bnding_eq__b94a,1,bind2);
    it=rb_funcall(self,sy_Add_Implicit_Variables__at_locals_eq__545d,1,bind2);
    it=Add_Implicit_Variables_traverse(self );
    FAILTEST(pass1);
    _t=it;;
    bind_aset(bind2,1,_t);
    it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_1_rb__eq__1818,1,bind2);
    _t=bind_aget(bind2,1);;
    _autovar_3=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass1;
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    it=_autovar_3;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Add_Implicit_Variables_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Add_Implicit_Variables__lp_src_dot_cla_e144,1,bind2);
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
    FAILTEST(pass1);
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
        ptr->ary2=ary;
        ptr->ary=RARRAY_PTR(ary);
        ptr->len=RARRAY_LEN(ary);
    }
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Add_Implicit_Variables_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
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
    bind_aset(bind2,1,_ivars);
    bind_aset(bind2,2,_nvars);
    it=rb_funcall(self,sy_Add_Implicit_Variables_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Add_Implicit_Variables_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Add_Implicit_Variables_visit(self );
        FAILTEST(alt1_2);
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
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
        it=Add_Implicit_Variables_traverse(self );
        FAILTEST(pass1);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_3;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_4);
        __result=it;;

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
        it=Add_Implicit_Variables_visit(self );
        FAILTEST(alt2_2);
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
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
        it=rb_ary_new3(0);
        _ar=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=Add_Implicit_Variables_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_1_rb__lt__7b20,1,bind2);
            _ar=bind_aget(bind2,1);;
            _it=bind_aget(bind2,2);;
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
        it=_ar;
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt2_3;
success2:
        *ptr=oldpass2;
        it=_autovar_4;
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_4);
        __result=it;;

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
        it=Add_Implicit_Variables_visit(self );
        FAILTEST(alt4_2);
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
    }
    return it;
fail:
    return failobj;
}
VALUE Add_Implicit_Variables_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_name,_autovar_4,__result,_autovar_5,_autovar_6;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        it=_autovar;
        _autovar_2=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=_autovar_2;
        _autovar_3=it;;
        cstruct oldpass1=*ptr;
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
        it=AmethystCore_anything(self );
        FAILTEST(pass1);
        _name=it;;
        ptr->pos=ptr->len;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Add_Implicit_Variables__lp__at_vars_lb_b_160d,1,bind2);
        _name=bind_aget(bind2,1);;
        FAILTEST(pass1);
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Add_Implicit_Variables_l_eq_Local_lb__a11b,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_4;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=_autovar_2;
        _autovar_5=it;;
        cstruct oldpass2=*ptr;
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
        FAILTEST(pass2);
        _name=it;;
        ptr->pos=ptr->len;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Add_Implicit_Variables__lp__at_vars_lb_b_5cb3,1,bind2);
        _name=bind_aget(bind2,1);;
        FAILTEST(pass2);
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Add_Implicit_Variables_l_eq_Local_lb__2887,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt1_3;
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
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
void Init_implicit_variables_c() {
    cls_Detect_Implicit_Variables=rb_define_class("Detect_Implicit_Variables",rb_const_get(rb_cObject,rb_intern("Visitor")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Detect_Implicit_Variables,"profile_report",profile_report_Detect_Implicit_Variables,0);
    switchhash_Detect_Implicit_Variables_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Implicit_Variables_1);;
    switchhash_Detect_Implicit_Variables_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Implicit_Variables_2);;
    sy_Detect_Implicit_Variables__append_lp__d113=rb_intern("Detect_Implicit_Variables__append_lp__d113");
    sy_Detect_Implicit_Variables__at_vars_a187=rb_intern("Detect_Implicit_Variables__at_vars_a187");
    sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8=rb_intern("Detect_Implicit_Variables__at_vars_eq_Ha_dec8");
    sy_Detect_Implicit_Variables__at_vars_lb_bi_edce=rb_intern("Detect_Implicit_Variables__at_vars_lb_bi_edce");
    sy_Detect_Implicit_Variables__lp_src_dot_ins_a413=rb_intern("Detect_Implicit_Variables__lp_src_dot_ins_a413");
    rb_define_method(cls_Detect_Implicit_Variables,"root",Detect_Implicit_Variables_root,0);
    rb_define_method(cls_Detect_Implicit_Variables,"traverse",Detect_Implicit_Variables_traverse,0);
    rb_define_method(cls_Detect_Implicit_Variables,"traverse_item",Detect_Implicit_Variables_traverse_item,0);
    rb_define_method(cls_Detect_Implicit_Variables,"visit",Detect_Implicit_Variables_visit,0);

    cls_Add_Implicit_Variables=rb_define_class("Add_Implicit_Variables",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Add_Implicit_Variables,"profile_report",profile_report_Add_Implicit_Variables,0);
    switchhash_Add_Implicit_Variables_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Implicit_Variables_1);;
    switchhash_Add_Implicit_Variables_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Implicit_Variables_2);;
    switchhash_Add_Implicit_Variables_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Implicit_Variables_3);;
    sy_Add_Implicit_Variables__at_bnding_eq__b94a=rb_intern("Add_Implicit_Variables__at_bnding_eq__b94a");
    sy_Add_Implicit_Variables__at_locals_eq__545d=rb_intern("Add_Implicit_Variables__at_locals_eq__545d");
    sy_Add_Implicit_Variables__at_vars_eq_bi_1ca4=rb_intern("Add_Implicit_Variables__at_vars_eq_bi_1ca4");
    sy_Add_Implicit_Variables__lp__at_vars_lb_b_160d=rb_intern("Add_Implicit_Variables__lp__at_vars_lb_b_160d");
    sy_Add_Implicit_Variables__lp__at_vars_lb_b_5cb3=rb_intern("Add_Implicit_Variables__lp__at_vars_lb_b_5cb3");
    sy_Add_Implicit_Variables__lp_src_dot_cla_e144=rb_intern("Add_Implicit_Variables__lp_src_dot_cla_e144");
    sy_Add_Implicit_Variables_bind_lb_1_rb__eq__1818=rb_intern("Add_Implicit_Variables_bind_lb_1_rb__eq__1818");
    sy_Add_Implicit_Variables_bind_lb_1_rb__lt__7b20=rb_intern("Add_Implicit_Variables_bind_lb_1_rb__lt__7b20");
    sy_Add_Implicit_Variables_bind_lb_1_rb__sp__6af0=rb_intern("Add_Implicit_Variables_bind_lb_1_rb__sp__6af0");
    sy_Add_Implicit_Variables_if_sp_bind_lb__1bed=rb_intern("Add_Implicit_Variables_if_sp_bind_lb__1bed");
    sy_Add_Implicit_Variables_l_eq_Local_lb__2887=rb_intern("Add_Implicit_Variables_l_eq_Local_lb__2887");
    sy_Add_Implicit_Variables_l_eq_Local_lb__a11b=rb_intern("Add_Implicit_Variables_l_eq_Local_lb__a11b");
    rb_define_method(cls_Add_Implicit_Variables,"root",Add_Implicit_Variables_root,0);
    rb_define_method(cls_Add_Implicit_Variables,"traverse",Add_Implicit_Variables_traverse,0);
    rb_define_method(cls_Add_Implicit_Variables,"traverse_item",Add_Implicit_Variables_traverse_item,0);
    rb_define_method(cls_Add_Implicit_Variables,"visit",Add_Implicit_Variables_visit,0);
    rb_eval_string("testversionimplicit_variables('d31e2c85822e26e80436d2ce3c05c748')");
}
