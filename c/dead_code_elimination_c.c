#include "cthyst.h"
VALUE cls_Dead_Code_Detector;
VALUE Dead_Code_Detector_trans(VALUE self );
VALUE Dead_Code_Detector_vars_in(VALUE self );
VALUE Dead_Code_Detector_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); it=CALL(trans_Dead_Code_Detectorcb_2,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=CALL(trans_Dead_Code_Detectorcb_3,1,bind); 
 BSET(name_1,it); it=CALL(trans_Dead_Code_Detectorcb_4,1,bind); it=CALL(trans_Dead_Code_Detectorcb_5,1,bind); 
 BSET(autovar_2,it); it=CALL(trans_Dead_Code_Detectorcb_6,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(args,0 ); FAILTEST(pass2);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=CALL(trans_Dead_Code_Detectorcb_7,1,bind); 
 BSET(autovar_3,it); it=CALL(trans_Dead_Code_Detectorcb_8,1,bind); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass3);
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_2;
it=CALL(trans_Dead_Code_Detectorcb_9,1,bind); 
 BSET(body_1,it); it=CALL(trans_Dead_Code_Detectorcb_10,1,bind); 
 BSET(locals_1,it); it=CALL(trans_Dead_Code_Detectorcb_11,1,bind); 
 BSET(reachable_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(trans_Dead_Code_Detectorcb_12,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_13,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_4,it); it=CALL(trans_Dead_Code_Detectorcb_14,1,bind); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos7=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass4;}
   it=CALL(anything,0 ); FAILTEST(alt3_2);
 BSET(name_1,it);   it=CALL(vars_in,0 ); FAILTEST(alt3_2);
 BSET(var_1,it); it=CALL(trans_Dead_Code_Detectorcb_15,1,bind);  
ISET(cut,Qnil);goto accept3;
  alt3_2:  ame_setpos(self,oldpos7); goto pass4;
 accept3:;

	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_16,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_5,it); it=CALL(trans_Dead_Code_Detectorcb_17,1,bind); int oldpos8=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos9=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass5;}
 it=CALL(trans_Dead_Code_Detectorcb_18,1,bind); 
 BSET(autovar_6,it); it=CALL(trans_Dead_Code_Detectorcb_19,1,bind); int oldpos10=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(vars_in,0 ); FAILTEST(pass6);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos10); ame_setlen(self,oldlen6);
	if(fail6) goto alt4_2;
it=CALL(trans_Dead_Code_Detectorcb_20,1,bind); it=CALL(trans_Dead_Code_Detectorcb_21,1,bind); 
 BSET(autovar_7,it); it=CALL(trans_Dead_Code_Detectorcb_22,1,bind); int oldpos11=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass7);
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos11); ame_setlen(self,oldlen7);
	if(fail7) goto alt4_2;
 
ISET(cut,Qnil);goto accept4;
  alt4_2:  ame_setpos(self,oldpos9); goto pass5;
 accept4:;

	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos8); ame_setlen(self,oldlen5);
	if(fail5) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_23,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_8,it); it=CALL(trans_Dead_Code_Detectorcb_24,1,bind); int oldpos12=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos13=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass8;}
 it=CALL(trans_Dead_Code_Detectorcb_25,1,bind); 
 BSET(this_1,it); it=CALL(trans_Dead_Code_Detectorcb_26,1,bind);   it=CALL(vars_in,0 ); FAILTEST(alt5_2);
 BSET(var_1,it);  
ISET(cut,Qnil);goto accept5;
  alt5_2:  ame_setpos(self,oldpos13); goto pass8;
 accept5:;

	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos12); ame_setlen(self,oldlen8);
	if(fail8) goto alt1_5;
it=CALL(trans_Dead_Code_Detectorcb_27,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_28,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_9,it); it=CALL(trans_Dead_Code_Detectorcb_29,1,bind); int oldpos14=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos15=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos15);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass9;}
 it=CALL(trans_Dead_Code_Detectorcb_30,1,bind); 
 BSET(autovar_10,it); it=CALL(trans_Dead_Code_Detectorcb_31,1,bind); int oldpos16=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(vars_in,0 ); FAILTEST(pass10);
 BSET(v_1,it); 
	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos16); ame_setlen(self,oldlen10);
	if(fail10) goto alt6_2;
