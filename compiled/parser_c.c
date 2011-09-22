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
VALUE AmethystParser_seq(VALUE self ,VALUE a0);
VALUE AmethystParser_sequence(VALUE self );
VALUE AmethystParser_spaces(VALUE self );
VALUE AmethystParser_term(VALUE self );
VALUE AmethystParser_token(VALUE self ,VALUE a0);
VALUE AmethystParser_upper(VALUE self );
VALUE AmethystParser__(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(spaces_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser___args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(7); rb_ary_store(bind,0/*o*/,a0);rb_ary_store(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0/*o*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("");it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(name_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*r*/,it); it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);it=rb_ary_entry(bind,4/*r*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*o*/,a0);rb_ary_store(bind,1/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_ary_entry(bind,0/*o*/); arg0=it;it=rb_ary_entry(bind,1/*c*/); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(fail);
 rb_ary_store(bind,2/*r*/,it); it=CALL(_args_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_addargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*result*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_const_get(rb_cObject, rb_intern("Args")); arg0=it; it=AmethystParser_clas(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2/*name*/,it); it=CALL(addargs_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(addargs_AmethystParsercb_2,1,bind);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto break1;
 if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(addargs_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_application(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(17);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*klas*/,it);  it=rb_str_new2("::"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2("::");  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,3/*rule*/,it); it=CALL(application_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3/*rule*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,3/*rule*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(fail);it=rb_ary_new3(0);
 rb_ary_store(bind,4/*_result*/,it);  break;case UC('(') ... UC('('):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("("); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2("(");  it=AmethystParser_spaces(self ); FAILTEST(alt2_2); it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2("");it=rb_ary_new3(0);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(args_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,7/*r*/,it);  it=rb_str_new2(")"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2(")");it=rb_ary_entry(bind,7/*r*/);
 rb_ary_store(bind,8/*_result*/,it); it=rb_ary_entry(bind,8/*_result*/);
 rb_ary_store(bind,9/*r*/,it); it=CALL(args_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,10/*autovar*/,it); it=CALL(args_AmethystParsercb_3,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,11/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,12/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,13/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos4); ame_setlen(self,oldlen1);
	if(fail1) goto alt2_2;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,14/*_result*/,it); it=rb_ary_entry(bind,14/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3);it=rb_ary_new3(0);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=rb_ary_entry(bind,4/*_result*/);
 rb_ary_store(bind,15/*arg*/,it); it=CALL(application_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,16/*_result*/,it); it=rb_ary_entry(bind,16/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(15); rb_ary_store(bind,2/*o*/,a0);rb_ary_store(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*c*/,it); it=rb_ary_entry(bind,2/*o*/);
 rb_ary_store(bind,3/*o*/,it); it=rb_ary_entry(bind,3/*o*/);
 rb_ary_store(bind,4/*s*/,it);  it=rb_ary_entry(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,4/*s*/);  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("");it=rb_ary_new3(0);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(args_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,7/*r*/,it); it=rb_ary_entry(bind,1/*c*/);
 rb_ary_store(bind,4/*s*/,it);  it=rb_ary_entry(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,4/*s*/);it=rb_ary_entry(bind,7/*r*/);
 rb_ary_store(bind,8/*_result*/,it); it=rb_ary_entry(bind,8/*_result*/);
 rb_ary_store(bind,9/*r*/,it); it=CALL(args_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,10/*autovar*/,it); it=CALL(args_AmethystParsercb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,11/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,12/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,13/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,14/*_result*/,it); it=rb_ary_entry(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(18); rb_ary_store(bind,2/*o*/,a0);rb_ary_store(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*c*/,it); it=rb_ary_entry(bind,2/*o*/);
 rb_ary_store(bind,3/*o*/,it); it=rb_ary_entry(bind,1/*c*/);
 rb_ary_store(bind,4/*c*/,it); it=rb_ary_entry(bind,3/*o*/);
 rb_ary_store(bind,5/*o*/,it); it=rb_ary_entry(bind,5/*o*/);
 rb_ary_store(bind,6/*s*/,it);  it=rb_ary_entry(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_entry(bind,6/*s*/);  it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2("");it=rb_ary_new3(0);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,8/*autovar*/,it); it=CALL(argsOpt_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,9/*r*/,it); it=rb_ary_entry(bind,4/*c*/);
 rb_ary_store(bind,6/*s*/,it);  it=rb_ary_entry(bind,6/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_ary_entry(bind,6/*s*/);it=rb_ary_entry(bind,9/*r*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
 rb_ary_store(bind,11/*r*/,it); it=CALL(argsOpt_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,12/*autovar*/,it); it=CALL(argsOpt_AmethystParsercb_3,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,13/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,13/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,14/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,14/*autovar*/);
 rb_ary_store(bind,15/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,15/*autovar*/);
 rb_ary_store(bind,16/*_result*/,it); it=rb_ary_entry(bind,16/*_result*/);
 rb_ary_store(bind,17/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,17/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,17/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_atomicHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_endline(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
  it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*s*/,it); it=CALL(atomicHostExpr_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(atomicHostExpr_AmethystParsercb_2,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(pass2);
 rb_ary_store(bind,5/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,6/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,7/*_result*/,it); it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_char(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*c*/,it); it=CALL(char_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_choice(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*f*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_sequence(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_str_new2("|"); arg0=it; it=AmethystParser_token(self ,arg0); FAILTEST(break1);  it=AmethystParser_sequence(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(name_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(name_AmethystParsercb_2,1,bind); it=rb_ary_entry(bind,0/*f*/);
 rb_ary_store(bind,5/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,5/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*ary*/,it); it=CALL(choice_AmethystParsercb_1,1,bind);
 rb_ary_store(bind,7/*_result*/,it); it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("");  it=AmethystParser_upper(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(name_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(name_AmethystParsercb_2,1,bind); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,5/*it*/,it); it=CALL(name_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(collect_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_digit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(number_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eChar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('['):;case UC(']') ... UC('\377'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("}");
 rb_ary_store(bind,0/*c*/,it); it=CALL(eChar_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*o*/,it);  it=rb_ary_entry(bind,1/*o*/); arg0=it;it=rb_str_new2("}"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*r*/,it); it=CALL(eChar_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*c*/,it); it=CALL(eChar_AmethystParsercb_3,1,bind); FAILTEST(alt1_3);it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC('\\') ... UC('\\'):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\\"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2("\\");  it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,5/*c*/,it); it=CALL(eChar_AmethystParsercb_3,1,bind); FAILTEST(alt2_2);it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
 rb_ary_store(bind,7/*c*/,it); it=CALL(eChar_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("}");
 rb_ary_store(bind,0/*c*/,it); it=CALL(eChar_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*o*/,it);  it=rb_ary_entry(bind,1/*o*/); arg0=it;it=rb_str_new2("}"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt2_3);
 rb_ary_store(bind,2/*r*/,it); it=CALL(eChar_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 rb_ary_store(bind,5/*c*/,it); it=CALL(eChar_AmethystParsercb_3,1,bind); FAILTEST(alt2_4);it=rb_ary_entry(bind,5/*c*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;}it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE AmethystParser_endline(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\n') ... UC('\n'):;  it=rb_str_new2("\n"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("\n");
 rb_ary_store(bind,0/*_result*/,it);  break;case UC('\r') ... UC('\r'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\r\n"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2("\r\n");
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\r"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_str_new2("\r");
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;default:;   it=AmethystParser_fails(self ); FAILTEST(fail); break;}it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_choice(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_AmethystParsercb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2("amethyst"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("amethyst");  it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*name*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_str_new2("<"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2("<");  it=AmethystParser_name(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1/*parent*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=CALL(grammar_AmethystParsercb_1,1,bind);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2("{"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("{");it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rule(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(name_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*rules*/,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2("}"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("}");it=CALL(grammar_AmethystParsercb_2,1,bind);
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
 it=rb_ary_new3(0);
 rb_ary_store(bind,1/*autovar*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('`'):;case UC('b') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(alt1_2); break;case UC('a') ... UC('a'):; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  it=rb_str_new2("amethyst"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2("amethyst");ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto alt1_2;
 accept2:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(procargs2_AmethystParsercb_1,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('`'):;case UC('b') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(break2); break;case UC('a') ... UC('a'):; int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  it=rb_str_new2("amethyst"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_str_new2("amethyst");ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt3_2); 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_empty(self ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break2;
 accept3:;
 break;}  it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(igrammar_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,4/*it*/,it); it=CALL(igrammar_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_grammar(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=CALL(igrammar_AmethystParsercb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,6/*a*/,it); it=rb_ary_entry(bind,6/*a*/);
 rb_ary_store(bind,7/*_result*/,it); it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_inlineHostExpr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_str_new2("{"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("{");  it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("");it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*r*/,it);  it=rb_str_new2("}"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("}");it=rb_ary_entry(bind,2/*r*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*r*/,it); it=CALL(inlineHostExpr_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it); it=CALL(inlineHostExpr_AmethystParsercb_2,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,7/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,8/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_spaces(self ); FAILTEST(fail);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("@"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2("@");  it=AmethystParser_className(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*name*/,it); it=CALL(key_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*vars*/,it); it=CALL(key_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("@"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_str_new2("@");  it=AmethystParser_name(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*name*/,it); it=CALL(key_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("@@"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=rb_str_new2("@@");  it=AmethystParser_name(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,0/*name*/,it); it=CALL(key_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_letter(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_lower(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_upper(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(8); rb_ary_store(bind,1/*rule*/,a0);rb_ary_store(bind,4/*delim*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*f*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_ary_entry(bind,1/*rule*/); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(spaces_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=rb_ary_entry(bind,4/*delim*/); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(break1); it=rb_ary_entry(bind,1/*rule*/); arg0=it; it=CALL(apply,1 ,arg0); FAILTEST(break1);
 rb_ary_store(bind,5/*autovar*/,it); it=CALL(listOf_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(listOf_AmethystParsercb_2,1,bind); it=rb_ary_entry(bind,0/*f*/);
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_lower(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(lower_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_modifier(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_term(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(modifier_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*s*/,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_3);it=rb_ary_entry(bind,1/*s*/);
 rb_ary_store(bind,2/*s*/,it);  it=rb_ary_entry(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_ary_entry(bind,2/*s*/);it=rb_ary_new3(0);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_endline(self ); FAILTEST(alt2_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
  it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(modifier_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,5/*c*/,it); it=CALL(modifier_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("");  it=AmethystParser_nameFirst(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nameRest(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(name_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(name_AmethystParsercb_2,1,bind); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,5/*it*/,it); it=CALL(name_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nameFirst(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('^'):;case UC('`') ... UC('\377'):;   it=AmethystParser_letter(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it);  break;case UC('_') ... UC('_'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_letter(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("_"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_str_new2("_");
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nameRest(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_nameFirst(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_digit(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_name(self ); FAILTEST(alt1_2);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(alt1_2); break;case UC('(') ... UC('('):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
  it=rb_str_new2("("); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2("(");  it=AmethystParser_spaces(self ); FAILTEST(alt2_2); it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2("");it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*r*/,it);  it=rb_str_new2(")"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2(")");it=rb_ary_entry(bind,2/*r*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
 rb_ary_store(bind,4/*r*/,it); it=CALL(inlineHostExpr_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it); it=CALL(inlineHostExpr_AmethystParsercb_2,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);  it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos4); ame_setlen(self,oldlen1);
	if(fail1) goto alt2_2;
 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 break;}  it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_str_new2("="); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2("=");ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_number(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it);  it=CALL(number_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=CALL(number_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(spaces_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_str_new2("&"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2("&");  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*expr*/,it); it=CALL(prefixed_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_3);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('~') ... UC('~'):;  it=rb_str_new2("~"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_str_new2("~");
 rb_ary_store(bind,2/*neg*/,it);  break;case UC('&') ... UC('&'):;  it=rb_str_new2("&"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_str_new2("&");
 rb_ary_store(bind,2/*neg*/,it);  break;default:;   it=AmethystParser_fails(self ); FAILTEST(alt1_3); break;}  it=AmethystParser_prefixed(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,3/*m*/,it); it=CALL(prefixed_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_4;}
   it=AmethystParser_modifier(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,4/*from*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_4;}
   it=AmethystParser_spaces(self ); FAILTEST(alt2_3); it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);it=rb_str_new2("");int oldpos3=ame_getpos(self);
  it=CALL(prefixed_AmethystParsercb_3,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto alt2_3;int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt2_3;}
   it=AmethystParser_spaces(self ); FAILTEST(alt3_2); it=rb_str_new2("."); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_str_new2("."); 
ISET(cut,Qnil);goto accept4;
alt3_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt2_3;}
   it=AmethystParser_empty(self ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept4;
  alt3_3:  ame_setpos(self,oldpos4); goto alt2_3;
 accept4:;
it=CALL(prefixed_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_4;
 accept2:;
int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser__(self ); FAILTEST(alt4_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt4_2); 
ISET(cut,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_empty(self ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos6); goto break1;
 accept5:;
  it=AmethystParser_spaces(self ); FAILTEST(break1);unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('*') ... UC('*'):;  it=rb_str_new2("*"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_str_new2("*");
 rb_ary_store(bind,5/*one*/,it); it=CALL(prefixed_AmethystParsercb_5,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  break;case UC('+') ... UC('+'):;  it=rb_str_new2("+"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_str_new2("+");
 rb_ary_store(bind,5/*one*/,it); it=CALL(prefixed_AmethystParsercb_5,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  break;case UC(':') ... UC(':'):;  it=rb_str_new2(":"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_str_new2(":");int oldpos7=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
 int oldpos8=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_2;}
   it=AmethystParser_key(self ); FAILTEST(alt6_2);
 rb_ary_store(bind,6/*name*/,it);  
ISET(cut,Qnil);goto accept7;
alt6_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_2;}
   it=AmethystParser_name(self ); FAILTEST(alt6_3);
 rb_ary_store(bind,6/*name*/,it);  
ISET(cut,Qnil);goto accept7;
  alt6_3:  ame_setpos(self,oldpos8); goto alt5_2;
 accept7:;
unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('Z'):;case UC('\\') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(alt5_2);it=Qnil;
 rb_ary_store(bind,7/*append*/,it);  break;case UC('[') ... UC('['):; int oldpos9=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_2;}
  it=rb_str_new2("[]"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_str_new2("[]");it=Qtrue;
 rb_ary_store(bind,7/*append*/,it);  
ISET(cut,Qnil);goto accept8;
alt7_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt5_2;}
   it=AmethystParser_empty(self ); FAILTEST(alt7_3);it=Qnil;
 rb_ary_store(bind,7/*append*/,it);  
ISET(cut,Qnil);goto accept8;
  alt7_3:  ame_setpos(self,oldpos9); goto alt5_2;
 accept8:;
 break;}it=CALL(prefixed_AmethystParsercb_6,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  
ISET(cut,Qnil);goto accept6;
alt5_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt5_3);
 rb_ary_store(bind,8/*e*/,it); it=CALL(prefixed_AmethystParsercb_7,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  
ISET(cut,Qnil);goto accept6;
  alt5_3:  ame_setpos(self,oldpos7); goto break1;
 accept6:;
 break;case UC('=') ... UC('='):;  it=rb_str_new2("=>"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_str_new2("=>");  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 rb_ary_store(bind,9/*it*/,it); it=CALL(prefixed_AmethystParsercb_8,1,bind);  break;case UC('?') ... UC('?'):;  it=rb_str_new2("?"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_str_new2("?");it=CALL(prefixed_AmethystParsercb_9,1,bind); 
 rb_ary_store(bind,4/*from*/,it);  break;case UC('[') ... UC('['):;  it=rb_str_new2("["); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_str_new2("[");  it=AmethystParser_expression(self ); FAILTEST(break1);
 rb_ary_store(bind,9/*it*/,it); it=CALL(prefixed_AmethystParsercb_10,1,bind);   it=AmethystParser_spaces(self ); FAILTEST(break1); it=rb_str_new2("]"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=rb_str_new2("]"); break;default:;   it=AmethystParser_fails(self ); FAILTEST(break1); break;} if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,4/*from*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(procargs_AmethystParsercb_1,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*c*/,it); it=CALL(procargs_AmethystParsercb_2,1,bind); FAILTEST(alt1_2);it=CALL(procargs_AmethystParsercb_3,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_procargs2(self ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(procargs_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(CALL(switchcbAmethystParser1,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystParser_procargs2(self ); FAILTEST(break1);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(procargs2_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,3/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*a*/,it); it=CALL(procargs2_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,5/*a*/,it); it=CALL(procargs2_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  break;}it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(5); rb_ary_store(bind,3/*regex*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*c*/,it); it=CALL(char_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
 rb_ary_store(bind,2/*c*/,it); it=CALL(regch_AmethystParsercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,2/*c*/);
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(17);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*s*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,1/*n*/,it); unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('!'):;case UC('#') ... UC('&'):;case UC('*') ... UC('-'):;case UC('/') ... UC('_'):;case UC('a') ... UC('z'):;case UC('|') ... UC('|'):;case UC('~') ... UC('\377'):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2(")");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("(");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("("); arg0=it;it=rb_str_new2(")"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_2);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("]");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("[");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("["); arg0=it;it=rb_str_new2("]"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("}");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("{");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("{"); arg0=it;it=rb_str_new2("}"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt1_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('#'):;case UC('%') ... UC('-'):;case UC('/') ... UC('9'):;case UC(';') ... UC('\377'):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
   it=AmethystParser_spaces(self ); FAILTEST(alt2_2); it=rb_str_new2(":@"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2(":@");
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
   it=AmethystParser_empty(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_5;
 accept2:;
 break;case UC('$') ... UC('$'):;case UC('.') ... UC('.'):;case UC(':') ... UC(':'):; int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
   it=AmethystParser_spaces(self ); FAILTEST(alt3_2); it=rb_str_new2(":@"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_str_new2(":@");
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
  it=CALL(rubyarg_AmethystParsercb_2,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt3_3);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_3: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
   it=AmethystParser_empty(self ); FAILTEST(alt3_4); 
ISET(cut,Qnil);goto accept3;
  alt3_4:  ame_setpos(self,oldpos3); goto alt1_5;
 accept3:;
 break;}int oldpos4=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
   it=AmethystParser__(self ); FAILTEST(alt4_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt4_2); 
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_5;}
   it=AmethystParser_empty(self ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos4); goto alt1_5;
 accept4:;
  it=AmethystParser_name(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos5=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_6;}
   it=AmethystParser__(self ); FAILTEST(alt5_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt5_2); 
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt5_3); 
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos5); goto alt1_6;
 accept5:;
  it=AmethystParser_key(self ); FAILTEST(alt1_6);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(rubyarg_AmethystParsercb_4,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt1_7);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_7:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case UC('\"') ... UC('\"'):; int oldpos6=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2(")");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("(");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("("); arg0=it;it=rb_str_new2(")"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt6_2);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("]");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("[");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("["); arg0=it;it=rb_str_new2("]"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt6_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_3: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("}");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("{");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("{"); arg0=it;it=rb_str_new2("}"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt6_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_4: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("\""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_5);it=rb_str_new2("\"");
 rb_ary_store(bind,8/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_5,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,9/*autovar*/,it); int oldpos7; while(1){oldpos7=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('!'):;case UC('#') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 rb_ary_store(bind,10/*autovar*/,it);  break;case UC('\"') ... UC('\"'):; int oldpos8=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=rb_str_new2("\""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_2);it=rb_str_new2("\"");ISET(cut,Qtrue);ISET(stop,Qtrue);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt7_3);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos8); goto break1;
 accept7:;
 break;}it=CALL(rubyarg_AmethystParsercb_6,1,bind);  if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,11/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_7,1,bind); it=CALL(rubyarg_AmethystParsercb_8,1,bind); 
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_5: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC('\000') ... UC('#'):;case UC('%') ... UC('-'):;case UC('/') ... UC('9'):;case UC(';') ... UC('\377'):; int oldpos9=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_6;}
   it=AmethystParser_spaces(self ); FAILTEST(alt8_2); it=rb_str_new2(":@"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt8_2);it=rb_str_new2(":@");
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt8_3); 
ISET(cut,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos9); goto alt6_6;
 accept8:;
 break;}int oldpos10=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_6;}
   it=AmethystParser__(self ); FAILTEST(alt9_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt9_2); 
ISET(cut,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt9_3); 
ISET(cut,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos10); goto alt6_6;
 accept9:;
  it=AmethystParser_name(self ); FAILTEST(alt6_6);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_6: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos11=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_7;}
   it=AmethystParser__(self ); FAILTEST(alt10_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt10_2); 
ISET(cut,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt6_7;}
   it=AmethystParser_empty(self ); FAILTEST(alt10_3); 
ISET(cut,Qnil);goto accept10;
  alt10_3:  ame_setpos(self,oldpos11); goto alt6_7;
 accept10:;
  it=AmethystParser_key(self ); FAILTEST(alt6_7);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
  alt6_7:  ame_setpos(self,oldpos6); goto fail;
 accept6:;
 break;case UC('\'') ... UC('\''):; int oldpos12=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2(")");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("(");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("("); arg0=it;it=rb_str_new2(")"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt11_2);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept11;
alt11_2: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("]");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("[");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("["); arg0=it;it=rb_str_new2("]"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt11_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept11;
alt11_3: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("}");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("{");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("{"); arg0=it;it=rb_str_new2("}"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt11_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept11;
alt11_4: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("'"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt11_5);it=rb_str_new2("'");
 rb_ary_store(bind,12/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_9,1,bind); it=rb_ary_new3(0);
 rb_ary_store(bind,13/*autovar*/,it); int oldpos13; while(1){oldpos13=ame_getpos(self); unsigned char chr5=*ame_curstr(self);  switch(chr5){case UC('\000') ... UC('&'):;case UC('(') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 rb_ary_store(bind,14/*autovar*/,it);  break;case UC('\'') ... UC('\''):; int oldpos14=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  it=rb_str_new2("'"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt12_2);it=rb_str_new2("'");ISET(cut,Qtrue);ISET(stop,Qtrue);
 rb_ary_store(bind,14/*autovar*/,it);  
ISET(cut,Qnil);goto accept12;
alt12_2: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt12_3);
 rb_ary_store(bind,14/*autovar*/,it);  
ISET(cut,Qnil);goto accept12;
  alt12_3:  ame_setpos(self,oldpos14); goto break2;
 accept12:;
 break;}it=CALL(rubyarg_AmethystParsercb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos13=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos13); it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,15/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_11,1,bind); it=CALL(rubyarg_AmethystParsercb_8,1,bind); 
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept11;
alt11_5: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 unsigned char chr6=*ame_curstr(self);  switch(chr6){case UC('\000') ... UC('#'):;case UC('%') ... UC('-'):;case UC('/') ... UC('9'):;case UC(';') ... UC('\377'):; int oldpos15=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos15);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt11_6;}
   it=AmethystParser_spaces(self ); FAILTEST(alt13_2); it=rb_str_new2(":@"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt13_2);it=rb_str_new2(":@");
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept13;
alt13_2: ame_setpos(self,oldpos15);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt11_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt13_3); 
ISET(cut,Qnil);goto accept13;
  alt13_3:  ame_setpos(self,oldpos15); goto alt11_6;
 accept13:;
 break;}int oldpos16=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos16);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt11_6;}
   it=AmethystParser__(self ); FAILTEST(alt14_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt14_2); 
ISET(cut,Qnil);goto accept14;
alt14_2: ame_setpos(self,oldpos16);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt11_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt14_3); 
ISET(cut,Qnil);goto accept14;
  alt14_3:  ame_setpos(self,oldpos16); goto alt11_6;
 accept14:;
  it=AmethystParser_name(self ); FAILTEST(alt11_6);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept11;
alt11_6: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos17=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt11_7;}
   it=AmethystParser__(self ); FAILTEST(alt15_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt15_2); 
ISET(cut,Qnil);goto accept15;
alt15_2: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt11_7;}
   it=AmethystParser_empty(self ); FAILTEST(alt15_3); 
ISET(cut,Qnil);goto accept15;
  alt15_3:  ame_setpos(self,oldpos17); goto alt11_7;
 accept15:;
  it=AmethystParser_key(self ); FAILTEST(alt11_7);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept11;
  alt11_7:  ame_setpos(self,oldpos12); goto fail;
 accept11:;
 break;case UC('(') ... UC(')'):;case UC('{') ... UC('{'):;case UC('}') ... UC('}'):; int oldpos18=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2(")");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("(");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("("); arg0=it;it=rb_str_new2(")"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt16_2);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept16;
alt16_2: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("]");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("[");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("["); arg0=it;it=rb_str_new2("]"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt16_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept16;
alt16_3: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("}");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("{");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("{"); arg0=it;it=rb_str_new2("}"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt16_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept16;
alt16_4: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 unsigned char chr7=*ame_curstr(self);  switch(chr7){case UC('\000') ... UC('#'):;case UC('%') ... UC('-'):;case UC('/') ... UC('9'):;case UC(';') ... UC('\377'):; int oldpos19=ame_getpos(self);
alt17_1: ame_setpos(self,oldpos19);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt16_5;}
   it=AmethystParser_spaces(self ); FAILTEST(alt17_2); it=rb_str_new2(":@"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt17_2);it=rb_str_new2(":@");
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept17;
alt17_2: ame_setpos(self,oldpos19);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt16_5;}
   it=AmethystParser_empty(self ); FAILTEST(alt17_3); 
ISET(cut,Qnil);goto accept17;
  alt17_3:  ame_setpos(self,oldpos19); goto alt16_5;
 accept17:;
 break;}int oldpos20=ame_getpos(self);
alt18_1: ame_setpos(self,oldpos20);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt16_5;}
   it=AmethystParser__(self ); FAILTEST(alt18_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt18_2); 
ISET(cut,Qnil);goto accept18;
alt18_2: ame_setpos(self,oldpos20);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt16_5;}
   it=AmethystParser_empty(self ); FAILTEST(alt18_3); 
ISET(cut,Qnil);goto accept18;
  alt18_3:  ame_setpos(self,oldpos20); goto alt16_5;
 accept18:;
  it=AmethystParser_name(self ); FAILTEST(alt16_5);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept16;
alt16_5: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos21=ame_getpos(self);
alt19_1: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt16_6;}
   it=AmethystParser__(self ); FAILTEST(alt19_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt19_2); 
ISET(cut,Qnil);goto accept19;
alt19_2: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt16_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt19_3); 
ISET(cut,Qnil);goto accept19;
  alt19_3:  ame_setpos(self,oldpos21); goto alt16_6;
 accept19:;
  it=AmethystParser_key(self ); FAILTEST(alt16_6);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept16;
  alt16_6:  ame_setpos(self,oldpos18); goto fail;
 accept16:;
 break;case UC('.') ... UC('.'):; int oldpos22=ame_getpos(self);
alt20_1: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2(")");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("(");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("("); arg0=it;it=rb_str_new2(")"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt20_2);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept20;
alt20_2: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("]");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("[");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("["); arg0=it;it=rb_str_new2("]"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt20_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept20;
alt20_3: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("}");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("{");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("{"); arg0=it;it=rb_str_new2("}"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt20_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept20;
alt20_4: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("..."); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt20_5);it=rb_str_new2("...");
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept20;
alt20_5: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2(".."); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt20_6);it=rb_str_new2("..");
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept20;
alt20_6: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 unsigned char chr8=*ame_curstr(self);  switch(chr8){case UC('$') ... UC('$'):;case UC('.') ... UC('.'):;case UC(':') ... UC(':'):; int oldpos23=ame_getpos(self);
alt21_1: ame_setpos(self,oldpos23);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt20_7;}
   it=AmethystParser_spaces(self ); FAILTEST(alt21_2); it=rb_str_new2(":@"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt21_2);it=rb_str_new2(":@");
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept21;
alt21_2: ame_setpos(self,oldpos23);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt20_7;}
  it=CALL(rubyarg_AmethystParsercb_2,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt21_3);
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept21;
alt21_3: ame_setpos(self,oldpos23);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt20_7;}
   it=AmethystParser_empty(self ); FAILTEST(alt21_4); 
ISET(cut,Qnil);goto accept21;
  alt21_4:  ame_setpos(self,oldpos23); goto alt20_7;
 accept21:;
 break;}int oldpos24=ame_getpos(self);
alt22_1: ame_setpos(self,oldpos24);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt20_7;}
   it=AmethystParser__(self ); FAILTEST(alt22_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt22_2); 
ISET(cut,Qnil);goto accept22;
alt22_2: ame_setpos(self,oldpos24);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt20_7;}
   it=AmethystParser_empty(self ); FAILTEST(alt22_3); 
ISET(cut,Qnil);goto accept22;
  alt22_3:  ame_setpos(self,oldpos24); goto alt20_7;
 accept22:;
  it=AmethystParser_name(self ); FAILTEST(alt20_7);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept20;
alt20_7: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos25=ame_getpos(self);
alt23_1: ame_setpos(self,oldpos25);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt20_8;}
   it=AmethystParser__(self ); FAILTEST(alt23_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt23_2); 
ISET(cut,Qnil);goto accept23;
alt23_2: ame_setpos(self,oldpos25);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt20_8;}
   it=AmethystParser_empty(self ); FAILTEST(alt23_3); 
ISET(cut,Qnil);goto accept23;
  alt23_3:  ame_setpos(self,oldpos25); goto alt20_8;
 accept23:;
  it=AmethystParser_key(self ); FAILTEST(alt20_8);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept20;
alt20_8: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(rubyarg_AmethystParsercb_4,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(alt20_9);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept20;
  alt20_9:  ame_setpos(self,oldpos22); goto fail;
 accept20:;
 break;case UC('`') ... UC('`'):; int oldpos26=ame_getpos(self);
alt24_1: ame_setpos(self,oldpos26);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("`"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt24_2);it=rb_str_new2("`");  it=AmethystParser_expression(self ); FAILTEST(alt24_2);
 rb_ary_store(bind,16/*e*/,it);  it=rb_str_new2("`"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt24_2);it=rb_str_new2("`");it=CALL(rubyarg_AmethystParsercb_12,1,bind); 
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept24;
alt24_2: ame_setpos(self,oldpos26);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2(")");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("(");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("("); arg0=it;it=rb_str_new2(")"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt24_3);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept24;
alt24_3: ame_setpos(self,oldpos26);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("]");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("[");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("["); arg0=it;it=rb_str_new2("]"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt24_4);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept24;
alt24_4: ame_setpos(self,oldpos26);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("}");
 rb_ary_store(bind,2/*c*/,it); it=rb_str_new2("{");
 rb_ary_store(bind,3/*o*/,it);  it=rb_str_new2("{"); arg0=it;it=rb_str_new2("}"); arg1=it; it=AmethystParser___args(self ,arg0,arg1); FAILTEST(alt24_5);
 rb_ary_store(bind,4/*r*/,it); it=CALL(rubyarg_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept24;
alt24_5: ame_setpos(self,oldpos26);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 unsigned char chr9=*ame_curstr(self);  switch(chr9){case UC('\000') ... UC('#'):;case UC('%') ... UC('-'):;case UC('/') ... UC('9'):;case UC(';') ... UC('\377'):; int oldpos27=ame_getpos(self);
alt25_1: ame_setpos(self,oldpos27);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt24_6;}
   it=AmethystParser_spaces(self ); FAILTEST(alt25_2); it=rb_str_new2(":@"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt25_2);it=rb_str_new2(":@");
 rb_ary_store(bind,1/*n*/,it);  
ISET(cut,Qnil);goto accept25;
alt25_2: ame_setpos(self,oldpos27);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt24_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt25_3); 
ISET(cut,Qnil);goto accept25;
  alt25_3:  ame_setpos(self,oldpos27); goto alt24_6;
 accept25:;
 break;}int oldpos28=ame_getpos(self);
alt26_1: ame_setpos(self,oldpos28);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt24_6;}
   it=AmethystParser__(self ); FAILTEST(alt26_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt26_2); 
ISET(cut,Qnil);goto accept26;
alt26_2: ame_setpos(self,oldpos28);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt24_6;}
   it=AmethystParser_empty(self ); FAILTEST(alt26_3); 
ISET(cut,Qnil);goto accept26;
  alt26_3:  ame_setpos(self,oldpos28); goto alt24_6;
 accept26:;
  it=AmethystParser_name(self ); FAILTEST(alt24_6);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(rubyarg_AmethystParsercb_3,1,bind); it=rb_ary_entry(bind,1/*n*/);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept24;
alt24_6: ame_setpos(self,oldpos26);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 int oldpos29=ame_getpos(self);
alt27_1: ame_setpos(self,oldpos29);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt24_7;}
   it=AmethystParser__(self ); FAILTEST(alt27_2);ISET(cut,Qtrue);  it=AmethystParser_fails(self ); FAILTEST(alt27_2); 
ISET(cut,Qnil);goto accept27;
alt27_2: ame_setpos(self,oldpos29);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt24_7;}
   it=AmethystParser_empty(self ); FAILTEST(alt27_3); 
ISET(cut,Qnil);goto accept27;
  alt27_3:  ame_setpos(self,oldpos29); goto alt24_7;
 accept27:;
  it=AmethystParser_key(self ); FAILTEST(alt24_7);
 rb_ary_store(bind,6/*_result*/,it);  
ISET(cut,Qnil);goto accept24;
  alt24_7:  ame_setpos(self,oldpos26); goto fail;
 accept24:;
 break;}it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(rule_AmethystParsercb_1,1,bind); it=CALL(rule_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,0/*bnding*/,it);   it=AmethystParser_name(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*name*/,it);   it=AmethystParser_ruleargs(self ); FAILTEST(fail);
 rb_ary_store(bind,2/*args*/,it);   it=AmethystParser_spaces(self ); FAILTEST(fail); it=rb_str_new2("="); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_str_new2("=");  it=AmethystParser_expression(self ); FAILTEST(fail);
 rb_ary_store(bind,3/*body*/,it); it=CALL(rule_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,3/*body*/,it); it=CALL(rule_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,4/*locals*/,it); it=CALL(rule_AmethystParsercb_5,1,bind); it=CALL(rule_AmethystParsercb_6,1,bind);
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC('\''):;case UC(')') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(fail);it=rb_ary_new3(0);
 rb_ary_store(bind,0/*_result*/,it);  break;case UC('(') ... UC('('):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=rb_str_new2("("); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2("(");  it=AmethystParser_spaces(self ); FAILTEST(alt1_2); it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2("");it=rb_ary_new3(0);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystParser_rubyarg(self ); FAILTEST(break1);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(procargs2_AmethystParsercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,3/*r*/,it);  it=rb_str_new2(")"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_str_new2(")");it=rb_ary_entry(bind,3/*r*/);
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
 rb_ary_store(bind,5/*r*/,it); it=CALL(ruleargs_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(ruleargs_AmethystParsercb_2,1,bind); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_procargs(self ); FAILTEST(pass2);
 rb_ary_store(bind,8/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,9/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=rb_ary_entry(bind,0/*_result*/);
 rb_ary_store(bind,11/*autovar*/,it); it=CALL(ruleargs_AmethystParsercb_3,1,bind); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,12/*autovar*/,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystParser_addargs(self ); FAILTEST(pass4);
 rb_ary_store(bind,13/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,14/*autovar*/,it);   it=AmethystParser_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=rb_ary_entry(bind,14/*autovar*/);
 rb_ary_store(bind,15/*_result*/,it); it=rb_ary_entry(bind,15/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_ary_entry(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystParser_nr(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(number_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,2/*ary*/,it); it=CALL(sequence_AmethystParsercb_1,1,bind);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=CALL(spaces_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(spaces_AmethystParsercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*s*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,1/*x*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_className(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*cls*/,it); it=CALL(term_AmethystParsercb_1,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_3); it=rb_str_new2("nested"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_str_new2("nested"); it=rb_str_new2("("); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_str_new2("(");  it=AmethystParser_expression(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,4/*expr*/,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_3); it=rb_str_new2(")"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_str_new2(")");it=CALL(term_AmethystParsercb_2,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_4); it=rb_str_new2("break"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=rb_str_new2("break");it=CALL(term_AmethystParsercb_3,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_application(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_key(self ); FAILTEST(alt1_6);
 rb_ary_store(bind,5/*it*/,it); it=CALL(term_AmethystParsercb_4,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_7);unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC('\000') ... UC(','):;case UC('.') ... UC('\377'):;  it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_7);it=rb_str_new2("");  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt1_7);
 rb_ary_store(bind,1/*x*/,it);  break;case UC('-') ... UC('-'):; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_7;}
  it=rb_str_new2("->"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=rb_str_new2("->");  it=AmethystParser_atomicHostExpr(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,1/*x*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_7;}
  it=rb_str_new2(""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);it=rb_str_new2("");  it=AmethystParser_inlineHostExpr(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,1/*x*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_7;
 accept2:;
 break;}it=CALL(term_AmethystParsercb_5,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_8); it=rb_str_new2("\""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_8);it=rb_str_new2("\"");int oldpos3; while(1){oldpos3=ame_getpos(self); unsigned char chr2=*ame_curstr(self);  switch(chr2){case UC('\000') ... UC('!'):;case UC('#') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(listOf_AmethystParsercb_2,1,bind);  break;case UC('\"') ... UC('\"'):; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=rb_str_new2("\""); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=rb_str_new2("\"");ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystParser_eChar(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(listOf_AmethystParsercb_2,1,bind);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto break1;
 accept3:;
 break;} if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=CALL(term_AmethystParsercb_6,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_9); it=rb_str_new2("'"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_9);it=rb_str_new2("'");int oldpos5; while(1){oldpos5=ame_getpos(self); unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('\000') ... UC('&'):;case UC('(') ... UC('\377'):;   it=AmethystParser_eChar(self ); FAILTEST(break2);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(term_AmethystParsercb_7,1,bind);  break;case UC('\'') ... UC('\''):; int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
  it=rb_str_new2("'"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt4_2);it=rb_str_new2("'");ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystParser_eChar(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(term_AmethystParsercb_7,1,bind);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break2;
 accept4:;
 break;} if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=CALL(term_AmethystParsercb_8,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_number(self ); FAILTEST(alt1_10);
 rb_ary_store(bind,5/*it*/,it); it=CALL(term_AmethystParsercb_9,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_str_new2("<");
 rb_ary_store(bind,8/*s*/,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_11);it=rb_ary_entry(bind,8/*s*/);
 rb_ary_store(bind,9/*s*/,it);  it=rb_ary_entry(bind,9/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_11);it=rb_ary_entry(bind,9/*s*/);int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
 it=rb_str_new2(">");
 rb_ary_store(bind,8/*s*/,it);   it=AmethystParser_spaces(self ); FAILTEST(alt5_2);it=rb_str_new2(">");
 rb_ary_store(bind,9/*s*/,it);  it=rb_str_new2(">"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_2);it=rb_str_new2(">");ISET(cut,Qtrue);ISET(stop,Qtrue); 
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
   it=AmethystParser_eChar(self ); FAILTEST(alt5_3);
 rb_ary_store(bind,10/*autovar*/,it); it=CALL(term_AmethystParsercb_10,1,bind);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto break3;
 accept5:;
 if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=CALL(term_AmethystParsercb_11,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystParser_spaces(self ); FAILTEST(alt1_12); it=rb_str_new2("("); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);it=rb_str_new2("(");  it=AmethystParser_expression(self ); FAILTEST(alt1_12);
 rb_ary_store(bind,1/*x*/,it);   it=AmethystParser_spaces(self ); FAILTEST(alt1_12); it=rb_str_new2(")"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_12);it=rb_str_new2(")");unsigned char chr4=*ame_curstr(self);  switch(chr4){case UC('\000') ... UC('Z'):;case UC('\\') ... UC('\377'):;   it=AmethystParser_empty(self ); FAILTEST(alt1_12);it=rb_ary_entry(bind,1/*x*/);
 rb_ary_store(bind,3/*_result*/,it);  break;case UC('[') ... UC('['):; int oldpos9=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_12;}
  it=rb_str_new2("[]"); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_2);it=rb_str_new2("[]");it=rb_ary_entry(bind,1/*x*/);
 rb_ary_store(bind,11/*ors*/,it); it=CALL(term_AmethystParsercb_12,1,bind); 
 rb_ary_store(bind,12/*_result*/,it); it=rb_ary_entry(bind,12/*_result*/);
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_12;}
   it=AmethystParser_empty(self ); FAILTEST(alt6_3);it=rb_ary_entry(bind,1/*x*/);
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos9); goto alt1_12;
 accept6:;
 break;} 
ISET(cut,Qnil);goto accept1;
  alt1_12:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystParser_spaces(self ); FAILTEST(fail);it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE AmethystParser_upper(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(upper_AmethystParsercb_1,1,bind);  arg0=it; it=AmethystParser_regch(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
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
rb_define_method(cls_AmethystParser,"seq",AmethystParser_seq,1);
rb_define_method(cls_AmethystParser,"sequence",AmethystParser_sequence,0);
rb_define_method(cls_AmethystParser,"spaces",AmethystParser_spaces,0);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
rb_define_method(cls_AmethystParser,"token",AmethystParser_token,1);
rb_define_method(cls_AmethystParser,"upper",AmethystParser_upper,0);
 rb_eval_string("testversionparser('268ce9f093d454bfcc70be89ef74a926')");}
