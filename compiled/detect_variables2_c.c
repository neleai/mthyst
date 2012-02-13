#include "cthyst.h"
#include "memo.c"
VALUE cls_Analyze_Variables2;
VALUE AmethystCore_anything(VALUE self );
VALUE Analyze_Variables2_flat(VALUE self );
VALUE Analyze_Variables2_itrans(VALUE self );
VALUE Analyze_Variables2_root(VALUE self );
VALUE Analyze_Variables2_traverse(VALUE self );
VALUE Analyze_Variables2_traverse_item(VALUE self );
VALUE Analyze_Variables2_visit(VALUE self );
VALUE switchhash_Analyze_Variables2_1;
VALUE switchhash_Analyze_Variables2_2;
VALUE switchhash_Analyze_Variables2_3;
VALUE switchhash_Analyze_Variables2_4;
VALUE switchhash_Analyze_Variables2_5;
VALUE switchhash_Analyze_Variables2_6;
VALUE switchhash_Analyze_Variables2_7;
static VALUE sy_Analyze_Variables2_Act_lb_bind_4ccd;
static VALUE sy_Analyze_Variables2_Many_dot_cre_6376;
static VALUE sy_Analyze_Variables2_Or_lb__ti_bind_5a27;
static VALUE sy_Analyze_Variables2_Placehol_6875;
static VALUE sy_Analyze_Variables2_Seq_lb__ti_bin_1174;
static VALUE sy_Analyze_Variables2__append_lp__d113;
static VALUE sy_Analyze_Variables2__at_bnding_eq__b94a;
static VALUE sy_Analyze_Variables2__at_locals_eq__02ce;
static VALUE sy_Analyze_Variables2__at_stop_8c46;
static VALUE sy_Analyze_Variables2__at_stop_eq_bi_5f9f;
static VALUE sy_Analyze_Variables2__at_stop_eq_fa_620e;
static VALUE sy_Analyze_Variables2__at_stop_eq_tr_52d4;
static VALUE sy_Analyze_Variables2__at_variabl_f612;
static VALUE sy_Analyze_Variables2__lp_;
static VALUE sy_Analyze_Variables2__lp_bind_lb_1_rb__e3f1;
static VALUE sy_Analyze_Variables2__lp_src_dot_cla_e144;
static VALUE sy_Analyze_Variables2_bind_lb_1_rb_;
static VALUE sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20;
static VALUE sy_Analyze_Variables2_bind_lb_1_rb__sp__6af0;
static VALUE sy_Analyze_Variables2_connects_04d2;
static VALUE sy_Analyze_Variables2_if_sp_bind_lb__1bed;
static VALUE sy_Analyze_Variables2_src_25d9;
static VALUE sy_Analyze_Variables2_src_dot_ary_d5cf;
static VALUE sy_Analyze_Variables2_src_dot_ary_dot__dd8c;
static VALUE sy_Analyze_Variables2_src_dot_dup_d768;
static VALUE sy_Analyze_Variables2_src_dot_loca_ab74;
static VALUE sy_Analyze_Variables2_src_dot_pred_56d4;
static VALUE sy_Analyze_Variables2_src_dot_pure_41d4;
static VALUE sy_Analyze_Variables2_src_dot_rule_5acf;
static VALUE sy_Analyze_Variables2_src_dot_rule_a719;
static VALUE sy_Analyze_Variables2_vars_eq__at_lo_cf02;
VALUE Analyze_Variables2_flat(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_6,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Args*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
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
                else  ary=rb_funcall(ptr->src,s_to_a,0);
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=Analyze_Variables2_flat(self );
            _autovar_3=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass1;
            goto success1;
pass1:
            *ptr=oldpass1;
            goto alt2_2;
success1:
            *ptr=oldpass1;
            it=_autovar_3;
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
            goto alt1_2;
accept2:
            ;
            bind_aset(bind2,1,_autovar);
            bind_aset(bind2,2,_autovar_4);
            it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);
            _autovar=bind_aget(bind2,1);;
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
            goto fail;