it=CALL(trans_Dead_Code_Detectorcb_32,1,bind); it=CALL(trans_Dead_Code_Detectorcb_33,1,bind); 
 BSET(autovar_11,it); it=CALL(trans_Dead_Code_Detectorcb_34,1,bind); int oldpos17=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass11);
	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos17); ame_setlen(self,oldlen11);
	if(fail11) goto alt6_2;
it=CALL(trans_Dead_Code_Detectorcb_35,1,bind); 
 BSET(autovar_12,it); it=CALL(trans_Dead_Code_Detectorcb_36,1,bind); int oldpos18=ame_getpos(self); int oldlen12=ame_getlen(self); VALUE oldsrc12=ame_getsrc(self); int fail12=0;
ame_setsrc(self,BGET(autovar_12)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(vars_in,0 ); FAILTEST(pass12);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ame_setsrc(self,oldsrc12); ame_setpos(self,oldpos18); ame_setlen(self,oldlen12);
	if(fail12) goto alt6_2;
 
ISET(cut,Qnil);goto accept6;
  alt6_2:  ame_setpos(self,oldpos15); goto pass9;
 accept6:;

	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos14); ame_setlen(self,oldlen9);
	if(fail9) goto alt1_6;
it=CALL(trans_Dead_Code_Detectorcb_37,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Detectorcb_38,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_7);
 BSET(autovar_13,it); it=CALL(trans_Dead_Code_Detectorcb_39,1,bind); int oldpos19=ame_getpos(self); int oldlen13=ame_getlen(self); VALUE oldsrc13=ame_getsrc(self); int fail13=0;
ame_setsrc(self,BGET(autovar_13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos20=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos20);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass13;}
 it=CALL(trans_Dead_Code_Detectorcb_40,1,bind); 
 BSET(autovar_14,it); it=CALL(trans_Dead_Code_Detectorcb_41,1,bind); int oldpos21=ame_getpos(self); int oldlen14=ame_getlen(self); VALUE oldsrc14=ame_getsrc(self); int fail14=0;
