#include "cthyst.h"
#include "memo.c"
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
VALUE switchhash_Resolve_Calls_5;
VALUE switchhash_Resolve_Calls_6;
VALUE switchhash_Resolve_Calls_7;
static VALUE sy_Resolve_Calls__at__contex_5f56;
static VALUE sy_Resolve_Calls__at__contex_cdb3;
static VALUE sy_Resolve_Calls__at__contex_d6d5;
static VALUE sy_Resolve_Calls__lp_src_dot_cla_2024;
static VALUE sy_Resolve_Calls_a_eq_Apply_lb__36f8;
static VALUE sy_Resolve_Calls_a_eq_Apply_lb__f488;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__lb__7c6b;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__lb__9d9a;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__lt__7b20;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__sp__6af0;
static VALUE sy_Resolve_Calls_if_sp_bind_lb__1bed;
static VALUE sy_Resolve_Calls_src_dot_name_80f3;
static VALUE sy_Resolve_Calls_super_na_296f;
VALUE profile_report_Resolve_Calls(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Resolve_Calls_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,__result,_autovar_7;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Resolve_Calls__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _autovar_3=it;;
    bind_aset(bind2,1,_autovar_2);
    bind_aset(bind2,2,_autovar_3);
    it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__lb__7c6b,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    _autovar_3=bind_aget(bind2,2);;
    switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_4=it;;
        break;
    case 1/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar_4);
    it=rb_funcall(self,sy_Resolve_Calls_src_dot_name_80f3,1,bind2);
    _autovar_5=it;;
    bind_aset(bind2,1,_autovar_2);
    bind_aset(bind2,2,_autovar_5);
    it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__lb__9d9a,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    _autovar_5=bind_aget(bind2,2);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Resolve_Calls__at__contex_d6d5,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=Resolve_Calls_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto pass1;
    }
    _autovar_6=it;;
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
        goto fail;
    }
success1:
    *ptr=oldpass1;
    it=_autovar_6;
    __result=it;;
    _autovar_7=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_7);
    it=rb_funcall(self,sy_Resolve_Calls__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_7=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Resolve_Calls_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Resolve_Calls__lp_src_dot_cla_2024,1,bind2);
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
    if (it==failobj) {
        it=failobj;
        goto pass1;
    }
    _autovar_2=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar_2);
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12nvars=_nvars;
        VALUE lalt12it=_it;
        it=Resolve_Calls_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        ;
        goto accept1;
alt1_2:
        _nvars=lalt12nvars;
        _it=lalt12it;
        ptr->pos=oldpos1;
        VALUE lalt13nvars=_nvars;
        VALUE lalt13it=_it;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        _nvars=lalt13nvars;
        _it=lalt13it;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto pass2;
        };
accept1:
        ;
    }
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
        goto pass1;
    }
success2:
    *ptr=oldpass2;
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
        goto fail;
    }
success1:
    *ptr=oldpass1;
    bind_aset(bind2,1,_ivars);
    bind_aset(bind2,2,_nvars);
    it=rb_funcall(self,sy_Resolve_Calls_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

fail:
    return it;
}
VALUE Resolve_Calls_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12_result=__result;
            it=Resolve_Calls_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            __result=it;;

            ;
            goto accept1;
alt1_2:
            __result=lalt12_result;
            ptr->pos=oldpos1;
            VALUE lalt13_result=__result;
            VALUE lalt13autovar=_autovar;
            VALUE lalt13autovar_2=_autovar_2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Resolve_Calls_traverse(self );
            if (it==failobj) {
                it=failobj;
                goto pass1;
            }
            _autovar_2=it;;
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
                goto alt1_3;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept1;
alt1_3:
            __result=lalt13_result;
            _autovar=lalt13autovar;
            _autovar_2=lalt13autovar_2;
            ptr->pos=oldpos1;
            VALUE lalt14_result=__result;
            VALUE lalt14autovar=_autovar;
            VALUE lalt14autovar_2=_autovar_2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_4;
            }
            __result=it;;

            ;
            goto accept1;
alt1_4:
            __result=lalt14_result;
            _autovar=lalt14autovar;
            _autovar_2=lalt14autovar_2;
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case 1/*Object*/:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22_result=__result;
            VALUE lalt22autovar=_autovar;
            VALUE lalt22autovar_2=_autovar_2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Resolve_Calls_traverse(self );
            if (it==failobj) {
                it=failobj;
                goto pass2;
            }
            _autovar_2=it;;
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
                goto alt2_2;
            }
