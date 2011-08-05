#include "cthyst.h"
VALUE cls_AmethystOptimizer2;
VALUE AmethystOptimizer2_trans(VALUE self );
VALUE AmethystOptimizer2_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_AmethystOptimizer2cb_1,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt1_2);
 BSET(autovar_1,BGET(it)); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_AmethystOptimizer2cb_2,1,bind)); 
 BSET(autovar_2,BGET(it)); VALUE oldinput3; while(1){oldinput3=IGET(input);   BSET(it,CALL(transfn,0 )); FAILTEST(break1);
 BSET(autovar_3,BGET(it)); BSET(it,CALL(trans_AmethystOptimizer2cb_3,1,bind));  } break1: ISET(input,oldinput3); BSET(it,BGET(autovar_2));
 BSET(ary_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
BSET(it,CALL(trans_AmethystOptimizer2cb_4,1,bind)); VALUE oldinput4=IGET(input);
alt2_1: ISET(input,oldinput4);if (IGET(cut)!=Qnil) goto alt1_2;
 BSET(it,CALL(trans_AmethystOptimizer2cb_5,1,bind)); FAILTEST(alt2_2);BSET(it,CALL(trans_AmethystOptimizer2cb_6,1,bind)); 
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept2;
alt2_2: ISET(input,oldinput4);if (IGET(cut)!=Qnil) goto alt1_2;
 BSET(it,CALL(trans_AmethystOptimizer2cb_7,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ISET(input,oldinput4); goto alt1_2;
 accept2:;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(trans_AmethystOptimizer2cb_8,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt1_3);
 BSET(autovar_4,BGET(it)); VALUE oldinput5=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_4)); ISET(input,INT2FIX(0));
 BSET(it,CALL(trans_AmethystOptimizer2cb_9,1,bind)); 
 BSET(autovar_5,BGET(it)); VALUE oldinput6; while(1){oldinput6=IGET(input);   BSET(it,CALL(trans,0 )); FAILTEST(break2);
 BSET(autovar_6,BGET(it)); BSET(it,CALL(trans_AmethystOptimizer2cb_10,1,bind));  } break2: ISET(input,oldinput6); BSET(it,BGET(autovar_5));
 BSET(ary_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput5);
	if(fail2) goto alt1_3;
BSET(it,CALL(trans_AmethystOptimizer2cb_11,1,bind)); VALUE oldinput7=IGET(input);
alt3_1: ISET(input,oldinput7);if (IGET(cut)!=Qnil) goto alt1_3;
 BSET(it,CALL(trans_AmethystOptimizer2cb_12,1,bind)); FAILTEST(alt3_2);BSET(it,CALL(trans_AmethystOptimizer2cb_13,1,bind)); 
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept3;
alt3_2: ISET(input,oldinput7);if (IGET(cut)!=Qnil) goto alt1_3;
 BSET(it,CALL(trans_AmethystOptimizer2cb_14,1,bind));
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ISET(input,oldinput7); goto alt1_3;
 accept3:;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
 BSET(it,rb_call_super(0,vals)); FAILTEST(alt1_4);
 BSET(_result_1,BGET(it));  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ISET(input,oldinput1); goto fail;
 accept1:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE cls_Seq_Or_Optimizer;
VALUE Seq_Or_Optimizer_root(VALUE self );
VALUE Seq_Or_Optimizer_visit(VALUE self );
VALUE Seq_Or_Optimizer_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
  BSET(it,CALL(traverse,0 )); FAILTEST(fail);
 BSET(_result_1,BGET(it)); BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
VALUE Seq_Or_Optimizer_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;
VALUE oldinput1=IGET(input);
alt1_1: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(visit_Seq_Or_Optimizercb_1,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt1_2);
 BSET(autovar_1,BGET(it)); VALUE oldinput2=IGET(input);  VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ISET(input,INT2FIX(0));
   BSET(it,CALL(traverse,0 )); FAILTEST(pass1);BSET(it,CALL(visit_Seq_Or_Optimizercb_2,1,bind)); BSET(it,CALL(visit_Seq_Or_Optimizercb_3,1,bind)); 
 BSET(_result_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ISET(input,oldinput2);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ISET(input,oldinput1);if (IGET(cut)!=Qnil) goto fail;
  arg0=CALL(visit_Seq_Or_Optimizercb_4,1,bind); BSET(it,CALL(clas,1 ,arg0)); FAILTEST(alt1_3);
 BSET(autovar_2,BGET(it)); VALUE oldinput3=IGET(input);  VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_2)); ISET(input,INT2FIX(0));
   BSET(it,CALL(traverse,0 )); FAILTEST(pass2);BSET(it,CALL(visit_Seq_Or_Optimizercb_5,1,bind)); BSET(it,CALL(visit_Seq_Or_Optimizercb_6,1,bind)); 
 BSET(_result_1,BGET(it)); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ISET(input,oldinput3);
	if(fail2) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ISET(input,oldinput1); goto fail;
 accept1:;
BSET(it,BGET(_result_1));
return BGET(_result_1);
fail: return failobj; }
void Init_optimizer_and_or_c(){ 
 cls_AmethystOptimizer2=rb_define_class("AmethystOptimizer2",rb_const_get(rb_cObject,rb_intern("AmethystOptimizer"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystOptimizer2,"trans",AmethystOptimizer2_trans,0);

 cls_Seq_Or_Optimizer=rb_define_class("Seq_Or_Optimizer",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Seq_Or_Optimizer,"root",Seq_Or_Optimizer_root,0);
rb_define_method(cls_Seq_Or_Optimizer,"visit",Seq_Or_Optimizer_visit,0);
 }
