#include "cthyst.h"
VALUE cls_First_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE First_Dataflow_first(VALUE self );
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_root(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE switchhash_First_Dataflow_1;
static VALUE sy_First_Dataflow_Compiler_558e;
static VALUE sy_First_Dataflow__append_lp__d113;
static VALUE sy_First_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_First_Dataflow__d41d;
static VALUE sy_First_Dataflow__lp_;
static VALUE sy_First_Dataflow__lp_Compile_7f7b;
static VALUE sy_First_Dataflow_bind_lb_1_rb_;
static VALUE sy_First_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_First_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_First_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_First_Dataflow_depends_lp__7463;
static VALUE sy_First_Dataflow_lattice_dot__5a9e;
static VALUE sy_First_Dataflow_lattice_dot__b0f6;
static VALUE sy_analyze;
VALUE First_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_name,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_val,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_vals,_autovar_14,_el,_autovar_15,_autovar_16,_nev,_autovar_17,_autovar_18,_autovar_19,_p,_v,_autovar_20;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_First_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
    case 1/*CAct*/:
    case 2/*Cut*/:
    case 3/*Local*/:
    case 4/*Lookahead*/:
    case 5/*Pass*/:
    case 6/*Result*/:
    case 7/*Stop*/:
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
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind2);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 8/*Apply*/:
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
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_First_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        FAILTEST(pass2);
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_First_Dataflow_Compiler_558e,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_4;
        ptr->len=1;
        it=First_Dataflow_value(self );
        FAILTEST(pass3);
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
        goto alt2_2;
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 9/*Bind*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass4);
        _autovar_8=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt3_2;
success4:
        *ptr=oldpass4;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        FAILTEST(alt3_3);
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto fail;
accept3:
        ;
        break;
    case 10/*Many*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass5);
        _val=it;;
        bind_aset(bind2,1,_val);
        it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb_,1,bind2);
        _val=bind_aget(bind2,1);;
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto alt4_2;
success5:
        *ptr=oldpass5;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        FAILTEST(alt4_3);
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto fail;
accept4:
        ;
        break;
    case 11/*Or*/:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
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
        it=rb_ary_new3(0);
        _autovar_12=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=First_Dataflow_value(self );
            FAILTEST(alt6_2);
            _autovar_13=it;;
            bind_aset(bind2,1,_autovar_12);
            bind_aset(bind2,2,_autovar_13);
            it=rb_funcall(self,sy_First_Dataflow__append_lp__d113,1,bind2);
            _autovar_12=bind_aget(bind2,1);;
            _autovar_13=bind_aget(bind2,2);;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto pass6;
accept6:
            ;
        }
        it=_autovar_12;
        _vals=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto alt5_2;
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=AmethystCore_anything(self );
        FAILTEST(alt5_3);
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        goto fail;
accept5:
        ;
        break;
    case 12/*Seq*/:
        ;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind2);
        _val=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt8_2);
            _el=it;;
            it=_el;
            _autovar_15=it;;
            cstruct oldpass8=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_15;
            ptr->len=1;
            it=First_Dataflow_value(self );
            FAILTEST(pass8);
            _autovar_16=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto alt8_2;
success8:
            *ptr=oldpass8;
            it=_autovar_16;
            _nev=it;;
            bind_aset(bind2,1,_val);
            bind_aset(bind2,2,_nev);
            it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);
            _val=bind_aget(bind2,1);;
            _nev=bind_aget(bind2,2);;
            _val=it;;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_First_Dataflow__lp_,1,bind2);
            _el=bind_aget(bind2,1);;
            FAILTEST(alt9_2);
            ptr->pos=ptr->len;
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            it=rb_funcall(self,sy_First_Dataflow__d41d,1,bind2);
            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            goto alt8_2;
accept9:
            ;

            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            stop2=1;
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            goto pass7;
accept8:
            ;
        }
        it=_val;
        _autovar_17=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt7_2;
success7:
        *ptr=oldpass7;
        it=_autovar_17;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=AmethystCore_anything(self );
        FAILTEST(alt7_3);
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept7;
alt7_3:
        ptr->pos=oldpos7;
        goto fail;
accept7:
        ;
        break;
    case 13/*Switch*/:
        ;
        it=rb_ary_new3(0);
        _vals=it;;
        int oldpos10=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_18=it;;
        cstruct oldpass9=*ptr;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        int stop3=0;
        while(!stop3) {
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt11_2);
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
            it=AmethystCore_anything(self );
            FAILTEST(pass10);
            _p=it;;
            it=First_Dataflow_value(self );
            FAILTEST(pass10);
            _v=it;;
            bind_aset(bind2,1,_p);
            bind_aset(bind2,2,_v);
            it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);
            _p=bind_aget(bind2,1);;
            _v=bind_aget(bind2,2);;
            _autovar_20=it;;
            bind_aset(bind2,1,_vals);
            bind_aset(bind2,2,_autovar_20);
            it=rb_funcall(self,sy_First_Dataflow__append_lp__d113,1,bind2);
            _vals=bind_aget(bind2,1);;
            _autovar_20=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            goto success10;
pass10:
            *ptr=oldpass10;
            goto alt11_2;
success10:
            *ptr=oldpass10;

            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            stop3=1;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            goto pass9;
accept11:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass9;
        goto success9;
pass9:
        *ptr=oldpass9;
        goto alt10_2;
success9:
        *ptr=oldpass9;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_First_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept10;
alt10_2:
        ptr->pos=oldpos10;
        it=AmethystCore_anything(self );
        FAILTEST(alt10_3);
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept10;
alt10_3:
        ptr->pos=oldpos10;
        goto fail;
accept10:
        ;
        break;
    case 14/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(fail);
        it=rb_funcall(self,sy_First_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _v=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_First_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=First_Dataflow_first(self );
    FAILTEST(pass1);
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

    return it;
fail:
    return failobj;
}
VALUE First_Dataflow_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_x,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _x=it;;
    it=_x;
    arg0=it;
    it=rb_funcall(self,sy_analyze,1,arg0);
    FAILTEST(fail);
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE First_Dataflow_value(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_x,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _x=it;;
    bind_aset(bind2,1,_x);
    it=rb_funcall(self,sy_First_Dataflow_depends_lp__7463,1,bind2);
    _x=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE cls_Minsize_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Minsize_Dataflow_first(VALUE self );
VALUE Minsize_Dataflow_first_Minsize_Dataflow(VALUE self );
VALUE Minsize_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Minsize_Dataflow_1;
VALUE switchhash_Minsize_Dataflow_2;
VALUE switchhash_Minsize_Dataflow_3;
static VALUE sy_Minsize_Dataflow_Compiler_558e;
static VALUE sy_Minsize_Dataflow__append_lp__d113;
static VALUE sy_Minsize_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Minsize_Dataflow__d41d;
static VALUE sy_Minsize_Dataflow__lp_;
static VALUE sy_Minsize_Dataflow__lp_Compile_7f7b;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb_;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Minsize_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Minsize_Dataflow_lattice_dot__5a9e;
static VALUE sy_Minsize_Dataflow_lattice_dot__b0f6;
static VALUE sy_Minsize_Dataflow_lattice_dot__e0e5;
static VALUE sy_Minsize_Dataflow_lattice_lb__bbba;
static VALUE sy_Minsize_Dataflow_lattice_lb__fdee;
VALUE Minsize_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_str,_autovar_7,_autovar_8,_autovar_9,_autovar_10,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        FAILTEST(pass1);
        _autovar_2=it;;
        it=_autovar_2;
        _autovar_3=it;;
        switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=_autovar_3;
            _autovar_4=it;;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=_autovar_4;
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
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                goto pass2;
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else goto pass2;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            goto success2;
pass2:
            *ptr=oldpass2;
            goto alt2_2;
success2:
            *ptr=oldpass2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_6=it;;
            cstruct oldpass3=*ptr;
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
            it=AmethystCore_anything(self );
            FAILTEST(pass3);
            _str=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass3;
            goto success3;
pass3:
            *ptr=oldpass3;
            goto alt2_2;
success3:
            *ptr=oldpass3;
            bind_aset(bind2,1,_str);
            it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__bbba,1,bind2);
            _str=bind_aget(bind2,1);;
            _autovar_7=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=_autovar_4;
            _autovar_8=it;;
            cstruct oldpass4=*ptr;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... 'b':
                ;
            case 'd' ... 'q':
                ;
            case 's' ... UC(255):
                ;
                goto pass4;
                break;
            case 'r' ... 'r':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4;
                else goto pass4;
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                else goto alt3_2;
                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
                else goto alt3_3;
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
                else goto alt3_4;
                ;
                goto accept3;
alt3_4:
                ptr->pos=oldpos3;
                goto pass4;
accept3:
                ;
                break;
            case 'c' ... 'c':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3;
                else goto pass4;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass4;
            goto success4;
pass4:
            *ptr=oldpass4;
            goto alt2_3;
success4:
            *ptr=oldpass4;
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__fdee,1,bind2);
            _autovar_7=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            it=_autovar_4;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... 'e':
                ;
            case 'g' ... UC(255):
                ;
                goto pass5;
                break;
            case 'f' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                else goto pass5;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass5;
            goto success5;
pass5:
            *ptr=oldpass5;
            goto alt2_4;
success5:
            *ptr=oldpass5;
            it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_7=it;;

            ;
            goto accept2;
alt2_4:
            ptr->pos=oldpos2;
            goto pass1;
accept2:
            ;
            break;
        case 1/*Object*/:
            ;
            it=_autovar_3;
            _autovar_10=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=_autovar_10;
            _autovar_5=it;;
            cstruct oldpass6=*ptr;
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
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                goto pass6;
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else goto pass6;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass6;
            goto success6;
pass6:
            *ptr=oldpass6;
            goto alt4_2;
success6:
            *ptr=oldpass6;
            goto alt4_2;
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=_autovar_10;
            _autovar_8=it;;
            cstruct oldpass7=*ptr;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... 'b':
                ;
            case 'd' ... 'q':
                ;
            case 's' ... UC(255):
                ;
                goto pass7;
                break;
            case 'r' ... 'r':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4;
                else goto pass7;
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                int oldpos5=ptr->pos;
                int cut5=0;
alt5_1:
                ;
                if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                else goto alt5_2;
                ;
                goto accept5;
alt5_2:
                ptr->pos=oldpos5;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
                else goto alt5_3;
                ;
                goto accept5;
alt5_3:
                ptr->pos=oldpos5;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
                else goto alt5_4;
                ;
                goto accept5;
alt5_4:
                ptr->pos=oldpos5;
                goto pass7;
accept5:
                ;
                break;
            case 'c' ... 'c':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3;
                else goto pass7;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass7;
            goto success7;
pass7:
            *ptr=oldpass7;
            goto alt4_3;
success7:
            *ptr=oldpass7;
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Minsize_Dataflow_lattice_lb__fdee,1,bind2);
            _autovar_7=it;;

            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            it=_autovar_10;
            _autovar_9=it;;
            cstruct oldpass8=*ptr;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... 'e':
                ;
            case 'g' ... UC(255):
                ;
                goto pass8;
                break;
            case 'f' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                else goto pass8;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto alt4_4;
success8:
            *ptr=oldpass8;
            it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_7=it;;

            ;
            goto accept4;
alt4_4:
            ptr->pos=oldpos4;
            goto pass1;
accept4:
            ;
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_7;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=Minsize_Dataflow_first_Minsize_Dataflow(self );
        FAILTEST(alt1_3);
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
        it=Minsize_Dataflow_first_Minsize_Dataflow(self );
        FAILTEST(fail);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Minsize_Dataflow_first_Minsize_Dataflow(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_name,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_val,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_vals,_autovar_14,_el,_autovar_15,_autovar_16,_nev,_autovar_17,_autovar_18,_autovar_19,_p,_v,_autovar_20;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Minsize_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
    case 1/*CAct*/:
    case 2/*Cut*/:
    case 3/*Local*/:
    case 4/*Lookahead*/:
    case 5/*Pass*/:
    case 6/*Result*/:
    case 7/*Stop*/:
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
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__5a9e,1,bind2);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 8/*Apply*/:
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
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Minsize_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        FAILTEST(pass2);
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Minsize_Dataflow_Compiler_558e,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_4;
        ptr->len=1;
        it=First_Dataflow_value(self );
        FAILTEST(pass3);
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
        goto alt2_2;
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 9/*Bind*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass4);
        _autovar_8=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt3_2;
success4:
        *ptr=oldpass4;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        FAILTEST(alt3_3);
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto fail;
accept3:
        ;
        break;
    case 10/*Many*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass5);
        _val=it;;
        bind_aset(bind2,1,_val);
        it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb_,1,bind2);
        _val=bind_aget(bind2,1);;
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto alt4_2;
success5:
        *ptr=oldpass5;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        FAILTEST(alt4_3);
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto fail;
accept4:
        ;
        break;
    case 11/*Or*/:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
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
        it=rb_ary_new3(0);
        _autovar_12=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=First_Dataflow_value(self );
            FAILTEST(alt6_2);
            _autovar_13=it;;
            bind_aset(bind2,1,_autovar_12);
            bind_aset(bind2,2,_autovar_13);
            it=rb_funcall(self,sy_Minsize_Dataflow__append_lp__d113,1,bind2);
            _autovar_12=bind_aget(bind2,1);;
            _autovar_13=bind_aget(bind2,2);;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto pass6;
accept6:
            ;
        }
        it=_autovar_12;
        _vals=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto alt5_2;
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=AmethystCore_anything(self );
        FAILTEST(alt5_3);
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        goto fail;
accept5:
        ;
        break;
    case 12/*Seq*/:
        ;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__5a9e,1,bind2);
        _val=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt8_2);
            _el=it;;
            it=_el;
            _autovar_15=it;;
            cstruct oldpass8=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_15;
            ptr->len=1;
            it=First_Dataflow_value(self );
            FAILTEST(pass8);
            _autovar_16=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto alt8_2;
success8:
            *ptr=oldpass8;
            it=_autovar_16;
            _nev=it;;
            bind_aset(bind2,1,_val);
            bind_aset(bind2,2,_nev);
            it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);
            _val=bind_aget(bind2,1);;
            _nev=bind_aget(bind2,2);;
            _val=it;;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Minsize_Dataflow__lp_,1,bind2);
            _el=bind_aget(bind2,1);;
            FAILTEST(alt9_2);
            ptr->pos=ptr->len;
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            it=rb_funcall(self,sy_Minsize_Dataflow__d41d,1,bind2);
            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            goto alt8_2;
accept9:
            ;

            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            stop2=1;
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            goto pass7;
accept8:
            ;
        }
        it=_val;
        _autovar_17=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt7_2;
success7:
        *ptr=oldpass7;
        it=_autovar_17;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=AmethystCore_anything(self );
        FAILTEST(alt7_3);
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept7;
alt7_3:
        ptr->pos=oldpos7;
        goto fail;
accept7:
        ;
        break;
    case 13/*Switch*/:
        ;
        it=rb_ary_new3(0);
        _vals=it;;
        int oldpos10=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_18=it;;
        cstruct oldpass9=*ptr;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        int stop3=0;
        while(!stop3) {
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt11_2);
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
            it=AmethystCore_anything(self );
            FAILTEST(pass10);
            _p=it;;
            it=First_Dataflow_value(self );
            FAILTEST(pass10);
            _v=it;;
            bind_aset(bind2,1,_p);
            bind_aset(bind2,2,_v);
            it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);
            _p=bind_aget(bind2,1);;
            _v=bind_aget(bind2,2);;
            _autovar_20=it;;
            bind_aset(bind2,1,_vals);
            bind_aset(bind2,2,_autovar_20);
            it=rb_funcall(self,sy_Minsize_Dataflow__append_lp__d113,1,bind2);
            _vals=bind_aget(bind2,1);;
            _autovar_20=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            goto success10;
pass10:
            *ptr=oldpass10;
            goto alt11_2;
success10:
            *ptr=oldpass10;

            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            stop3=1;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            goto pass9;
accept11:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass9;
        goto success9;
pass9:
        *ptr=oldpass9;
        goto alt10_2;
success9:
        *ptr=oldpass9;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept10;
alt10_2:
        ptr->pos=oldpos10;
        it=AmethystCore_anything(self );
        FAILTEST(alt10_3);
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept10;
alt10_3:
        ptr->pos=oldpos10;
        goto fail;
