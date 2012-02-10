#include "cthyst.h"
VALUE cls_Left_Factor;
VALUE AmethystCore_anything(VALUE self );
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_binds(VALUE self ,VALUE,VALUE);
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
VALUE Left_Factor_factor(VALUE self ,VALUE,VALUE,VALUE);
VALUE Left_Factor_first(VALUE self ,VALUE a0);
VALUE Left_Factor_first(VALUE self ,VALUE);
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_root(VALUE self );
VALUE Left_Factor_traverse(VALUE self );
VALUE Left_Factor_traverse_item(VALUE self );
VALUE Left_Factor_visit(VALUE self );
VALUE switchhash_Left_Factor_1;
VALUE switchhash_Left_Factor_2;
VALUE switchhash_Left_Factor_3;
VALUE switchhash_Left_Factor_4;
VALUE switchhash_Left_Factor_5;
static VALUE sy_Left_Factor_Bind_lb_src_66c4;
static VALUE sy_Left_Factor_Or_lb__ti__lp_bin_849e;
static VALUE sy_Left_Factor_Seq_lb__lb_bin_4ce0;
static VALUE sy_Left_Factor__append_lp__d113;
static VALUE sy_Left_Factor__lb_bind_lb_1_rb__1906;
static VALUE sy_Left_Factor__lp_bind_lb_1_rb__34a7;
static VALUE sy_Left_Factor__lp_bind_lb_1_rb__b868;
static VALUE sy_Left_Factor__lp_src_dot_cla_e144;
static VALUE sy_Left_Factor_bind_lb_1_rb__lt__7b20;
static VALUE sy_Left_Factor_bind_lb_1_rb__pl__4651;
static VALUE sy_Left_Factor_bind_lb_1_rb__pl__4c53;
static VALUE sy_Left_Factor_bind_lb_1_rb__sp__6af0;
static VALUE sy_Left_Factor_first_lp_bi_150a;
static VALUE sy_Left_Factor_if_sp_bind_lb__1bed;
static VALUE sy_Left_Factor_src_dot_expr_ef77;

#include "../lib/c/memo.c"
memo_struct *mem;
VALUE memo_val;
VALUE profile_report_Left_Factor(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if(ptr->mem) {
        printf("traverse hit: %i miss: %i\n",((memo_struct *)ptr->mem)->hits[113],((memo_struct *)ptr->mem)->miss[113]);
    }
    return Qnil;
}
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_s,_autovar,_autovar_2,_a,_nexp,_autovar_3,_autovar_4,_autovar_5,_f,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    _a=a1;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_s;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Bind*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Left_Factor_src_dot_expr_ef77,1,bind2);
        arg0=it;
        it=_a;
        arg1=it;
        it=Left_Factor_binds(self ,arg0,arg1);
        FAILTEST(pass2);
        _nexp=it;;
        bind_aset(bind2,1,_nexp);
        it=rb_funcall(self,sy_Left_Factor_Bind_lb_src_66c4,1,bind2);
        _nexp=bind_aget(bind2,1);;
        _autovar_3=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt1_2;
success2:
        *ptr=oldpass2;
        it=_autovar_3;
        _autovar_4=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        it=_a;
        _autovar_4=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto pass1;
