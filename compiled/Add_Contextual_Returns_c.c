#include "cthyst.h"
#include "memo.c"
VALUE cls_Add_Contextual_Returns;
VALUE Add_Contextual_Returns_root(VALUE self );
VALUE Add_Contextual_Returns_traverse(VALUE self );
VALUE Add_Contextual_Returns_traverse_item(VALUE self );
VALUE Add_Contextual_Returns_visit(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE switchhash_Add_Contextual_Returns_1;
VALUE switchhash_Add_Contextual_Returns_2;
VALUE switchhash_Add_Contextual_Returns_3;
static VALUE sy__Seq_lb_src;
static VALUE sy___at__contex_5f56;
static VALUE sy___at__contex_cdb3;
static VALUE sy___at__contex_d6d5;
static VALUE sy___lb_bind_lb_1_rb__1469;
static VALUE sy___lp_src_dot_cla_2024;
static VALUE sy__bind_lb_1_rb__eq__e05f;
static VALUE sy__bind_lb_1_rb__lb__ec72;
static VALUE sy__bind_lb_1_rb__lt__7b20;
static VALUE sy__bind_lb_1_rb__sp__6af0;
static VALUE sy__if_sp_bind_lb__1bed;
static VALUE sy__src_dot_dup_d768;
static VALUE sy_traverse;
static VALUE sy_traverse_item;
static VALUE sy_visit;
VALUE profile_report_Add_Contextual_Returns(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Add_Contextual_Returns_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_t,__result,_autovar_6;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy___at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=rb_funcall(self,sy__src_dot_dup_d768,1,bind2);
    _autovar_3=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_3;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 1/*Object*/:
        ;
        if (1) {
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
        else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
        else ary=rb_ary_new3(0);
        ptr->ary2=ary;
        ptr->ary=RARRAY_PTR(ary);
        ptr->len=RARRAY_LEN(ary);
    }
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy__bind_lb_1_rb__lb__ec72,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=rb_funcall(self,sy_traverse,0);
    if (it==failobj) {
        it=failobj;
        goto pass2;
    }
    _t=it;;
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
        goto fail;
    }
success2:
    *ptr=oldpass2;
    bind_aset(bind2,1,_t);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy__bind_lb_1_rb__eq__e05f,1,bind2);
    _t=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    __result=it;;
    _autovar_6=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_6);
    it=rb_funcall(self,sy___at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_6=bind_aget(bind2,2);;
fail:
    return it;
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
    it=rb_funcall(self,sy___lp_src_dot_cla_2024,1,bind2);
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
    ptr->src=_autovar_2;
    if(TYPE(ptr->src)==T_STRING) {
        ptr->str=RSTRING_PTR(ptr->src);
        ptr->len=RSTRING_LEN(ptr->src);
    }
    else {
        VALUE ary;
        if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
        else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
        else ary=rb_ary_new3(0);
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
        it=rb_funcall(self,sy_traverse_item,0);
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy__if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

fail:
    return it;
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
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_funcall(self,sy_traverse,0);
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
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_4;
        }
        __result=it;;

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
            goto alt2_2;
        }
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
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
            it=rb_funcall(self,sy_traverse_item,0);
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy__bind_lb_1_rb__lt__7b20,1,bind2);
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
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_4;
        }
        __result=it;;

        ;
        goto accept2;
alt2_4:
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
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto alt4_2;
        }
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_3;
        }
        __result=it;;

        ;
        goto accept4;
alt4_3:
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
VALUE Add_Contextual_Returns_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,__result,_autovar_5,_autovar_6,_name;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy___at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        cstruct oldpass1=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        ptr->pos=ptr->len;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy__Seq_lb_src,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _autovar_4=it;;
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
        it=_autovar_4;
        __result=it;;
        _autovar_5=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_5);
        it=rb_funcall(self,sy___at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_5=bind_aget(bind2,2);;
        break;
    case 1/*Contextual_Return*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy___at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_6=it;;
        cstruct oldpass2=*ptr;
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
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _name=it;;
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
            goto fail;
        }
success2:
        *ptr=oldpass2;
        bind_aset(bind2,1,_autovar_2);
        bind_aset(bind2,2,_name);
        it=rb_funcall(self,sy___lb_bind_lb_1_rb__1469,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _name=bind_aget(bind2,2);;
        __result=it;;
        _autovar_5=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_5);
        it=rb_funcall(self,sy___at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_5=bind_aget(bind2,2);;
        break;
    case 2/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy___at__contex_5f56,1,bind2);
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
void Init_Add_Contextual_Returns_c() {
    cls_Add_Contextual_Returns=rb_define_class("Add_Contextual_Returns",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Add_Contextual_Returns,"profile_report",profile_report_Add_Contextual_Returns,0);
    switchhash_Add_Contextual_Returns_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Returns_1);;
    switchhash_Add_Contextual_Returns_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Contextual_Return\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Returns_2);;
    switchhash_Add_Contextual_Returns_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Returns_3);;
    sy__Seq_lb_src=rb_intern("_Seq_lb_src");
    sy___at__contex_5f56=rb_intern("__at__contex_5f56");
    sy___at__contex_cdb3=rb_intern("__at__contex_cdb3");
    sy___at__contex_d6d5=rb_intern("__at__contex_d6d5");
    sy___lb_bind_lb_1_rb__1469=rb_intern("__lb_bind_lb_1_rb__1469");
    sy___lp_src_dot_cla_2024=rb_intern("__lp_src_dot_cla_2024");
    sy__bind_lb_1_rb__eq__e05f=rb_intern("_bind_lb_1_rb__eq__e05f");
    sy__bind_lb_1_rb__lb__ec72=rb_intern("_bind_lb_1_rb__lb__ec72");
    sy__bind_lb_1_rb__lt__7b20=rb_intern("_bind_lb_1_rb__lt__7b20");
    sy__bind_lb_1_rb__sp__6af0=rb_intern("_bind_lb_1_rb__sp__6af0");
    sy__if_sp_bind_lb__1bed=rb_intern("_if_sp_bind_lb__1bed");
    sy__src_dot_dup_d768=rb_intern("_src_dot_dup_d768");
    sy_traverse=rb_intern("traverse");
    sy_traverse_item=rb_intern("traverse_item");
    sy_visit=rb_intern("visit");
    rb_define_method(cls_Add_Contextual_Returns,"root",Add_Contextual_Returns_root,0);
    rb_define_method(cls_Add_Contextual_Returns,"traverse",Add_Contextual_Returns_traverse,0);
    rb_define_method(cls_Add_Contextual_Returns,"traverse_item",Add_Contextual_Returns_traverse_item,0);
    rb_define_method(cls_Add_Contextual_Returns,"visit",Add_Contextual_Returns_visit,0);
}