accept10:
        ;
        break;
    case 14/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(fail);
        it=rb_funcall(self,sy_Minsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Minsize_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _v=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_Minsize_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=Minsize_Dataflow_first(self );
    FAILTEST(pass1);
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

    return it;
fail:
    return failobj;
}
VALUE cls_Maxsize_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Maxsize_Dataflow_first(VALUE self );
VALUE Maxsize_Dataflow_first_Maxsize_Dataflow(VALUE self );
VALUE Maxsize_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Maxsize_Dataflow_1;
VALUE switchhash_Maxsize_Dataflow_2;
VALUE switchhash_Maxsize_Dataflow_3;
static VALUE sy_Maxsize_Dataflow_Compiler_558e;
static VALUE sy_Maxsize_Dataflow__append_lp__d113;
static VALUE sy_Maxsize_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Maxsize_Dataflow__d41d;
static VALUE sy_Maxsize_Dataflow__lp_;
static VALUE sy_Maxsize_Dataflow__lp_Compile_7f7b;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb_;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Maxsize_Dataflow_lattice_dot__5a9e;
static VALUE sy_Maxsize_Dataflow_lattice_dot__b0f6;
static VALUE sy_Maxsize_Dataflow_lattice_dot__e0e5;
static VALUE sy_Maxsize_Dataflow_lattice_lb__bbba;
static VALUE sy_Maxsize_Dataflow_lattice_lb__fdee;
VALUE Maxsize_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_str,_autovar_7,_autovar_8,_autovar_9,_autovar_10,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Maxsize_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        FAILTEST(pass1);
        _autovar_2=it;;
        it=_autovar_2;
        _autovar_3=it;;
        switch(FIX2LONG(rb_hash_aref(switchhash_Maxsize_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=_autovar_3;
            _autovar_4=it;;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=_autovar_4;
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
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                goto pass2;
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else goto pass2;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            goto success2;
pass2:
            *ptr=oldpass2;
            goto alt2_2;
success2:
            *ptr=oldpass2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_6=it;;
            cstruct oldpass3=*ptr;
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
            it=AmethystCore_anything(self );
            FAILTEST(pass3);
            _str=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass3;
            goto success3;
pass3:
            *ptr=oldpass3;
            goto alt2_2;
success3:
            *ptr=oldpass3;
            bind_aset(bind2,1,_str);
            it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_lb__bbba,1,bind2);
            _str=bind_aget(bind2,1);;
            _autovar_7=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=_autovar_4;
            _autovar_8=it;;
            cstruct oldpass4=*ptr;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... 'b':
                ;
            case 'd' ... 'q':
                ;
            case 's' ... UC(255):
                ;
                goto pass4;
                break;
            case 'r' ... 'r':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4;
                else goto pass4;
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                else goto alt3_2;
                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
                else goto alt3_3;
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
                else goto alt3_4;
                ;
                goto accept3;
alt3_4:
                ptr->pos=oldpos3;
                goto pass4;
accept3:
                ;
                break;
            case 'c' ... 'c':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3;
                else goto pass4;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass4;
            goto success4;
pass4:
            *ptr=oldpass4;
            goto alt2_3;
success4:
            *ptr=oldpass4;
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_lb__fdee,1,bind2);
            _autovar_7=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            it=_autovar_4;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... 'e':
                ;
            case 'g' ... UC(255):
                ;
                goto pass5;
                break;
            case 'f' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                else goto pass5;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass5;
            goto success5;
pass5:
            *ptr=oldpass5;
            goto alt2_4;
success5:
            *ptr=oldpass5;
            it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_7=it;;

            ;
            goto accept2;
alt2_4:
            ptr->pos=oldpos2;
            goto pass1;
accept2:
            ;
            break;
        case 1/*Object*/:
            ;
            it=_autovar_3;
            _autovar_10=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=_autovar_10;
            _autovar_5=it;;
            cstruct oldpass6=*ptr;
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
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                goto pass6;
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else goto pass6;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass6;
            goto success6;
pass6:
            *ptr=oldpass6;
            goto alt4_2;
success6:
            *ptr=oldpass6;
            goto alt4_2;
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=_autovar_10;
            _autovar_8=it;;
            cstruct oldpass7=*ptr;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... 'b':
                ;
            case 'd' ... 'q':
                ;
            case 's' ... UC(255):
                ;
                goto pass7;
                break;
            case 'r' ... 'r':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4;
                else goto pass7;
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                int oldpos5=ptr->pos;
                int cut5=0;
alt5_1:
                ;
                if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                else goto alt5_2;
                ;
                goto accept5;
alt5_2:
                ptr->pos=oldpos5;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
                else goto alt5_3;
                ;
                goto accept5;
alt5_3:
                ptr->pos=oldpos5;
                if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
                else goto alt5_4;
                ;
                goto accept5;
alt5_4:
                ptr->pos=oldpos5;
                goto pass7;
accept5:
                ;
                break;
            case 'c' ... 'c':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3;
                else goto pass7;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass7;
            goto success7;
pass7:
            *ptr=oldpass7;
            goto alt4_3;
success7:
            *ptr=oldpass7;
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_lb__fdee,1,bind2);
            _autovar_7=it;;

            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            it=_autovar_10;
            _autovar_9=it;;
            cstruct oldpass8=*ptr;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... 'e':
                ;
            case 'g' ... UC(255):
                ;
                goto pass8;
                break;
            case 'f' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                else goto pass8;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto alt4_4;
success8:
            *ptr=oldpass8;
            it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_7=it;;

            ;
            goto accept4;
alt4_4:
            ptr->pos=oldpos4;
            goto pass1;
accept4:
            ;
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_7;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=Maxsize_Dataflow_first_Maxsize_Dataflow(self );
        FAILTEST(alt1_3);
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
        it=Maxsize_Dataflow_first_Maxsize_Dataflow(self );
        FAILTEST(fail);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Maxsize_Dataflow_first_Maxsize_Dataflow(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_name,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_val,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_vals,_autovar_14,_el,_autovar_15,_autovar_16,_nev,_autovar_17,_autovar_18,_autovar_19,_p,_v,_autovar_20;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Maxsize_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
    case 1/*CAct*/:
    case 2/*Cut*/:
    case 3/*Local*/:
    case 4/*Lookahead*/:
    case 5/*Pass*/:
    case 6/*Result*/:
    case 7/*Stop*/:
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
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__5a9e,1,bind2);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 8/*Apply*/:
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
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Maxsize_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        FAILTEST(pass2);
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Maxsize_Dataflow_Compiler_558e,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_4;
        ptr->len=1;
        it=First_Dataflow_value(self );
        FAILTEST(pass3);
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
        goto alt2_2;
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 9/*Bind*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass4);
        _autovar_8=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt3_2;
success4:
        *ptr=oldpass4;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        FAILTEST(alt3_3);
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto fail;
accept3:
        ;
        break;
    case 10/*Many*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass5);
        _val=it;;
        bind_aset(bind2,1,_val);
        it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb_,1,bind2);
        _val=bind_aget(bind2,1);;
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto alt4_2;
success5:
        *ptr=oldpass5;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        FAILTEST(alt4_3);
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto fail;
accept4:
        ;
        break;
    case 11/*Or*/:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
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
        it=rb_ary_new3(0);
        _autovar_12=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=First_Dataflow_value(self );
            FAILTEST(alt6_2);
            _autovar_13=it;;
            bind_aset(bind2,1,_autovar_12);
            bind_aset(bind2,2,_autovar_13);
            it=rb_funcall(self,sy_Maxsize_Dataflow__append_lp__d113,1,bind2);
            _autovar_12=bind_aget(bind2,1);;
            _autovar_13=bind_aget(bind2,2);;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto pass6;
accept6:
            ;
        }
        it=_autovar_12;
        _vals=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto alt5_2;
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=AmethystCore_anything(self );
        FAILTEST(alt5_3);
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        goto fail;
accept5:
        ;
        break;
    case 12/*Seq*/:
        ;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__5a9e,1,bind2);
        _val=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt8_2);
            _el=it;;
            it=_el;
            _autovar_15=it;;
            cstruct oldpass8=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_15;
            ptr->len=1;
            it=First_Dataflow_value(self );
            FAILTEST(pass8);
            _autovar_16=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto alt8_2;
success8:
            *ptr=oldpass8;
            it=_autovar_16;
            _nev=it;;
            bind_aset(bind2,1,_val);
            bind_aset(bind2,2,_nev);
            it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);
            _val=bind_aget(bind2,1);;
            _nev=bind_aget(bind2,2);;
            _val=it;;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Maxsize_Dataflow__lp_,1,bind2);
            _el=bind_aget(bind2,1);;
            FAILTEST(alt9_2);
            ptr->pos=ptr->len;
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            it=rb_funcall(self,sy_Maxsize_Dataflow__d41d,1,bind2);
            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            goto alt8_2;
accept9:
            ;

            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            stop2=1;
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            goto pass7;
accept8:
            ;
        }
        it=_val;
        _autovar_17=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt7_2;
success7:
        *ptr=oldpass7;
        it=_autovar_17;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=AmethystCore_anything(self );
        FAILTEST(alt7_3);
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept7;
alt7_3:
        ptr->pos=oldpos7;
        goto fail;
accept7:
        ;
        break;
    case 13/*Switch*/:
        ;
        it=rb_ary_new3(0);
        _vals=it;;
        int oldpos10=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_18=it;;
        cstruct oldpass9=*ptr;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        int stop3=0;
        while(!stop3) {
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt11_2);
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
            it=AmethystCore_anything(self );
            FAILTEST(pass10);
            _p=it;;
            it=First_Dataflow_value(self );
            FAILTEST(pass10);
            _v=it;;
            bind_aset(bind2,1,_p);
            bind_aset(bind2,2,_v);
            it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);
            _p=bind_aget(bind2,1);;
            _v=bind_aget(bind2,2);;
            _autovar_20=it;;
            bind_aset(bind2,1,_vals);
            bind_aset(bind2,2,_autovar_20);
            it=rb_funcall(self,sy_Maxsize_Dataflow__append_lp__d113,1,bind2);
            _vals=bind_aget(bind2,1);;
            _autovar_20=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            goto success10;
pass10:
            *ptr=oldpass10;
            goto alt11_2;
success10:
            *ptr=oldpass10;

            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            stop3=1;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            goto pass9;
accept11:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass9;
        goto success9;
pass9:
        *ptr=oldpass9;
        goto alt10_2;
success9:
        *ptr=oldpass9;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept10;
alt10_2:
        ptr->pos=oldpos10;
        it=AmethystCore_anything(self );
        FAILTEST(alt10_3);
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept10;
alt10_3:
        ptr->pos=oldpos10;
        goto fail;
accept10:
        ;
        break;
    case 14/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(fail);
        it=rb_funcall(self,sy_Maxsize_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Maxsize_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _v=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_Maxsize_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=Maxsize_Dataflow_first(self );
    FAILTEST(pass1);
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

    return it;
fail:
    return failobj;
}
VALUE cls_Switch_Char_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Switch_Char_Dataflow_first(VALUE self );
VALUE Switch_Char_Dataflow_first_Switch_Char_Dataflow(VALUE self );
VALUE Switch_Char_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Switch_Char_Dataflow_1;
VALUE switchhash_Switch_Char_Dataflow_2;
VALUE switchhash_Switch_Char_Dataflow_3;
static VALUE sy_Switch_Char_Dataflow_Compiler_558e;
static VALUE sy_Switch_Char_Dataflow__append_lp__d113;
static VALUE sy_Switch_Char_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Switch_Char_Dataflow__d41d;
static VALUE sy_Switch_Char_Dataflow__lp_;
static VALUE sy_Switch_Char_Dataflow__lp_Compile_7f7b;
static VALUE sy_Switch_Char_Dataflow_bind_lb_1_rb_;
static VALUE sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Switch_Char_Dataflow_firstcha_f284;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__b0f6;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__e0e5;
static VALUE sy_Switch_Char_Dataflow_regchar_lp__90af;
VALUE Switch_Char_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_str,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12,_autovar_13,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        FAILTEST(pass1);
        _autovar_2=it;;
        it=_autovar_2;
        _autovar_3=it;;
        switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
            ;
            it=_autovar_3;
            _autovar_4=it;;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=_autovar_4;
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
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                goto pass2;
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else goto pass2;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass2;
            goto success2;
pass2:
            *ptr=oldpass2;
            goto alt2_2;
success2:
            *ptr=oldpass2;
            goto alt2_2;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=_autovar_4;
            _autovar_6=it;;
            cstruct oldpass3=*ptr;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... 'q':
                ;
            case 's' ... UC(255):
                ;
                goto pass3;
                break;
            case 'r' ... 'r':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4;
                else goto pass3;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass3;
            goto success3;
pass3:
            *ptr=oldpass3;
            goto alt2_3;
success3:
            *ptr=oldpass3;
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
            it=AmethystCore_anything(self );
            FAILTEST(pass4);
            _str=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass4;
            goto success4;
pass4:
            *ptr=oldpass4;
            goto alt2_3;
success4:
            *ptr=oldpass4;
            bind_aset(bind2,1,_str);
            it=rb_funcall(self,sy_Switch_Char_Dataflow_regchar_lp__90af,1,bind2);
            _str=bind_aget(bind2,1);;
            _autovar_8=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            it=_autovar_4;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                goto pass5;
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                else goto pass5;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass5;
            goto success5;
pass5:
            *ptr=oldpass5;
            goto alt2_4;
success5:
            *ptr=oldpass5;
            it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_8=it;;

            ;
            goto accept2;
alt2_4:
            ptr->pos=oldpos2;
            it=_autovar_4;
            _autovar_10=it;;
            cstruct oldpass6=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_10;
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
            case UC(0) ... 'e':
                ;
            case 'g' ... UC(255):
                ;
                goto pass6;
                break;
            case 'f' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                else goto pass6;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass6;
            goto success6;
pass6:
            *ptr=oldpass6;
            goto alt2_5;
success6:
            *ptr=oldpass6;
            it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind2);
            _autovar_8=it;;

            ;
            goto accept2;
alt2_5:
            ptr->pos=oldpos2;
            goto pass1;
accept2:
            ;
            break;
        case 1/*CAct*/:
            ;
            it=_autovar_3;
            _autovar_11=it;;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=_autovar_11;
            _autovar_5=it;;
            cstruct oldpass7=*ptr;
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
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                goto pass7;
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else goto pass7;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass7;
            goto success7;
pass7:
            *ptr=oldpass7;
            goto alt3_2;
success7:
            *ptr=oldpass7;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_12=it;;
            cstruct oldpass8=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_12;
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
            FAILTEST(pass8);
            _str=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto alt3_2;
success8:
            *ptr=oldpass8;
            bind_aset(bind2,1,_str);
            it=rb_funcall(self,sy_Switch_Char_Dataflow_firstcha_f284,1,bind2);
            _str=bind_aget(bind2,1);;
            _autovar_8=it;;

            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            it=_autovar_11;
            _autovar_6=it;;
            cstruct oldpass9=*ptr;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... 'q':
                ;
            case 's' ... UC(255):
                ;
                goto pass9;
                break;
            case 'r' ... 'r':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4;
                else goto pass9;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass9;
            goto success9;
pass9:
            *ptr=oldpass9;
            goto alt3_3;
success9:
            *ptr=oldpass9;
            goto alt3_3;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            it=_autovar_11;
            _autovar_9=it;;
            cstruct oldpass10=*ptr;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                goto pass10;
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                else goto pass10;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            goto success10;
pass10:
            *ptr=oldpass10;
            goto alt3_4;
success10:
            *ptr=oldpass10;
            it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_8=it;;

            ;
            goto accept3;
alt3_4:
            ptr->pos=oldpos3;
            it=_autovar_11;
            _autovar_10=it;;
            cstruct oldpass11=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_10;
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
            case UC(0) ... 'e':
                ;
            case 'g' ... UC(255):
                ;
                goto pass11;
                break;
            case 'f' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                else goto pass11;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass11;
            goto success11;
pass11:
            *ptr=oldpass11;
            goto alt3_5;
success11:
            *ptr=oldpass11;
            it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind2);
            _autovar_8=it;;

            ;
            goto accept3;
alt3_5:
            ptr->pos=oldpos3;
            goto pass1;
accept3:
            ;
            break;
        case 2/*Object*/:
            ;
            it=_autovar_3;
            _autovar_13=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=_autovar_13;
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
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                goto pass12;
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else goto pass12;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass12;
            goto success12;
pass12:
            *ptr=oldpass12;
            goto alt4_2;
success12:
            *ptr=oldpass12;
            goto alt4_2;
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=_autovar_13;
            _autovar_6=it;;
            cstruct oldpass13=*ptr;
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
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... 'q':
                ;
            case 's' ... UC(255):
                ;
                goto pass13;
                break;
            case 'r' ... 'r':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4;
                else goto pass13;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass13;
            goto success13;
pass13:
            *ptr=oldpass13;
            goto alt4_3;
success13:
            *ptr=oldpass13;
            goto alt4_3;
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            it=_autovar_13;
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
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            it=Amethyst_spaces(self );
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                goto pass14;
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
                else goto pass14;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass14;
            goto success14;
pass14:
            *ptr=oldpass14;
            goto alt4_4;
success14:
            *ptr=oldpass14;
            it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind2);
            _autovar_8=it;;

            ;
            goto accept4;
alt4_4:
            ptr->pos=oldpos4;
            it=_autovar_13;
            _autovar_10=it;;
            cstruct oldpass15=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_10;
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
            case UC(0) ... 'e':
                ;
            case 'g' ... UC(255):
                ;
                goto pass15;
                break;
            case 'f' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                else goto pass15;
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass15;
            goto success15;
pass15:
            *ptr=oldpass15;
            goto alt4_5;
success15:
            *ptr=oldpass15;
            it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind2);
            _autovar_8=it;;

            ;
            goto accept4;
alt4_5:
            ptr->pos=oldpos4;
            goto pass1;
accept4:
            ;
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=Switch_Char_Dataflow_first_Switch_Char_Dataflow(self );
        FAILTEST(alt1_3);
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
        it=Switch_Char_Dataflow_first_Switch_Char_Dataflow(self );
        FAILTEST(fail);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Switch_Char_Dataflow_first_Switch_Char_Dataflow(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_name,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_val,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_vals,_autovar_14,_el,_autovar_15,_autovar_16,_nev,_autovar_17,_autovar_18,_autovar_19,_p,_v,_autovar_20;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
    case 1/*CAct*/:
    case 2/*Cut*/:
    case 3/*Local*/:
    case 4/*Lookahead*/:
    case 5/*Pass*/:
    case 6/*Result*/:
    case 7/*Stop*/:
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
        it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind2);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 8/*Apply*/:
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
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Switch_Char_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        FAILTEST(pass2);
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_Compiler_558e,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_4;
        ptr->len=1;
        it=First_Dataflow_value(self );
        FAILTEST(pass3);
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
        goto alt2_2;
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 9/*Bind*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass4);
        _autovar_8=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt3_2;
success4:
        *ptr=oldpass4;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        FAILTEST(alt3_3);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto fail;
accept3:
        ;
        break;
    case 10/*Many*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass5);
        _val=it;;
        bind_aset(bind2,1,_val);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_1_rb_,1,bind2);
        _val=bind_aget(bind2,1);;
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto alt4_2;
success5:
        *ptr=oldpass5;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        FAILTEST(alt4_3);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto fail;
accept4:
        ;
        break;
    case 11/*Or*/:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
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
        it=rb_ary_new3(0);
        _autovar_12=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=First_Dataflow_value(self );
            FAILTEST(alt6_2);
            _autovar_13=it;;
            bind_aset(bind2,1,_autovar_12);
            bind_aset(bind2,2,_autovar_13);
            it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__d113,1,bind2);
            _autovar_12=bind_aget(bind2,1);;
            _autovar_13=bind_aget(bind2,2);;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto pass6;
