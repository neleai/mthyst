#include "cthyst.h"
#include "memo.c"
VALUE cls_Anon1;
VALUE AmethystCore_anything(VALUE self );
VALUE Anon1_expr(VALUE self );
VALUE Anon1_init(VALUE self );
static VALUE s_a_0cc1;
static VALUE s_b_92eb;
static VALUE sy___at_bind_eq_bi_6dcc;
static VALUE sy___do_passit_eq__fc0a;
static VALUE sy__bind_lb_1_rb__eq__afc0;
static VALUE sy_spaces;
VALUE profile_report_Anon1(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Anon1_expr(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,__result_2,__result_3;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,__result);
    it=rb_funcall(self,sy__bind_lb_1_rb__eq__afc0,1,bind2);
    __result=bind_aget(bind2,1);;
    it=rb_funcall(self,sy_spaces,0);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '`':
        ;
    case 'c' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case 'a' ... 'a':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s_a_0cc1);
        __result_2=it;;
        it=__result_2;
        __result_3=it;;
        it=__result_3;
        __result=it;;
        break;
    case 'b' ... 'b':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s_b_92eb);
        __result_2=it;;
        it=__result_2;
        __result_3=it;;
        it=__result_3;
        __result=it;;
        break;
    }
    bind_aset(bind2,1,__result);
    it=rb_funcall(self,sy___do_passit_eq__fc0a,1,bind2);
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
    sy___do_passit_eq__fc0a=rb_intern("__do_passit_eq__fc0a");
    sy__bind_lb_1_rb__eq__afc0=rb_intern("_bind_lb_1_rb__eq__afc0");
    sy_spaces=rb_intern("spaces");
    rb_define_method(cls_Anon1,"expr",Anon1_expr,0);
    rb_define_method(cls_Anon1,"init",Anon1_init,0);
}
