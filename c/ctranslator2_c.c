#include "cthyst.h"
VALUE cls_AmethystCTranslator;
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0);
VALUE AmethystCTranslator_addlambda(VALUE self );
VALUE AmethystCTranslator_addlambda_lambda1(VALUE self,VALUE bind);
VALUE AmethystCTranslator_failwrap(VALUE self ,VALUE a0);
VALUE AmethystCTranslator_itrans(VALUE self );
VALUE AmethystCTranslator_rbcode(VALUE self );
VALUE AmethystCTranslator_rbtrans(VALUE self );
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystCTranslator_trans(VALUE self );
VALUE AmethystCTranslator_trans_lambda1(VALUE self,VALUE bind);
VALUE AmethystCTranslator_trans_lambda2(VALUE self,VALUE bind);
VALUE AmethystCTranslator_trans_lambda3(VALUE self,VALUE bind);
VALUE AmethystCTranslator_trans_lambda4(VALUE self,VALUE bind);
VALUE AmethystCTranslator_transfn(VALUE self );
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(s_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=BGET(s_1);
 BSET(autovar_1,it); VALUE oldinput1=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,rb_ary_new3(1,BGET(autovar_1))); ISET(input,INT2FIX(0));
   it=CALL(rbtrans,0 ); FAILTEST(pass1);
 BSET(s_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput1);
	if(fail1) goto fail;
