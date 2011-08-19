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
VALUE Amethyst__(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_space(self ); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst__false(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(_false_Amethystcb_1,1,bind); it=Amethyst_exactly(self ,arg0); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst__true(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(_true_Amethystcb_1,1,bind); it=Amethyst_exactly(self ,arg0); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_alnum(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_letterOrDigit(self ); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_alpha(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_letter(self ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_char(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(anything,0 ); FAILTEST(fail);
 BSET(c_1,it); it=CALL(char_Amethystcb_1,1,bind); FAILTEST(fail);it=BGET(c_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_2);
 BSET(i_1,it); it=CALL(clas_Amethystcb_1,1,bind); FAILTEST(alt1_2);it=BGET(i_1); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_digit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(digit_Amethystcb_1,1,bind); 
 BSET(regex_1,it);   it=Amethyst_char(self ); FAILTEST(fail);
 BSET(c_1,it); it=CALL(digit_Amethystcb_2,1,bind); FAILTEST(fail);it=BGET(c_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(_result_2,it); it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE Amethyst_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Amethystcb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_endline(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  arg0=CALL(endline_Amethystcb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(endline_Amethystcb_2,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(endline_Amethystcb_3,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_4); 
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=CALL(anything,0 ); FAILTEST(alt2_2);ISET(cut,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=Amethyst_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_exactly(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(wanted_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(anything,0 ); FAILTEST(fail);
 BSET(got_1,it); it=CALL(exactly_Amethystcb_1,1,bind); FAILTEST(fail);it=BGET(wanted_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Amethystcb_1,1,bind); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_letter(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_lower(self ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_upper(self ); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_letterOrDigit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_letter(self ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_digit(self ); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(rule_1,a0);BSET(delim_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(listOf_Amethystcb_1,1,bind); 
 BSET(f_1,it); it=CALL(listOf_Amethystcb_2,1,bind); 
 BSET(autovar_1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(listOf_Amethystcb_3,1,bind); it=CALL(apply,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_2,it); it=CALL(listOf_Amethystcb_4,1,bind); it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(listOf_Amethystcb_5,1,bind); it=CALL(apply,1 ,arg0); FAILTEST(alt2_2); arg0=CALL(listOf_Amethystcb_6,1,bind); it=CALL(apply,1 ,arg0); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto break1;
 accept2:;

 BSET(autovar_3,it); it=CALL(listOf_Amethystcb_7,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_1);
 BSET(autovar_4,it); it=CALL(listOf_Amethystcb_8,1,bind); it=BGET(f_1); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=CALL(listOf_Amethystcb_9,1,bind);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_lower(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(lower_Amethystcb_1,1,bind); 
 BSET(regex_1,it);   it=Amethyst_char(self ); FAILTEST(fail);
 BSET(c_1,it); it=CALL(lower_Amethystcb_2,1,bind); FAILTEST(fail);it=BGET(c_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(_result_2,it); it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE Amethyst_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(regex_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_char(self ); FAILTEST(fail);
 BSET(c_1,it); it=CALL(regch_Amethystcb_1,1,bind); FAILTEST(fail);it=BGET(c_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_space(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(space_Amethystcb_1,1,bind); it=Amethyst_regch(self ,arg0); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  arg0=CALL(spaces_Amethystcb_1,1,bind); it=Amethyst_regch(self ,arg0); FAILTEST(break1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_2,it); it=CALL(spaces_Amethystcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(autovar_1);
 BSET(_result_2,it); it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE Amethyst_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(s_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_spaces(self ); FAILTEST(alt1_2); arg0=CALL(token_Amethystcb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_upper(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(upper_Amethystcb_1,1,bind); 
 BSET(regex_1,it);   it=Amethyst_char(self ); FAILTEST(fail);
 BSET(c_1,it); it=CALL(upper_Amethystcb_2,1,bind); FAILTEST(fail);it=BGET(c_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(_result_2,it); it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE Amethyst_word(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Amethyst_alpha(self ); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(word_Amethystcb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Amethyst_xdigit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(xdigit_Amethystcb_1,1,bind); it=Amethyst_regch(self ,arg0); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
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
 }
