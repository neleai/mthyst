#include "cthyst.h"
#include "memo.c"
VALUE cls_Lam;
VALUE Lam_baz(VALUE self ,VALUE a0);
VALUE Lam_foo(VALUE self ,VALUE a0);
VALUE Lam_lam(VALUE self );
static VALUE sy_Lam__at_context_0dcc;
static VALUE sy_Lam__at_context_2721;
static VALUE sy_Lam_bind_lb_1_rb__eq__f4b0;
static VALUE sy_apply;
static VALUE sy_bar;
VALUE profile_report_Lam(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Lam_baz(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_autovar=Qnil,_x=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
    _x=a0;;
    VALUE arg0;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Lam_bind_lb_1_rb__eq__f4b0,1,bind2);
    _autovar=bind_aget(bind2,1);;
    it=_x;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Lam__at_context_0dcc,1,bind2);
    _autovar=bind_aget(bind2,1);;
    __result=it;;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Lam__at_context_2721,1,bind2);
    _autovar=bind_aget(bind2,1);;
fail:
    return it;
}
VALUE Lam_foo(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_autovar=Qnil,_x=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
    _x=a0;;
    VALUE arg0;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Lam_bind_lb_1_rb__eq__f4b0,1,bind2);
    _autovar=bind_aget(bind2,1);;
    it=_x;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Lam__at_context_0dcc,1,bind2);
    _autovar=bind_aget(bind2,1);;
    __result=it;;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Lam__at_context_2721,1,bind2);
    _autovar=bind_aget(bind2,1);;
fail:
    return it;
}
VALUE Lam_lam(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Lam_bind_lb_1_rb__eq__f4b0,1,bind2);
    _autovar=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Lam_bind_lb_1_rb__eq__f4b0,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=rb_funcall(self,sy_bar,0);
    if (it==failobj) {
        it=failobj;
        goto revert1;
    }
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
    bind_aset(bind2,1,_autovar_3);
    it=rb_funcall(self,sy_Lam_bind_lb_1_rb__eq__f4b0,1,bind2);
    _autovar_3=bind_aget(bind2,1);;
    it=Lam_lam(self );
    bind_aset(bind2,1,_autovar_3);
    it=rb_funcall(self,sy_Lam__at_context_0dcc,1,bind2);
    _autovar_3=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar_3);
    it=rb_funcall(self,sy_Lam__at_context_2721,1,bind2);
    _autovar_3=bind_aget(bind2,1);;
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
        goto fail;
    };
accept1:
    ;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Lam__at_context_0dcc,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Lam__at_context_2721,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Lam__at_context_0dcc,1,bind2);
    _autovar=bind_aget(bind2,1);;
    __result=it;;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Lam__at_context_2721,1,bind2);
    _autovar=bind_aget(bind2,1);;
fail:
    return it;
}
void Init_Lam_c() {
    cls_Lam=rb_define_class("Lam",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Lam,"profile_report",profile_report_Lam,0);
    sy_Lam__at_context_0dcc=rb_intern("Lam__at_context_0dcc");
    sy_Lam__at_context_2721=rb_intern("Lam__at_context_2721");
    sy_Lam_bind_lb_1_rb__eq__f4b0=rb_intern("Lam_bind_lb_1_rb__eq__f4b0");
    sy_apply=rb_intern("apply");
    sy_bar=rb_intern("bar");
    rb_define_method(cls_Lam,"baz",Lam_baz,1);
    rb_define_method(cls_Lam,"foo",Lam_foo,1);
    rb_define_method(cls_Lam,"lam",Lam_lam,0);
}
