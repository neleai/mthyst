#include "cthyst.h"
VALUE cls_Seq_Or_Optimizer;
VALUE Seq_Or_Optimizer_clas(VALUE self ,VALUE a0);
VALUE Seq_Or_Optimizer_empty(VALUE self );
VALUE Seq_Or_Optimizer_eof(VALUE self );
VALUE Seq_Or_Optimizer_fails(VALUE self );
VALUE Seq_Or_Optimizer_itrans(VALUE self );
VALUE Seq_Or_Optimizer_root(VALUE self );
VALUE Seq_Or_Optimizer_traverse(VALUE self );
VALUE Seq_Or_Optimizer_traverse_item(VALUE self );
VALUE Seq_Or_Optimizer_visit(VALUE self );
VALUE Seq_Or_Optimizer_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Seq_Or_Optimizercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Seq_Or_Optimizercb_1,1,bind); 
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Seq_Or_Optimizer_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Seq_Or_Optimizer_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Seq_Or_Optimizercb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self); char chr1=FIX2INT(CALL(switchcbSeq_Or_Optimizer2,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(itrans_Seq_Or_Optimizercb_1,1,bind); 
 rb_ary_store(bind,2,it); it=CALL(itrans_Seq_Or_Optimizercb_2,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,4,it); int oldpos6; while(1){oldpos6=ame_getpos(self);  it=CALL(itrans_Seq_Or_Optimizercb_3,1,bind);  arg0=it; it=Seq_Or_Optimizer_clas(self ,arg0); FAILTEST(break2);
 rb_ary_store(bind,5,it); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Seq_Or_Optimizer_root(self ); FAILTEST(pass4);
 rb_ary_store(bind,6,it);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto break2;
it=rb_ary_entry(bind,6);
 rb_ary_store(bind,7,it); it=CALL(itrans_Seq_Or_Optimizercb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,8,it);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
  it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(itrans_Seq_Or_Optimizercb_5,1,bind); it=CALL(itrans_Seq_Or_Optimizercb_6,1,bind); 
 rb_ary_store(bind,9,it);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,9);
 rb_ary_store(bind,10,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,10,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,10,it);  break;default: goto break1;}it=CALL(itrans_Seq_Or_Optimizercb_7,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,11,it); it=rb_ary_entry(bind,11);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Seq_Or_Optimizer_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Seq_Or_Optimizercb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Seq_Or_Optimizercb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Seq_Or_Optimizercb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Seq_Or_Optimizer_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Seq_Or_Optimizercb_4,1,bind);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Seq_Or_Optimizercb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcbSeq_Or_Optimizer3,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Seq_Or_Optimizer_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Seq_Or_Optimizercb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Seq_Or_Optimizer_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Seq_Or_Optimizercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,5,it);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=rb_ary_entry(bind,5);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Seq_Or_Optimizer_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Seq_Or_Optimizercb_3,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,6,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Seq_Or_Optimizer_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,7,it);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=rb_ary_entry(bind,7);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Seq_Or_Optimizer_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Seq_Or_Optimizercb_4,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;default: goto fail;}it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Seq_Or_Optimizer_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcbSeq_Or_Optimizer1,1,ame_curobj(self)));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Seq_Or_Optimizer_traverse(self ); FAILTEST(pass1);it=CALL(visit_Seq_Or_Optimizercb_1,1,bind); 
 rb_ary_store(bind,1,it);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,1);
 rb_ary_store(bind,2,it);  break;case 1:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,3,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,4,it); it=CALL(visit_Seq_Or_Optimizercb_2,1,bind); FAILTEST(pass2);it=CALL(visit_Seq_Or_Optimizercb_3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,5,it); it=CALL(visit_Seq_Or_Optimizercb_4,1,bind); FAILTEST(pass2);it=CALL(visit_Seq_Or_Optimizercb_5,1,bind); 
 rb_ary_store(bind,6,it);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_2;
it=rb_ary_entry(bind,6);
 rb_ary_store(bind,2,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,7,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it); it=CALL(visit_Seq_Or_Optimizercb_6,1,bind); FAILTEST(pass3);  it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(visit_Seq_Or_Optimizercb_7,1,bind); FAILTEST(pass3);it=CALL(visit_Seq_Or_Optimizercb_8,1,bind); 
 rb_ary_store(bind,8,it);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_3;
it=rb_ary_entry(bind,8);
 rb_ary_store(bind,2,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto fail;
 accept1:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,9,it); int oldpos5=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Seq_Or_Optimizer_traverse(self ); FAILTEST(pass4);it=CALL(visit_Seq_Or_Optimizercb_9,1,bind); 
 rb_ary_store(bind,10,it);   it=Seq_Or_Optimizer_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos5); ame_setlen(self,oldlen4);
	if(fail4) goto fail;
it=rb_ary_entry(bind,10);
 rb_ary_store(bind,2,it);  break;default: goto fail;}it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
void Init_optimizer_and_or_c(){ 
 cls_Seq_Or_Optimizer=rb_define_class("Seq_Or_Optimizer",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Seq_Or_Optimizer,"clas",Seq_Or_Optimizer_clas,1);
rb_define_method(cls_Seq_Or_Optimizer,"empty",Seq_Or_Optimizer_empty,0);
rb_define_method(cls_Seq_Or_Optimizer,"eof",Seq_Or_Optimizer_eof,0);
rb_define_method(cls_Seq_Or_Optimizer,"fails",Seq_Or_Optimizer_fails,0);
rb_define_method(cls_Seq_Or_Optimizer,"itrans",Seq_Or_Optimizer_itrans,0);
rb_define_method(cls_Seq_Or_Optimizer,"root",Seq_Or_Optimizer_root,0);
rb_define_method(cls_Seq_Or_Optimizer,"traverse",Seq_Or_Optimizer_traverse,0);
rb_define_method(cls_Seq_Or_Optimizer,"traverse_item",Seq_Or_Optimizer_traverse_item,0);
rb_define_method(cls_Seq_Or_Optimizer,"visit",Seq_Or_Optimizer_visit,0);
 rb_eval_string("testversion('e3c260ae410c6d6bc0f38687f4bf2d25')");}
