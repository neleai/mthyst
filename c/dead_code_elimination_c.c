#include "cthyst.h"
VALUE cls_Dead_Code_Detector;
VALUE Dead_Code_Detector_trans(VALUE self );
VALUE Dead_Code_Detector_vars_in(VALUE self );
VALUE Dead_Code_Detector_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 it=CALL(trans_Dead_Code_Detectorcb_2,1,bind); 
 BSET(name_1,it); it=CALL(trans_Dead_Code_Detectorcb_3,1,bind); it=CALL(trans_Dead_Code_Detectorcb_4,1,bind); 
 BSET(autovar_2,it); VALUE oldinput3=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,rb_ary_new3(1,BGET(autovar_2))); ISET(input,INT2FIX(0));
   it=CALL(args,0 ); FAILTEST(pass2);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput3);
	if(fail2) goto pass1;
it=CALL(trans_Dead_Code_Detectorcb_5,1,bind); 
 BSET(autovar_3,it); VALUE oldinput4=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,rb_ary_new3(1,BGET(autovar_3))); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass3);
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ISET(input,oldinput4);
	if(fail3) goto pass1;
it=CALL(trans_Dead_Code_Detectorcb_6,1,bind); 
 BSET(body_1,it); it=CALL(trans_Dead_Code_Detectorcb_7,1,bind); 
 BSET(locals_1,it); it=CALL(trans_Dead_Code_Detectorcb_8,1,bind); 
 BSET(reachable_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
it=CALL(trans_Dead_Code_Detectorcb_9,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_10,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_4,it); VALUE oldinput5=IGET(input);  VALUE oldsrc4=IGET(src); int fail4=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass4);
 BSET(name_1,it);   it=CALL(vars_in,0 ); FAILTEST(pass4);
 BSET(var_1,it); it=CALL(trans_Dead_Code_Detectorcb_11,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ISET(src,oldsrc4); ISET(input,oldinput5);
	if(fail4) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_12,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_5,it); VALUE oldinput6=IGET(input);  VALUE oldsrc5=IGET(src); int fail5=0;
ISET(src,BGET(autovar_5)); ISET(input,INT2FIX(0));
 it=CALL(trans_Dead_Code_Detectorcb_13,1,bind); 
 BSET(autovar_6,it); VALUE oldinput7=IGET(input);  VALUE oldsrc6=IGET(src); int fail6=0;
ISET(src,rb_ary_new3(1,BGET(autovar_6))); ISET(input,INT2FIX(0));
   it=CALL(vars_in,0 ); FAILTEST(pass6);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ISET(src,oldsrc6); ISET(input,oldinput7);
	if(fail6) goto pass5;
it=CALL(trans_Dead_Code_Detectorcb_14,1,bind); it=CALL(trans_Dead_Code_Detectorcb_15,1,bind); 
 BSET(autovar_7,it); VALUE oldinput8=IGET(input);  VALUE oldsrc7=IGET(src); int fail7=0;
ISET(src,rb_ary_new3(1,BGET(autovar_7))); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass7);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ISET(src,oldsrc7); ISET(input,oldinput8);
	if(fail7) goto pass5;

	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ISET(src,oldsrc5); ISET(input,oldinput6);
	if(fail5) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_16,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_8,it); VALUE oldinput9=IGET(input);  VALUE oldsrc8=IGET(src); int fail8=0;
ISET(src,BGET(autovar_8)); ISET(input,INT2FIX(0));
 it=CALL(trans_Dead_Code_Detectorcb_17,1,bind); 
 BSET(this_1,it); it=CALL(trans_Dead_Code_Detectorcb_18,1,bind);   it=CALL(vars_in,0 ); FAILTEST(pass8);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ISET(src,oldsrc8); ISET(input,oldinput9);
	if(fail8) goto alt1_5;
it=CALL(trans_Dead_Code_Detectorcb_19,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_20,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_9,it); VALUE oldinput10=IGET(input);  VALUE oldsrc9=IGET(src); int fail9=0;
ISET(src,BGET(autovar_9)); ISET(input,INT2FIX(0));
 it=CALL(trans_Dead_Code_Detectorcb_21,1,bind); 
 BSET(autovar_10,it); VALUE oldinput11=IGET(input);  VALUE oldsrc10=IGET(src); int fail10=0;