accept1:
            ;
            break;
        case 1/*Strin*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
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
            it=Analyze_Variables2_flat(self );
            _autovar_6=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            goto success2;
pass2:
            *ptr=oldpass2;
            goto alt4_2;
success2:
            *ptr=oldpass2;
            it=_autovar_6;
            _autovar_4=it;;

            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=AmethystCore_anything(self );
            FAILTEST(alt4_3);
            _autovar_4=it;;

            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            goto alt3_2;
accept4:
            ;
            bind_aset(bind2,1,_autovar);
            bind_aset(bind2,2,_autovar_4);
            it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);
            _autovar=bind_aget(bind2,1);;
            _autovar_4=bind_aget(bind2,2);;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            stop1=1;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto fail;
accept3:
            ;
            break;
        case 2/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt5_2);
            _autovar_4=it;;
            bind_aset(bind2,1,_autovar);
            bind_aset(bind2,2,_autovar_4);
            it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);
            _autovar=bind_aget(bind2,1);;
            _autovar_4=bind_aget(bind2,2);;
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            stop1=1;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            goto fail;
accept5:
            ;
            break;
        }
    }
    it=_autovar;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Analyze_Variables2_itrans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_rules,_autovar_9,_autovar_10,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_1,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Grammar*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
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
                else  ary=rb_funcall(ptr->src,s_to_a,0);
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=rb_funcall(self,sy_Analyze_Variables2_src_dot_rule_5acf,1,bind2);
            _autovar_3=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_3;
            ptr->len=1;
            it=AmethystCore_anything(self );
            FAILTEST(pass2);
            _autovar_4=it;;
            cstruct oldpass3=*ptr;
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
                else  ary=rb_funcall(ptr->src,s_to_a,0);
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=rb_ary_new3(0);
            _autovar_5=it;;
            int stop2=0;
            while(!stop2) {
                switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_2,rb_obj_class(ame_curobj2(ptr))))) {
                case 0/*Rule*/:
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
                        ptr->ary2=ary;
                        ptr->ary=RARRAY_PTR(ary);
                        ptr->len=RARRAY_LEN(ary);
                    }
                    it=Analyze_Variables2_root(self );
                    FAILTEST(pass4);
                    _autovar_7=it;;
                    it=Qnil;
                    if (ptr->pos<ptr->len) goto pass4;
                    goto success4;
pass4:
                    *ptr=oldpass4;
                    goto alt3_2;
success4:
                    *ptr=oldpass4;
                    it=_autovar_7;
                    _autovar_8=it;;
                    bind_aset(bind2,1,_autovar_5);
                    bind_aset(bind2,2,_autovar_8);
                    it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);
                    _autovar_5=bind_aget(bind2,1);;
                    _autovar_8=bind_aget(bind2,2);;
                    ;
                    goto accept3;
alt3_2:
                    ptr->pos=oldpos3;
                    stop2=1;
                    ;
                    goto accept3;
alt3_3:
                    ptr->pos=oldpos3;
                    goto pass3;
accept3:
                    ;
                    break;
                case 1/*Object*/:
                    ;
                    stop2=1;
                    break;
                }
            }
            it=_autovar_5;
            _rules=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass3;
            goto success3;
pass3:
            *ptr=oldpass3;
            goto pass2;
success3:
            *ptr=oldpass3;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            goto success2;
pass2:
            *ptr=oldpass2;
            goto pass1;
success2:
            *ptr=oldpass2;
            bind_aset(bind2,1,_rules);
            it=rb_funcall(self,sy_Analyze_Variables2_src_dot_rule_a719,1,bind2);
            _rules=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind2);
            _autovar_9=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass1;
            goto success1;
pass1:
            *ptr=oldpass1;
            goto alt2_2;
success1:
            *ptr=oldpass1;
            it=_autovar_9;
            _autovar_10=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_3);
            _autovar_10=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto alt1_2;
