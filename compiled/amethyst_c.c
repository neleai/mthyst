#include "cthyst.h"
VALUE cls_Amethyst;
VALUE Amethyst__(VALUE self );
VALUE Amethyst__false(VALUE self );
VALUE Amethyst__true(VALUE self );
VALUE Amethyst_alnum(VALUE self );
VALUE Amethyst_alpha(VALUE self );
VALUE Amethyst_char(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE a0);
VALUE Amethyst_digit(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_endline(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_exactly(VALUE self ,VALUE a0);
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_letter(VALUE self );
VALUE Amethyst_letterOrDigit(VALUE self );
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_lower(VALUE self );
VALUE Amethyst_regch(VALUE self ,VALUE a0);
VALUE Amethyst_space(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE a0);
VALUE Amethyst_upper(VALUE self );
VALUE Amethyst_word(VALUE self );
VALUE Amethyst_xdigit(VALUE self );
VALUE Amethyst__(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(__Amethystcb_1,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(__Amethystcb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(__Amethystcb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Amethyst__false(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qfalse;
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(_false_Amethystcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }
VALUE Amethyst__true(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qtrue;
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(_true_Amethystcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }
VALUE Amethyst_alnum(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_letterOrDigit(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Amethyst_alpha(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_letter(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Amethyst_char(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(char_Amethystcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Amethyst_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Amethystcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Amethyst_digit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(digit_Amethystcb_1,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(digit_Amethystcb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(digit_Amethystcb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
VALUE Amethyst_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;it=Qnil;
return it;
fail: return failobj; }
VALUE Amethyst_endline(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\r\n"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\r"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\n"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Amethyst_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Amethyst_exactly(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(exactly_Amethystcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Amethyst_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Amethystcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Amethyst_letter(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_lower(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_upper(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Amethyst_letterOrDigit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_letter(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_digit(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(8); rb_ary_store(bind,1,a0);rb_ary_store(bind,4,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); it=rb_ary_new3(0);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_ary_entry(bind,1); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,2,it); it=CALL(listOf_Amethystcb_1,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_ary_entry(bind,4); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(break1); it=rb_ary_entry(bind,1); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(break1);
 rb_ary_store(bind,5,it); it=CALL(listOf_Amethystcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,6,it); it=CALL(listOf_Amethystcb_3,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,7,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,7,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,7);
return it;
fail: return failobj; }
VALUE Amethyst_lower(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(lower_Amethystcb_1,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(lower_Amethystcb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(lower_Amethystcb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
VALUE Amethyst_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(5); rb_ary_store(bind,3,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(regch_Amethystcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=CALL(regch_Amethystcb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,2);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
return it;
fail: return failobj; }
VALUE Amethyst_space(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(space_Amethystcb_1,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(space_Amethystcb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(space_Amethystcb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
VALUE Amethyst_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(9);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self); it=CALL(spaces_Amethystcb_1,1,bind); 
 rb_ary_store(bind,1,it);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,2,it); it=CALL(spaces_Amethystcb_2,1,bind); FAILTEST(break1);it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=CALL(spaces_Amethystcb_3,1,bind); FAILTEST(break1);it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
 rb_ary_store(bind,7,it); it=CALL(spaces_Amethystcb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,8,it); it=rb_ary_entry(bind,8);
return it;
fail: return failobj; }
VALUE Amethyst_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_spaces(self ); FAILTEST(fail); it=rb_ary_entry(bind,0); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Amethyst_upper(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(upper_Amethystcb_1,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(upper_Amethystcb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(upper_Amethystcb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
VALUE Amethyst_word(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_alpha(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("_"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Amethyst_xdigit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(xdigit_Amethystcb_1,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(xdigit_Amethystcb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(xdigit_Amethystcb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
void Init_amethyst_c(){ 
 cls_Amethyst=rb_define_class("Amethyst",rb_const_get(rb_cObject,rb_intern("AmethystCore"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Amethyst,"_",Amethyst__,0);
rb_define_method(cls_Amethyst,"_false",Amethyst__false,0);
rb_define_method(cls_Amethyst,"_true",Amethyst__true,0);
rb_define_method(cls_Amethyst,"alnum",Amethyst_alnum,0);
rb_define_method(cls_Amethyst,"alpha",Amethyst_alpha,0);
rb_define_method(cls_Amethyst,"char",Amethyst_char,0);
rb_define_method(cls_Amethyst,"clas",Amethyst_clas,1);
rb_define_method(cls_Amethyst,"digit",Amethyst_digit,0);
rb_define_method(cls_Amethyst,"empty",Amethyst_empty,0);
rb_define_method(cls_Amethyst,"endline",Amethyst_endline,0);
rb_define_method(cls_Amethyst,"eof",Amethyst_eof,0);
rb_define_method(cls_Amethyst,"exactly",Amethyst_exactly,1);
rb_define_method(cls_Amethyst,"fails",Amethyst_fails,0);
rb_define_method(cls_Amethyst,"letter",Amethyst_letter,0);
rb_define_method(cls_Amethyst,"letterOrDigit",Amethyst_letterOrDigit,0);
rb_define_method(cls_Amethyst,"listOf",Amethyst_listOf,2);
rb_define_method(cls_Amethyst,"lower",Amethyst_lower,0);
rb_define_method(cls_Amethyst,"regch",Amethyst_regch,1);
rb_define_method(cls_Amethyst,"space",Amethyst_space,0);
rb_define_method(cls_Amethyst,"spaces",Amethyst_spaces,0);
rb_define_method(cls_Amethyst,"token",Amethyst_token,1);
rb_define_method(cls_Amethyst,"upper",Amethyst_upper,0);
rb_define_method(cls_Amethyst,"word",Amethyst_word,0);
rb_define_method(cls_Amethyst,"xdigit",Amethyst_xdigit,0);
 rb_eval_string("testversionamethyst('cc8102a05812a0c9ad3d99a158425191')");}