ISET(src,rb_ary_new3(1,BGET(autovar_10))); ISET(input,INT2FIX(0));
   it=CALL(vars_in,0 ); FAILTEST(pass10);
 BSET(v_1,it); 
	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ISET(src,oldsrc10); ISET(input,oldinput11);
	if(fail10) goto pass9;
it=CALL(trans_Dead_Code_Detectorcb_22,1,bind); it=CALL(trans_Dead_Code_Detectorcb_23,1,bind); 
 BSET(autovar_11,it); VALUE oldinput12=IGET(input);  VALUE oldsrc11=IGET(src); int fail11=0;
ISET(src,rb_ary_new3(1,BGET(autovar_11))); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass11);
	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ISET(src,oldsrc11); ISET(input,oldinput12);
	if(fail11) goto pass9;
it=CALL(trans_Dead_Code_Detectorcb_24,1,bind); 
 BSET(autovar_12,it); VALUE oldinput13=IGET(input);  VALUE oldsrc12=IGET(src); int fail12=0;
ISET(src,rb_ary_new3(1,BGET(autovar_12))); ISET(input,INT2FIX(0));
   it=CALL(vars_in,0 ); FAILTEST(pass12);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ISET(src,oldsrc12); ISET(input,oldinput13);
	if(fail12) goto pass9;

	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ISET(src,oldsrc9); ISET(input,oldinput10);
	if(fail9) goto alt1_6;
it=CALL(trans_Dead_Code_Detectorcb_25,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_26,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_7);
 BSET(autovar_13,it); VALUE oldinput14=IGET(input);  VALUE oldsrc13=IGET(src); int fail13=0;
ISET(src,BGET(autovar_13)); ISET(input,INT2FIX(0));
 it=CALL(trans_Dead_Code_Detectorcb_27,1,bind); 
 BSET(autovar_14,it); VALUE oldinput15=IGET(input);  VALUE oldsrc14=IGET(src); int fail14=0;
ISET(src,rb_ary_new3(1,BGET(autovar_14))); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass14);
 BSET(autovar_15,it); VALUE oldinput16=IGET(input);  VALUE oldsrc15=IGET(src); int fail15=0;
ISET(src,BGET(autovar_15)); ISET(input,INT2FIX(0));
   it=CALL(vars_in,0 ); FAILTEST(pass15);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass15;
	goto success15;
	pass15: fail15=1;
	success15: ISET(src,oldsrc15); ISET(input,oldinput16);
	if(fail15) goto pass14;

	if (CALL(eof,0)==failobj) goto pass14;
	goto success14;
	pass14: fail14=1;
	success14: ISET(src,oldsrc14); ISET(input,oldinput15);
	if(fail14) goto pass13;
it=CALL(trans_Dead_Code_Detectorcb_28,1,bind); 
 BSET(v_1,it); 
	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ISET(src,oldsrc13); ISET(input,oldinput14);
	if(fail13) goto alt1_7;
it=CALL(trans_Dead_Code_Detectorcb_29,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_7: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_call_super(0,vals); FAILTEST(alt1_8);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_8:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dead_Code_Detector_vars_in(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(vars_in_Dead_Code_Detectorcb_1,1,bind); VALUE oldinput1; while(1){oldinput1=IGET(input); VALUE oldinput2=IGET(input);
alt1_1: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_2,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); VALUE oldinput3=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 it=CALL(vars_in_Dead_Code_Detectorcb_3,1,bind); 
 BSET(autovar_2,it); it=CALL(vars_in_Dead_Code_Detectorcb_4,1,bind); it=CALL(vars_in_Dead_Code_Detectorcb_5,1,bind); VALUE oldinput4; while(1){oldinput4=IGET(input);   it=CALL(anything,0 ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldinput4=IGET(input);goto break2;} } } break2: ISET(stop,Qnil);  ISET(input,oldinput4); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput3);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_6,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_3,it); VALUE oldinput5=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_3)); ISET(input,INT2FIX(0));
 it=CALL(vars_in_Dead_Code_Detectorcb_7,1,bind); 
 BSET(autovar_4,it); it=CALL(vars_in_Dead_Code_Detectorcb_8,1,bind); VALUE oldinput6; while(1){oldinput6=IGET(input);   it=CALL(anything,0 ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldinput6=IGET(input);goto break3;} } } break3: ISET(stop,Qnil);  ISET(input,oldinput6); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput5);
	if(fail2) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_9,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_5,it); VALUE oldinput7=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,BGET(autovar_5)); ISET(input,INT2FIX(0));
 it=CALL(vars_in_Dead_Code_Detectorcb_10,1,bind); 
 BSET(autovar_6,it); it=CALL(vars_in_Dead_Code_Detectorcb_11,1,bind); it=CALL(vars_in_Dead_Code_Detectorcb_12,1,bind); VALUE oldinput8; while(1){oldinput8=IGET(input);   it=CALL(anything,0 ); FAILTEST(break4); if (IGET(stop)!=Qnil){{oldinput8=IGET(input);goto break4;} } } break4: ISET(stop,Qnil);  ISET(input,oldinput8); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ISET(input,oldinput7);
	if(fail3) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_13,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_7,it); VALUE oldinput9=IGET(input);  VALUE oldsrc4=IGET(src); int fail4=0;