accept2:
            ;
            bind_aset(bind2,1,_autovar);
            bind_aset(bind2,2,_autovar_10);
            it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);
            _autovar=bind_aget(bind2,1);;
            _autovar_10=bind_aget(bind2,2);;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
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
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt4_2);
            _autovar_10=it;;
            bind_aset(bind2,1,_autovar);
            bind_aset(bind2,2,_autovar_10);
            it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);
            _autovar=bind_aget(bind2,1);;
            _autovar_10=bind_aget(bind2,2);;
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            stop1=1;
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            goto fail;
accept4:
            ;
            break;
        }
    }
    it=_autovar;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Analyze_Variables2_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Analyze_Variables2_src_dot_dup_d768,1,bind2);
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_3,rb_obj_class(ame_curobj2(ptr))))) {
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
    it=rb_funcall(self,sy_Analyze_Variables2__at_bnding_eq__b94a,1,bind2);
    it=rb_funcall(self,sy_Analyze_Variables2__at_variabl_f612,1,bind2);
    it=rb_funcall(self,sy_Analyze_Variables2__at_locals_eq__02ce,1,bind2);
    it=Analyze_Variables2_traverse(self );
    FAILTEST(pass2);
    _autovar_4=it;;
    cstruct oldpass3=*ptr;
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
        else  ary=rb_funcall(ptr->src,s_to_a,0);
        ptr->ary2=ary;
        ptr->ary=RARRAY_PTR(ary);
        ptr->len=RARRAY_LEN(ary);
    }
    ptr->pos=ptr->len;
    it=rb_funcall(self,sy_Analyze_Variables2_src_dot_loca_ab74,1,bind2);
    it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind2);
    _autovar_5=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass3;
    goto success3;
pass3:
    *ptr=oldpass3;
    goto pass2;
success3:
    *ptr=oldpass3;
    it=_autovar_5;
    _autovar_6=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass2;
    goto success2;
pass2:
    *ptr=oldpass2;
    goto fail;
success2:
    *ptr=oldpass2;
    it=_autovar_6;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Analyze_Variables2_traverse(VALUE self ) {
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
    it=rb_funcall(self,sy_Analyze_Variables2__lp_src_dot_cla_e144,1,bind2);
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
        it=Analyze_Variables2_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Analyze_Variables2_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Analyze_Variables2_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_7,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Analyze_Variables2_visit(self );
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
        it=Analyze_Variables2_traverse(self );
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
        it=Analyze_Variables2_visit(self );
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
            it=Analyze_Variables2_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Analyze_Variables2_visit(self );
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
VALUE Analyze_Variables2_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_pred,_pure,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_ary,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12,__result,_autovar_13,_autovar_14,_autovar_15,_autovar_16,_a,_autovar_17,_autovar_18,_autovar_19,_autovar_20,_autovar_21,_oldstop,_ary2,_ret,_autovar_22,_autovar_23,_autovar_24,_autovar_25,_autovar_26,_autovar_27,_autovar_28,_autovar_29,_autovar_30,_autovar_31,_autovar_32,_autovar_33,_autovar_34,_autovar_35,_autovar_36;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_4,rb_obj_class(ame_curobj2(ptr))))) {
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
        it=rb_funcall(self,sy_Analyze_Variables2_src_dot_pred_56d4,1,bind2);
        _pred=it;;
        it=rb_funcall(self,sy_Analyze_Variables2_src_dot_pure_41d4,1,bind2);
        _pure=it;;
        it=Analyze_Variables2_traverse(self );
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
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Analyze_Variables2_src_dot_ary_d5cf,1,bind2);
        _autovar_3=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_3;
        ptr->len=1;
        it=AmethystCore_anything(self );
        FAILTEST(pass3);
        _autovar_4=it;;
        cstruct oldpass4=*ptr;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Args*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            bind_aset(bind2,1,_pred);
            it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind2);
            _pred=bind_aget(bind2,1);;
            FAILTEST(alt1_2);
            goto alt1_2;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_5=it;;
            cstruct oldpass5=*ptr;
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
            it=rb_ary_new3(0);
            _autovar_6=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos2=ptr->pos;
                int cut2=0;
alt2_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt2_2);
                _autovar_7=it;;
                bind_aset(bind2,1,_autovar_6);
                bind_aset(bind2,2,_autovar_7);
                it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);
                _autovar_6=bind_aget(bind2,1);;
                _autovar_7=bind_aget(bind2,2);;
                ;
                goto accept2;
