#include "cthyst.h"
VALUE cls_Constant_Propagator;
VALUE AmethystCore_anything(VALUE self );
VALUE Constant_Propagator_root(VALUE self );
VALUE Constant_Propagator_step(VALUE self ,VALUE a0);
VALUE switchhash_Constant_Propagator_1;
VALUE switchhash_Constant_Propagator_2;
static VALUE sy_Constant_Propagator_Constant_8840;
static VALUE sy_Constant_Propagator_Constant_bf42;
static VALUE sy_Constant_Propagator_Constant_db03;
static VALUE sy_Constant_Propagator__at_depend_eq__07a9;
static VALUE sy_Constant_Propagator_a_eq_Consta_2e1d;
static VALUE sy_Constant_Propagator_src_25d9;
static VALUE sy_valof;
VALUE Constant_Propagator_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_it,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _it=it;;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy_Constant_Propagator__at_depend_eq__07a9,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Constant_Propagator_step(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_el,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_expr,_autovar_10,_autovar_11,_val,_autovar_12,_autovar_13,_autovar_14,__result;
    VALUE bind2=bind_new2(16);
    _el=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_el;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Lambda*/:
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
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Constant_Propagator_Constant_8840,1,bind2);
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
            _autovar_5=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            break;
        case 1/*Local*/:
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
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Constant_Propagator_src_25d9,1,bind2);
            arg0=it;
            it=rb_funcall(self,sy_valof,1,arg0);
            FAILTEST(pass4);
            _autovar_7=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass4;
            goto success4;
pass4:
            *ptr=oldpass4;
            goto pass2;
success4:
            *ptr=oldpass4;
            it=_autovar_7;
            _autovar_5=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            break;
        case 2/*Object*/:
            ;
            goto pass2;
            break;
        }
        goto success2;
pass2:
        *ptr=oldpass2;
        goto alt1_2;
success2:
        *ptr=oldpass2;
        it=_autovar_5;
        _autovar_8=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind2);
        _autovar_8=it;;

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
    case 1/*Bind*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        FAILTEST(pass5);
        _expr=it;;
        it=_expr;
        arg0=it;
        it=rb_funcall(self,sy_valof,1,arg0);
        FAILTEST(pass5);
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto alt2_2;
success5:
        *ptr=oldpass5;
        it=_autovar_10;
        _autovar_8=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind2);
        _autovar_8=it;;

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
    case 2/*CAct*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_11=it;;
        cstruct oldpass6=*ptr;
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Constant_Propagator_src_25d9,1,bind2);
        _val=it;;
        bind_aset(bind2,1,_val);
        it=rb_funcall(self,sy_Constant_Propagator_Constant_db03,1,bind2);
        _val=bind_aget(bind2,1);;
        _autovar_12=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto alt3_2;
success6:
        *ptr=oldpass6;
        it=_autovar_12;
        _autovar_8=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        FAILTEST(alt3_3);
        it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind2);
        _autovar_8=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto pass1;
accept3:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 3/*Local*/:
        ;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        ptr->pos=ptr->len;
        bind_aset(bind2,1,_el);
        it=rb_funcall(self,sy_Constant_Propagator_a_eq_Consta_2e1d,1,bind2);
        _el=bind_aget(bind2,1);;
        _autovar_14=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt4_2;
success7:
        *ptr=oldpass7;
        it=_autovar_14;
        _autovar_8=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        FAILTEST(alt4_3);
        it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind2);
        _autovar_8=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto pass1;
accept4:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 4/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(pass1);
        it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind2);
        _autovar_8=it;;
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
    it=_autovar_8;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE cls_Constant_Traverser;