success2:
            *ptr=oldpass2;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept2;
alt2_2:
            __result=lalt22_result;
            _autovar=lalt22autovar;
            _autovar_2=lalt22autovar_2;
            ptr->pos=oldpos2;
            VALUE lalt23_result=__result;
            VALUE lalt23autovar=_autovar;
            VALUE lalt23autovar_2=_autovar_2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            __result=it;;

            ;
            goto accept2;
alt2_3:
            __result=lalt23_result;
            _autovar=lalt23autovar;
            _autovar_2=lalt23autovar_2;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto fail;
            };
accept2:
            ;
            break;
        }
        break;
    case 1/*Array*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_6,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE lalt32_result=__result;
            it=Resolve_Calls_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            __result=it;;

            ;
            goto accept3;
alt3_2:
            __result=lalt32_result;
            ptr->pos=oldpos3;
            VALUE lalt33_result=__result;
            VALUE lalt33autovar_3=_autovar_3;
            VALUE lalt33ar=_ar;
            VALUE lalt33it=_it;
            VALUE lalt33autovar_4=_autovar_4;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_ary_new3(0);
            _ar=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos4=ptr->pos;
                int cut4=0;
alt4_1:
                ;
                VALUE lalt42ar=_ar;
                VALUE lalt42it=_it;
                it=Resolve_Calls_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt4_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept4;
alt4_2:
                _ar=lalt42ar;
                _it=lalt42it;
                ptr->pos=oldpos4;
                VALUE lalt43ar=_ar;
                VALUE lalt43it=_it;
                stop1=1;
                ;
                goto accept4;
alt4_3:
                _ar=lalt43ar;
                _it=lalt43it;
                ptr->pos=oldpos4;
                if (1) {
                    it=failobj;
                    goto pass3;
                };
accept4:
                ;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            it=_ar;
            _autovar_4=it;;

            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto alt3_3;
            }
success3:
            *ptr=oldpass3;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept3;
alt3_3:
            __result=lalt33_result;
            _autovar_3=lalt33autovar_3;
            _ar=lalt33ar;
            _it=lalt33it;
            _autovar_4=lalt33autovar_4;
            ptr->pos=oldpos3;
            VALUE lalt34_result=__result;
            VALUE lalt34autovar_3=_autovar_3;
            VALUE lalt34ar=_ar;
            VALUE lalt34it=_it;
            VALUE lalt34autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_4;
            }
            __result=it;;

            ;
            goto accept3;
alt3_4:
            __result=lalt34_result;
            _autovar_3=lalt34autovar_3;
            _ar=lalt34ar;
            _it=lalt34it;
            _autovar_4=lalt34autovar_4;
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto fail;
            };
accept3:
            ;
            break;
        case 1/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            VALUE lalt52_result=__result;
            VALUE lalt52autovar_3=_autovar_3;
            VALUE lalt52ar=_ar;
            VALUE lalt52it=_it;
            VALUE lalt52autovar_4=_autovar_4;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_ary_new3(0);
            _ar=it;;
            int stop2=0;
            while(!stop2) {
                int oldpos6=ptr->pos;
                int cut6=0;
alt6_1:
                ;
                VALUE lalt62ar=_ar;
                VALUE lalt62it=_it;
                it=Resolve_Calls_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt6_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept6;
alt6_2:
                _ar=lalt62ar;
                _it=lalt62it;
                ptr->pos=oldpos6;
                VALUE lalt63ar=_ar;
                VALUE lalt63it=_it;
                stop2=1;
                ;
                goto accept6;
alt6_3:
                _ar=lalt63ar;
                _it=lalt63it;
                ptr->pos=oldpos6;
                if (1) {
                    it=failobj;
                    goto pass4;
                };
accept6:
                ;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass4;
            }
            it=_ar;
            _autovar_4=it;;

            goto success4;
pass4:
            *ptr=oldpass4;
            if (1) {
                it=failobj;
                goto alt5_2;
            }
success4:
            *ptr=oldpass4;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept5;
alt5_2:
            __result=lalt52_result;
            _autovar_3=lalt52autovar_3;
            _ar=lalt52ar;
            _it=lalt52it;
            _autovar_4=lalt52autovar_4;
            ptr->pos=oldpos5;
            VALUE lalt53_result=__result;
            VALUE lalt53autovar_3=_autovar_3;
            VALUE lalt53ar=_ar;
            VALUE lalt53it=_it;
            VALUE lalt53autovar_4=_autovar_4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_3;
            }
            __result=it;;

            ;
            goto accept5;
alt5_3:
            __result=lalt53_result;
            _autovar_3=lalt53autovar_3;
            _ar=lalt53ar;
            _it=lalt53it;
            _autovar_4=lalt53autovar_4;
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto fail;
            };
accept5:
            ;
            break;
        }
        break;
    case 2/*Object*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_7,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            VALUE lalt72_result=__result;
            it=Resolve_Calls_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            __result=it;;

            ;
            goto accept7;
alt7_2:
            __result=lalt72_result;
            ptr->pos=oldpos7;
            VALUE lalt73_result=__result;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_3;
            }
            __result=it;;

            ;
            goto accept7;
alt7_3:
            __result=lalt73_result;
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto fail;
            };
accept7:
            ;
            break;
        case 1/*Object*/:
            ;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto fail;
            }
            __result=it;;
            break;
        }
        break;
    }