ISET(src,BGET(autovar_7)); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass4);
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ISET(src,oldsrc4); ISET(input,oldinput9);
	if(fail4) goto alt1_5;
 
ISET(cut,Qnil);goto accept1;
alt1_5: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_14,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_8,it); VALUE oldinput10=IGET(input);  VALUE oldsrc5=IGET(src); int fail5=0;
ISET(src,BGET(autovar_8)); ISET(input,INT2FIX(0));
 it=CALL(vars_in_Dead_Code_Detectorcb_15,1,bind); 
 BSET(autovar_9,it); it=CALL(vars_in_Dead_Code_Detectorcb_16,1,bind); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ISET(src,oldsrc5); ISET(input,oldinput10);
	if(fail5) goto alt1_6;
 
ISET(cut,Qnil);goto accept1;
alt1_6: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_17,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_7);
 BSET(autovar_10,it); VALUE oldinput11=IGET(input);  VALUE oldsrc6=IGET(src); int fail6=0;
ISET(src,BGET(autovar_10)); ISET(input,INT2FIX(0));
   it=CALL(vars_in,0 ); FAILTEST(pass6);
 BSET(autovar_11,it); it=CALL(vars_in_Dead_Code_Detectorcb_18,1,bind); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ISET(src,oldsrc6); ISET(input,oldinput11);
	if(fail6) goto alt1_7;
 
ISET(cut,Qnil);goto accept1;
alt1_7: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_19,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_8);
 BSET(autovar_12,it); VALUE oldinput12=IGET(input);  VALUE oldsrc7=IGET(src); int fail7=0;
ISET(src,BGET(autovar_12)); ISET(input,INT2FIX(0));
   it=CALL(vars_in,0 ); FAILTEST(pass7);
 BSET(autovar_13,it); it=CALL(vars_in_Dead_Code_Detectorcb_20,1,bind); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ISET(src,oldsrc7); ISET(input,oldinput12);
	if(fail7) goto alt1_8;
 
ISET(cut,Qnil);goto accept1;
alt1_8: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_21,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_9);
 BSET(autovar_14,it); VALUE oldinput13=IGET(input);  VALUE oldsrc8=IGET(src); int fail8=0;
ISET(src,BGET(autovar_14)); ISET(input,INT2FIX(0));
 it=CALL(vars_in_Dead_Code_Detectorcb_22,1,bind); 
 BSET(autovar_15,it); VALUE oldinput14=IGET(input);  VALUE oldsrc9=IGET(src); int fail9=0;
ISET(src,rb_ary_new3(1,BGET(autovar_15))); ISET(input,INT2FIX(0));
   it=CALL(vars_in,0 ); FAILTEST(pass9);
 BSET(autovar_16,it); it=CALL(vars_in_Dead_Code_Detectorcb_23,1,bind); 
	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ISET(src,oldsrc9); ISET(input,oldinput14);
	if(fail9) goto pass8;

	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ISET(src,oldsrc8); ISET(input,oldinput13);
	if(fail8) goto alt1_9;
 
ISET(cut,Qnil);goto accept1;
alt1_9: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_24,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_10);
 BSET(autovar_17,it); VALUE oldinput15=IGET(input);  VALUE oldsrc10=IGET(src); int fail10=0;
