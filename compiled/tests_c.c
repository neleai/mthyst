#include "cthyst.h"
VALUE cls_Tests;
VALUE Tests_abc(VALUE self );
VALUE Tests_de(VALUE self );
VALUE Tests_foo(VALUE self );
VALUE Tests_gh(VALUE self );
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
static VALUE sy_Tests_bind_lb_1_rb__eq__58f9;
static VALUE sy_Tests_bind_lb_1_rb__pl__0a71;
static VALUE sy_Tests_bind_lb_1_rb__pl__3b73;
static VALUE sy_Tests_bind_lb_1_rb__pl__61a1;
static VALUE sy_bar;
static VALUE sy_seq;
static VALUE sy_token;
VALUE Tests_abc(VALUE self ){VALUE vals[0];  VALUE var0; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(31):;case '!' ... '`':;case 'd' ... UC(255):; goto fail; break;
case ' ' ... ' ':;case 'a' ... 'c':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var0/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE Tests_de(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(31):;case '!' ... '`':;case 'f' ... UC(255):; it=i_1; var0/*autovar*/=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=var0/*autovar*/; var1/*foo*/=it;;
bind_aset(bind2,1,var1/*foo*/);it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__61a1,1,bind2);var1/*foo*/=bind_aget(bind2,1);;goto alt1_2;
;goto accept1;
alt1_2: ptr->pos=oldpos1;it=var0/*autovar*/; var1/*foo*/=it;;
bind_aset(bind2,1,var1/*foo*/);it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__0a71,1,bind2);var1/*foo*/=bind_aget(bind2,1);;goto alt1_3;
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 'd' ... 'e':; it=i_1; var2/*autovar*/=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=var2/*autovar*/; var1/*foo*/=it;;
bind_aset(bind2,1,var1/*foo*/);it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__61a1,1,bind2);var1/*foo*/=bind_aget(bind2,1);;goto alt2_2;
;goto accept2;
alt2_2: ptr->pos=oldpos2;it=var2/*autovar*/; var1/*foo*/=it;;
bind_aset(bind2,1,var1/*foo*/);it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__0a71,1,bind2);var1/*foo*/=bind_aget(bind2,1);;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var3/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case ' ' ... ' ':;case 'a' ... 'c':; it=i_1; var4/*autovar*/=it;;
int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=var4/*autovar*/; var1/*foo*/=it;;
bind_aset(bind2,1,var1/*foo*/);it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__61a1,1,bind2);var1/*foo*/=bind_aget(bind2,1);;  it=Tests_abc(self ); FAILTEST(alt3_2); var3/*_result*/=it;;

;goto accept3;
alt3_2: ptr->pos=oldpos3;it=var4/*autovar*/; var1/*foo*/=it;;
bind_aset(bind2,1,var1/*foo*/);it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__0a71,1,bind2);var1/*foo*/=bind_aget(bind2,1);;goto alt3_3;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
}
return it;
fail: return failobj; }
VALUE Tests_foo(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=rb_funcall(self,sy_bar,0); FAILTEST(fail); var0/*bar*/=it;;
bind_aset(bind2,1,var1/*foo*/);bind_aset(bind2,2,var0/*bar*/);it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__3b73,1,bind2);var1/*foo*/=bind_aget(bind2,1);;var0/*bar*/=bind_aget(bind2,2);; var2/*_result*/=it;;
int stop1=0; while(!stop1){ bind_aset(bind2,1,var3/*autovar*/);bind_aset(bind2,2,var2/*_result*/);it=rb_funcall(self,sy_Tests_bind_lb_1_rb__eq__58f9,1,bind2);var3/*autovar*/=bind_aget(bind2,1);;var2/*_result*/=bind_aget(bind2,2);;it=var2/*_result*/; var2/*_result*/=it;;
 } 
return it;
fail: return failobj; }
VALUE Tests_gh(VALUE self ){VALUE vals[0];  VALUE var0; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Tests_foo(self ); FAILTEST(alt1_2); var0/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;cut1=1;it=i_42; var0/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;if (cut1) goto fail;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Tests_s2(VALUE self ){VALUE vals[0];  VALUE var0; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'c' ... 'c':;case 'g' ... UC(255):;  it=rb_obj_clone(s_g_b2f5); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(fail); var0/*_result*/=it;;
 break;
case 'd' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=i_3; var0/*_result*/=it;;
 break;
case 'a' ... 'b':; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var0/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1; it=rb_obj_clone(s_g_b2f5); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_3); var0/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
}
return it;
fail: return failobj; }
VALUE Tests_sw(VALUE self ){VALUE vals[0];  VALUE var0; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;int oldpos2=ptr->pos;int cut2=0;
alt2_1:; it=rb_obj_clone(s_a_0cc1); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt2_2);
;goto accept2;
alt2_2: ptr->pos=oldpos2; it=rb_obj_clone(s_b_92eb); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt2_3);
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;
 it=rb_obj_clone(s_c_4a8a); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_2); var0/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1; it=rb_obj_clone(s_d_8277); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_3); var0/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Tests_test(VALUE self ){VALUE vals[0];  VALUE var0; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:; it=rb_obj_clone(s_a_0cc1); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(alt1_2);it=i_1; var0/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=i_42; var0/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
void Init_tests_c(){ 
 cls_Tests=rb_define_class("Tests",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);rb_global_variable(&i_1);
i_3=rb_funcall(rb_str_new2("3"),rb_intern("to_i"),0);rb_global_variable(&i_3);
i_42=rb_funcall(rb_str_new2("42"),rb_intern("to_i"),0);rb_global_variable(&i_42);
s_a_0cc1=rb_str_new2("a");rb_global_variable(&s_a_0cc1);
s_b_92eb=rb_str_new2("b");rb_global_variable(&s_b_92eb);
s_c_4a8a=rb_str_new2("c");rb_global_variable(&s_c_4a8a);
s_d_8277=rb_str_new2("d");rb_global_variable(&s_d_8277);
s_g_b2f5=rb_str_new2("g");rb_global_variable(&s_g_b2f5);
sy_Tests_bind_lb_1_rb__eq__58f9=rb_intern("Tests_bind_lb_1_rb__eq__58f9");
sy_Tests_bind_lb_1_rb__pl__0a71=rb_intern("Tests_bind_lb_1_rb__pl__0a71");
sy_Tests_bind_lb_1_rb__pl__3b73=rb_intern("Tests_bind_lb_1_rb__pl__3b73");
sy_Tests_bind_lb_1_rb__pl__61a1=rb_intern("Tests_bind_lb_1_rb__pl__61a1");
sy_bar=rb_intern("bar");
sy_seq=rb_intern("seq");
sy_token=rb_intern("token");
                    rb_define_method(cls_Tests,"abc",Tests_abc,0);
rb_define_method(cls_Tests,"de",Tests_de,0);
rb_define_method(cls_Tests,"foo",Tests_foo,0);
rb_define_method(cls_Tests,"gh",Tests_gh,0);
rb_define_method(cls_Tests,"s2",Tests_s2,0);
rb_define_method(cls_Tests,"sw",Tests_sw,0);
rb_define_method(cls_Tests,"test",Tests_test,0);
                    rb_eval_string("testversiontests('495dde5fac33fec08badeb94d8079d8c')");}