alt2_2:
                ptr->pos=oldpos2;
                stop1=1;
                ;
                goto accept2;
alt2_3:
                ptr->pos=oldpos2;
                goto pass5;
accept2:
                ;
            }
            it=_autovar_6;
            _ary=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_pred);
            bind_aset(bind2,3,_pure);
            it=rb_funcall(self,sy_Analyze_Variables2_Act_lb_bind_4ccd,1,bind2);
            _ary=bind_aget(bind2,1);;
            _pred=bind_aget(bind2,2);;
            _pure=bind_aget(bind2,3);;
            _autovar_8=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass5;
            goto success5;
pass5:
            *ptr=oldpass5;
            goto alt1_3;
success5:
            *ptr=oldpass5;
            it=_autovar_8;
            _autovar_9=it;;

            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            goto pass4;
accept1:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass4;
            break;
        case 1/*Local*/:
            ;
            bind_aset(bind2,1,_pred);
            it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind2);
            _pred=bind_aget(bind2,1);;
            FAILTEST(pass4);
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_9=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass4;
            break;
        case 2/*Object*/:
            ;
            bind_aset(bind2,1,_pred);
            it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind2);
            _pred=bind_aget(bind2,1);;
            FAILTEST(pass4);
            goto pass4;
            break;
        }
        goto success4;
pass4:
        *ptr=oldpass4;
        goto pass3;
success4:
        *ptr=oldpass4;
        it=_autovar_9;
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto pass2;
success3:
        *ptr=oldpass3;
        it=_autovar_10;
        _autovar_11=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto pass1;
