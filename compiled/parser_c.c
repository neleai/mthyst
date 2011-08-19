#include "cthyst.h"
VALUE cls_AmethystParser;
VALUE AmethystParser__(VALUE self );
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_addargs(VALUE self );
VALUE AmethystParser_application(VALUE self );
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_atomicHostExpr(VALUE self );
VALUE AmethystParser_char(VALUE self );
VALUE AmethystParser_choice(VALUE self );
VALUE AmethystParser_choice_lambda1(VALUE self,VALUE bind);
VALUE AmethystParser_clas(VALUE self ,VALUE a0);
VALUE AmethystParser_className(VALUE self );
VALUE AmethystParser_collect(VALUE self ,VALUE a0);
VALUE AmethystParser_digit(VALUE self );
VALUE AmethystParser_eChar(VALUE self );
VALUE AmethystParser_empty(VALUE self );
VALUE AmethystParser_endline(VALUE self );
VALUE AmethystParser_expression(VALUE self );
VALUE AmethystParser_fails(VALUE self );
VALUE AmethystParser_grammar(VALUE self );
VALUE AmethystParser_igrammar(VALUE self );
VALUE AmethystParser_inlineHostExpr(VALUE self );
VALUE AmethystParser_key(VALUE self );
VALUE AmethystParser_letter(VALUE self );
VALUE AmethystParser_listOf(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_lower(VALUE self );
VALUE AmethystParser_modifier(VALUE self );
VALUE AmethystParser_name(VALUE self );
VALUE AmethystParser_nameFirst(VALUE self );
VALUE AmethystParser_nameRest(VALUE self );
VALUE AmethystParser_nr(VALUE self );
VALUE AmethystParser_number(VALUE self );
VALUE AmethystParser_prefixed(VALUE self );
VALUE AmethystParser_procargs(VALUE self );
VALUE AmethystParser_procargs2(VALUE self );
VALUE AmethystParser_regch(VALUE self ,VALUE a0);
VALUE AmethystParser_rubyarg(VALUE self );
VALUE AmethystParser_rule(VALUE self );
VALUE AmethystParser_ruleargs(VALUE self );
VALUE AmethystParser_sequence(VALUE self );
VALUE AmethystParser_space(VALUE self );
VALUE AmethystParser_spaces(VALUE self );
VALUE AmethystParser_term(VALUE self );
VALUE AmethystParser_token(VALUE self ,VALUE a0);
VALUE AmethystParser_upper(VALUE self );
VALUE AmethystParser__(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_space(self ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(o_1,a0);BSET(c_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0); arg0=CALL(__args_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(fail); arg0=CALL(__args_AmethystParsercb_2,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 BSET(autovar_2,it); it=CALL(__args_AmethystParsercb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(autovar_1);
 BSET(r_1,it);  arg0=CALL(__args_AmethystParsercb_4,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(fail);it=BGET(r_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(o_1,a0);BSET(c_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(_args_AmethystParsercb_1,1,bind);arg1=CALL(_args_AmethystParsercb_2,1,bind); it=AmethystParser___args(self ,arg0,arg1); FAILTEST(fail);
 BSET(r_1,it); it=CALL(_args_AmethystParsercb_3,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_addargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(result_1,it); it=rb_ary_new3(0);it=rb_ary_new3(0);int oldpos1; while(1){oldpos1=ame_getpos(self);  arg0=CALL(addargs_AmethystParsercb_1,1,bind); it=AmethystParser_clas(self ,arg0); FAILTEST(break1);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(name_1,it); it=CALL(addargs_AmethystParsercb_2,1,bind); 
 BSET(autovar_2,it); it=CALL(addargs_AmethystParsercb_3,1,bind); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto break1;
 if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(addargs_AmethystParsercb_4,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_application(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_2);
 BSET(klas_1,it);  arg0=CALL(application_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 BSET(rule_1,it); it=CALL(application_AmethystParsercb_2,1,bind); 
 BSET(rule_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_3);
 BSET(rule_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 arg0=CALL(application_AmethystParsercb_3,1,bind);arg1=CALL(application_AmethystParsercb_4,1,bind); it=AmethystParser_argsOpt(self ,arg0,arg1); FAILTEST(fail);
 BSET(arg_1,it); it=CALL(application_AmethystParsercb_5,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(o_1,a0);BSET(c_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(args_AmethystParsercb_1,1,bind);arg1=CALL(args_AmethystParsercb_2,1,bind); it=AmethystParser___args(self ,arg0,arg1); FAILTEST(fail);
 BSET(r_1,it); it=CALL(args_AmethystParsercb_3,1,bind); 
 BSET(autovar_1,it); it=CALL(args_AmethystParsercb_4,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(o_1,a0);BSET(c_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(argsOpt_AmethystParsercb_1,1,bind);arg1=CALL(argsOpt_AmethystParsercb_2,1,bind); it=AmethystParser_args(self ,arg0,arg1); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=CALL(argsOpt_AmethystParsercb_3,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_atomicHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_endline(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
  it=CALL(anything,0 ); FAILTEST(break1);
 BSET(autovar_2,it); it=CALL(atomicHostExpr_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(autovar_1);
 BSET(s_1,it); it=CALL(atomicHostExpr_AmethystParsercb_2,1,bind); 
 BSET(autovar_3,it); it=CALL(atomicHostExpr_AmethystParsercb_3,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(pass2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_char(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(anything,0 ); FAILTEST(fail);
 BSET(c_1,it); it=CALL(char_AmethystParsercb_1,1,bind); FAILTEST(fail);it=BGET(c_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_choice(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(choice_AmethystParsercb_1,1,bind);arg1=CALL(choice_AmethystParsercb_3,1,bind); it=AmethystParser_listOf(self ,arg0,arg1); FAILTEST(fail);
 BSET(ary_1,it); it=CALL(choice_AmethystParsercb_4,1,bind);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(anything,0 ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_AmethystParsercb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);
 BSET(autovar_1,it);  arg0=CALL(className_AmethystParsercb_1,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(fail);  it=AmethystParser_upper(self ); FAILTEST(fail);
 BSET(autovar_2,it); it=CALL(className_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 BSET(autovar_3,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 BSET(autovar_4,it); it=CALL(className_AmethystParsercb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(autovar_3);
 BSET(autovar_5,it); it=CALL(className_AmethystParsercb_4,1,bind); it=BGET(autovar_1);
 BSET(it_1,it); it=CALL(className_AmethystParsercb_5,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(ors_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(collect_AmethystParsercb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_digit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(digit_AmethystParsercb_1,1,bind); it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(eChar_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_2);  it=AmethystParser_char(self ); FAILTEST(alt1_2);
 BSET(c_1,it); it=CALL(eChar_AmethystParsercb_2,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(eChar_AmethystParsercb_3,1,bind);arg1=CALL(eChar_AmethystParsercb_4,1,bind); it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_char(self ); FAILTEST(alt1_4);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_AmethystParsercb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_endline(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(endline_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(endline_AmethystParsercb_2,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(endline_AmethystParsercb_3,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_4);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_choice(self ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_AmethystParsercb_1,1,bind); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0); arg0=CALL(grammar_AmethystParsercb_1,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail);
 BSET(name_1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(grammar_AmethystParsercb_2,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 BSET(parent_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=CALL(grammar_AmethystParsercb_3,1,bind);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 arg0=CALL(grammar_AmethystParsercb_4,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1);
 BSET(autovar_2,it); it=CALL(grammar_AmethystParsercb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_1);
 BSET(rules_1,it);  arg0=CALL(grammar_AmethystParsercb_6,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(fail);it=CALL(grammar_AmethystParsercb_7,1,bind);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(autovar_1,it); it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
 it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt2_2;}
 int oldpos5=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt3_2;}
  arg0=CALL(igrammar_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt4_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt4_2); 
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt3_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos5); goto alt3_2;
 accept4:;
  it=CALL(anything,0 ); FAILTEST(alt3_2); 
ISET(cut,Qnil);goto accept3;
  alt3_2:  ame_setpos(self,oldpos4); goto alt2_2;
 accept3:;

 BSET(autovar_3,it); it=CALL(igrammar_AmethystParsercb_2,1,bind); int oldpos6; while(1){oldpos6=ame_getpos(self); int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_2;}
  arg0=CALL(igrammar_AmethystParsercb_3,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt6_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt6_2); 
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt6_3); 
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos8); goto alt5_2;
 accept6:;
  it=CALL(anything,0 ); FAILTEST(alt5_2); 
ISET(cut,Qnil);goto accept5;
  alt5_2:  ame_setpos(self,oldpos7); goto break2;
 accept5:;

 BSET(autovar_4,it); it=CALL(igrammar_AmethystParsercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=BGET(autovar_1);
 BSET(it_1,it); it=CALL(igrammar_AmethystParsercb_5,1,bind);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;

 BSET(autovar_5,it); it=CALL(igrammar_AmethystParsercb_6,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_2);
 BSET(a_1,it); it=BGET(a_1); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(inlineHostExpr_AmethystParsercb_1,1,bind);arg1=CALL(inlineHostExpr_AmethystParsercb_2,1,bind); it=AmethystParser_args(self ,arg0,arg1); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(key_AmethystParsercb_1,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_2);int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=AmethystParser_className(self ); FAILTEST(alt2_2);
 BSET(name_1,it);  arg0=CALL(key_AmethystParsercb_2,1,bind);arg1=CALL(key_AmethystParsercb_3,1,bind); it=AmethystParser_argsOpt(self ,arg0,arg1); FAILTEST(alt2_2);
 BSET(args_1,it); it=CALL(key_AmethystParsercb_4,1,bind); 
 BSET(vars_1,it); it=CALL(key_AmethystParsercb_5,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=AmethystParser_name(self ); FAILTEST(alt2_3);
 BSET(name_1,it); it=CALL(key_AmethystParsercb_6,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(key_AmethystParsercb_7,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_name(self ); FAILTEST(alt1_3);
 BSET(name_1,it); it=CALL(key_AmethystParsercb_8,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_letter(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_lower(self ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_upper(self ); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(rule_1,a0);BSET(delim_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(f_1,it); it=rb_ary_new3(0);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(listOf_AmethystParsercb_1,1,bind); it=CALL(apply,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); it=CALL(listOf_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  arg0=CALL(listOf_AmethystParsercb_3,1,bind); it=CALL(apply,1 ,arg0); FAILTEST(break1); arg0=CALL(listOf_AmethystParsercb_4,1,bind); it=CALL(apply,1 ,arg0); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(listOf_AmethystParsercb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_2);
 BSET(autovar_4,it); it=CALL(listOf_AmethystParsercb_6,1,bind); it=BGET(f_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=CALL(listOf_AmethystParsercb_7,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_lower(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(lower_AmethystParsercb_1,1,bind); it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_modifier(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_term(self ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(modifier_AmethystParsercb_1,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_3);it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_endline(self ); FAILTEST(alt2_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
  it=CALL(anything,0 ); FAILTEST(break1);
 BSET(autovar_2,it); it=CALL(modifier_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_1);
 BSET(c_1,it); it=CALL(modifier_AmethystParsercb_3,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);
 BSET(autovar_1,it);  arg0=CALL(name_AmethystParsercb_1,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(fail);  it=AmethystParser_nameFirst(self ); FAILTEST(fail);
 BSET(autovar_2,it); it=CALL(name_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 BSET(autovar_3,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 BSET(autovar_4,it); it=CALL(name_AmethystParsercb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(autovar_3);
 BSET(autovar_5,it); it=CALL(name_AmethystParsercb_4,1,bind); it=BGET(autovar_1);
 BSET(it_1,it); it=CALL(name_AmethystParsercb_5,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_nameFirst(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_letter(self ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(nameFirst_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_nameRest(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_nameFirst(self ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_digit(self ); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_2); arg0=CALL(nr_AmethystParsercb_1,1,bind);arg1=CALL(nr_AmethystParsercb_2,1,bind); it=AmethystParser_argsOpt(self ,arg0,arg1); FAILTEST(alt1_2); arg0=CALL(nr_AmethystParsercb_3,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_number(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);
 BSET(autovar_1,it);  arg0=CALL(number_AmethystParsercb_1,1,bind); it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 BSET(autovar_2,it); it=CALL(number_AmethystParsercb_2,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self);  arg0=CALL(number_AmethystParsercb_3,1,bind); it=AmethystParser_regch(self ,arg0); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(number_AmethystParsercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(autovar_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(prefixed_AmethystParsercb_1,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_2);
 BSET(expr_1,it); it=CALL(prefixed_AmethystParsercb_2,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_3;}
  arg0=CALL(prefixed_AmethystParsercb_3,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt2_2);
 BSET(neg_1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_3;}
  arg0=CALL(prefixed_AmethystParsercb_4,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt2_3);
 BSET(neg_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_3;
 accept2:;
  it=AmethystParser_prefixed(self ); FAILTEST(alt1_3);
 BSET(m_1,it); it=CALL(prefixed_AmethystParsercb_5,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_4;}
   it=AmethystParser_modifier(self ); FAILTEST(alt3_2);
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_4;}
  arg0=CALL(prefixed_AmethystParsercb_6,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt3_3);int oldpos4=ame_getpos(self);
  arg0=CALL(prefixed_AmethystParsercb_7,1,bind); it=AmethystParser_regch(self ,arg0); FAILTEST(reject1); x=1; goto accept4;  reject1: x=0; accept4: it=Qnil; ame_setpos(self,oldpos4); if (x==0) goto alt3_3;int oldpos5=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt3_3;}
  arg0=CALL(prefixed_AmethystParsercb_8,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt4_2); 
ISET(cut,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt3_3;}
   it=AmethystParser_empty(self ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos5); goto alt3_3;
 accept5:;
it=CALL(prefixed_AmethystParsercb_9,1,bind); 
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt1_4;
 accept3:;
it=rb_ary_new3(0);int oldpos6; while(1){oldpos6=ame_getpos(self); int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser__(self ); FAILTEST(alt5_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt5_2); 
ISET(cut,Qnil);goto accept6;
alt5_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt5_3); 
ISET(cut,Qnil);goto accept6;
  alt5_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(prefixed_AmethystParsercb_10,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt6_2);  it=AmethystParser_prefixed(self ); FAILTEST(alt6_2);
 BSET(it_1,it); it=CALL(prefixed_AmethystParsercb_11,1,bind);  
ISET(cut,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(prefixed_AmethystParsercb_12,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt6_3);  it=AmethystParser_expression(self ); FAILTEST(alt6_3);
 BSET(it_1,it); it=CALL(prefixed_AmethystParsercb_13,1,bind);  arg0=CALL(prefixed_AmethystParsercb_14,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt6_3); 
ISET(cut,Qnil);goto accept7;
alt6_3: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
 int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_4;}
  arg0=CALL(prefixed_AmethystParsercb_15,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt7_2);
 BSET(one_1,it);  
ISET(cut,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_4;}
  arg0=CALL(prefixed_AmethystParsercb_16,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt7_3);
 BSET(one_1,it);  
ISET(cut,Qnil);goto accept8;
  alt7_3:  ame_setpos(self,oldpos9); goto alt6_4;
 accept8:;
it=CALL(prefixed_AmethystParsercb_17,1,bind); 
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept7;
alt6_4: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(prefixed_AmethystParsercb_18,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt6_5);it=CALL(prefixed_AmethystParsercb_19,1,bind); 
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept7;
alt6_5: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(prefixed_AmethystParsercb_20,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt6_6);int oldpos10=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_6;}
 int oldpos11=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
   it=AmethystParser_key(self ); FAILTEST(alt9_2);
 BSET(name_1,it);  
ISET(cut,Qnil);goto accept10;
alt9_2: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
   it=AmethystParser_name(self ); FAILTEST(alt9_3);
 BSET(name_1,it);  
ISET(cut,Qnil);goto accept10;
  alt9_3:  ame_setpos(self,oldpos11); goto alt8_2;
 accept10:;
int oldpos12=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
  arg0=CALL(prefixed_AmethystParsercb_21,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt10_2);it=CALL(prefixed_AmethystParsercb_22,1,bind); 
 BSET(append_1,it);  
ISET(cut,Qnil);goto accept11;
alt10_2: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt10_3);it=CALL(prefixed_AmethystParsercb_23,1,bind); 
 BSET(append_1,it);  
ISET(cut,Qnil);goto accept11;
  alt10_3:  ame_setpos(self,oldpos12); goto alt8_2;
 accept11:;
it=CALL(prefixed_AmethystParsercb_24,1,bind); 
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept9;
alt8_2: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_6;}
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt8_3);
 BSET(e_1,it); it=CALL(prefixed_AmethystParsercb_25,1,bind); 
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept9;
  alt8_3:  ame_setpos(self,oldpos10); goto alt6_6;
 accept9:;
 
ISET(cut,Qnil);goto accept7;
  alt6_6:  ame_setpos(self,oldpos8); goto break1;
 accept7:;
 if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=BGET(from_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=CALL(procargs_AmethystParsercb_1,1,bind); it=rb_ary_new3(0);int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(anything,0 ); FAILTEST(alt1_2);
 BSET(c_1,it); it=CALL(procargs_AmethystParsercb_2,1,bind); FAILTEST(alt1_2);it=CALL(procargs_AmethystParsercb_3,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_procargs2(self ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(procargs_AmethystParsercb_4,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(procargs2_AmethystParsercb_1,1,bind); it=AmethystParser_clas(self ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_procargs2(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(procargs2_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_3);
 BSET(a_1,it); it=CALL(procargs2_AmethystParsercb_3,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(regex_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_char(self ); FAILTEST(fail);
 BSET(c_1,it); it=CALL(regch_AmethystParsercb_1,1,bind); FAILTEST(fail);it=BGET(c_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(s_1,it); it=rb_ary_new3(0);it=rb_ary_new3(0);it=rb_ary_new3(0);
 BSET(n_1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_2);  it=AmethystParser_expression(self ); FAILTEST(alt1_2);
 BSET(e_1,it);  arg0=CALL(rubyarg_AmethystParsercb_2,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_2);it=CALL(rubyarg_AmethystParsercb_3,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_4,1,bind);arg1=CALL(rubyarg_AmethystParsercb_5,1,bind); it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_6,1,bind);arg1=CALL(rubyarg_AmethystParsercb_7,1,bind); it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_4);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_8,1,bind);arg1=CALL(rubyarg_AmethystParsercb_9,1,bind); it=AmethystParser__args(self ,arg0,arg1); FAILTEST(alt1_5);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_10,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_1,it); it=CALL(rubyarg_AmethystParsercb_11,1,bind); it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(rubyarg_AmethystParsercb_12,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt2_2);ISET(cut,Qtrue);ISET(stop,Qtrue);
 BSET(autovar_3,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt2_3);
 BSET(autovar_3,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
it=CALL(rubyarg_AmethystParsercb_13,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_2);
 BSET(autovar_4,it); it=CALL(rubyarg_AmethystParsercb_14,1,bind); it=CALL(rubyarg_AmethystParsercb_15,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_16,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_7);
 BSET(autovar_5,it); it=CALL(rubyarg_AmethystParsercb_17,1,bind); it=rb_ary_new3(0);
 BSET(autovar_6,it); int oldpos4; while(1){oldpos4=ame_getpos(self); int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  arg0=CALL(rubyarg_AmethystParsercb_18,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt3_2);ISET(cut,Qtrue);ISET(stop,Qtrue);
 BSET(autovar_7,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 BSET(autovar_7,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
it=CALL(rubyarg_AmethystParsercb_19,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=BGET(autovar_6);
 BSET(autovar_8,it); it=CALL(rubyarg_AmethystParsercb_20,1,bind); it=CALL(rubyarg_AmethystParsercb_21,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_22,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_8);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_23,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_9);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
  arg0=CALL(rubyarg_AmethystParsercb_24,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt4_2);
 BSET(n_1,it);  
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
  arg0=CALL(rubyarg_AmethystParsercb_25,1,bind); it=AmethystParser_regch(self ,arg0); FAILTEST(alt4_3);
 BSET(n_1,it);  
ISET(cut,Qnil);goto accept4;
alt4_3: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
   it=AmethystParser_empty(self ); FAILTEST(alt4_4); 
ISET(cut,Qnil);goto accept4;
  alt4_4:  ame_setpos(self,oldpos6); goto alt1_10;
 accept4:;
int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
   it=AmethystParser__(self ); FAILTEST(alt5_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt5_2); 
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
   it=AmethystParser_empty(self ); FAILTEST(alt5_3); 
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos7); goto alt1_10;
 accept5:;
  it=AmethystParser_name(self ); FAILTEST(alt1_10);
 BSET(autovar_9,it); it=CALL(rubyarg_AmethystParsercb_26,1,bind); it=BGET(n_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_11;}
   it=AmethystParser__(self ); FAILTEST(alt6_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt6_2); 
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_11;}
   it=AmethystParser_empty(self ); FAILTEST(alt6_3); 
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos8); goto alt1_11;
 accept6:;
  it=AmethystParser_key(self ); FAILTEST(alt1_11);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_27,1,bind); it=AmethystParser_regch(self ,arg0); FAILTEST(alt1_12);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(rule_AmethystParsercb_1,1,bind); it=CALL(rule_AmethystParsercb_2,1,bind); 
 BSET(bnding_1,it);   it=AmethystParser_name(self ); FAILTEST(fail);
 BSET(name_1,it);   it=AmethystParser_ruleargs(self ); FAILTEST(fail);
 BSET(args_1,it);  arg0=CALL(rule_AmethystParsercb_3,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(fail);  it=AmethystParser_expression(self ); FAILTEST(fail);
 BSET(body_1,it); it=CALL(rule_AmethystParsercb_4,1,bind); 
 BSET(body_1,it); it=CALL(rule_AmethystParsercb_5,1,bind); 
 BSET(locals_1,it); it=CALL(rule_AmethystParsercb_6,1,bind); it=CALL(rule_AmethystParsercb_7,1,bind);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(ruleargs_AmethystParsercb_1,1,bind);arg1=CALL(ruleargs_AmethystParsercb_2,1,bind); it=AmethystParser_argsOpt(self ,arg0,arg1); FAILTEST(fail);
 BSET(autovar_1,it); it=CALL(ruleargs_AmethystParsercb_3,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_addargs(self ); FAILTEST(pass2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_nr(self ); FAILTEST(alt2_2);  it=AmethystParser_prefixed(self ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto break1;
 accept2:;

 BSET(autovar_2,it); it=CALL(sequence_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_1);
 BSET(ary_1,it); it=CALL(sequence_AmethystParsercb_2,1,bind); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_space(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(space_AmethystParsercb_1,1,bind); it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_space(self ); FAILTEST(break1);
 BSET(autovar_2,it); it=CALL(spaces_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(autovar_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(s_1,it); it=rb_ary_new3(0);it=rb_ary_new3(0);it=rb_ary_new3(0);
 BSET(x_1,it); it=rb_ary_new3(0);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2);
 BSET(cls_1,it); it=CALL(term_AmethystParsercb_1,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_2,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_3); arg0=CALL(term_AmethystParsercb_3,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_3);  it=AmethystParser_expression(self ); FAILTEST(alt1_3);
 BSET(expr_1,it);  arg0=CALL(term_AmethystParsercb_4,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_3);it=CALL(term_AmethystParsercb_5,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_6,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_4);it=CALL(term_AmethystParsercb_7,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_application(self ); FAILTEST(alt1_5);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt1_6);
 BSET(it_1,it); it=CALL(term_AmethystParsercb_8,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_7;}
  arg0=CALL(term_AmethystParsercb_9,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt2_2);  it=AmethystParser_atomicHostExpr(self ); FAILTEST(alt2_2);
 BSET(x_1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_7;}
  arg0=CALL(term_AmethystParsercb_10,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt2_3);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt2_3);
 BSET(x_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_7;
 accept2:;
it=CALL(term_AmethystParsercb_11,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_12,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_8);it=rb_ary_new3(0);int oldpos3; while(1){oldpos3=ame_getpos(self); int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(term_AmethystParsercb_13,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt3_2);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 BSET(autovar_1,it); it=CALL(term_AmethystParsercb_14,1,bind);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
 if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=CALL(term_AmethystParsercb_15,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_16,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_9);it=rb_ary_new3(0);int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  arg0=CALL(term_AmethystParsercb_17,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt4_2);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt4_3);
 BSET(autovar_2,it); it=CALL(term_AmethystParsercb_18,1,bind);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break2;
 accept4:;
 if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=CALL(term_AmethystParsercb_19,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_number(self ); FAILTEST(alt1_10);
 BSET(it_1,it); it=CALL(term_AmethystParsercb_20,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_21,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_11);it=rb_ary_new3(0);int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
  arg0=CALL(term_AmethystParsercb_22,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt5_2);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3);
 BSET(autovar_3,it); it=CALL(term_AmethystParsercb_23,1,bind);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto break3;
 accept5:;
 if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=CALL(term_AmethystParsercb_24,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_25,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_12);  it=AmethystParser_expression(self ); FAILTEST(alt1_12);
 BSET(x_1,it);  arg0=CALL(term_AmethystParsercb_26,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(alt1_12);int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_12;}
  arg0=CALL(term_AmethystParsercb_27,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt6_2); arg0=CALL(term_AmethystParsercb_28,1,bind); it=AmethystParser_collect(self ,arg0); FAILTEST(alt6_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_12;}
   it=AmethystParser_empty(self ); FAILTEST(alt6_3);it=BGET(x_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos9); goto alt1_12;
 accept6:;
 
ISET(cut,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(s_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_spaces(self ); FAILTEST(fail); arg0=CALL(token_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_upper(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(upper_AmethystParsercb_1,1,bind); it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }VALUE AmethystParser_choice_lambda1(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(choice_AmethystParsercb_2,1,bind); it=AmethystParser_token(self ,arg0); FAILTEST(fail);
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystParser,"AmethystParser_choice_lambda1",AmethystParser_choice_lambda1,1);
rb_define_method(cls_AmethystParser,"_",AmethystParser__,0);
rb_define_method(cls_AmethystParser,"__args",AmethystParser___args,2);
rb_define_method(cls_AmethystParser,"_args",AmethystParser__args,2);
rb_define_method(cls_AmethystParser,"addargs",AmethystParser_addargs,0);
rb_define_method(cls_AmethystParser,"application",AmethystParser_application,0);
rb_define_method(cls_AmethystParser,"args",AmethystParser_args,2);
rb_define_method(cls_AmethystParser,"argsOpt",AmethystParser_argsOpt,2);
rb_define_method(cls_AmethystParser,"atomicHostExpr",AmethystParser_atomicHostExpr,0);
rb_define_method(cls_AmethystParser,"char",AmethystParser_char,0);
rb_define_method(cls_AmethystParser,"choice",AmethystParser_choice,0);
rb_define_method(cls_AmethystParser,"clas",AmethystParser_clas,1);
rb_define_method(cls_AmethystParser,"className",AmethystParser_className,0);
rb_define_method(cls_AmethystParser,"collect",AmethystParser_collect,1);
rb_define_method(cls_AmethystParser,"digit",AmethystParser_digit,0);
rb_define_method(cls_AmethystParser,"eChar",AmethystParser_eChar,0);
rb_define_method(cls_AmethystParser,"empty",AmethystParser_empty,0);
rb_define_method(cls_AmethystParser,"endline",AmethystParser_endline,0);
rb_define_method(cls_AmethystParser,"expression",AmethystParser_expression,0);
rb_define_method(cls_AmethystParser,"fails",AmethystParser_fails,0);
rb_define_method(cls_AmethystParser,"grammar",AmethystParser_grammar,0);
rb_define_method(cls_AmethystParser,"igrammar",AmethystParser_igrammar,0);
rb_define_method(cls_AmethystParser,"inlineHostExpr",AmethystParser_inlineHostExpr,0);
rb_define_method(cls_AmethystParser,"key",AmethystParser_key,0);
rb_define_method(cls_AmethystParser,"letter",AmethystParser_letter,0);
rb_define_method(cls_AmethystParser,"listOf",AmethystParser_listOf,2);
rb_define_method(cls_AmethystParser,"lower",AmethystParser_lower,0);
rb_define_method(cls_AmethystParser,"modifier",AmethystParser_modifier,0);
rb_define_method(cls_AmethystParser,"name",AmethystParser_name,0);
rb_define_method(cls_AmethystParser,"nameFirst",AmethystParser_nameFirst,0);
rb_define_method(cls_AmethystParser,"nameRest",AmethystParser_nameRest,0);
rb_define_method(cls_AmethystParser,"nr",AmethystParser_nr,0);
rb_define_method(cls_AmethystParser,"number",AmethystParser_number,0);
rb_define_method(cls_AmethystParser,"prefixed",AmethystParser_prefixed,0);
rb_define_method(cls_AmethystParser,"procargs",AmethystParser_procargs,0);
rb_define_method(cls_AmethystParser,"procargs2",AmethystParser_procargs2,0);
rb_define_method(cls_AmethystParser,"regch",AmethystParser_regch,1);
rb_define_method(cls_AmethystParser,"rubyarg",AmethystParser_rubyarg,0);
rb_define_method(cls_AmethystParser,"rule",AmethystParser_rule,0);
rb_define_method(cls_AmethystParser,"ruleargs",AmethystParser_ruleargs,0);
rb_define_method(cls_AmethystParser,"sequence",AmethystParser_sequence,0);
rb_define_method(cls_AmethystParser,"space",AmethystParser_space,0);
rb_define_method(cls_AmethystParser,"spaces",AmethystParser_spaces,0);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
rb_define_method(cls_AmethystParser,"token",AmethystParser_token,1);
rb_define_method(cls_AmethystParser,"upper",AmethystParser_upper,0);
 }
