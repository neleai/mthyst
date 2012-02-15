#include "cthyst.h"
#include "memo.c"
VALUE cls_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Dataflow_root(VALUE self );
VALUE Dataflow_switch(VALUE self );
VALUE Dataflow_traverse(VALUE self );
VALUE Dataflow_traverse_item(VALUE self );
VALUE Dataflow_vars_in(VALUE self );
VALUE Dataflow_visit(VALUE self );
VALUE switchhash_Dataflow_1;
VALUE switchhash_Dataflow_2;
VALUE switchhash_Dataflow_3;
VALUE switchhash_Dataflow_4;
VALUE switchhash_Dataflow_5;
static VALUE sy_Dataflow_Act_lb_bind_7d8f;
static VALUE sy_Dataflow_Apply_lb__ti__lp__753f;
static VALUE sy_Dataflow_Lookahea_2972;
static VALUE sy_Dataflow_Many_dot_cre_2107;
static VALUE sy_Dataflow_Pass_dot_cre_5b5c;
static VALUE sy_Dataflow_Seq_lb_src_dot__6f68;
static VALUE sy_Dataflow_Switch_O_5445;
static VALUE sy_Dataflow__append_lp__d113;
static VALUE sy_Dataflow__at_bnding_eq__b94a;
static VALUE sy_Dataflow__at_marked_lt__59bb;
static VALUE sy_Dataflow__at_marked_lt__d910;
static VALUE sy_Dataflow__at_marked_lt__f9b9;
static VALUE sy_Dataflow__at_oldssan_37c2;
static VALUE sy_Dataflow__at_oldssan_e953;
static VALUE sy_Dataflow__lp_src_dot_cla_e144;
static VALUE sy_Dataflow_bind_end_6e13;
static VALUE sy_Dataflow_bind_lb_1_rb_;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__6099;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__9da9;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__ce70;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__dbae;
static VALUE sy_Dataflow_bind_lb_1_rb__eq__fe02;
static VALUE sy_Dataflow_bind_lb_1_rb__lt__7b20;
static VALUE sy_Dataflow_bind_lb_1_rb__lt__c37a;
static VALUE sy_Dataflow_bind_lb_1_rb__lt__eda2;
static VALUE sy_Dataflow_bind_lb_1_rb__sp__6af0;
static VALUE sy_Dataflow_if_sp_bind_lb__1bed;
static VALUE sy_Dataflow_many_end_0563;
static VALUE sy_Dataflow_n_eq_Result_d8be;
static VALUE sy_Dataflow_oldssanu_073d;
static VALUE sy_Dataflow_or_end_lp_b_33b4;
static VALUE sy_Dataflow_src_25d9;
static VALUE sy_Dataflow_src_dot_args_2df5;
static VALUE sy_Dataflow_src_dot_body_b7c1;
static VALUE sy_Dataflow_src_dot_clas_68f9;
static VALUE sy_Dataflow_src_dot_dup_d768;
static VALUE sy_Dataflow_src_dot_free_3d49;
static VALUE sy_Dataflow_src_dot_reac_9ae4;
static VALUE sy_Dataflow_src_dot_to_5e99;
static VALUE sy_Dataflow_src_dot_var_3a88;
static VALUE sy_Dataflow_src_dot_vars_2db1;
static VALUE sy_Dataflow_ssanum_lp_s_3920;
static VALUE sy_Dataflow_ssanums_dot__ae08;

memo_struct *mem_Dataflow=NULL;
VALUE memo_val_Dataflow;
VALUE profile_report_Dataflow(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if(ptr->mem) {
        fprintf(profile_report,"memo Dataflow::root hit: %i miss: %i\n",((memo_struct *)ptr->mem)->hits[113],((memo_struct *)ptr->mem)->miss[113]);
        ((memo_struct *)ptr->mem)->hits[113]=0;
        ((memo_struct *)ptr->mem)->miss[113]=0;
    }
    return Qnil;
}
VALUE Dataflow_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_var,_autovar_8,_autovar_9,_body,_autovar_10,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if (ptr->mem==NULL) {
        ptr->mem=mem_Dataflow;
    }
    int oldpos=ptr->pos;
    if (memo_pos(ptr->mem,113,ptr->src,ptr->pos)!=-1) {
        it=memo_value(ptr->mem,113,ptr->src,ptr->pos);
        ptr->pos=memo_pos(ptr->mem,113,ptr->src,ptr->pos);
        return it;
    }
    it=rb_funcall(self,sy_Dataflow_src_dot_dup_d768,1,bind2);
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
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
    goto memo_fail;
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
    it=rb_funcall(self,sy_Dataflow__at_bnding_eq__b94a,1,bind2);
    it=rb_funcall(self,sy_Dataflow_src_dot_args_2df5,1,bind2);
    _autovar_4=it;;
    cstruct oldpass3=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_4;
    ptr->len=1;
    it=AmethystCore_anything(self );
    FAILTEST(pass3);
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
        ptr->ary2=ary;
        ptr->ary=RARRAY_PTR(ary);
        ptr->len=RARRAY_LEN(ary);
    }
    it=rb_ary_new3(0);
    _autovar_6=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Dataflow_traverse_item(self );
        FAILTEST(alt1_2);
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar_6);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
        _autovar_6=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto pass4;
accept1:
        ;
    }
    it=_autovar_6;
    _var=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass4;
    goto success4;
pass4:
    *ptr=oldpass4;
    goto pass3;
success4:
    *ptr=oldpass4;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass3;
    goto success3;
