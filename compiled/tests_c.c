#include "cthyst.h"
VALUE cls_Tests;
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Tests_foo(VALUE self );
VALUE Tests_sw(VALUE self );
VALUE Tests_test(VALUE self );
static VALUE i_1;
static VALUE i_42;
static VALUE s_c_4a8a;
static VALUE s_d_8277;
static VALUE sy_Tests_bind_lb_2_rb__pl__e5df;
static VALUE sy_bar;
VALUE Tests_foo(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Tests_foo(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,sy_bar,0); FAILTEST(alt1_3); bind_aset(bind,1/*bar*/,it);
it=rb_funcall(self,sy_Tests_bind_lb_2_rb__pl__e5df,1,bind);  bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Tests_sw(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(100) ... UC(100):; if (strncmp(ame_curstr(self),"d",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s_d_8277); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 break;case UC(97) ... UC(97):; if (strncmp(ame_curstr(self),"a",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);if (strncmp(ame_curstr(self),"c",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s_c_4a8a); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 break;case UC(98) ... UC(98):; if (strncmp(ame_curstr(self),"b",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);if (strncmp(ame_curstr(self),"c",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s_c_4a8a); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 break;default:;   it=Amethyst_fails(self ); FAILTEST(fail); break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Tests_test(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2);if (strncmp(ame_curstr(self),"a",1)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+1);it=i_1; bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=i_42; bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_tests_c(){ 
 cls_Tests=rb_define_class("Tests",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_1);
i_42=rb_funcall(rb_str_new2("42"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_42);
s_c_4a8a=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_c_4a8a);
s_d_8277=rb_str_new2("d");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_d_8277);
sy_Tests_bind_lb_2_rb__pl__e5df=rb_intern("Tests_bind_lb_2_rb__pl__e5df");
sy_bar=rb_intern("bar");
rb_define_method(cls_Tests,"foo",Tests_foo,0);
rb_define_method(cls_Tests,"sw",Tests_sw,0);
rb_define_method(cls_Tests,"test",Tests_test,0);
 rb_eval_string("testversiontests('cb54fb38718fd6ee434438f6d1d382da')");}