fail:
    return it;
}
VALUE Resolve_Calls_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,__result,_autovar_9,_autovar_10,_name,_autovar_11,_autovar_12,_autovar_13;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Resolve_Calls__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        it=_autovar_3;
        _autovar_4=it;;
        it=_autovar_4;
        _autovar_5=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12autovar_6=_autovar_6;
        VALUE lalt12autovar_7=_autovar_7;
        VALUE lalt12autovar_8=_autovar_8;
        VALUE lalt12_result=__result;
        VALUE lalt12autovar_9=_autovar_9;
        it=_autovar_5;
        _autovar_6=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_6);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _autovar_7=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_7);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'r':
            ;
        case 't' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass2;
            }
            break;
        case 's' ... 's':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='u'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='e'&&ame_curstr2(ptr)[3]=='r')  ptr->pos+=4;
            else if (1) {
                it=failobj;
                goto pass2;
            }
            break;
        }
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
            goto pass1;
        }
success2:
        *ptr=oldpass2;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Resolve_Calls_super_na_296f,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _autovar_8=it;;
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
        it=_autovar_8;
        __result=it;;
        _autovar_9=it;;

        ;
        goto accept1;
alt1_2:
        _autovar_2=lalt12autovar_2;
        _autovar_6=lalt12autovar_6;
        _autovar_7=lalt12autovar_7;
        _autovar_8=lalt12autovar_8;
        __result=lalt12_result;
        _autovar_9=lalt12autovar_9;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13autovar_6=_autovar_6;
        VALUE lalt13autovar_7=_autovar_7;
        VALUE lalt13autovar_8=_autovar_8;
        VALUE lalt13_result=__result;
        VALUE lalt13autovar_9=_autovar_9;
        VALUE lalt13autovar_10=_autovar_10;
        VALUE lalt13name=_name;
        VALUE lalt13autovar_11=_autovar_11;
        it=_autovar_5;
        _autovar_10=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_10);
        switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Array*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _name=it;;
            bind_aset(bind2,1,_name);
            it=rb_funcall(self,sy_Resolve_Calls_a_eq_Apply_lb__36f8,1,bind2);
            _name=bind_aget(bind2,1);;
            _autovar_11=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            break;
        case 1/*Object*/:
            ;
            if (1) {
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
            goto alt1_3;
        }
success3:
        *ptr=oldpass3;
        it=_autovar_11;
        __result=it;;
        _autovar_9=it;;

        ;
        goto accept1;
