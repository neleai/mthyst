#include "cthyst.h"
VALUE cls_AmethystOptimizer;
VALUE AmethystOptimizer_arg(VALUE self );
VALUE AmethystOptimizer_args(VALUE self );
VALUE AmethystOptimizer_itrans(VALUE self );
VALUE AmethystOptimizer_trans(VALUE self );
VALUE AmethystOptimizer_transfn(VALUE self );
VALUE AmethystOptimizer_transs(VALUE self );
VALUE AmethystOptimizer_arg(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(arg_AmethystOptimizercb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(arg_AmethystOptimizercb_2,1,bind); 
 BSET(autovar_2,it); it=CALL(arg_AmethystOptimizercb_3,1,bind); 
 BSET(ary_1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystOptimizercb_4,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_3,it); it=CALL(arg_AmethystOptimizercb_5,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=CALL(arg_AmethystOptimizercb_6,1,bind); 
 BSET(autovar_1,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=CALL(arg,0 ); FAILTEST(break1);
 BSET(autovar_4,it); it=CALL(arg_AmethystOptimizercb_7,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=BGET(autovar_1);
 BSET(ary_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(arg_AmethystOptimizercb_8,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystOptimizercb_9,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_5,it); it=CALL(arg_AmethystOptimizercb_10,1,bind); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
 it=CALL(arg_AmethystOptimizercb_11,1,bind); 
 BSET(autovar_2,it); int oldpos7; while(1){oldpos7=ame_getpos(self); int oldpos8=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=CALL(char,0 ); FAILTEST(alt4_2); 
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=CALL(arg,0 ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos8); goto break2;
 accept4:;

 BSET(autovar_6,it); it=CALL(arg_AmethystOptimizercb_12,1,bind);  if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=BGET(autovar_2);
 BSET(ary_1,it);  
ISET(cut,Qnil);goto accept3;
  alt3_2:  ame_setpos(self,oldpos6); goto pass2;
 accept3:;

	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
it=CALL(arg_AmethystOptimizercb_13,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystOptimizercb_14,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_7,it); it=CALL(arg_AmethystOptimizercb_15,1,bind); int oldpos9=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos10=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass3;}
   it=CALL(transfn,0 ); FAILTEST(alt5_2);
 BSET(autovar_8,it); it=CALL(arg_AmethystOptimizercb_16,1,bind);  
ISET(cut,Qnil);goto accept5;
  alt5_2:  ame_setpos(self,oldpos10); goto pass3;
 accept5:;

	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos9); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_4;
it=CALL(arg_AmethystOptimizercb_17,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystOptimizercb_18,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_9,it); it=CALL(arg_AmethystOptimizercb_19,1,bind); int oldpos11=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos12=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass4;}
 it=CALL(arg_AmethystOptimizercb_20,1,bind); 
 BSET(name_1,it); it=CALL(arg_AmethystOptimizercb_21,1,bind); 
 BSET(autovar_10,it); it=CALL(arg_AmethystOptimizercb_22,1,bind); int oldpos13=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(args,0 ); FAILTEST(pass5);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos13); ame_setlen(self,oldlen5);
	if(fail5) goto alt6_2;
it=CALL(arg_AmethystOptimizercb_23,1,bind); 
 BSET(autovar_11,it); it=CALL(arg_AmethystOptimizercb_24,1,bind); int oldpos14=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(args,0 ); FAILTEST(pass6);
 BSET(vars_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos14); ame_setlen(self,oldlen6);
	if(fail6) goto alt6_2;
 
ISET(cut,Qnil);goto accept6;
  alt6_2:  ame_setpos(self,oldpos12); goto pass4;
 accept6:;

	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos11); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_5;
it=CALL(arg_AmethystOptimizercb_25,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_6); 
ISET(cut,Qnil);goto accept1;
  alt1_6:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_args(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(args_AmethystOptimizercb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(args_AmethystOptimizercb_2,1,bind); 
 BSET(autovar_2,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(args_AmethystOptimizercb_3,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_3,it); it=CALL(args_AmethystOptimizercb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=CALL(args_AmethystOptimizercb_5,1,bind); 
 BSET(autovar_1,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=CALL(arg,0 ); FAILTEST(break1);
 BSET(autovar_4,it); it=CALL(args_AmethystOptimizercb_6,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=BGET(autovar_1);
 BSET(a_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=BGET(a_1); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(args_AmethystOptimizercb_7,1,bind); 
 BSET(autovar_2,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=CALL(arg,0 ); FAILTEST(break2);
 BSET(autovar_5,it); it=CALL(args_AmethystOptimizercb_8,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=BGET(autovar_2); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(itrans_AmethystOptimizercb_1,1,bind); 
 BSET(autovar_1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(itrans_AmethystOptimizercb_2,1,bind); 
 BSET(autovar_1,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(char,0 ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(trans,0 ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;

 BSET(autovar_2,it); it=CALL(itrans_AmethystOptimizercb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_1);
 BSET(r_1,it); it=BGET(r_1); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(trans_AmethystOptimizercb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(trans_AmethystOptimizercb_2,1,bind); 
 BSET(autovar_2,it); it=CALL(trans_AmethystOptimizercb_3,1,bind); 
 BSET(ary_1,it); it=CALL(trans_AmethystOptimizercb_4,1,bind); 
 BSET(autovar_3,it); it=CALL(trans_AmethystOptimizercb_5,1,bind); 
 BSET(autovar_4,it); it=CALL(trans_AmethystOptimizercb_6,1,bind); 
 BSET(autovar_5,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_7,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_6,it); it=CALL(trans_AmethystOptimizercb_8,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=CALL(trans_AmethystOptimizercb_9,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystOptimizercb_10,1,bind); 
 BSET(parent_1,it); it=CALL(trans_AmethystOptimizercb_11,1,bind); 
 BSET(autovar_7,it); it=CALL(trans_AmethystOptimizercb_12,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(transs,0 ); FAILTEST(pass2);
 BSET(rules_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
 
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(trans_AmethystOptimizercb_13,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_14,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_8,it); it=CALL(trans_AmethystOptimizercb_15,1,bind); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass3;}
 it=CALL(trans_AmethystOptimizercb_16,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystOptimizercb_17,1,bind); 
 BSET(autovar_9,it); it=CALL(trans_AmethystOptimizercb_18,1,bind); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(args,0 ); FAILTEST(pass4);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto alt3_2;
it=CALL(trans_AmethystOptimizercb_19,1,bind); 
 BSET(autovar_10,it); it=CALL(trans_AmethystOptimizercb_20,1,bind); int oldpos8=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass5);
 BSET(body_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos8); ame_setlen(self,oldlen5);
	if(fail5) goto alt3_2;
it=CALL(trans_AmethystOptimizercb_21,1,bind); 
 BSET(bnding_1,it); it=CALL(trans_AmethystOptimizercb_22,1,bind); 
 BSET(locals_1,it);  
ISET(cut,Qnil);goto accept3;
  alt3_2:  ame_setpos(self,oldpos6); goto pass3;
 accept3:;

	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_3;
it=CALL(trans_AmethystOptimizercb_23,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_24,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_11,it); it=CALL(trans_AmethystOptimizercb_25,1,bind); int oldpos9=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos10=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass6;}
 it=CALL(trans_AmethystOptimizercb_26,1,bind); 
 BSET(autovar_1,it); int oldpos11; while(1){oldpos11=ame_getpos(self);   it=CALL(transfn,0 ); FAILTEST(break1);
 BSET(autovar_12,it); it=CALL(trans_AmethystOptimizercb_27,1,bind);  if (IGET(stop)!=Qnil){{oldpos11=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos11); it=BGET(autovar_1);
 BSET(ary_1,it);  
ISET(cut,Qnil);goto accept4;
  alt4_2:  ame_setpos(self,oldpos10); goto pass6;
 accept4:;

	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos9); ame_setlen(self,oldlen6);
	if(fail6) goto alt1_4;
it=CALL(trans_AmethystOptimizercb_28,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_29,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_13,it); it=CALL(trans_AmethystOptimizercb_30,1,bind); int oldpos12=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos13=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass7;}
 it=CALL(trans_AmethystOptimizercb_31,1,bind); 
 BSET(autovar_2,it); int oldpos14; while(1){oldpos14=ame_getpos(self);   it=CALL(trans,0 ); FAILTEST(break2);
 BSET(autovar_14,it); it=CALL(trans_AmethystOptimizercb_32,1,bind);  if (IGET(stop)!=Qnil){{oldpos14=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos14); it=BGET(autovar_2);
 BSET(ary_1,it);  
ISET(cut,Qnil);goto accept5;
  alt5_2:  ame_setpos(self,oldpos13); goto pass7;
 accept5:;

	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos12); ame_setlen(self,oldlen7);
	if(fail7) goto alt1_5;
it=CALL(trans_AmethystOptimizercb_33,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_34,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_15,it); it=CALL(trans_AmethystOptimizercb_35,1,bind); int oldpos15=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_15)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos16=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos16);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass8;}
   it=CALL(trans,0 ); FAILTEST(alt6_2);
 BSET(autovar_16,it); it=CALL(trans_AmethystOptimizercb_36,1,bind); it=CALL(trans_AmethystOptimizercb_37,1,bind); 
 BSET(neg_1,it);  
ISET(cut,Qnil);goto accept6;
  alt6_2:  ame_setpos(self,oldpos16); goto pass8;
 accept6:;

	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos15); ame_setlen(self,oldlen8);
	if(fail8) goto alt1_6;
it=CALL(trans_AmethystOptimizercb_38,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_39,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_7);
 BSET(autovar_17,it); it=CALL(trans_AmethystOptimizercb_40,1,bind); int oldpos17=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,BGET(autovar_17)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos18=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass9;}
 it=CALL(trans_AmethystOptimizercb_41,1,bind); 
 BSET(autovar_3,it); int oldpos19; while(1){oldpos19=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break3);
 BSET(autovar_18,it); it=CALL(trans_AmethystOptimizercb_42,1,bind);  if (IGET(stop)!=Qnil){{oldpos19=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos19); it=BGET(autovar_3);
 BSET(ary_1,it);  
ISET(cut,Qnil);goto accept7;
  alt7_2:  ame_setpos(self,oldpos18); goto pass9;
 accept7:;

	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos17); ame_setlen(self,oldlen9);
	if(fail9) goto alt1_7;
it=CALL(trans_AmethystOptimizercb_43,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_44,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_8);
 BSET(autovar_19,it); it=CALL(trans_AmethystOptimizercb_45,1,bind); int oldpos20=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,BGET(autovar_19)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos21=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass10;}
   it=CALL(trans,0 ); FAILTEST(alt8_2);
 BSET(autovar_20,it); it=CALL(trans_AmethystOptimizercb_46,1,bind); it=CALL(trans_AmethystOptimizercb_47,1,bind); 
 BSET(o_1,it);  
ISET(cut,Qnil);goto accept8;
  alt8_2:  ame_setpos(self,oldpos21); goto pass10;
 accept8:;

	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos20); ame_setlen(self,oldlen10);
	if(fail10) goto alt1_8;
it=CALL(trans_AmethystOptimizercb_48,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_49,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_9);
 BSET(autovar_21,it); it=CALL(trans_AmethystOptimizercb_50,1,bind); int oldpos22=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,BGET(autovar_21)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos23=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos23);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass11;}
   it=CALL(anything,0 ); FAILTEST(alt9_2);
 BSET(autovar_22,it); it=CALL(trans_AmethystOptimizercb_51,1,bind);   it=CALL(args,0 ); FAILTEST(alt9_2);
 BSET(autovar_23,it); it=CALL(trans_AmethystOptimizercb_52,1,bind);  
ISET(cut,Qnil);goto accept9;
  alt9_2:  ame_setpos(self,oldpos23); goto pass11;
 accept9:;

	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos22); ame_setlen(self,oldlen11);
	if(fail11) goto alt1_9;
it=CALL(trans_AmethystOptimizercb_53,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_54,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_10);
 BSET(autovar_24,it); it=CALL(trans_AmethystOptimizercb_55,1,bind); int oldpos24=ame_getpos(self); int oldlen12=ame_getlen(self); VALUE oldsrc12=ame_getsrc(self); int fail12=0;
ame_setsrc(self,BGET(autovar_24)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos25=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos25);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass12;}
 it=CALL(trans_AmethystOptimizercb_56,1,bind); 
 BSET(autovar_25,it); it=CALL(trans_AmethystOptimizercb_57,1,bind); int oldpos26=ame_getpos(self); int oldlen13=ame_getlen(self); VALUE oldsrc13=ame_getsrc(self); int fail13=0;
ame_setsrc(self,BGET(autovar_25)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(arg,0 ); FAILTEST(pass13);
 BSET(name_1,it); 
	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ame_setsrc(self,oldsrc13); ame_setpos(self,oldpos26); ame_setlen(self,oldlen13);
	if(fail13) goto alt10_2;
it=CALL(trans_AmethystOptimizercb_58,1,bind); 
 BSET(autovar_26,it); it=CALL(trans_AmethystOptimizercb_59,1,bind); int oldpos27=ame_getpos(self); int oldlen14=ame_getlen(self); VALUE oldsrc14=ame_getsrc(self); int fail14=0;
ame_setsrc(self,BGET(autovar_26)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass14);
 BSET(expr_1,it); 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success14;
	pass14: fail14=1;
	success14: ame_setsrc(self,oldsrc14); ame_setpos(self,oldpos27); ame_setlen(self,oldlen14);
	if(fail14) goto alt10_2;
 
ISET(cut,Qnil);goto accept10;
  alt10_2:  ame_setpos(self,oldpos25); goto pass12;
 accept10:;

	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ame_setsrc(self,oldsrc12); ame_setpos(self,oldpos24); ame_setlen(self,oldlen12);
	if(fail12) goto alt1_10;
it=CALL(trans_AmethystOptimizercb_60,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_61,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_11);
 BSET(autovar_27,it); it=CALL(trans_AmethystOptimizercb_62,1,bind); int oldpos28=ame_getpos(self); int oldlen15=ame_getlen(self); VALUE oldsrc15=ame_getsrc(self); int fail15=0;
ame_setsrc(self,BGET(autovar_27)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos29=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos29);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass15;}
   it=CALL(args,0 ); FAILTEST(alt11_2);
 BSET(ary_1,it); it=CALL(trans_AmethystOptimizercb_63,1,bind); 
 BSET(pred_1,it); it=CALL(trans_AmethystOptimizercb_64,1,bind); 
 BSET(pure_1,it);  
ISET(cut,Qnil);goto accept11;
  alt11_2:  ame_setpos(self,oldpos29); goto pass15;
 accept11:;

	if (CALL(eof,0)==failobj) goto pass15;
	goto success15;
	pass15: fail15=1;
	success15: ame_setsrc(self,oldsrc15); ame_setpos(self,oldpos28); ame_setlen(self,oldlen15);
	if(fail15) goto alt1_11;
it=CALL(trans_AmethystOptimizercb_65,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_66,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_12);
 BSET(autovar_28,it); it=CALL(trans_AmethystOptimizercb_67,1,bind); int oldpos30=ame_getpos(self); int oldlen16=ame_getlen(self); VALUE oldsrc16=ame_getsrc(self); int fail16=0;
ame_setsrc(self,BGET(autovar_28)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos31=ame_getpos(self);
alt12_1: ame_setpos(self,oldpos31);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass16;}
 it=CALL(trans_AmethystOptimizercb_68,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystOptimizercb_69,1,bind); 
 BSET(autovar_29,it); it=CALL(trans_AmethystOptimizercb_70,1,bind); int oldpos32=ame_getpos(self); int oldlen17=ame_getlen(self); VALUE oldsrc17=ame_getsrc(self); int fail17=0;
ame_setsrc(self,BGET(autovar_29)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(args,0 ); FAILTEST(pass17);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass17;
	goto success17;
	pass17: fail17=1;
	success17: ame_setsrc(self,oldsrc17); ame_setpos(self,oldpos32); ame_setlen(self,oldlen17);
	if(fail17) goto alt12_2;
it=CALL(trans_AmethystOptimizercb_71,1,bind); 
 BSET(autovar_30,it); it=CALL(trans_AmethystOptimizercb_72,1,bind); int oldpos33=ame_getpos(self); int oldlen18=ame_getlen(self); VALUE oldsrc18=ame_getsrc(self); int fail18=0;
ame_setsrc(self,BGET(autovar_30)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(args,0 ); FAILTEST(pass18);
 BSET(vars_1,it); 
	if (CALL(eof,0)==failobj) goto pass18;
	goto success18;
	pass18: fail18=1;
	success18: ame_setsrc(self,oldsrc18); ame_setpos(self,oldpos33); ame_setlen(self,oldlen18);
	if(fail18) goto alt12_2;
 
ISET(cut,Qnil);goto accept12;
  alt12_2:  ame_setpos(self,oldpos31); goto pass16;
 accept12:;

	if (CALL(eof,0)==failobj) goto pass16;
	goto success16;
	pass16: fail16=1;
	success16: ame_setsrc(self,oldsrc16); ame_setpos(self,oldpos30); ame_setlen(self,oldlen16);
	if(fail16) goto alt1_12;
it=CALL(trans_AmethystOptimizercb_73,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_12: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_74,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_13);
 BSET(autovar_31,it); it=CALL(trans_AmethystOptimizercb_75,1,bind); int oldpos34=ame_getpos(self); int oldlen19=ame_getlen(self); VALUE oldsrc19=ame_getsrc(self); int fail19=0;
ame_setsrc(self,BGET(autovar_31)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos35=ame_getpos(self);
alt13_1: ame_setpos(self,oldpos35);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass19;}
 it=CALL(trans_AmethystOptimizercb_76,1,bind); 
 BSET(autovar_4,it); int oldpos36; while(1){oldpos36=ame_getpos(self);   it=CALL(arg,0 ); FAILTEST(break4);
 BSET(autovar_32,it); it=CALL(trans_AmethystOptimizercb_77,1,bind);  if (IGET(stop)!=Qnil){{oldpos36=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos36); it=BGET(autovar_4);
 BSET(ary_1,it);  
ISET(cut,Qnil);goto accept13;
  alt13_2:  ame_setpos(self,oldpos35); goto pass19;
 accept13:;

	if (CALL(eof,0)==failobj) goto pass19;
	goto success19;
	pass19: fail19=1;
	success19: ame_setsrc(self,oldsrc19); ame_setpos(self,oldpos34); ame_setlen(self,oldlen19);
	if(fail19) goto alt1_13;
it=CALL(trans_AmethystOptimizercb_78,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_13: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_79,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_14);
 BSET(autovar_33,it); it=CALL(trans_AmethystOptimizercb_80,1,bind); int oldpos37=ame_getpos(self); int oldlen20=ame_getlen(self); VALUE oldsrc20=ame_getsrc(self); int fail20=0;
ame_setsrc(self,BGET(autovar_33)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos38=ame_getpos(self);
alt14_1: ame_setpos(self,oldpos38);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass20;}
 it=CALL(trans_AmethystOptimizercb_81,1,bind); 
 BSET(autovar_34,it); it=CALL(trans_AmethystOptimizercb_82,1,bind); int oldpos39=ame_getpos(self); int oldlen21=ame_getlen(self); VALUE oldsrc21=ame_getsrc(self); int fail21=0;
ame_setsrc(self,BGET(autovar_34)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass21);
 BSET(to_1,it); 
	if (CALL(eof,0)==failobj) goto pass21;
	goto success21;
	pass21: fail21=1;
	success21: ame_setsrc(self,oldsrc21); ame_setpos(self,oldpos39); ame_setlen(self,oldlen21);
	if(fail21) goto alt14_2;
it=CALL(trans_AmethystOptimizercb_83,1,bind); 
 BSET(autovar_35,it); it=CALL(trans_AmethystOptimizercb_84,1,bind); int oldpos40=ame_getpos(self); int oldlen22=ame_getlen(self); VALUE oldsrc22=ame_getsrc(self); int fail22=0;
ame_setsrc(self,BGET(autovar_35)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(arg,0 ); FAILTEST(pass22);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass22;
	goto success22;
	pass22: fail22=1;
	success22: ame_setsrc(self,oldsrc22); ame_setpos(self,oldpos40); ame_setlen(self,oldlen22);
	if(fail22) goto alt14_2;
 
ISET(cut,Qnil);goto accept14;
  alt14_2:  ame_setpos(self,oldpos38); goto pass20;
 accept14:;

	if (CALL(eof,0)==failobj) goto pass20;
	goto success20;
	pass20: fail20=1;
	success20: ame_setsrc(self,oldsrc20); ame_setpos(self,oldpos37); ame_setlen(self,oldlen20);
	if(fail20) goto alt1_14;
it=CALL(trans_AmethystOptimizercb_85,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_14: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_86,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_15);
 BSET(autovar_36,it); it=CALL(trans_AmethystOptimizercb_87,1,bind); int oldpos41=ame_getpos(self); int oldlen23=ame_getlen(self); VALUE oldsrc23=ame_getsrc(self); int fail23=0;
ame_setsrc(self,BGET(autovar_36)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos42=ame_getpos(self);
alt15_1: ame_setpos(self,oldpos42);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass23;}
  
ISET(cut,Qnil);goto accept15;
  alt15_2:  ame_setpos(self,oldpos42); goto pass23;
 accept15:;

	if (CALL(eof,0)==failobj) goto pass23;
	goto success23;
	pass23: fail23=1;
	success23: ame_setsrc(self,oldsrc23); ame_setpos(self,oldpos41); ame_setlen(self,oldlen23);
	if(fail23) goto alt1_15;
it=CALL(trans_AmethystOptimizercb_88,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_15: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_89,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_16);
 BSET(autovar_37,it); it=CALL(trans_AmethystOptimizercb_90,1,bind); int oldpos43=ame_getpos(self); int oldlen24=ame_getlen(self); VALUE oldsrc24=ame_getsrc(self); int fail24=0;
ame_setsrc(self,BGET(autovar_37)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos44=ame_getpos(self);
alt16_1: ame_setpos(self,oldpos44);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass24;}
  
ISET(cut,Qnil);goto accept16;
  alt16_2:  ame_setpos(self,oldpos44); goto pass24;
 accept16:;

	if (CALL(eof,0)==failobj) goto pass24;
	goto success24;
	pass24: fail24=1;
	success24: ame_setsrc(self,oldsrc24); ame_setpos(self,oldpos43); ame_setlen(self,oldlen24);
	if(fail24) goto alt1_16;
it=CALL(trans_AmethystOptimizercb_91,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_16: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_92,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_17);
 BSET(autovar_38,it); it=CALL(trans_AmethystOptimizercb_93,1,bind); int oldpos45=ame_getpos(self); int oldlen25=ame_getlen(self); VALUE oldsrc25=ame_getsrc(self); int fail25=0;
ame_setsrc(self,BGET(autovar_38)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos46=ame_getpos(self);
alt17_1: ame_setpos(self,oldpos46);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass25;}
 it=CALL(trans_AmethystOptimizercb_94,1,bind); 
 BSET(autovar_5,it); int oldpos47; while(1){oldpos47=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break5);
 BSET(autovar_39,it); it=CALL(trans_AmethystOptimizercb_95,1,bind);  if (IGET(stop)!=Qnil){{oldpos47=ame_getpos(self);goto break5;} } } break5: ISET(stop,Qnil);  ame_setpos(self,oldpos47); it=BGET(autovar_5);it=CALL(trans_AmethystOptimizercb_96,1,bind);  
ISET(cut,Qnil);goto accept17;
  alt17_2:  ame_setpos(self,oldpos46); goto pass25;
 accept17:;

	if (CALL(eof,0)==failobj) goto pass25;
	goto success25;
	pass25: fail25=1;
	success25: ame_setsrc(self,oldsrc25); ame_setpos(self,oldpos45); ame_setlen(self,oldlen25);
	if(fail25) goto alt1_17;
 
ISET(cut,Qnil);goto accept1;
  alt1_17:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_transfn(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(trans,0 ); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_transs(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(transs_AmethystOptimizercb_1,1,bind); 
 BSET(autovar_1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_2);
 BSET(autovar_2,it); it=CALL(transs_AmethystOptimizercb_2,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=CALL(transs_AmethystOptimizercb_3,1,bind); 
 BSET(autovar_1,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=CALL(trans,0 ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(transs_AmethystOptimizercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=BGET(autovar_1);
 BSET(t_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=BGET(t_1); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
void Init_optimizer_null_c(){ 
 cls_AmethystOptimizer=rb_define_class("AmethystOptimizer",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystOptimizer,"arg",AmethystOptimizer_arg,0);
rb_define_method(cls_AmethystOptimizer,"args",AmethystOptimizer_args,0);
rb_define_method(cls_AmethystOptimizer,"itrans",AmethystOptimizer_itrans,0);
rb_define_method(cls_AmethystOptimizer,"trans",AmethystOptimizer_trans,0);
rb_define_method(cls_AmethystOptimizer,"transfn",AmethystOptimizer_transfn,0);
rb_define_method(cls_AmethystOptimizer,"transs",AmethystOptimizer_transs,0);
 }
