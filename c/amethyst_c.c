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
VALUE Amethyst__(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(space,0 )); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst__false(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(_false_Amethystcb_1,1,bind); BSET(it,CALL(exactly,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst__true(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(_true_Amethystcb_1,1,bind); BSET(it,CALL(exactly,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_alnum(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(letterOrDigit,0 )); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_alpha(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(letter,0 )); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_char(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(anything,0 )); FAILTEST(fail);
 BSET(c_1,BGET(it)); BSET(it,CALL(char_Amethystcb_1,1,bind)); FAILTEST(fail);BSET(it,BGET(c_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); vals[0]=a0; int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(anything,0 )); FAILTEST(fail);
 BSET(i_1,BGET(it)); BSET(it,CALL(clas_Amethystcb_1,1,bind)); FAILTEST(fail);BSET(it,BGET(i_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_digit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(digit_Amethystcb_1,1,bind); BSET(it,CALL(regch,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
BSET(it,CALL(empty_Amethystcb_1,1,bind)); 
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_endline(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(endline_Amethystcb_1,1,bind); BSET(it,CALL(seq,1 ,arg0)); FAILTEST(alt1_2);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(endline_Amethystcb_2,1,bind); BSET(it,CALL(seq,1 ,arg0)); FAILTEST(alt1_3);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(endline_Amethystcb_3,1,bind); BSET(it,CALL(seq,1 ,arg0)); FAILTEST(alt1_4);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ISET(input,oldinput1); goto fail;
 accept1:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput1=IGET(input);
   BSET(it,CALL(anything,0 )); FAILTEST(reject1); x=1; goto accept1;  reject1: x=0; accept1: BSET(it,Qnil); ISET(input,oldinput1); if (x==1) goto fail;
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_exactly(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(wanted_1,a0); vals[0]=a0; int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(anything,0 )); FAILTEST(fail);
 BSET(got_1,BGET(it)); BSET(it,CALL(exactly_Amethystcb_1,1,bind)); FAILTEST(fail);BSET(it,BGET(wanted_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_letter(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(lower,0 )); FAILTEST(alt1_2);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(upper,0 )); FAILTEST(alt1_3);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_letterOrDigit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(letter,0 )); FAILTEST(alt1_2);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(digit,0 )); FAILTEST(alt1_3);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(rule_1,a0); vals[0]=a0;BSET(delim_1,a1); vals[1]=a1; int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(listOf_Amethystcb_1,1,bind); BSET(it,CALL(apply,1 ,arg0)); FAILTEST(alt1_2);
 BSET(autovar_1,BGET(it)); BSET(it,CALL(listOf_Amethystcb_2,1,bind)); BSET(it,CALL(listOf_Amethystcb_3,1,bind)); 
 BSET(autovar_2,BGET(it)); VALUE oldinput2; while(1){oldinput2=IGET(input);  arg0=CALL(listOf_Amethystcb_4,1,bind); BSET(it,CALL(apply,1 ,arg0)); FAILTEST(break1); arg0=CALL(listOf_Amethystcb_5,1,bind); BSET(it,CALL(apply,1 ,arg0)); FAILTEST(break1);
 BSET(autovar_3,BGET(it)); BSET(it,CALL(listOf_Amethystcb_6,1,bind));  } break1: ISET(input,oldinput2); BSET(it,BGET(autovar_2));
 BSET(autovar_4,BGET(it)); BSET(it,CALL(listOf_Amethystcb_7,1,bind)); BSET(it,BGET(f_1));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(empty,0 )); FAILTEST(alt1_3);BSET(it,CALL(listOf_Amethystcb_8,1,bind)); 
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_lower(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(lower_Amethystcb_1,1,bind); BSET(it,CALL(regch,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(regex_1,a0); vals[0]=a0; int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(char,0 )); FAILTEST(fail);
 BSET(c_1,BGET(it)); BSET(it,CALL(regch_Amethystcb_1,1,bind)); FAILTEST(fail);BSET(it,BGET(c_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_space(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(space_Amethystcb_1,1,bind); BSET(it,CALL(regch,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
BSET(it,CALL(spaces_Amethystcb_1,1,bind)); 
 BSET(autovar_1,BGET(it)); VALUE oldinput1; while(1){oldinput1=IGET(input);   BSET(it,CALL(space,0 )); FAILTEST(break1);
 BSET(autovar_2,BGET(it)); BSET(it,CALL(spaces_Amethystcb_2,1,bind));  } break1: ISET(input,oldinput1); BSET(it,BGET(autovar_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(s_1,a0); vals[0]=a0; int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(spaces,0 )); FAILTEST(fail); arg0=CALL(token_Amethystcb_1,1,bind); BSET(it,CALL(seq,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_upper(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(upper_Amethystcb_1,1,bind); BSET(it,CALL(regch,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_word(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(alpha,0 )); FAILTEST(alt1_2);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(word_Amethystcb_1,1,bind); BSET(it,CALL(seq,1 ,arg0)); FAILTEST(alt1_3);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_xdigit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(xdigit_Amethystcb_1,1,bind); BSET(it,CALL(regch,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
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
