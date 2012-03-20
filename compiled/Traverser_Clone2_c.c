#include "cthyst.h"
#include "memo.c"
VALUE cls_Traverser_Clone2;
VALUE AmethystCore_anything(VALUE self );
VALUE Traverser_Clone2_traverse(VALUE self );
VALUE Traverser_Clone2_traverse_item(VALUE self );
VALUE switchhash_Traverser_Clone2_1;
static VALUE sy_Traverser_Clone2__lp_src_dot_cla_2024;
static VALUE sy_Traverser_Clone2_bind_lb_1_rb__lt__7b20;
static VALUE sy_Traverser_Clone2_bind_lb_1_rb__sp__6af0;
static VALUE sy_Traverser_Clone2_if_sp_bind_lb__1bed;
static VALUE sy_visit;
VALUE profile_report_Traverser_Clone2(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Traverser_Clone2_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Traverser_Clone2__lp_src_dot_cla_2024,1,bind2);
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
        it=Traverser_Clone2_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Traverser_Clone2_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Traverser_Clone2_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

fail:
    return it;
}
VALUE Traverser_Clone2_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Traverser_Clone2_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12_result=__result;
        it=rb_funcall(self,sy_visit,0);
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
        it=Traverser_Clone2_traverse(self );
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
    case 1/*Array*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22_result=__result;
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        }
        __result=it;;

        ;
        goto accept2;
alt2_2:
        __result=lalt22_result;
        ptr->pos=oldpos2;
        VALUE lalt23_result=__result;
        VALUE lalt23autovar_3=_autovar_3;
        VALUE lalt23ar=_ar;
        VALUE lalt23it=_it;
        VALUE lalt23autovar_4=_autovar_4;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_3);
        it=rb_ary_new3(0);
        _ar=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE lalt32ar=_ar;
            VALUE lalt32it=_it;
            it=Traverser_Clone2_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Traverser_Clone2_bind_lb_1_rb__lt__7b20,1,bind2);
            _ar=bind_aget(bind2,1);;
            _it=bind_aget(bind2,2);;
            ;
            goto accept3;
alt3_2:
            _ar=lalt32ar;
            _it=lalt32it;
            ptr->pos=oldpos3;
            VALUE lalt33ar=_ar;
            VALUE lalt33it=_it;
            stop1=1;
            ;
            goto accept3;
alt3_3:
            _ar=lalt33ar;
            _it=lalt33it;
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto pass2;
            };
accept3:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass2;
        }
        it=_ar;
        _autovar_4=it;;

        goto success2;
pass2:
        *ptr=oldpass2;
        if (1) {
            it=failobj;
            goto alt2_3;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_4;
        __result=it;;

        ;
        goto accept2;
alt2_3:
        __result=lalt23_result;
        _autovar_3=lalt23autovar_3;
        _ar=lalt23ar;
        _it=lalt23it;
        _autovar_4=lalt23autovar_4;
        ptr->pos=oldpos2;
        VALUE lalt24_result=__result;
        VALUE lalt24autovar_3=_autovar_3;
        VALUE lalt24ar=_ar;
        VALUE lalt24it=_it;
        VALUE lalt24autovar_4=_autovar_4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_4;
        }
        __result=it;;

        ;
        goto accept2;
alt2_4:
        __result=lalt24_result;
        _autovar_3=lalt24autovar_3;
        _ar=lalt24ar;
        _it=lalt24it;
        _autovar_4=lalt24autovar_4;
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept2:
        ;
        break;
    case 2/*Object*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        VALUE lalt42_result=__result;
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto alt4_2;
        }
        __result=it;;

        ;
        goto accept4;
alt4_2:
        __result=lalt42_result;
        ptr->pos=oldpos4;
        VALUE lalt43_result=__result;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_3;
        }
        __result=it;;

        ;
        goto accept4;
alt4_3:
        __result=lalt43_result;
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto fail;
        };
accept4:
        ;
        break;
    }
fail:
    return it;
}
void Init_Traverser_Clone2_c() {
    cls_Traverser_Clone2=rb_define_class("Traverser_Clone2",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Traverser_Clone2,"profile_report",profile_report_Traverser_Clone2,0);
    switchhash_Traverser_Clone2_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Traverser_Clone2_1);;
    sy_Traverser_Clone2__lp_src_dot_cla_2024=rb_intern("Traverser_Clone2__lp_src_dot_cla_2024");
    sy_Traverser_Clone2_bind_lb_1_rb__lt__7b20=rb_intern("Traverser_Clone2_bind_lb_1_rb__lt__7b20");
    sy_Traverser_Clone2_bind_lb_1_rb__sp__6af0=rb_intern("Traverser_Clone2_bind_lb_1_rb__sp__6af0");
    sy_Traverser_Clone2_if_sp_bind_lb__1bed=rb_intern("Traverser_Clone2_if_sp_bind_lb__1bed");
    sy_visit=rb_intern("visit");
    rb_define_method(cls_Traverser_Clone2,"traverse",Traverser_Clone2_traverse,0);
    rb_define_method(cls_Traverser_Clone2,"traverse_item",Traverser_Clone2_traverse_item,0);
}