accept6:
            ;
        }
        it=_autovar_12;
        _vals=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto alt5_2;
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=AmethystCore_anything(self );
        FAILTEST(alt5_3);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        goto fail;
accept5:
        ;
        break;
    case 12/*Seq*/:
        ;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
        it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind2);
        _val=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt8_2);
            _el=it;;
            it=_el;
            _autovar_15=it;;
            cstruct oldpass8=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_15;
            ptr->len=1;
            it=First_Dataflow_value(self );
            FAILTEST(pass8);
            _autovar_16=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto alt8_2;
success8:
            *ptr=oldpass8;
            it=_autovar_16;
            _nev=it;;
            bind_aset(bind2,1,_val);
            bind_aset(bind2,2,_nev);
            it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);
            _val=bind_aget(bind2,1);;
            _nev=bind_aget(bind2,2);;
            _val=it;;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Switch_Char_Dataflow__lp_,1,bind2);
            _el=bind_aget(bind2,1);;
            FAILTEST(alt9_2);
            ptr->pos=ptr->len;
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            it=rb_funcall(self,sy_Switch_Char_Dataflow__d41d,1,bind2);
            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            goto alt8_2;
accept9:
            ;

            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            stop2=1;
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            goto pass7;
accept8:
            ;
        }
        it=_val;
        _autovar_17=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt7_2;
success7:
        *ptr=oldpass7;
        it=_autovar_17;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=AmethystCore_anything(self );
        FAILTEST(alt7_3);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept7;
alt7_3:
        ptr->pos=oldpos7;
        goto fail;
accept7:
        ;
        break;
    case 13/*Switch*/:
        ;
        it=rb_ary_new3(0);
        _vals=it;;
        int oldpos10=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_18=it;;
        cstruct oldpass9=*ptr;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        int stop3=0;
        while(!stop3) {
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt11_2);
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
            it=AmethystCore_anything(self );
            FAILTEST(pass10);
            _p=it;;
            it=First_Dataflow_value(self );
            FAILTEST(pass10);
            _v=it;;
            bind_aset(bind2,1,_p);
            bind_aset(bind2,2,_v);
            it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);
            _p=bind_aget(bind2,1);;
            _v=bind_aget(bind2,2);;
            _autovar_20=it;;
            bind_aset(bind2,1,_vals);
            bind_aset(bind2,2,_autovar_20);
            it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__d113,1,bind2);
            _vals=bind_aget(bind2,1);;
            _autovar_20=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            goto success10;
pass10:
            *ptr=oldpass10;
            goto alt11_2;
success10:
            *ptr=oldpass10;

            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            stop3=1;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            goto pass9;
accept11:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass9;
        goto success9;
pass9:
        *ptr=oldpass9;
        goto alt10_2;
success9:
        *ptr=oldpass9;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept10;
alt10_2:
        ptr->pos=oldpos10;
        it=AmethystCore_anything(self );
        FAILTEST(alt10_3);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept10;
alt10_3:
        ptr->pos=oldpos10;
        goto fail;
accept10:
        ;
        break;
    case 14/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(fail);
        it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Switch_Char_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _v=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_Switch_Char_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=Switch_Char_Dataflow_first(self );
    FAILTEST(pass1);
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

    return it;
fail:
    return failobj;
}
VALUE cls_Switch_Clas_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Switch_Clas_Dataflow_first(VALUE self );
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self );
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Switch_Clas_Dataflow_1;
VALUE switchhash_Switch_Clas_Dataflow_2;
VALUE switchhash_Switch_Clas_Dataflow_3;
VALUE switchhash_Switch_Clas_Dataflow_4;
static VALUE sy_Switch_Clas_Dataflow_Compiler_558e;
static VALUE sy_Switch_Clas_Dataflow__append_lp__d113;
static VALUE sy_Switch_Clas_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Switch_Clas_Dataflow__d41d;
static VALUE sy_Switch_Clas_Dataflow__lp_;
static VALUE sy_Switch_Clas_Dataflow__lp_Compile_7f7b;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb_;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__b0f6;
static VALUE sy_Switch_Clas_Dataflow_lattice_lb__78fa;
VALUE Switch_Clas_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_cls,_autovar_4,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
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
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'b':
            ;
        case 'd' ... UC(255):
            ;
            goto pass2;
            break;
        case 'c' ... 'c':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            break;
        case 1/*Object*/:
            ;
            goto pass1;
            break;
        }
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Class*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _cls=it;;
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
        goto pass1;
success3:
        *ptr=oldpass3;
        bind_aset(bind2,1,_cls);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_lb__78fa,1,bind2);
        _cls=bind_aget(bind2,1);;
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
        it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self );
        FAILTEST(alt1_3);
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
        it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self );
        FAILTEST(fail);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_name,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_val,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_vals,_autovar_14,_el,_autovar_15,_autovar_16,_nev,_autovar_17,_autovar_18,_autovar_19,_p,_v,_autovar_20;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
    case 1/*CAct*/:
    case 2/*Cut*/:
    case 3/*Local*/:
    case 4/*Lookahead*/:
    case 5/*Pass*/:
    case 6/*Result*/:
    case 7/*Stop*/:
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
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind2);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 8/*Apply*/:
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
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        FAILTEST(pass2);
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_Compiler_558e,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_4;
        ptr->len=1;
        it=First_Dataflow_value(self );
        FAILTEST(pass3);
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
        goto alt2_2;
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 9/*Bind*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass4);
        _autovar_8=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt3_2;
success4:
        *ptr=oldpass4;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        FAILTEST(alt3_3);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto fail;
accept3:
        ;
        break;
    case 10/*Many*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass5);
        _val=it;;
        bind_aset(bind2,1,_val);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb_,1,bind2);
        _val=bind_aget(bind2,1);;
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto alt4_2;
success5:
        *ptr=oldpass5;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        FAILTEST(alt4_3);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto fail;
accept4:
        ;
        break;
    case 11/*Or*/:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
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
        it=rb_ary_new3(0);
        _autovar_12=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=First_Dataflow_value(self );
            FAILTEST(alt6_2);
            _autovar_13=it;;
            bind_aset(bind2,1,_autovar_12);
            bind_aset(bind2,2,_autovar_13);
            it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__d113,1,bind2);
            _autovar_12=bind_aget(bind2,1);;
            _autovar_13=bind_aget(bind2,2);;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto pass6;
accept6:
            ;
        }
        it=_autovar_12;
        _vals=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto alt5_2;
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=AmethystCore_anything(self );
        FAILTEST(alt5_3);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        goto fail;
accept5:
        ;
        break;
    case 12/*Seq*/:
        ;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind2);
        _val=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt8_2);
            _el=it;;
            it=_el;
            _autovar_15=it;;
            cstruct oldpass8=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_15;
            ptr->len=1;
            it=First_Dataflow_value(self );
            FAILTEST(pass8);
            _autovar_16=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto alt8_2;
success8:
            *ptr=oldpass8;
            it=_autovar_16;
            _nev=it;;
            bind_aset(bind2,1,_val);
            bind_aset(bind2,2,_nev);
            it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);
            _val=bind_aget(bind2,1);;
            _nev=bind_aget(bind2,2);;
            _val=it;;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_,1,bind2);
            _el=bind_aget(bind2,1);;
            FAILTEST(alt9_2);
            ptr->pos=ptr->len;
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            it=rb_funcall(self,sy_Switch_Clas_Dataflow__d41d,1,bind2);
            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            goto alt8_2;
accept9:
            ;

            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            stop2=1;
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            goto pass7;
accept8:
            ;
        }
        it=_val;
        _autovar_17=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt7_2;
success7:
        *ptr=oldpass7;
        it=_autovar_17;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=AmethystCore_anything(self );
        FAILTEST(alt7_3);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept7;
alt7_3:
        ptr->pos=oldpos7;
        goto fail;
accept7:
        ;
        break;
    case 13/*Switch*/:
        ;
        it=rb_ary_new3(0);
        _vals=it;;
        int oldpos10=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_18=it;;
        cstruct oldpass9=*ptr;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        int stop3=0;
        while(!stop3) {
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt11_2);
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
            it=AmethystCore_anything(self );
            FAILTEST(pass10);
            _p=it;;
            it=First_Dataflow_value(self );
            FAILTEST(pass10);
            _v=it;;
            bind_aset(bind2,1,_p);
            bind_aset(bind2,2,_v);
            it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);
            _p=bind_aget(bind2,1);;
            _v=bind_aget(bind2,2);;
            _autovar_20=it;;
            bind_aset(bind2,1,_vals);
            bind_aset(bind2,2,_autovar_20);
            it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__d113,1,bind2);
            _vals=bind_aget(bind2,1);;
            _autovar_20=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            goto success10;
pass10:
            *ptr=oldpass10;
            goto alt11_2;
success10:
            *ptr=oldpass10;

            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            stop3=1;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            goto pass9;
accept11:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass9;
        goto success9;
pass9:
        *ptr=oldpass9;
        goto alt10_2;
success9:
        *ptr=oldpass9;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept10;
alt10_2:
        ptr->pos=oldpos10;
        it=AmethystCore_anything(self );
        FAILTEST(alt10_3);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept10;
alt10_3:
        ptr->pos=oldpos10;
        goto fail;
accept10:
        ;
        break;
    case 14/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(fail);
        it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _v=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_Switch_Clas_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=Switch_Clas_Dataflow_first(self );
    FAILTEST(pass1);
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

    return it;
fail:
    return failobj;
}
VALUE cls_Cant_Fail_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Cant_Fail_Dataflow_first(VALUE self );
VALUE Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(VALUE self );
VALUE Cant_Fail_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_value(VALUE self );
VALUE switchhash_Cant_Fail_Dataflow_1;
VALUE switchhash_Cant_Fail_Dataflow_2;
VALUE switchhash_Cant_Fail_Dataflow_3;
VALUE switchhash_Cant_Fail_Dataflow_4;
static VALUE sy_Cant_Fail_Dataflow_Compiler_558e;
static VALUE sy_Cant_Fail_Dataflow__append_lp__d113;
static VALUE sy_Cant_Fail_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Cant_Fail_Dataflow__d41d;
static VALUE sy_Cant_Fail_Dataflow__lp_;
static VALUE sy_Cant_Fail_Dataflow__lp_Compile_7f7b;
static VALUE sy_Cant_Fail_Dataflow__lp_src_dot_pre_c6b8;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_1_rb_;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__159a;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__a37c;
static VALUE sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__c5d5;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__3340;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__4869;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__5a9e;
static VALUE sy_Cant_Fail_Dataflow_lattice_dot__b0f6;
static VALUE sy_Cant_Fail_Dataflow_lattice_lb__0ff9;
static VALUE sy_Cant_Fail_Dataflow_src_dot_to_5e99;
VALUE Cant_Fail_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,__result,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_ary,_autovar_9,_autovar_10,_autovar_11,_autovar_12;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Cant_Fail_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
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
        it=rb_funcall(self,sy_Cant_Fail_Dataflow__lp_src_dot_pre_c6b8,1,bind2);
        FAILTEST(pass1);
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__4869,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self );
        FAILTEST(alt1_3);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 1/*Apply*/:
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
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
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
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '`':
            ;
        case 'b' ... UC(255):
            ;
            goto pass3;
            break;
        case 'a' ... 'a':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11;
            else goto alt3_2;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11;
            else goto alt3_3;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto pass3;
accept3:
            ;
            break;
        }
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
        goto alt2_2;
success2:
        *ptr=oldpass2;
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__3340,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self );
        FAILTEST(alt2_3);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 2/*Lookahead*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
        ptr->pos=ptr->len;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt4_2;
success4:
        *ptr=oldpass4;
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__4869,1,bind2);
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self );
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
    case 3/*Or*/:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
        ;
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
            switch(FIX2LONG(rb_hash_aref(switchhash_Cant_Fail_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Cut*/:
                ;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                cut5=1;
                goto pass5;
                break;
            case 1/*Seq*/:
                ;
                int oldpos6=ptr->pos;
                int cut6=0;
alt6_1:
                ;
                int oldpos7=ptr->pos;
                int cut7=0;
alt7_1:
                ;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                _autovar_7=it;;
                cstruct oldpass6=*ptr;
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
                int stop2=0;
                while(!stop2) {
                    switch(FIX2LONG(rb_hash_aref(switchhash_Cant_Fail_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))) {
                    case 0/*Cut*/:
                        ;
                        it=ptr->ary[ptr->pos];            ;
                        ptr->pos++;
                        ptr->pos=ptr->len;
                        cut7=1;
                        stop2=1;
                        break;
                    case 1/*Object*/:
                        ;
                        it=AmethystCore_anything(self );
                        FAILTEST(pass6);
                        break;
                    }
                }
                it=Qnil;
                if (ptr->pos<ptr->len) goto pass6;
                goto success6;
pass6:
                *ptr=oldpass6;
                goto alt7_2;
success6:
                *ptr=oldpass6;
                cut7=1;
                goto alt7_2;
                ;
                goto accept7;
alt7_2:
                ptr->pos=oldpos7;
                if (cut7) goto alt6_2;
                it=Qnil;
                ;
                goto accept7;
alt7_3:
                ptr->pos=oldpos7;
                goto alt6_2;
accept7:
                ;
                it=First_Dataflow_value(self );
                FAILTEST(alt6_2);
                _autovar_8=it;;
                bind_aset(bind2,1,_autovar_6);
                bind_aset(bind2,2,_autovar_8);
                it=rb_funcall(self,sy_Cant_Fail_Dataflow__append_lp__d113,1,bind2);
                _autovar_6=bind_aget(bind2,1);;
                _autovar_8=bind_aget(bind2,2);;
                ;
                goto accept6;
alt6_2:
                ptr->pos=oldpos6;
                stop1=1;
                ;
                goto accept6;
alt6_3:
                ptr->pos=oldpos6;
                goto pass5;
accept6:
                ;
                break;
            case 2/*Object*/:
                ;
                int oldpos8=ptr->pos;
                int cut8=0;
alt8_1:
                ;
                it=Qnil;
                it=First_Dataflow_value(self );
                FAILTEST(alt8_2);
                _autovar_8=it;;
                bind_aset(bind2,1,_autovar_6);
                bind_aset(bind2,2,_autovar_8);
                it=rb_funcall(self,sy_Cant_Fail_Dataflow__append_lp__d113,1,bind2);
                _autovar_6=bind_aget(bind2,1);;
                _autovar_8=bind_aget(bind2,2);;
                ;
                goto accept8;
alt8_2:
                ptr->pos=oldpos8;
                stop1=1;
                ;
                goto accept8;
alt8_3:
                ptr->pos=oldpos8;
                goto pass5;
accept8:
                ;
                break;
            }
        }
        it=_autovar_6;
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto alt5_2;
success5:
        *ptr=oldpass5;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_lb__0ff9,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        if (cut5) goto fail;
        it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self );
        FAILTEST(alt5_3);
        __result=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        goto fail;
accept5:
        ;
        break;
    case 4/*Pass*/:
        ;
        int oldpos9=ptr->pos;
        int cut9=0;
alt9_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        cstruct oldpass7=*ptr;
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
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_src_dot_to_5e99,1,bind2);
        _autovar_10=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_10;
        ptr->len=1;
        it=First_Dataflow_value(self );
        FAILTEST(pass8);
        _autovar_11=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass8;
        goto success8;
pass8:
        *ptr=oldpass8;
        goto pass7;
success8:
        *ptr=oldpass8;
        it=_autovar_11;
        _autovar_12=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt9_2;
success7:
        *ptr=oldpass7;
        it=_autovar_12;
        __result=it;;

        ;
        goto accept9;
alt9_2:
        ptr->pos=oldpos9;
        it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self );
        FAILTEST(alt9_3);
        __result=it;;

        ;
        goto accept9;
alt9_3:
        ptr->pos=oldpos9;
        goto fail;
accept9:
        ;
        break;
    case 5/*Object*/:
        ;
        it=Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(self );
        FAILTEST(fail);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Cant_Fail_Dataflow_first_Cant_Fail_Dataflow(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,__result,_autovar_3,_name,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_val,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_vals,_autovar_14,_el,_autovar_15,_autovar_16,_nev,_autovar_17,_autovar_18,_autovar_19,_p,_v,_autovar_20;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Cant_Fail_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
    case 1/*CAct*/:
    case 2/*Cut*/:
    case 3/*Local*/:
    case 4/*Lookahead*/:
    case 5/*Pass*/:
    case 6/*Result*/:
    case 7/*Stop*/:
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
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__5a9e,1,bind2);
        _autovar_2=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 8/*Apply*/:
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
        it=AmethystCore_anything(self );
        FAILTEST(pass2);
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        FAILTEST(pass2);
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_Compiler_558e,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_4;
        ptr->len=1;
        it=First_Dataflow_value(self );
        FAILTEST(pass3);
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
        goto alt2_2;
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_3);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    case 9/*Bind*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass4);
        _autovar_8=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt3_2;
success4:
        *ptr=oldpass4;
        it=_autovar_8;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        FAILTEST(alt3_3);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto fail;
accept3:
        ;
        break;
    case 10/*Many*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
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
        it=First_Dataflow_value(self );
        FAILTEST(pass5);
        _val=it;;
        bind_aset(bind2,1,_val);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_1_rb_,1,bind2);
        _val=bind_aget(bind2,1);;
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto alt4_2;
success5:
        *ptr=oldpass5;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        FAILTEST(alt4_3);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        goto fail;
accept4:
        ;
        break;
    case 11/*Or*/:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
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
        it=rb_ary_new3(0);
        _autovar_12=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=First_Dataflow_value(self );
            FAILTEST(alt6_2);
            _autovar_13=it;;
            bind_aset(bind2,1,_autovar_12);
            bind_aset(bind2,2,_autovar_13);
            it=rb_funcall(self,sy_Cant_Fail_Dataflow__append_lp__d113,1,bind2);
            _autovar_12=bind_aget(bind2,1);;
            _autovar_13=bind_aget(bind2,2);;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop1=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto pass6;
accept6:
            ;
        }
        it=_autovar_12;
        _vals=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto alt5_2;
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=AmethystCore_anything(self );
        FAILTEST(alt5_3);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        goto fail;
