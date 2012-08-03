#include "cthyst.h"
#include "memo.c"
VALUE cls_Anon1;
VALUE AmethystCore_anything(VALUE self );
VALUE Anon1_expr(VALUE self );
VALUE Anon1_init(VALUE self );
static VALUE s_;
static VALUE sy_Anon1__at_bind_eq_bi_6dcc;
static VALUE sy_Anon1__do_passit_eq__5012;
static VALUE sy_Anon1_bind_lb_1_rb__eq__91ac;
static VALUE sy_seq;
VALUE profile_report_Anon1(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  return Qnil;}VALUE Anon1_expr(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil;VALUE bind2=bind_new2(1);  VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);bind_aset(bind2,1,__result);it=rb_funcall(self,sy_Anon1_bind_lb_1_rb__eq__91ac,1,bind2);__result=bind_aget(bind2,1);; it=rb_obj_clone(s_); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); if (it==failobj){it=failobj;goto fail;} __result=it;;
bind_aset(bind2,1,__result);it=rb_funcall(self,sy_Anon1__do_passit_eq__5012,1,bind2);__result=bind_aget(bind2,1);;
fail: return it;
}
VALUE Anon1_init(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;} _autovar=it;;
bind_aset(bind2,1,_autovar);it=rb_funcall(self,sy_Anon1__at_bind_eq_bi_6dcc,1,bind2);_autovar=bind_aget(bind2,1);; __result=it;;

fail: return it;
}
void Init_Anon1_c(){ 
 cls_Anon1=rb_define_class("Anon1",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    rb_define_method(cls_Anon1,"profile_report",profile_report_Anon1,0);
s_=rb_str_new2("|");rb_global_variable(&s_);
sy_Anon1__at_bind_eq_bi_6dcc=rb_intern("Anon1__at_bind_eq_bi_6dcc");
sy_Anon1__do_passit_eq__5012=rb_intern("Anon1__do_passit_eq__5012");
sy_Anon1_bind_lb_1_rb__eq__91ac=rb_intern("Anon1_bind_lb_1_rb__eq__91ac");
sy_seq=rb_intern("seq");
                    rb_define_method(cls_Anon1,"expr",Anon1_expr,0);
rb_define_method(cls_Anon1,"init",Anon1_init,0);
                    }
