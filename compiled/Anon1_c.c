#include "cthyst.h"
#include "memo.c"
VALUE cls_Anon1;
VALUE AmethystCore_anything(VALUE self );
VALUE Anon1_expr(VALUE self );
VALUE Anon1_init(VALUE self );
static VALUE sy_Anon1__at_bind_eq_bi_6dcc;
static VALUE sy_Anon1__do_passit_eq__797b;
static VALUE sy_Anon1_bind_lb_1_rb__eq__b0fb;
VALUE profile_report_Anon1(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Anon1_expr(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_x,_y,_z,__result,_autovar,_autovar_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_y);
    bind_aset(bind2,3,_z);
    bind_aset(bind2,4,__result);
    it=rb_funcall(self,sy_Anon1_bind_lb_1_rb__eq__b0fb,1,bind2);
    _x=bind_aget(bind2,1);;
    _y=bind_aget(bind2,2);;
    _z=bind_aget(bind2,3);;
    __result=bind_aget(bind2,4);;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _x=it;;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto pass1;
    }
    _y=it;;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto pass1;
    }
    _z=it;;
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
        goto fail;
    }
success1:
    *ptr=oldpass1;
    it=_autovar_2;
    __result=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_y);
    bind_aset(bind2,3,_z);
    bind_aset(bind2,4,__result);
    it=rb_funcall(self,sy_Anon1__do_passit_eq__797b,1,bind2);
    _x=bind_aget(bind2,1);;
    _y=bind_aget(bind2,2);;
    _z=bind_aget(bind2,3);;
    __result=bind_aget(bind2,4);;
fail:
    return it;
}
VALUE Anon1_init(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _autovar=it;;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy_Anon1__at_bind_eq_bi_6dcc,1,bind2);
    _autovar=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
void Init_Anon1_c() {
    cls_Anon1=rb_define_class("Anon1",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Anon1,"profile_report",profile_report_Anon1,0);
    sy_Anon1__at_bind_eq_bi_6dcc=rb_intern("Anon1__at_bind_eq_bi_6dcc");
    sy_Anon1__do_passit_eq__797b=rb_intern("Anon1__do_passit_eq__797b");
    sy_Anon1_bind_lb_1_rb__eq__b0fb=rb_intern("Anon1_bind_lb_1_rb__eq__b0fb");
    rb_define_method(cls_Anon1,"expr",Anon1_expr,0);
    rb_define_method(cls_Anon1,"init",Anon1_init,0);
}