accept1:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 1/*Seq*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_5=it;;
        cstruct oldpass3=*ptr;
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
        FAILTEST(pass3);
        _f=it;;
        ptr->pos=ptr->len;
        it=_f;
        arg0=it;
        it=_a;
        arg1=it;
        it=Left_Factor_binds(self ,arg0,arg1);
        FAILTEST(pass3);
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto alt2_2;
success3:
        *ptr=oldpass3;
        it=_autovar_6;
        _autovar_4=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        it=_a;
        _autovar_4=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto pass1;
accept2:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 2/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(pass1);
        it=_a;
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    }
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    it=_autovar_4;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2) {
    VALUE vals[3];
    VALUE it ,_next,_start,_prev,_cur,__result;
    VALUE bind2=bind_new2(16);
    _prev=a0;;
    _start=a1;;
    _cur=a2;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=AmethystCore_anything(self );
    FAILTEST(alt1_2);
    _next=it;;
    int oldpos2=ptr->pos;
    int cut2=0;
alt2_1:
    ;
    bind_aset(bind2,1,_start);
    bind_aset(bind2,2,_next);
    it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__34a7,1,bind2);
    _start=bind_aget(bind2,1);;
    _next=bind_aget(bind2,2);;
    FAILTEST(alt2_2);
    it=_prev;
    arg0=it;
    it=_start;
    arg1=it;
    bind_aset(bind2,1,_cur);
    bind_aset(bind2,2,_next);
    it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4651,1,bind2);
    _cur=bind_aget(bind2,1);;
    _next=bind_aget(bind2,2);;
    arg2=it;
    it=Left_Factor_factor(self ,arg0,arg1,arg2);
    FAILTEST(alt2_2);
    __result=it;;

    ;
    goto accept2;
alt2_2:
    ptr->pos=oldpos2;
    bind_aset(bind2,1,_start);
    bind_aset(bind2,2,_next);
    it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__b868,1,bind2);
    _start=bind_aget(bind2,1);;
    _next=bind_aget(bind2,2);;
    FAILTEST(alt2_3);
    bind_aset(bind2,1,_prev);
    bind_aset(bind2,2,_cur);
    it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4c53,1,bind2);
    _prev=bind_aget(bind2,1);;
    _cur=bind_aget(bind2,2);;
    arg0=it;
    bind_aset(bind2,1,_next);
    it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);
    _next=bind_aget(bind2,1);;
    arg1=it;
    bind_aset(bind2,1,_next);
    it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);
    _next=bind_aget(bind2,1);;
    arg2=it;
    it=Left_Factor_factor(self ,arg0,arg1,arg2);
    FAILTEST(alt2_3);
    __result=it;;

    ;
    goto accept2;
alt2_3:
    ptr->pos=oldpos2;
    goto alt1_2;
accept2:
    ;

    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    it=Qnil;
    if (ptr->pos<ptr->len) goto alt1_3;
    bind_aset(bind2,1,_prev);
    bind_aset(bind2,2,_cur);
    it=rb_funcall(self,sy_Left_Factor_Or_lb__ti__lp_bin_849e,1,bind2);
    _prev=bind_aget(bind2,1);;
    _cur=bind_aget(bind2,2);;
    __result=it;;

    ;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    goto fail;
accept1:
    ;

    return it;
fail:
    return failobj;
}
VALUE Left_Factor_first(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_s,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_f,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_s;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Bind*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Left_Factor_src_dot_expr_ef77,1,bind2);
        arg0=it;
        it=Left_Factor_first(self ,arg0);
        FAILTEST(pass2);
        _autovar_3=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt1_2;
success2:
        *ptr=oldpass2;
        it=_autovar_3;
        _autovar_4=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        _autovar_4=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto pass1;
accept1:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 1/*Seq*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_5=it;;
        cstruct oldpass3=*ptr;
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
        FAILTEST(pass3);
        _f=it;;
        ptr->pos=ptr->len;
        it=_f;
        arg0=it;
        it=Left_Factor_first(self ,arg0);
        FAILTEST(pass3);
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto alt2_2;
success3:
        *ptr=oldpass3;
        it=_autovar_6;
        _autovar_4=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        _autovar_4=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto pass1;
accept2:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 2/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(pass1);
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    }
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    it=_autovar_4;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_s,_autovar,_autovar_2,_autovar_3,_autovar_4,_it,_bin,_autovar_5,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    _bin=a1;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_s;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Seq*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_2);
            _autovar_4=it;;
            bind_aset(bind2,1,_autovar_3);
            bind_aset(bind2,2,_autovar_4);
            it=rb_funcall(self,sy_Left_Factor__append_lp__d113,1,bind2);
            _autovar_3=bind_aget(bind2,1);;
            _autovar_4=bind_aget(bind2,2);;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto pass2;
accept2:
            ;
        }
        it=_autovar_3;
        _it=it;;
        bind_aset(bind2,1,_bin);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Left_Factor_Seq_lb__lb_bin_4ce0,1,bind2);
        _bin=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        _autovar_5=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt1_2;
success2:
        *ptr=oldpass2;
        it=_autovar_5;
        _autovar_6=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        it=_bin;
        _autovar_6=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto pass1;
accept1:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 1/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(pass1);
        it=_bin;
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    }
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
VALUE Left_Factor_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Left_Factor_traverse(self );
    FAILTEST(fail);
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Left_Factor_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if (ptr->mem==NULL) {
        ptr->mem=memo_init();
        ptr->memgc=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,ptr->mem);
    }
    int oldpos=ptr->pos;
    if (memo_pos(ptr->mem,113,ptr->src,ptr->pos)!=-1) {
        it=memo_value(ptr->mem,113,ptr->src,ptr->pos);
        ptr->pos=memo_pos(ptr->mem,113,ptr->src,ptr->pos);
        return it;
    }
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Left_Factor__lp_src_dot_cla_e144,1,bind2);
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
        it=Left_Factor_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Left_Factor_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    memo_add(ptr->mem,113,ptr->src,oldpos,it,ptr->pos);
    return it;
fail:
    memo_add(ptr->mem,113,ptr->src,oldpos,failobj,ptr->pos);
    return failobj;
}
VALUE Left_Factor_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_5,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Left_Factor_visit(self );
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
        it=Left_Factor_traverse(self );
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
        it=Left_Factor_visit(self );
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
            it=Left_Factor_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Left_Factor_visit(self );
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
VALUE Left_Factor_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_x,_cur,_start,_prev,_next,__result,_autovar_3,_autovar_4,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Or*/:
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
        it=Left_Factor_traverse(self );
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
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        _x=it;;
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);
        _x=bind_aget(bind2,1);;
        _cur=it;;
        bind_aset(bind2,1,_x);
        it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);
        _x=bind_aget(bind2,1);;
        _start=it;;
        it=rb_ary_new3(0);
        _prev=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_2);
        _next=it;;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        bind_aset(bind2,1,_start);
        bind_aset(bind2,2,_next);
        it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__34a7,1,bind2);
        _start=bind_aget(bind2,1);;
        _next=bind_aget(bind2,2);;
        FAILTEST(alt2_2);
        it=rb_ary_new3(0);
        arg0=it;
        it=_start;
        arg1=it;
        bind_aset(bind2,1,_cur);
        bind_aset(bind2,2,_next);
        it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4651,1,bind2);
        _cur=bind_aget(bind2,1);;
        _next=bind_aget(bind2,2);;
        arg2=it;
        it=Left_Factor_factor(self ,arg0,arg1,arg2);
        FAILTEST(alt2_2);
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        bind_aset(bind2,1,_start);
        bind_aset(bind2,2,_next);
        it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__b868,1,bind2);
        _start=bind_aget(bind2,1);;
        _next=bind_aget(bind2,2);;
        FAILTEST(alt2_3);
        bind_aset(bind2,1,_prev);
        bind_aset(bind2,2,_cur);
        it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4c53,1,bind2);
        _prev=bind_aget(bind2,1);;
        _cur=bind_aget(bind2,2);;
        arg0=it;
        bind_aset(bind2,1,_next);
        it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);
        _next=bind_aget(bind2,1);;
        arg1=it;
        bind_aset(bind2,1,_next);
        it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);
        _next=bind_aget(bind2,1);;
        arg2=it;
        it=Left_Factor_factor(self ,arg0,arg1,arg2);
        FAILTEST(alt2_3);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=Qnil;
        if (ptr->pos<ptr->len) goto alt1_3;
        bind_aset(bind2,1,_prev);
        bind_aset(bind2,2,_cur);
        it=rb_funcall(self,sy_Left_Factor_Or_lb__ti__lp_bin_849e,1,bind2);
        _prev=bind_aget(bind2,1);;
        _cur=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto pass2;