accept5:
        ;
        break;
    case 12/*Seq*/:
        ;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
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
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__5a9e,1,bind2);
        _val=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt8_2);
            _el=it;;
            it=_el;
            _autovar_15=it;;
            cstruct oldpass8=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_15;
            ptr->len=1;
            it=First_Dataflow_value(self );
            FAILTEST(pass8);
            _autovar_16=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass8;
            goto success8;
pass8:
            *ptr=oldpass8;
            goto alt8_2;
success8:
            *ptr=oldpass8;
            it=_autovar_16;
            _nev=it;;
            bind_aset(bind2,1,_val);
            bind_aset(bind2,2,_nev);
            it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__159a,1,bind2);
            _val=bind_aget(bind2,1);;
            _nev=bind_aget(bind2,2);;
            _val=it;;
            int oldpos9=ptr->pos;
            int cut9=0;
alt9_1:
            ;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Cant_Fail_Dataflow__lp_,1,bind2);
            _el=bind_aget(bind2,1);;
            FAILTEST(alt9_2);
            ptr->pos=ptr->len;
            ;
            goto accept9;
alt9_2:
            ptr->pos=oldpos9;
            it=rb_funcall(self,sy_Cant_Fail_Dataflow__d41d,1,bind2);
            ;
            goto accept9;
alt9_3:
            ptr->pos=oldpos9;
            goto alt8_2;
accept9:
            ;

            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            stop2=1;
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            goto pass7;
accept8:
            ;
        }
        it=_val;
        _autovar_17=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt7_2;
success7:
        *ptr=oldpass7;
        it=_autovar_17;
        __result=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=AmethystCore_anything(self );
        FAILTEST(alt7_3);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept7;
alt7_3:
        ptr->pos=oldpos7;
        goto fail;
accept7:
        ;
        break;
    case 13/*Switch*/:
        ;
        it=rb_ary_new3(0);
        _vals=it;;
        int oldpos10=ptr->pos;
        int cut10=0;
alt10_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_18=it;;
        cstruct oldpass9=*ptr;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        int stop3=0;
        while(!stop3) {
            int oldpos11=ptr->pos;
            int cut11=0;
alt11_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt11_2);
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
            it=AmethystCore_anything(self );
            FAILTEST(pass10);
            _p=it;;
            it=First_Dataflow_value(self );
            FAILTEST(pass10);
            _v=it;;
            bind_aset(bind2,1,_p);
            bind_aset(bind2,2,_v);
            it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__c5d5,1,bind2);
            _p=bind_aget(bind2,1);;
            _v=bind_aget(bind2,2);;
            _autovar_20=it;;
            bind_aset(bind2,1,_vals);
            bind_aset(bind2,2,_autovar_20);
            it=rb_funcall(self,sy_Cant_Fail_Dataflow__append_lp__d113,1,bind2);
            _vals=bind_aget(bind2,1);;
            _autovar_20=bind_aget(bind2,2);;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            goto success10;
pass10:
            *ptr=oldpass10;
            goto alt11_2;
success10:
            *ptr=oldpass10;

            ;
            goto accept11;
alt11_2:
            ptr->pos=oldpos11;
            stop3=1;
            ;
            goto accept11;
alt11_3:
            ptr->pos=oldpos11;
            goto pass9;
accept11:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass9;
        goto success9;
pass9:
        *ptr=oldpass9;
        goto alt10_2;
success9:
        *ptr=oldpass9;
        bind_aset(bind2,1,_vals);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__a37c,1,bind2);
        _vals=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept10;
alt10_2:
        ptr->pos=oldpos10;
        it=AmethystCore_anything(self );
        FAILTEST(alt10_3);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;

        ;
        goto accept10;
alt10_3:
        ptr->pos=oldpos10;
        goto fail;
accept10:
        ;
        break;
    case 14/*Object*/:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(fail);
        it=rb_funcall(self,sy_Cant_Fail_Dataflow_lattice_dot__b0f6,1,bind2);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Cant_Fail_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _v=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_Cant_Fail_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=Cant_Fail_Dataflow_first(self );
    FAILTEST(pass1);
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

    return it;
fail:
    return failobj;
}
VALUE cls_Detect_First;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_cant_fail(VALUE self );
VALUE Detect_First_itrans(VALUE self );
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_First_object_only(VALUE self );
VALUE Detect_First_root(VALUE self );
VALUE Detect_First_string_only(VALUE self );
VALUE Traverser_Clone2_traverse(VALUE self );
VALUE switchhash_Detect_First_1;
VALUE switchhash_Detect_First_2;
VALUE switchhash_Detect_First_3;
VALUE switchhash_Detect_First_4;
static VALUE sy_Detect_First__append_lp__d113;
static VALUE sy_Detect_First__at_name_eq_sr_362f;
static VALUE sy_Detect_First__do_rules_eq__le__ab16;
static VALUE sy_Detect_First__lp_cant_fa_17ef;
static VALUE sy_Detect_First__lp_must_em_43e9;
static VALUE sy_Detect_First_src_25d9;
static VALUE sy_Detect_First_src_dot_rule_5acf;
static VALUE sy_Detect_First_src_dot_rule_a719;
VALUE Detect_First_cant_fail(VALUE self ) {
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
    it=rb_funcall(self,sy_Detect_First__lp_cant_fa_17ef,1,bind2);
    _e=bind_aget(bind2,1);;
    FAILTEST(fail);
    it=_e;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_First_itrans(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_rules,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_autovar_19,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_1,rb_obj_class(ame_curobj2(ptr))))) {
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
            it=rb_funcall(self,sy_Detect_First__at_name_eq_sr_362f,1,bind2);
            it=rb_funcall(self,sy_Detect_First__do_rules_eq__le__ab16,1,bind2);
            it=rb_funcall(self,sy_Detect_First_src_dot_rule_5acf,1,bind2);
            _autovar_3=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_11;
            ptr->len=1;
            it=AmethystCore_anything(self );
            FAILTEST(pass2);
            _autovar_4=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_10;
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
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_2,rb_obj_class(ame_curobj2(ptr))))) {
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
                    it=Detect_First_root(self );
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
                    it=rb_funcall(self,sy_Detect_First__append_lp__d113,1,bind2);
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
            it=_autovar_9;
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
            it=rb_funcall(self,sy_Detect_First_src_dot_rule_a719,1,bind2);
            _rules=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Detect_First_src_25d9,1,bind2);
            _autovar_12=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass1;
            goto success1;
pass1:
            *ptr=oldpass1;
            goto alt2_2;
success1:
            *ptr=oldpass1;
            it=_autovar_12;
            _autovar_14=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_3);
            _autovar_15=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto alt1_2;
accept2:
            ;
            bind_aset(bind2,1,_autovar_16);
            bind_aset(bind2,2,_autovar_17);
            it=rb_funcall(self,sy_Detect_First__append_lp__d113,1,bind2);
            _autovar_16=bind_aget(bind2,1);;
            _autovar_17=bind_aget(bind2,2);;
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
            _autovar_18=it;;
            bind_aset(bind2,1,_autovar);
            bind_aset(bind2,2,_autovar_18);
            it=rb_funcall(self,sy_Detect_First__append_lp__d113,1,bind2);
            _autovar=bind_aget(bind2,1);;
            _autovar_18=bind_aget(bind2,2);;
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
    it=_autovar_19;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_First_must_empty(VALUE self ) {
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
    it=rb_funcall(self,sy_Detect_First__lp_must_em_43e9,1,bind2);
    _e=bind_aget(bind2,1);;
    FAILTEST(fail);
    it=_e;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_First_object_only(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_4,rb_obj_class(ame_curobj2(ptr))))) {
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
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'b':
            ;
        case 'd' ... UC(255):
            ;
            goto pass2;
            break;
        case 'c' ... 'c':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3;
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
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_2);
            _autovar_4=it;;
            bind_aset(bind2,1,_autovar_3);
            bind_aset(bind2,2,_autovar_4);
            it=rb_funcall(self,sy_Detect_First__append_lp__d113,1,bind2);
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
            goto pass1;
accept1:
            ;
        }
        it=_autovar_3;
        _autovar_5=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=_autovar_5;
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
VALUE Detect_First_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Traverser_Clone2_traverse(self );
    FAILTEST(fail);
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_First_string_only(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_3,rb_obj_class(ame_curobj2(ptr))))) {
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
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '^':
            ;
        case '`' ... 'q':
            ;
        case 's' ... UC(255):
            ;
            goto pass2;
            break;
        case 'r' ... 'r':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4;
            else goto pass2;
            break;
        case '_' ... '_':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
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
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_2);
            _autovar_4=it;;
            bind_aset(bind2,1,_autovar_3);
            bind_aset(bind2,2,_autovar_4);
            it=rb_funcall(self,sy_Detect_First__append_lp__d113,1,bind2);
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
            goto pass1;
accept1:
            ;
        }
        it=_autovar_3;
        _autovar_5=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=_autovar_5;
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
VALUE cls_Detect_Switch_Char;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE a0);
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE);
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE a0);
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE);
VALUE Detect_Switch_Char_itrans(VALUE self );
VALUE Detect_Switch_Char_root(VALUE self );
VALUE Detect_Switch_Char_traverse(VALUE self );
VALUE Detect_Switch_Char_traverse_item(VALUE self );
VALUE Detect_Switch_Char_visit(VALUE self );
VALUE switchhash_Detect_Switch_Char_10;
VALUE switchhash_Detect_Switch_Char_1;
VALUE switchhash_Detect_Switch_Char_2;
VALUE switchhash_Detect_Switch_Char_3;
VALUE switchhash_Detect_Switch_Char_4;
VALUE switchhash_Detect_Switch_Char_5;
VALUE switchhash_Detect_Switch_Char_6;
VALUE switchhash_Detect_Switch_Char_7;
VALUE switchhash_Detect_Switch_Char_8;
VALUE switchhash_Detect_Switch_Char_9;
static VALUE sy_Detect_Switch_Char_Or_lb__ti_bind_d486;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321;
static VALUE sy_Detect_Switch_Char_Switch_C_6b05;
static VALUE sy_Detect_Switch_Char_Switch_C_6c19;
static VALUE sy_Detect_Switch_Char__append_lp__d113;
static VALUE sy_Detect_Switch_Char__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch_Char__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Char__lb__lb_Lattic_d322;
static VALUE sy_Detect_Switch_Char__lp_2;
static VALUE sy_Detect_Switch_Char__lp_;
static VALUE sy_Detect_Switch_Char__lp_src_dot_cla_e144;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__0b68;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__sp__6af0;
static VALUE sy_Detect_Switch_Char_first_lp_sr_3298;
static VALUE sy_Detect_Switch_Char_if_sp_bind_lb__1bed;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_78a6;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_7c35;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_df23;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_eb1e;
static VALUE sy_Detect_Switch_Char_src_25d9;
static VALUE sy_Detect_Switch_Char_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_a719;
static VALUE sy_first;
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_autovar,_ary,_newlist,_list,__result,_n;
    VALUE bind2=bind_new2(16);
    _list=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_7,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Switch_Char*/:
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
        it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2);
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=rb_ary_new3(0);
        _newlist=it;;
        bind_aset(bind2,1,_list);
        bind_aset(bind2,2,_ary);
        bind_aset(bind2,3,_newlist);
        it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__0b68,1,bind2);
        _list=bind_aget(bind2,1);;
        _ary=bind_aget(bind2,2);;
        _newlist=bind_aget(bind2,3);;
        it=_newlist;
        arg0=it;
        it=Detect_Switch_Char_combine_or(self ,arg0);
        FAILTEST(alt1_2);
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        _n=it;;
        bind_aset(bind2,1,_list);
        bind_aset(bind2,2,_n);
        it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);
        _list=bind_aget(bind2,1);;
        _n=bind_aget(bind2,2);;
        _newlist=it;;
        it=_newlist;
        arg0=it;
        it=Detect_Switch_Char_combine_or(self ,arg0);
        FAILTEST(alt1_3);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=Qnil;
        if (ptr->pos<ptr->len) goto alt1_4;
        bind_aset(bind2,1,_list);
        it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6b05,1,bind2);
        _list=bind_aget(bind2,1);;
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
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_2);
        _n=it;;
        bind_aset(bind2,1,_list);
        bind_aset(bind2,2,_n);
        it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);
        _list=bind_aget(bind2,1);;
        _n=bind_aget(bind2,2);;
        _newlist=it;;
        it=_newlist;
        arg0=it;
        it=Detect_Switch_Char_combine_or(self ,arg0);
        FAILTEST(alt2_2);
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=Qnil;
        if (ptr->pos<ptr->len) goto alt2_3;
        bind_aset(bind2,1,_list);
        it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6b05,1,bind2);
        _list=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_s,_prefix,__result,_autovar,_ary,_autovar_2,_autovar_3,_rest,_autovar_4,_autovar_5;
    VALUE bind2=bind_new2(16);
    _prefix=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_6,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Switch_Char*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Detect_First_must_empty(self );
        FAILTEST(alt1_2);
        _s=it;;
        bind_aset(bind2,1,_prefix);
        bind_aset(bind2,2,_s);
        it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);
        _prefix=bind_aget(bind2,1);;
        _s=bind_aget(bind2,2);;
        arg0=it;
        it=Detect_Switch_Char_combine_seq(self ,arg0);
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
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2);
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_3;
success1:
        *ptr=oldpass1;
        it=rb_ary_new3(0);
        _autovar_2=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_2);
            _autovar_3=it;;
            bind_aset(bind2,1,_autovar_2);
            bind_aset(bind2,2,_autovar_3);
            it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            _autovar_3=bind_aget(bind2,2);;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto alt1_3;
accept2:
            ;
        }
        it=_autovar_2;
        _rest=it;;
        bind_aset(bind2,1,_ary);
        bind_aset(bind2,2,_prefix);
        bind_aset(bind2,3,_rest);
        it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6c19,1,bind2);
        _ary=bind_aget(bind2,1);;
        _prefix=bind_aget(bind2,2);;
        _rest=bind_aget(bind2,3);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=rb_ary_new3(0);
        _autovar_4=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt3_2);
            _autovar_5=it;;
            bind_aset(bind2,1,_autovar_4);
            bind_aset(bind2,2,_autovar_5);
            it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
            _autovar_4=bind_aget(bind2,1);;
            _autovar_5=bind_aget(bind2,2);;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            stop2=1;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto alt1_4;
accept3:
            ;
        }
        it=_autovar_4;
        _ary=it;;
        bind_aset(bind2,1,_prefix);
        bind_aset(bind2,2,_ary);
        it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);
        _prefix=bind_aget(bind2,1);;
        _ary=bind_aget(bind2,2);;
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
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=Detect_First_must_empty(self );
        FAILTEST(alt4_2);
        _s=it;;
        bind_aset(bind2,1,_prefix);
        bind_aset(bind2,2,_s);
        it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);
        _prefix=bind_aget(bind2,1);;
        _s=bind_aget(bind2,2);;
        arg0=it;
        it=Detect_Switch_Char_combine_seq(self ,arg0);
        FAILTEST(alt4_2);
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=rb_ary_new3(0);
        _autovar_4=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt5_2);
            _autovar_5=it;;
            bind_aset(bind2,1,_autovar_4);
            bind_aset(bind2,2,_autovar_5);
            it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
            _autovar_4=bind_aget(bind2,1);;
            _autovar_5=bind_aget(bind2,2);;
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            stop3=1;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            goto alt4_3;
accept5:
            ;
        }
        it=_autovar_4;
        _ary=it;;
        bind_aset(bind2,1,_prefix);
        bind_aset(bind2,2,_ary);
        it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);
        _prefix=bind_aget(bind2,1);;
        _ary=bind_aget(bind2,2);;
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
VALUE Detect_Switch_Char_itrans(VALUE self ) {
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_9,rb_obj_class(ame_curobj2(ptr))))) {
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
            it=rb_funcall(self,sy_Detect_Switch_Char__at_name_eq_sr_362f,1,bind2);
            it=rb_funcall(self,sy_Detect_Switch_Char__do_rules_eq__le__ab16,1,bind2);
            it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_5acf,1,bind2);
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
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_10,rb_obj_class(ame_curobj2(ptr))))) {
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
                    it=Detect_Switch_Char_root(self );
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
                    it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
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
            it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_a719,1,bind2);
            _rules=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind2);
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
            it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
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
            it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
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
VALUE Detect_Switch_Char_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Detect_Switch_Char_traverse(self );
    FAILTEST(fail);
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_Switch_Char_traverse(VALUE self ) {
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
    it=rb_funcall(self,sy_Detect_Switch_Char__lp_src_dot_cla_e144,1,bind2);
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
        it=Detect_Switch_Char_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Detect_Switch_Char_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_Switch_Char_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_8,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Detect_Switch_Char_visit(self );
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
        it=Detect_Switch_Char_traverse(self );
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
        it=Detect_Switch_Char_visit(self );
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
            it=Detect_Switch_Char_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Detect_Switch_Char_visit(self );
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
VALUE Detect_Switch_Char_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_firs,_autovar_7,__result,_autovar_8,_autovar_9,_autovar_10,_str,_autovar_11,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_autovar_16,_autovar_17,_t,_autovar_18,_autovar_19,_autovar_20,_autovar_21,_items,_aswitch,_autovar_22,_autovar_23,_autovar_24,_list,_autovar_25,_ary,_newlist,__result_2,_n,_autovar_26,_autovar_27,_autovar_28,_autovar_29,_autovar_30,_autovar_31,_autovar_32,_prefix,_s,__result_3,_autovar_33,_ary_2,_autovar_34,_autovar_35,_rest,_autovar_36,_autovar_37,_autovar_38,_autovar_39,_autovar_40;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_1,rb_obj_class(ame_curobj2(ptr))))) {
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
        case UC(0) ... 'q':
            ;
        case 's' ... UC(255):
            ;
            goto pass2;
            break;
        case 'r' ... 'r':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_6=it;;
            break;
        case 1/*Object*/:
            ;
            goto pass1;
            break;
        }
        cstruct oldpass3=*ptr;
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
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto pass1;
success3:
        *ptr=oldpass3;
        it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);
        _firs=bind_aget(bind2,1);;
        _autovar_7=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_7;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=_autovar_3;
        _autovar_8=it;;
        cstruct oldpass4=*ptr;
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
        it=AmethystCore_anything(self );
        FAILTEST(pass4);
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
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '^':
            ;
        case '`' ... UC(255):
            ;
            goto pass5;
            break;
        case '_' ... '_':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
            else goto pass5;
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto pass4;
success5:
        *ptr=oldpass5;
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_10=it;;
            break;
        case 1/*Object*/:
            ;
            goto pass4;
            break;
        }
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_10;
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
        FAILTEST(pass6);
        _str=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto pass4;