pass3:
    *ptr=oldpass3;
    goto pass2;
success3:
    *ptr=oldpass3;
    bind_aset(bind2,1,_var);
    it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__6099,1,bind2);
    _var=bind_aget(bind2,1);;
    it=rb_funcall(self,sy_Dataflow_Seq_lb_src_dot__6f68,1,bind2);
    _autovar_8=it;;
    cstruct oldpass5=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_8;
    ptr->len=1;
    it=Dataflow_traverse_item(self );
    FAILTEST(pass5);
    _autovar_9=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass5;
    goto success5;
pass5:
    *ptr=oldpass5;
    goto pass2;
success5:
    *ptr=oldpass5;
    it=_autovar_9;
    _body=it;;
    bind_aset(bind2,1,_body);
    it=rb_funcall(self,sy_Dataflow_src_dot_body_b7c1,1,bind2);
    _body=bind_aget(bind2,1);;
    bind_aset(bind2,1,_body);
    it=rb_funcall(self,sy_Dataflow_src_dot_reac_9ae4,1,bind2);
    _body=bind_aget(bind2,1);;
    it=rb_funcall(self,sy_Dataflow_src_dot_free_3d49,1,bind2);
    _autovar_10=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass2;
    goto success2;
pass2:
    *ptr=oldpass2;
    goto memo_fail;
success2:
    *ptr=oldpass2;
    it=_autovar_10;
    __result=it;;
    memo_add(ptr->mem,113,ptr->src,oldpos,it,ptr->pos);
    return it;
memo_fail:
    memo_add(ptr->mem,113,ptr->src,oldpos,failobj,ptr->pos);
    return failobj;

    return it;
fail:
    return failobj;
}
VALUE Dataflow_switch(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_ary,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))) {
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
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
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
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Dataflow_Switch_O_5445,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 1/*Switch_Char*/:
    case 2/*Switch_Clas*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        __result=it;;
        break;
    case 3/*Object*/:
        ;
        goto fail;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Dataflow_traverse(VALUE self ) {
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
    it=rb_funcall(self,sy_Dataflow__lp_src_dot_cla_e144,1,bind2);
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
        it=Dataflow_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Dataflow_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Dataflow_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_5,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Dataflow_visit(self );
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
        it=Dataflow_traverse(self );
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
        it=Dataflow_visit(self );
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
            it=Dataflow_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Dataflow_visit(self );
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
VALUE Dataflow_vars_in(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_ary,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_autovar_16,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _ary=it;;
    bind_aset(bind2,1,_ary);
    it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__eq__fe02,1,bind2);
    _ary=bind_aget(bind2,1);;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
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
            it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2);
            _autovar_2=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_autovar_2);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
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
        case 1/*Args*/:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
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
            it=Dataflow_vars_in(self );
            _autovar_4=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_autovar_4);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _ary=bind_aget(bind2,1);;
            _autovar_4=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            goto success2;
pass2:
            *ptr=oldpass2;
            goto alt2_2;
success2:
            *ptr=oldpass2;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_3);
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept2;
alt2_4:
            ptr->pos=oldpos2;
            goto fail;
accept2:
            ;
            break;
        case 2/*Bind*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
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
            it=Dataflow_vars_in(self );
            _autovar_6=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_autovar_6);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _ary=bind_aget(bind2,1);;
            _autovar_6=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass3;
            goto success3;
pass3:
            *ptr=oldpass3;
            goto alt3_2;
success3:
            *ptr=oldpass3;

            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            it=AmethystCore_anything(self );
            FAILTEST(alt3_3);
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            stop1=1;
            ;
            goto accept3;
alt3_4:
            ptr->pos=oldpos3;
            goto fail;
accept3:
            ;
            break;
        case 3/*CAct*/:
            ;
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
                else  ary=rb_funcall(ptr->src,s_to_a,0);
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2);
            _autovar_8=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_autovar_8);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _ary=bind_aget(bind2,1);;
            _autovar_8=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass4;
            goto success4;
pass4:
            *ptr=oldpass4;
            goto alt4_2;
success4:
            *ptr=oldpass4;

            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=AmethystCore_anything(self );
            FAILTEST(alt4_3);
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            stop1=1;
            ;
            goto accept4;
alt4_4:
            ptr->pos=oldpos4;
            goto fail;
accept4:
            ;
            break;
        case 4/*Global*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
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
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2);
            _autovar_10=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_autovar_10);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _ary=bind_aget(bind2,1);;
            _autovar_10=bind_aget(bind2,2);;
            it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind2);
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass5;
            goto success5;
pass5:
            *ptr=oldpass5;
            goto alt5_2;
success5:
            *ptr=oldpass5;

            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=AmethystCore_anything(self );
            FAILTEST(alt5_3);
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            stop1=1;
            ;
            goto accept5;
alt5_4:
            ptr->pos=oldpos5;
            goto fail;
accept5:
            ;
            break;
        case 5/*Key*/:
            ;
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
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
            it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2);
            _autovar_12=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_autovar_12);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _ary=bind_aget(bind2,1);;
            _autovar_12=bind_aget(bind2,2);;
            it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind2);
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass6;
            goto success6;
pass6:
            *ptr=oldpass6;
            goto alt6_2;
success6:
            *ptr=oldpass6;

            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            it=AmethystCore_anything(self );
            FAILTEST(alt6_3);
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept6;
alt6_4:
            ptr->pos=oldpos6;
            goto fail;
