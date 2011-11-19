#include "cthyst.h"
VALUE cls_Tests;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Tests_sw(VALUE self );
VALUE Tests_test(VALUE self );
static VALUE c_35;
static VALUE c_36;
static VALUE s_a1;
static VALUE s_b1;
static VALUE s_c1;
static VALUE s_d1;
VALUE Tests_sw(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(100) ... UC(100):;  it=rb_obj_clone(s_d1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(s_d1);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  break;case UC(97) ... UC(97):;  it=rb_obj_clone(s_a1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail); it=rb_obj_clone(s_c1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(s_c1);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  break;case UC(98) ... UC(98):;  it=rb_obj_clone(s_b1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail); it=rb_obj_clone(s_c1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(s_c1);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  break;default:;   it=Amethyst_fails(self ); FAILTEST(fail); break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Tests_test(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); it=rb_obj_clone(s_a1); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=c_35;
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=c_36;
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_tests_c(){ 
 cls_Tests=rb_define_class("Tests",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_35=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_35);
c_36=rb_funcall(rb_str_new2("42"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_36);
s_a1=rb_str_new2("a");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_a1);
s_b1=rb_str_new2("b");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_b1);
s_c1=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_c1);
s_d1=rb_str_new2("d");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_d1);
rb_define_method(cls_Tests,"sw",Tests_sw,0);
rb_define_method(cls_Tests,"test",Tests_test,0);
 rb_eval_string("testversiontests('f26907135c8d9f1b5ada96f855f96582')");}