success6:
        *ptr=oldpass6;
        it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        bind_aset(bind2,2,_str);
        it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);
        _firs=bind_aget(bind2,1);;
        _str=bind_aget(bind2,2);;
        _autovar_11=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt1_3;
success4:
        *ptr=oldpass4;
        it=_autovar_11;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=_autovar_3;
        _autovar_12=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_12;
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
        FAILTEST(pass7);
        _autovar_13=it;;
        cstruct oldpass8=*ptr;
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
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'e':
            ;
        case 'g' ... UC(255):
            ;
            goto pass8;
            break;
        case 'f' ... 'f':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
            else goto pass8;
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass8;
        goto success8;
pass8:
        *ptr=oldpass8;
        goto pass7;
success8:
        *ptr=oldpass8;
        it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind2);
        _autovar_14=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto alt1_4;
success7:
        *ptr=oldpass7;
        it=_autovar_14;
        __result=it;;

        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        it=_autovar_3;
        _autovar_15=it;;
        cstruct oldpass9=*ptr;
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
        it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);
        _firs=bind_aget(bind2,1);;
        FAILTEST(pass9);
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);
        _firs=bind_aget(bind2,1);;
        _autovar_16=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass9;
        goto success9;
pass9:
        *ptr=oldpass9;
        goto alt1_5;
success9:
        *ptr=oldpass9;
        it=_autovar_16;
        __result=it;;

        ;
        goto accept1;
alt1_5:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 1/*Many*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_17=it;;
        cstruct oldpass10=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_17;
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
        it=Detect_Switch_Char_traverse(self );
        FAILTEST(pass10);
        _t=it;;
        it=_t;
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        FAILTEST(pass10);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);
        _firs=bind_aget(bind2,1);;
        FAILTEST(pass10);
        bind_aset(bind2,1,_firs);
        bind_aset(bind2,2,_t);
        it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_eb1e,1,bind2);
        _firs=bind_aget(bind2,1);;
        _t=bind_aget(bind2,2);;
        _autovar_18=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass10;
        goto success10;
pass10:
        *ptr=oldpass10;
        goto fail;
success10:
        *ptr=oldpass10;
        it=_autovar_18;
        __result=it;;
        break;
    case 2/*Or*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_19=it;;
        cstruct oldpass11=*ptr;
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
        it=rb_ary_new3(0);
        _autovar_20=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=Detect_Switch_Char_traverse_item(self );
            FAILTEST(alt2_2);
            _autovar_21=it;;
            bind_aset(bind2,1,_autovar_20);
            bind_aset(bind2,2,_autovar_21);
            it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
            _autovar_20=bind_aget(bind2,1);;
            _autovar_21=bind_aget(bind2,2);;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto pass11;
accept2:
            ;
        }
        it=_autovar_20;
        _items=it;;
        it=Qfalse;
        _aswitch=it;;
        bind_aset(bind2,1,_items);
        bind_aset(bind2,2,_aswitch);
        it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04,1,bind2);
        _items=bind_aget(bind2,1);;
        _aswitch=bind_aget(bind2,2);;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        bind_aset(bind2,1,_aswitch);
        it=rb_funcall(self,sy_Detect_Switch_Char__lp_2,1,bind2);
        _aswitch=bind_aget(bind2,1);;
        FAILTEST(alt3_2);
        bind_aset(bind2,1,_items);
        it=rb_funcall(self,sy_Detect_Switch_Char_Or_lb__ti_bind_d486,1,bind2);
        _items=bind_aget(bind2,1);;
        _autovar_22=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=_items;
        _autovar_23=it;;
        cstruct oldpass12=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_23;
        ptr->len=1;
        it=AmethystCore_anything(self );
        FAILTEST(pass12);
        _autovar_24=it;;
        cstruct oldpass13=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_24;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_4,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Switch_Char*/:
            ;
            it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind2);
            _list=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_25=it;;
            cstruct oldpass14=*ptr;
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
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2);
            _ary=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass14;
            goto success14;
pass14:
            *ptr=oldpass14;
            goto alt4_2;
success14:
            *ptr=oldpass14;
            it=rb_ary_new3(0);
            _newlist=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_ary);
            bind_aset(bind2,3,_newlist);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__0b68,1,bind2);
            _list=bind_aget(bind2,1);;
            _ary=bind_aget(bind2,2);;
            _newlist=bind_aget(bind2,3);;
            it=_newlist;
            arg0=it;
            it=Detect_Switch_Char_combine_or(self ,arg0);
            FAILTEST(alt4_2);
            __result_2=it;;

            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=AmethystCore_anything(self );
            FAILTEST(alt4_3);
            _n=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_n);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);
            _list=bind_aget(bind2,1);;
            _n=bind_aget(bind2,2);;
            _newlist=it;;
            it=_newlist;
            arg0=it;
            it=Detect_Switch_Char_combine_or(self ,arg0);
            FAILTEST(alt4_3);
            __result_2=it;;

            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            it=Qnil;
            if (ptr->pos<ptr->len) goto alt4_4;
            bind_aset(bind2,1,_list);
            it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6b05,1,bind2);
            _list=bind_aget(bind2,1);;
            __result_2=it;;

            ;
            goto accept4;
alt4_4:
            ptr->pos=oldpos4;
            goto pass13;
accept4:
            ;
            it=__result_2;
            _autovar_26=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass13;
            break;
        case 1/*Object*/:
            ;
            it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind2);
            _list=it;;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt5_2);
            _n=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_n);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);
            _list=bind_aget(bind2,1);;
            _n=bind_aget(bind2,2);;
            _newlist=it;;
            it=_newlist;
            arg0=it;
            it=Detect_Switch_Char_combine_or(self ,arg0);
            FAILTEST(alt5_2);
            __result_2=it;;

            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=Qnil;
            if (ptr->pos<ptr->len) goto alt5_3;
            bind_aset(bind2,1,_list);
            it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6b05,1,bind2);
            _list=bind_aget(bind2,1);;
            __result_2=it;;

            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            goto pass13;
accept5:
            ;
            it=__result_2;
            _autovar_26=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass13;
            break;
        }
        goto success13;
pass13:
        *ptr=oldpass13;
        goto pass12;
success13:
        *ptr=oldpass13;
        it=_autovar_26;
        _autovar_27=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass12;
        goto success12;
pass12:
        *ptr=oldpass12;
        goto alt3_3;
success12:
        *ptr=oldpass12;
        it=_autovar_27;
        _autovar_22=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto pass11;
accept3:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass11;
        goto success11;
pass11:
        *ptr=oldpass11;
        goto fail;
success11:
        *ptr=oldpass11;
        it=_autovar_22;
        __result=it;;
        break;
    case 3/*Seq*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_28=it;;
        cstruct oldpass15=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_28;
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
        _autovar_29=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=Detect_Switch_Char_traverse_item(self );
            FAILTEST(alt6_2);
            _autovar_30=it;;
            bind_aset(bind2,1,_autovar_29);
            bind_aset(bind2,2,_autovar_30);
            it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
            _autovar_29=bind_aget(bind2,1);;
            _autovar_30=bind_aget(bind2,2);;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop2=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto pass15;
accept6:
            ;
        }
        it=_autovar_29;
        _autovar_31=it;;
        cstruct oldpass16=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_31;
        ptr->len=1;
        it=AmethystCore_anything(self );
        FAILTEST(pass16);
        _autovar_32=it;;
        cstruct oldpass17=*ptr;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Switch_Char*/:
            ;
            it=rb_ary_new3(0);
            _prefix=it;;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=Detect_First_must_empty(self );
            FAILTEST(alt7_2);
            _s=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_s);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Switch_Char_combine_seq(self ,arg0);
            FAILTEST(alt7_2);
            __result_3=it;;

            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_33=it;;
            cstruct oldpass18=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_33;
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
            it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2);
            _ary_2=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass18;
            goto success18;
pass18:
            *ptr=oldpass18;
            goto alt7_3;
success18:
            *ptr=oldpass18;
            it=rb_ary_new3(0);
            _autovar_34=it;;
            int stop3=0;
            while(!stop3) {
                int oldpos8=ptr->pos;
                int cut8=0;
alt8_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt8_2);
                _autovar_35=it;;
                bind_aset(bind2,1,_autovar_34);
                bind_aset(bind2,2,_autovar_35);
                it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
                _autovar_34=bind_aget(bind2,1);;
                _autovar_35=bind_aget(bind2,2);;
                ;
                goto accept8;
alt8_2:
                ptr->pos=oldpos8;
                stop3=1;
                ;
                goto accept8;
alt8_3:
                ptr->pos=oldpos8;
                goto alt7_3;
accept8:
                ;
            }
            it=_autovar_34;
            _rest=it;;
            bind_aset(bind2,1,_ary_2);
            bind_aset(bind2,2,_prefix);
            bind_aset(bind2,3,_rest);
            it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_6c19,1,bind2);
            _ary_2=bind_aget(bind2,1);;
            _prefix=bind_aget(bind2,2);;
            _rest=bind_aget(bind2,3);;
            __result_3=it;;

            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            it=rb_ary_new3(0);
            _autovar_36=it;;
            int stop4=0;
            while(!stop4) {
                int oldpos9=ptr->pos;
                int cut9=0;
alt9_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt9_2);
                _autovar_37=it;;
                bind_aset(bind2,1,_autovar_36);
                bind_aset(bind2,2,_autovar_37);
                it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
                _autovar_36=bind_aget(bind2,1);;
                _autovar_37=bind_aget(bind2,2);;
                ;
                goto accept9;
alt9_2:
                ptr->pos=oldpos9;
                stop4=1;
                ;
                goto accept9;
alt9_3:
                ptr->pos=oldpos9;
                goto alt7_4;
accept9:
                ;
            }
            it=_autovar_36;
            _ary_2=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_ary_2);
            it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _ary_2=bind_aget(bind2,2);;
            __result_3=it;;

            ;
            goto accept7;
alt7_4:
            ptr->pos=oldpos7;
            goto pass17;
accept7:
            ;
            it=__result_3;
            _autovar_38=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass17;
            break;
        case 1/*Object*/:
            ;
            it=rb_ary_new3(0);
            _prefix=it;;
            int oldpos10=ptr->pos;
            int cut10=0;
alt10_1:
            ;
            it=Detect_First_must_empty(self );
            FAILTEST(alt10_2);
            _s=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_s);
            it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Switch_Char_combine_seq(self ,arg0);
            FAILTEST(alt10_2);
            __result_3=it;;

            ;
            goto accept10;
alt10_2:
            ptr->pos=oldpos10;
            it=rb_ary_new3(0);
            _autovar_36=it;;
            int stop5=0;
            while(!stop5) {
                int oldpos11=ptr->pos;
                int cut11=0;
alt11_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt11_2);
                _autovar_37=it;;
                bind_aset(bind2,1,_autovar_36);
                bind_aset(bind2,2,_autovar_37);
                it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__d113,1,bind2);
                _autovar_36=bind_aget(bind2,1);;
                _autovar_37=bind_aget(bind2,2);;
                ;
                goto accept11;
alt11_2:
                ptr->pos=oldpos11;
                stop5=1;
                ;
                goto accept11;
alt11_3:
                ptr->pos=oldpos11;
                goto alt10_3;
accept11:
                ;
            }
            it=_autovar_36;
            _ary_2=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_ary_2);
            it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _ary_2=bind_aget(bind2,2);;
            __result_3=it;;

            ;
            goto accept10;
alt10_3:
            ptr->pos=oldpos10;
            goto pass17;
accept10:
            ;
            it=__result_3;
            _autovar_38=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass17;
            break;
        }
        goto success17;
pass17:
        *ptr=oldpass17;
        goto pass16;
success17:
        *ptr=oldpass17;
        it=_autovar_38;
        _autovar_39=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass16;
        goto success16;
pass16:
        *ptr=oldpass16;
        goto pass15;
success16:
        *ptr=oldpass16;
        it=_autovar_39;
        _autovar_40=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass15;
        goto success15;
pass15:
        *ptr=oldpass15;
        goto fail;
success15:
        *ptr=oldpass15;
        it=_autovar_40;
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
VALUE cls_Detect_Switch_Clas;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE a0);
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE);
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE a0);
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE);
VALUE Detect_Switch_Clas_itrans(VALUE self );
VALUE Detect_Switch_Clas_root(VALUE self );
VALUE Detect_Switch_Clas_traverse(VALUE self );
VALUE Detect_Switch_Clas_traverse_item(VALUE self );
VALUE Detect_Switch_Clas_visit(VALUE self );
VALUE switchhash_Detect_Switch_Clas_10;
VALUE switchhash_Detect_Switch_Clas_1;
VALUE switchhash_Detect_Switch_Clas_2;
VALUE switchhash_Detect_Switch_Clas_3;
VALUE switchhash_Detect_Switch_Clas_4;
VALUE switchhash_Detect_Switch_Clas_5;
VALUE switchhash_Detect_Switch_Clas_6;
VALUE switchhash_Detect_Switch_Clas_7;
VALUE switchhash_Detect_Switch_Clas_8;
VALUE switchhash_Detect_Switch_Clas_9;
static VALUE sy_Detect_Switch_Clas_Or_lb__ti_bind_d486;
static VALUE sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321;
static VALUE sy_Detect_Switch_Clas_Switch_C_06c2;
static VALUE sy_Detect_Switch_Clas_Switch_C_63f7;
static VALUE sy_Detect_Switch_Clas_Switch_C_7ba7;
static VALUE sy_Detect_Switch_Clas__append_lp__d113;
static VALUE sy_Detect_Switch_Clas__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch_Clas__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Clas__lb__lb_Lattic_62e5;
static VALUE sy_Detect_Switch_Clas__lp_2;
static VALUE sy_Detect_Switch_Clas__lp_;
static VALUE sy_Detect_Switch_Clas__lp_src_dot_cla_e144;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__dot__6945;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__dot__76da;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__sp__6af0;
static VALUE sy_Detect_Switch_Clas_c_eq_Switch_4e5f;
static VALUE sy_Detect_Switch_Clas_if_sp_bind_lb__1bed;
static VALUE sy_Detect_Switch_Clas_src_25d9;
static VALUE sy_Detect_Switch_Clas_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_a719;
static VALUE sy_first;
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_autovar,_ary,_newlist,_list,__result,_n;
    VALUE bind2=bind_new2(16);
    _list=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_7,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Switch_Clas*/:
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
        it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind2);
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=rb_ary_new3(0);
        _newlist=it;;
        bind_aset(bind2,1,_list);
        bind_aset(bind2,2,_ary);
        bind_aset(bind2,3,_newlist);
        it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__6945,1,bind2);
        _list=bind_aget(bind2,1);;
        _ary=bind_aget(bind2,2);;
        _newlist=bind_aget(bind2,3);;
        it=_newlist;
        arg0=it;
        it=Detect_Switch_Clas_combine_or(self ,arg0);
        FAILTEST(alt1_2);
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        _n=it;;
        bind_aset(bind2,1,_list);
        bind_aset(bind2,2,_n);
        it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482,1,bind2);
        _list=bind_aget(bind2,1);;
        _n=bind_aget(bind2,2);;
        _newlist=it;;
        it=_newlist;
        arg0=it;
        it=Detect_Switch_Clas_combine_or(self ,arg0);
        FAILTEST(alt1_3);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=Qnil;
        if (ptr->pos<ptr->len) goto alt1_4;
        bind_aset(bind2,1,_list);
        it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_06c2,1,bind2);
        _list=bind_aget(bind2,1);;
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
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=AmethystCore_anything(self );
        FAILTEST(alt2_2);
        _n=it;;
        bind_aset(bind2,1,_list);
        bind_aset(bind2,2,_n);
        it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482,1,bind2);
        _list=bind_aget(bind2,1);;
        _n=bind_aget(bind2,2);;
        _newlist=it;;
        it=_newlist;
        arg0=it;
        it=Detect_Switch_Clas_combine_or(self ,arg0);
        FAILTEST(alt2_2);
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=Qnil;
        if (ptr->pos<ptr->len) goto alt2_3;
        bind_aset(bind2,1,_list);
        it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_06c2,1,bind2);
        _list=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto fail;
accept2:
        ;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_s,_prefix,__result,_autovar,_ary,_autovar_2,_autovar_3,_rest,_autovar_4,_autovar_5;
    VALUE bind2=bind_new2(16);
    _prefix=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_6,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Switch_Clas*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Detect_First_must_empty(self );
        FAILTEST(alt1_2);
        _s=it;;
        bind_aset(bind2,1,_prefix);
        bind_aset(bind2,2,_s);
        it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651,1,bind2);
        _prefix=bind_aget(bind2,1);;
        _s=bind_aget(bind2,2);;
        arg0=it;
        it=Detect_Switch_Clas_combine_seq(self ,arg0);
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
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind2);
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_3;
success1:
        *ptr=oldpass1;
        it=rb_ary_new3(0);
        _autovar_2=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_2);
            _autovar_3=it;;
            bind_aset(bind2,1,_autovar_2);
            bind_aset(bind2,2,_autovar_3);
            it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            _autovar_3=bind_aget(bind2,2);;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto alt1_3;
accept2:
            ;
        }
        it=_autovar_2;
        _rest=it;;
        bind_aset(bind2,1,_ary);
        bind_aset(bind2,2,_prefix);
        bind_aset(bind2,3,_rest);
        it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_7ba7,1,bind2);
        _ary=bind_aget(bind2,1);;
        _prefix=bind_aget(bind2,2);;
        _rest=bind_aget(bind2,3);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=rb_ary_new3(0);
        _autovar_4=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt3_2);
            _autovar_5=it;;
            bind_aset(bind2,1,_autovar_4);
            bind_aset(bind2,2,_autovar_5);
            it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
            _autovar_4=bind_aget(bind2,1);;
            _autovar_5=bind_aget(bind2,2);;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            stop2=1;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto alt1_4;
