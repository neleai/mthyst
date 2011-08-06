#include "cthyst.h"
VALUE cls_AmethystOptimizer2;
VALUE AmethystOptimizer2_trans(VALUE self );
VALUE AmethystOptimizer2_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizer2cb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(IGET(src),rb_intern("size"),0)));
 it=CALL(trans_AmethystOptimizer2cb_2,1,bind); 
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=CALL(transfn,0 ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(trans_AmethystOptimizer2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(trans_AmethystOptimizer2cb_4,1,bind); int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
 it=CALL(trans_AmethystOptimizer2cb_5,1,bind); FAILTEST(alt2_2);it=CALL(trans_AmethystOptimizer2cb_6,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
 it=CALL(trans_AmethystOptimizer2cb_7,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto alt1_2;
 accept2:;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(trans_AmethystOptimizer2cb_8,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_4,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(IGET(src),rb_intern("size"),0)));
 it=CALL(trans_AmethystOptimizer2cb_9,1,bind); 
 BSET(autovar_5,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=CALL(trans,0 ); FAILTEST(break2);
 BSET(autovar_6,it); it=CALL(trans_AmethystOptimizer2cb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=BGET(autovar_5);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
it=CALL(trans_AmethystOptimizer2cb_11,1,bind); int oldpos7=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_3;}
 it=CALL(trans_AmethystOptimizer2cb_12,1,bind); FAILTEST(alt3_2);it=CALL(trans_AmethystOptimizer2cb_13,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_3;}
 it=CALL(trans_AmethystOptimizer2cb_14,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos7); goto alt1_3;
 accept3:;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_call_super(0,vals); FAILTEST(alt1_4);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE cls_Seq_Or_Optimizer;
VALUE Seq_Or_Optimizer_root(VALUE self );
VALUE Seq_Or_Optimizer_visit(VALUE self );
VALUE Seq_Or_Optimizer_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=CALL(traverse,0 ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(visit_Seq_Or_Optimizercb_1,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=IGET(src); int fail1=0;
ISET(src,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(IGET(src),rb_intern("size"),0)));
   it=CALL(traverse,0 ); FAILTEST(pass1);it=CALL(visit_Seq_Or_Optimizercb_2,1,bind); it=CALL(visit_Seq_Or_Optimizercb_3,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ISET(src,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  arg0=CALL(visit_Seq_Or_Optimizercb_4,1,bind); it=CALL(clas,1 ,arg0); FAILTEST(alt1_3);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=IGET(src); int fail2=0;
ISET(src,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(IGET(src),rb_intern("size"),0)));
   it=CALL(traverse,0 ); FAILTEST(pass2);it=CALL(visit_Seq_Or_Optimizercb_5,1,bind); it=CALL(visit_Seq_Or_Optimizercb_6,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ISET(src,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
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
