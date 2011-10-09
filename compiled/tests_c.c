#include "cthyst.h"
VALUE cls_Tests;
VALUE Tests_seq(VALUE self ,VALUE a0);
VALUE Tests_sw(VALUE self );
VALUE c_23;
VALUE c_24;
VALUE c_25;
VALUE c_26;
VALUE c_27;
VALUE c_28;
VALUE c_29;
VALUE c_30;
VALUE c_31;
VALUE c_32;
VALUE Tests_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_ary_entry(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Tests_sw(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('d') ... UC('d'):;  it=rb_obj_clone(c_23); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_24);
 rb_ary_store(bind,0/*_result*/,it);  break;case UC('a') ... UC('a'):;  it=rb_obj_clone(c_25); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_26); it=rb_obj_clone(c_27); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_28);
 rb_ary_store(bind,0/*_result*/,it);  break;case UC('b') ... UC('b'):;  it=rb_obj_clone(c_29); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_30); it=rb_obj_clone(c_31); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_32);
 rb_ary_store(bind,0/*_result*/,it);  break;default:;   it=CALL(fails,0 ); FAILTEST(fail); break;}it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_tests_c(){ 
 cls_Tests=rb_define_class("Tests",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_23=rb_str_new2("d");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_23);
c_24=rb_str_new2("d");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_24);
c_25=rb_str_new2("a");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_25);
c_26=rb_str_new2("a");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_26);
c_27=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_27);
c_28=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_28);
c_29=rb_str_new2("b");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_29);
c_30=rb_str_new2("b");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_30);
c_31=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_31);
c_32=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_32);
rb_define_method(cls_Tests,"seq",Tests_seq,1);
rb_define_method(cls_Tests,"sw",Tests_sw,0);
 rb_eval_string("testversiontests('20942b9b82dd205277046d86fedf8dba')");}