accept3:
            ;
        }
        it=_autovar_4;
        _ary=it;;
        bind_aset(bind2,1,_prefix);
        bind_aset(bind2,2,_ary);
        it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321,1,bind2);
        _prefix=bind_aget(bind2,1);;
        _ary=bind_aget(bind2,2);;
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
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=Detect_First_must_empty(self );
        FAILTEST(alt4_2);
        _s=it;;
        bind_aset(bind2,1,_prefix);
        bind_aset(bind2,2,_s);
        it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651,1,bind2);
        _prefix=bind_aget(bind2,1);;
        _s=bind_aget(bind2,2);;
        arg0=it;
        it=Detect_Switch_Clas_combine_seq(self ,arg0);
        FAILTEST(alt4_2);
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=rb_ary_new3(0);
        _autovar_4=it;;
        int stop3=0;
        while(!stop3) {
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt5_2);
            _autovar_5=it;;
            bind_aset(bind2,1,_autovar_4);
            bind_aset(bind2,2,_autovar_5);
            it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
            _autovar_4=bind_aget(bind2,1);;
            _autovar_5=bind_aget(bind2,2);;
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            stop3=1;
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            goto alt4_3;
accept5:
            ;
        }
        it=_autovar_4;
        _ary=it;;
        bind_aset(bind2,1,_prefix);
        bind_aset(bind2,2,_ary);
        it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321,1,bind2);
        _prefix=bind_aget(bind2,1);;
        _ary=bind_aget(bind2,2);;
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
VALUE Detect_Switch_Clas_itrans(VALUE self ) {
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_9,rb_obj_class(ame_curobj2(ptr))))) {
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
            it=rb_funcall(self,sy_Detect_Switch_Clas__at_name_eq_sr_362f,1,bind2);
            it=rb_funcall(self,sy_Detect_Switch_Clas__do_rules_eq__le__ab16,1,bind2);
            it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_5acf,1,bind2);
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
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_10,rb_obj_class(ame_curobj2(ptr))))) {
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
                    it=Detect_Switch_Clas_root(self );
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
                    it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
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
            it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_a719,1,bind2);
            _rules=bind_aget(bind2,1);;
            it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind2);
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
            it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
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
            it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
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
VALUE Detect_Switch_Clas_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Detect_Switch_Clas_traverse(self );
    FAILTEST(fail);
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_Switch_Clas_traverse(VALUE self ) {
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
    it=rb_funcall(self,sy_Detect_Switch_Clas__lp_src_dot_cla_e144,1,bind2);
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
        it=Detect_Switch_Clas_traverse_item(self );
        FAILTEST(alt1_2);
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Detect_Switch_Clas_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_Switch_Clas_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_8,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=Detect_Switch_Clas_visit(self );
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
        it=Detect_Switch_Clas_traverse(self );
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
        it=Detect_Switch_Clas_visit(self );
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
            it=Detect_Switch_Clas_traverse_item(self );
            FAILTEST(alt3_2);
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20,1,bind2);
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
        it=Detect_Switch_Clas_visit(self );
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
VALUE Detect_Switch_Clas_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_clas,_autovar_7,__result,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_firs,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_items,_aswitch,_autovar_16,_autovar_17,_autovar_18,_list,_autovar_19,_ary,_newlist,__result_2,_n,_autovar_20,_autovar_21,_autovar_22,_autovar_23,_autovar_24,_autovar_25,_autovar_26,_prefix,_s,__result_3,_autovar_27,_ary_2,_autovar_28,_autovar_29,_rest,_autovar_30,_autovar_31,_autovar_32,_autovar_33,_autovar_34;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_1,rb_obj_class(ame_curobj2(ptr))))) {
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
        case UC(0) ... 'b':
            ;
        case 'd' ... UC(255):
            ;
            goto pass2;
            break;
        case 'c' ... 'c':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='l'&&ame_curstr2(ptr)[1]=='a'&&ame_curstr2(ptr)[2]=='s')  ptr->pos+=3;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*CAct*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_6=it;;
            break;
        case 1/*Object*/:
            ;
            goto pass1;
            break;
        }
        cstruct oldpass3=*ptr;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Class*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _clas=it;;
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
        goto pass1;
success3:
        *ptr=oldpass3;
        bind_aset(bind2,1,_clas);
        it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_63f7,1,bind2);
        _clas=bind_aget(bind2,1);;
        _autovar_7=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto alt1_2;
success1:
        *ptr=oldpass1;
        it=_autovar_7;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=_autovar_3;
        _autovar_8=it;;
        cstruct oldpass4=*ptr;
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
        it=AmethystCore_anything(self );
        FAILTEST(pass4);
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
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'e':
            ;
        case 'g' ... UC(255):
            ;
            goto pass5;
            break;
        case 'f' ... 'f':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
            else goto pass5;
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto pass4;
success5:
        *ptr=oldpass5;
        it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind2);
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto alt1_3;
success4:
        *ptr=oldpass4;
        it=_autovar_10;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=_autovar_3;
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
        it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind2);
        arg0=it;
        it=rb_funcall(self,sy_first,1,arg0);
        FAILTEST(pass6);
        _firs=it;;
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Clas__lp_,1,bind2);
        _firs=bind_aget(bind2,1);;
        FAILTEST(pass6);
        bind_aset(bind2,1,_firs);
        it=rb_funcall(self,sy_Detect_Switch_Clas_c_eq_Switch_4e5f,1,bind2);
        _firs=bind_aget(bind2,1);;
        _autovar_12=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass6;
        goto success6;
pass6:
        *ptr=oldpass6;
        goto alt1_4;
success6:
        *ptr=oldpass6;
        it=_autovar_12;
        __result=it;;

        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 1/*Or*/:
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
        it=rb_ary_new3(0);
        _autovar_14=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=Detect_Switch_Clas_traverse_item(self );
            FAILTEST(alt2_2);
            _autovar_15=it;;
            bind_aset(bind2,1,_autovar_14);
            bind_aset(bind2,2,_autovar_15);
            it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
            _autovar_14=bind_aget(bind2,1);;
            _autovar_15=bind_aget(bind2,2);;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop1=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto pass7;
accept2:
            ;
        }
        it=_autovar_14;
        _items=it;;
        it=Qfalse;
        _aswitch=it;;
        bind_aset(bind2,1,_items);
        bind_aset(bind2,2,_aswitch);
        it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__76da,1,bind2);
        _items=bind_aget(bind2,1);;
        _aswitch=bind_aget(bind2,2);;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        bind_aset(bind2,1,_aswitch);
        it=rb_funcall(self,sy_Detect_Switch_Clas__lp_2,1,bind2);
        _aswitch=bind_aget(bind2,1);;
        FAILTEST(alt3_2);
        bind_aset(bind2,1,_items);
        it=rb_funcall(self,sy_Detect_Switch_Clas_Or_lb__ti_bind_d486,1,bind2);
        _items=bind_aget(bind2,1);;
        _autovar_16=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=_items;
        _autovar_17=it;;
        cstruct oldpass8=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_17;
        ptr->len=1;
        it=AmethystCore_anything(self );
        FAILTEST(pass8);
        _autovar_18=it;;
        cstruct oldpass9=*ptr;
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
            else  ary=rb_funcall(ptr->src,s_to_a,0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_4,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Switch_Clas*/:
            ;
            it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind2);
            _list=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
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
            it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind2);
            _ary=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass10;
            goto success10;
pass10:
            *ptr=oldpass10;
            goto alt4_2;
success10:
            *ptr=oldpass10;
            it=rb_ary_new3(0);
            _newlist=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_ary);
            bind_aset(bind2,3,_newlist);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__6945,1,bind2);
            _list=bind_aget(bind2,1);;
            _ary=bind_aget(bind2,2);;
            _newlist=bind_aget(bind2,3);;
            it=_newlist;
            arg0=it;
            it=Detect_Switch_Clas_combine_or(self ,arg0);
            FAILTEST(alt4_2);
            __result_2=it;;

            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=AmethystCore_anything(self );
            FAILTEST(alt4_3);
            _n=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_n);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482,1,bind2);
            _list=bind_aget(bind2,1);;
            _n=bind_aget(bind2,2);;
            _newlist=it;;
            it=_newlist;
            arg0=it;
            it=Detect_Switch_Clas_combine_or(self ,arg0);
            FAILTEST(alt4_3);
            __result_2=it;;

            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            it=Qnil;
            if (ptr->pos<ptr->len) goto alt4_4;
            bind_aset(bind2,1,_list);
            it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_06c2,1,bind2);
            _list=bind_aget(bind2,1);;
            __result_2=it;;

            ;
            goto accept4;
alt4_4:
            ptr->pos=oldpos4;
            goto pass9;
accept4:
            ;
            it=__result_2;
            _autovar_20=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass9;
            break;
        case 1/*Object*/:
            ;
            it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind2);
            _list=it;;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt5_2);
            _n=it;;
            bind_aset(bind2,1,_list);
            bind_aset(bind2,2,_n);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482,1,bind2);
            _list=bind_aget(bind2,1);;
            _n=bind_aget(bind2,2);;
            _newlist=it;;
            it=_newlist;
            arg0=it;
            it=Detect_Switch_Clas_combine_or(self ,arg0);
            FAILTEST(alt5_2);
            __result_2=it;;

            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=Qnil;
            if (ptr->pos<ptr->len) goto alt5_3;
            bind_aset(bind2,1,_list);
            it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_06c2,1,bind2);
            _list=bind_aget(bind2,1);;
            __result_2=it;;

            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            goto pass9;
accept5:
            ;
            it=__result_2;
            _autovar_20=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass9;
            break;
        }
        goto success9;
pass9:
        *ptr=oldpass9;
        goto pass8;
success9:
        *ptr=oldpass9;
        it=_autovar_20;
        _autovar_21=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass8;
        goto success8;
pass8:
        *ptr=oldpass8;
        goto alt3_3;
success8:
        *ptr=oldpass8;
        it=_autovar_21;
        _autovar_16=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        goto pass7;
accept3:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass7;
        goto success7;
pass7:
        *ptr=oldpass7;
        goto fail;
success7:
        *ptr=oldpass7;
        it=_autovar_16;
        __result=it;;
        break;
    case 2/*Seq*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_22=it;;
        cstruct oldpass11=*ptr;
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
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=Detect_Switch_Clas_traverse_item(self );
            FAILTEST(alt6_2);
            _autovar_24=it;;
            bind_aset(bind2,1,_autovar_23);
            bind_aset(bind2,2,_autovar_24);
            it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
            _autovar_23=bind_aget(bind2,1);;
            _autovar_24=bind_aget(bind2,2);;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            stop2=1;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            goto pass11;
accept6:
            ;
        }
        it=_autovar_23;
        _autovar_25=it;;
        cstruct oldpass12=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_25;
        ptr->len=1;
        it=AmethystCore_anything(self );
        FAILTEST(pass12);
        _autovar_26=it;;
        cstruct oldpass13=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_26;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Switch_Clas*/:
            ;
            it=rb_ary_new3(0);
            _prefix=it;;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=Detect_First_must_empty(self );
            FAILTEST(alt7_2);
            _s=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_s);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Switch_Clas_combine_seq(self ,arg0);
            FAILTEST(alt7_2);
            __result_3=it;;

            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
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
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind2);
            _ary_2=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass14;
            goto success14;
pass14:
            *ptr=oldpass14;
            goto alt7_3;
success14:
            *ptr=oldpass14;
            it=rb_ary_new3(0);
            _autovar_28=it;;
            int stop3=0;
            while(!stop3) {
                int oldpos8=ptr->pos;
                int cut8=0;
alt8_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt8_2);
                _autovar_29=it;;
                bind_aset(bind2,1,_autovar_28);
                bind_aset(bind2,2,_autovar_29);
                it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
                _autovar_28=bind_aget(bind2,1);;
                _autovar_29=bind_aget(bind2,2);;
                ;
                goto accept8;
alt8_2:
                ptr->pos=oldpos8;
                stop3=1;
                ;
                goto accept8;
alt8_3:
                ptr->pos=oldpos8;
                goto alt7_3;
accept8:
                ;
            }
            it=_autovar_28;
            _rest=it;;
            bind_aset(bind2,1,_ary_2);
            bind_aset(bind2,2,_prefix);
            bind_aset(bind2,3,_rest);
            it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_7ba7,1,bind2);
            _ary_2=bind_aget(bind2,1);;
            _prefix=bind_aget(bind2,2);;
            _rest=bind_aget(bind2,3);;
            __result_3=it;;

            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            it=rb_ary_new3(0);
            _autovar_30=it;;
            int stop4=0;
            while(!stop4) {
                int oldpos9=ptr->pos;
                int cut9=0;
alt9_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt9_2);
                _autovar_31=it;;
                bind_aset(bind2,1,_autovar_30);
                bind_aset(bind2,2,_autovar_31);
                it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
                _autovar_30=bind_aget(bind2,1);;
                _autovar_31=bind_aget(bind2,2);;
                ;
                goto accept9;
alt9_2:
                ptr->pos=oldpos9;
                stop4=1;
                ;
                goto accept9;
alt9_3:
                ptr->pos=oldpos9;
                goto alt7_4;
accept9:
                ;
            }
            it=_autovar_30;
            _ary_2=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_ary_2);
            it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _ary_2=bind_aget(bind2,2);;
            __result_3=it;;

            ;
            goto accept7;
alt7_4:
            ptr->pos=oldpos7;
            goto pass13;
accept7:
            ;
            it=__result_3;
            _autovar_32=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass13;
            break;
        case 1/*Object*/:
            ;
            it=rb_ary_new3(0);
            _prefix=it;;
            int oldpos10=ptr->pos;
            int cut10=0;
alt10_1:
            ;
            it=Detect_First_must_empty(self );
            FAILTEST(alt10_2);
            _s=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_s);
            it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Switch_Clas_combine_seq(self ,arg0);
            FAILTEST(alt10_2);
            __result_3=it;;

            ;
            goto accept10;
alt10_2:
            ptr->pos=oldpos10;
            it=rb_ary_new3(0);
            _autovar_30=it;;
            int stop5=0;
            while(!stop5) {
                int oldpos11=ptr->pos;
                int cut11=0;
alt11_1:
                ;
                it=AmethystCore_anything(self );
                FAILTEST(alt11_2);
                _autovar_31=it;;
                bind_aset(bind2,1,_autovar_30);
                bind_aset(bind2,2,_autovar_31);
                it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__d113,1,bind2);
                _autovar_30=bind_aget(bind2,1);;
                _autovar_31=bind_aget(bind2,2);;
                ;
                goto accept11;
alt11_2:
                ptr->pos=oldpos11;
                stop5=1;
                ;
                goto accept11;
alt11_3:
                ptr->pos=oldpos11;
                goto alt10_3;
accept11:
                ;
            }
            it=_autovar_30;
            _ary_2=it;;
            bind_aset(bind2,1,_prefix);
            bind_aset(bind2,2,_ary_2);
            it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321,1,bind2);
            _prefix=bind_aget(bind2,1);;
            _ary_2=bind_aget(bind2,2);;
            __result_3=it;;

            ;
            goto accept10;
alt10_3:
            ptr->pos=oldpos10;
            goto pass13;
accept10:
            ;
            it=__result_3;
            _autovar_32=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass13;
            break;
        }
        goto success13;
pass13:
        *ptr=oldpass13;
        goto pass12;
success13:
        *ptr=oldpass13;
        it=_autovar_32;
        _autovar_33=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass12;
        goto success12;
pass12:
        *ptr=oldpass12;
        goto pass11;
success12:
        *ptr=oldpass12;
        it=_autovar_33;
        _autovar_34=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass11;
        goto success11;
pass11:
        *ptr=oldpass11;
        goto fail;
success11:
        *ptr=oldpass11;
        it=_autovar_34;
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
VALUE cls_Detect_Size;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_Size_predicate(VALUE self ,VALUE a0);
VALUE Detect_Size_predicate2(VALUE self ,VALUE a0);
VALUE Detect_Size_predicate2(VALUE self ,VALUE);
VALUE switchhash_Detect_Size_1;
VALUE switchhash_Detect_Size_2;
static VALUE sy_Detect_Size_Or_dot_creat_49b2;
static VALUE sy_Detect_Size_Seq_dot_crea_bfbb;
static VALUE sy_Detect_Size__append_lp__d113;
static VALUE sy_Detect_Size__lb_bind_lb_1_rb__2d76;
static VALUE sy_Detect_Size__sh_lowleve_46e8;
static VALUE sy_Detect_Size_bind_lb_1_rb__eq__28f0;
static VALUE sy_Detect_Size_bind_lb_1_rb__gt__f573;
static VALUE sy_Detect_Size_minsize_lp__01f0;
VALUE Detect_Size_predicate(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_el,_msize,_autovar,_s,_autovar_2,__result,_autovar_3,_s_2,_autovar_4,_autovar_5,__result_2,_autovar_6,_ary,_autovar_7,_autovar_8,_el_2,_autovar_9;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _el=it;;
    bind_aset(bind2,1,_el);
    it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);
    _el=bind_aget(bind2,1);;
    _msize=it;;
    it=_el;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Size_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_msize);
        it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
        _s=bind_aget(bind2,1);;
        _msize=bind_aget(bind2,2);;
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
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '`':
            ;
        case 'b' ... UC(255):
            ;
            goto pass2;
            break;
        case 'a' ... 'a':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
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
        it=rb_funcall(self,sy_Detect_Size__sh_lowleve_46e8,1,bind2);
        __result=it;;
        it=__result;
        _autovar_3=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 1/*Or*/:
        ;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_msize);
        it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
        _s=bind_aget(bind2,1);;
        _msize=bind_aget(bind2,2);;
        _s_2=it;;
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
        it=rb_ary_new3(0);
        _autovar_5=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=_s_2;
            _s=it;;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_2);
            _el=it;;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);
            _el=bind_aget(bind2,1);;
            _msize=it;;
            it=_el;
            _autovar=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar;
            ptr->len=1;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_msize);
            it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
            _s=bind_aget(bind2,1);;
            _msize=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Size_predicate2(self ,arg0);
            FAILTEST(pass4);
            _autovar_3=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass4;
            goto success4;
