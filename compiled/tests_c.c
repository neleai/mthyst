#include "cthyst.h"
VALUE cls_Tests;
VALUE AmethystCore_anything(VALUE self );
VALUE Tests_abc(VALUE self );
VALUE Tests_de(VALUE self );
VALUE Tests_foo(VALUE self );
VALUE Tests_s2(VALUE self );
VALUE Tests_sw(VALUE self );
VALUE Tests_test(VALUE self );
static VALUE i_1;
static VALUE i_3;
static VALUE i_42;
static VALUE s_a_0cc1;
static VALUE s_b_92eb;
static VALUE s_c_4a8a;
static VALUE s_d_8277;
static VALUE s_g_b2f5;
static VALUE sy_Tests_bind_lb_0_rb__pl__3b00;
static VALUE sy_Tests_bind_lb_0_rb__pl__fbc2;
static VALUE sy_Tests_bind_lb_2_rb__pl__e5df;
static VALUE sy_bar;
static VALUE sy_seq;
static VALUE sy_token;
VALUE Tests_abc(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(31):;case '!' ... '`':;case 'd' ... UC(255):; goto fail; break;
case ' ' ... ' ':;case 'a' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Tests_de(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... UC(31):;case '!' ... '`':;case 'f' ... UC(255):; it=i_1; bind_aset(bind,0/*foo*/,it);
int oldpos1=ptr->pos;
alt1_1:;it=rb_funcall(self,sy_Tests_bind_lb_0_rb__pl__fbc2,1,bind); goto alt1_2;
;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_funcall(self,sy_Tests_bind_lb_0_rb__pl__3b00,1,bind); goto alt1_3;
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 'd' ... 'e':; it=i_1; bind_aset(bind,0/*foo*/,it);
int oldpos2=ptr->pos;
alt2_1:;it=rb_funcall(self,sy_Tests_bind_lb_0_rb__pl__fbc2,1,bind); goto alt2_2;
;goto accept2;
alt2_2: ptr->pos=oldpos2;it=rb_funcall(self,sy_Tests_bind_lb_0_rb__pl__3b00,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case ' ' ... ' ':;case 'a' ... 'c':; it=i_1; bind_aset(bind,0/*foo*/,it);
int oldpos3=ptr->pos;
alt3_1:;it=rb_funcall(self,sy_Tests_bind_lb_0_rb__pl__fbc2,1,bind);   it=Tests_abc(self ); FAILTEST(alt3_2); bind_aset(bind,1/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;it=rb_funcall(self,sy_Tests_bind_lb_0_rb__pl__3b00,1,bind); goto alt3_3;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
}
return it;
fail: return failobj; }
VALUE Tests_foo(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ptr->pos;
alt1_1:;  it=Tests_foo(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=rb_funcall(self,sy_bar,0); FAILTEST(alt1_3); bind_aset(bind,1/*bar*/,it);
it=rb_funcall(self,sy_Tests_bind_lb_2_rb__pl__e5df,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Tests_s2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr(self)){case UC(0) ... '`':;case 'c' ... 'c':;case 'g' ... UC(255):;  it=rb_obj_clone(s_g_b2f5); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case 'd' ... 'f':; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);it=i_3; bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1; it=rb_obj_clone(s_g_b2f5); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 'a' ... 'b':; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,0/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2; it=rb_obj_clone(s_g_b2f5); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt2_3); bind_aset(bind,0/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Tests_sw(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ptr->pos;
alt1_1:;int oldpos2=ptr->pos;
alt2_1:; it=rb_obj_clone(s_a_0cc1); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt2_2);
;goto accept2;
alt2_2: ptr->pos=oldpos2; it=rb_obj_clone(s_b_92eb); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt2_3);
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;
 it=rb_obj_clone(s_c_4a8a); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1; it=rb_obj_clone(s_d_8277); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Tests_test(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ptr->pos;
alt1_1:; it=rb_obj_clone(s_a_0cc1); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(alt1_2);it=i_1; bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=i_42; bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
void Init_tests_c(){ 
 cls_Tests=rb_define_class("Tests",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_1);
i_3=rb_funcall(rb_str_new2("3"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_3);
i_42=rb_funcall(rb_str_new2("42"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_42);
s_a_0cc1=rb_str_new2("a");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_a_0cc1);
s_b_92eb=rb_str_new2("b");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_b_92eb);
s_c_4a8a=rb_str_new2("c");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_c_4a8a);
s_d_8277=rb_str_new2("d");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_d_8277);
s_g_b2f5=rb_str_new2("g");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_g_b2f5);
sy_Tests_bind_lb_0_rb__pl__3b00=rb_intern("Tests_bind_lb_0_rb__pl__3b00");
sy_Tests_bind_lb_0_rb__pl__fbc2=rb_intern("Tests_bind_lb_0_rb__pl__fbc2");
sy_Tests_bind_lb_2_rb__pl__e5df=rb_intern("Tests_bind_lb_2_rb__pl__e5df");
sy_bar=rb_intern("bar");
sy_seq=rb_intern("seq");
sy_token=rb_intern("token");
rb_define_method(cls_Tests,"abc",Tests_abc,0);
rb_define_method(cls_Tests,"de",Tests_de,0);
rb_define_method(cls_Tests,"foo",Tests_foo,0);
rb_define_method(cls_Tests,"s2",Tests_s2,0);
rb_define_method(cls_Tests,"sw",Tests_sw,0);
rb_define_method(cls_Tests,"test",Tests_test,0);
 rb_eval_string("testversiontests('f0bfbbe8892f46fead3b310455e1b55e')");}
