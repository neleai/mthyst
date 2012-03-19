#include "cthyst.h"
#include "memo.c"
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
VALUE profile_report_Constant_Propagator(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Constant_Propagator_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_it,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _it=it;;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy_Constant_Propagator__at_depend_eq__07a9,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE Constant_Propagator_step(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_el,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_expr,_autovar_10,_autovar_11,_val,_autovar_12,_autovar_13,_autovar_14,__result;
    VALUE bind2=bind_new2(16);
    _el=a0;;
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
        ame_setsrc2(self,_autovar_2);
        switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Lambda*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Constant_Propagator_Constant_8840,1,bind2);
            _autovar_4=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto pass2;
            }
success3:
            *ptr=oldpass3;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass2;
            }
            it=_autovar_4;
            _autovar_5=it;;
            break;
        case 1/*Local*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_6=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_6);
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy_Constant_Propagator_src_25d9,1,bind2);
            arg0=it;
            it=rb_funcall(self,sy_valof,1,arg0);
            if (it==failobj) {
                it=failobj;
                goto pass4;
            }
            _autovar_7=it;;
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
                goto pass2;
            }
success4:
            *ptr=oldpass4;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass2;
            }
            it=_autovar_7;
            _autovar_5=it;;
            break;
        case 2/*Object*/:
            ;
            if (1) {
                it=failobj;
                goto pass2;
            }
            break;
        }
        goto success2;
pass2:
        *ptr=oldpass2;
        if (1) {
            it=failobj;
            goto alt1_2;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_5;
        _autovar_8=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind2);
        _autovar_8=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept1:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
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
        ame_setsrc2(self,_autovar_9);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _expr=it;;
        it=_expr;
        arg0=it;
        it=rb_funcall(self,sy_valof,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _autovar_10=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass5;
        }
        goto success5;
pass5:
        *ptr=oldpass5;
        if (1) {
            it=failobj;
            goto alt2_2;
        }
success5:
        *ptr=oldpass5;
        it=_autovar_10;
        _autovar_8=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind2);
        _autovar_8=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept2:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
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
        ame_setsrc2(self,_autovar_11);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Constant_Propagator_src_25d9,1,bind2);
        _val=it;;
        bind_aset(bind2,1,_val);
        it=rb_funcall(self,sy_Constant_Propagator_Constant_db03,1,bind2);
        _val=bind_aget(bind2,1);;
        _autovar_12=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass6;
        }
        goto success6;
pass6:
        *ptr=oldpass6;
        if (1) {
            it=failobj;
            goto alt3_2;
        }
success6:
        *ptr=oldpass6;
        it=_autovar_12;
        _autovar_8=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_3;
        }
        it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind2);
        _autovar_8=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept3:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
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
        ame_setsrc2(self,_autovar_13);
        ptr->pos=ptr->len;
        bind_aset(bind2,1,_el);
        it=rb_funcall(self,sy_Constant_Propagator_a_eq_Consta_2e1d,1,bind2);
        _el=bind_aget(bind2,1);;
        _autovar_14=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass7;
        }
        goto success7;
pass7:
        *ptr=oldpass7;
        if (1) {
            it=failobj;
            goto alt4_2;
        }
success7:
        *ptr=oldpass7;
        it=_autovar_14;
        _autovar_8=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_3;
        }
        it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind2);
        _autovar_8=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept4:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 4/*Object*/:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind2);
        _autovar_8=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
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
    it=_autovar_8;
    __result=it;;

fail:
    return it;
}
void Init_Constant_Propagator_c() {
    cls_Constant_Propagator=rb_define_class("Constant_Propagator",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Constant_Propagator,"profile_report",profile_report_Constant_Propagator,0);
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
}