ame_setsrc(self,BGET(autovar_14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(anything,0 ); FAILTEST(pass14);
 BSET(autovar_15,it); it=CALL(trans_Dead_Code_Detectorcb_42,1,bind); int oldpos22=ame_getpos(self); int oldlen15=ame_getlen(self); VALUE oldsrc15=ame_getsrc(self); int fail15=0;
ame_setsrc(self,BGET(autovar_15)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos23=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos23);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass15;}
   it=CALL(vars_in,0 ); FAILTEST(alt8_2); 
ISET(cut,Qnil);goto accept8;
  alt8_2:  ame_setpos(self,oldpos23); goto pass15;
 accept8:;

	if (CALL(eof,0)==failobj) goto pass15;
	goto success15;
	pass15: fail15=1;
	success15: ame_setsrc(self,oldsrc15); ame_setpos(self,oldpos22); ame_setlen(self,oldlen15);
	if(fail15) goto pass14;

 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success14;
	pass14: fail14=1;
	success14: ame_setsrc(self,oldsrc14); ame_setpos(self,oldpos21); ame_setlen(self,oldlen14);
	if(fail14) goto alt7_2;
it=CALL(trans_Dead_Code_Detectorcb_43,1,bind); 
 BSET(v_1,it);  
ISET(cut,Qnil);goto accept7;
  alt7_2:  ame_setpos(self,oldpos20); goto pass13;
 accept7:;

	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ame_setsrc(self,oldsrc13); ame_setpos(self,oldpos19); ame_setlen(self,oldlen13);
	if(fail13) goto alt1_7;
it=CALL(trans_Dead_Code_Detectorcb_44,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_call_super(0,vals); FAILTEST(alt1_8); 
ISET(cut,Qnil);goto accept1;
  alt1_8:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dead_Code_Detector_vars_in(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(vars_in_Dead_Code_Detectorcb_1,1,bind); 
 BSET(ary_1,it); it=CALL(vars_in_Dead_Code_Detectorcb_2,1,bind); 
 BSET(autovar_1,it); it=CALL(vars_in_Dead_Code_Detectorcb_3,1,bind); 
 BSET(autovar_2,it); it=CALL(vars_in_Dead_Code_Detectorcb_4,1,bind); 
 BSET(autovar_3,it); it=CALL(vars_in_Dead_Code_Detectorcb_5,1,bind); 
 BSET(autovar_4,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(vars_in_Dead_Code_Detectorcb_6,1,bind); it=CALL(vars_in_Dead_Code_Detectorcb_7,1,bind); 
 BSET(autovar_4,it); int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_8,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt2_2);
 BSET(autovar_5,it); it=CALL(vars_in_Dead_Code_Detectorcb_9,1,bind); int oldpos4=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=CALL(vars_in_Dead_Code_Detectorcb_10,1,bind); 
 BSET(autovar_6,it); it=CALL(vars_in_Dead_Code_Detectorcb_11,1,bind); it=CALL(vars_in_Dead_Code_Detectorcb_12,1,bind); it=CALL(vars_in_Dead_Code_Detectorcb_13,1,bind); 
 BSET(autovar_1,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break2);
 BSET(autovar_7,it); it=CALL(vars_in_Dead_Code_Detectorcb_14,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=BGET(autovar_1); 
ISET(cut,Qnil);goto accept3;
  alt3_2:  ame_setpos(self,oldpos5); goto pass1;
 accept3:;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos4); ame_setlen(self,oldlen1);
	if(fail1) goto alt2_2;
 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_15,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt2_3);
 BSET(autovar_8,it); it=CALL(vars_in_Dead_Code_Detectorcb_16,1,bind); int oldpos7=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos8=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
 it=CALL(vars_in_Dead_Code_Detectorcb_17,1,bind); 
 BSET(autovar_9,it); it=CALL(vars_in_Dead_Code_Detectorcb_18,1,bind); it=CALL(vars_in_Dead_Code_Detectorcb_19,1,bind); 
 BSET(autovar_2,it); int oldpos9; while(1){oldpos9=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break3);
 BSET(autovar_10,it); it=CALL(vars_in_Dead_Code_Detectorcb_20,1,bind);  if (IGET(stop)!=Qnil){{oldpos9=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos9); it=BGET(autovar_2); 
ISET(cut,Qnil);goto accept4;
  alt4_2:  ame_setpos(self,oldpos8); goto pass2;
 accept4:;

	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos7); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
 
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_21,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt2_4);
 BSET(autovar_11,it); it=CALL(vars_in_Dead_Code_Detectorcb_22,1,bind); int oldpos10=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos11=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass3;}
 it=CALL(vars_in_Dead_Code_Detectorcb_23,1,bind); 
 BSET(autovar_12,it); it=CALL(vars_in_Dead_Code_Detectorcb_24,1,bind); it=CALL(vars_in_Dead_Code_Detectorcb_25,1,bind); it=CALL(vars_in_Dead_Code_Detectorcb_26,1,bind); 
 BSET(autovar_3,it); int oldpos12; while(1){oldpos12=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break4);
 BSET(autovar_13,it); it=CALL(vars_in_Dead_Code_Detectorcb_27,1,bind);  if (IGET(stop)!=Qnil){{oldpos12=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos12); it=BGET(autovar_3); 
ISET(cut,Qnil);goto accept5;
  alt5_2:  ame_setpos(self,oldpos11); goto pass3;
 accept5:;

	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos10); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_4;
 
ISET(cut,Qnil);goto accept2;
alt2_4: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_28,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt2_5);
 BSET(autovar_14,it); it=CALL(vars_in_Dead_Code_Detectorcb_29,1,bind); int oldpos13=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos14=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass4;}
   it=CALL(trans,0 ); FAILTEST(alt6_2); 
ISET(cut,Qnil);goto accept6;
  alt6_2:  ame_setpos(self,oldpos14); goto pass4;
 accept6:;

	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos13); ame_setlen(self,oldlen4);
	if(fail4) goto alt2_5;
 