VALUE AmethystCore_anything(VALUE self );
VALUE Constant_Traverser_consts(VALUE self );
VALUE Constant_Traverser_root(VALUE self );
VALUE Constant_Traverser_traverse(VALUE self );
VALUE Constant_Traverser_traverse_item(VALUE self );
VALUE Constant_Traverser_visit(VALUE self );
VALUE switchhash_Constant_Traverser_1;
VALUE switchhash_Constant_Traverser_2;
VALUE switchhash_Constant_Traverser_3;
static VALUE sy_Constant_Traverser_Bind_lb_src_66c4;
static VALUE sy_Constant_Traverser_Bind_lb_src_9cb6;
static VALUE sy_Constant_Traverser_Seq_lb_bind_95dc;
static VALUE sy_Constant_Traverser__append_lp__d113;
static VALUE sy_Constant_Traverser__at_consts_eq__b621;
static VALUE sy_Constant_Traverser__at_consts_lb__abf4;
static VALUE sy_Constant_Traverser__lp__lp__at_const_463e;
static VALUE sy_Constant_Traverser__lp__lp__at_const_5d8f;
static VALUE sy_Constant_Traverser__lp_src_dot_cla_e144;
static VALUE sy_Constant_Traverser_bind_lb_1_rb__lt__7b20;
static VALUE sy_Constant_Traverser_bind_lb_1_rb__sp__6af0;
static VALUE sy_Constant_Traverser_if_sp_bind_lb__1bed;
static VALUE sy_Constant_Traverser_src_25d9;
static VALUE sy_Constant_Traverser_src_dot_cfg_eq__15aa;
VALUE Constant_Traverser_consts(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_ary,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _ary=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_1,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Local*/:
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
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Constant_Traverser__lp__lp__at_const_463e,1,bind2);
            FAILTEST(pass1);
            it=rb_funcall(self,sy_Constant_Traverser_Bind_lb_src_9cb6,1,bind2);
            _autovar_2=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_autovar_2);
            it=rb_funcall(self,sy_Constant_Traverser__append_lp__d113,1,bind2);
            _ary=bind_aget(bind2,1);;
            _autovar_2=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass1;
            goto success1;
pass1:
            *ptr=oldpass1;
            goto alt1_2;
success1:
            *ptr=oldpass1;

            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_3);
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            stop1=1;
            ;
            goto accept1;
alt1_4:
            ptr->pos=oldpos1;
            goto fail;
accept1:
            ;
            break;
        case 1/*Object*/:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_2);
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto fail;
accept2:
            ;
            break;
        }
    }
    it=_ary;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Constant_Traverser_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Constant_Traverser__at_consts_eq__b621,1,bind2);
    it=rb_funcall(self,sy_Constant_Traverser_src_dot_cfg_eq__15aa,1,bind2);
    it=Constant_Traverser_traverse(self );
    FAILTEST(fail);
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Constant_Traverser_traverse(VALUE self ) {
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
    it=rb_funcall(self,sy_Constant_Traverser__lp_src_dot_cla_e144,1,bind2);
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
        it=Constant_Traverser_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Constant_Traverser_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Constant_Traverser_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Constant_Traverser_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Constant_Traverser_visit(self );
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
        it=Constant_Traverser_traverse(self );
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
        it=Constant_Traverser_visit(self );
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
            it=Constant_Traverser_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Constant_Traverser_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Constant_Traverser_visit(self );
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
VALUE Constant_Traverser_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_a,_autovar_2,__result,_autovar_3,_expr,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
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
        it=Constant_Traverser_consts(self );
        _a=it;;
        bind_aset(bind2,1,_a);
        it=rb_funcall(self,sy_Constant_Traverser_Seq_lb_bind_95dc,1,bind2);
        _a=bind_aget(bind2,1);;
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
    case 1/*Bind*/:
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
        it=Constant_Traverser_traverse_item(self );
        FAILTEST(pass2);
        _expr=it;;
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy_Constant_Traverser_Bind_lb_src_66c4,1,bind2);
        _expr=bind_aget(bind2,1);;
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
        break;
    case 2/*Local*/:
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
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Constant_Traverser__lp__lp__at_const_5d8f,1,bind2);
        FAILTEST(pass3);
        it=rb_funcall(self,sy_Constant_Traverser__at_consts_lb__abf4,1,bind2);
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto fail;
success3:
        *ptr=oldpass3;
        it=_autovar_6;
        __result=it;;
        break;
    case 3/*Result*/:
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Constant_Traverser_src_25d9,1,bind2);
        _autovar_8=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto fail;
success4:
        *ptr=oldpass4;
        it=_autovar_8;
        __result=it;;
        break;
    case 4/*Object*/:
        ;
        goto fail;
        break;
    }
    return it;