accept6:
            ;
            break;
        case 6/*Local*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
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
            it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2);
            _autovar_14=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_autovar_14);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _ary=bind_aget(bind2,1);;
            _autovar_14=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass7;
            goto success7;
pass7:
            *ptr=oldpass7;
            goto alt7_2;
success7:
            *ptr=oldpass7;

            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            it=AmethystCore_anything(self );
            FAILTEST(alt7_3);
            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            stop1=1;
            ;
            goto accept7;
alt7_4:
            ptr->pos=oldpos7;
            goto fail;
accept7:
            ;
            break;
        case 7/*Result*/:
            ;
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_15=it;;
            cstruct oldpass8=*ptr;
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
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2);
            _autovar_16=it;;
            bind_aset(bind2,1,_ary);
            bind_aset(bind2,2,_autovar_16);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _ary=bind_aget(bind2,1);;
            _autovar_16=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto alt8_2;
success8:
            *ptr=oldpass8;

            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            it=AmethystCore_anything(self );
            FAILTEST(alt8_3);
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            stop1=1;
            ;
            goto accept8;
alt8_4:
            ptr->pos=oldpos8;
            goto fail;
accept8:
            ;
            break;
        case 8/*Object*/:
            ;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt9_2);
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            stop1=1;
            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            goto fail;
accept9:
            ;
            break;
        }
    }
    bind_aset(bind2,1,_ary);
    it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb_,1,bind2);
    _ary=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Dataflow_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_t,_act,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_var,_autovar_8,__result,_autovar_9,_autovar_10,_autovar_11,_app,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_autovar_19,_autovar_20,_autovar_21,_old,_autovar_22,_autovar_23,_autovar_24,_autovar_25,_prev,_autovar_26,_autovar_27,_autovar_28,_autovar_29,_alts,_join,_autovar_30,_pred,_a,_autovar_31,_autovar_32,_autovar_33,_autovar_34,_to,_autovar_35,_autovar_36,_autovar_37,_autovar_38,_autovar_39,_autovar_40,_autovar_41,_autovar_42,_autovar_43;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))) {
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
        it=rb_ary_new3(0);
        _autovar_2=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=Dataflow_traverse_item(self );
            FAILTEST(alt1_2);
            _autovar_3=it;;
            bind_aset(bind2,1,_autovar_2);
            bind_aset(bind2,2,_autovar_3);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
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
        _t=it;;
        bind_aset(bind2,1,_t);
        it=rb_funcall(self,sy_Dataflow_Act_lb_bind_7d8f,1,bind2);
        _t=bind_aget(bind2,1);;
        _act=it;;
        bind_aset(bind2,1,_act);
        it=rb_funcall(self,sy_Dataflow__at_marked_lt__d910,1,bind2);
        _act=bind_aget(bind2,1);;
        bind_aset(bind2,1,_act);
        it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__dbae,1,bind2);
        _act=bind_aget(bind2,1);;
        _autovar_4=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_4;
        ptr->len=1;
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
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
        it=Dataflow_vars_in(self );
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto pass2;
success3:
        *ptr=oldpass3;
        it=_autovar_6;
        _autovar_7=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto pass1;
