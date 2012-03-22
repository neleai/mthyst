#include "cthyst.h"
#include "memo.c"
VALUE cls_Anon1;
VALUE AmethystCore_anything(VALUE self );
VALUE Anon1_expr(VALUE self );
VALUE Anon1_init(VALUE self );
static VALUE s_bar_37b5;
static VALUE s_foo_acbd;
static VALUE sy_Anon1__at_bind_eq_bi_6dcc;
static VALUE sy_Anon1__do_passit_eq__323b;
static VALUE sy_Anon1_bind_lb_1_rb__dot__3c0b;
static VALUE sy_Anon1_bind_lb_1_rb__eq__4f37;
static VALUE sy_token;
VALUE profile_report_Anon1(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Anon1_expr(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_it=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(2);
    VALUE arg0;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_it);
    bind_aset(bind2,2,__result);
    it=rb_funcall(self,sy_Anon1_bind_lb_1_rb__eq__4f37,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=bind_aget(bind2,2);;
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    VALUE revert1it=rb_funcall(_it,rb_intern("dup"),0);
    it=rb_obj_clone(s_foo_acbd);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto revert1;
    }
    _it=it;;

    ;
    goto accept2;
revert1:
    ;
    _it=revert1it;
    goto alt1_2;
accept2:
    ;

    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    VALUE revert2it=rb_funcall(_it,rb_intern("dup"),0);
    it=rb_obj_clone(s_bar_37b5);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto revert2;
    }
    _it=it;;

    ;
    goto accept3;
revert2:
    ;
    _it=revert2it;
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
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy_Anon1_bind_lb_1_rb__dot__3c0b,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=it;;
    bind_aset(bind2,1,_it);
    bind_aset(bind2,2,__result);
    it=rb_funcall(self,sy_Anon1__do_passit_eq__323b,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Anon1_init(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
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
    s_bar_37b5=rb_str_new2("bar");
    rb_global_variable(&s_bar_37b5);
    s_foo_acbd=rb_str_new2("foo");
    rb_global_variable(&s_foo_acbd);
    sy_Anon1__at_bind_eq_bi_6dcc=rb_intern("Anon1__at_bind_eq_bi_6dcc");
    sy_Anon1__do_passit_eq__323b=rb_intern("Anon1__do_passit_eq__323b");
    sy_Anon1_bind_lb_1_rb__dot__3c0b=rb_intern("Anon1_bind_lb_1_rb__dot__3c0b");
    sy_Anon1_bind_lb_1_rb__eq__4f37=rb_intern("Anon1_bind_lb_1_rb__eq__4f37");
    sy_token=rb_intern("token");
    rb_define_method(cls_Anon1,"expr",Anon1_expr,0);
    rb_define_method(cls_Anon1,"init",Anon1_init,0);
}
