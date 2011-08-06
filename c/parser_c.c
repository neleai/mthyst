#include "cthyst.h"
VALUE cls_AmethystParser;
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_addargs(VALUE self );
VALUE AmethystParser_application(VALUE self );
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_atomicHostExpr(VALUE self );
VALUE AmethystParser_choice(VALUE self );
VALUE AmethystParser_choice_lambda1(VALUE self,VALUE bind);
VALUE AmethystParser_className(VALUE self );
VALUE AmethystParser_collect(VALUE self ,VALUE a0);
VALUE AmethystParser_eChar(VALUE self );
VALUE AmethystParser_expression(VALUE self );
VALUE AmethystParser_grammar(VALUE self );
VALUE AmethystParser_igrammar(VALUE self );
VALUE AmethystParser_inlineHostExpr(VALUE self );
VALUE AmethystParser_key(VALUE self );
VALUE AmethystParser_modifier(VALUE self );
VALUE AmethystParser_name(VALUE self );
VALUE AmethystParser_nameFirst(VALUE self );
VALUE AmethystParser_nameRest(VALUE self );
VALUE AmethystParser_nr(VALUE self );
VALUE AmethystParser_number(VALUE self );
VALUE AmethystParser_prefixed(VALUE self );
VALUE AmethystParser_procargs(VALUE self );
VALUE AmethystParser_procargs2(VALUE self );
VALUE AmethystParser_rubyarg(VALUE self );
VALUE AmethystParser_rule(VALUE self );
VALUE AmethystParser_ruleargs(VALUE self );
VALUE AmethystParser_sequence(VALUE self );
VALUE AmethystParser_term(VALUE self );
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(o_1,a0);BSET(c_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(__args_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(fail); arg0=CALL(__args_AmethystParsercb_2,1,bind); it=CALL(token,1 ,arg0); FAILTEST(fail);it=CALL(__args_AmethystParsercb_3,1,bind); 
 BSET(autovar_1,it); VALUE oldinput1; while(1){oldinput1=IGET(input);   it=CALL(rubyarg,0 ); FAILTEST(break1);
 BSET(autovar_2,it); it=CALL(__args_AmethystParsercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=BGET(autovar_1);
 BSET(r_1,it);  arg0=CALL(__args_AmethystParsercb_5,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(fail);it=BGET(r_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(o_1,a0);BSET(c_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(_args_AmethystParsercb_1,1,bind);arg1=CALL(_args_AmethystParsercb_2,1,bind); it=CALL(__args,2 ,arg0,arg1); FAILTEST(fail);
 BSET(r_1,it); it=CALL(_args_AmethystParsercb_3,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_addargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1; while(1){oldinput1=IGET(input);  arg0=CALL(addargs_AmethystParsercb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(break1);
 BSET(autovar_1,it); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(name_1,it); it=CALL(addargs_AmethystParsercb_2,1,bind); 
 BSET(autovar_2,it); it=CALL(addargs_AmethystParsercb_3,1,bind); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto break1;
 if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=CALL(addargs_AmethystParsercb_4,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_application(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(name,0 ); FAILTEST(alt1_2);
 BSET(klas_1,it);  arg0=CALL(application_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_2);  it=CALL(name,0 ); FAILTEST(alt1_2);
 BSET(rule_1,it); it=CALL(application_AmethystParsercb_2,1,bind); 
 BSET(rule_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(name,0 ); FAILTEST(alt1_3);
 BSET(rule_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
 arg0=CALL(application_AmethystParsercb_3,1,bind);arg1=CALL(application_AmethystParsercb_4,1,bind); it=CALL(argsOpt,2 ,arg0,arg1); FAILTEST(fail);
 BSET(arg_1,it); it=CALL(application_AmethystParsercb_5,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(o_1,a0);BSET(c_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(args_AmethystParsercb_1,1,bind);arg1=CALL(args_AmethystParsercb_2,1,bind); it=CALL(__args,2 ,arg0,arg1); FAILTEST(fail);
 BSET(r_1,it); it=CALL(args_AmethystParsercb_3,1,bind); 
 BSET(autovar_1,it); VALUE oldinput1=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,rb_ary_new3(1,BGET(autovar_1))); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(autovar_2,it); VALUE oldinput2=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_2)); ISET(input,INT2FIX(0));
   it=CALL(procargs,0 ); FAILTEST(pass2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput1);
	if(fail1) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(o_1,a0);BSET(c_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(argsOpt_AmethystParsercb_1,1,bind);arg1=CALL(argsOpt_AmethystParsercb_2,1,bind); it=CALL(args,2 ,arg0,arg1); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(empty,0 ); FAILTEST(alt1_3);it=CALL(argsOpt_AmethystParsercb_3,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_atomicHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(atomicHostExpr_AmethystParsercb_1,1,bind); 
 BSET(autovar_1,it); VALUE oldinput1; while(1){oldinput1=IGET(input); VALUE oldinput2=IGET(input);
alt1_1: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(endline,0 ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=CALL(fails,0 ); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(empty,0 ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput2); goto break1;
 accept1:;
  it=CALL(anything,0 ); FAILTEST(break1);
 BSET(autovar_2,it); it=CALL(atomicHostExpr_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=BGET(autovar_1);
 BSET(s_1,it); it=CALL(atomicHostExpr_AmethystParsercb_3,1,bind); 
 BSET(autovar_3,it); VALUE oldinput3=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,rb_ary_new3(1,BGET(autovar_3))); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(autovar_4,it); VALUE oldinput4=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
   it=CALL(inlineHostExpr,0 ); FAILTEST(pass2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput4);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput3);
	if(fail1) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_choice(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(choice_AmethystParsercb_1,1,bind);arg1=CALL(choice_AmethystParsercb_3,1,bind); it=CALL(listOf,2 ,arg0,arg1); FAILTEST(fail);
 BSET(ary_1,it); it=CALL(choice_AmethystParsercb_4,1,bind);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(className_AmethystParsercb_1,1,bind); it=CALL(token,1 ,arg0); FAILTEST(fail);  it=CALL(upper,0 ); FAILTEST(fail);
 BSET(autovar_1,it); it=CALL(className_AmethystParsercb_2,1,bind); it=CALL(className_AmethystParsercb_3,1,bind); 
 BSET(autovar_3,it); VALUE oldinput1; while(1){oldinput1=IGET(input);   it=CALL(nameRest,0 ); FAILTEST(break1);
 BSET(autovar_4,it); it=CALL(className_AmethystParsercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=BGET(autovar_3);
 BSET(autovar_5,it); it=CALL(className_AmethystParsercb_5,1,bind); it=BGET(autovar_2);
 BSET(it_1,it); it=CALL(className_AmethystParsercb_6,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(ors_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(collect_AmethystParsercb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(eChar_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_2);  it=CALL(char,0 ); FAILTEST(alt1_2);
 BSET(c_1,it); it=CALL(eChar_AmethystParsercb_2,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(eChar_AmethystParsercb_3,1,bind);arg1=CALL(eChar_AmethystParsercb_4,1,bind); it=CALL(_args,2 ,arg0,arg1); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(char,0 ); FAILTEST(alt1_4);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(choice,0 ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(grammar_AmethystParsercb_1,1,bind); it=CALL(token,1 ,arg0); FAILTEST(fail);  it=CALL(name,0 ); FAILTEST(fail);
 BSET(name_1,it); VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(grammar_AmethystParsercb_2,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_2);  it=CALL(name,0 ); FAILTEST(alt1_2);
 BSET(parent_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(empty,0 ); FAILTEST(alt1_3);it=CALL(grammar_AmethystParsercb_3,1,bind);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
 arg0=CALL(grammar_AmethystParsercb_4,1,bind); it=CALL(token,1 ,arg0); FAILTEST(fail);it=CALL(grammar_AmethystParsercb_5,1,bind); 
 BSET(autovar_1,it); VALUE oldinput2; while(1){oldinput2=IGET(input);   it=CALL(rule,0 ); FAILTEST(break1);
 BSET(autovar_2,it); it=CALL(grammar_AmethystParsercb_6,1,bind);  if (IGET(stop)!=Qnil){{oldinput2=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput2); it=BGET(autovar_1);
 BSET(rules_1,it);  arg0=CALL(grammar_AmethystParsercb_7,1,bind); it=CALL(token,1 ,arg0); FAILTEST(fail);it=CALL(grammar_AmethystParsercb_8,1,bind);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(igrammar_AmethystParsercb_1,1,bind); 
 BSET(autovar_1,it); VALUE oldinput1; while(1){oldinput1=IGET(input); VALUE oldinput2=IGET(input);
alt1_1: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
 it=CALL(igrammar_AmethystParsercb_2,1,bind); 
 BSET(autovar_2,it); VALUE oldinput3=IGET(input);
alt2_1: ISET(input,oldinput3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  arg0=CALL(igrammar_AmethystParsercb_3,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt2_2);ISET(cut,Qtrue);  it=CALL(fails,0 ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ISET(input,oldinput3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=CALL(empty,0 ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ISET(input,oldinput3); goto alt1_2;
 accept2:;
  it=CALL(anything,0 ); FAILTEST(alt1_2);
 BSET(autovar_3,it); it=CALL(igrammar_AmethystParsercb_4,1,bind); VALUE oldinput4; while(1){oldinput4=IGET(input); VALUE oldinput5=IGET(input);
alt3_1: ISET(input,oldinput5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  arg0=CALL(igrammar_AmethystParsercb_5,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt3_2);ISET(cut,Qtrue);  it=CALL(fails,0 ); FAILTEST(alt3_2); 
ISET(cut,Qnil);goto accept3;
alt3_2: ISET(input,oldinput5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=CALL(empty,0 ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept3;
  alt3_3:  ISET(input,oldinput5); goto break2;
 accept3:;
  it=CALL(anything,0 ); FAILTEST(break2);
 BSET(autovar_4,it); it=CALL(igrammar_AmethystParsercb_6,1,bind);  if (IGET(stop)!=Qnil){{oldinput4=IGET(input);goto break2;} } } break2: ISET(stop,Qnil);  ISET(input,oldinput4); it=BGET(autovar_2);
 BSET(it_1,it); it=CALL(igrammar_AmethystParsercb_7,1,bind); 
 BSET(autovar_5,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(grammar,0 ); FAILTEST(alt1_3);
 BSET(autovar_5,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput2); goto break1;
 accept1:;
it=CALL(igrammar_AmethystParsercb_8,1,bind);  if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=BGET(autovar_1);
 BSET(a_1,it); it=BGET(a_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(inlineHostExpr_AmethystParsercb_1,1,bind);arg1=CALL(inlineHostExpr_AmethystParsercb_2,1,bind); it=CALL(args,2 ,arg0,arg1); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(key_AmethystParsercb_1,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_2);  it=CALL(className,0 ); FAILTEST(alt1_2);
 BSET(name_1,it);  arg0=CALL(key_AmethystParsercb_2,1,bind);arg1=CALL(key_AmethystParsercb_3,1,bind); it=CALL(argsOpt,2 ,arg0,arg1); FAILTEST(alt1_2);
 BSET(args_1,it); it=CALL(key_AmethystParsercb_4,1,bind); 
 BSET(vars_1,it); it=CALL(key_AmethystParsercb_5,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(key_AmethystParsercb_6,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_3);  it=CALL(name,0 ); FAILTEST(alt1_3);
 BSET(name_1,it); it=CALL(key_AmethystParsercb_7,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(key_AmethystParsercb_8,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_4);  it=CALL(name,0 ); FAILTEST(alt1_4);
 BSET(name_1,it); it=CALL(key_AmethystParsercb_9,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_modifier(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(term,0 ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(modifier_AmethystParsercb_1,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_3);it=CALL(modifier_AmethystParsercb_2,1,bind); 
 BSET(autovar_1,it); VALUE oldinput2; while(1){oldinput2=IGET(input); VALUE oldinput3=IGET(input);
alt2_1: ISET(input,oldinput3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(endline,0 ); FAILTEST(alt2_2);ISET(cut,Qtrue);  it=CALL(fails,0 ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ISET(input,oldinput3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(empty,0 ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ISET(input,oldinput3); goto break1;
 accept2:;
  it=CALL(anything,0 ); FAILTEST(break1);
 BSET(autovar_2,it); it=CALL(modifier_AmethystParsercb_3,1,bind);  if (IGET(stop)!=Qnil){{oldinput2=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput2); it=BGET(autovar_1);
 BSET(c_1,it); it=CALL(modifier_AmethystParsercb_4,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(name_AmethystParsercb_1,1,bind); it=CALL(token,1 ,arg0); FAILTEST(fail);  it=CALL(nameFirst,0 ); FAILTEST(fail);
 BSET(autovar_1,it); it=CALL(name_AmethystParsercb_2,1,bind); it=CALL(name_AmethystParsercb_3,1,bind); 
 BSET(autovar_3,it); VALUE oldinput1; while(1){oldinput1=IGET(input);   it=CALL(nameRest,0 ); FAILTEST(break1);
 BSET(autovar_4,it); it=CALL(name_AmethystParsercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=BGET(autovar_3);
 BSET(autovar_5,it); it=CALL(name_AmethystParsercb_5,1,bind); it=BGET(autovar_2);
 BSET(it_1,it); it=CALL(name_AmethystParsercb_6,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_nameFirst(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(letter,0 ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(nameFirst_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_nameRest(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(nameFirst,0 ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(digit,0 ); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(name,0 ); FAILTEST(alt1_2); arg0=CALL(nr_AmethystParsercb_1,1,bind);arg1=CALL(nr_AmethystParsercb_2,1,bind); it=CALL(argsOpt,2 ,arg0,arg1); FAILTEST(alt1_2); arg0=CALL(nr_AmethystParsercb_3,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=CALL(fails,0 ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(empty,0 ); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_number(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(number_AmethystParsercb_1,1,bind); 
 BSET(autovar_1,it);  arg0=CALL(number_AmethystParsercb_2,1,bind); it=CALL(regch,1 ,arg0); FAILTEST(fail);
 BSET(autovar_2,it); it=CALL(number_AmethystParsercb_3,1,bind); VALUE oldinput1; while(1){oldinput1=IGET(input);  arg0=CALL(number_AmethystParsercb_4,1,bind); it=CALL(regch,1 ,arg0); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(number_AmethystParsercb_5,1,bind);  if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=BGET(autovar_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(prefixed_AmethystParsercb_1,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_2);  it=CALL(inlineHostExpr,0 ); FAILTEST(alt1_2);
 BSET(expr_1,it); it=CALL(prefixed_AmethystParsercb_2,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 VALUE oldinput2=IGET(input);
alt2_1: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_3;}
  arg0=CALL(prefixed_AmethystParsercb_3,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt2_2);
 BSET(neg_1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_3;}
  arg0=CALL(prefixed_AmethystParsercb_4,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt2_3);
 BSET(neg_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ISET(input,oldinput2); goto alt1_3;
 accept2:;
  it=CALL(prefixed,0 ); FAILTEST(alt1_3);
 BSET(m_1,it); it=CALL(prefixed_AmethystParsercb_5,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 VALUE oldinput3=IGET(input);
alt3_1: ISET(input,oldinput3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_4;}
   it=CALL(modifier,0 ); FAILTEST(alt3_2);
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ISET(input,oldinput3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_4;}
  arg0=CALL(prefixed_AmethystParsercb_6,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt3_3);VALUE oldinput4=IGET(input);
  arg0=CALL(prefixed_AmethystParsercb_7,1,bind); it=CALL(regch,1 ,arg0); FAILTEST(reject1); x=1; goto accept4;  reject1: x=0; accept4: it=Qnil; ISET(input,oldinput4); if (x==0) goto alt3_3;VALUE oldinput5=IGET(input);
alt4_1: ISET(input,oldinput5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt3_3;}
  arg0=CALL(prefixed_AmethystParsercb_8,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt4_2); 
ISET(cut,Qnil);goto accept5;
alt4_2: ISET(input,oldinput5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt3_3;}
   it=CALL(empty,0 ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept5;
  alt4_3:  ISET(input,oldinput5); goto alt3_3;
 accept5:;
it=CALL(prefixed_AmethystParsercb_9,1,bind); 
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ISET(input,oldinput3); goto alt1_4;
 accept3:;
VALUE oldinput6; while(1){oldinput6=IGET(input); VALUE oldinput7=IGET(input);
alt5_1: ISET(input,oldinput7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(_,0 ); FAILTEST(alt5_2);ISET(cut,Qtrue);  it=CALL(fails,0 ); FAILTEST(alt5_2); 
ISET(cut,Qnil);goto accept6;
alt5_2: ISET(input,oldinput7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(empty,0 ); FAILTEST(alt5_3); 
ISET(cut,Qnil);goto accept6;
  alt5_3:  ISET(input,oldinput7); goto break1;
 accept6:;
VALUE oldinput8=IGET(input);
alt6_1: ISET(input,oldinput8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(prefixed_AmethystParsercb_10,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt6_2);  it=CALL(prefixed,0 ); FAILTEST(alt6_2);
 BSET(it_1,it); it=CALL(prefixed_AmethystParsercb_11,1,bind);  
ISET(cut,Qnil);goto accept7;
alt6_2: ISET(input,oldinput8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(prefixed_AmethystParsercb_12,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt6_3);  it=CALL(expression,0 ); FAILTEST(alt6_3);
 BSET(it_1,it); it=CALL(prefixed_AmethystParsercb_13,1,bind);  arg0=CALL(prefixed_AmethystParsercb_14,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt6_3); 
ISET(cut,Qnil);goto accept7;
alt6_3: ISET(input,oldinput8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
 VALUE oldinput9=IGET(input);
alt7_1: ISET(input,oldinput9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_4;}
  arg0=CALL(prefixed_AmethystParsercb_15,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt7_2);
 BSET(one_1,it);  
ISET(cut,Qnil);goto accept8;
alt7_2: ISET(input,oldinput9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_4;}
  arg0=CALL(prefixed_AmethystParsercb_16,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt7_3);
 BSET(one_1,it);  
ISET(cut,Qnil);goto accept8;
  alt7_3:  ISET(input,oldinput9); goto alt6_4;
 accept8:;
it=CALL(prefixed_AmethystParsercb_17,1,bind); 
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept7;
alt6_4: ISET(input,oldinput8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(prefixed_AmethystParsercb_18,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt6_5);it=CALL(prefixed_AmethystParsercb_19,1,bind); 
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept7;
alt6_5: ISET(input,oldinput8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(prefixed_AmethystParsercb_20,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt6_6);VALUE oldinput10=IGET(input);
alt8_1: ISET(input,oldinput10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_6;}
 VALUE oldinput11=IGET(input);
alt9_1: ISET(input,oldinput11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
   it=CALL(key,0 ); FAILTEST(alt9_2);
 BSET(name_1,it);  
ISET(cut,Qnil);goto accept10;
alt9_2: ISET(input,oldinput11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
   it=CALL(name,0 ); FAILTEST(alt9_3);
 BSET(name_1,it);  
ISET(cut,Qnil);goto accept10;
  alt9_3:  ISET(input,oldinput11); goto alt8_2;
 accept10:;
VALUE oldinput12=IGET(input);
alt10_1: ISET(input,oldinput12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
  arg0=CALL(prefixed_AmethystParsercb_21,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt10_2);it=CALL(prefixed_AmethystParsercb_22,1,bind); 
 BSET(append_1,it);  
ISET(cut,Qnil);goto accept11;
alt10_2: ISET(input,oldinput12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
   it=CALL(empty,0 ); FAILTEST(alt10_3);it=CALL(prefixed_AmethystParsercb_23,1,bind); 
 BSET(append_1,it);  
ISET(cut,Qnil);goto accept11;
  alt10_3:  ISET(input,oldinput12); goto alt8_2;
 accept11:;
it=CALL(prefixed_AmethystParsercb_24,1,bind); 
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept9;
alt8_2: ISET(input,oldinput10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_6;}
   it=CALL(inlineHostExpr,0 ); FAILTEST(alt8_3);
 BSET(e_1,it); it=CALL(prefixed_AmethystParsercb_25,1,bind); 
 BSET(from_1,it);  
ISET(cut,Qnil);goto accept9;
  alt8_3:  ISET(input,oldinput10); goto alt6_6;
 accept9:;
 
ISET(cut,Qnil);goto accept7;
  alt6_6:  ISET(input,oldinput8); goto break1;
 accept7:;
 if (IGET(stop)!=Qnil){{oldinput6=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput6); it=BGET(from_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(procargs_AmethystParsercb_1,1,bind); VALUE oldinput1; while(1){oldinput1=IGET(input); VALUE oldinput2=IGET(input);
alt1_1: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(anything,0 ); FAILTEST(alt1_2);
 BSET(c_1,it); it=CALL(procargs_AmethystParsercb_2,1,bind); FAILTEST(alt1_2);it=CALL(procargs_AmethystParsercb_3,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(procargs2,0 ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput2); goto break1;
 accept1:;
 if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=CALL(procargs_AmethystParsercb_4,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(procargs2_AmethystParsercb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 it=CALL(procargs2_AmethystParsercb_2,1,bind); 
 BSET(autovar_2,it); VALUE oldinput3; while(1){oldinput3=IGET(input);   it=CALL(procargs2,0 ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(procargs2_AmethystParsercb_3,1,bind);  if (IGET(stop)!=Qnil){{oldinput3=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_3);
 BSET(a_1,it); it=CALL(procargs2_AmethystParsercb_4,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_1,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_2);  it=CALL(expression,0 ); FAILTEST(alt1_2);
 BSET(e_1,it);  arg0=CALL(rubyarg_AmethystParsercb_2,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_2);it=CALL(rubyarg_AmethystParsercb_3,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_4,1,bind);arg1=CALL(rubyarg_AmethystParsercb_5,1,bind); it=CALL(_args,2 ,arg0,arg1); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_6,1,bind);arg1=CALL(rubyarg_AmethystParsercb_7,1,bind); it=CALL(_args,2 ,arg0,arg1); FAILTEST(alt1_4);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_8,1,bind);arg1=CALL(rubyarg_AmethystParsercb_9,1,bind); it=CALL(_args,2 ,arg0,arg1); FAILTEST(alt1_5);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_10,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_1,it); it=CALL(rubyarg_AmethystParsercb_11,1,bind); it=CALL(rubyarg_AmethystParsercb_12,1,bind); 
 BSET(autovar_2,it); VALUE oldinput2; while(1){oldinput2=IGET(input); VALUE oldinput3=IGET(input);
alt2_1: ISET(input,oldinput3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(rubyarg_AmethystParsercb_13,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt2_2);ISET(cut,Qtrue);ISET(stop,Qtrue);
 BSET(autovar_3,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ISET(input,oldinput3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(eChar,0 ); FAILTEST(alt2_3);
 BSET(autovar_3,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ISET(input,oldinput3); goto break1;
 accept2:;
it=CALL(rubyarg_AmethystParsercb_14,1,bind);  if (IGET(stop)!=Qnil){{oldinput2=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput2); it=BGET(autovar_2);
 BSET(autovar_4,it); it=CALL(rubyarg_AmethystParsercb_15,1,bind); it=CALL(rubyarg_AmethystParsercb_16,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_17,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_7);
 BSET(autovar_5,it); it=CALL(rubyarg_AmethystParsercb_18,1,bind); it=CALL(rubyarg_AmethystParsercb_19,1,bind); 
 BSET(autovar_6,it); VALUE oldinput4; while(1){oldinput4=IGET(input); VALUE oldinput5=IGET(input);
alt3_1: ISET(input,oldinput5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  arg0=CALL(rubyarg_AmethystParsercb_20,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt3_2);ISET(cut,Qtrue);ISET(stop,Qtrue);
 BSET(autovar_7,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ISET(input,oldinput5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=CALL(eChar,0 ); FAILTEST(alt3_3);
 BSET(autovar_7,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ISET(input,oldinput5); goto break2;
 accept3:;
it=CALL(rubyarg_AmethystParsercb_21,1,bind);  if (IGET(stop)!=Qnil){{oldinput4=IGET(input);goto break2;} } } break2: ISET(stop,Qnil);  ISET(input,oldinput4); it=BGET(autovar_6);
 BSET(autovar_8,it); it=CALL(rubyarg_AmethystParsercb_22,1,bind); it=CALL(rubyarg_AmethystParsercb_23,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_24,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_8);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_8: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_25,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_9);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_9: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 VALUE oldinput6=IGET(input);
alt4_1: ISET(input,oldinput6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
  arg0=CALL(rubyarg_AmethystParsercb_26,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt4_2);
 BSET(n_1,it);  
ISET(cut,Qnil);goto accept4;
alt4_2: ISET(input,oldinput6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
  arg0=CALL(rubyarg_AmethystParsercb_27,1,bind); it=CALL(regch,1 ,arg0); FAILTEST(alt4_3);
 BSET(n_1,it);  
ISET(cut,Qnil);goto accept4;
alt4_3: ISET(input,oldinput6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
   it=CALL(empty,0 ); FAILTEST(alt4_4); 
ISET(cut,Qnil);goto accept4;
  alt4_4:  ISET(input,oldinput6); goto alt1_10;
 accept4:;
VALUE oldinput7=IGET(input);
alt5_1: ISET(input,oldinput7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
   it=CALL(_,0 ); FAILTEST(alt5_2);ISET(cut,Qtrue);  it=CALL(fails,0 ); FAILTEST(alt5_2); 
ISET(cut,Qnil);goto accept5;
alt5_2: ISET(input,oldinput7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
   it=CALL(empty,0 ); FAILTEST(alt5_3); 
ISET(cut,Qnil);goto accept5;
  alt5_3:  ISET(input,oldinput7); goto alt1_10;
 accept5:;
  it=CALL(name,0 ); FAILTEST(alt1_10);
 BSET(autovar_9,it); it=CALL(rubyarg_AmethystParsercb_28,1,bind); it=BGET(n_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_10: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 VALUE oldinput8=IGET(input);
alt6_1: ISET(input,oldinput8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_11;}
   it=CALL(_,0 ); FAILTEST(alt6_2);ISET(cut,Qtrue);  it=CALL(fails,0 ); FAILTEST(alt6_2); 
ISET(cut,Qnil);goto accept6;
alt6_2: ISET(input,oldinput8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_11;}
   it=CALL(empty,0 ); FAILTEST(alt6_3); 
ISET(cut,Qnil);goto accept6;
  alt6_3:  ISET(input,oldinput8); goto alt1_11;
 accept6:;
  it=CALL(key,0 ); FAILTEST(alt1_11);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rubyarg_AmethystParsercb_29,1,bind); it=CALL(regch,1 ,arg0); FAILTEST(alt1_12);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_12:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(rule_AmethystParsercb_1,1,bind); it=CALL(rule_AmethystParsercb_2,1,bind); 
 BSET(bnding_1,it);   it=CALL(name,0 ); FAILTEST(fail);
 BSET(name_1,it);   it=CALL(ruleargs,0 ); FAILTEST(fail);
 BSET(args_1,it);  arg0=CALL(rule_AmethystParsercb_3,1,bind); it=CALL(token,1 ,arg0); FAILTEST(fail);  it=CALL(expression,0 ); FAILTEST(fail);
 BSET(body_1,it); it=CALL(rule_AmethystParsercb_4,1,bind); 
 BSET(body_1,it); it=CALL(rule_AmethystParsercb_5,1,bind); 
 BSET(locals_1,it); it=CALL(rule_AmethystParsercb_6,1,bind);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 arg0=CALL(ruleargs_AmethystParsercb_1,1,bind);arg1=CALL(ruleargs_AmethystParsercb_2,1,bind); it=CALL(argsOpt,2 ,arg0,arg1); FAILTEST(fail);
 BSET(autovar_1,it); VALUE oldinput1=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,rb_ary_new3(1,BGET(autovar_1))); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(autovar_2,it); VALUE oldinput2=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_2)); ISET(input,INT2FIX(0));
   it=CALL(addargs,0 ); FAILTEST(pass2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput1);
	if(fail1) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(sequence_AmethystParsercb_1,1,bind); 
 BSET(autovar_1,it); VALUE oldinput1; while(1){oldinput1=IGET(input);   it=CALL(nr,0 ); FAILTEST(break1);  it=CALL(prefixed,0 ); FAILTEST(break1);
 BSET(autovar_2,it); it=CALL(sequence_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=BGET(autovar_1);
 BSET(ary_1,it); it=CALL(sequence_AmethystParsercb_3,1,bind);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(className,0 ); FAILTEST(alt1_2);
 BSET(cls_1,it); it=CALL(term_AmethystParsercb_1,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_2,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_3); arg0=CALL(term_AmethystParsercb_3,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt1_3);  it=CALL(expression,0 ); FAILTEST(alt1_3);
 BSET(expr_1,it);  arg0=CALL(term_AmethystParsercb_4,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_3);it=CALL(term_AmethystParsercb_5,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_6,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_4);it=CALL(term_AmethystParsercb_7,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(application,0 ); FAILTEST(alt1_5);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(key,0 ); FAILTEST(alt1_6);
 BSET(it_1,it); it=CALL(term_AmethystParsercb_8,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 VALUE oldinput2=IGET(input);
alt2_1: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_7;}
  arg0=CALL(term_AmethystParsercb_9,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt2_2);  it=CALL(atomicHostExpr,0 ); FAILTEST(alt2_2);
 BSET(x_1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_7;}
  arg0=CALL(term_AmethystParsercb_10,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt2_3);  it=CALL(inlineHostExpr,0 ); FAILTEST(alt2_3);
 BSET(x_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ISET(input,oldinput2); goto alt1_7;
 accept2:;
it=CALL(term_AmethystParsercb_11,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_12,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_8);VALUE oldinput3; while(1){oldinput3=IGET(input); VALUE oldinput4=IGET(input);
alt3_1: ISET(input,oldinput4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(term_AmethystParsercb_13,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt3_2);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept3;
alt3_2: ISET(input,oldinput4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(eChar,0 ); FAILTEST(alt3_3);
 BSET(autovar_1,it); it=CALL(term_AmethystParsercb_14,1,bind);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ISET(input,oldinput4); goto break1;
 accept3:;
 if (IGET(stop)!=Qnil){{oldinput3=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput3); it=CALL(term_AmethystParsercb_15,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_8: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_16,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_9);VALUE oldinput5; while(1){oldinput5=IGET(input); VALUE oldinput6=IGET(input);
alt4_1: ISET(input,oldinput6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  arg0=CALL(term_AmethystParsercb_17,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt4_2);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept4;
alt4_2: ISET(input,oldinput6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=CALL(eChar,0 ); FAILTEST(alt4_3);
 BSET(autovar_2,it); it=CALL(term_AmethystParsercb_18,1,bind);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ISET(input,oldinput6); goto break2;
 accept4:;
 if (IGET(stop)!=Qnil){{oldinput5=IGET(input);goto break2;} } } break2: ISET(stop,Qnil);  ISET(input,oldinput5); it=CALL(term_AmethystParsercb_19,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_9: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(number,0 ); FAILTEST(alt1_10);
 BSET(it_1,it); it=CALL(term_AmethystParsercb_20,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_10: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_21,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_11);VALUE oldinput7; while(1){oldinput7=IGET(input); VALUE oldinput8=IGET(input);
alt5_1: ISET(input,oldinput8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
  arg0=CALL(term_AmethystParsercb_22,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt5_2);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept5;
alt5_2: ISET(input,oldinput8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
   it=CALL(eChar,0 ); FAILTEST(alt5_3);
 BSET(autovar_3,it); it=CALL(term_AmethystParsercb_23,1,bind);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ISET(input,oldinput8); goto break3;
 accept5:;
 if (IGET(stop)!=Qnil){{oldinput7=IGET(input);goto break3;} } } break3: ISET(stop,Qnil);  ISET(input,oldinput7); it=CALL(term_AmethystParsercb_24,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(term_AmethystParsercb_25,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_12);  it=CALL(expression,0 ); FAILTEST(alt1_12);
 BSET(x_1,it);  arg0=CALL(term_AmethystParsercb_26,1,bind); it=CALL(token,1 ,arg0); FAILTEST(alt1_12);VALUE oldinput9=IGET(input);
alt6_1: ISET(input,oldinput9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_12;}
  arg0=CALL(term_AmethystParsercb_27,1,bind); it=CALL(seq,1 ,arg0); FAILTEST(alt6_2); arg0=CALL(term_AmethystParsercb_28,1,bind); it=CALL(collect,1 ,arg0); FAILTEST(alt6_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ISET(input,oldinput9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_12;}
   it=CALL(empty,0 ); FAILTEST(alt6_3);it=BGET(x_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ISET(input,oldinput9); goto alt1_12;
 accept6:;
 
ISET(cut,Qnil);goto accept1;
  alt1_12:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }VALUE AmethystParser_choice_lambda1(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
 arg0=CALL(choice_AmethystParsercb_2,1,bind); it=CALL(token,1 ,arg0); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystParser,"AmethystParser_choice_lambda1",AmethystParser_choice_lambda1,1);
rb_define_method(cls_AmethystParser,"__args",AmethystParser___args,2);
rb_define_method(cls_AmethystParser,"_args",AmethystParser__args,2);
rb_define_method(cls_AmethystParser,"addargs",AmethystParser_addargs,0);
rb_define_method(cls_AmethystParser,"application",AmethystParser_application,0);
rb_define_method(cls_AmethystParser,"args",AmethystParser_args,2);
rb_define_method(cls_AmethystParser,"argsOpt",AmethystParser_argsOpt,2);
rb_define_method(cls_AmethystParser,"atomicHostExpr",AmethystParser_atomicHostExpr,0);
rb_define_method(cls_AmethystParser,"choice",AmethystParser_choice,0);
rb_define_method(cls_AmethystParser,"className",AmethystParser_className,0);
rb_define_method(cls_AmethystParser,"collect",AmethystParser_collect,1);
rb_define_method(cls_AmethystParser,"eChar",AmethystParser_eChar,0);
rb_define_method(cls_AmethystParser,"expression",AmethystParser_expression,0);
rb_define_method(cls_AmethystParser,"grammar",AmethystParser_grammar,0);
rb_define_method(cls_AmethystParser,"igrammar",AmethystParser_igrammar,0);
rb_define_method(cls_AmethystParser,"inlineHostExpr",AmethystParser_inlineHostExpr,0);
rb_define_method(cls_AmethystParser,"key",AmethystParser_key,0);
rb_define_method(cls_AmethystParser,"modifier",AmethystParser_modifier,0);
rb_define_method(cls_AmethystParser,"name",AmethystParser_name,0);
rb_define_method(cls_AmethystParser,"nameFirst",AmethystParser_nameFirst,0);
rb_define_method(cls_AmethystParser,"nameRest",AmethystParser_nameRest,0);
rb_define_method(cls_AmethystParser,"nr",AmethystParser_nr,0);
rb_define_method(cls_AmethystParser,"number",AmethystParser_number,0);
rb_define_method(cls_AmethystParser,"prefixed",AmethystParser_prefixed,0);
rb_define_method(cls_AmethystParser,"procargs",AmethystParser_procargs,0);
rb_define_method(cls_AmethystParser,"procargs2",AmethystParser_procargs2,0);
rb_define_method(cls_AmethystParser,"rubyarg",AmethystParser_rubyarg,0);
rb_define_method(cls_AmethystParser,"rule",AmethystParser_rule,0);
rb_define_method(cls_AmethystParser,"ruleargs",AmethystParser_ruleargs,0);
rb_define_method(cls_AmethystParser,"sequence",AmethystParser_sequence,0);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
 }