success2:
        *ptr=oldpass2;
        it=_autovar_7;
        _var=it;;
        bind_aset(bind2,1,_var);
        bind_aset(bind2,2,_act);
        it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__9da9,1,bind2);
        _var=bind_aget(bind2,1);;
        _act=bind_aget(bind2,2);;
        _autovar_8=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=_autovar_8;
        __result=it;;
        break;
    case 1/*Apply*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
        it=rb_ary_new3(0);
        _autovar_10=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=Dataflow_traverse_item(self );
            FAILTEST(alt2_2);
            _autovar_11=it;;
            bind_aset(bind2,1,_autovar_10);
            bind_aset(bind2,2,_autovar_11);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _autovar_10=bind_aget(bind2,1);;
            _autovar_11=bind_aget(bind2,2);;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop2=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto pass4;
accept2:
            ;
        }
        it=_autovar_10;
        _t=it;;
        bind_aset(bind2,1,_t);
        it=rb_funcall(self,sy_Dataflow_Apply_lb__ti__lp__753f,1,bind2);
        _t=bind_aget(bind2,1);;
        _app=it;;
        it=_app;
        _autovar_12=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_12;
        ptr->len=1;
        it=AmethystCore_anything(self );
        FAILTEST(pass5);
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
        it=Dataflow_vars_in(self );
        _var=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto pass5;
success6:
        *ptr=oldpass6;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto pass4;
success5:
        *ptr=oldpass5;
        bind_aset(bind2,1,_var);
        it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__ce70,1,bind2);
        _var=bind_aget(bind2,1);;
        it=_app;
        _autovar_14=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto fail;
success4:
        *ptr=oldpass4;
        it=_autovar_14;
        __result=it;;
        break;
    case 2/*Bind*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        ptr->pos=ptr->len;
        it=Dataflow_traverse(self );
        FAILTEST(pass7);
        _autovar_16=it;;
        cstruct oldpass8=*ptr;
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
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Dataflow_bind_end_6e13,1,bind2);
        _autovar_17=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass8;
        goto success8;
pass8:
        *ptr=oldpass8;
        goto pass7;
success8:
        *ptr=oldpass8;
        it=_autovar_17;
        _autovar_18=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto fail;
success7:
        *ptr=oldpass7;
        it=_autovar_18;
        __result=it;;
        break;
    case 3/*Local*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_19=it;;
        cstruct oldpass9=*ptr;
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
        it=rb_funcall(self,sy_Dataflow_ssanum_lp_s_3920,1,bind2);
        _autovar_20=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass9;
        goto success9;
pass9:
        *ptr=oldpass9;
        goto fail;
success9:
        *ptr=oldpass9;
        it=_autovar_20;
        __result=it;;
        break;
    case 4/*Lookahead*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_21=it;;
        cstruct oldpass10=*ptr;
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
        it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind2);
        _old=it;;
        it=rb_ary_new3(0);
        _autovar_22=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=Dataflow_traverse_item(self );
            FAILTEST(alt3_2);
            _autovar_23=it;;
            bind_aset(bind2,1,_autovar_22);
            bind_aset(bind2,2,_autovar_23);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _autovar_22=bind_aget(bind2,1);;
            _autovar_23=bind_aget(bind2,2);;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            stop3=1;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto pass10;
accept3:
            ;
        }
        it=_autovar_22;
        _t=it;;
        bind_aset(bind2,1,_old);
        it=rb_funcall(self,sy_Dataflow__at_oldssan_e953,1,bind2);
        _old=bind_aget(bind2,1);;
        bind_aset(bind2,1,_t);
        it=rb_funcall(self,sy_Dataflow_Lookahea_2972,1,bind2);
        _t=bind_aget(bind2,1);;
        _autovar_24=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass10;
        goto success10;
pass10:
        *ptr=oldpass10;
        goto fail;
success10:
        *ptr=oldpass10;
        it=_autovar_24;
        __result=it;;
        break;
    case 5/*Many*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_25=it;;
        cstruct oldpass11=*ptr;
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
        it=rb_funcall(self,sy_Dataflow_ssanums_dot__ae08,1,bind2);
        _prev=it;;
        it=rb_ary_new3(0);
        _autovar_26=it;;
        int stop4=0;
        while(!stop4) {
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=Dataflow_traverse_item(self );
            FAILTEST(alt4_2);
            _autovar_27=it;;
            bind_aset(bind2,1,_autovar_26);
            bind_aset(bind2,2,_autovar_27);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _autovar_26=bind_aget(bind2,1);;
            _autovar_27=bind_aget(bind2,2);;
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            stop4=1;
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            goto pass11;
accept4:
            ;
        }
        it=_autovar_26;
        _t=it;;
        bind_aset(bind2,1,_prev);
        it=rb_funcall(self,sy_Dataflow_many_end_0563,1,bind2);
        _prev=bind_aget(bind2,1);;
        bind_aset(bind2,1,_t);
        it=rb_funcall(self,sy_Dataflow_Many_dot_cre_2107,1,bind2);
        _t=bind_aget(bind2,1);;
        _autovar_28=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass11;
        goto success11;
pass11:
        *ptr=oldpass11;
        goto fail;
success11:
        *ptr=oldpass11;
        it=_autovar_28;
        __result=it;;
        break;
    case 6/*Or*/:
    case 7/*Switch_Char*/:
    case 8/*Switch_Clas*/:
        ;
        it=Dataflow_switch(self );
        FAILTEST(fail);
        _autovar_29=it;;
        cstruct oldpass12=*ptr;
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
        _alts=it;;
        it=rb_ary_new3(0);
        _join=it;;
        it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind2);
        _old=it;;
        int stop5=0;
        while(!stop5) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            bind_aset(bind2,1,_old);
            it=rb_funcall(self,sy_Dataflow__at_oldssan_37c2,1,bind2);
            _old=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            FAILTEST(alt5_2);
            _autovar_30=it;;
            cstruct oldpass13=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_30;
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
            FAILTEST(pass13);
            _pred=it;;
            it=Dataflow_traverse_item(self );
            FAILTEST(pass13);
            _a=it;;
            bind_aset(bind2,1,_alts);
            bind_aset(bind2,2,_pred);
            bind_aset(bind2,3,_a);
            it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__c37a,1,bind2);
            _alts=bind_aget(bind2,1);;
            _pred=bind_aget(bind2,2);;
            _a=bind_aget(bind2,3);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass13;
            goto success13;
pass13:
            *ptr=oldpass13;
            goto alt5_2;
success13:
            *ptr=oldpass13;
            bind_aset(bind2,1,_join);
            it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__eda2,1,bind2);
            _join=bind_aget(bind2,1);;
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            stop5=1;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            goto pass12;
accept5:
            ;
        }
        bind_aset(bind2,1,_join);
        it=rb_funcall(self,sy_Dataflow_or_end_lp_b_33b4,1,bind2);
        _join=bind_aget(bind2,1);;
        bind_aset(bind2,1,_alts);
        it=rb_funcall(self,sy_Dataflow_src_dot_clas_68f9,1,bind2);
        _alts=bind_aget(bind2,1);;
        _autovar_31=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass12;
        goto success12;
pass12:
        *ptr=oldpass12;
        goto fail;
