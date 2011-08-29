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
VALUE AmethystParser_clas(VALUE self ,VALUE a0);
VALUE AmethystParser_className(VALUE self );
VALUE AmethystParser_collect(VALUE self ,VALUE a0);
VALUE AmethystParser_digit(VALUE self );
VALUE AmethystParser_eChar(VALUE self );
VALUE AmethystParser_empty(VALUE self );
VALUE AmethystParser_endline(VALUE self );
VALUE AmethystParser_eof(VALUE self );
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
VALUE AmethystParser_spaces(VALUE self );
VALUE AmethystParser_term(VALUE self );
VALUE AmethystParser_token(VALUE self ,VALUE a0);
VALUE AmethystParser_upper(VALUE self );
VALUE AmethystParser__(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(__AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(__AmethystParsercb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(__AmethystParsercb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(6); rb_ary_store(bind,0,a0);rb_ary_store(bind,4,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_ary_entry(bind,0); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2(""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 rb_ary_store(bind,1,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,2,it); it=CALL(__args_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,3,it);  it=rb_ary_entry(bind,4); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0,a0);rb_ary_store(bind,1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_ary_entry(bind,0); arg0=it;it=rb_ary_entry(bind,1); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(fail);
 rb_ary_store(bind,2,it); it=CALL(_args_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }
VALUE AmethystParser_addargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=CALL(addargs_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_clas(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); it=CALL(addargs_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,3,it); it=CALL(addargs_AmethystParsercb_3,1,bind);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto break1;
 if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(addargs_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
return it;
fail: return failobj; }
VALUE AmethystParser_application(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  it=rb_str_new2("::"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1,it); it=CALL(application_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("("); arg0=it;it=rb_str_new2(")"); arg1=it; it=AmethystParser_args(self ,arg0,arg1); FAILTEST(alt2_2);
 rb_ary_store(bind,2,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3);it=rb_ary_new3(0);
 rb_ary_store(bind,2,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(application_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(14); rb_ary_store(bind,2,a0);rb_ary_store(bind,0,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it);  it=rb_ary_entry(bind,3); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2(""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 rb_ary_store(bind,4,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,5,it); it=CALL(args_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,6,it);  it=rb_ary_entry(bind,1); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,6);
 rb_ary_store(bind,7,it); it=rb_ary_entry(bind,7);
 rb_ary_store(bind,8,it); it=CALL(args_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,9,it); it=CALL(args_AmethystParsercb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,10,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,11,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,11);
 rb_ary_store(bind,12,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,12);
 rb_ary_store(bind,13,it); it=rb_ary_entry(bind,13);
return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,0,a0);rb_ary_store(bind,1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_ary_entry(bind,0); arg0=it;it=rb_ary_entry(bind,1); arg1=it; it=AmethystParser_args(self ,arg0,arg1); FAILTEST(alt1_2);
 rb_ary_store(bind,2,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,2,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE AmethystParser_atomicHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_endline(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
  it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,1,it); it=CALL(atomicHostExpr_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=CALL(atomicHostExpr_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,3,it); it=CALL(atomicHostExpr_AmethystParsercb_3,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(pass2);
 rb_ary_store(bind,5,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,5);
 rb_ary_store(bind,6,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,6);
 rb_ary_store(bind,7,it); it=rb_ary_entry(bind,7);
return it;
fail: return failobj; }
VALUE AmethystParser_char(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(char_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE AmethystParser_choice(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_sequence(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1,it); it=CALL(choice_AmethystParsercb_1,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_str_new2("|"); arg0=it; it=AmethystParser_token(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);  it=AmethystParser_sequence(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(choice_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,5,it); it=CALL(choice_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,6);
 rb_ary_store(bind,7,it); it=CALL(choice_AmethystParsercb_4,1,bind);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }
VALUE AmethystParser_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2(""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_upper(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(className_AmethystParsercb_1,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 rb_ary_store(bind,3,it); it=CALL(className_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,4,it); it=CALL(className_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,5,it); it=CALL(className_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(collect_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE AmethystParser_digit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(digit_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(digit_AmethystParsercb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(digit_AmethystParsercb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\\"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(eChar_AmethystParsercb_1,1,bind); FAILTEST(alt1_2);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=CALL(eChar_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("}");
 rb_ary_store(bind,4,it); it=CALL(eChar_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,5,it);  it=rb_ary_entry(bind,5); arg0=it;it=rb_str_new2("}"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3);
 rb_ary_store(bind,6,it); it=CALL(eChar_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,7,it); it=rb_ary_entry(bind,7);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,0,it); it=CALL(eChar_AmethystParsercb_5,1,bind); FAILTEST(alt1_4);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }
VALUE AmethystParser_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_AmethystParsercb_1,1,bind); 
return it;
fail: return failobj; }
VALUE AmethystParser_endline(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=*ame_curstr(self);  switch(chr1){case 10:;  it=rb_str_new2("\n"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it);  break;case 13:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\r\n"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\r"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;default: goto fail;}it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE AmethystParser_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_choice(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE AmethystParser_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_AmethystParsercb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2("amethyst"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_str_new2("<"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=CALL(grammar_AmethystParsercb_1,1,bind);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2("{"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 rb_ary_store(bind,2,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1);
 rb_ary_store(bind,3,it); it=CALL(grammar_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,4,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2("}"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);it=CALL(grammar_AmethystParsercb_3,1,bind);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
 it=rb_ary_new3(0);
 rb_ary_store(bind,1,it); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  it=rb_str_new2("amethyst"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt2_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_2;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2,it); it=CALL(igrammar_AmethystParsercb_1,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  it=rb_str_new2("amethyst"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt3_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt3_2); 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_empty(self ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
  it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); it=CALL(igrammar_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,4,it); it=CALL(igrammar_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,5,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=CALL(igrammar_AmethystParsercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
 rb_ary_store(bind,7,it); it=rb_ary_entry(bind,7);
return it;
fail: return failobj; }
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_str_new2("{"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2(""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,1,it); it=CALL(inlineHostExpr_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it);  it=rb_str_new2("}"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=CALL(inlineHostExpr_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,5,it); it=CALL(inlineHostExpr_AmethystParsercb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,6,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,7,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,7);
 rb_ary_store(bind,8,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,8);
 rb_ary_store(bind,9,it); it=rb_ary_entry(bind,9);
 rb_ary_store(bind,10,it); it=rb_ary_entry(bind,10);
return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_str_new2("@"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_className(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  it=rb_str_new2("["); arg0=it;it=rb_str_new2("]"); arg1=it; it=AmethystParser_args(self ,arg0,arg1); FAILTEST(alt2_2);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3);it=rb_ary_new3(0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=CALL(key_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3,it); it=CALL(key_AmethystParsercb_2,1,bind);
 rb_ary_store(bind,4,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_3); it=rb_str_new2("@"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_name(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it); it=CALL(key_AmethystParsercb_3,1,bind);
 rb_ary_store(bind,4,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_4); it=rb_str_new2("@@"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_4);  it=AmethystParser_name(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,0,it); it=CALL(key_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,4,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,4);
return it;
fail: return failobj; }
VALUE AmethystParser_letter(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_lower(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_upper(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE AmethystParser_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(8); rb_ary_store(bind,1,a0);rb_ary_store(bind,4,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_ary_entry(bind,1); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,2,it); it=CALL(listOf_AmethystParsercb_1,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_ary_entry(bind,4); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(break1); it=rb_ary_entry(bind,1); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(break1);
 rb_ary_store(bind,5,it); it=CALL(listOf_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,6,it); it=CALL(listOf_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,7,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,7,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,7);
return it;
fail: return failobj; }
VALUE AmethystParser_lower(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(lower_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(lower_AmethystParsercb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(lower_AmethystParsercb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
VALUE AmethystParser_modifier(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_term(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(modifier_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_3); it=rb_ary_entry(bind,1); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,2,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_endline(self ); FAILTEST(alt2_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,3,it); it=CALL(modifier_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,4,it); it=CALL(modifier_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2(""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_nameFirst(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(name_AmethystParsercb_1,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 rb_ary_store(bind,3,it); it=CALL(name_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,4,it); it=CALL(name_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,5,it); it=CALL(name_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE AmethystParser_nameFirst(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_letter(self ); FAILTEST(alt1_2);
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
VALUE AmethystParser_nameRest(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_nameFirst(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_digit(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_2);int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  it=rb_str_new2("("); arg0=it;it=rb_str_new2(")"); arg1=it; it=AmethystParser_args(self ,arg0,arg1); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
  it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_str_new2("="); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE AmethystParser_number(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(9);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); it=CALL(number_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,2,it); it=CALL(number_AmethystParsercb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=CALL(number_AmethystParsercb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
 rb_ary_store(bind,6,it); it=CALL(number_AmethystParsercb_4,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); it=CALL(number_AmethystParsercb_5,1,bind); 
 rb_ary_store(bind,1,it);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,2,it); it=CALL(number_AmethystParsercb_6,1,bind); FAILTEST(break1);it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=CALL(number_AmethystParsercb_7,1,bind); FAILTEST(break1);it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
 rb_ary_store(bind,7,it); it=CALL(number_AmethystParsercb_8,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,8,it); it=rb_ary_entry(bind,8);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_str_new2("&"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(prefixed_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_3;}
   it=AmethystParser_spaces(self ); FAILTEST(alt2_2); it=rb_str_new2("&"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt2_2);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_3;}
   it=AmethystParser_spaces(self ); FAILTEST(alt2_3); it=rb_str_new2("~"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt2_3);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_3;
 accept2:;
  it=AmethystParser_prefixed(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,4,it); it=CALL(prefixed_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_4;}
   it=AmethystParser_modifier(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,5,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_4;}
   it=AmethystParser_spaces(self ); FAILTEST(alt3_3); it=rb_str_new2(""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt3_3);int oldpos4=ame_getpos(self);
 it=CALL(prefixed_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,6,it);   it=AmethystCore_anything(self ); FAILTEST(reject1);
 rb_ary_store(bind,7,it); it=CALL(prefixed_AmethystParsercb_4,1,bind); FAILTEST(reject1);it=rb_ary_entry(bind,7);
 rb_ary_store(bind,8,it); it=rb_ary_entry(bind,8);
 rb_ary_store(bind,9,it); it=CALL(prefixed_AmethystParsercb_5,1,bind); FAILTEST(reject1); x=1; goto accept4;  reject1: x=0; accept4: it=Qnil; ame_setpos(self,oldpos4); if (x==0) goto alt3_3;int oldpos5=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt3_3;}
   it=AmethystParser_spaces(self ); FAILTEST(alt4_2); it=rb_str_new2("."); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt4_2); 
ISET(cut,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt3_3;}
   it=AmethystParser_empty(self ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos5); goto alt3_3;
 accept5:;
it=CALL(prefixed_AmethystParsercb_6,1,bind); 
 rb_ary_store(bind,5,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt1_4;
 accept3:;
int oldpos6; while(1){oldpos6=ame_getpos(self); int oldpos7=ame_getpos(self);
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
   it=AmethystParser_spaces(self ); FAILTEST(alt6_2); it=rb_str_new2("=>"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt6_2);  it=AmethystParser_prefixed(self ); FAILTEST(alt6_2);
 rb_ary_store(bind,10,it); it=CALL(prefixed_AmethystParsercb_7,1,bind);  
ISET(cut,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_spaces(self ); FAILTEST(alt6_3); it=rb_str_new2("["); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt6_3);  it=AmethystParser_expression(self ); FAILTEST(alt6_3);
 rb_ary_store(bind,10,it); it=CALL(prefixed_AmethystParsercb_8,1,bind);   it=AmethystParser_spaces(self ); FAILTEST(alt6_3); it=rb_str_new2("]"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt6_3); 
ISET(cut,Qnil);goto accept7;
alt6_3: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
 int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_4;}
   it=AmethystParser_spaces(self ); FAILTEST(alt7_2); it=rb_str_new2("*"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt7_2);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_4;}
   it=AmethystParser_spaces(self ); FAILTEST(alt7_3); it=rb_str_new2("+"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt7_3);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept8;
  alt7_3:  ame_setpos(self,oldpos9); goto alt6_4;
 accept8:;
it=CALL(prefixed_AmethystParsercb_9,1,bind); 
 rb_ary_store(bind,5,it);  
ISET(cut,Qnil);goto accept7;
alt6_4: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_spaces(self ); FAILTEST(alt6_5); it=rb_str_new2("?"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt6_5);it=CALL(prefixed_AmethystParsercb_10,1,bind); 
 rb_ary_store(bind,5,it);  
ISET(cut,Qnil);goto accept7;
alt6_5: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_spaces(self ); FAILTEST(alt6_6); it=rb_str_new2(":"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt6_6);int oldpos10=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_6;}
 int oldpos11=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
   it=AmethystParser_key(self ); FAILTEST(alt9_2);
 rb_ary_store(bind,12,it);  
ISET(cut,Qnil);goto accept10;
alt9_2: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
   it=AmethystParser_name(self ); FAILTEST(alt9_3);
 rb_ary_store(bind,12,it);  
ISET(cut,Qnil);goto accept10;
  alt9_3:  ame_setpos(self,oldpos11); goto alt8_2;
 accept10:;
int oldpos12=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
  it=rb_str_new2("[]"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt10_2);it=Qtrue;
 rb_ary_store(bind,13,it);  
ISET(cut,Qnil);goto accept11;
alt10_2: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt8_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt10_3);it=Qnil;
 rb_ary_store(bind,13,it);  
ISET(cut,Qnil);goto accept11;
  alt10_3:  ame_setpos(self,oldpos12); goto alt8_2;
 accept11:;
it=CALL(prefixed_AmethystParsercb_11,1,bind); 
 rb_ary_store(bind,5,it);  
ISET(cut,Qnil);goto accept9;
alt8_2: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_6;}
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt8_3);
 rb_ary_store(bind,14,it); it=CALL(prefixed_AmethystParsercb_12,1,bind); 
 rb_ary_store(bind,5,it);  
ISET(cut,Qnil);goto accept9;
  alt8_3:  ame_setpos(self,oldpos10); goto alt6_6;
 accept9:;
 
ISET(cut,Qnil);goto accept7;
  alt6_6:  ame_setpos(self,oldpos8); goto break1;
 accept7:;
 if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,5);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(procargs_AmethystParsercb_1,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(procargs_AmethystParsercb_2,1,bind); FAILTEST(alt1_2);it=CALL(procargs_AmethystParsercb_3,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_procargs2(self ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(procargs_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcbAmethystParser1,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,1,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_procargs2(self ); FAILTEST(break1);
 rb_ary_store(bind,2,it); it=CALL(procargs2_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,3,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5,it); it=CALL(procargs2_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,4,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,5,it); it=CALL(procargs2_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,4,it);  break;default: goto fail;}it=rb_ary_entry(bind,4);
return it;
fail: return failobj; }
VALUE AmethystParser_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(5); rb_ary_store(bind,3,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(regch_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=CALL(regch_AmethystParsercb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,2);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(23);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); it=rb_ary_new3(0);
 rb_ary_store(bind,1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("`"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_2);  it=AmethystParser_expression(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2,it);  it=rb_str_new2("`"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_2);it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2(")");
 rb_ary_store(bind,4,it); it=rb_str_new2("(");
 rb_ary_store(bind,5,it);  it=rb_str_new2("("); arg0=it;it=rb_str_new2(")"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3);
 rb_ary_store(bind,6,it); it=CALL(rubyarg_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,7,it); it=rb_ary_entry(bind,7);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("]");
 rb_ary_store(bind,4,it); it=rb_str_new2("[");
 rb_ary_store(bind,5,it);  it=rb_str_new2("["); arg0=it;it=rb_str_new2("]"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_4);
 rb_ary_store(bind,6,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,7,it); it=rb_ary_entry(bind,7);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("}");
 rb_ary_store(bind,4,it); it=rb_str_new2("{");
 rb_ary_store(bind,5,it);  it=rb_str_new2("{"); arg0=it;it=rb_str_new2("}"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_5);
 rb_ary_store(bind,6,it); it=CALL(rubyarg_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,7,it); it=rb_ary_entry(bind,7);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_6);
 rb_ary_store(bind,8,it); it=CALL(rubyarg_AmethystParsercb_5,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,9,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=rb_str_new2("\""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt2_2);ISET(cut,Qtrue);ISET(stop,Qtrue);
 rb_ary_store(bind,10,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,10,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
it=CALL(rubyarg_AmethystParsercb_6,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,9);
 rb_ary_store(bind,11,it); it=CALL(rubyarg_AmethystParsercb_7,1,bind); it=CALL(rubyarg_AmethystParsercb_8,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\'"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_7);
 rb_ary_store(bind,12,it); it=CALL(rubyarg_AmethystParsercb_9,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,13,it); int oldpos4; while(1){oldpos4=ame_getpos(self); int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  it=rb_str_new2("\'"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt3_2);ISET(cut,Qtrue);ISET(stop,Qtrue);
 rb_ary_store(bind,14,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,14,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
it=CALL(rubyarg_AmethystParsercb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=rb_ary_entry(bind,13);
 rb_ary_store(bind,15,it); it=CALL(rubyarg_AmethystParsercb_11,1,bind); it=CALL(rubyarg_AmethystParsercb_12,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("..."); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_8);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2(".."); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_9);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
   it=AmethystParser_spaces(self ); FAILTEST(alt4_2); it=rb_str_new2(":@"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt4_2);
 rb_ary_store(bind,16,it); it=rb_ary_entry(bind,16);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_10;}
 it=CALL(rubyarg_AmethystParsercb_13,1,bind); 
 rb_ary_store(bind,17,it);   it=AmethystCore_anything(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,18,it); it=CALL(rubyarg_AmethystParsercb_14,1,bind); FAILTEST(alt4_3);it=rb_ary_entry(bind,18);
 rb_ary_store(bind,19,it); it=rb_ary_entry(bind,19);
 rb_ary_store(bind,20,it); it=CALL(rubyarg_AmethystParsercb_15,1,bind); FAILTEST(alt4_3);it=rb_ary_entry(bind,20);
 rb_ary_store(bind,21,it); it=rb_ary_entry(bind,21);
 rb_ary_store(bind,1,it);  
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
 rb_ary_store(bind,22,it); it=CALL(rubyarg_AmethystParsercb_16,1,bind); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,3,it);  
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
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(rubyarg_AmethystParsercb_17,1,bind); 
 rb_ary_store(bind,17,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_12);
 rb_ary_store(bind,18,it); it=CALL(rubyarg_AmethystParsercb_18,1,bind); FAILTEST(alt1_12);it=rb_ary_entry(bind,18);
 rb_ary_store(bind,19,it); it=rb_ary_entry(bind,19);
 rb_ary_store(bind,20,it); it=CALL(rubyarg_AmethystParsercb_19,1,bind); FAILTEST(alt1_12);it=rb_ary_entry(bind,20);
 rb_ary_store(bind,21,it); it=rb_ary_entry(bind,21);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(rule_AmethystParsercb_1,1,bind); it=CALL(rule_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it);   it=AmethystParser_ruleargs(self ); FAILTEST(fail);
 rb_ary_store(bind,2,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2("="); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);  it=AmethystParser_expression(self ); FAILTEST(fail);
 rb_ary_store(bind,3,it); it=CALL(rule_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,3,it); it=CALL(rule_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,4,it); it=CALL(rule_AmethystParsercb_5,1,bind); it=CALL(rule_AmethystParsercb_6,1,bind);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("("); arg0=it;it=rb_str_new2(")"); arg1=it; it=AmethystParser_args(self ,arg0,arg1); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it); it=CALL(ruleargs_AmethystParsercb_1,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_addargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,3,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nr(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 rb_ary_store(bind,1,it); it=CALL(sequence_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=CALL(sequence_AmethystParsercb_2,1,bind);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }
VALUE AmethystParser_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(9);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self); it=CALL(spaces_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1,it);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,2,it); it=CALL(spaces_AmethystParsercb_2,1,bind); FAILTEST(break1);it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=CALL(spaces_AmethystParsercb_3,1,bind); FAILTEST(break1);it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
 rb_ary_store(bind,7,it); it=CALL(spaces_AmethystParsercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,8,it); it=rb_ary_entry(bind,8);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); it=rb_ary_new3(0);
 rb_ary_store(bind,1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2,it); it=CALL(term_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_3); it=rb_str_new2("nested"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_3); it=rb_str_new2("("); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_3);  it=AmethystParser_expression(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,4,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_3); it=rb_str_new2(")"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_3);it=CALL(term_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_4); it=rb_str_new2("break"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_4);it=CALL(term_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_application(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt1_6);
 rb_ary_store(bind,5,it); it=CALL(term_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_7;}
   it=AmethystParser_spaces(self ); FAILTEST(alt2_2); it=rb_str_new2("->"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt2_2);  it=AmethystParser_atomicHostExpr(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_7;}
   it=AmethystParser_spaces(self ); FAILTEST(alt2_3); it=rb_str_new2(""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt2_3);  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_7;
 accept2:;
it=CALL(term_AmethystParsercb_5,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_8); it=rb_str_new2("\""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_8);int oldpos3; while(1){oldpos3=ame_getpos(self); int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=rb_str_new2("\""); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt3_2);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,6,it); it=CALL(term_AmethystParsercb_6,1,bind);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
 if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=CALL(term_AmethystParsercb_7,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_9); it=rb_str_new2("'"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_9);int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  it=rb_str_new2("\'"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt4_2);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,7,it); it=CALL(term_AmethystParsercb_8,1,bind);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break2;
 accept4:;
 if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=CALL(term_AmethystParsercb_9,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_number(self ); FAILTEST(alt1_10);
 rb_ary_store(bind,5,it); it=CALL(term_AmethystParsercb_10,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("<");
 rb_ary_store(bind,8,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_11); it=rb_ary_entry(bind,8); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_11);int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
 it=rb_str_new2(">");
 rb_ary_store(bind,8,it);   it=AmethystParser_spaces(self ); FAILTEST(alt5_2); it=rb_str_new2(">"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt5_2);ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3);
 rb_ary_store(bind,9,it); it=CALL(term_AmethystParsercb_11,1,bind);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto break3;
 accept5:;
 if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=CALL(term_AmethystParsercb_12,1,bind); 
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_12); it=rb_str_new2("("); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_12);  it=AmethystParser_expression(self ); FAILTEST(alt1_12);
 rb_ary_store(bind,1,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_12); it=rb_str_new2(")"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt1_12);int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_12;}
  it=rb_str_new2("[]"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(alt6_2);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,10,it); it=CALL(term_AmethystParsercb_13,1,bind); 
 rb_ary_store(bind,11,it); it=rb_ary_entry(bind,11);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_12;}
   it=AmethystParser_empty(self ); FAILTEST(alt6_3);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,3,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos9); goto alt1_12;
 accept6:;
 
ISET(cut,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }
VALUE AmethystParser_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_ary_entry(bind,0); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE AmethystParser_upper(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(upper_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=CALL(upper_AmethystParsercb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=CALL(upper_AmethystParsercb_3,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
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
rb_define_method(cls_AmethystParser,"eof",AmethystParser_eof,0);
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
rb_define_method(cls_AmethystParser,"spaces",AmethystParser_spaces,0);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
rb_define_method(cls_AmethystParser,"token",AmethystParser_token,1);
rb_define_method(cls_AmethystParser,"upper",AmethystParser_upper,0);
 rb_eval_string("testversion('2d83f9e86e0683c438541a823e9ea419')");}
