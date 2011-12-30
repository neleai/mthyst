#include "cthyst.h"
VALUE cls_Tests;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Tests_postfixed(VALUE self );
VALUE Tests_sw(VALUE self );
VALUE Tests_test(VALUE self );
static VALUE i_1;
static VALUE i_42;
static VALUE s__d41d;
static VALUE s__rb__0fbd;
static VALUE s_c_4a8a;
static VALUE s_d_8277;
static VALUE sy_Tests_Many_lb_bin_594a;
static VALUE sy_Tests_bind_lb_1_rb__eq__4992;
static VALUE sy_expression;
static VALUE sy_name;
VALUE Tests_postfixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_obj_clone(s__d41d); bind_aset(bind,0/*s*/,it);
 it=bind_aget(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,0/*s*/);  it=rb_funcall(self,sy_name,0); FAILTEST(fail); bind_aset(bind,1/*from*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(42) ... UC(43):;case UC(58) ... UC(58):;case UC(61) ... UC(61):;case UC(63) ... UC(63):; it=rb_funcall(self,sy_Tests_Many_lb_bin_594a,1,bind);  bind_aset(bind,1/*from*/,it);
 break;case UC(91) ... UC(91):; if (strncmp(ame_curstr(self),"[",1)) goto break1; else ame_setpos(self,ame_getpos(self)+1);  it=rb_funcall(self,sy_expression,0); FAILTEST(break1); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_Tests_bind_lb_1_rb__eq__4992,1,bind);   it=Amethyst_spaces(self ); FAILTEST(break1);it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,0/*s*/,it);
if (strncmp(ame_curstr(self),"]",1)) goto break1; else ame_setpos(self,ame_getpos(self)+1);it=bind_aget(bind,1/*from*/); bind_aset(bind,1/*from*/,it);
 break;default:;   it=Amethyst_fails(self ); FAILTEST(break1); break;} if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,1/*from*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
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
s__d41d=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__d41d);
s__rb__0fbd=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rb__0fbd);
s_c_4a8a=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_c_4a8a);
s_d_8277=rb_str_new2("d");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_d_8277);
sy_Tests_Many_lb_bin_594a=rb_intern("Tests_Many_lb_bin_594a");
sy_Tests_bind_lb_1_rb__eq__4992=rb_intern("Tests_bind_lb_1_rb__eq__4992");
sy_expression=rb_intern("expression");
sy_name=rb_intern("name");
rb_define_method(cls_Tests,"postfixed",Tests_postfixed,0);
rb_define_method(cls_Tests,"sw",Tests_sw,0);
rb_define_method(cls_Tests,"test",Tests_test,0);
 rb_eval_string("testversiontests('afcea89fe5db3e3143f0b265d1adac7e')");}