pass4:
            *ptr=oldpass4;
            goto alt1_2;
success4:
            *ptr=oldpass4;
            it=_autovar_3;
            _el=it;;
            bind_aset(bind2,1,_msize);
            bind_aset(bind2,2,_s);
            bind_aset(bind2,3,_el);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);
            _msize=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            _el=bind_aget(bind2,3);;
            __result_2=it;;
            it=__result_2;
            _autovar_6=it;;
            bind_aset(bind2,1,_autovar_5);
            bind_aset(bind2,2,_autovar_6);
            it=rb_funcall(self,sy_Detect_Size__append_lp__d113,1,bind2);
            _autovar_5=bind_aget(bind2,1);;
            _autovar_6=bind_aget(bind2,2);;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            goto pass3;
accept1:
            ;
        }
        it=_autovar_5;
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass3;
        goto success3;
pass3:
        *ptr=oldpass3;
        goto pass1;
success3:
        *ptr=oldpass3;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Detect_Size_Or_dot_creat_49b2,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _autovar_3=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 2/*Seq*/:
        ;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_msize);
        it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
        _s=bind_aget(bind2,1);;
        _msize=bind_aget(bind2,2);;
        _s_2=it;;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_7=it;;
        cstruct oldpass5=*ptr;
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
        it=rb_ary_new3(0);
        _autovar_8=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=_s_2;
            _s=it;;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_2);
            _el=it;;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);
            _el=bind_aget(bind2,1);;
            _msize=it;;
            it=_el;
            _autovar=it;;
            cstruct oldpass6=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar;
            ptr->len=1;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_msize);
            it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
            _s=bind_aget(bind2,1);;
            _msize=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Size_predicate2(self ,arg0);
            FAILTEST(pass6);
            _autovar_3=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass6;
            goto success6;
pass6:
            *ptr=oldpass6;
            goto alt2_2;
success6:
            *ptr=oldpass6;
            it=_autovar_3;
            _el=it;;
            bind_aset(bind2,1,_msize);
            bind_aset(bind2,2,_s);
            bind_aset(bind2,3,_el);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);
            _msize=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            _el=bind_aget(bind2,3);;
            __result_2=it;;
            it=__result_2;
            _el_2=it;;
            bind_aset(bind2,1,_s_2);
            bind_aset(bind2,2,_el_2);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__eq__28f0,1,bind2);
            _s_2=bind_aget(bind2,1);;
            _el_2=bind_aget(bind2,2);;
            it=_el_2;
            _autovar_9=it;;
            bind_aset(bind2,1,_autovar_8);
            bind_aset(bind2,2,_autovar_9);
            it=rb_funcall(self,sy_Detect_Size__append_lp__d113,1,bind2);
            _autovar_8=bind_aget(bind2,1);;
            _autovar_9=bind_aget(bind2,2);;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop2=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto pass5;
accept2:
            ;
        }
        it=_autovar_8;
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass5;
        goto success5;
pass5:
        *ptr=oldpass5;
        goto pass1;
success5:
        *ptr=oldpass5;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Detect_Size_Seq_dot_crea_bfbb,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _autovar_3=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        break;
    case 3/*Object*/:
        ;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_msize);
        it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
        _s=bind_aget(bind2,1);;
        _msize=bind_aget(bind2,2);;
        goto pass1;
        break;
    }
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    it=_autovar_3;
    _el=it;;
    bind_aset(bind2,1,_msize);
    bind_aset(bind2,2,_s);
    bind_aset(bind2,3,_el);
    it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);
    _msize=bind_aget(bind2,1);;
    _s=bind_aget(bind2,2);;
    _el=bind_aget(bind2,3);;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE Detect_Size_predicate2(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_autovar,__result,_autovar_2,_autovar_3,_s,_s_2,_el,_msize,_autovar_4,_autovar_5,__result_2,_autovar_6,_ary,_autovar_7,_autovar_8,_el_2,_autovar_9;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Size_2,rb_obj_class(ame_curobj2(ptr))))) {
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
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '`':
            ;
        case 'b' ... UC(255):
            ;
            goto pass1;
            break;
        case 'a' ... 'a':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
            else goto pass1;
            break;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass1;
        goto success1;
pass1:
        *ptr=oldpass1;
        goto fail;
success1:
        *ptr=oldpass1;
        it=rb_funcall(self,sy_Detect_Size__sh_lowleve_46e8,1,bind2);
        __result=it;;
        break;
    case 1/*Or*/:
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
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=_s;
            _s_2=it;;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_2);
            _el=it;;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);
            _el=bind_aget(bind2,1);;
            _msize=it;;
            it=_el;
            _autovar_4=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_4;
            ptr->len=1;
            bind_aset(bind2,1,_s_2);
            bind_aset(bind2,2,_msize);
            it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
            _s_2=bind_aget(bind2,1);;
            _msize=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Size_predicate2(self ,arg0);
            FAILTEST(pass3);
            _autovar_5=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass3;
            goto success3;
pass3:
            *ptr=oldpass3;
            goto alt1_2;
success3:
            *ptr=oldpass3;
            it=_autovar_5;
            _el=it;;
            bind_aset(bind2,1,_msize);
            bind_aset(bind2,2,_s_2);
            bind_aset(bind2,3,_el);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);
            _msize=bind_aget(bind2,1);;
            _s_2=bind_aget(bind2,2);;
            _el=bind_aget(bind2,3);;
            __result_2=it;;
            it=__result_2;
            _autovar_6=it;;
            bind_aset(bind2,1,_autovar_3);
            bind_aset(bind2,2,_autovar_6);
            it=rb_funcall(self,sy_Detect_Size__append_lp__d113,1,bind2);
            _autovar_3=bind_aget(bind2,1);;
            _autovar_6=bind_aget(bind2,2);;
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
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass2;
        goto success2;
pass2:
        *ptr=oldpass2;
        goto fail;
success2:
        *ptr=oldpass2;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Detect_Size_Or_dot_creat_49b2,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 2/*Seq*/:
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
        it=rb_ary_new3(0);
        _autovar_8=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=_s;
            _s_2=it;;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_2);
            _el=it;;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);
            _el=bind_aget(bind2,1);;
            _msize=it;;
            it=_el;
            _autovar_4=it;;
            cstruct oldpass5=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_4;
            ptr->len=1;
            bind_aset(bind2,1,_s_2);
            bind_aset(bind2,2,_msize);
            it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
            _s_2=bind_aget(bind2,1);;
            _msize=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Size_predicate2(self ,arg0);
            FAILTEST(pass5);
            _autovar_5=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) goto pass5;
            goto success5;
pass5:
            *ptr=oldpass5;
            goto alt2_2;
success5:
            *ptr=oldpass5;
            it=_autovar_5;
            _el=it;;
            bind_aset(bind2,1,_msize);
            bind_aset(bind2,2,_s_2);
            bind_aset(bind2,3,_el);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);
            _msize=bind_aget(bind2,1);;
            _s_2=bind_aget(bind2,2);;
            _el=bind_aget(bind2,3);;
            __result_2=it;;
            it=__result_2;
            _el_2=it;;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_el_2);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__eq__28f0,1,bind2);
            _s=bind_aget(bind2,1);;
            _el_2=bind_aget(bind2,2);;
            it=_el_2;
            _autovar_9=it;;
            bind_aset(bind2,1,_autovar_8);
            bind_aset(bind2,2,_autovar_9);
            it=rb_funcall(self,sy_Detect_Size__append_lp__d113,1,bind2);
            _autovar_8=bind_aget(bind2,1);;
            _autovar_9=bind_aget(bind2,2);;
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
        it=_autovar_8;
        _ary=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) goto pass4;
        goto success4;
pass4:
        *ptr=oldpass4;
        goto fail;