success12:
        *ptr=oldpass12;
        it=_autovar_31;
        __result=it;;
        break;
    case 9/*Pass*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_32=it;;
        cstruct oldpass14=*ptr;
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
        it=rb_funcall(self,sy_Dataflow_src_dot_to_5e99,1,bind2);
        _autovar_33=it;;
        cstruct oldpass15=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_33;
        ptr->len=1;
        it=Dataflow_traverse_item(self );
        FAILTEST(pass15);
        _autovar_34=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass15;
        goto success15;
pass15:
        *ptr=oldpass15;
        goto pass14;
success15:
        *ptr=oldpass15;
        it=_autovar_34;
        _to=it;;
        it=rb_funcall(self,sy_Dataflow_src_dot_var_3a88,1,bind2);
        _autovar_35=it;;
        cstruct oldpass16=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_35;
        ptr->len=1;
        it=Dataflow_traverse_item(self );
        FAILTEST(pass16);
        _autovar_36=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass16;
        goto success16;
pass16:
        *ptr=oldpass16;
        goto pass14;
success16:
        *ptr=oldpass16;
        it=_autovar_36;
        _var=it;;
        bind_aset(bind2,1,_var);
        it=rb_funcall(self,sy_Dataflow__at_marked_lt__f9b9,1,bind2);
        _var=bind_aget(bind2,1);;
        bind_aset(bind2,1,_to);
        bind_aset(bind2,2,_var);
        it=rb_funcall(self,sy_Dataflow_Pass_dot_cre_5b5c,1,bind2);
        _to=bind_aget(bind2,1);;
        _var=bind_aget(bind2,2);;
        _autovar_37=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass14;
        goto success14;
pass14:
        *ptr=oldpass14;
        goto fail;
success14:
        *ptr=oldpass14;
        it=_autovar_37;
        __result=it;;
        break;
    case 10/*Result*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_38=it;;
        cstruct oldpass17=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_38;
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
        it=rb_funcall(self,sy_Dataflow_src_dot_vars_2db1,1,bind2);
        _autovar_39=it;;
        cstruct oldpass18=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_39;
        ptr->len=1;
        it=AmethystCore_anything(self );
        FAILTEST(pass18);
        _autovar_40=it;;
        cstruct oldpass19=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_40;
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
        _autovar_41=it;;
        int stop6=0;
        while(!stop6) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=Dataflow_traverse_item(self );
            FAILTEST(alt6_2);
            _autovar_42=it;;
            bind_aset(bind2,1,_autovar_41);
            bind_aset(bind2,2,_autovar_42);
            it=rb_funcall(self,sy_Dataflow__append_lp__d113,1,bind2);
            _autovar_41=bind_aget(bind2,1);;
            _autovar_42=bind_aget(bind2,2);;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop6=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto pass19;
accept6:
            ;
        }
        it=_autovar_41;
        _var=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass19;
        goto success19;
pass19:
        *ptr=oldpass19;
        goto pass18;
success19:
        *ptr=oldpass19;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass18;
        goto success18;
pass18:
        *ptr=oldpass18;
        goto pass17;
success18:
        *ptr=oldpass18;
        bind_aset(bind2,1,_var);
        it=rb_funcall(self,sy_Dataflow_n_eq_Result_d8be,1,bind2);
        _var=bind_aget(bind2,1);;
        _autovar_43=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass17;
        goto success17;
pass17:
        *ptr=oldpass17;
        goto fail;
success17:
        *ptr=oldpass17;
        it=_autovar_43;
        __result=it;;
        break;
    case 11/*Object*/:
        ;
        goto fail;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE cls_Dead_Code_Deleter3;
VALUE AmethystCore_anything(VALUE self );
VALUE Dead_Code_Deleter3_root(VALUE self );
VALUE Dead_Code_Deleter3_traverse(VALUE self );
VALUE Dead_Code_Deleter3_traverse_item(VALUE self );
VALUE Dead_Code_Deleter3_visit(VALUE self );
VALUE switchhash_Dead_Code_Deleter3_1;
VALUE switchhash_Dead_Code_Deleter3_2;
VALUE switchhash_Dead_Code_Deleter3_3;
static VALUE sy_Dead_Code_Deleter3__at_bounded_6bb2;
static VALUE sy_Dead_Code_Deleter3__at_bounded_7c82;
static VALUE sy_Dead_Code_Deleter3__at_reachab_005c;
static VALUE sy_Dead_Code_Deleter3__at_reachab_725b;
static VALUE sy_Dead_Code_Deleter3__at_reachab_8588;
static VALUE sy_Dead_Code_Deleter3__lp_;
static VALUE sy_Dead_Code_Deleter3__lp_src_dot_cla_e144;
static VALUE sy_Dead_Code_Deleter3_bind_lb_1_rb__lt__7b20;
static VALUE sy_Dead_Code_Deleter3_bind_lb_1_rb__sp__6af0;
static VALUE sy_Dead_Code_Deleter3_if_sp_bind_lb__1bed;
static VALUE sy_Dead_Code_Deleter3_src_25d9;
static VALUE sy_Dead_Code_Deleter3_src_dot_dup_d768;
static VALUE sy_Dead_Code_Deleter3_src_dot_reac_cd39;
VALUE profile_report_Dead_Code_Deleter3(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if(ptr->mem) {} return Qnil;
}
VALUE Dead_Code_Deleter3_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Dead_Code_Deleter3_src_dot_dup_d768,1,bind2);
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_1,rb_obj_class(ame_curobj2(ptr))))) {
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
    it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_8588,1,bind2);
    it=rb_funcall(self,sy_Dead_Code_Deleter3_src_dot_reac_cd39,1,bind2);
    it=Dead_Code_Deleter3_traverse(self );
    FAILTEST(pass2);
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
VALUE Dead_Code_Deleter3_traverse(VALUE self ) {
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
    it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_src_dot_cla_e144,1,bind2);
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
        it=Dead_Code_Deleter3_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Dead_Code_Deleter3_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Dead_Code_Deleter3_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Dead_Code_Deleter3_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Dead_Code_Deleter3_visit(self );
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
        it=Dead_Code_Deleter3_traverse(self );
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
        it=Dead_Code_Deleter3_visit(self );
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
            it=Dead_Code_Deleter3_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Dead_Code_Deleter3_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Dead_Code_Deleter3_visit(self );
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
VALUE Dead_Code_Deleter3_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_this,__result,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Dead_Code_Deleter3_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
    case 1/*CAct*/:
    case 2/*Result*/:
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
        it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2);
        _this=it;;
        ptr->pos=ptr->len;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_this);
        it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_,1,bind2);
        _this=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 3/*Apply*/:
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
        it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2);
        _autovar_3=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto fail;
