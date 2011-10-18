#include "cthyst.h"
VALUE cls_Tests;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE Amethyst_fails(VALUE self );
VALUE Tests_sw(VALUE self );
VALUE c_21;
VALUE c_22;
VALUE c_23;
VALUE c_24;
VALUE c_25;
VALUE c_26;
VALUE c_27;
VALUE c_28;
VALUE Tests_sw(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('d') ... UC('d'):;  it=rb_obj_clone(c_21); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_22);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  break;case UC('a') ... UC('a'):;  it=rb_obj_clone(c_23); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail); it=rb_obj_clone(c_24); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_25);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  break;case UC('b') ... UC('b'):;  it=rb_obj_clone(c_26); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail); it=rb_obj_clone(c_27); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_28);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  break;default:;   it=Amethyst_fails(self ); FAILTEST(fail); break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
void Init_tests_c(){ 
 cls_Tests=rb_define_class("Tests",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_21=rb_str_new2("d");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_21);
c_22=rb_str_new2("d");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_22);
c_23=rb_str_new2("a");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_23);
c_24=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_24);
c_25=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_25);
c_26=rb_str_new2("b");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_26);
c_27=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_27);
c_28=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_28);
rb_define_method(cls_Tests,"sw",Tests_sw,0);
 rb_eval_string("testversiontests('adf169a6b215543be82ad74de5869a4a')");}