success2:
        *ptr=oldpass2;
        it=_autovar_11;
        _autovar_12=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=_autovar_12;
        __result=it;;
        break;
    case 1/*Args*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_13=it;;
        cstruct oldpass6=*ptr;
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
        it=Analyze_Variables2_traverse(self );
        FAILTEST(pass6);
        _autovar_14=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_14;
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
        it=rb_funcall(self,sy_Analyze_Variables2_src_dot_ary_dot__dd8c,1,bind2);
        _autovar_15=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_15;
        ptr->len=1;
        it=AmethystCore_anything(self );
        FAILTEST(pass8);
        _autovar_16=it;;
        cstruct oldpass9=*ptr;
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=Analyze_Variables2_flat(self );
        _a=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass9;
        goto success9;
pass9:
        *ptr=oldpass9;
        goto pass8;
success9:
        *ptr=oldpass9;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass8;
        goto success8;
pass8:
        *ptr=oldpass8;
        goto pass7;
success8:
        *ptr=oldpass8;
        bind_aset(bind2,1,_a);
        it=rb_funcall(self,sy_Analyze_Variables2_connects_04d2,1,bind2);
        _a=bind_aget(bind2,1);;
        _ary=it;;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Analyze_Variables2__lp_bind_lb_1_rb__e3f1,1,bind2);
        _ary=bind_aget(bind2,1);;
        _autovar_17=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto pass6;
success7:
        *ptr=oldpass7;
        it=_autovar_17;
        _autovar_18=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto fail;
success6:
        *ptr=oldpass6;
        it=_autovar_18;
        __result=it;;
        break;
    case 2/*Comment*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_19=it;;
        cstruct oldpass10=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_19;
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
        it=rb_funcall(self,sy_Analyze_Variables2_Placehol_6875,1,bind2);
        _autovar_20=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass10;
        goto success10;
pass10:
        *ptr=oldpass10;
        goto fail;
success10:
        *ptr=oldpass10;
        it=_autovar_20;
        __result=it;;
        break;
    case 3/*Many*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_21=it;;
        cstruct oldpass11=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_21;
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
        it=rb_funcall(self,sy_Analyze_Variables2__at_stop_8c46,1,bind2);
        _oldstop=it;;
        it=rb_funcall(self,sy_Analyze_Variables2__at_stop_eq_fa_620e,1,bind2);
        it=Analyze_Variables2_traverse_item(self );
        FAILTEST(pass11);
        _ary2=it;;
        bind_aset(bind2,1,_ary2);
        it=rb_funcall(self,sy_Analyze_Variables2_Many_dot_cre_6376,1,bind2);
        _ary2=bind_aget(bind2,1);;
        _ret=it;;
        bind_aset(bind2,1,_oldstop);
        it=rb_funcall(self,sy_Analyze_Variables2__at_stop_eq_bi_5f9f,1,bind2);
        _oldstop=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass11;
        goto success11;
pass11:
        *ptr=oldpass11;
        goto fail;
success11:
        *ptr=oldpass11;
        bind_aset(bind2,1,_ret);
        it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_1_rb_,1,bind2);
        _ret=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 4/*Or_AST*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_22=it;;
        cstruct oldpass12=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_22;
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
        _autovar_23=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=Analyze_Variables2_traverse_item(self );
            FAILTEST(alt3_2);
            _autovar_24=it;;
            bind_aset(bind2,1,_autovar_23);
            bind_aset(bind2,2,_autovar_24);
            it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);
            _autovar_23=bind_aget(bind2,1);;
            _autovar_24=bind_aget(bind2,2);;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            stop2=1;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto pass12;
accept3:
            ;
        }
        it=_autovar_23;
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass12;
        goto success12;
pass12:
        *ptr=oldpass12;
        goto fail;
success12:
        *ptr=oldpass12;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Analyze_Variables2_Or_lb__ti_bind_5a27,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 5/*Parenthesis*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_25=it;;
        cstruct oldpass13=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_25;
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
        it=Analyze_Variables2_traverse_item(self );
        FAILTEST(pass13);
        _autovar_26=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass13;
        goto success13;
pass13:
        *ptr=oldpass13;
        goto fail;
success13:
        *ptr=oldpass13;
        it=_autovar_26;
        __result=it;;
        break;
    case 6/*Result*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_27=it;;
        cstruct oldpass14=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_27;
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
        it=rb_funcall(self,sy_Analyze_Variables2_vars_eq__at_lo_cf02,1,bind2);
        _autovar_28=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass14;
        goto success14;
pass14:
        *ptr=oldpass14;
        goto fail;
success14:
        *ptr=oldpass14;
        it=_autovar_28;
        __result=it;;
        break;
    case 7/*Seq*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_29=it;;
        cstruct oldpass15=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_29;
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
        _autovar_30=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=Analyze_Variables2_traverse_item(self );
            FAILTEST(alt4_2);
            _autovar_31=it;;
            bind_aset(bind2,1,_autovar_30);
            bind_aset(bind2,2,_autovar_31);
            it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);
            _autovar_30=bind_aget(bind2,1);;
            _autovar_31=bind_aget(bind2,2);;
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            stop3=1;
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            goto pass15;
accept4:
            ;
        }
        it=_autovar_30;
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass15;
        goto success15;
pass15:
        *ptr=oldpass15;
        goto fail;
success15:
        *ptr=oldpass15;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Analyze_Variables2_Seq_lb__ti_bin_1174,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 8/*Seq_AST*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_32=it;;
        cstruct oldpass16=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_32;
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
        _autovar_33=it;;
        int stop4=0;
        while(!stop4) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=Analyze_Variables2_traverse_item(self );
            FAILTEST(alt5_2);
            _autovar_34=it;;
            bind_aset(bind2,1,_autovar_33);
            bind_aset(bind2,2,_autovar_34);
            it=rb_funcall(self,sy_Analyze_Variables2__append_lp__d113,1,bind2);
            _autovar_33=bind_aget(bind2,1);;
            _autovar_34=bind_aget(bind2,2);;
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            stop4=1;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            goto pass16;
accept5:
            ;
        }
        it=_autovar_33;
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass16;
        goto success16;
pass16:
        *ptr=oldpass16;
        goto fail;
success16:
        *ptr=oldpass16;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Analyze_Variables2_Seq_lb__ti_bin_1174,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 9/*Stop*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_35=it;;
        cstruct oldpass17=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_35;
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
        it=rb_funcall(self,sy_Analyze_Variables2__at_stop_eq_tr_52d4,1,bind2);
        _autovar_36=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass17;
        goto success17;
pass17:
        *ptr=oldpass17;
        goto fail;
success17:
        *ptr=oldpass17;
        it=_autovar_36;
        __result=it;;
        break;
    case 10/*Object*/:
        ;
        goto fail;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE cls_Resolve_Calls;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Resolve_Calls_root(VALUE self );