success2:
        *ptr=oldpass2;
        it=_autovar_3;
        __result=it;;
        break;
    case 4/*Bind*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
        it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2);
        it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded_6bb2,1,bind2);
        it=Dead_Code_Deleter3_traverse(self );
        FAILTEST(pass3);
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded_7c82,1,bind2);
        it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_005c,1,bind2);
        _autovar_6=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto pass3;
success4:
        *ptr=oldpass4;
        it=_autovar_6;
        _autovar_7=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto fail;
success3:
        *ptr=oldpass3;
        it=_autovar_7;
        __result=it;;
        break;
    case 5/*Local*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_8=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_8;
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
        it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind2);
        _this=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto fail;
success5:
        *ptr=oldpass5;
        bind_aset(bind2,1,_this);
        it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_725b,1,bind2);
        _this=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 6/*Object*/:
        ;
        goto fail;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE cls_Forget_SSA;
VALUE AmethystCore_anything(VALUE self );
VALUE Forget_SSA_root(VALUE self );
VALUE Forget_SSA_traverse(VALUE self );
VALUE Forget_SSA_traverse_item(VALUE self );
VALUE Forget_SSA_visit(VALUE self );
VALUE switchhash_Forget_SSA_1;
VALUE switchhash_Forget_SSA_2;
VALUE switchhash_Forget_SSA_3;
static VALUE sy_Forget_SSA__lp_src_dot_cla_e144;
static VALUE sy_Forget_SSA_bind_lb_1_rb__lt__7b20;
static VALUE sy_Forget_SSA_bind_lb_1_rb__sp__6af0;
static VALUE sy_Forget_SSA_if_sp_bind_lb__1bed;
static VALUE sy_Forget_SSA_src_25d9;
static VALUE sy_Forget_SSA_src_dot_unss_5845;

