#include "cthyst.h"
#include "memo.c"
VALUE cls_Anon1;
VALUE AmethystCore_anything(VALUE self );
VALUE Anon1_expr(VALUE self );
VALUE Anon1_init(VALUE self );
static VALUE s_a_0cc1;
static VALUE s_b_92eb;
static VALUE sy___at_bind_eq_bi_6dcc;
static VALUE sy___do_passit_eq__5012;
static VALUE sy__bind_lb_1_rb__eq__91ac;
static VALUE sy_seq;
VALUE profile_report_Anon1(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Anon1_expr(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,__result);
    it=rb_funcall(self,sy__bind_lb_1_rb__eq__91ac,1,bind2);
    __result=bind_aget(bind2,1);;
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=rb_obj_clone(s_a_0cc1);
    arg0=it;
    it=rb_funcall(self,sy_seq,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto alt1_2;
    }
    __result=it;;

    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    it=rb_obj_clone(s_b_92eb);
    arg0=it;
    it=rb_funcall(self,sy_seq,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto alt1_3;
    }
    __result=it;;

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
    bind_aset(bind2,1,__result);
    it=rb_funcall(self,sy___do_passit_eq__5012,1,bind2);
    __result=bind_aget(bind2,1);;
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
    it=rb_funcall(self,sy___at_bind_eq_bi_6dcc,1,bind2);
    _autovar=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
void Init_Anon1_c() {
    cls_Anon1=rb_define_class("Anon1",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Anon1,"profile_report",profile_report_Anon1,0);
    s_a_0cc1=rb_str_new2("a");
    rb_global_variable(&s_a_0cc1);
    s_b_92eb=rb_str_new2("b");
    rb_global_variable(&s_b_92eb);
    sy___at_bind_eq_bi_6dcc=rb_intern("__at_bind_eq_bi_6dcc");
    sy___do_passit_eq__5012=rb_intern("__do_passit_eq__5012");
    sy__bind_lb_1_rb__eq__91ac=rb_intern("_bind_lb_1_rb__eq__91ac");
    sy_seq=rb_intern("seq");
    rb_define_method(cls_Anon1,"expr",Anon1_expr,0);
    rb_define_method(cls_Anon1,"init",Anon1_init,0);
}
