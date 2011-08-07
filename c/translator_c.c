#include "cthyst.h"
VALUE cls_AmethystTranslator;
VALUE AmethystTranslator_arg(VALUE self );
VALUE AmethystTranslator_args(VALUE self );
VALUE AmethystTranslator_failwrap(VALUE self ,VALUE a0);
VALUE AmethystTranslator_itrans(VALUE self );
VALUE AmethystTranslator_rw(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystTranslator_trans(VALUE self );
VALUE AmethystTranslator_trans_lambda1(VALUE self,VALUE bind);
VALUE AmethystTranslator_trans_lambda2(VALUE self,VALUE bind);
VALUE AmethystTranslator_trans_lambda3(VALUE self,VALUE bind);
VALUE AmethystTranslator_trans_lambda4(VALUE self,VALUE bind);
VALUE AmethystTranslator_trans_lambda5(VALUE self,VALUE bind);
VALUE AmethystTranslator_transfn(VALUE self );
VALUE AmethystTranslator_transs(VALUE self );
VALUE AmethystTranslator_arg(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(arg_AmethystTranslatorcb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(arg_AmethystTranslatorcb_2,1,bind); 
 BSET(autovar_2,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystTranslatorcb_3,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_3,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(arg_AmethystTranslatorcb_4,1,bind); 
 BSET(autovar_1,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=CALL(arg,0 ); FAILTEST(break1);
 BSET(autovar_4,it); it=CALL(arg_AmethystTranslatorcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_1);
 BSET(a_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(arg_AmethystTranslatorcb_6,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystTranslatorcb_7,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(arg_AmethystTranslatorcb_8,1,bind); 
 BSET(autovar_2,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=CALL(arg,0 ); FAILTEST(break2);
 BSET(autovar_6,it); it=CALL(arg_AmethystTranslatorcb_9,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=BGET(autovar_2);
 BSET(a_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
it=CALL(arg_AmethystTranslatorcb_10,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystTranslatorcb_11,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_7,it); int oldpos6=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(transfn,0 ); FAILTEST(pass3);
 BSET(t_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos6); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_4;
it=BGET(t_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystTranslatorcb_12,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_8,it); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(arg_AmethystTranslatorcb_13,1,bind); 
 BSET(name_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_5;
it=CALL(arg_AmethystTranslatorcb_14,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystTranslatorcb_15,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_9,it); int oldpos8=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos9; while(1){oldpos9=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldpos9=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos9); it=CALL(arg_AmethystTranslatorcb_16,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos8); ame_setlen(self,oldlen5);
	if(fail5) goto alt1_6;
 
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(arg_AmethystTranslatorcb_17,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_7);
 BSET(autovar_10,it); int oldpos10=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass6);
 BSET(name_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos10); ame_setlen(self,oldlen6);
	if(fail6) goto alt1_7;
it=CALL(arg_AmethystTranslatorcb_18,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_8);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_8:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_args(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(args_AmethystTranslatorcb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(args_AmethystTranslatorcb_2,1,bind); 
 BSET(autovar_2,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(args_AmethystTranslatorcb_3,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_3,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(args_AmethystTranslatorcb_4,1,bind); 
 BSET(autovar_1,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=CALL(arg,0 ); FAILTEST(break1);
 BSET(autovar_4,it); it=CALL(args_AmethystTranslatorcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_1);
 BSET(a_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(args_AmethystTranslatorcb_6,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(args_AmethystTranslatorcb_7,1,bind); 
 BSET(autovar_2,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=CALL(arg,0 ); FAILTEST(break2);
 BSET(autovar_5,it); it=CALL(args_AmethystTranslatorcb_8,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=BGET(autovar_2);
 BSET(a_1,it); it=CALL(args_AmethystTranslatorcb_9,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_failwrap(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(s_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(failwrap_AmethystTranslatorcb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(itrans_AmethystTranslatorcb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(itrans_AmethystTranslatorcb_2,1,bind); 
 BSET(autovar_1,it); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(char,0 ); FAILTEST(alt1_2);
 BSET(autovar_2,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(trans,0 ); FAILTEST(alt1_3);
 BSET(autovar_2,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=CALL(itrans_AmethystTranslatorcb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(autovar_1);
 BSET(r_1,it); it=CALL(itrans_AmethystTranslatorcb_4,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_rw(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(word_1,a0);BSET(prc_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(rw_AmethystTranslatorcb_1,1,bind); 
 BSET(rwo_1,it); it=CALL(rw_AmethystTranslatorcb_2,1,bind);  arg0=CALL(rw_AmethystTranslatorcb_3,1,bind); it=CALL(apply,1 ,arg0); FAILTEST(fail);
 BSET(x_1,it); it=CALL(rw_AmethystTranslatorcb_4,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(trans_AmethystTranslatorcb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(trans_AmethystTranslatorcb_2,1,bind); 
 BSET(autovar_2,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_3,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_3,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystTranslatorcb_4,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystTranslatorcb_5,1,bind); 
 BSET(parent_1,it); it=CALL(trans_AmethystTranslatorcb_6,1,bind); 
 BSET(autovar_4,it); it=CALL(trans_AmethystTranslatorcb_7,1,bind); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(transs,0 ); FAILTEST(pass2);
 BSET(body_1,it); 
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
it=CALL(trans_AmethystTranslatorcb_8,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_9,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_5,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystTranslatorcb_10,1,bind);  arg0=CALL(trans_AmethystTranslatorcb_11,1,bind);arg1=CALL(trans_AmethystTranslatorcb_15,1,bind); it=CALL(rw,2 ,arg0,arg1); FAILTEST(pass3);it=CALL(trans_AmethystTranslatorcb_16,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_17,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_7,it); int oldpos6=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  arg0=CALL(trans_AmethystTranslatorcb_18,1,bind);arg1=CALL(trans_AmethystTranslatorcb_21,1,bind); it=CALL(rw,2 ,arg0,arg1); FAILTEST(pass5);
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos6); ame_setlen(self,oldlen5);
	if(fail5) goto alt1_4;
 arg0=CALL(trans_AmethystTranslatorcb_22,1,bind); it=CALL(failwrap,1 ,arg0); FAILTEST(alt1_4);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_23,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_9,it); int oldpos8=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystTranslatorcb_24,1,bind); 
 BSET(autovar_2,it); int oldpos9; while(1){oldpos9=ame_getpos(self);   it=CALL(trans,0 ); FAILTEST(break2);
 BSET(autovar_10,it); it=CALL(trans_AmethystTranslatorcb_25,1,bind);  if (IGET(stop)!=Qnil){{oldpos9=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos9); it=BGET(autovar_2);
 BSET(t_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos8); ame_setlen(self,oldlen6);
	if(fail6) goto alt1_5;
it=CALL(trans_AmethystTranslatorcb_26,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_27,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_11,it); int oldpos10=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(args,0 ); FAILTEST(pass7);
 BSET(t_1,it); it=CALL(trans_AmethystTranslatorcb_28,1,bind); 
 BSET(pred_1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos10); ame_setlen(self,oldlen7);
	if(fail7) goto alt1_6;
it=CALL(trans_AmethystTranslatorcb_29,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_30,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_7);
 BSET(autovar_12,it); int oldpos11=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_12)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystTranslatorcb_31,1,bind); 
 BSET(neg_1,it);  arg0=CALL(trans_AmethystTranslatorcb_32,1,bind);arg1=CALL(trans_AmethystTranslatorcb_33,1,bind); it=CALL(rw,2 ,arg0,arg1); FAILTEST(pass8);
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos11); ame_setlen(self,oldlen8);
	if(fail8) goto alt1_7;
 arg0=CALL(trans_AmethystTranslatorcb_34,1,bind); it=CALL(failwrap,1 ,arg0); FAILTEST(alt1_7);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_35,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_8);
 BSET(autovar_13,it); int oldpos12=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,BGET(autovar_13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass9);
	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos12); ame_setlen(self,oldlen9);
	if(fail9) goto alt1_8;
it=CALL(trans_AmethystTranslatorcb_36,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_37,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_9);
 BSET(autovar_14,it); int oldpos13=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,BGET(autovar_14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  arg0=CALL(trans_AmethystTranslatorcb_38,1,bind);arg1=CALL(trans_AmethystTranslatorcb_39,1,bind); it=CALL(rw,2 ,arg0,arg1); FAILTEST(pass10);it=CALL(trans_AmethystTranslatorcb_40,1,bind); 
 BSET(autovar_15,it); it=CALL(trans_AmethystTranslatorcb_41,1,bind); int oldpos14=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,BGET(autovar_15)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(arg,0 ); FAILTEST(pass11);
 BSET(o_1,it); 
	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos14); ame_setlen(self,oldlen11);
	if(fail11) goto pass10;

	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos13); ame_setlen(self,oldlen10);
	if(fail10) goto alt1_9;
it=CALL(trans_AmethystTranslatorcb_42,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_43,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_10);
 BSET(autovar_16,it); int oldpos15=ame_getpos(self); int oldlen12=ame_getlen(self); VALUE oldsrc12=ame_getsrc(self); int fail12=0;
ame_setsrc(self,BGET(autovar_16)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  arg0=CALL(trans_AmethystTranslatorcb_44,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(pass12);
 BSET(autovar_17,it); int oldpos16=ame_getpos(self); int oldlen13=ame_getlen(self); VALUE oldsrc13=ame_getsrc(self); int fail13=0;
ame_setsrc(self,BGET(autovar_17)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass13);  it=CALL(anything,0 ); FAILTEST(pass13);
 BSET(name_1,it); 
	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ame_setsrc(self,oldsrc13); ame_setpos(self,oldpos16); ame_setlen(self,oldlen13);
	if(fail13) goto pass12;
  it=CALL(args,0 ); FAILTEST(pass12);
 BSET(argss_1,it); 
	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ame_setsrc(self,oldsrc12); ame_setpos(self,oldpos15); ame_setlen(self,oldlen12);
	if(fail12) goto alt1_10;
 arg0=CALL(trans_AmethystTranslatorcb_45,1,bind); it=CALL(failwrap,1 ,arg0); FAILTEST(alt1_10);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_46,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_11);
 BSET(autovar_18,it); int oldpos17=ame_getpos(self); int oldlen14=ame_getlen(self); VALUE oldsrc14=ame_getsrc(self); int fail14=0;
ame_setsrc(self,BGET(autovar_18)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass14);
 BSET(name_1,it);   it=CALL(args,0 ); FAILTEST(pass14);
 BSET(argss_1,it); 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success14;
	pass14: fail14=1;
	success14: ame_setsrc(self,oldsrc14); ame_setpos(self,oldpos17); ame_setlen(self,oldlen14);
	if(fail14) goto alt1_11;
 arg0=CALL(trans_AmethystTranslatorcb_47,1,bind); it=CALL(failwrap,1 ,arg0); FAILTEST(alt1_11);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_48,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_12);
 BSET(autovar_19,it); int oldpos18=ame_getpos(self); int oldlen15=ame_getlen(self); VALUE oldsrc15=ame_getsrc(self); int fail15=0;
ame_setsrc(self,BGET(autovar_19)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystTranslatorcb_49,1,bind); 
 BSET(autovar_20,it); it=CALL(trans_AmethystTranslatorcb_50,1,bind); int oldpos19=ame_getpos(self); int oldlen16=ame_getlen(self); VALUE oldsrc16=ame_getsrc(self); int fail16=0;
ame_setsrc(self,BGET(autovar_20)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(arg,0 ); FAILTEST(pass16);
 BSET(name_1,it); 
	if (CALL(eof,0)==failobj) goto pass16;
	goto success16;
	pass16: fail16=1;
	success16: ame_setsrc(self,oldsrc16); ame_setpos(self,oldpos19); ame_setlen(self,oldlen16);
	if(fail16) goto pass15;
it=CALL(trans_AmethystTranslatorcb_51,1,bind); 
 BSET(autovar_21,it); it=CALL(trans_AmethystTranslatorcb_52,1,bind); int oldpos20=ame_getpos(self); int oldlen17=ame_getlen(self); VALUE oldsrc17=ame_getsrc(self); int fail17=0;
ame_setsrc(self,BGET(autovar_21)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass17);
 BSET(expr_1,it); 
	if (CALL(eof,0)==failobj) goto pass17;
	goto success17;
	pass17: fail17=1;
	success17: ame_setsrc(self,oldsrc17); ame_setpos(self,oldpos20); ame_setlen(self,oldlen17);
	if(fail17) goto pass15;

	if (CALL(eof,0)==failobj) goto pass15;
	goto success15;
	pass15: fail15=1;
	success15: ame_setsrc(self,oldsrc15); ame_setpos(self,oldpos18); ame_setlen(self,oldlen15);
	if(fail15) goto alt1_12;
it=CALL(trans_AmethystTranslatorcb_53,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_12: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_54,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_13);
 BSET(autovar_22,it); int oldpos21=ame_getpos(self); int oldlen18=ame_getlen(self); VALUE oldsrc18=ame_getsrc(self); int fail18=0;
ame_setsrc(self,BGET(autovar_22)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(trans_AmethystTranslatorcb_55,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystTranslatorcb_56,1,bind); 
 BSET(autovar_23,it); it=CALL(trans_AmethystTranslatorcb_57,1,bind); int oldpos22=ame_getpos(self); int oldlen19=ame_getlen(self); VALUE oldsrc19=ame_getsrc(self); int fail19=0;
ame_setsrc(self,BGET(autovar_23)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(args,0 ); FAILTEST(pass19);
 BSET(argss_1,it); 
	if (CALL(eof,0)==failobj) goto pass19;
	goto success19;
	pass19: fail19=1;
	success19: ame_setsrc(self,oldsrc19); ame_setpos(self,oldpos22); ame_setlen(self,oldlen19);
	if(fail19) goto pass18;
it=CALL(trans_AmethystTranslatorcb_58,1,bind); 
 BSET(vars_1,it); 
	if (CALL(eof,0)==failobj) goto pass18;
	goto success18;
	pass18: fail18=1;
	success18: ame_setsrc(self,oldsrc18); ame_setpos(self,oldpos21); ame_setlen(self,oldlen18);
	if(fail18) goto alt1_13;
it=CALL(trans_AmethystTranslatorcb_59,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_13: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_60,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_14);
 BSET(autovar_24,it); int oldpos23=ame_getpos(self); int oldlen20=ame_getlen(self); VALUE oldsrc20=ame_getsrc(self); int fail20=0;
ame_setsrc(self,BGET(autovar_24)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos24; while(1){oldpos24=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldpos24=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos24); it=CALL(trans_AmethystTranslatorcb_61,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass20;
	goto success20;
	pass20: fail20=1;
	success20: ame_setsrc(self,oldsrc20); ame_setpos(self,oldpos23); ame_setlen(self,oldlen20);
	if(fail20) goto alt1_14;
 
ISET(cut,Qnil);goto accept1;
alt1_14: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_62,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_15);
 BSET(autovar_25,it); int oldpos25=ame_getpos(self); int oldlen21=ame_getlen(self); VALUE oldsrc21=ame_getsrc(self); int fail21=0;
ame_setsrc(self,BGET(autovar_25)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  arg0=CALL(trans_AmethystTranslatorcb_63,1,bind);arg1=CALL(trans_AmethystTranslatorcb_68,1,bind); it=CALL(rw,2 ,arg0,arg1); FAILTEST(pass21);
	if (CALL(eof,0)==failobj) goto pass21;
	goto success21;
	pass21: fail21=1;
	success21: ame_setsrc(self,oldsrc21); ame_setpos(self,oldpos25); ame_setlen(self,oldlen21);
	if(fail21) goto alt1_15;
 arg0=CALL(trans_AmethystTranslatorcb_69,1,bind); it=CALL(failwrap,1 ,arg0); FAILTEST(alt1_15);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_15: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_70,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_16);
 BSET(autovar_28,it); int oldpos28=ame_getpos(self); int oldlen24=ame_getlen(self); VALUE oldsrc24=ame_getsrc(self); int fail24=0;
ame_setsrc(self,BGET(autovar_28)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 
	if (CALL(eof,0)==failobj) goto pass24;
	goto success24;
	pass24: fail24=1;
	success24: ame_setsrc(self,oldsrc24); ame_setpos(self,oldpos28); ame_setlen(self,oldlen24);
	if(fail24) goto alt1_16;
it=CALL(trans_AmethystTranslatorcb_71,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_16: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystTranslatorcb_72,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_17);
 BSET(autovar_29,it); int oldpos29=ame_getpos(self); int oldlen25=ame_getlen(self); VALUE oldsrc25=ame_getsrc(self); int fail25=0;
ame_setsrc(self,BGET(autovar_29)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 
	if (CALL(eof,0)==failobj) goto pass25;
	goto success25;
	pass25: fail25=1;
	success25: ame_setsrc(self,oldsrc25); ame_setpos(self,oldpos29); ame_setlen(self,oldlen25);
	if(fail25) goto alt1_17;
it=CALL(trans_AmethystTranslatorcb_73,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_17:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_transfn(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(trans,0 ); FAILTEST(fail);
 BSET(t_1,it); it=CALL(transfn_AmethystTranslatorcb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_transs(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(transs_AmethystTranslatorcb_1,1,bind); 
 BSET(autovar_1,it);   it=CALL(anything,0 ); FAILTEST(fail);
 BSET(autovar_2,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(transs_AmethystTranslatorcb_2,1,bind); 
 BSET(autovar_1,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=CALL(trans,0 ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(transs_AmethystTranslatorcb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_1);
 BSET(t_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(t_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }VALUE AmethystTranslator_trans_lambda1(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
it=CALL(trans_AmethystTranslatorcb_12,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystTranslatorcb_13,1,bind); 
 BSET(autovar_6,it); it=CALL(trans_AmethystTranslatorcb_14,1,bind); int oldpos5=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass4);
 BSET(body_1,it); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos5); ame_setlen(self,oldlen4);
	if(fail4) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_trans_lambda2(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
it=CALL(trans_AmethystTranslatorcb_19,1,bind); 
 BSET(autovar_1,it); int oldpos7; while(1){oldpos7=ame_getpos(self);   it=CALL(transfn,0 ); FAILTEST(break1);
 BSET(autovar_8,it); it=CALL(trans_AmethystTranslatorcb_20,1,bind);  if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=BGET(autovar_1);
 BSET(ors_1,it); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_trans_lambda3(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
  it=CALL(trans,0 ); FAILTEST(fail);
 BSET(t_1,it); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_trans_lambda4(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
  it=CALL(trans,0 ); FAILTEST(fail);
 BSET(t_1,it); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystTranslator_trans_lambda5(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
it=CALL(trans_AmethystTranslatorcb_64,1,bind); 
 BSET(autovar_26,it); it=CALL(trans_AmethystTranslatorcb_65,1,bind); int oldpos26=ame_getpos(self); int oldlen22=ame_getlen(self); VALUE oldsrc22=ame_getsrc(self); int fail22=0;
ame_setsrc(self,BGET(autovar_26)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass22);
 BSET(to_1,it); 
	if (CALL(eof,0)==failobj) goto pass22;
	goto success22;
	pass22: fail22=1;
	success22: ame_setsrc(self,oldsrc22); ame_setpos(self,oldpos26); ame_setlen(self,oldlen22);
	if(fail22) goto fail;
it=CALL(trans_AmethystTranslatorcb_66,1,bind); 
 BSET(autovar_27,it); it=CALL(trans_AmethystTranslatorcb_67,1,bind); int oldpos27=ame_getpos(self); int oldlen23=ame_getlen(self); VALUE oldsrc23=ame_getsrc(self); int fail23=0;
ame_setsrc(self,BGET(autovar_27)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(arg,0 ); FAILTEST(pass23);
 BSET(var_1,it); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass23;
	goto success23;
	pass23: fail23=1;
	success23: ame_setsrc(self,oldsrc23); ame_setpos(self,oldpos27); ame_setlen(self,oldlen23);
	if(fail23) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
void Init_translator_c(){ 
 cls_AmethystTranslator=rb_define_class("AmethystTranslator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystTranslator,"AmethystTranslator_trans_lambda1",AmethystTranslator_trans_lambda1,1);
rb_define_method(cls_AmethystTranslator,"AmethystTranslator_trans_lambda2",AmethystTranslator_trans_lambda2,1);
rb_define_method(cls_AmethystTranslator,"AmethystTranslator_trans_lambda3",AmethystTranslator_trans_lambda3,1);
rb_define_method(cls_AmethystTranslator,"AmethystTranslator_trans_lambda4",AmethystTranslator_trans_lambda4,1);
rb_define_method(cls_AmethystTranslator,"AmethystTranslator_trans_lambda5",AmethystTranslator_trans_lambda5,1);
rb_define_method(cls_AmethystTranslator,"arg",AmethystTranslator_arg,0);
rb_define_method(cls_AmethystTranslator,"args",AmethystTranslator_args,0);
rb_define_method(cls_AmethystTranslator,"failwrap",AmethystTranslator_failwrap,1);
rb_define_method(cls_AmethystTranslator,"itrans",AmethystTranslator_itrans,0);
rb_define_method(cls_AmethystTranslator,"rw",AmethystTranslator_rw,2);
rb_define_method(cls_AmethystTranslator,"trans",AmethystTranslator_trans,0);
rb_define_method(cls_AmethystTranslator,"transfn",AmethystTranslator_transfn,0);
rb_define_method(cls_AmethystTranslator,"transs",AmethystTranslator_transs,0);
 }