VALUE Resolve_Calls_traverse(VALUE self );
VALUE Resolve_Calls_traverse_item(VALUE self );
VALUE Resolve_Calls_visit(VALUE self );
VALUE switchhash_Resolve_Calls_1;
VALUE switchhash_Resolve_Calls_2;
VALUE switchhash_Resolve_Calls_3;
VALUE switchhash_Resolve_Calls_4;
static VALUE sy_Resolve_Calls__at_grammar_c8c8;
static VALUE sy_Resolve_Calls__at_name_eq_bi_0e7f;
static VALUE sy_Resolve_Calls__lp_src_dot_cla_e144;
static VALUE sy_Resolve_Calls_a_eq_Apply_lb__1315;
static VALUE sy_Resolve_Calls_a_eq_Apply_lb__36f8;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__lt__7b20;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__sp__6af0;
static VALUE sy_Resolve_Calls_if_sp_bind_lb__1bed;
static VALUE sy_Resolve_Calls_src_dot_name_80f3;
static VALUE sy_Resolve_Calls_super_na_c8c2;
VALUE Resolve_Calls_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _autovar=it;;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Resolve_Calls__at_grammar_c8c8,1,bind2);
    _autovar=bind_aget(bind2,1);;
    switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_1,rb_obj_class(ame_curobj2(ptr))))) {
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
    it=rb_funcall(self,sy_Resolve_Calls_src_dot_name_80f3,1,bind2);
    _autovar_3=it;;
    bind_aset(bind2,1,_autovar_3);
    it=rb_funcall(self,sy_Resolve_Calls__at_name_eq_bi_0e7f,1,bind2);
    _autovar_3=bind_aget(bind2,1);;
    it=Resolve_Calls_traverse(self );
    FAILTEST(pass1);
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

    return it;
fail:
    return failobj;
}
VALUE Resolve_Calls_traverse(VALUE self ) {
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
    it=rb_funcall(self,sy_Resolve_Calls__lp_src_dot_cla_e144,1,bind2);
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
        it=Resolve_Calls_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Resolve_Calls_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Resolve_Calls_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Resolve_Calls_visit(self );
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
        it=Resolve_Calls_traverse(self );
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
        it=Resolve_Calls_visit(self );
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
            it=Resolve_Calls_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Resolve_Calls_visit(self );
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
VALUE Resolve_Calls_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,__result,_autovar_7,_name,_autovar_8,_autovar_9,_autovar_10;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        it=_autovar;
        _autovar_2=it;;
        it=_autovar_2;
        _autovar_3=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=_autovar_3;
        _autovar_4=it;;
        cstruct oldpass1=*ptr;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        FAILTEST(pass1);
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
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'r':
            ;
        case 't' ... UC(255):
            ;
            goto pass2;
            break;
        case 's' ... 's':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='u'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='e'&&ame_curstr2(ptr)[3]=='r')  ptr->pos+=4;
            else goto pass2;
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto pass1;
success2:
        *ptr=oldpass2;
        it=rb_funcall(self,sy_Resolve_Calls_super_na_c8c2,1,bind2);
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=_autovar_3;
        _autovar_7=it;;
        cstruct oldpass3=*ptr;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Array*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _name=it;;
            bind_aset(bind2,1,_name);
            it=rb_funcall(self,sy_Resolve_Calls_a_eq_Apply_lb__36f8,1,bind2);
            _name=bind_aget(bind2,1);;
            _autovar_8=it;;
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
        goto alt1_3;
success3:
        *ptr=oldpass3;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=_autovar_3;
        _autovar_9=it;;
        cstruct oldpass4=*ptr;
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
        FAILTEST(pass4);
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Resolve_Calls_a_eq_Apply_lb__1315,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt1_4;
success4:
        *ptr=oldpass4;
        it=_autovar_10;
        __result=it;;

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
        goto fail;
        break;
    }
    return it;
