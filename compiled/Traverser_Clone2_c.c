#include "cthyst.h"
#include "memo.c"
VALUE cls_Traverser_Clone2;
VALUE AmethystCore_anything(VALUE self );
VALUE Traverser_Clone2_root(VALUE self );
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
VALUE Traverser_Clone2_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Qnil;
    __result=it;;

fail:
    return it;
}
VALUE Traverser_Clone2_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;
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
        it=Traverser_Clone2_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Traverser_Clone2_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        ;
        goto accept2;
revert1:
        ;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept3;
revert2:
        ;
        goto alt1_3;
accept3:
        ;

        ;
        goto accept1;
alt1_3:
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
    VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;
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
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        __result=it;;

        ;
        goto accept2;
revert1:
        ;
        goto alt1_2;
accept2:
        ;

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
            goto revert2;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;

        ;
        goto accept3;
revert2:
        ;
        goto alt1_3;
accept3:
        ;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert3;
        }
        __result=it;;

        ;
        goto accept4;
revert3:
        ;
        goto alt1_4;
accept4:
        ;

        ;
        goto accept1;
alt1_4:
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
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto revert4;
        }
        __result=it;;

        ;
        goto accept6;
revert4:
        ;
        goto alt2_2;
accept6:
        ;

        ;
        goto accept5;
alt2_2:
        ptr->pos=oldpos2;
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
            it=Traverser_Clone2_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto revert6;
            }
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy_Traverser_Clone2_bind_lb_1_rb__lt__7b20,1,bind2);
            _ar=bind_aget(bind2,1);;
            _it=bind_aget(bind2,2);;
            ;
            goto accept9;
revert6:
            ;
            goto alt3_2;
accept9:
            ;

            ;
            goto accept8;
alt3_2:
            ptr->pos=oldpos3;
            stop1=1;
            ;
            goto accept10;
revert7:
            ;
            goto alt3_3;
accept10:
            ;

            ;
            goto accept8;
alt3_3:
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto pass2;
            };
accept8:
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
            goto revert5;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_4;
        __result=it;;

        ;
        goto accept7;
revert5:
        ;
        goto alt2_3;
accept7:
        ;

        ;
        goto accept5;
alt2_3:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert8;
        }
        __result=it;;

        ;
        goto accept11;
revert8:
        ;
        goto alt2_4;
accept11:
        ;

        ;
        goto accept5;
alt2_4:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept5:
        ;
        break;
    case 2/*Object*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto revert9;
        }
        __result=it;;

        ;
        goto accept13;
revert9:
        ;
        goto alt4_2;
accept13:
        ;

        ;
        goto accept12;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert10;
        }
        __result=it;;

        ;
        goto accept14;
revert10:
        ;
        goto alt4_3;
accept14:
        ;

        ;
        goto accept12;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto fail;
        };
accept12:
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
    rb_define_method(cls_Traverser_Clone2,"root",Traverser_Clone2_root,0);
    rb_define_method(cls_Traverser_Clone2,"traverse",Traverser_Clone2_traverse,0);
    rb_define_method(cls_Traverser_Clone2,"traverse_item",Traverser_Clone2_traverse_item,0);
}