it=CALL(addcallback_AmethystCTranslatorcb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_addlambda(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(addlambda_AmethystCTranslatorcb_1,1,bind); 
 BSET(lambd_1,it);  arg0=CALL(addlambda_AmethystCTranslatorcb_2,1,bind);arg1=CALL(addlambda_AmethystCTranslatorcb_3,1,bind); it=CALL(rw,2 ,arg0,arg1); FAILTEST(fail);it=CALL(addlambda_AmethystCTranslatorcb_4,1,bind); it=CALL(addlambda_AmethystCTranslatorcb_5,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_failwrap(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(s_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(failwrap_AmethystCTranslatorcb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(itrans_AmethystCTranslatorcb_1,1,bind); 
 BSET(ruby_1,it); it=CALL(itrans_AmethystCTranslatorcb_2,1,bind); 
 BSET(c_1,it); it=CALL(itrans_AmethystCTranslatorcb_3,1,bind); 
 BSET(init_1,it); VALUE oldinput1; while(1){oldinput1=IGET(input); VALUE oldinput2=IGET(input);
alt1_1: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(char,0 ); FAILTEST(alt1_2);
 BSET(autovar_1,it); it=CALL(itrans_AmethystCTranslatorcb_4,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(trans,0 ); FAILTEST(alt1_3);
 BSET(it_1,it); it=CALL(itrans_AmethystCTranslatorcb_5,1,bind);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput2); goto break1;
 accept1:;
 if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=CALL(itrans_AmethystCTranslatorcb_6,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbcode(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(rbcode_AmethystCTranslatorcb_1,1,bind); 
 BSET(s_1,it); it=CALL(rbcode_AmethystCTranslatorcb_2,1,bind); 
 BSET(autovar_1,it); VALUE oldinput1=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,rb_ary_new3(1,BGET(autovar_1))); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass1);
 BSET(autovar_2,it); VALUE oldinput2=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_2)); ISET(input,INT2FIX(0));
 it=CALL(rbcode_AmethystCTranslatorcb_3,1,bind); 
 BSET(autovar_3,it); VALUE oldinput3; while(1){oldinput3=IGET(input);   it=CALL(anything,0 ); FAILTEST(break1);
 BSET(autovar_4,it); VALUE oldinput4=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass3);
 BSET(k_1,it);   it=CALL(anything,0 ); FAILTEST(pass3);
 BSET(v_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ISET(input,oldinput4);
	if(fail3) goto break1;
it=CALL(rbcode_AmethystCTranslatorcb_4,1,bind); 
 BSET(autovar_5,it); it=CALL(rbcode_AmethystCTranslatorcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldinput3=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput3); it=BGET(autovar_3);
 BSET(x_1,it); 
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
it=CALL(rbcode_AmethystCTranslatorcb_6,1,bind); it=CALL(rbcode_AmethystCTranslatorcb_7,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rbtrans_AmethystCTranslatorcb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 VALUE oldinput3; while(1){oldinput3=IGET(input);   it=CALL(anything,0 ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldinput3=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput3); it=CALL(rbtrans_AmethystCTranslatorcb_2,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rbtrans_AmethystCTranslatorcb_3,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_2,it); VALUE oldinput4=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_2)); ISET(input,INT2FIX(0));
 it=CALL(rbtrans_AmethystCTranslatorcb_4,1,bind); 
 BSET(autovar_3,it); VALUE oldinput5; while(1){oldinput5=IGET(input);   it=CALL(rbtrans,0 ); FAILTEST(break2);
 BSET(autovar_4,it); it=CALL(rbtrans_AmethystCTranslatorcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldinput5=IGET(input);goto break2;} } } break2: ISET(stop,Qnil);  ISET(input,oldinput5); it=BGET(autovar_3);
 BSET(a_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput4);
	if(fail2) goto alt1_3;
it=CALL(rbtrans_AmethystCTranslatorcb_6,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rbtrans_AmethystCTranslatorcb_7,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_5,it); VALUE oldinput6=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,BGET(autovar_5)); ISET(input,INT2FIX(0));
 it=CALL(rbtrans_AmethystCTranslatorcb_8,1,bind); 
 BSET(autovar_6,it); VALUE oldinput7; while(1){oldinput7=IGET(input);   it=CALL(rbtrans,0 ); FAILTEST(break3);
 BSET(autovar_7,it); it=CALL(rbtrans_AmethystCTranslatorcb_9,1,bind);  if (IGET(stop)!=Qnil){{oldinput7=IGET(input);goto break3;} } } break3: ISET(stop,Qnil);  ISET(input,oldinput7); it=BGET(autovar_6);
 BSET(a_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ISET(input,oldinput6);
	if(fail3) goto alt1_4;
it=CALL(rbtrans_AmethystCTranslatorcb_10,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rbtrans_AmethystCTranslatorcb_11,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_8,it); VALUE oldinput8=IGET(input);  VALUE oldsrc4=IGET(src); int fail4=0;
ISET(src,BGET(autovar_8)); ISET(input,INT2FIX(0));
 it=CALL(rbtrans_AmethystCTranslatorcb_12,1,bind); 
 BSET(autovar_9,it); VALUE oldinput9; while(1){oldinput9=IGET(input);   it=CALL(rbtrans,0 ); FAILTEST(break4);
 BSET(autovar_10,it); it=CALL(rbtrans_AmethystCTranslatorcb_13,1,bind);  if (IGET(stop)!=Qnil){{oldinput9=IGET(input);goto break4;} } } break4: ISET(stop,Qnil);  ISET(input,oldinput9); it=BGET(autovar_9);
 BSET(a_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ISET(src,oldsrc4); ISET(input,oldinput8);
	if(fail4) goto alt1_5;
it=CALL(rbtrans_AmethystCTranslatorcb_14,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rbtrans_AmethystCTranslatorcb_15,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_11,it); VALUE oldinput10=IGET(input);  VALUE oldsrc5=IGET(src); int fail5=0;
ISET(src,BGET(autovar_11)); ISET(input,INT2FIX(0));
 it=CALL(rbtrans_AmethystCTranslatorcb_16,1,bind); 
 BSET(name_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ISET(src,oldsrc5); ISET(input,oldinput10);
	if(fail5) goto alt1_6;
it=CALL(rbtrans_AmethystCTranslatorcb_17,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rbtrans_AmethystCTranslatorcb_18,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_7);
 BSET(autovar_12,it); VALUE oldinput11=IGET(input);  VALUE oldsrc6=IGET(src); int fail6=0;
ISET(src,BGET(autovar_12)); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass6);
 BSET(name_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ISET(src,oldsrc6); ISET(input,oldinput11);
	if(fail6) goto alt1_7;
it=CALL(rbtrans_AmethystCTranslatorcb_19,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(rbtrans_AmethystCTranslatorcb_20,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_8);
 BSET(autovar_13,it); VALUE oldinput12=IGET(input);  VALUE oldsrc7=IGET(src); int fail7=0;
ISET(src,BGET(autovar_13)); ISET(input,INT2FIX(0));
   it=CALL(addlambda,0 ); FAILTEST(pass7);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ISET(src,oldsrc7); ISET(input,oldinput12);
	if(fail7) goto alt1_8;
 
ISET(cut,Qnil);goto accept1;
alt1_8: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_9);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_9:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(word_1,a0);BSET(prc_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(rw_AmethystCTranslatorcb_1,1,bind); 
 BSET(rwo_1,it); it=CALL(rw_AmethystCTranslatorcb_2,1,bind);  arg0=CALL(rw_AmethystCTranslatorcb_3,1,bind); it=CALL(apply,1 ,arg0); FAILTEST(fail);
 BSET(x_1,it); it=CALL(rw_AmethystCTranslatorcb_4,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 it=CALL(trans_AmethystCTranslatorcb_2,1,bind); it=CALL(trans_AmethystCTranslatorcb_3,1,bind); it=CALL(trans_AmethystCTranslatorcb_4,1,bind); it=CALL(trans_AmethystCTranslatorcb_5,1,bind); it=CALL(trans_AmethystCTranslatorcb_6,1,bind); it=CALL(trans_AmethystCTranslatorcb_7,1,bind); it=CALL(trans_AmethystCTranslatorcb_8,1,bind); it=CALL(trans_AmethystCTranslatorcb_9,1,bind); 
 BSET(autovar_2,it); VALUE oldinput3=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,rb_ary_new3(1,BGET(autovar_2))); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass2);
 BSET(autovar_3,it); VALUE oldinput4=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,BGET(autovar_3)); ISET(input,INT2FIX(0));
 it=CALL(trans_AmethystCTranslatorcb_10,1,bind); 
 BSET(autovar_4,it); VALUE oldinput5; while(1){oldinput5=IGET(input);   it=CALL(trans,0 ); FAILTEST(break1);
 BSET(autovar_5,it); it=CALL(trans_AmethystCTranslatorcb_11,1,bind);  if (IGET(stop)!=Qnil){{oldinput5=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput5); it=BGET(autovar_4);
 BSET(t_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ISET(input,oldinput4);
	if(fail3) goto pass2;

	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput3);
	if(fail2) goto pass1;
  it=CALL(rbcode,0 ); FAILTEST(pass1);
 BSET(rbcode_1,it); it=CALL(trans_AmethystCTranslatorcb_12,1,bind); 
 BSET(s_1,it); it=CALL(trans_AmethystCTranslatorcb_13,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_14,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_6,it); VALUE oldinput6=IGET(input);  VALUE oldsrc4=IGET(src); int fail4=0;
ISET(src,BGET(autovar_6)); ISET(input,INT2FIX(0));
 it=CALL(trans_AmethystCTranslatorcb_15,1,bind); 
 BSET(name_1,it); it=CALL(trans_AmethystCTranslatorcb_16,1,bind); it=CALL(trans_AmethystCTranslatorcb_17,1,bind); 
 BSET(autovar_7,it); VALUE oldinput7=IGET(input);  VALUE oldsrc5=IGET(src); int fail5=0;
ISET(src,rb_ary_new3(1,BGET(autovar_7))); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass5);
 BSET(body_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ISET(src,oldsrc5); ISET(input,oldinput7);
	if(fail5) goto pass4;
it=CALL(trans_AmethystCTranslatorcb_18,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ISET(src,oldsrc4); ISET(input,oldinput6);
	if(fail4) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_19,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_8,it); VALUE oldinput8=IGET(input);  VALUE oldsrc6=IGET(src); int fail6=0;
ISET(src,BGET(autovar_8)); ISET(input,INT2FIX(0));
 it=CALL(trans_AmethystCTranslatorcb_20,1,bind); 
 BSET(autovar_9,it); VALUE oldinput9; while(1){oldinput9=IGET(input);   it=CALL(anything,0 ); FAILTEST(break2);
 BSET(autovar_10,it); it=CALL(trans_AmethystCTranslatorcb_21,1,bind);  if (IGET(stop)!=Qnil){{oldinput9=IGET(input);goto break2;} } } break2: ISET(stop,Qnil);  ISET(input,oldinput9); it=BGET(autovar_9);
 BSET(it_1,it); it=CALL(trans_AmethystCTranslatorcb_22,1,bind); 
 BSET(cbno_1,it); it=CALL(trans_AmethystCTranslatorcb_23,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ISET(src,oldsrc6); ISET(input,oldinput8);
	if(fail6) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_24,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_11,it); VALUE oldinput10=IGET(input);  VALUE oldsrc7=IGET(src); int fail7=0;
ISET(src,BGET(autovar_11)); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass7);
 BSET(autovar_12,it); VALUE oldinput11=IGET(input);  VALUE oldsrc8=IGET(src); int fail8=0;
ISET(src,rb_ary_new3(1,BGET(autovar_12))); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass8);
 BSET(autovar_13,it); VALUE oldinput12=IGET(input);  VALUE oldsrc9=IGET(src); int fail9=0;
ISET(src,BGET(autovar_13)); ISET(input,INT2FIX(0));
  arg0=CALL(trans_AmethystCTranslatorcb_25,1,bind); it=CALL(token,1 ,arg0); FAILTEST(pass9);
	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ISET(src,oldsrc9); ISET(input,oldinput12);
	if(fail9) goto pass8;

	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ISET(src,oldsrc8); ISET(input,oldinput11);
	if(fail8) goto pass7;
it=CALL(trans_AmethystCTranslatorcb_26,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ISET(src,oldsrc7); ISET(input,oldinput10);
	if(fail7) goto alt1_5;
 
ISET(cut,Qnil);goto accept1;
alt1_5: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_27,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_14,it); VALUE oldinput13=IGET(input);  VALUE oldsrc10=IGET(src); int fail10=0;
ISET(src,BGET(autovar_14)); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass10);
 BSET(name_1,it); it=CALL(trans_AmethystCTranslatorcb_28,1,bind); 
 BSET(autovar_15,it); VALUE oldinput14; while(1){oldinput14=IGET(input);   it=CALL(anything,0 ); FAILTEST(break3);
 BSET(it_1,it); it=CALL(trans_AmethystCTranslatorcb_29,1,bind); 
 BSET(autovar_16,it); it=CALL(trans_AmethystCTranslatorcb_30,1,bind);  if (IGET(stop)!=Qnil){{oldinput14=IGET(input);goto break3;} } } break3: ISET(stop,Qnil);  ISET(input,oldinput14); it=BGET(autovar_15);
 BSET(args_1,it);  arg0=CALL(trans_AmethystCTranslatorcb_31,1,bind); it=CALL(failwrap,1 ,arg0); FAILTEST(pass10);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ISET(src,oldsrc10); ISET(input,oldinput13);
	if(fail10) goto alt1_6;
 
ISET(cut,Qnil);goto accept1;
alt1_6: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_32,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_7);
 BSET(autovar_17,it); VALUE oldinput15=IGET(input);  VALUE oldsrc11=IGET(src); int fail11=0;
ISET(src,BGET(autovar_17)); ISET(input,INT2FIX(0));
 it=CALL(trans_AmethystCTranslatorcb_33,1,bind); 
 BSET(autovar_18,it); VALUE oldinput16; while(1){oldinput16=IGET(input);   it=CALL(trans,0 ); FAILTEST(break4);
 BSET(autovar_19,it); it=CALL(trans_AmethystCTranslatorcb_34,1,bind);  if (IGET(stop)!=Qnil){{oldinput16=IGET(input);goto break4;} } } break4: ISET(stop,Qnil);  ISET(input,oldinput16); it=BGET(autovar_18);
 BSET(t_1,it); it=CALL(trans_AmethystCTranslatorcb_35,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ISET(src,oldsrc11); ISET(input,oldinput15);
	if(fail11) goto alt1_7;
 
ISET(cut,Qnil);goto accept1;
alt1_7: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_36,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_8);
 BSET(autovar_20,it); VALUE oldinput17=IGET(input);  VALUE oldsrc12=IGET(src); int fail12=0;
ISET(src,BGET(autovar_20)); ISET(input,INT2FIX(0));
 it=CALL(trans_AmethystCTranslatorcb_37,1,bind); 
 BSET(autovar_21,it); VALUE oldinput18=IGET(input);  VALUE oldsrc13=IGET(src); int fail13=0;
ISET(src,rb_ary_new3(1,BGET(autovar_21))); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass13);
 BSET(e_1,it); 
	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ISET(src,oldsrc13); ISET(input,oldinput18);
	if(fail13) goto pass12;
it=CALL(trans_AmethystCTranslatorcb_38,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ISET(src,oldsrc12); ISET(input,oldinput17);
	if(fail12) goto alt1_8;
 
ISET(cut,Qnil);goto accept1;
alt1_8: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_39,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_9);
 BSET(autovar_22,it); VALUE oldinput19=IGET(input);  VALUE oldsrc14=IGET(src); int fail14=0;
ISET(src,BGET(autovar_22)); ISET(input,INT2FIX(0));
 it=CALL(trans_AmethystCTranslatorcb_40,1,bind); 
 BSET(accept_1,it); it=CALL(trans_AmethystCTranslatorcb_41,1,bind); 
 BSET(fail_1,it); it=CALL(trans_AmethystCTranslatorcb_42,1,bind); 
 BSET(oldinput_1,it);  arg0=CALL(trans_AmethystCTranslatorcb_43,1,bind); it=CALL(label,1 ,arg0); FAILTEST(pass14);
 BSET(alt_1,it); it=CALL(trans_AmethystCTranslatorcb_44,1,bind); 
 BSET(altno_1,it); it=CALL(trans_AmethystCTranslatorcb_45,1,bind); 
 BSET(autovar_23,it); VALUE oldinput20; while(1){oldinput20=IGET(input); VALUE oldinput21=IGET(input);
   it=CALL(anything,0 ); FAILTEST(reject1); x=1; goto accept2;  reject1: x=0; accept2: it=Qnil; ISET(input,oldinput21); if (x==0) goto break5;it=CALL(trans_AmethystCTranslatorcb_46,1,bind);  arg0=CALL(trans_AmethystCTranslatorcb_47,1,bind);arg1=CALL(trans_AmethystCTranslatorcb_48,1,bind); it=CALL(rw,2 ,arg0,arg1); FAILTEST(break5);
 BSET(autovar_24,it); it=CALL(trans_AmethystCTranslatorcb_49,1,bind);  if (IGET(stop)!=Qnil){{oldinput20=IGET(input);goto break5;} } } break5: ISET(stop,Qnil);  ISET(input,oldinput20); it=BGET(autovar_23);
 BSET(t_1,it); it=CALL(trans_AmethystCTranslatorcb_50,1,bind); it=CALL(trans_AmethystCTranslatorcb_51,1,bind); it=CALL(trans_AmethystCTranslatorcb_52,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success14;
	pass14: fail14=1;
	success14: ISET(src,oldsrc14); ISET(input,oldinput19);
	if(fail14) goto alt1_9;
 
ISET(cut,Qnil);goto accept1;
alt1_9: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_53,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_10);
 BSET(autovar_25,it); VALUE oldinput22=IGET(input);  VALUE oldsrc15=IGET(src); int fail15=0;
ISET(src,BGET(autovar_25)); ISET(input,INT2FIX(0));
 
	if (CALL(eof,0)==failobj) goto pass15;
	goto success15;
	pass15: fail15=1;
	success15: ISET(src,oldsrc15); ISET(input,oldinput22);
	if(fail15) goto alt1_10;
it=CALL(trans_AmethystCTranslatorcb_54,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_10: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_55,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_11);
 BSET(autovar_26,it); VALUE oldinput23=IGET(input);  VALUE oldsrc16=IGET(src); int fail16=0;
ISET(src,BGET(autovar_26)); ISET(input,INT2FIX(0));
 
	if (CALL(eof,0)==failobj) goto pass16;
	goto success16;
	pass16: fail16=1;
	success16: ISET(src,oldsrc16); ISET(input,oldinput23);
	if(fail16) goto alt1_11;
it=CALL(trans_AmethystCTranslatorcb_56,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_11: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_57,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_12);
 BSET(autovar_27,it); VALUE oldinput24=IGET(input);  VALUE oldsrc17=IGET(src); int fail17=0;
ISET(src,BGET(autovar_27)); ISET(input,INT2FIX(0));
 it=CALL(trans_AmethystCTranslatorcb_58,1,bind); 
 BSET(brk_1,it); it=CALL(trans_AmethystCTranslatorcb_59,1,bind); 
 BSET(oldinput_1,it);  arg0=CALL(trans_AmethystCTranslatorcb_60,1,bind);arg1=CALL(trans_AmethystCTranslatorcb_61,1,bind); it=CALL(rw,2 ,arg0,arg1); FAILTEST(pass17);it=CALL(trans_AmethystCTranslatorcb_62,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass17;
	goto success17;
	pass17: fail17=1;
	success17: ISET(src,oldsrc17); ISET(input,oldinput24);
	if(fail17) goto alt1_12;
 
ISET(cut,Qnil);goto accept1;
alt1_12: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_63,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_13);
 BSET(autovar_28,it); VALUE oldinput25=IGET(input);  VALUE oldsrc18=IGET(src); int fail18=0;
ISET(src,BGET(autovar_28)); ISET(input,INT2FIX(0));
 it=CALL(trans_AmethystCTranslatorcb_64,1,bind); 
 BSET(accept_1,it); it=CALL(trans_AmethystCTranslatorcb_65,1,bind); 
 BSET(reject_1,it); it=CALL(trans_AmethystCTranslatorcb_66,1,bind); 
 BSET(oldinput_1,it);  arg0=CALL(trans_AmethystCTranslatorcb_67,1,bind);arg1=CALL(trans_AmethystCTranslatorcb_68,1,bind); it=CALL(rw,2 ,arg0,arg1); FAILTEST(pass18);it=CALL(trans_AmethystCTranslatorcb_69,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass18;
	goto success18;
	pass18: fail18=1;
	success18: ISET(src,oldsrc18); ISET(input,oldinput25);
	if(fail18) goto alt1_13;
 
ISET(cut,Qnil);goto accept1;
alt1_13: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_70,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_14);
 BSET(autovar_29,it); VALUE oldinput26=IGET(input);  VALUE oldsrc19=IGET(src); int fail19=0;
ISET(src,BGET(autovar_29)); ISET(input,INT2FIX(0));
 VALUE oldinput27; while(1){oldinput27=IGET(input);   it=CALL(anything,0 ); FAILTEST(break6); if (IGET(stop)!=Qnil){{oldinput27=IGET(input);goto break6;} } } break6: ISET(stop,Qnil);  ISET(input,oldinput27); it=CALL(trans_AmethystCTranslatorcb_71,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass19;
	goto success19;
	pass19: fail19=1;
	success19: ISET(src,oldsrc19); ISET(input,oldinput26);
	if(fail19) goto alt1_14;
 
ISET(cut,Qnil);goto accept1;
alt1_14: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_72,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_15);
 BSET(autovar_30,it); VALUE oldinput28=IGET(input);  VALUE oldsrc20=IGET(src); int fail20=0;
ISET(src,BGET(autovar_30)); ISET(input,INT2FIX(0));
 it=CALL(trans_AmethystCTranslatorcb_73,1,bind); 
 BSET(autovar_31,it); VALUE oldinput29=IGET(input);  VALUE oldsrc21=IGET(src); int fail21=0;
ISET(src,rb_ary_new3(1,BGET(autovar_31))); ISET(input,INT2FIX(0));
   it=CALL(rbtrans,0 ); FAILTEST(pass21);
 BSET(argss_1,it); 
	if (CALL(eof,0)==failobj) goto pass21;
	goto success21;
	pass21: fail21=1;
	success21: ISET(src,oldsrc21); ISET(input,oldinput29);
	if(fail21) goto pass20;
it=CALL(trans_AmethystCTranslatorcb_74,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass20;
	goto success20;
	pass20: fail20=1;
	success20: ISET(src,oldsrc20); ISET(input,oldinput28);
	if(fail20) goto alt1_15;
 
ISET(cut,Qnil);goto accept1;
alt1_15: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystCTranslatorcb_75,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_16);
 BSET(autovar_32,it); VALUE oldinput30=IGET(input);  VALUE oldsrc22=IGET(src); int fail22=0;
ISET(src,BGET(autovar_32)); ISET(input,INT2FIX(0));
  arg0=CALL(trans_AmethystCTranslatorcb_76,1,bind); it=CALL(label,1 ,arg0); FAILTEST(pass22);
 BSET(pass_1,it);  arg0=CALL(trans_AmethystCTranslatorcb_77,1,bind); it=CALL(label,1 ,arg0); FAILTEST(pass22);
 BSET(oldinput_1,it);  arg0=CALL(trans_AmethystCTranslatorcb_78,1,bind); it=CALL(label,1 ,arg0); FAILTEST(pass22);
 BSET(oldsrc_1,it);  arg0=CALL(trans_AmethystCTranslatorcb_79,1,bind); it=CALL(label,1 ,arg0); FAILTEST(pass22);
 BSET(success_1,it);  arg0=CALL(trans_AmethystCTranslatorcb_80,1,bind); it=CALL(label,1 ,arg0); FAILTEST(pass22);
 BSET(fail_1,it);  arg0=CALL(trans_AmethystCTranslatorcb_81,1,bind);arg1=CALL(trans_AmethystCTranslatorcb_83,1,bind); it=CALL(rw,2 ,arg0,arg1); FAILTEST(pass22);it=CALL(trans_AmethystCTranslatorcb_84,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass22;
	goto success22;
	pass22: fail22=1;
	success22: ISET(src,oldsrc22); ISET(input,oldinput30);
	if(fail22) goto alt1_16;
 
ISET(cut,Qnil);goto accept1;
  alt1_16:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_transfn(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(trans,0 ); FAILTEST(fail);
 BSET(t_1,it); it=CALL(transfn_AmethystCTranslatorcb_1,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }VALUE AmethystCTranslator_trans_lambda1(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
  it=CALL(trans,0 ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_trans_lambda2(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
  it=CALL(trans,0 ); FAILTEST(fail);
 BSET(t_1,it); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_trans_lambda3(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
  it=CALL(trans,0 ); FAILTEST(fail);
 BSET(t_1,it); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_trans_lambda4(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
it=CALL(trans_AmethystCTranslatorcb_82,1,bind); 
 BSET(autovar_33,it); VALUE oldinput31=IGET(input);  VALUE oldsrc23=IGET(src); int fail23=0;
ISET(src,rb_ary_new3(1,BGET(autovar_33))); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass23);
 BSET(to_1,it); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass23;
	goto success23;
	pass23: fail23=1;
	success23: ISET(src,oldsrc23); ISET(input,oldinput31);
	if(fail23) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystCTranslator_addlambda_lambda1(VALUE self,VALUE bind){VALUE vals[0]; /*todo unify with rule and get args*/  int x;VALUE it;VALUE arg0,arg1,arg2,arg3;
  it=CALL(trans,0 ); FAILTEST(fail);
 BSET(body_1,it); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
void Init_ctranslator2_c(){ 
 cls_AmethystCTranslator=rb_define_class("AmethystCTranslator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystCTranslator,"AmethystCTranslator_addlambda_lambda1",AmethystCTranslator_addlambda_lambda1,1);
rb_define_method(cls_AmethystCTranslator,"AmethystCTranslator_trans_lambda1",AmethystCTranslator_trans_lambda1,1);
rb_define_method(cls_AmethystCTranslator,"AmethystCTranslator_trans_lambda2",AmethystCTranslator_trans_lambda2,1);
rb_define_method(cls_AmethystCTranslator,"AmethystCTranslator_trans_lambda3",AmethystCTranslator_trans_lambda3,1);
rb_define_method(cls_AmethystCTranslator,"AmethystCTranslator_trans_lambda4",AmethystCTranslator_trans_lambda4,1);
rb_define_method(cls_AmethystCTranslator,"addcallback",AmethystCTranslator_addcallback,1);
rb_define_method(cls_AmethystCTranslator,"addlambda",AmethystCTranslator_addlambda,0);
rb_define_method(cls_AmethystCTranslator,"failwrap",AmethystCTranslator_failwrap,1);
rb_define_method(cls_AmethystCTranslator,"itrans",AmethystCTranslator_itrans,0);
rb_define_method(cls_AmethystCTranslator,"rbcode",AmethystCTranslator_rbcode,0);
rb_define_method(cls_AmethystCTranslator,"rbtrans",AmethystCTranslator_rbtrans,0);
rb_define_method(cls_AmethystCTranslator,"rw",AmethystCTranslator_rw,2);
rb_define_method(cls_AmethystCTranslator,"trans",AmethystCTranslator_trans,0);
rb_define_method(cls_AmethystCTranslator,"transfn",AmethystCTranslator_transfn,0);
 }
