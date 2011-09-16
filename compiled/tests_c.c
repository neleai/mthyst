#include "cthyst.h"
VALUE cls_Tests;
VALUE Tests_seq(VALUE self ,VALUE a0);
VALUE Tests_sw(VALUE self );
VALUE Tests_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_ary_entry(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Tests_sw(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  it=rb_str_new2("a"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2("a"); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  it=rb_str_new2("b"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);it=rb_str_new2("b"); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 it=rb_str_new2("c"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2("c");
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("d"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_str_new2("d");
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_tests_c(){ 
 cls_Tests=rb_define_class("Tests",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Tests,"seq",Tests_seq,1);
rb_define_method(cls_Tests,"sw",Tests_sw,0);
 rb_eval_string("testversiontests('21d4c130f717e41cb5128c7db389d0c3')");}
