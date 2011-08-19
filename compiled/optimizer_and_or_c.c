#include "cthyst.h"
VALUE cls_AmethystOptimizer2;
VALUE AmethystOptimizer2_clas(VALUE self ,VALUE a0);
VALUE AmethystOptimizer2_trans(VALUE self );
VALUE AmethystOptimizer2_transfn(VALUE self );
VALUE AmethystOptimizer2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_AmethystOptimizer2cb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE AmethystOptimizer2_trans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystOptimizer2cb_1,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 BSET(i_1,it); it=CALL(trans_AmethystOptimizer2cb_2,1,bind); FAILTEST(alt1_2);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystOptimizer2_transfn(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(trans_AmethystOptimizer2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(trans_AmethystOptimizer2cb_4,1,bind); int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
 it=CALL(trans_AmethystOptimizer2cb_5,1,bind); FAILTEST(alt2_2);it=CALL(trans_AmethystOptimizer2cb_6,1,bind); 
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
 it=CALL(trans_AmethystOptimizer2cb_7,1,bind);
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto alt1_2;
 accept2:;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(trans_AmethystOptimizer2cb_8,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 BSET(i_1,it); it=CALL(trans_AmethystOptimizer2cb_9,1,bind); FAILTEST(alt1_3);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_4,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_5,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystOptimizer2_trans(self ); FAILTEST(break2);
 BSET(autovar_6,it); it=CALL(trans_AmethystOptimizer2cb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=BGET(autovar_5);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
it=CALL(trans_AmethystOptimizer2cb_11,1,bind); int oldpos7=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_3;}
 it=CALL(trans_AmethystOptimizer2cb_12,1,bind); FAILTEST(alt3_2);it=CALL(trans_AmethystOptimizer2cb_13,1,bind); 
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_3;}
 it=CALL(trans_AmethystOptimizer2cb_14,1,bind);
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos7); goto alt1_3;
 accept3:;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_call_super(0,vals); FAILTEST(alt1_4);
 BSET(_result_2,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_2);
return it;
fail: return failobj; }
VALUE AmethystOptimizer2_transfn(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystOptimizer2_trans(self ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE cls_Seq_Or_Optimizer;
VALUE Seq_Or_Optimizer_clas(VALUE self ,VALUE a0);
VALUE Seq_Or_Optimizer_root(VALUE self );
VALUE Seq_Or_Optimizer_traverse(VALUE self );
VALUE Seq_Or_Optimizer_traverse_item(VALUE self );
VALUE Seq_Or_Optimizer_visit(VALUE self );
VALUE Seq_Or_Optimizer_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_Seq_Or_Optimizercb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Seq_Or_Optimizer_traverse(self ); FAILTEST(alt1_2); 
ISET(cut,Qnil);goto accept1;
  alt1_2:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);it=rb_ary_new3(0);int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Seq_Or_Optimizercb_1,1,bind); 
 BSET(this_1,it); it=CALL(traverse_Seq_Or_Optimizercb_2,1,bind); 
 BSET(autovar_1,it); it=CALL(traverse_Seq_Or_Optimizercb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(key_1,it);   it=Seq_Or_Optimizer_traverse_item(self ); FAILTEST(pass3);
 BSET(it_1,it); it=CALL(traverse_Seq_Or_Optimizercb_4,1,bind); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Seq_Or_Optimizercb_5,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Seq_Or_Optimizer_visit(self ); FAILTEST(alt1_2);
 BSET(a_1,it); it=CALL(traverse_item_Seq_Or_Optimizercb_1,1,bind); it=BGET(a_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(traverse_item_Seq_Or_Optimizercb_2,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 BSET(i_1,it); it=CALL(traverse_item_Seq_Or_Optimizercb_3,1,bind); FAILTEST(alt1_3);it=BGET(i_1);
 BSET(_result_2,it); it=BGET(_result_2);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Seq_Or_Optimizer_traverse_item(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(traverse_item_Seq_Or_Optimizercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(traverse_item_Seq_Or_Optimizercb_5,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 BSET(i_1,it); it=CALL(traverse_item_Seq_Or_Optimizercb_6,1,bind); FAILTEST(alt1_4);it=BGET(i_1);
 BSET(_result_2,it); it=BGET(_result_2);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Seq_Or_Optimizer_traverse(self ); FAILTEST(pass2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(visit_Seq_Or_Optimizercb_1,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 BSET(i_1,it); it=CALL(visit_Seq_Or_Optimizercb_2,1,bind); FAILTEST(alt1_2);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Seq_Or_Optimizer_traverse(self ); FAILTEST(pass1);it=CALL(visit_Seq_Or_Optimizercb_3,1,bind); it=CALL(visit_Seq_Or_Optimizercb_4,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(visit_Seq_Or_Optimizercb_5,1,bind); 
 BSET(cls_1,it);   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 BSET(i_1,it); it=CALL(visit_Seq_Or_Optimizercb_6,1,bind); FAILTEST(alt1_3);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Seq_Or_Optimizer_traverse(self ); FAILTEST(pass2);it=CALL(visit_Seq_Or_Optimizercb_7,1,bind); it=CALL(visit_Seq_Or_Optimizercb_8,1,bind); 
 BSET(_result_2,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_2);
return it;
fail: return failobj; }
void Init_optimizer_and_or_c(){ 
 cls_AmethystOptimizer2=rb_define_class("AmethystOptimizer2",rb_const_get(rb_cObject,rb_intern("AmethystOptimizer"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_AmethystOptimizer2,"clas",AmethystOptimizer2_clas,1);
rb_define_method(cls_AmethystOptimizer2,"trans",AmethystOptimizer2_trans,0);
rb_define_method(cls_AmethystOptimizer2,"transfn",AmethystOptimizer2_transfn,0);

 cls_Seq_Or_Optimizer=rb_define_class("Seq_Or_Optimizer",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Seq_Or_Optimizer,"clas",Seq_Or_Optimizer_clas,1);
rb_define_method(cls_Seq_Or_Optimizer,"root",Seq_Or_Optimizer_root,0);
rb_define_method(cls_Seq_Or_Optimizer,"traverse",Seq_Or_Optimizer_traverse,0);
rb_define_method(cls_Seq_Or_Optimizer,"traverse_item",Seq_Or_Optimizer_traverse_item,0);
rb_define_method(cls_Seq_Or_Optimizer,"visit",Seq_Or_Optimizer_visit,0);
 }