fail:
    return failobj;
}
void Init_detect_variables2_c() {
    cls_Analyze_Variables2=rb_define_class("Analyze_Variables2",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    switchhash_Analyze_Variables2_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_1);;
    switchhash_Analyze_Variables2_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_2);;
    switchhash_Analyze_Variables2_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_3);;
    switchhash_Analyze_Variables2_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Args\nnext h[k]=2 if k<=Comment\nnext h[k]=3 if k<=Many\nnext h[k]=4 if k<=Or_AST\nnext h[k]=5 if k<=Parenthesis\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Seq\nnext h[k]=8 if k<=Seq_AST\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_4);;
    switchhash_Analyze_Variables2_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Local\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_5);;
    switchhash_Analyze_Variables2_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Strin\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_6);;
    switchhash_Analyze_Variables2_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Analyze_Variables2_7);;
    sy_Analyze_Variables2_Act_lb_bind_4ccd=rb_intern("Analyze_Variables2_Act_lb_bind_4ccd");
    sy_Analyze_Variables2_Many_dot_cre_6376=rb_intern("Analyze_Variables2_Many_dot_cre_6376");
    sy_Analyze_Variables2_Or_lb__ti_bind_5a27=rb_intern("Analyze_Variables2_Or_lb__ti_bind_5a27");
    sy_Analyze_Variables2_Placehol_6875=rb_intern("Analyze_Variables2_Placehol_6875");
    sy_Analyze_Variables2_Seq_lb__ti_bin_1174=rb_intern("Analyze_Variables2_Seq_lb__ti_bin_1174");
    sy_Analyze_Variables2__append_lp__d113=rb_intern("Analyze_Variables2__append_lp__d113");
    sy_Analyze_Variables2__at_bnding_eq__b94a=rb_intern("Analyze_Variables2__at_bnding_eq__b94a");
    sy_Analyze_Variables2__at_locals_eq__02ce=rb_intern("Analyze_Variables2__at_locals_eq__02ce");
    sy_Analyze_Variables2__at_stop_8c46=rb_intern("Analyze_Variables2__at_stop_8c46");
    sy_Analyze_Variables2__at_stop_eq_bi_5f9f=rb_intern("Analyze_Variables2__at_stop_eq_bi_5f9f");
    sy_Analyze_Variables2__at_stop_eq_fa_620e=rb_intern("Analyze_Variables2__at_stop_eq_fa_620e");
    sy_Analyze_Variables2__at_stop_eq_tr_52d4=rb_intern("Analyze_Variables2__at_stop_eq_tr_52d4");
    sy_Analyze_Variables2__at_variabl_f612=rb_intern("Analyze_Variables2__at_variabl_f612");
    sy_Analyze_Variables2__lp_=rb_intern("Analyze_Variables2__lp_");
    sy_Analyze_Variables2__lp_bind_lb_1_rb__e3f1=rb_intern("Analyze_Variables2__lp_bind_lb_1_rb__e3f1");
    sy_Analyze_Variables2__lp_src_dot_cla_e144=rb_intern("Analyze_Variables2__lp_src_dot_cla_e144");
    sy_Analyze_Variables2_bind_lb_1_rb_=rb_intern("Analyze_Variables2_bind_lb_1_rb_");
    sy_Analyze_Variables2_bind_lb_1_rb__lt__7b20=rb_intern("Analyze_Variables2_bind_lb_1_rb__lt__7b20");
    sy_Analyze_Variables2_bind_lb_1_rb__sp__6af0=rb_intern("Analyze_Variables2_bind_lb_1_rb__sp__6af0");
    sy_Analyze_Variables2_connects_04d2=rb_intern("Analyze_Variables2_connects_04d2");
    sy_Analyze_Variables2_if_sp_bind_lb__1bed=rb_intern("Analyze_Variables2_if_sp_bind_lb__1bed");
    sy_Analyze_Variables2_src_25d9=rb_intern("Analyze_Variables2_src_25d9");
    sy_Analyze_Variables2_src_dot_ary_d5cf=rb_intern("Analyze_Variables2_src_dot_ary_d5cf");
    sy_Analyze_Variables2_src_dot_ary_dot__dd8c=rb_intern("Analyze_Variables2_src_dot_ary_dot__dd8c");
    sy_Analyze_Variables2_src_dot_dup_d768=rb_intern("Analyze_Variables2_src_dot_dup_d768");
    sy_Analyze_Variables2_src_dot_loca_ab74=rb_intern("Analyze_Variables2_src_dot_loca_ab74");
    sy_Analyze_Variables2_src_dot_pred_56d4=rb_intern("Analyze_Variables2_src_dot_pred_56d4");
    sy_Analyze_Variables2_src_dot_pure_41d4=rb_intern("Analyze_Variables2_src_dot_pure_41d4");
    sy_Analyze_Variables2_src_dot_rule_5acf=rb_intern("Analyze_Variables2_src_dot_rule_5acf");
    sy_Analyze_Variables2_src_dot_rule_a719=rb_intern("Analyze_Variables2_src_dot_rule_a719");
    sy_Analyze_Variables2_vars_eq__at_lo_cf02=rb_intern("Analyze_Variables2_vars_eq__at_lo_cf02");
    rb_define_method(cls_Analyze_Variables2,"flat",Analyze_Variables2_flat,0);
    rb_define_method(cls_Analyze_Variables2,"itrans",Analyze_Variables2_itrans,0);
    rb_define_method(cls_Analyze_Variables2,"root",Analyze_Variables2_root,0);
    rb_define_method(cls_Analyze_Variables2,"traverse",Analyze_Variables2_traverse,0);
    rb_define_method(cls_Analyze_Variables2,"traverse_item",Analyze_Variables2_traverse_item,0);
    rb_define_method(cls_Analyze_Variables2,"visit",Analyze_Variables2_visit,0);

    cls_Resolve_Calls=rb_define_class("Resolve_Calls",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    switchhash_Resolve_Calls_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_1);;
    switchhash_Resolve_Calls_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_2);;
    switchhash_Resolve_Calls_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Array\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_3);;
    switchhash_Resolve_Calls_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_4);;
    sy_Resolve_Calls__at_grammar_c8c8=rb_intern("Resolve_Calls__at_grammar_c8c8");
    sy_Resolve_Calls__at_name_eq_bi_0e7f=rb_intern("Resolve_Calls__at_name_eq_bi_0e7f");
    sy_Resolve_Calls__lp_src_dot_cla_e144=rb_intern("Resolve_Calls__lp_src_dot_cla_e144");
    sy_Resolve_Calls_a_eq_Apply_lb__1315=rb_intern("Resolve_Calls_a_eq_Apply_lb__1315");
    sy_Resolve_Calls_a_eq_Apply_lb__36f8=rb_intern("Resolve_Calls_a_eq_Apply_lb__36f8");
    sy_Resolve_Calls_bind_lb_1_rb__lt__7b20=rb_intern("Resolve_Calls_bind_lb_1_rb__lt__7b20");
    sy_Resolve_Calls_bind_lb_1_rb__sp__6af0=rb_intern("Resolve_Calls_bind_lb_1_rb__sp__6af0");
    sy_Resolve_Calls_if_sp_bind_lb__1bed=rb_intern("Resolve_Calls_if_sp_bind_lb__1bed");
    sy_Resolve_Calls_src_dot_name_80f3=rb_intern("Resolve_Calls_src_dot_name_80f3");
    sy_Resolve_Calls_super_na_c8c2=rb_intern("Resolve_Calls_super_na_c8c2");
    rb_define_method(cls_Resolve_Calls,"root",Resolve_Calls_root,0);
    rb_define_method(cls_Resolve_Calls,"traverse",Resolve_Calls_traverse,0);
    rb_define_method(cls_Resolve_Calls,"traverse_item",Resolve_Calls_traverse_item,0);
    rb_define_method(cls_Resolve_Calls,"visit",Resolve_Calls_visit,0);
    rb_eval_string("testversiondetect_variables2('6df3399fa8aa6c29c268d2b4462f5289')");
}