ISET(src,BGET(autovar_17)); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass10);
 BSET(name_1,it); it=CALL(vars_in_Dead_Code_Detectorcb_25,1,bind); it=CALL(vars_in_Dead_Code_Detectorcb_26,1,bind); 
 BSET(autovar_18,it); it=CALL(vars_in_Dead_Code_Detectorcb_27,1,bind); 
	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ISET(src,oldsrc10); ISET(input,oldinput15);
	if(fail10) goto alt1_10;
 
ISET(cut,Qnil);goto accept1;
alt1_10: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(anything,0 ); FAILTEST(alt1_11); 
ISET(cut,Qnil);goto accept1;
  alt1_11:  ISET(input,oldinput2); goto break1;
 accept1:;
 if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=BGET(ary_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE cls_Dead_Code_Deleter;
VALUE Dead_Code_Deleter_trans(VALUE self );
VALUE Dead_Code_Deleter_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Deletercb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 it=CALL(trans_Dead_Code_Deletercb_2,1,bind); 
 BSET(name_1,it); it=CALL(trans_Dead_Code_Deletercb_3,1,bind); 
 BSET(it_1,it); it=CALL(trans_Dead_Code_Deletercb_4,1,bind); it=CALL(trans_Dead_Code_Deletercb_5,1,bind); 
 BSET(autovar_2,it); VALUE oldinput3=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,rb_ary_new3(1,BGET(autovar_2))); ISET(input,INT2FIX(0));
   it=CALL(args,0 ); FAILTEST(pass2);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput3);
	if(fail2) goto pass1;
it=CALL(trans_Dead_Code_Deletercb_6,1,bind); 
 BSET(autovar_3,it); VALUE oldinput4=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,rb_ary_new3(1,BGET(autovar_3))); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass3);
 BSET(body_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ISET(input,oldinput4);
	if(fail3) goto pass1;
it=CALL(trans_Dead_Code_Deletercb_7,1,bind); 
 BSET(locals_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
it=CALL(trans_Dead_Code_Deletercb_8,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Deletercb_9,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_4,it); VALUE oldinput5=IGET(input);  VALUE oldsrc4=IGET(src); int fail4=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
 it=CALL(trans_Dead_Code_Deletercb_10,1,bind); 
 BSET(this_1,it); VALUE oldinput6; while(1){oldinput6=IGET(input);   it=CALL(anything,0 ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldinput6=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput6); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ISET(src,oldsrc4); ISET(input,oldinput5);
	if(fail4) goto alt1_3;
it=CALL(trans_Dead_Code_Deletercb_11,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Deletercb_12,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_5,it); VALUE oldinput7=IGET(input);  VALUE oldsrc5=IGET(src); int fail5=0;
ISET(src,BGET(autovar_5)); ISET(input,INT2FIX(0));
 it=CALL(trans_Dead_Code_Deletercb_13,1,bind); 
 BSET(name_1,it); it=CALL(trans_Dead_Code_Deletercb_14,1,bind); 
 BSET(autovar_6,it); VALUE oldinput8=IGET(input);  VALUE oldsrc6=IGET(src); int fail6=0;
ISET(src,rb_ary_new3(1,BGET(autovar_6))); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass6);
 BSET(expr_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ISET(src,oldsrc6); ISET(input,oldinput8);
	if(fail6) goto pass5;
it=CALL(trans_Dead_Code_Deletercb_15,1,bind); 
 BSET(append_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ISET(src,oldsrc5); ISET(input,oldinput7);
	if(fail5) goto alt1_4;
it=CALL(trans_Dead_Code_Deletercb_16,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Deletercb_17,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_7,it); VALUE oldinput9=IGET(input);  VALUE oldsrc7=IGET(src); int fail7=0;
ISET(src,BGET(autovar_7)); ISET(input,INT2FIX(0));
 it=CALL(trans_Dead_Code_Deletercb_18,1,bind); 
 BSET(this_1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ISET(src,oldsrc7); ISET(input,oldinput9);
	if(fail7) goto alt1_5;
it=CALL(trans_Dead_Code_Deletercb_19,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Deletercb_20,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_8,it); VALUE oldinput10=IGET(input);  VALUE oldsrc8=IGET(src); int fail8=0;
ISET(src,BGET(autovar_8)); ISET(input,INT2FIX(0));
 VALUE oldinput11; while(1){oldinput11=IGET(input);   it=CALL(anything,0 ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldinput11=IGET(input);goto break2;} } } break2: ISET(stop,Qnil);  ISET(input,oldinput11); it=CALL(trans_Dead_Code_Deletercb_21,1,bind); 
 BSET(this_1,it); 
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ISET(src,oldsrc8); ISET(input,oldinput10);
	if(fail8) goto alt1_6;
it=CALL(trans_Dead_Code_Deletercb_22,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_call_super(0,vals); FAILTEST(alt1_7);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_7:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE cls_Communize_Or;
VALUE Communize_Or_trans(VALUE self );
VALUE Communize_Or_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Communize_Orcb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 VALUE oldinput3=IGET(input);
  arg0=CALL(trans_Communize_Orcb_2,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(reject1);
 BSET(autovar_2,it); VALUE oldinput4=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_2)); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass2);
 BSET(first_1,it); VALUE oldinput5; while(1){oldinput5=IGET(input);   it=CALL(anything,0 ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldinput5=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput5); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput4);
	if(fail2) goto reject1;
 x=1; goto accept2;  reject1: x=0; accept2: it=Qnil; ISET(input,oldinput3); if (x==0) goto pass1;VALUE oldinput6; while(1){oldinput6=IGET(input);  arg0=CALL(trans_Communize_Orcb_3,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(break2);
 BSET(autovar_3,it); VALUE oldinput7=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,BGET(autovar_3)); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass3);
 BSET(fst_1,it); it=CALL(trans_Communize_Orcb_4,1,bind); FAILTEST(pass3);it=CALL(trans_Communize_Orcb_5,1,bind); 
 BSET(autovar_4,it); VALUE oldinput8; while(1){oldinput8=IGET(input);   it=CALL(trans,0 ); FAILTEST(break3);
 BSET(autovar_5,it); it=CALL(trans_Communize_Orcb_6,1,bind);  if (IGET(stop)!=Qnil){{oldinput8=IGET(input);goto break3;} } } break3: ISET(stop,Qnil);  ISET(input,oldinput8); it=BGET(autovar_4);
 BSET(rest_1,it); it=CALL(trans_Communize_Orcb_7,1,bind); 
 BSET(autovar_6,it); it=CALL(trans_Communize_Orcb_8,1,bind); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ISET(input,oldinput7);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldinput6=IGET(input);goto break2;} } } break2: ISET(stop,Qnil);  ISET(input,oldinput6); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
