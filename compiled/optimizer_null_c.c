#include "cthyst.h"
VALUE cls_AmethystOptimizer;
VALUE AmethystOptimizer_arg(VALUE self );
VALUE AmethystOptimizer_args(VALUE self );
VALUE AmethystOptimizer_char(VALUE self );
VALUE AmethystOptimizer_clas(VALUE self ,VALUE a0);
VALUE AmethystOptimizer_itrans(VALUE self );
VALUE AmethystOptimizer_trans(VALUE self );
VALUE AmethystOptimizer_transfn(VALUE self );
VALUE AmethystOptimizer_transs(VALUE self );
VALUE AmethystOptimizer_arg(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);it=rb_ary_new3(0);
 BSET(ary_1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystOptimizercb_1,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystOptimizer_arg(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(arg_AmethystOptimizercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(arg_AmethystOptimizercb_3,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystOptimizercb_4,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_5,it); int oldpos5; while(1){oldpos5=ame_getpos(self); int oldpos6=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystOptimizer_char(self ); FAILTEST(alt2_2);
 BSET(autovar_6,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
   it=AmethystOptimizer_arg(self ); FAILTEST(alt2_3);
 BSET(autovar_6,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos6); goto break2;
 accept2:;
it=CALL(arg_AmethystOptimizercb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=BGET(autovar_5);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
it=CALL(arg_AmethystOptimizercb_6,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystOptimizercb_7,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_7,it); int oldpos7=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_transfn(self ); FAILTEST(pass3);
 BSET(autovar_8,it); it=CALL(arg_AmethystOptimizercb_8,1,bind); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos7); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_4;
it=CALL(arg_AmethystOptimizercb_9,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystOptimizercb_10,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_5);
 BSET(autovar_9,it); int oldpos8=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(arg_AmethystOptimizercb_11,1,bind); 
 BSET(name_1,it); it=CALL(arg_AmethystOptimizercb_12,1,bind); 
 BSET(autovar_10,it); it=CALL(arg_AmethystOptimizercb_13,1,bind); int oldpos9=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_args(self ); FAILTEST(pass5);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos9); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=CALL(arg_AmethystOptimizercb_14,1,bind); 
 BSET(autovar_11,it); it=CALL(arg_AmethystOptimizercb_15,1,bind); int oldpos10=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_args(self ); FAILTEST(pass6);
 BSET(vars_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos10); ame_setlen(self,oldlen6);
	if(fail6) goto pass4;

	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos8); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_5;
it=CALL(arg_AmethystOptimizercb_16,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_6);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_6:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_args(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(args_AmethystOptimizercb_1,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystOptimizer_arg(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(args_AmethystOptimizercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(a_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=BGET(a_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_new3(0);
 BSET(autovar_4,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystOptimizer_arg(self ); FAILTEST(break2);
 BSET(autovar_5,it); it=CALL(args_AmethystOptimizercb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=BGET(autovar_4);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_char(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(anything,0 ); FAILTEST(fail);
 BSET(c_1,it); it=CALL(char_AmethystOptimizercb_1,1,bind); FAILTEST(fail);it=BGET(c_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(anything,0 ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_AmethystOptimizercb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_new3(0);
 BSET(autovar_1,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystOptimizer_char(self ); FAILTEST(alt2_2); 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystOptimizer_trans(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;

 BSET(autovar_2,it); it=CALL(itrans_AmethystOptimizercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_1);
 BSET(r_1,it); it=BGET(r_1); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);it=rb_ary_new3(0);
 BSET(ary_1,it); it=rb_ary_new3(0);it=rb_ary_new3(0);it=rb_ary_new3(0);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_1,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystOptimizercb_2,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystOptimizercb_3,1,bind); 
 BSET(parent_1,it); it=CALL(trans_AmethystOptimizercb_4,1,bind); 
 BSET(autovar_2,it); it=CALL(trans_AmethystOptimizercb_5,1,bind); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_transs(self ); FAILTEST(pass2);
 BSET(rules_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(trans_AmethystOptimizercb_6,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_7,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_3,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystOptimizercb_8,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystOptimizercb_9,1,bind); 
 BSET(autovar_4,it); it=CALL(trans_AmethystOptimizercb_10,1,bind); int oldpos5=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_args(self ); FAILTEST(pass4);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos5); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=CALL(trans_AmethystOptimizercb_11,1,bind); 
 BSET(autovar_5,it); it=CALL(trans_AmethystOptimizercb_12,1,bind); int oldpos6=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_trans(self ); FAILTEST(pass5);
 BSET(body_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos6); ame_setlen(self,oldlen5);
	if(fail5) goto pass3;
it=CALL(trans_AmethystOptimizercb_13,1,bind); 
 BSET(bnding_1,it); it=CALL(trans_AmethystOptimizercb_14,1,bind); 
 BSET(locals_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_3;
it=CALL(trans_AmethystOptimizercb_15,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_16,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_6,it); int oldpos7=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_7,it); int oldpos8; while(1){oldpos8=ame_getpos(self);   it=AmethystOptimizer_transfn(self ); FAILTEST(break1);
 BSET(autovar_8,it); it=CALL(trans_AmethystOptimizercb_17,1,bind);  if (IGET(stop)!=Qnil){{oldpos8=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos8); it=BGET(autovar_7);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos7); ame_setlen(self,oldlen6);
	if(fail6) goto alt1_4;
it=CALL(trans_AmethystOptimizercb_18,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_19,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_5);
 BSET(autovar_9,it); int oldpos9=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_10,it); int oldpos10; while(1){oldpos10=ame_getpos(self);   it=AmethystOptimizer_trans(self ); FAILTEST(break2);
 BSET(autovar_11,it); it=CALL(trans_AmethystOptimizercb_20,1,bind);  if (IGET(stop)!=Qnil){{oldpos10=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos10); it=BGET(autovar_10);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos9); ame_setlen(self,oldlen7);
	if(fail7) goto alt1_5;
it=CALL(trans_AmethystOptimizercb_21,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_22,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_6);
 BSET(autovar_12,it); int oldpos11=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_12)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_trans(self ); FAILTEST(pass8);
 BSET(autovar_13,it); it=CALL(trans_AmethystOptimizercb_23,1,bind); it=CALL(trans_AmethystOptimizercb_24,1,bind); 
 BSET(neg_1,it); 
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos11); ame_setlen(self,oldlen8);
	if(fail8) goto alt1_6;
it=CALL(trans_AmethystOptimizercb_25,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_26,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_7);
 BSET(autovar_14,it); int oldpos12=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,BGET(autovar_14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_15,it); int oldpos13; while(1){oldpos13=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break3);
 BSET(autovar_16,it); it=CALL(trans_AmethystOptimizercb_27,1,bind);  if (IGET(stop)!=Qnil){{oldpos13=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos13); it=BGET(autovar_15);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos12); ame_setlen(self,oldlen9);
	if(fail9) goto alt1_7;
it=CALL(trans_AmethystOptimizercb_28,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_29,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_8);
 BSET(autovar_17,it); int oldpos14=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,BGET(autovar_17)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_trans(self ); FAILTEST(pass10);
 BSET(autovar_18,it); it=CALL(trans_AmethystOptimizercb_30,1,bind); it=CALL(trans_AmethystOptimizercb_31,1,bind); 
 BSET(o_1,it); 
	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos14); ame_setlen(self,oldlen10);
	if(fail10) goto alt1_8;
it=CALL(trans_AmethystOptimizercb_32,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_33,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_9);
 BSET(autovar_19,it); int oldpos15=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,BGET(autovar_19)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass11);
 BSET(autovar_20,it); it=CALL(trans_AmethystOptimizercb_34,1,bind);   it=AmethystOptimizer_args(self ); FAILTEST(pass11);
 BSET(autovar_21,it); it=CALL(trans_AmethystOptimizercb_35,1,bind); 
	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos15); ame_setlen(self,oldlen11);
	if(fail11) goto alt1_9;
it=CALL(trans_AmethystOptimizercb_36,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_37,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_10);
 BSET(autovar_22,it); int oldpos16=ame_getpos(self); int oldlen12=ame_getlen(self); VALUE oldsrc12=ame_getsrc(self); int fail12=0;
ame_setsrc(self,BGET(autovar_22)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystOptimizercb_38,1,bind); 
 BSET(autovar_23,it); it=CALL(trans_AmethystOptimizercb_39,1,bind); int oldpos17=ame_getpos(self); int oldlen13=ame_getlen(self); VALUE oldsrc13=ame_getsrc(self); int fail13=0;
ame_setsrc(self,BGET(autovar_23)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_arg(self ); FAILTEST(pass13);
 BSET(name_1,it); 
	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ame_setsrc(self,oldsrc13); ame_setpos(self,oldpos17); ame_setlen(self,oldlen13);
	if(fail13) goto pass12;
it=CALL(trans_AmethystOptimizercb_40,1,bind); 
 BSET(autovar_24,it); it=CALL(trans_AmethystOptimizercb_41,1,bind); int oldpos18=ame_getpos(self); int oldlen14=ame_getlen(self); VALUE oldsrc14=ame_getsrc(self); int fail14=0;
ame_setsrc(self,BGET(autovar_24)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_trans(self ); FAILTEST(pass14);
 BSET(expr_1,it); 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success14;
	pass14: fail14=1;
	success14: ame_setsrc(self,oldsrc14); ame_setpos(self,oldpos18); ame_setlen(self,oldlen14);
	if(fail14) goto pass12;

	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ame_setsrc(self,oldsrc12); ame_setpos(self,oldpos16); ame_setlen(self,oldlen12);
	if(fail12) goto alt1_10;
it=CALL(trans_AmethystOptimizercb_42,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_43,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_11);
 BSET(autovar_25,it); int oldpos19=ame_getpos(self); int oldlen15=ame_getlen(self); VALUE oldsrc15=ame_getsrc(self); int fail15=0;
ame_setsrc(self,BGET(autovar_25)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_args(self ); FAILTEST(pass15);
 BSET(ary_1,it); it=CALL(trans_AmethystOptimizercb_44,1,bind); 
 BSET(pred_1,it); it=CALL(trans_AmethystOptimizercb_45,1,bind); 
 BSET(pure_1,it); 
	if (CALL(eof,0)==failobj) goto pass15;
	goto success15;
	pass15: fail15=1;
	success15: ame_setsrc(self,oldsrc15); ame_setpos(self,oldpos19); ame_setlen(self,oldlen15);
	if(fail15) goto alt1_11;
it=CALL(trans_AmethystOptimizercb_46,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_47,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_12);
 BSET(autovar_26,it); int oldpos20=ame_getpos(self); int oldlen16=ame_getlen(self); VALUE oldsrc16=ame_getsrc(self); int fail16=0;
ame_setsrc(self,BGET(autovar_26)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystOptimizercb_48,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystOptimizercb_49,1,bind); 
 BSET(autovar_27,it); it=CALL(trans_AmethystOptimizercb_50,1,bind); int oldpos21=ame_getpos(self); int oldlen17=ame_getlen(self); VALUE oldsrc17=ame_getsrc(self); int fail17=0;
ame_setsrc(self,BGET(autovar_27)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_args(self ); FAILTEST(pass17);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass17;
	goto success17;
	pass17: fail17=1;
	success17: ame_setsrc(self,oldsrc17); ame_setpos(self,oldpos21); ame_setlen(self,oldlen17);
	if(fail17) goto pass16;
it=CALL(trans_AmethystOptimizercb_51,1,bind); 
 BSET(autovar_28,it); it=CALL(trans_AmethystOptimizercb_52,1,bind); int oldpos22=ame_getpos(self); int oldlen18=ame_getlen(self); VALUE oldsrc18=ame_getsrc(self); int fail18=0;
ame_setsrc(self,BGET(autovar_28)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_args(self ); FAILTEST(pass18);
 BSET(vars_1,it); 
	if (CALL(eof,0)==failobj) goto pass18;
	goto success18;
	pass18: fail18=1;
	success18: ame_setsrc(self,oldsrc18); ame_setpos(self,oldpos22); ame_setlen(self,oldlen18);
	if(fail18) goto pass16;

	if (CALL(eof,0)==failobj) goto pass16;
	goto success16;
	pass16: fail16=1;
	success16: ame_setsrc(self,oldsrc16); ame_setpos(self,oldpos20); ame_setlen(self,oldlen16);
	if(fail16) goto alt1_12;
it=CALL(trans_AmethystOptimizercb_53,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_12: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_54,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_13);
 BSET(autovar_29,it); int oldpos23=ame_getpos(self); int oldlen19=ame_getlen(self); VALUE oldsrc19=ame_getsrc(self); int fail19=0;
ame_setsrc(self,BGET(autovar_29)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_30,it); int oldpos24; while(1){oldpos24=ame_getpos(self);   it=AmethystOptimizer_arg(self ); FAILTEST(break4);
 BSET(autovar_31,it); it=CALL(trans_AmethystOptimizercb_55,1,bind);  if (IGET(stop)!=Qnil){{oldpos24=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos24); it=BGET(autovar_30);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass19;
	goto success19;
	pass19: fail19=1;
	success19: ame_setsrc(self,oldsrc19); ame_setpos(self,oldpos23); ame_setlen(self,oldlen19);
	if(fail19) goto alt1_13;
it=CALL(trans_AmethystOptimizercb_56,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_13: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_57,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_14);
 BSET(autovar_32,it); int oldpos25=ame_getpos(self); int oldlen20=ame_getlen(self); VALUE oldsrc20=ame_getsrc(self); int fail20=0;
ame_setsrc(self,BGET(autovar_32)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystOptimizercb_58,1,bind); 
 BSET(autovar_33,it); it=CALL(trans_AmethystOptimizercb_59,1,bind); int oldpos26=ame_getpos(self); int oldlen21=ame_getlen(self); VALUE oldsrc21=ame_getsrc(self); int fail21=0;
ame_setsrc(self,BGET(autovar_33)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_trans(self ); FAILTEST(pass21);
 BSET(to_1,it); 
	if (CALL(eof,0)==failobj) goto pass21;
	goto success21;
	pass21: fail21=1;
	success21: ame_setsrc(self,oldsrc21); ame_setpos(self,oldpos26); ame_setlen(self,oldlen21);
	if(fail21) goto pass20;
it=CALL(trans_AmethystOptimizercb_60,1,bind); 
 BSET(autovar_34,it); it=CALL(trans_AmethystOptimizercb_61,1,bind); int oldpos27=ame_getpos(self); int oldlen22=ame_getlen(self); VALUE oldsrc22=ame_getsrc(self); int fail22=0;
ame_setsrc(self,BGET(autovar_34)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystOptimizer_arg(self ); FAILTEST(pass22);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass22;
	goto success22;
	pass22: fail22=1;
	success22: ame_setsrc(self,oldsrc22); ame_setpos(self,oldpos27); ame_setlen(self,oldlen22);
	if(fail22) goto pass20;

	if (CALL(eof,0)==failobj) goto pass20;
	goto success20;
	pass20: fail20=1;
	success20: ame_setsrc(self,oldsrc20); ame_setpos(self,oldpos25); ame_setlen(self,oldlen20);
	if(fail20) goto alt1_14;
it=CALL(trans_AmethystOptimizercb_62,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_14: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_63,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_15);
 BSET(autovar_35,it); int oldpos28=ame_getpos(self); int oldlen23=ame_getlen(self); VALUE oldsrc23=ame_getsrc(self); int fail23=0;
ame_setsrc(self,BGET(autovar_35)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 
	if (CALL(eof,0)==failobj) goto pass23;
	goto success23;
	pass23: fail23=1;
	success23: ame_setsrc(self,oldsrc23); ame_setpos(self,oldpos28); ame_setlen(self,oldlen23);
	if(fail23) goto alt1_15;
it=CALL(trans_AmethystOptimizercb_64,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_15: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_65,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_16);
 BSET(autovar_36,it); int oldpos29=ame_getpos(self); int oldlen24=ame_getlen(self); VALUE oldsrc24=ame_getsrc(self); int fail24=0;
ame_setsrc(self,BGET(autovar_36)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 
	if (CALL(eof,0)==failobj) goto pass24;
	goto success24;
	pass24: fail24=1;
	success24: ame_setsrc(self,oldsrc24); ame_setpos(self,oldpos29); ame_setlen(self,oldlen24);
	if(fail24) goto alt1_16;
it=CALL(trans_AmethystOptimizercb_66,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_16: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizercb_67,1,bind); it=AmethystOptimizer_clas(self ,arg0); FAILTEST(alt1_17);
 BSET(autovar_37,it); int oldpos30=ame_getpos(self); int oldlen25=ame_getlen(self); VALUE oldsrc25=ame_getsrc(self); int fail25=0;
ame_setsrc(self,BGET(autovar_37)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);int oldpos31; while(1){oldpos31=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break5); if (IGET(stop)!=Qnil){{oldpos31=ame_getpos(self);goto break5;} } } break5: ISET(stop,Qnil);  ame_setpos(self,oldpos31); it=CALL(trans_AmethystOptimizercb_68,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass25;
	goto success25;
	pass25: fail25=1;
	success25: ame_setsrc(self,oldsrc25); ame_setpos(self,oldpos30); ame_setlen(self,oldlen25);
	if(fail25) goto alt1_17;
 
ISET(cut,Qnil);goto accept1;
  alt1_17:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_transfn(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystOptimizer_trans(self ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer_transs(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);  it=CALL(anything,0 ); FAILTEST(fail);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystOptimizer_trans(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(transs_AmethystOptimizercb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_2);
 BSET(t_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(t_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
void Init_optimizer_null_c(){ 
 cls_AmethystOptimizer=rb_define_class("AmethystOptimizer",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystOptimizer,"arg",AmethystOptimizer_arg,0);
rb_define_method(cls_AmethystOptimizer,"args",AmethystOptimizer_args,0);
rb_define_method(cls_AmethystOptimizer,"char",AmethystOptimizer_char,0);
rb_define_method(cls_AmethystOptimizer,"clas",AmethystOptimizer_clas,1);
rb_define_method(cls_AmethystOptimizer,"itrans",AmethystOptimizer_itrans,0);
rb_define_method(cls_AmethystOptimizer,"trans",AmethystOptimizer_trans,0);
rb_define_method(cls_AmethystOptimizer,"transfn",AmethystOptimizer_transfn,0);
rb_define_method(cls_AmethystOptimizer,"transs",AmethystOptimizer_transs,0);
 }
