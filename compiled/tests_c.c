#include "cthyst.h"
VALUE cls_Tests;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE Amethyst_fails(VALUE self );
VALUE Tests_sw(VALUE self );
static VALUE c_26;
static VALUE c_27;
static VALUE c_28;
static VALUE c_29;
static VALUE c_30;
static VALUE c_31;
static VALUE c_32;
static VALUE c_33;
VALUE Tests_sw(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(100) ... UC(100):;  it=rb_obj_clone(c_26); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_27);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  break;case UC(97) ... UC(97):;  it=rb_obj_clone(c_28); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail); it=rb_obj_clone(c_29); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_30);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  break;case UC(98) ... UC(98):;  it=rb_obj_clone(c_31); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail); it=rb_obj_clone(c_32); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_33);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  break;default:;   it=Amethyst_fails(self ); FAILTEST(fail); break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
void Init_tests_c(){ 
 cls_Tests=rb_define_class("Tests",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_26=rb_str_new2("d");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_26);
c_27=rb_str_new2("d");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_27);
c_28=rb_str_new2("a");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_28);
c_29=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_29);
c_30=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_30);
c_31=rb_str_new2("b");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_31);
c_32=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_32);
c_33=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_33);
rb_define_method(cls_Tests,"sw",Tests_sw,0);
 rb_eval_string("testversiontests('891ae5cab72192dca24fa445505bc421')");}