alt1_3:
        _autovar_2=lalt13autovar_2;
        _autovar_6=lalt13autovar_6;
        _autovar_7=lalt13autovar_7;
        _autovar_8=lalt13autovar_8;
        __result=lalt13_result;
        _autovar_9=lalt13autovar_9;
        _autovar_10=lalt13autovar_10;
        _name=lalt13name;
        _autovar_11=lalt13autovar_11;
        ptr->pos=oldpos1;
        VALUE lalt14autovar_2=_autovar_2;
        VALUE lalt14autovar_6=_autovar_6;
        VALUE lalt14autovar_7=_autovar_7;
        VALUE lalt14autovar_8=_autovar_8;
        VALUE lalt14_result=__result;
        VALUE lalt14autovar_9=_autovar_9;
        VALUE lalt14autovar_10=_autovar_10;
        VALUE lalt14name=_name;
        VALUE lalt14autovar_11=_autovar_11;
        VALUE lalt14autovar_12=_autovar_12;
        VALUE lalt14autovar_13=_autovar_13;
        it=_autovar_5;
        _autovar_12=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_12);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass4;
        }
        _name=it;;
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Resolve_Calls_a_eq_Apply_lb__f488,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        _autovar_13=it;;
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
            goto alt1_4;
        }
success4:
        *ptr=oldpass4;
        it=_autovar_13;
        __result=it;;
        _autovar_9=it;;

        ;
        goto accept1;
alt1_4:
        _autovar_2=lalt14autovar_2;
        _autovar_6=lalt14autovar_6;
        _autovar_7=lalt14autovar_7;
        _autovar_8=lalt14autovar_8;
        __result=lalt14_result;
        _autovar_9=lalt14autovar_9;
        _autovar_10=lalt14autovar_10;
        _name=lalt14name;
        _autovar_11=lalt14autovar_11;
        _autovar_12=lalt14autovar_12;
        _autovar_13=lalt14autovar_13;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_9);
        it=rb_funcall(self,sy_Resolve_Calls__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_9=bind_aget(bind2,2);;
        break;
    case 1/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Resolve_Calls__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
void Init_Resolve_Calls_c() {
    cls_Resolve_Calls=rb_define_class("Resolve_Calls",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Resolve_Calls,"profile_report",profile_report_Resolve_Calls,0);
    switchhash_Resolve_Calls_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_1);;
    switchhash_Resolve_Calls_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_2);;
    switchhash_Resolve_Calls_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Array\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_3);;
    switchhash_Resolve_Calls_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_4);;
    switchhash_Resolve_Calls_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_5);;
    switchhash_Resolve_Calls_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_6);;
    switchhash_Resolve_Calls_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_7);;
    sy_Resolve_Calls__at__contex_5f56=rb_intern("Resolve_Calls__at__contex_5f56");
    sy_Resolve_Calls__at__contex_cdb3=rb_intern("Resolve_Calls__at__contex_cdb3");
    sy_Resolve_Calls__at__contex_d6d5=rb_intern("Resolve_Calls__at__contex_d6d5");
    sy_Resolve_Calls__lp_src_dot_cla_2024=rb_intern("Resolve_Calls__lp_src_dot_cla_2024");
    sy_Resolve_Calls_a_eq_Apply_lb__36f8=rb_intern("Resolve_Calls_a_eq_Apply_lb__36f8");
    sy_Resolve_Calls_a_eq_Apply_lb__f488=rb_intern("Resolve_Calls_a_eq_Apply_lb__f488");
    sy_Resolve_Calls_bind_lb_1_rb__lb__7c6b=rb_intern("Resolve_Calls_bind_lb_1_rb__lb__7c6b");
    sy_Resolve_Calls_bind_lb_1_rb__lb__9d9a=rb_intern("Resolve_Calls_bind_lb_1_rb__lb__9d9a");
    sy_Resolve_Calls_bind_lb_1_rb__lt__7b20=rb_intern("Resolve_Calls_bind_lb_1_rb__lt__7b20");
    sy_Resolve_Calls_bind_lb_1_rb__sp__6af0=rb_intern("Resolve_Calls_bind_lb_1_rb__sp__6af0");
    sy_Resolve_Calls_if_sp_bind_lb__1bed=rb_intern("Resolve_Calls_if_sp_bind_lb__1bed");
    sy_Resolve_Calls_src_dot_name_80f3=rb_intern("Resolve_Calls_src_dot_name_80f3");
    sy_Resolve_Calls_super_na_296f=rb_intern("Resolve_Calls_super_na_296f");
    rb_define_method(cls_Resolve_Calls,"root",Resolve_Calls_root,0);
    rb_define_method(cls_Resolve_Calls,"traverse",Resolve_Calls_traverse,0);
    rb_define_method(cls_Resolve_Calls,"traverse_item",Resolve_Calls_traverse_item,0);
    rb_define_method(cls_Resolve_Calls,"visit",Resolve_Calls_visit,0);
}