ISET(cut,Qnil);goto accept2;
alt2_5: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_30,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt2_6);
 BSET(autovar_15,it); it=CALL(vars_in_Dead_Code_Detectorcb_31,1,bind); int oldpos15=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_15)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos16=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos16);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass5;}
 it=CALL(vars_in_Dead_Code_Detectorcb_32,1,bind); 
 BSET(autovar_16,it); it=CALL(vars_in_Dead_Code_Detectorcb_33,1,bind);  
ISET(cut,Qnil);goto accept7;
  alt7_2:  ame_setpos(self,oldpos16); goto pass5;
 accept7:;

	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos15); ame_setlen(self,oldlen5);
	if(fail5) goto alt2_6;
 
ISET(cut,Qnil);goto accept2;
alt2_6: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_34,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt2_7);
 BSET(autovar_17,it); it=CALL(vars_in_Dead_Code_Detectorcb_35,1,bind); int oldpos17=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_17)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos18=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass6;}
   it=CALL(vars_in,0 ); FAILTEST(alt8_2);
 BSET(autovar_18,it); it=CALL(vars_in_Dead_Code_Detectorcb_36,1,bind);  
ISET(cut,Qnil);goto accept8;
  alt8_2:  ame_setpos(self,oldpos18); goto pass6;
 accept8:;

	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos17); ame_setlen(self,oldlen6);
	if(fail6) goto alt2_7;
 
ISET(cut,Qnil);goto accept2;
alt2_7: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_37,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt2_8);
 BSET(autovar_19,it); it=CALL(vars_in_Dead_Code_Detectorcb_38,1,bind); int oldpos19=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_19)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos20=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos20);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass7;}
   it=CALL(vars_in,0 ); FAILTEST(alt9_2);
 BSET(autovar_20,it); it=CALL(vars_in_Dead_Code_Detectorcb_39,1,bind);  
ISET(cut,Qnil);goto accept9;
  alt9_2:  ame_setpos(self,oldpos20); goto pass7;
 accept9:;

	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos19); ame_setlen(self,oldlen7);
	if(fail7) goto alt2_8;
 
ISET(cut,Qnil);goto accept2;
alt2_8: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_40,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt2_9);
 BSET(autovar_21,it); it=CALL(vars_in_Dead_Code_Detectorcb_41,1,bind); int oldpos21=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_21)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos22=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass8;}
 it=CALL(vars_in_Dead_Code_Detectorcb_42,1,bind); 
 BSET(autovar_22,it); it=CALL(vars_in_Dead_Code_Detectorcb_43,1,bind); int oldpos23=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,BGET(autovar_22)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(vars_in,0 ); FAILTEST(pass9);
 BSET(autovar_23,it); it=CALL(vars_in_Dead_Code_Detectorcb_44,1,bind); 
	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos23); ame_setlen(self,oldlen9);
	if(fail9) goto alt10_2;
 
ISET(cut,Qnil);goto accept10;
  alt10_2:  ame_setpos(self,oldpos22); goto pass8;
 accept10:;

	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos21); ame_setlen(self,oldlen8);
	if(fail8) goto alt2_9;
 
ISET(cut,Qnil);goto accept2;
alt2_9: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(vars_in_Dead_Code_Detectorcb_45,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt2_10);
 BSET(autovar_24,it); it=CALL(vars_in_Dead_Code_Detectorcb_46,1,bind); int oldpos24=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,BGET(autovar_24)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos25=ame_getpos(self);
alt11_1: ame_setpos(self,oldpos25);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass10;}
   it=CALL(anything,0 ); FAILTEST(alt11_2);
 BSET(name_1,it); it=CALL(vars_in_Dead_Code_Detectorcb_47,1,bind); it=CALL(vars_in_Dead_Code_Detectorcb_48,1,bind); 
 BSET(autovar_25,it); it=CALL(vars_in_Dead_Code_Detectorcb_49,1,bind);  
ISET(cut,Qnil);goto accept11;
  alt11_2:  ame_setpos(self,oldpos25); goto pass10;
 accept11:;

	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos24); ame_setlen(self,oldlen10);
	if(fail10) goto alt2_10;
 