it=CALL(trans_Communize_Orcb_9,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_call_super(0,vals); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE cls_Move_Assignments;
VALUE Move_Assignments_move(VALUE self ,VALUE a0,VALUE a1);
VALUE Move_Assignments_trans(VALUE self );
VALUE Move_Assignments_move(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(append_1,a0);BSET(name_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(move_Move_Assignmentscb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 it=CALL(move_Move_Assignmentscb_2,1,bind); 
 BSET(autovar_2,it); VALUE oldinput3; while(1){oldinput3=IGET(input);  arg0=CALL(move_Move_Assignmentscb_3,1,bind);arg1=CALL(move_Move_Assignmentscb_4,1,bind); it=CALL(move,2 ,arg0,arg1); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(move_Move_Assignmentscb_5,1,bind);  if (IGET(stop)!=Qnil){{oldinput3=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput3); it=BGET(autovar_2);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
it=CALL(move_Move_Assignmentscb_6,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(move_Move_Assignmentscb_7,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_4,it); VALUE oldinput4=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
 it=CALL(move_Move_Assignmentscb_8,1,bind); 
 BSET(autovar_5,it); VALUE oldinput5; while(1){oldinput5=IGET(input);   it=CALL(anything,0 ); FAILTEST(break2);
 BSET(el_1,it); VALUE oldinput6=IGET(input);
alt2_1: ISET(input,oldinput6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 VALUE oldinput7=IGET(input);
   it=CALL(eof,0 ); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ISET(input,oldinput7); if (x==0) goto alt2_2;it=BGET(el_1);
 BSET(autovar_6,it); VALUE oldinput8=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,rb_ary_new3(1,BGET(autovar_6))); ISET(input,INT2FIX(0));
  arg0=CALL(move_Move_Assignmentscb_9,1,bind);arg1=CALL(move_Move_Assignmentscb_10,1,bind); it=CALL(move,2 ,arg0,arg1); FAILTEST(pass3);
 BSET(autovar_7,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ISET(input,oldinput8);
	if(fail3) goto alt2_2;
 
ISET(cut,Qnil);goto accept2;
alt2_2: ISET(input,oldinput6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 it=BGET(el_1);
 BSET(autovar_7,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ISET(input,oldinput6); goto break2;
 accept2:;
it=CALL(move_Move_Assignmentscb_11,1,bind);  if (IGET(stop)!=Qnil){{oldinput5=IGET(input);goto break2;} } } break2: ISET(stop,Qnil);  ISET(input,oldinput5); it=BGET(autovar_5);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput4);
	if(fail2) goto alt1_3;
it=CALL(move_Move_Assignmentscb_12,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(move_Move_Assignmentscb_13,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_8,it); VALUE oldinput9=IGET(input);  VALUE oldsrc4=IGET(src); int fail4=0;
ISET(src,BGET(autovar_8)); ISET(input,INT2FIX(0));
 it=CALL(move_Move_Assignmentscb_14,1,bind); 
 BSET(var_1,it); it=CALL(move_Move_Assignmentscb_15,1,bind); 
 BSET(autovar_9,it); VALUE oldinput10=IGET(input);  VALUE oldsrc5=IGET(src); int fail5=0;
ISET(src,rb_ary_new3(1,BGET(autovar_9))); ISET(input,INT2FIX(0));
  arg0=CALL(move_Move_Assignmentscb_16,1,bind);arg1=CALL(move_Move_Assignmentscb_17,1,bind); it=CALL(move,2 ,arg0,arg1); FAILTEST(pass5);
 BSET(to_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ISET(src,oldsrc5); ISET(input,oldinput10);
	if(fail5) goto pass4;
it=CALL(move_Move_Assignmentscb_18,1,bind); 
 BSET(enter_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ISET(src,oldsrc4); ISET(input,oldinput9);
	if(fail4) goto alt1_4;
it=CALL(move_Move_Assignmentscb_19,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_5);
 BSET(it_1,it); it=CALL(move_Move_Assignmentscb_20,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Move_Assignments_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Move_Assignmentscb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 it=CALL(trans_Move_Assignmentscb_2,1,bind); 
 BSET(name_1,it); it=CALL(trans_Move_Assignmentscb_3,1,bind); 
 BSET(autovar_2,it); VALUE oldinput3=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,rb_ary_new3(1,BGET(autovar_2))); ISET(input,INT2FIX(0));
   it=CALL(trans,0 ); FAILTEST(pass2);
 BSET(expr_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput3);
	if(fail2) goto pass1;
it=CALL(trans_Move_Assignmentscb_4,1,bind); 
 BSET(append_1,it); it=BGET(expr_1);
 BSET(autovar_3,it); VALUE oldinput4=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,rb_ary_new3(1,BGET(autovar_3))); ISET(input,INT2FIX(0));
  arg0=CALL(trans_Move_Assignmentscb_5,1,bind);arg1=CALL(trans_Move_Assignmentscb_6,1,bind); it=CALL(move,2 ,arg0,arg1); FAILTEST(pass3);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ISET(input,oldinput4);
	if(fail3) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_call_super(0,vals); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
void Init_dead_code_elimination_c(){ 
 cls_Dead_Code_Detector=rb_define_class("Dead_Code_Detector",rb_const_get(rb_cObject,rb_intern("AmethystOptimizer"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Dead_Code_Detector,"trans",Dead_Code_Detector_trans,0);
rb_define_method(cls_Dead_Code_Detector,"vars_in",Dead_Code_Detector_vars_in,0);

 cls_Dead_Code_Deleter=rb_define_class("Dead_Code_Deleter",rb_const_get(rb_cObject,rb_intern("AmethystOptimizer"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Dead_Code_Deleter,"trans",Dead_Code_Deleter_trans,0);

 cls_Communize_Or=rb_define_class("Communize_Or",rb_const_get(rb_cObject,rb_intern("AmethystOptimizer"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Communize_Or,"trans",Communize_Or_trans,0);

 cls_Move_Assignments=rb_define_class("Move_Assignments",rb_const_get(rb_cObject,rb_intern("AmethystOptimizer"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Move_Assignments,"move",Move_Assignments_move,2);
rb_define_method(cls_Move_Assignments,"trans",Move_Assignments_trans,0);
 }
