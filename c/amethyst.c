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
VALUE Amethyst__(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(space,0 )); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst__false(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(_false_cb25,1,bind); BSET(it,CALL(exactly,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst__true(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(_true_cb24,1,bind); BSET(it,CALL(exactly,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_alnum(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(letterOrDigit,0 )); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_alpha(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(letter,0 )); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_char(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(anything,0 )); FAILTEST(fail);
 BSET(c_1,BGET(it)); BSET(it,CALL(char_cb3,1,bind)); FAILTEST(fail);BSET(it,BGET(c_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_clas(VALUE self ,VALUE a0){VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(anything,0 )); FAILTEST(fail);
 BSET(i_1,BGET(it)); BSET(it,CALL(clas_cb26,1,bind)); FAILTEST(fail);BSET(it,BGET(i_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_digit(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(digit_cb10,1,bind); BSET(it,CALL(regch,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_empty(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
BSET(it,CALL(empty_cb2,1,bind)); 
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_endline(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput5=IGET(input);
alt6: ISET(input,oldinput5);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(endline_cb4,1,bind); BSET(it,CALL(seq,1 ,arg0)); FAILTEST(alt7);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept4;
alt7: ISET(input,oldinput5);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(endline_cb5,1,bind); BSET(it,CALL(seq,1 ,arg0)); FAILTEST(alt8);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept4;
alt8: ISET(input,oldinput5);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(endline_cb6,1,bind); BSET(it,CALL(seq,1 ,arg0)); FAILTEST(alt9);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept4;
  alt9:  ISET(input,oldinput5); goto fail;
 accept4:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_eof(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput3=IGET(input);
   BSET(it,CALL(anything,0 )); FAILTEST(reject2); x=1; goto accept1;  reject2: x=0; accept1: BSET(it,Qnil); ISET(input,oldinput3); if (x==1) goto fail;
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_exactly(VALUE self ,VALUE a0){VALUE bind=rb_hash_new(); BSET(wanted_1,a0); int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(anything,0 )); FAILTEST(fail);
 BSET(got_1,BGET(it)); BSET(it,CALL(exactly_cb23,1,bind)); FAILTEST(fail);BSET(it,BGET(wanted_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_letter(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput13=IGET(input);
alt14: ISET(input,oldinput13);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(lower,0 )); FAILTEST(alt15);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept12;
alt15: ISET(input,oldinput13);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(upper,0 )); FAILTEST(alt16);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept12;
  alt16:  ISET(input,oldinput13); goto fail;
 accept12:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_letterOrDigit(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput18=IGET(input);
alt19: ISET(input,oldinput18);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(letter,0 )); FAILTEST(alt20);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept17;
alt20: ISET(input,oldinput18);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(digit,0 )); FAILTEST(alt21);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept17;
  alt21:  ISET(input,oldinput18); goto fail;
 accept17:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE bind=rb_hash_new(); BSET(rule_1,a0);BSET(delim_1,a1); int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput28=IGET(input);
alt29: ISET(input,oldinput28);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(listOf_cb15,1,bind); BSET(it,CALL(apply,1 ,arg0)); FAILTEST(alt30);
 BSET(autovar_1,BGET(it)); BSET(it,CALL(listOf_cb16,1,bind)); BSET(it,CALL(listOf_cb17,1,bind)); 
 BSET(autovar_2,BGET(it)); VALUE oldinput32; while(1){oldinput32=IGET(input);  arg0=CALL(listOf_cb18,1,bind); BSET(it,CALL(apply,1 ,arg0)); FAILTEST(break31); arg0=CALL(listOf_cb19,1,bind); BSET(it,CALL(apply,1 ,arg0)); FAILTEST(break31);
 BSET(autovar_3,BGET(it)); BSET(it,CALL(listOf_cb20,1,bind));  } break31: ISET(input,oldinput32); BSET(it,BGET(autovar_2));
 BSET(autovar_4,BGET(it)); BSET(it,CALL(listOf_cb21,1,bind)); BSET(it,BGET(f_1));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept27;
alt30: ISET(input,oldinput28);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(empty,0 )); FAILTEST(alt33);BSET(it,CALL(listOf_cb22,1,bind)); 
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept27;
  alt33:  ISET(input,oldinput28); goto fail;
 accept27:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_lower(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(lower_cb11,1,bind); BSET(it,CALL(regch,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_regch(VALUE self ,VALUE a0){VALUE bind=rb_hash_new(); BSET(regex_1,a0); int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(char,0 )); FAILTEST(fail);
 BSET(c_1,BGET(it)); BSET(it,CALL(regch_cb1,1,bind)); FAILTEST(fail);BSET(it,BGET(c_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_space(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(space_cb7,1,bind); BSET(it,CALL(regch,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_spaces(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
BSET(it,CALL(spaces_cb8,1,bind)); 
 BSET(autovar_1,BGET(it)); VALUE oldinput11; while(1){oldinput11=IGET(input);   BSET(it,CALL(space,0 )); FAILTEST(break10);
 BSET(autovar_2,BGET(it)); BSET(it,CALL(spaces_cb9,1,bind));  } break10: ISET(input,oldinput11); BSET(it,BGET(autovar_1));
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_token(VALUE self ,VALUE a0){VALUE bind=rb_hash_new(); BSET(s_1,a0); int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(spaces,0 )); FAILTEST(fail); arg0=CALL(token_cb27,1,bind); BSET(it,CALL(seq,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_upper(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(upper_cb12,1,bind); BSET(it,CALL(regch,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_word(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput23=IGET(input);
alt24: ISET(input,oldinput23);if (IGET(cut)!=Qnil) goto fail;
   BSET(it,CALL(alpha,0 )); FAILTEST(alt25);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept22;
alt25: ISET(input,oldinput23);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(word_cb14,1,bind); BSET(it,CALL(seq,1 ,arg0)); FAILTEST(alt26);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept22;
  alt26:  ISET(input,oldinput23); goto fail;
 accept22:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Amethyst_xdigit(VALUE self ){VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(xdigit_cb13,1,bind); BSET(it,CALL(regch,1 ,arg0)); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
void Init_Amethyst(){ cls_Amethyst=rb_define_class("Amethyst",rb_const_get(rb_cObject,rb_intern("AmethystCore"))); 
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
rb_eval_string("class Amethyst < AmethystCore\ndef _false_cb25(bind)\nfalse\nend\ndef _true_cb24(bind)\ntrue\nend\ndef char_cb3(bind)\n(bind[:c_1].is_a? String ) || FAIL\nend\ndef clas_cb26(bind)\n(bind[:i_1].is_a?(bind[:cls_1])) || FAIL\nend\ndef digit_cb10(bind)\n/[0-9]/\nend\ndef empty_cb2(bind)\nnil\nend\ndef endline_cb4(bind)\n\"\\r\\n\"\nend\ndef endline_cb5(bind)\n\"\\r\"\nend\ndef endline_cb6(bind)\n\"\\n\"\nend\ndef exactly_cb23(bind)\n(bind[:wanted_1] == bind[:got_1]) || FAIL\nend\ndef listOf_cb15(bind)\nbind[:rule_1]\nend\ndef listOf_cb16(bind)\nbind[:f_1]||=[];_append(bind[:f_1],bind[:autovar_1])\nend\ndef listOf_cb17(bind)\n[]\nend\ndef listOf_cb18(bind)\nbind[:delim_1]\nend\ndef listOf_cb19(bind)\nbind[:rule_1]\nend\ndef listOf_cb20(bind)\nbind[:autovar_2]||=[];_append(bind[:autovar_2],bind[:autovar_3])\nend\ndef listOf_cb21(bind)\nbind[:f_1]||=[];_append(bind[:f_1],bind[:autovar_4])\nend\ndef listOf_cb22(bind)\n[]\nend\ndef lower_cb11(bind)\n/[a-z]/\nend\ndef regch_cb1(bind)\n(bind[:regex_1].match(bind[:c_1])) || FAIL\nend\ndef space_cb7(bind)\n/[\\s\\t\\r\\n\\f]/\nend\ndef spaces_cb8(bind)\n[]\nend\ndef spaces_cb9(bind)\nbind[:autovar_1]||=[];_append(bind[:autovar_1],bind[:autovar_2])\nend\ndef token_cb27(bind)\nbind[:s_1]\nend\ndef upper_cb12(bind)\n/[A-Z]/\nend\ndef word_cb14(bind)\n\"_\"\nend\ndef xdigit_cb13(bind)\n/[0-9a-fA-F]/\nend\n\nend");
}