accept1:
        ;
        it=__result;
        _autovar_3=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto pass1;
success2:
        *ptr=oldpass2;
        it=_autovar_3;
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
void Init_left_factor_c() {
    cls_Left_Factor=rb_define_class("Left_Factor",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Left_Factor,"profile_report",profile_report_Left_Factor,0);
    switchhash_Left_Factor_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_1);;
    switchhash_Left_Factor_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_2);;
    switchhash_Left_Factor_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_3);;
    switchhash_Left_Factor_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_4);;
    switchhash_Left_Factor_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Left_Factor_5);;
    sy_Left_Factor_Bind_lb_src_66c4=rb_intern("Left_Factor_Bind_lb_src_66c4");
    sy_Left_Factor_Or_lb__ti__lp_bin_849e=rb_intern("Left_Factor_Or_lb__ti__lp_bin_849e");
    sy_Left_Factor_Seq_lb__lb_bin_4ce0=rb_intern("Left_Factor_Seq_lb__lb_bin_4ce0");
    sy_Left_Factor__append_lp__d113=rb_intern("Left_Factor__append_lp__d113");
    sy_Left_Factor__lb_bind_lb_1_rb__1906=rb_intern("Left_Factor__lb_bind_lb_1_rb__1906");
    sy_Left_Factor__lp_bind_lb_1_rb__34a7=rb_intern("Left_Factor__lp_bind_lb_1_rb__34a7");
    sy_Left_Factor__lp_bind_lb_1_rb__b868=rb_intern("Left_Factor__lp_bind_lb_1_rb__b868");
    sy_Left_Factor__lp_src_dot_cla_e144=rb_intern("Left_Factor__lp_src_dot_cla_e144");
    sy_Left_Factor_bind_lb_1_rb__lt__7b20=rb_intern("Left_Factor_bind_lb_1_rb__lt__7b20");
    sy_Left_Factor_bind_lb_1_rb__pl__4651=rb_intern("Left_Factor_bind_lb_1_rb__pl__4651");
    sy_Left_Factor_bind_lb_1_rb__pl__4c53=rb_intern("Left_Factor_bind_lb_1_rb__pl__4c53");
    sy_Left_Factor_bind_lb_1_rb__sp__6af0=rb_intern("Left_Factor_bind_lb_1_rb__sp__6af0");
    sy_Left_Factor_first_lp_bi_150a=rb_intern("Left_Factor_first_lp_bi_150a");
    sy_Left_Factor_if_sp_bind_lb__1bed=rb_intern("Left_Factor_if_sp_bind_lb__1bed");
    sy_Left_Factor_src_dot_expr_ef77=rb_intern("Left_Factor_src_dot_expr_ef77");
    rb_define_method(cls_Left_Factor,"binds",Left_Factor_binds,2);
    rb_define_method(cls_Left_Factor,"factor",Left_Factor_factor,3);
    rb_define_method(cls_Left_Factor,"first",Left_Factor_first,1);
    rb_define_method(cls_Left_Factor,"rest",Left_Factor_rest,2);
    rb_define_method(cls_Left_Factor,"root",Left_Factor_root,0);
    rb_define_method(cls_Left_Factor,"traverse",Left_Factor_traverse,0);
    rb_define_method(cls_Left_Factor,"traverse_item",Left_Factor_traverse_item,0);
    rb_define_method(cls_Left_Factor,"visit",Left_Factor_visit,0);
    rb_eval_string("testversionleft_factor('8eb6d16399d24a35bafaea446b7f004d')");
}