ISET(cut,Qnil);goto accept2;
alt2_10: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(anything,0 ); FAILTEST(alt2_11); 
ISET(cut,Qnil);goto accept2;
  alt2_11:  ame_setpos(self,oldpos3); goto break1;
 accept2:;

 BSET(autovar_26,it); it=CALL(vars_in_Dead_Code_Detectorcb_50,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=BGET(autovar_4);it=BGET(ary_1); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE cls_Dead_Code_Deleter;
VALUE Dead_Code_Deleter_trans(VALUE self );
VALUE Dead_Code_Deleter_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(trans_Dead_Code_Deletercb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(trans_Dead_Code_Deletercb_2,1,bind); 
 BSET(autovar_2,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Deletercb_3,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_3,it); it=CALL(trans_Dead_Code_Deletercb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=CALL(trans_Dead_Code_Deletercb_5,1,bind); 
 BSET(name_1,it); it=CALL(trans_Dead_Code_Deletercb_6,1,bind); 
 BSET(it_1,it); it=CALL(trans_Dead_Code_Deletercb_7,1,bind); it=CALL(trans_Dead_Code_Deletercb_8,1,bind); 
 BSET(autovar_4,it); it=CALL(trans_Dead_Code_Deletercb_9,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(args,0 ); FAILTEST(pass2);
 BSET(args_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=CALL(trans_Dead_Code_Deletercb_10,1,bind); 
 BSET(autovar_5,it); it=CALL(trans_Dead_Code_Deletercb_11,1,bind); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass3);
 BSET(body_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_2;
it=CALL(trans_Dead_Code_Deletercb_12,1,bind); 
 BSET(locals_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(trans_Dead_Code_Deletercb_13,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Deletercb_14,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_6,it); it=CALL(trans_Dead_Code_Deletercb_15,1,bind); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos7=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass4;}
 it=CALL(trans_Dead_Code_Deletercb_16,1,bind); 
 BSET(this_1,it); it=CALL(trans_Dead_Code_Deletercb_17,1,bind); 
 BSET(autovar_1,it); int oldpos8; while(1){oldpos8=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break1);
 BSET(autovar_7,it); it=CALL(trans_Dead_Code_Deletercb_18,1,bind);  if (IGET(stop)!=Qnil){{oldpos8=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos8); it=BGET(autovar_1); 
ISET(cut,Qnil);goto accept3;
  alt3_2:  ame_setpos(self,oldpos7); goto pass4;
 accept3:;

	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_3;
it=CALL(trans_Dead_Code_Deletercb_19,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Deletercb_20,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_8,it); it=CALL(trans_Dead_Code_Deletercb_21,1,bind); int oldpos9=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos10=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass5;}
 it=CALL(trans_Dead_Code_Deletercb_22,1,bind); 
 BSET(name_1,it); it=CALL(trans_Dead_Code_Deletercb_23,1,bind); 
 BSET(autovar_9,it); it=CALL(trans_Dead_Code_Deletercb_24,1,bind); int oldpos11=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass6);
 BSET(expr_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos11); ame_setlen(self,oldlen6);
	if(fail6) goto alt4_2;
 
ISET(cut,Qnil);goto accept4;
  alt4_2:  ame_setpos(self,oldpos10); goto pass5;
 accept4:;

	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos9); ame_setlen(self,oldlen5);
	if(fail5) goto alt1_4;
it=CALL(trans_Dead_Code_Deletercb_25,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Deletercb_26,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_5);
 BSET(autovar_10,it); it=CALL(trans_Dead_Code_Deletercb_27,1,bind); int oldpos12=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos13=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass7;}
 it=CALL(trans_Dead_Code_Deletercb_28,1,bind); 
 BSET(this_1,it);  
ISET(cut,Qnil);goto accept5;
  alt5_2:  ame_setpos(self,oldpos13); goto pass7;
 accept5:;

	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos12); ame_setlen(self,oldlen7);
	if(fail7) goto alt1_5;
it=CALL(trans_Dead_Code_Deletercb_29,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Dead_Code_Deletercb_30,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_6);
 BSET(autovar_11,it); it=CALL(trans_Dead_Code_Deletercb_31,1,bind); int oldpos14=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos15=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos15);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass8;}
 it=CALL(trans_Dead_Code_Deletercb_32,1,bind); 
 BSET(autovar_2,it); int oldpos16; while(1){oldpos16=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break2);
 BSET(autovar_12,it); it=CALL(trans_Dead_Code_Deletercb_33,1,bind);  if (IGET(stop)!=Qnil){{oldpos16=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos16); it=BGET(autovar_2);it=CALL(trans_Dead_Code_Deletercb_34,1,bind); 
 BSET(this_1,it);  
ISET(cut,Qnil);goto accept6;
  alt6_2:  ame_setpos(self,oldpos15); goto pass8;
 accept6:;

	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos14); ame_setlen(self,oldlen8);
	if(fail8) goto alt1_6;
