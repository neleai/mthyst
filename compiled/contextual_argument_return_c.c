#include "cthyst.h"
#include "memo.c"
VALUE cls_Add_Contextual_Arguments;
VALUE Add_Contextual_Arguments_root(VALUE self );
VALUE Add_Contextual_Arguments_traverse(VALUE self );
VALUE Add_Contextual_Arguments_traverse_item(VALUE self );
VALUE Add_Contextual_Arguments_visit(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE switchhash_Add_Contextual_Arguments_1;
VALUE switchhash_Add_Contextual_Arguments_2;
VALUE switchhash_Add_Contextual_Arguments_3;
static VALUE sy_Add_Contextual_Arguments__at_context_8c62;
static VALUE sy_Add_Contextual_Arguments__lp_src_dot_cla_e144;
static VALUE sy_Add_Contextual_Arguments_bind_lb_1_rb__eq__daa8;
static VALUE sy_Add_Contextual_Arguments_bind_lb_1_rb__lt__7b20;
static VALUE sy_Add_Contextual_Arguments_bind_lb_1_rb__sp__6af0;
static VALUE sy_Add_Contextual_Arguments_if_sp_bind_lb__1bed;
static VALUE sy_Add_Contextual_Arguments_src_dot_dup_d768;
VALUE profile_report_Add_Contextual_Arguments(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Add_Contextual_Arguments_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_t,_autovar_4,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Add_Contextual_Arguments_src_dot_dup_d768,1,bind2);
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Arguments_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
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
    it=_autovar_2;
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
    it=Add_Contextual_Arguments_traverse(self );
    FAILTEST(pass2);
    _t=it;;
    bind_aset(bind2,1,_t);
    it=rb_funcall(self,sy_Add_Contextual_Arguments_bind_lb_1_rb__eq__daa8,1,bind2);
    _t=bind_aget(bind2,1);;
    _autovar_4=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass2;
    goto success2;
pass2:
    *ptr=oldpass2;
    goto fail;
success2:
    *ptr=oldpass2;
    it=_autovar_4;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Add_Contextual_Arguments_traverse(VALUE self ) {
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
    it=rb_funcall(self,sy_Add_Contextual_Arguments__lp_src_dot_cla_e144,1,bind2);
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
        it=Add_Contextual_Arguments_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Add_Contextual_Arguments_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Add_Contextual_Arguments_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Add_Contextual_Arguments_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Arguments_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Add_Contextual_Arguments_visit(self );
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
        it=Add_Contextual_Arguments_traverse(self );
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
        it=Add_Contextual_Arguments_visit(self );
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
            it=Add_Contextual_Arguments_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Add_Contextual_Arguments_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Add_Contextual_Arguments_visit(self );
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
VALUE Add_Contextual_Arguments_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_name,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Arguments_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Contextual_Argument*/:
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
        it=rb_funcall(self,sy_Add_Contextual_Arguments__at_context_8c62,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
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
VALUE cls_Add_Contextual_Returns;
VALUE Add_Contextual_Returns_root(VALUE self );
VALUE Add_Contextual_Returns_traverse(VALUE self );
VALUE Add_Contextual_Returns_traverse_item(VALUE self );
VALUE Add_Contextual_Returns_visit(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE switchhash_Add_Contextual_Returns_1;
VALUE switchhash_Add_Contextual_Returns_2;
VALUE switchhash_Add_Contextual_Returns_3;
static VALUE sy_Add_Contextual_Returns_Seq_lb_src;
static VALUE sy_Add_Contextual_Returns__at_a_eq_autov_5323;
static VALUE sy_Add_Contextual_Returns__lb__at_a;
static VALUE sy_Add_Contextual_Returns__lp_src_dot_cla_e144;
static VALUE sy_Add_Contextual_Returns_bind_lb_1_rb__eq__4390;
static VALUE sy_Add_Contextual_Returns_bind_lb_1_rb__lt__7b20;
static VALUE sy_Add_Contextual_Returns_bind_lb_1_rb__sp__6af0;
static VALUE sy_Add_Contextual_Returns_if_sp_bind_lb__1bed;
static VALUE sy_Add_Contextual_Returns_src_dot_dup_d768;
VALUE profile_report_Add_Contextual_Returns(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Add_Contextual_Returns_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_t,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Add_Contextual_Returns_src_dot_dup_d768,1,bind2);
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
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
    it=_autovar_2;
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
    it=rb_funcall(self,sy_Add_Contextual_Returns__at_a_eq_autov_5323,1,bind2);
    it=Add_Contextual_Returns_traverse(self );
    FAILTEST(pass2);
    _t=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass2;
    goto success2;
pass2:
    *ptr=oldpass2;
    goto fail;
success2:
    *ptr=oldpass2;
    bind_aset(bind2,1,_t);
    it=rb_funcall(self,sy_Add_Contextual_Returns_bind_lb_1_rb__eq__4390,1,bind2);
    _t=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Add_Contextual_Returns_traverse(VALUE self ) {
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
    it=rb_funcall(self,sy_Add_Contextual_Returns__lp_src_dot_cla_e144,1,bind2);
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
        it=Add_Contextual_Returns_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Add_Contextual_Returns_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Add_Contextual_Returns_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Add_Contextual_Returns_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Add_Contextual_Returns_visit(self );
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
        it=Add_Contextual_Returns_traverse(self );
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
        it=Add_Contextual_Returns_visit(self );
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
            it=Add_Contextual_Returns_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Add_Contextual_Returns_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Add_Contextual_Returns_visit(self );
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
VALUE Add_Contextual_Returns_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_name;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_2,rb_obj_class(ame_curobj2(ptr))))) {
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
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Add_Contextual_Returns_Seq_lb_src,1,bind2);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;
        break;
    case 1/*Contextual_Return*/:
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        _name=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto fail;
success2:
        *ptr=oldpass2;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Add_Contextual_Returns__lb__at_a,1,bind2);
        _name=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 2/*Object*/:
        ;
        goto fail;
        break;
    }
    return it;