success4:
        *ptr=oldpass4;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Detect_Size_Seq_dot_crea_bfbb,1,bind2);
        _ary=bind_aget(bind2,1);;
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
void Init_detect_switch_c() {
    cls_First_Dataflow=rb_define_class("First_Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    switchhash_First_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");
    rb_global_variable(&switchhash_First_Dataflow_1);;
    sy_First_Dataflow_Compiler_558e=rb_intern("First_Dataflow_Compiler_558e");
    sy_First_Dataflow__append_lp__d113=rb_intern("First_Dataflow__append_lp__d113");
    sy_First_Dataflow__at_vis_eq_bin_8b89=rb_intern("First_Dataflow__at_vis_eq_bin_8b89");
    sy_First_Dataflow__d41d=rb_intern("First_Dataflow__d41d");
    sy_First_Dataflow__lp_=rb_intern("First_Dataflow__lp_");
    sy_First_Dataflow__lp_Compile_7f7b=rb_intern("First_Dataflow__lp_Compile_7f7b");
    sy_First_Dataflow_bind_lb_1_rb_=rb_intern("First_Dataflow_bind_lb_1_rb_");
    sy_First_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("First_Dataflow_bind_lb_1_rb__dot__159a");
    sy_First_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("First_Dataflow_bind_lb_1_rb__dot__a37c");
    sy_First_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("First_Dataflow_bind_lb_1_rb__dot__c5d5");
    sy_First_Dataflow_depends_lp__7463=rb_intern("First_Dataflow_depends_lp__7463");
    sy_First_Dataflow_lattice_dot__5a9e=rb_intern("First_Dataflow_lattice_dot__5a9e");
    sy_First_Dataflow_lattice_dot__b0f6=rb_intern("First_Dataflow_lattice_dot__b0f6");
    sy_analyze=rb_intern("analyze");
    rb_define_method(cls_First_Dataflow,"first",First_Dataflow_first,0);
    rb_define_method(cls_First_Dataflow,"getvalue",First_Dataflow_getvalue,1);
    rb_define_method(cls_First_Dataflow,"root",First_Dataflow_root,0);
    rb_define_method(cls_First_Dataflow,"value",First_Dataflow_value,0);

    cls_Minsize_Dataflow=rb_define_class("Minsize_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow")));
    failobj=rb_eval_string("FAIL");
    switchhash_Minsize_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Minsize_Dataflow_1);;
    switchhash_Minsize_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Minsize_Dataflow_2);;
    switchhash_Minsize_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");
    rb_global_variable(&switchhash_Minsize_Dataflow_3);;
    sy_Minsize_Dataflow_Compiler_558e=rb_intern("Minsize_Dataflow_Compiler_558e");
    sy_Minsize_Dataflow__append_lp__d113=rb_intern("Minsize_Dataflow__append_lp__d113");
    sy_Minsize_Dataflow__at_vis_eq_bin_8b89=rb_intern("Minsize_Dataflow__at_vis_eq_bin_8b89");
    sy_Minsize_Dataflow__d41d=rb_intern("Minsize_Dataflow__d41d");
    sy_Minsize_Dataflow__lp_=rb_intern("Minsize_Dataflow__lp_");
    sy_Minsize_Dataflow__lp_Compile_7f7b=rb_intern("Minsize_Dataflow__lp_Compile_7f7b");
    sy_Minsize_Dataflow_bind_lb_1_rb_=rb_intern("Minsize_Dataflow_bind_lb_1_rb_");
    sy_Minsize_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Minsize_Dataflow_bind_lb_1_rb__dot__159a");
    sy_Minsize_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Minsize_Dataflow_bind_lb_1_rb__dot__a37c");
    sy_Minsize_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Minsize_Dataflow_bind_lb_1_rb__dot__c5d5");
    sy_Minsize_Dataflow_lattice_dot__5a9e=rb_intern("Minsize_Dataflow_lattice_dot__5a9e");
    sy_Minsize_Dataflow_lattice_dot__b0f6=rb_intern("Minsize_Dataflow_lattice_dot__b0f6");
    sy_Minsize_Dataflow_lattice_dot__e0e5=rb_intern("Minsize_Dataflow_lattice_dot__e0e5");
    sy_Minsize_Dataflow_lattice_lb__bbba=rb_intern("Minsize_Dataflow_lattice_lb__bbba");
    sy_Minsize_Dataflow_lattice_lb__fdee=rb_intern("Minsize_Dataflow_lattice_lb__fdee");
    rb_define_method(cls_Minsize_Dataflow,"first",Minsize_Dataflow_first,0);
    rb_define_method(cls_Minsize_Dataflow,"first_Minsize_Dataflow",Minsize_Dataflow_first_Minsize_Dataflow,0);
    rb_define_method(cls_Minsize_Dataflow,"getvalue",Minsize_Dataflow_getvalue,1);

    cls_Maxsize_Dataflow=rb_define_class("Maxsize_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow")));
    failobj=rb_eval_string("FAIL");
    switchhash_Maxsize_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Maxsize_Dataflow_1);;
    switchhash_Maxsize_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Maxsize_Dataflow_2);;
    switchhash_Maxsize_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");
    rb_global_variable(&switchhash_Maxsize_Dataflow_3);;
    sy_Maxsize_Dataflow_Compiler_558e=rb_intern("Maxsize_Dataflow_Compiler_558e");
    sy_Maxsize_Dataflow__append_lp__d113=rb_intern("Maxsize_Dataflow__append_lp__d113");
    sy_Maxsize_Dataflow__at_vis_eq_bin_8b89=rb_intern("Maxsize_Dataflow__at_vis_eq_bin_8b89");
    sy_Maxsize_Dataflow__d41d=rb_intern("Maxsize_Dataflow__d41d");
    sy_Maxsize_Dataflow__lp_=rb_intern("Maxsize_Dataflow__lp_");
    sy_Maxsize_Dataflow__lp_Compile_7f7b=rb_intern("Maxsize_Dataflow__lp_Compile_7f7b");
    sy_Maxsize_Dataflow_bind_lb_1_rb_=rb_intern("Maxsize_Dataflow_bind_lb_1_rb_");
    sy_Maxsize_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Maxsize_Dataflow_bind_lb_1_rb__dot__159a");
    sy_Maxsize_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Maxsize_Dataflow_bind_lb_1_rb__dot__a37c");
    sy_Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Maxsize_Dataflow_bind_lb_1_rb__dot__c5d5");
    sy_Maxsize_Dataflow_lattice_dot__5a9e=rb_intern("Maxsize_Dataflow_lattice_dot__5a9e");
    sy_Maxsize_Dataflow_lattice_dot__b0f6=rb_intern("Maxsize_Dataflow_lattice_dot__b0f6");
    sy_Maxsize_Dataflow_lattice_dot__e0e5=rb_intern("Maxsize_Dataflow_lattice_dot__e0e5");
    sy_Maxsize_Dataflow_lattice_lb__bbba=rb_intern("Maxsize_Dataflow_lattice_lb__bbba");
    sy_Maxsize_Dataflow_lattice_lb__fdee=rb_intern("Maxsize_Dataflow_lattice_lb__fdee");
    rb_define_method(cls_Maxsize_Dataflow,"first",Maxsize_Dataflow_first,0);
    rb_define_method(cls_Maxsize_Dataflow,"first_Maxsize_Dataflow",Maxsize_Dataflow_first_Maxsize_Dataflow,0);
    rb_define_method(cls_Maxsize_Dataflow,"getvalue",Maxsize_Dataflow_getvalue,1);

    cls_Switch_Char_Dataflow=rb_define_class("Switch_Char_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow")));
    failobj=rb_eval_string("FAIL");
    switchhash_Switch_Char_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Char_Dataflow_1);;
    switchhash_Switch_Char_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Char_Dataflow_2);;
    switchhash_Switch_Char_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Char_Dataflow_3);;
    sy_Switch_Char_Dataflow_Compiler_558e=rb_intern("Switch_Char_Dataflow_Compiler_558e");
    sy_Switch_Char_Dataflow__append_lp__d113=rb_intern("Switch_Char_Dataflow__append_lp__d113");
    sy_Switch_Char_Dataflow__at_vis_eq_bin_8b89=rb_intern("Switch_Char_Dataflow__at_vis_eq_bin_8b89");
    sy_Switch_Char_Dataflow__d41d=rb_intern("Switch_Char_Dataflow__d41d");
    sy_Switch_Char_Dataflow__lp_=rb_intern("Switch_Char_Dataflow__lp_");
    sy_Switch_Char_Dataflow__lp_Compile_7f7b=rb_intern("Switch_Char_Dataflow__lp_Compile_7f7b");
    sy_Switch_Char_Dataflow_bind_lb_1_rb_=rb_intern("Switch_Char_Dataflow_bind_lb_1_rb_");
    sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Switch_Char_Dataflow_bind_lb_1_rb__dot__159a");
    sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Switch_Char_Dataflow_bind_lb_1_rb__dot__a37c");
    sy_Switch_Char_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Switch_Char_Dataflow_bind_lb_1_rb__dot__c5d5");
    sy_Switch_Char_Dataflow_firstcha_f284=rb_intern("Switch_Char_Dataflow_firstcha_f284");
    sy_Switch_Char_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Char_Dataflow_lattice_dot__5a9e");
    sy_Switch_Char_Dataflow_lattice_dot__b0f6=rb_intern("Switch_Char_Dataflow_lattice_dot__b0f6");
    sy_Switch_Char_Dataflow_lattice_dot__e0e5=rb_intern("Switch_Char_Dataflow_lattice_dot__e0e5");
    sy_Switch_Char_Dataflow_regchar_lp__90af=rb_intern("Switch_Char_Dataflow_regchar_lp__90af");
    rb_define_method(cls_Switch_Char_Dataflow,"first",Switch_Char_Dataflow_first,0);
    rb_define_method(cls_Switch_Char_Dataflow,"first_Switch_Char_Dataflow",Switch_Char_Dataflow_first_Switch_Char_Dataflow,0);
    rb_define_method(cls_Switch_Char_Dataflow,"getvalue",Switch_Char_Dataflow_getvalue,1);

    cls_Switch_Clas_Dataflow=rb_define_class("Switch_Clas_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow")));
    failobj=rb_eval_string("FAIL");
    switchhash_Switch_Clas_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Clas_Dataflow_1);;
    switchhash_Switch_Clas_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Clas_Dataflow_2);;
    switchhash_Switch_Clas_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Class\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Clas_Dataflow_3);;
    switchhash_Switch_Clas_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");
    rb_global_variable(&switchhash_Switch_Clas_Dataflow_4);;
    sy_Switch_Clas_Dataflow_Compiler_558e=rb_intern("Switch_Clas_Dataflow_Compiler_558e");
    sy_Switch_Clas_Dataflow__append_lp__d113=rb_intern("Switch_Clas_Dataflow__append_lp__d113");
    sy_Switch_Clas_Dataflow__at_vis_eq_bin_8b89=rb_intern("Switch_Clas_Dataflow__at_vis_eq_bin_8b89");
    sy_Switch_Clas_Dataflow__d41d=rb_intern("Switch_Clas_Dataflow__d41d");
    sy_Switch_Clas_Dataflow__lp_=rb_intern("Switch_Clas_Dataflow__lp_");
    sy_Switch_Clas_Dataflow__lp_Compile_7f7b=rb_intern("Switch_Clas_Dataflow__lp_Compile_7f7b");
    sy_Switch_Clas_Dataflow_bind_lb_1_rb_=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb_");
    sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb__dot__159a");
    sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb__dot__a37c");
    sy_Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Switch_Clas_Dataflow_bind_lb_1_rb__dot__c5d5");
    sy_Switch_Clas_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Clas_Dataflow_lattice_dot__5a9e");
    sy_Switch_Clas_Dataflow_lattice_dot__b0f6=rb_intern("Switch_Clas_Dataflow_lattice_dot__b0f6");
    sy_Switch_Clas_Dataflow_lattice_lb__78fa=rb_intern("Switch_Clas_Dataflow_lattice_lb__78fa");
    rb_define_method(cls_Switch_Clas_Dataflow,"first",Switch_Clas_Dataflow_first,0);
    rb_define_method(cls_Switch_Clas_Dataflow,"first_Switch_Clas_Dataflow",Switch_Clas_Dataflow_first_Switch_Clas_Dataflow,0);
    rb_define_method(cls_Switch_Clas_Dataflow,"getvalue",Switch_Clas_Dataflow_getvalue,1);

    cls_Cant_Fail_Dataflow=rb_define_class("Cant_Fail_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow")));
    failobj=rb_eval_string("FAIL");
    switchhash_Cant_Fail_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Lookahead\nnext h[k]=3 if k<=Or\nnext h[k]=4 if k<=Pass\nnext h[k]=5 if k<=Object\n}");
    rb_global_variable(&switchhash_Cant_Fail_Dataflow_1);;
    switchhash_Cant_Fail_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Cut\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Cant_Fail_Dataflow_2);;
    switchhash_Cant_Fail_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Cut\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Cant_Fail_Dataflow_3);;
    switchhash_Cant_Fail_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch\nnext h[k]=14 if k<=Object\n}");
    rb_global_variable(&switchhash_Cant_Fail_Dataflow_4);;
    sy_Cant_Fail_Dataflow_Compiler_558e=rb_intern("Cant_Fail_Dataflow_Compiler_558e");
    sy_Cant_Fail_Dataflow__append_lp__d113=rb_intern("Cant_Fail_Dataflow__append_lp__d113");
    sy_Cant_Fail_Dataflow__at_vis_eq_bin_8b89=rb_intern("Cant_Fail_Dataflow__at_vis_eq_bin_8b89");
    sy_Cant_Fail_Dataflow__d41d=rb_intern("Cant_Fail_Dataflow__d41d");
    sy_Cant_Fail_Dataflow__lp_=rb_intern("Cant_Fail_Dataflow__lp_");
    sy_Cant_Fail_Dataflow__lp_Compile_7f7b=rb_intern("Cant_Fail_Dataflow__lp_Compile_7f7b");
    sy_Cant_Fail_Dataflow__lp_src_dot_pre_c6b8=rb_intern("Cant_Fail_Dataflow__lp_src_dot_pre_c6b8");
    sy_Cant_Fail_Dataflow_bind_lb_1_rb_=rb_intern("Cant_Fail_Dataflow_bind_lb_1_rb_");
    sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__159a=rb_intern("Cant_Fail_Dataflow_bind_lb_1_rb__dot__159a");
    sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__a37c=rb_intern("Cant_Fail_Dataflow_bind_lb_1_rb__dot__a37c");
    sy_Cant_Fail_Dataflow_bind_lb_1_rb__dot__c5d5=rb_intern("Cant_Fail_Dataflow_bind_lb_1_rb__dot__c5d5");
    sy_Cant_Fail_Dataflow_lattice_dot__3340=rb_intern("Cant_Fail_Dataflow_lattice_dot__3340");
    sy_Cant_Fail_Dataflow_lattice_dot__4869=rb_intern("Cant_Fail_Dataflow_lattice_dot__4869");
    sy_Cant_Fail_Dataflow_lattice_dot__5a9e=rb_intern("Cant_Fail_Dataflow_lattice_dot__5a9e");
    sy_Cant_Fail_Dataflow_lattice_dot__b0f6=rb_intern("Cant_Fail_Dataflow_lattice_dot__b0f6");
    sy_Cant_Fail_Dataflow_lattice_lb__0ff9=rb_intern("Cant_Fail_Dataflow_lattice_lb__0ff9");
    sy_Cant_Fail_Dataflow_src_dot_to_5e99=rb_intern("Cant_Fail_Dataflow_src_dot_to_5e99");
    rb_define_method(cls_Cant_Fail_Dataflow,"first",Cant_Fail_Dataflow_first,0);
    rb_define_method(cls_Cant_Fail_Dataflow,"first_Cant_Fail_Dataflow",Cant_Fail_Dataflow_first_Cant_Fail_Dataflow,0);
    rb_define_method(cls_Cant_Fail_Dataflow,"getvalue",Cant_Fail_Dataflow_getvalue,1);

    cls_Detect_First=rb_define_class("Detect_First",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    switchhash_Detect_First_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_First_1);;
    switchhash_Detect_First_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_First_2);;
    switchhash_Detect_First_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_First_3);;
    switchhash_Detect_First_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_First_4);;
    sy_Detect_First__append_lp__d113=rb_intern("Detect_First__append_lp__d113");
    sy_Detect_First__at_name_eq_sr_362f=rb_intern("Detect_First__at_name_eq_sr_362f");
    sy_Detect_First__do_rules_eq__le__ab16=rb_intern("Detect_First__do_rules_eq__le__ab16");
    sy_Detect_First__lp_cant_fa_17ef=rb_intern("Detect_First__lp_cant_fa_17ef");
    sy_Detect_First__lp_must_em_43e9=rb_intern("Detect_First__lp_must_em_43e9");
    sy_Detect_First_src_25d9=rb_intern("Detect_First_src_25d9");
    sy_Detect_First_src_dot_rule_5acf=rb_intern("Detect_First_src_dot_rule_5acf");
    sy_Detect_First_src_dot_rule_a719=rb_intern("Detect_First_src_dot_rule_a719");
    rb_define_method(cls_Detect_First,"cant_fail",Detect_First_cant_fail,0);
    rb_define_method(cls_Detect_First,"itrans",Detect_First_itrans,0);
    rb_define_method(cls_Detect_First,"must_empty",Detect_First_must_empty,0);
    rb_define_method(cls_Detect_First,"object_only",Detect_First_object_only,0);
    rb_define_method(cls_Detect_First,"root",Detect_First_root,0);
    rb_define_method(cls_Detect_First,"string_only",Detect_First_string_only,0);

    cls_Detect_Switch_Char=rb_define_class("Detect_Switch_Char",rb_const_get(rb_cObject,rb_intern("Detect_First")));
    failobj=rb_eval_string("FAIL");
    switchhash_Detect_Switch_Char_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_10);;
    switchhash_Detect_Switch_Char_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Many\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_1);;
    switchhash_Detect_Switch_Char_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_2);;
    switchhash_Detect_Switch_Char_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_3);;
    switchhash_Detect_Switch_Char_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_4);;
    switchhash_Detect_Switch_Char_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_5);;
    switchhash_Detect_Switch_Char_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_6);;
    switchhash_Detect_Switch_Char_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_7);;
    switchhash_Detect_Switch_Char_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_8);;
    switchhash_Detect_Switch_Char_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Char_9);;
    sy_Detect_Switch_Char_Or_lb__ti_bind_d486=rb_intern("Detect_Switch_Char_Or_lb__ti_bind_d486");
    sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_a321");
    sy_Detect_Switch_Char_Switch_C_6b05=rb_intern("Detect_Switch_Char_Switch_C_6b05");
    sy_Detect_Switch_Char_Switch_C_6c19=rb_intern("Detect_Switch_Char_Switch_C_6c19");
    sy_Detect_Switch_Char__append_lp__d113=rb_intern("Detect_Switch_Char__append_lp__d113");
    sy_Detect_Switch_Char__at_name_eq_sr_362f=rb_intern("Detect_Switch_Char__at_name_eq_sr_362f");
    sy_Detect_Switch_Char__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Char__do_rules_eq__le__ab16");
    sy_Detect_Switch_Char__lb__lb_Lattic_d322=rb_intern("Detect_Switch_Char__lb__lb_Lattic_d322");
    sy_Detect_Switch_Char__lp_2=rb_intern("Detect_Switch_Char__lp_2");
    sy_Detect_Switch_Char__lp_=rb_intern("Detect_Switch_Char__lp_");
    sy_Detect_Switch_Char__lp_src_dot_cla_e144=rb_intern("Detect_Switch_Char__lp_src_dot_cla_e144");
    sy_Detect_Switch_Char_bind_lb_1_rb__dot__0b68=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__0b68");
    sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__a482");
    sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__bb04");
    sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20=rb_intern("Detect_Switch_Char_bind_lb_1_rb__lt__7b20");
    sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651=rb_intern("Detect_Switch_Char_bind_lb_1_rb__pl__4651");
    sy_Detect_Switch_Char_bind_lb_1_rb__sp__6af0=rb_intern("Detect_Switch_Char_bind_lb_1_rb__sp__6af0");
    sy_Detect_Switch_Char_first_lp_sr_3298=rb_intern("Detect_Switch_Char_first_lp_sr_3298");
    sy_Detect_Switch_Char_if_sp_bind_lb__1bed=rb_intern("Detect_Switch_Char_if_sp_bind_lb__1bed");
    sy_Detect_Switch_Char_s_eq_Switch_78a6=rb_intern("Detect_Switch_Char_s_eq_Switch_78a6");
    sy_Detect_Switch_Char_s_eq_Switch_7c35=rb_intern("Detect_Switch_Char_s_eq_Switch_7c35");
    sy_Detect_Switch_Char_s_eq_Switch_df23=rb_intern("Detect_Switch_Char_s_eq_Switch_df23");
    sy_Detect_Switch_Char_s_eq_Switch_eb1e=rb_intern("Detect_Switch_Char_s_eq_Switch_eb1e");
    sy_Detect_Switch_Char_src_25d9=rb_intern("Detect_Switch_Char_src_25d9");
    sy_Detect_Switch_Char_src_dot_ary_d5cf=rb_intern("Detect_Switch_Char_src_dot_ary_d5cf");
    sy_Detect_Switch_Char_src_dot_rule_5acf=rb_intern("Detect_Switch_Char_src_dot_rule_5acf");
    sy_Detect_Switch_Char_src_dot_rule_a719=rb_intern("Detect_Switch_Char_src_dot_rule_a719");
    sy_first=rb_intern("first");
    rb_define_method(cls_Detect_Switch_Char,"combine_or",Detect_Switch_Char_combine_or,1);
    rb_define_method(cls_Detect_Switch_Char,"combine_seq",Detect_Switch_Char_combine_seq,1);
    rb_define_method(cls_Detect_Switch_Char,"itrans",Detect_Switch_Char_itrans,0);
    rb_define_method(cls_Detect_Switch_Char,"root",Detect_Switch_Char_root,0);
    rb_define_method(cls_Detect_Switch_Char,"traverse",Detect_Switch_Char_traverse,0);
    rb_define_method(cls_Detect_Switch_Char,"traverse_item",Detect_Switch_Char_traverse_item,0);
    rb_define_method(cls_Detect_Switch_Char,"visit",Detect_Switch_Char_visit,0);

    cls_Detect_Switch_Clas=rb_define_class("Detect_Switch_Clas",rb_const_get(rb_cObject,rb_intern("Detect_First")));
    failobj=rb_eval_string("FAIL");
    switchhash_Detect_Switch_Clas_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_10);;
    switchhash_Detect_Switch_Clas_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_1);;
    switchhash_Detect_Switch_Clas_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_2);;
    switchhash_Detect_Switch_Clas_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Class\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_3);;
    switchhash_Detect_Switch_Clas_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_4);;
    switchhash_Detect_Switch_Clas_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_5);;
    switchhash_Detect_Switch_Clas_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_6);;
    switchhash_Detect_Switch_Clas_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_7);;
    switchhash_Detect_Switch_Clas_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_8);;
    switchhash_Detect_Switch_Clas_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Switch_Clas_9);;
    sy_Detect_Switch_Clas_Or_lb__ti_bind_d486=rb_intern("Detect_Switch_Clas_Or_lb__ti_bind_d486");
    sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321=rb_intern("Detect_Switch_Clas_Seq_lb__ti__lp_bi_a321");
    sy_Detect_Switch_Clas_Switch_C_06c2=rb_intern("Detect_Switch_Clas_Switch_C_06c2");
    sy_Detect_Switch_Clas_Switch_C_63f7=rb_intern("Detect_Switch_Clas_Switch_C_63f7");
    sy_Detect_Switch_Clas_Switch_C_7ba7=rb_intern("Detect_Switch_Clas_Switch_C_7ba7");
    sy_Detect_Switch_Clas__append_lp__d113=rb_intern("Detect_Switch_Clas__append_lp__d113");
    sy_Detect_Switch_Clas__at_name_eq_sr_362f=rb_intern("Detect_Switch_Clas__at_name_eq_sr_362f");
    sy_Detect_Switch_Clas__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Clas__do_rules_eq__le__ab16");
    sy_Detect_Switch_Clas__lb__lb_Lattic_62e5=rb_intern("Detect_Switch_Clas__lb__lb_Lattic_62e5");
    sy_Detect_Switch_Clas__lp_2=rb_intern("Detect_Switch_Clas__lp_2");
    sy_Detect_Switch_Clas__lp_=rb_intern("Detect_Switch_Clas__lp_");
    sy_Detect_Switch_Clas__lp_src_dot_cla_e144=rb_intern("Detect_Switch_Clas__lp_src_dot_cla_e144");
    sy_Detect_Switch_Clas_bind_lb_1_rb__dot__6945=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__dot__6945");
    sy_Detect_Switch_Clas_bind_lb_1_rb__dot__76da=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__dot__76da");
    sy_Detect_Switch_Clas_bind_lb_1_rb__dot__a482=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__dot__a482");
    sy_Detect_Switch_Clas_bind_lb_1_rb__lt__7b20=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__lt__7b20");
    sy_Detect_Switch_Clas_bind_lb_1_rb__pl__4651=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__pl__4651");
    sy_Detect_Switch_Clas_bind_lb_1_rb__sp__6af0=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__sp__6af0");
    sy_Detect_Switch_Clas_c_eq_Switch_4e5f=rb_intern("Detect_Switch_Clas_c_eq_Switch_4e5f");
    sy_Detect_Switch_Clas_if_sp_bind_lb__1bed=rb_intern("Detect_Switch_Clas_if_sp_bind_lb__1bed");
    sy_Detect_Switch_Clas_src_25d9=rb_intern("Detect_Switch_Clas_src_25d9");
    sy_Detect_Switch_Clas_src_dot_ary_d5cf=rb_intern("Detect_Switch_Clas_src_dot_ary_d5cf");
    sy_Detect_Switch_Clas_src_dot_rule_5acf=rb_intern("Detect_Switch_Clas_src_dot_rule_5acf");
    sy_Detect_Switch_Clas_src_dot_rule_a719=rb_intern("Detect_Switch_Clas_src_dot_rule_a719");
    sy_first=rb_intern("first");
    rb_define_method(cls_Detect_Switch_Clas,"combine_or",Detect_Switch_Clas_combine_or,1);
    rb_define_method(cls_Detect_Switch_Clas,"combine_seq",Detect_Switch_Clas_combine_seq,1);
    rb_define_method(cls_Detect_Switch_Clas,"itrans",Detect_Switch_Clas_itrans,0);
    rb_define_method(cls_Detect_Switch_Clas,"root",Detect_Switch_Clas_root,0);
    rb_define_method(cls_Detect_Switch_Clas,"traverse",Detect_Switch_Clas_traverse,0);
    rb_define_method(cls_Detect_Switch_Clas,"traverse_item",Detect_Switch_Clas_traverse_item,0);
    rb_define_method(cls_Detect_Switch_Clas,"visit",Detect_Switch_Clas_visit,0);

    cls_Detect_Size=rb_define_class("Detect_Size",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    switchhash_Detect_Size_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Size_1);;
    switchhash_Detect_Size_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Size_2);;
    sy_Detect_Size_Or_dot_creat_49b2=rb_intern("Detect_Size_Or_dot_creat_49b2");
    sy_Detect_Size_Seq_dot_crea_bfbb=rb_intern("Detect_Size_Seq_dot_crea_bfbb");
    sy_Detect_Size__append_lp__d113=rb_intern("Detect_Size__append_lp__d113");
    sy_Detect_Size__lb_bind_lb_1_rb__2d76=rb_intern("Detect_Size__lb_bind_lb_1_rb__2d76");
    sy_Detect_Size__sh_lowleve_46e8=rb_intern("Detect_Size__sh_lowleve_46e8");
    sy_Detect_Size_bind_lb_1_rb__eq__28f0=rb_intern("Detect_Size_bind_lb_1_rb__eq__28f0");
    sy_Detect_Size_bind_lb_1_rb__gt__f573=rb_intern("Detect_Size_bind_lb_1_rb__gt__f573");
    sy_Detect_Size_minsize_lp__01f0=rb_intern("Detect_Size_minsize_lp__01f0");
    rb_define_method(cls_Detect_Size,"predicate",Detect_Size_predicate,1);
    rb_define_method(cls_Detect_Size,"predicate2",Detect_Size_predicate2,1);
    rb_eval_string("testversiondetect_switch('73690737fec77150079485a8fa5f03d5')");
}