fail:
    return failobj;
}
void Init_constant_propagation_c() {
    cls_Constant_Propagator=rb_define_class("Constant_Propagator",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    switchhash_Constant_Propagator_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Propagator_1);;
    switchhash_Constant_Propagator_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Lambda\nnext h[k]=1 if k<=Local\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Propagator_2);;
    sy_Constant_Propagator_Constant_8840=rb_intern("Constant_Propagator_Constant_8840");
    sy_Constant_Propagator_Constant_bf42=rb_intern("Constant_Propagator_Constant_bf42");
    sy_Constant_Propagator_Constant_db03=rb_intern("Constant_Propagator_Constant_db03");
    sy_Constant_Propagator__at_depend_eq__07a9=rb_intern("Constant_Propagator__at_depend_eq__07a9");
    sy_Constant_Propagator_a_eq_Consta_2e1d=rb_intern("Constant_Propagator_a_eq_Consta_2e1d");
    sy_Constant_Propagator_src_25d9=rb_intern("Constant_Propagator_src_25d9");
    sy_valof=rb_intern("valof");
    rb_define_method(cls_Constant_Propagator,"root",Constant_Propagator_root,0);
    rb_define_method(cls_Constant_Propagator,"step",Constant_Propagator_step,1);

    cls_Constant_Traverser=rb_define_class("Constant_Traverser",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    switchhash_Constant_Traverser_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Traverser_1);;
    switchhash_Constant_Traverser_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Local\nnext h[k]=3 if k<=Result\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Traverser_2);;
    switchhash_Constant_Traverser_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Traverser_3);;
    sy_Constant_Traverser_Bind_lb_src_66c4=rb_intern("Constant_Traverser_Bind_lb_src_66c4");
    sy_Constant_Traverser_Bind_lb_src_9cb6=rb_intern("Constant_Traverser_Bind_lb_src_9cb6");
    sy_Constant_Traverser_Seq_lb_bind_95dc=rb_intern("Constant_Traverser_Seq_lb_bind_95dc");
    sy_Constant_Traverser__append_lp__d113=rb_intern("Constant_Traverser__append_lp__d113");
    sy_Constant_Traverser__at_consts_eq__b621=rb_intern("Constant_Traverser__at_consts_eq__b621");
    sy_Constant_Traverser__at_consts_lb__abf4=rb_intern("Constant_Traverser__at_consts_lb__abf4");
    sy_Constant_Traverser__lp__lp__at_const_463e=rb_intern("Constant_Traverser__lp__lp__at_const_463e");
    sy_Constant_Traverser__lp__lp__at_const_5d8f=rb_intern("Constant_Traverser__lp__lp__at_const_5d8f");
    sy_Constant_Traverser__lp_src_dot_cla_e144=rb_intern("Constant_Traverser__lp_src_dot_cla_e144");
    sy_Constant_Traverser_bind_lb_1_rb__lt__7b20=rb_intern("Constant_Traverser_bind_lb_1_rb__lt__7b20");
    sy_Constant_Traverser_bind_lb_1_rb__sp__6af0=rb_intern("Constant_Traverser_bind_lb_1_rb__sp__6af0");
    sy_Constant_Traverser_if_sp_bind_lb__1bed=rb_intern("Constant_Traverser_if_sp_bind_lb__1bed");
    sy_Constant_Traverser_src_25d9=rb_intern("Constant_Traverser_src_25d9");
    sy_Constant_Traverser_src_dot_cfg_eq__15aa=rb_intern("Constant_Traverser_src_dot_cfg_eq__15aa");
    rb_define_method(cls_Constant_Traverser,"consts",Constant_Traverser_consts,0);
    rb_define_method(cls_Constant_Traverser,"root",Constant_Traverser_root,0);
    rb_define_method(cls_Constant_Traverser,"traverse",Constant_Traverser_traverse,0);
    rb_define_method(cls_Constant_Traverser,"traverse_item",Constant_Traverser_traverse_item,0);
    rb_define_method(cls_Constant_Traverser,"visit",Constant_Traverser_visit,0);
    rb_eval_string("testversionconstant_propagation('874494ce71d29eba51da609c88fa1a9a')");
}