memo_struct *mem_Forget_SSA=NULL;
VALUE memo_val_Forget_SSA;
VALUE profile_report_Forget_SSA(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if(ptr->mem) {
        fprintf(profile_report,"memo Forget_SSA::traverse hit: %i miss: %i\n",((memo_struct *)ptr->mem)->hits[113],((memo_struct *)ptr->mem)->miss[113]);
        ((memo_struct *)ptr->mem)->hits[113]=0;
        ((memo_struct *)ptr->mem)->miss[113]=0;
    }
    return Qnil;
}
VALUE Forget_SSA_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Forget_SSA_src_25d9,1,bind2);
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_1,rb_obj_class(ame_curobj2(ptr))))) {
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
    it=Forget_SSA_traverse(self );
    FAILTEST(pass2);
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
VALUE Forget_SSA_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    if (ptr->mem==NULL) {
        ptr->mem=mem_Forget_SSA;
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
    it=rb_funcall(self,sy_Forget_SSA__lp_src_dot_cla_e144,1,bind2);
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
        it=Forget_SSA_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Forget_SSA_bind_lb_1_rb__sp__6af0,1,bind2);
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
    goto memo_fail;
success1:
    *ptr=oldpass1;
    bind_aset(bind2,1,_ivars);
    bind_aset(bind2,2,_nvars);
    it=rb_funcall(self,sy_Forget_SSA_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;
    memo_add(ptr->mem,113,ptr->src,oldpos,it,ptr->pos);
    return it;
memo_fail:
    memo_add(ptr->mem,113,ptr->src,oldpos,failobj,ptr->pos);
    return failobj;

    return it;
fail:
    return failobj;
}
VALUE Forget_SSA_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Forget_SSA_visit(self );
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
        it=Forget_SSA_traverse(self );
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
        it=Forget_SSA_visit(self );
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
            it=Forget_SSA_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Forget_SSA_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Forget_SSA_visit(self );
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
VALUE Forget_SSA_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Forget_SSA_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Local*/:
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
        it=rb_funcall(self,sy_Forget_SSA_src_dot_unss_5845,1,bind2);
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
void Init_dataflow_ssa_c() {
    cls_Dataflow=rb_define_class("Dataflow",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    mem_Dataflow=memo_init();
    memo_val_Dataflow=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_Dataflow);
    rb_global_variable(&memo_val_Dataflow);
    rb_define_method(cls_Dataflow,"profile_report",profile_report_Dataflow,0);
    switchhash_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Dataflow_1);;
    switchhash_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Switch_Char\nnext h[k]=8 if k<=Switch_Clas\nnext h[k]=9 if k<=Pass\nnext h[k]=10 if k<=Result\nnext h[k]=11 if k<=Object\n}");
    rb_global_variable(&switchhash_Dataflow_2);;
    switchhash_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Args\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Global\nnext h[k]=5 if k<=Key\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Object\n}");
    rb_global_variable(&switchhash_Dataflow_3);;
    switchhash_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Switch_Char\nnext h[k]=2 if k<=Switch_Clas\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Dataflow_4);;
    switchhash_Dataflow_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Dataflow_5);;
    sy_Dataflow_Act_lb_bind_7d8f=rb_intern("Dataflow_Act_lb_bind_7d8f");
    sy_Dataflow_Apply_lb__ti__lp__753f=rb_intern("Dataflow_Apply_lb__ti__lp__753f");
    sy_Dataflow_Lookahea_2972=rb_intern("Dataflow_Lookahea_2972");
    sy_Dataflow_Many_dot_cre_2107=rb_intern("Dataflow_Many_dot_cre_2107");
    sy_Dataflow_Pass_dot_cre_5b5c=rb_intern("Dataflow_Pass_dot_cre_5b5c");
    sy_Dataflow_Seq_lb_src_dot__6f68=rb_intern("Dataflow_Seq_lb_src_dot__6f68");
    sy_Dataflow_Switch_O_5445=rb_intern("Dataflow_Switch_O_5445");
    sy_Dataflow__append_lp__d113=rb_intern("Dataflow__append_lp__d113");
    sy_Dataflow__at_bnding_eq__b94a=rb_intern("Dataflow__at_bnding_eq__b94a");
    sy_Dataflow__at_marked_lt__59bb=rb_intern("Dataflow__at_marked_lt__59bb");
    sy_Dataflow__at_marked_lt__d910=rb_intern("Dataflow__at_marked_lt__d910");
    sy_Dataflow__at_marked_lt__f9b9=rb_intern("Dataflow__at_marked_lt__f9b9");
    sy_Dataflow__at_oldssan_37c2=rb_intern("Dataflow__at_oldssan_37c2");
    sy_Dataflow__at_oldssan_e953=rb_intern("Dataflow__at_oldssan_e953");
    sy_Dataflow__lp_src_dot_cla_e144=rb_intern("Dataflow__lp_src_dot_cla_e144");
    sy_Dataflow_bind_end_6e13=rb_intern("Dataflow_bind_end_6e13");
    sy_Dataflow_bind_lb_1_rb_=rb_intern("Dataflow_bind_lb_1_rb_");
    sy_Dataflow_bind_lb_1_rb__dot__6099=rb_intern("Dataflow_bind_lb_1_rb__dot__6099");
    sy_Dataflow_bind_lb_1_rb__dot__9da9=rb_intern("Dataflow_bind_lb_1_rb__dot__9da9");
    sy_Dataflow_bind_lb_1_rb__dot__ce70=rb_intern("Dataflow_bind_lb_1_rb__dot__ce70");
    sy_Dataflow_bind_lb_1_rb__dot__dbae=rb_intern("Dataflow_bind_lb_1_rb__dot__dbae");
    sy_Dataflow_bind_lb_1_rb__eq__fe02=rb_intern("Dataflow_bind_lb_1_rb__eq__fe02");
    sy_Dataflow_bind_lb_1_rb__lt__7b20=rb_intern("Dataflow_bind_lb_1_rb__lt__7b20");
    sy_Dataflow_bind_lb_1_rb__lt__c37a=rb_intern("Dataflow_bind_lb_1_rb__lt__c37a");
    sy_Dataflow_bind_lb_1_rb__lt__eda2=rb_intern("Dataflow_bind_lb_1_rb__lt__eda2");
    sy_Dataflow_bind_lb_1_rb__sp__6af0=rb_intern("Dataflow_bind_lb_1_rb__sp__6af0");
    sy_Dataflow_if_sp_bind_lb__1bed=rb_intern("Dataflow_if_sp_bind_lb__1bed");
    sy_Dataflow_many_end_0563=rb_intern("Dataflow_many_end_0563");
    sy_Dataflow_n_eq_Result_d8be=rb_intern("Dataflow_n_eq_Result_d8be");
    sy_Dataflow_oldssanu_073d=rb_intern("Dataflow_oldssanu_073d");
    sy_Dataflow_or_end_lp_b_33b4=rb_intern("Dataflow_or_end_lp_b_33b4");
    sy_Dataflow_src_25d9=rb_intern("Dataflow_src_25d9");
    sy_Dataflow_src_dot_args_2df5=rb_intern("Dataflow_src_dot_args_2df5");
    sy_Dataflow_src_dot_body_b7c1=rb_intern("Dataflow_src_dot_body_b7c1");
    sy_Dataflow_src_dot_clas_68f9=rb_intern("Dataflow_src_dot_clas_68f9");
    sy_Dataflow_src_dot_dup_d768=rb_intern("Dataflow_src_dot_dup_d768");
    sy_Dataflow_src_dot_free_3d49=rb_intern("Dataflow_src_dot_free_3d49");
    sy_Dataflow_src_dot_reac_9ae4=rb_intern("Dataflow_src_dot_reac_9ae4");
    sy_Dataflow_src_dot_to_5e99=rb_intern("Dataflow_src_dot_to_5e99");
    sy_Dataflow_src_dot_var_3a88=rb_intern("Dataflow_src_dot_var_3a88");
    sy_Dataflow_src_dot_vars_2db1=rb_intern("Dataflow_src_dot_vars_2db1");
    sy_Dataflow_ssanum_lp_s_3920=rb_intern("Dataflow_ssanum_lp_s_3920");
    sy_Dataflow_ssanums_dot__ae08=rb_intern("Dataflow_ssanums_dot__ae08");
    rb_define_method(cls_Dataflow,"root",Dataflow_root,0);
    rb_define_method(cls_Dataflow,"switch",Dataflow_switch,0);
    rb_define_method(cls_Dataflow,"traverse",Dataflow_traverse,0);
    rb_define_method(cls_Dataflow,"traverse_item",Dataflow_traverse_item,0);
    rb_define_method(cls_Dataflow,"vars_in",Dataflow_vars_in,0);
    rb_define_method(cls_Dataflow,"visit",Dataflow_visit,0);

    cls_Dead_Code_Deleter3=rb_define_class("Dead_Code_Deleter3",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Dead_Code_Deleter3,"profile_report",profile_report_Dead_Code_Deleter3,0);
    switchhash_Dead_Code_Deleter3_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Dead_Code_Deleter3_1);;
    switchhash_Dead_Code_Deleter3_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Result\nnext h[k]=3 if k<=Apply\nnext h[k]=4 if k<=Bind\nnext h[k]=5 if k<=Local\nnext h[k]=6 if k<=Object\n}");
    rb_global_variable(&switchhash_Dead_Code_Deleter3_2);;
    switchhash_Dead_Code_Deleter3_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Dead_Code_Deleter3_3);;
    sy_Dead_Code_Deleter3__at_bounded_6bb2=rb_intern("Dead_Code_Deleter3__at_bounded_6bb2");
    sy_Dead_Code_Deleter3__at_bounded_7c82=rb_intern("Dead_Code_Deleter3__at_bounded_7c82");
    sy_Dead_Code_Deleter3__at_reachab_005c=rb_intern("Dead_Code_Deleter3__at_reachab_005c");
    sy_Dead_Code_Deleter3__at_reachab_725b=rb_intern("Dead_Code_Deleter3__at_reachab_725b");
    sy_Dead_Code_Deleter3__at_reachab_8588=rb_intern("Dead_Code_Deleter3__at_reachab_8588");
    sy_Dead_Code_Deleter3__lp_=rb_intern("Dead_Code_Deleter3__lp_");
    sy_Dead_Code_Deleter3__lp_src_dot_cla_e144=rb_intern("Dead_Code_Deleter3__lp_src_dot_cla_e144");
    sy_Dead_Code_Deleter3_bind_lb_1_rb__lt__7b20=rb_intern("Dead_Code_Deleter3_bind_lb_1_rb__lt__7b20");
    sy_Dead_Code_Deleter3_bind_lb_1_rb__sp__6af0=rb_intern("Dead_Code_Deleter3_bind_lb_1_rb__sp__6af0");
    sy_Dead_Code_Deleter3_if_sp_bind_lb__1bed=rb_intern("Dead_Code_Deleter3_if_sp_bind_lb__1bed");
    sy_Dead_Code_Deleter3_src_25d9=rb_intern("Dead_Code_Deleter3_src_25d9");
    sy_Dead_Code_Deleter3_src_dot_dup_d768=rb_intern("Dead_Code_Deleter3_src_dot_dup_d768");
    sy_Dead_Code_Deleter3_src_dot_reac_cd39=rb_intern("Dead_Code_Deleter3_src_dot_reac_cd39");
    rb_define_method(cls_Dead_Code_Deleter3,"root",Dead_Code_Deleter3_root,0);
    rb_define_method(cls_Dead_Code_Deleter3,"traverse",Dead_Code_Deleter3_traverse,0);
    rb_define_method(cls_Dead_Code_Deleter3,"traverse_item",Dead_Code_Deleter3_traverse_item,0);
    rb_define_method(cls_Dead_Code_Deleter3,"visit",Dead_Code_Deleter3_visit,0);

    cls_Forget_SSA=rb_define_class("Forget_SSA",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    mem_Forget_SSA=memo_init();
    memo_val_Forget_SSA=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_Forget_SSA);
    rb_global_variable(&memo_val_Forget_SSA);
    rb_define_method(cls_Forget_SSA,"profile_report",profile_report_Forget_SSA,0);
    switchhash_Forget_SSA_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Forget_SSA_1);;
    switchhash_Forget_SSA_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Forget_SSA_2);;
    switchhash_Forget_SSA_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Forget_SSA_3);;
    sy_Forget_SSA__lp_src_dot_cla_e144=rb_intern("Forget_SSA__lp_src_dot_cla_e144");
    sy_Forget_SSA_bind_lb_1_rb__lt__7b20=rb_intern("Forget_SSA_bind_lb_1_rb__lt__7b20");
    sy_Forget_SSA_bind_lb_1_rb__sp__6af0=rb_intern("Forget_SSA_bind_lb_1_rb__sp__6af0");
    sy_Forget_SSA_if_sp_bind_lb__1bed=rb_intern("Forget_SSA_if_sp_bind_lb__1bed");
    sy_Forget_SSA_src_25d9=rb_intern("Forget_SSA_src_25d9");
    sy_Forget_SSA_src_dot_unss_5845=rb_intern("Forget_SSA_src_dot_unss_5845");
    rb_define_method(cls_Forget_SSA,"root",Forget_SSA_root,0);
    rb_define_method(cls_Forget_SSA,"traverse",Forget_SSA_traverse,0);
    rb_define_method(cls_Forget_SSA,"traverse_item",Forget_SSA_traverse_item,0);
    rb_define_method(cls_Forget_SSA,"visit",Forget_SSA_visit,0);
    rb_eval_string("testversiondataflow_ssa('9f725d6d7aac16a6206c4be58d0180e1')");
}