it=CALL(trans_Dead_Code_Deletercb_35,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_call_super(0,vals); FAILTEST(alt1_7); 
ISET(cut,Qnil);goto accept1;
  alt1_7:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE cls_Communize_Or;
VALUE Communize_Or_trans(VALUE self );
VALUE Communize_Or_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(trans_Communize_Orcb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(trans_Communize_Orcb_2,1,bind); 
 BSET(autovar_2,it); it=CALL(trans_Communize_Orcb_3,1,bind); 
 BSET(ary_1,it); it=CALL(trans_Communize_Orcb_4,1,bind); 
 BSET(autovar_3,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Communize_Orcb_5,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_4,it); it=CALL(trans_Communize_Orcb_6,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 int oldpos4=ame_getpos(self);
 int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto reject1;}
  arg0=CALL(trans_Communize_Orcb_7,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt3_2);
 BSET(autovar_5,it); it=CALL(trans_Communize_Orcb_8,1,bind); int oldpos6=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos7=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
   it=CALL(trans,0 ); FAILTEST(alt4_2);
 BSET(first_1,it); it=CALL(trans_Communize_Orcb_9,1,bind); 
 BSET(autovar_1,it); int oldpos8; while(1){oldpos8=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break1);
 BSET(autovar_6,it); it=CALL(trans_Communize_Orcb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos8=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos8); it=BGET(autovar_1); 
ISET(cut,Qnil);goto accept5;
  alt4_2:  ame_setpos(self,oldpos7); goto pass2;
 accept5:;

	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos6); ame_setlen(self,oldlen2);
	if(fail2) goto alt3_2;
 
ISET(cut,Qnil);goto accept4;
  alt3_2:  ame_setpos(self,oldpos5); goto reject1;
 accept4:;
 x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos4); if (x==0) goto alt2_2;it=CALL(trans_Communize_Orcb_11,1,bind); 
 BSET(autovar_3,it); int oldpos9; while(1){oldpos9=ame_getpos(self);  arg0=CALL(trans_Communize_Orcb_12,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(break2);
 BSET(autovar_7,it); it=CALL(trans_Communize_Orcb_13,1,bind); int oldpos10=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos11=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass3;}
   it=CALL(trans,0 ); FAILTEST(alt5_2);
 BSET(fst_1,it); it=CALL(trans_Communize_Orcb_14,1,bind); FAILTEST(alt5_2);it=CALL(trans_Communize_Orcb_15,1,bind); 
 BSET(autovar_2,it); int oldpos12; while(1){oldpos12=ame_getpos(self);   it=CALL(trans,0 ); FAILTEST(break3);
 BSET(autovar_8,it); it=CALL(trans_Communize_Orcb_16,1,bind);  if (IGET(stop)!=Qnil){{oldpos12=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos12); it=BGET(autovar_2);
 BSET(rest_1,it); it=CALL(trans_Communize_Orcb_17,1,bind); 
 BSET(autovar_9,it); it=CALL(trans_Communize_Orcb_18,1,bind);  
ISET(cut,Qnil);goto accept6;
  alt5_2:  ame_setpos(self,oldpos11); goto pass3;
 accept6:;

	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos10); ame_setlen(self,oldlen3);
	if(fail3) goto break2;

 BSET(autovar_10,it); it=CALL(trans_Communize_Orcb_19,1,bind);  if (IGET(stop)!=Qnil){{oldpos9=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos9); it=BGET(autovar_3); 
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(trans_Communize_Orcb_20,1,bind);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_call_super(0,vals); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE cls_Move_Assignments;
VALUE Move_Assignments_move(VALUE self ,VALUE a0);
VALUE Move_Assignments_trans(VALUE self );
VALUE Move_Assignments_move(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(name_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(move_Move_Assignmentscb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(move_Move_Assignmentscb_2,1,bind); 
 BSET(autovar_2,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(move_Move_Assignmentscb_3,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_3,it); it=CALL(move_Move_Assignmentscb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=CALL(move_Move_Assignmentscb_5,1,bind); 
 BSET(autovar_1,it); int oldpos4; while(1){oldpos4=ame_getpos(self);  arg0=CALL(move_Move_Assignmentscb_6,1,bind); it=CALL(move,1 ,arg0); FAILTEST(break1);
 BSET(autovar_4,it); it=CALL(move_Move_Assignmentscb_7,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=BGET(autovar_1);
 BSET(ary_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(move_Move_Assignmentscb_8,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(move_Move_Assignmentscb_9,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_5,it); it=CALL(move_Move_Assignmentscb_10,1,bind); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
 it=CALL(move_Move_Assignmentscb_11,1,bind); 
 BSET(autovar_2,it); int oldpos7; while(1){oldpos7=ame_getpos(self);   it=CALL(anything,0 ); FAILTEST(break2);
 BSET(autovar_6,it); it=CALL(move_Move_Assignmentscb_12,1,bind);  if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=BGET(autovar_2);
 BSET(ary_1,it); it=CALL(move_Move_Assignmentscb_13,1,bind); 
 BSET(autovar_7,it); it=CALL(move_Move_Assignmentscb_14,1,bind); int oldpos8=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  arg0=CALL(move_Move_Assignmentscb_15,1,bind); it=CALL(move,1 ,arg0); FAILTEST(pass3);
 BSET(moved_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos8); ame_setlen(self,oldlen3);
	if(fail3) goto alt3_2;
it=CALL(move_Move_Assignmentscb_16,1,bind);  
ISET(cut,Qnil);goto accept3;
  alt3_2:  ame_setpos(self,oldpos6); goto pass2;
 accept3:;

	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
it=CALL(move_Move_Assignmentscb_17,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(move_Move_Assignmentscb_18,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_8,it); it=CALL(move_Move_Assignmentscb_19,1,bind); int oldpos9=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos10=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass4;}
 it=CALL(move_Move_Assignmentscb_20,1,bind); 
 BSET(var_1,it); it=CALL(move_Move_Assignmentscb_21,1,bind); 
 BSET(autovar_9,it); it=CALL(move_Move_Assignmentscb_22,1,bind); int oldpos11=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  arg0=CALL(move_Move_Assignmentscb_23,1,bind); it=CALL(move,1 ,arg0); FAILTEST(pass5);
 BSET(to_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos11); ame_setlen(self,oldlen5);
	if(fail5) goto alt4_2;
 
ISET(cut,Qnil);goto accept4;
  alt4_2:  ame_setpos(self,oldpos10); goto pass4;
 accept4:;

	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos9); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_4;
it=CALL(move_Move_Assignmentscb_24,1,bind); 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(anything,0 ); FAILTEST(alt1_5);
 BSET(it_1,it); it=CALL(move_Move_Assignmentscb_25,1,bind);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Move_Assignments_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_Move_Assignmentscb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); it=CALL(trans_Move_Assignmentscb_2,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=CALL(trans_Move_Assignmentscb_3,1,bind); 
 BSET(name_1,it); it=CALL(trans_Move_Assignmentscb_4,1,bind); 
 BSET(autovar_2,it); it=CALL(trans_Move_Assignmentscb_5,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(trans,0 ); FAILTEST(pass2);
 BSET(expr_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=BGET(expr_1);
 BSET(autovar_3,it); it=CALL(trans_Move_Assignmentscb_6,1,bind); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  arg0=CALL(trans_Move_Assignmentscb_7,1,bind); it=CALL(move,1 ,arg0); FAILTEST(pass3);
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_2;
 
ISET(cut,Qnil);goto accept2;
  alt2_2:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_call_super(0,vals); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
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
rb_define_method(cls_Move_Assignments,"move",Move_Assignments_move,1);
rb_define_method(cls_Move_Assignments,"trans",Move_Assignments_trans,0);
 }
