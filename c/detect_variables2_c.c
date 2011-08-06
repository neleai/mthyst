#include "cthyst.h"
VALUE cls_Analyze_Variables2;
VALUE Analyze_Variables2_flat(VALUE self );
VALUE Analyze_Variables2_itrans(VALUE self );
VALUE Analyze_Variables2_root(VALUE self );
VALUE Analyze_Variables2_visit(VALUE self );
VALUE Analyze_Variables2_flat(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(flat_Analyze_Variables2cb_1,1,bind); 
 BSET(autovar_1,it); VALUE oldinput1; while(1){oldinput1=IGET(input); VALUE oldinput2=IGET(input);
alt1_1: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(flat_Analyze_Variables2cb_2,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_2,it); VALUE oldinput3=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_2)); ISET(input,INT2FIX(0));
   it=CALL(flat,0 ); FAILTEST(pass1);
 BSET(autovar_3,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput3);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(flat_Analyze_Variables2cb_3,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_4,it); VALUE oldinput4=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
   it=CALL(flat,0 ); FAILTEST(pass2);
 BSET(autovar_3,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput4);
	if(fail2) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(anything,0 ); FAILTEST(alt1_4);
 BSET(autovar_3,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ISET(input,oldinput2); goto break1;
 accept1:;
it=CALL(flat_Analyze_Variables2cb_4,1,bind);  if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=BGET(autovar_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(itrans_Analyze_Variables2cb_1,1,bind); 
 BSET(autovar_1,it); VALUE oldinput1; while(1){oldinput1=IGET(input); VALUE oldinput2=IGET(input);
alt1_1: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  arg0=CALL(itrans_Analyze_Variables2cb_2,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_2,it); VALUE oldinput3=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_2)); ISET(input,INT2FIX(0));
 it=CALL(itrans_Analyze_Variables2cb_3,1,bind); 
 BSET(autovar_3,it); VALUE oldinput4=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,rb_ary_new3(1,BGET(autovar_3))); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass2);
 BSET(autovar_4,it); VALUE oldinput5=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
 it=CALL(itrans_Analyze_Variables2cb_4,1,bind); 
 BSET(autovar_5,it); VALUE oldinput6; while(1){oldinput6=IGET(input);  arg0=CALL(itrans_Analyze_Variables2cb_5,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(break2);
 BSET(autovar_6,it); VALUE oldinput7=IGET(input);  VALUE oldsrc4=IGET(src); int fail4=0;
ISET(src,BGET(autovar_6)); ISET(input,INT2FIX(0));
   it=CALL(root,0 ); FAILTEST(pass4);
 BSET(autovar_7,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ISET(src,oldsrc4); ISET(input,oldinput7);
	if(fail4) goto break2;
it=CALL(itrans_Analyze_Variables2cb_6,1,bind);  if (IGET(stop)!=Qnil){{oldinput6=IGET(input);goto break2;} } } break2: ISET(stop,Qnil);  ISET(input,oldinput6); it=BGET(autovar_5);
 BSET(rules_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ISET(src,oldsrc3); ISET(input,oldinput5);
	if(fail3) goto pass2;

	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput4);
	if(fail2) goto pass1;
it=CALL(itrans_Analyze_Variables2cb_7,1,bind); it=CALL(itrans_Analyze_Variables2cb_8,1,bind); 
 BSET(autovar_8,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput3);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=CALL(anything,0 ); FAILTEST(alt1_3);
 BSET(autovar_8,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput2); goto break1;
 accept1:;
it=CALL(itrans_Analyze_Variables2cb_9,1,bind);  if (IGET(stop)!=Qnil){{oldinput1=IGET(input);goto break1;} } } break1: ISET(stop,Qnil);  ISET(input,oldinput1); it=BGET(autovar_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Analyze_Variables2cb_1,1,bind); 
 BSET(autovar_1,it); VALUE oldinput1=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,rb_ary_new3(1,BGET(autovar_1))); ISET(input,INT2FIX(0));
  arg0=CALL(root_Analyze_Variables2cb_2,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(pass1);
 BSET(autovar_2,it); VALUE oldinput2=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_2)); ISET(input,INT2FIX(0));
 it=CALL(root_Analyze_Variables2cb_3,1,bind); it=CALL(root_Analyze_Variables2cb_4,1,bind);   it=CALL(traverse,0 ); FAILTEST(pass2);it=CALL(root_Analyze_Variables2cb_5,1,bind); it=CALL(root_Analyze_Variables2cb_6,1,bind); 
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
VALUE Analyze_Variables2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(visit_Analyze_Variables2cb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
   it=CALL(traverse,0 ); FAILTEST(pass1);it=CALL(visit_Analyze_Variables2cb_2,1,bind); 
 BSET(autovar_2,it); VALUE oldinput3=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,rb_ary_new3(1,BGET(autovar_2))); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass2);
 BSET(autovar_3,it); VALUE oldinput4=IGET(input);  VALUE oldsrc3=IGET(src); int fail3=0;
ISET(src,BGET(autovar_3)); ISET(input,INT2FIX(0));
   it=CALL(flat,0 ); FAILTEST(pass3);
 BSET(a_1,it); 
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
it=CALL(visit_Analyze_Variables2cb_3,1,bind); it=CALL(visit_Analyze_Variables2cb_4,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(visit_Analyze_Variables2cb_5,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_4,it); VALUE oldinput5=IGET(input);  VALUE oldsrc4=IGET(src); int fail4=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
   it=CALL(traverse,0 ); FAILTEST(pass4);it=CALL(visit_Analyze_Variables2cb_6,1,bind); 
 BSET(autovar_5,it); VALUE oldinput6=IGET(input);  VALUE oldsrc5=IGET(src); int fail5=0;
ISET(src,rb_ary_new3(1,BGET(autovar_5))); ISET(input,INT2FIX(0));
   it=CALL(anything,0 ); FAILTEST(pass5);
 BSET(autovar_6,it); VALUE oldinput7=IGET(input);  VALUE oldsrc6=IGET(src); int fail6=0;
ISET(src,BGET(autovar_6)); ISET(input,INT2FIX(0));
  arg0=CALL(visit_Analyze_Variables2cb_7,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(pass6);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ISET(src,oldsrc6); ISET(input,oldinput7);
	if(fail6) goto pass5;

	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ISET(src,oldsrc5); ISET(input,oldinput6);
	if(fail5) goto pass4;

	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ISET(src,oldsrc4); ISET(input,oldinput5);
	if(fail4) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(visit_Analyze_Variables2cb_8,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_4);
 BSET(autovar_7,it); VALUE oldinput8=IGET(input);  VALUE oldsrc7=IGET(src); int fail7=0;
ISET(src,BGET(autovar_7)); ISET(input,INT2FIX(0));
 it=CALL(visit_Analyze_Variables2cb_9,1,bind); it=CALL(visit_Analyze_Variables2cb_10,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ISET(src,oldsrc7); ISET(input,oldinput8);
	if(fail7) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
  alt1_4:  ISET(input,oldinput1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
void Init_detect_variables2_c(){ 
 cls_Analyze_Variables2=rb_define_class("Analyze_Variables2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Analyze_Variables2,"flat",Analyze_Variables2_flat,0);
rb_define_method(cls_Analyze_Variables2,"itrans",Analyze_Variables2_itrans,0);
rb_define_method(cls_Analyze_Variables2,"root",Analyze_Variables2_root,0);
rb_define_method(cls_Analyze_Variables2,"visit",Analyze_Variables2_visit,0);
 }