fail:
    return failobj;
}
void Init_contextual_argument_return_c() {
    cls_Add_Contextual_Arguments=rb_define_class("Add_Contextual_Arguments",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Add_Contextual_Arguments,"profile_report",profile_report_Add_Contextual_Arguments,0);
    switchhash_Add_Contextual_Arguments_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Arguments_1);;
    switchhash_Add_Contextual_Arguments_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Contextual_Argument\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Arguments_2);;
    switchhash_Add_Contextual_Arguments_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Arguments_3);;
    sy_Add_Contextual_Arguments__at_context_8c62=rb_intern("Add_Contextual_Arguments__at_context_8c62");
    sy_Add_Contextual_Arguments__lp_src_dot_cla_e144=rb_intern("Add_Contextual_Arguments__lp_src_dot_cla_e144");
    sy_Add_Contextual_Arguments_bind_lb_1_rb__eq__daa8=rb_intern("Add_Contextual_Arguments_bind_lb_1_rb__eq__daa8");
    sy_Add_Contextual_Arguments_bind_lb_1_rb__lt__7b20=rb_intern("Add_Contextual_Arguments_bind_lb_1_rb__lt__7b20");
    sy_Add_Contextual_Arguments_bind_lb_1_rb__sp__6af0=rb_intern("Add_Contextual_Arguments_bind_lb_1_rb__sp__6af0");
    sy_Add_Contextual_Arguments_if_sp_bind_lb__1bed=rb_intern("Add_Contextual_Arguments_if_sp_bind_lb__1bed");
    sy_Add_Contextual_Arguments_src_dot_dup_d768=rb_intern("Add_Contextual_Arguments_src_dot_dup_d768");
    rb_define_method(cls_Add_Contextual_Arguments,"root",Add_Contextual_Arguments_root,0);
    rb_define_method(cls_Add_Contextual_Arguments,"traverse",Add_Contextual_Arguments_traverse,0);
    rb_define_method(cls_Add_Contextual_Arguments,"traverse_item",Add_Contextual_Arguments_traverse_item,0);
    rb_define_method(cls_Add_Contextual_Arguments,"visit",Add_Contextual_Arguments_visit,0);

    cls_Add_Contextual_Returns=rb_define_class("Add_Contextual_Returns",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Add_Contextual_Returns,"profile_report",profile_report_Add_Contextual_Returns,0);
    switchhash_Add_Contextual_Returns_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Returns_1);;
    switchhash_Add_Contextual_Returns_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Contextual_Return\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Returns_2);;
    switchhash_Add_Contextual_Returns_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Returns_3);;
    sy_Add_Contextual_Returns_Seq_lb_src=rb_intern("Add_Contextual_Returns_Seq_lb_src");
    sy_Add_Contextual_Returns__at_a_eq_autov_5323=rb_intern("Add_Contextual_Returns__at_a_eq_autov_5323");
    sy_Add_Contextual_Returns__lb__at_a=rb_intern("Add_Contextual_Returns__lb__at_a");
    sy_Add_Contextual_Returns__lp_src_dot_cla_e144=rb_intern("Add_Contextual_Returns__lp_src_dot_cla_e144");
    sy_Add_Contextual_Returns_bind_lb_1_rb__eq__4390=rb_intern("Add_Contextual_Returns_bind_lb_1_rb__eq__4390");
    sy_Add_Contextual_Returns_bind_lb_1_rb__lt__7b20=rb_intern("Add_Contextual_Returns_bind_lb_1_rb__lt__7b20");
    sy_Add_Contextual_Returns_bind_lb_1_rb__sp__6af0=rb_intern("Add_Contextual_Returns_bind_lb_1_rb__sp__6af0");
    sy_Add_Contextual_Returns_if_sp_bind_lb__1bed=rb_intern("Add_Contextual_Returns_if_sp_bind_lb__1bed");
    sy_Add_Contextual_Returns_src_dot_dup_d768=rb_intern("Add_Contextual_Returns_src_dot_dup_d768");
    rb_define_method(cls_Add_Contextual_Returns,"root",Add_Contextual_Returns_root,0);
    rb_define_method(cls_Add_Contextual_Returns,"traverse",Add_Contextual_Returns_traverse,0);
    rb_define_method(cls_Add_Contextual_Returns,"traverse_item",Add_Contextual_Returns_traverse_item,0);
    rb_define_method(cls_Add_Contextual_Returns,"visit",Add_Contextual_Returns_visit,0);
    rb_eval_string("testversioncontextual_argument_return('90220231fc022f759defdff7e7dcf138')");
}
