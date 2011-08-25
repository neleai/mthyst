#include "cthyst.h"
VALUE cls_Dataflow;
VALUE Dataflow_clas(VALUE self ,VALUE a0);
VALUE Dataflow_root(VALUE self );
VALUE Dataflow_traverse(VALUE self );
VALUE Dataflow_traverse_item(VALUE self );
VALUE Dataflow_vars_in(VALUE self );
VALUE Dataflow_visit(VALUE self );
VALUE Dataflow_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_Dataflowcb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dataflow_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Dataflowcb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(root_Dataflowcb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(root_Dataflowcb_3,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Dataflowcb_4,1,bind); it=CALL(root_Dataflowcb_5,1,bind); 
 BSET(autovar_3,it); it=CALL(root_Dataflowcb_6,1,bind); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass4);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos4); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;

	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
it=CALL(root_Dataflowcb_7,1,bind);   it=Dataflow_traverse(self ); FAILTEST(pass2);it=CALL(root_Dataflowcb_8,1,bind); it=CALL(root_Dataflowcb_9,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dataflow_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Dataflowcb_1,1,bind); 
 BSET(this_1,it); it=CALL(traverse_Dataflowcb_2,1,bind); 
 BSET(autovar_1,it); it=CALL(traverse_Dataflowcb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(key_1,it);   it=Dataflow_traverse_item(self ); FAILTEST(pass3);
 BSET(it_1,it); it=CALL(traverse_Dataflowcb_4,1,bind); 
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
it=CALL(traverse_Dataflowcb_5,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dataflow_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dataflow_visit(self ); FAILTEST(alt1_2);
 BSET(a_1,it); it=CALL(traverse_item_Dataflowcb_1,1,bind); it=BGET(a_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dataflowcb_2,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(traverse_item_Dataflowcb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dataflowcb_4,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse(self ); FAILTEST(pass2);
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
VALUE Dataflow_vars_in(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(ary_1,it); it=CALL(vars_in_Dataflowcb_1,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); char chr1=FIX2INT(CALL(switchcb2,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_2,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_3,1,bind); 
 BSET(autovar_2,it); it=CALL(vars_in_Dataflowcb_4,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); 
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:; int oldpos5=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_5,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt2_2);
 BSET(autovar_3,it); int oldpos6=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass2);
 BSET(autovar_4,it); it=CALL(vars_in_Dataflowcb_6,1,bind); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos6); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); 
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos5); goto break1;
 accept2:;
 break;case 2:; int oldpos7=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_7,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt3_2);
 BSET(autovar_5,it); int oldpos8=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_8,1,bind); 
 BSET(autovar_6,it); it=CALL(vars_in_Dataflowcb_9,1,bind); int oldpos9=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass4);
 BSET(autovar_7,it); it=CALL(vars_in_Dataflowcb_10,1,bind); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos9); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;

	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos8); ame_setlen(self,oldlen3);
	if(fail3) goto alt3_2;
 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos7); goto break1;
 accept3:;
 break;case 3:; int oldpos10=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_11,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt4_2);
 BSET(autovar_8,it); int oldpos11=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_12,1,bind); 
 BSET(autovar_9,it); it=CALL(vars_in_Dataflowcb_13,1,bind); int oldpos12; while(1){oldpos12=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldpos12=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos12); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos11); ame_setlen(self,oldlen5);
	if(fail5) goto alt4_2;
 
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos10); goto break1;
 accept4:;
 break;case 4:; int oldpos13=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_14,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt5_2);
 BSET(autovar_10,it); int oldpos14=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_15,1,bind); 
 BSET(autovar_11,it); it=CALL(vars_in_Dataflowcb_16,1,bind); it=CALL(vars_in_Dataflowcb_17,1,bind); int oldpos15; while(1){oldpos15=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (IGET(stop)!=Qnil){{oldpos15=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos15); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos14); ame_setlen(self,oldlen6);
	if(fail6) goto alt5_2;
 
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_3); 
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos13); goto break1;
 accept5:;
 break;case 5:; int oldpos16=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos16);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_18,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt6_2);
 BSET(autovar_12,it); int oldpos17=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_12)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_19,1,bind); 
 BSET(autovar_13,it); it=CALL(vars_in_Dataflowcb_20,1,bind); it=CALL(vars_in_Dataflowcb_21,1,bind); int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); if (IGET(stop)!=Qnil){{oldpos18=ame_getpos(self);goto break5;} } } break5: ISET(stop,Qnil);  ame_setpos(self,oldpos18); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos17); ame_setlen(self,oldlen7);
	if(fail7) goto alt6_2;
 
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos16);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3); 
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos16); goto break1;
 accept6:;
 break;case 6:; int oldpos19=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos19);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_22,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt7_2);
 BSET(autovar_14,it); int oldpos20=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass8);it=CALL(vars_in_Dataflowcb_23,1,bind); 
 BSET(autovar_15,it); it=CALL(vars_in_Dataflowcb_24,1,bind); 
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos20); ame_setlen(self,oldlen8);
	if(fail8) goto alt7_2;
 
ISET(cut,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos19);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_3); 
ISET(cut,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos19); goto break1;
 accept7:;
 break;case 7:; int oldpos21=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_25,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt8_2);
 BSET(autovar_10,it); int oldpos22=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_26,1,bind); 
 BSET(autovar_11,it); it=CALL(vars_in_Dataflowcb_27,1,bind); it=CALL(vars_in_Dataflowcb_28,1,bind); int oldpos23; while(1){oldpos23=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (IGET(stop)!=Qnil){{oldpos23=ame_getpos(self);goto break6;} } } break6: ISET(stop,Qnil);  ame_setpos(self,oldpos23); 
	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos22); ame_setlen(self,oldlen9);
	if(fail9) goto alt8_2;
 
ISET(cut,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_29,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt8_3);
 BSET(autovar_1,it); int oldpos24=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_30,1,bind); 
 BSET(autovar_2,it); it=CALL(vars_in_Dataflowcb_31,1,bind); int oldpos25; while(1){oldpos25=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); if (IGET(stop)!=Qnil){{oldpos25=ame_getpos(self);goto break7;} } } break7: ISET(stop,Qnil);  ame_setpos(self,oldpos25); 
	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos24); ame_setlen(self,oldlen10);
	if(fail10) goto alt8_3;
 
ISET(cut,Qnil);goto accept8;
alt8_3: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_32,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt8_4);
 BSET(autovar_8,it); int oldpos26=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_33,1,bind); 
 BSET(autovar_9,it); it=CALL(vars_in_Dataflowcb_34,1,bind); int oldpos27; while(1){oldpos27=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break8); if (IGET(stop)!=Qnil){{oldpos27=ame_getpos(self);goto break8;} } } break8: ISET(stop,Qnil);  ame_setpos(self,oldpos27); 
	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos26); ame_setlen(self,oldlen11);
	if(fail11) goto alt8_4;
 
ISET(cut,Qnil);goto accept8;
alt8_4: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_35,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt8_5);
 BSET(autovar_12,it); int oldpos28=ame_getpos(self); int oldlen12=ame_getlen(self); VALUE oldsrc12=ame_getsrc(self); int fail12=0;
ame_setsrc(self,BGET(autovar_12)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_36,1,bind); 
 BSET(autovar_13,it); it=CALL(vars_in_Dataflowcb_37,1,bind); it=CALL(vars_in_Dataflowcb_38,1,bind); int oldpos29; while(1){oldpos29=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break9); if (IGET(stop)!=Qnil){{oldpos29=ame_getpos(self);goto break9;} } } break9: ISET(stop,Qnil);  ame_setpos(self,oldpos29); 
	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ame_setsrc(self,oldsrc12); ame_setpos(self,oldpos28); ame_setlen(self,oldlen12);
	if(fail12) goto alt8_5;
 
ISET(cut,Qnil);goto accept8;
alt8_5: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_39,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt8_6);
 BSET(autovar_16,it); int oldpos30=ame_getpos(self); int oldlen13=ame_getlen(self); VALUE oldsrc13=ame_getsrc(self); int fail13=0;
ame_setsrc(self,BGET(autovar_16)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_40,1,bind); 
 BSET(autovar_17,it); it=CALL(vars_in_Dataflowcb_41,1,bind); 
	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ame_setsrc(self,oldsrc13); ame_setpos(self,oldpos30); ame_setlen(self,oldlen13);
	if(fail13) goto alt8_6;
 
ISET(cut,Qnil);goto accept8;
alt8_6: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_42,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt8_7);
 BSET(autovar_18,it); int oldpos31=ame_getpos(self); int oldlen14=ame_getlen(self); VALUE oldsrc14=ame_getsrc(self); int fail14=0;
ame_setsrc(self,BGET(autovar_18)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass14);
 BSET(autovar_19,it); it=CALL(vars_in_Dataflowcb_43,1,bind); 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success14;
	pass14: fail14=1;
	success14: ame_setsrc(self,oldsrc14); ame_setpos(self,oldpos31); ame_setlen(self,oldlen14);
	if(fail14) goto alt8_7;
 
ISET(cut,Qnil);goto accept8;
alt8_7: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_44,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt8_8);
 BSET(autovar_3,it); int oldpos32=ame_getpos(self); int oldlen15=ame_getlen(self); VALUE oldsrc15=ame_getsrc(self); int fail15=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass15);
 BSET(autovar_4,it); it=CALL(vars_in_Dataflowcb_45,1,bind); 
	if (CALL(eof,0)==failobj) goto pass15;
	goto success15;
	pass15: fail15=1;
	success15: ame_setsrc(self,oldsrc15); ame_setpos(self,oldpos32); ame_setlen(self,oldlen15);
	if(fail15) goto alt8_8;
 
ISET(cut,Qnil);goto accept8;
alt8_8: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_46,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt8_9);
 BSET(autovar_5,it); int oldpos33=ame_getpos(self); int oldlen16=ame_getlen(self); VALUE oldsrc16=ame_getsrc(self); int fail16=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_47,1,bind); 
 BSET(autovar_6,it); it=CALL(vars_in_Dataflowcb_48,1,bind); int oldpos34=ame_getpos(self); int oldlen17=ame_getlen(self); VALUE oldsrc17=ame_getsrc(self); int fail17=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass17);
 BSET(autovar_7,it); it=CALL(vars_in_Dataflowcb_49,1,bind); 
	if (CALL(eof,0)==failobj) goto pass17;
	goto success17;
	pass17: fail17=1;
	success17: ame_setsrc(self,oldsrc17); ame_setpos(self,oldpos34); ame_setlen(self,oldlen17);
	if(fail17) goto pass16;

	if (CALL(eof,0)==failobj) goto pass16;
	goto success16;
	pass16: fail16=1;
	success16: ame_setsrc(self,oldsrc16); ame_setpos(self,oldpos33); ame_setlen(self,oldlen16);
	if(fail16) goto alt8_9;
 
ISET(cut,Qnil);goto accept8;
alt8_9: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_50,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt8_10);
 BSET(autovar_14,it); int oldpos35=ame_getpos(self); int oldlen18=ame_getlen(self); VALUE oldsrc18=ame_getsrc(self); int fail18=0;
ame_setsrc(self,BGET(autovar_14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass18);it=CALL(vars_in_Dataflowcb_51,1,bind); 
 BSET(autovar_15,it); it=CALL(vars_in_Dataflowcb_52,1,bind); 
	if (CALL(eof,0)==failobj) goto pass18;
	goto success18;
	pass18: fail18=1;
	success18: ame_setsrc(self,oldsrc18); ame_setpos(self,oldpos35); ame_setlen(self,oldlen18);
	if(fail18) goto alt8_10;
 
ISET(cut,Qnil);goto accept8;
alt8_10: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_11); 
ISET(cut,Qnil);goto accept8;
  alt8_11:  ame_setpos(self,oldpos21); goto break1;
 accept8:;
 break;case 8:; int oldpos36=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos36);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_53,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt9_2);
 BSET(autovar_16,it); int oldpos37=ame_getpos(self); int oldlen19=ame_getlen(self); VALUE oldsrc19=ame_getsrc(self); int fail19=0;
ame_setsrc(self,BGET(autovar_16)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_54,1,bind); 
 BSET(autovar_17,it); it=CALL(vars_in_Dataflowcb_55,1,bind); 
	if (CALL(eof,0)==failobj) goto pass19;
	goto success19;
	pass19: fail19=1;
	success19: ame_setsrc(self,oldsrc19); ame_setpos(self,oldpos37); ame_setlen(self,oldlen19);
	if(fail19) goto alt9_2;
 
ISET(cut,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos36);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_3); 
ISET(cut,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos36); goto break1;
 accept9:;
 break;case 9:; int oldpos38=ame_getpos(self);
alt10_1: ame_setpos(self,oldpos38);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dataflowcb_56,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(alt10_2);
 BSET(autovar_18,it); int oldpos39=ame_getpos(self); int oldlen20=ame_getlen(self); VALUE oldsrc20=ame_getsrc(self); int fail20=0;
ame_setsrc(self,BGET(autovar_18)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass20);
 BSET(autovar_19,it); it=CALL(vars_in_Dataflowcb_57,1,bind); 
	if (CALL(eof,0)==failobj) goto pass20;
	goto success20;
	pass20: fail20=1;
	success20: ame_setsrc(self,oldsrc20); ame_setpos(self,oldpos39); ame_setlen(self,oldlen20);
	if(fail20) goto alt10_2;
 
ISET(cut,Qnil);goto accept10;
alt10_2: ame_setpos(self,oldpos38);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt10_3); 
ISET(cut,Qnil);goto accept10;
  alt10_3:  ame_setpos(self,oldpos38); goto break1;
 accept10:;
 break;default: goto break1;} if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(ary_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dataflow_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcb1,1,ame_curobj(self)));  switch(chr1){case 0:;  it=CALL(visit_Dataflowcb_1,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse(self ); FAILTEST(pass1);
 BSET(this_1,it); it=CALL(visit_Dataflowcb_2,1,bind); it=CALL(visit_Dataflowcb_3,1,bind); 
 BSET(autovar_2,it); it=CALL(visit_Dataflowcb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 BSET(autovar_3,it); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass3);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;

	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(visit_Dataflowcb_5,1,bind); 
 BSET(_result_1,it);  break;case 1:;  it=CALL(visit_Dataflowcb_6,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass4);  it=Dataflow_traverse(self ); FAILTEST(pass4);it=CALL(visit_Dataflowcb_7,1,bind); 
 BSET(autovar_5,it); it=CALL(visit_Dataflowcb_8,1,bind); int oldpos5=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass5);
 BSET(autovar_6,it); int oldpos6=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass6);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos6); ame_setlen(self,oldlen6);
	if(fail6) goto pass5;

	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos5); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=CALL(visit_Dataflowcb_9,1,bind); it=CALL(visit_Dataflowcb_10,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos4); ame_setlen(self,oldlen4);
	if(fail4) goto fail;
 break;case 2:;  it=CALL(visit_Dataflowcb_11,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_7,it); int oldpos7=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse(self ); FAILTEST(pass7);it=CALL(visit_Dataflowcb_12,1,bind); it=CALL(visit_Dataflowcb_13,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos7); ame_setlen(self,oldlen7);
	if(fail7) goto fail;
 break;case 3:;  it=CALL(visit_Dataflowcb_14,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_8,it); int oldpos8=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dataflowcb_15,1,bind); 
 BSET(prev_1,it);   it=Dataflow_traverse(self ); FAILTEST(pass8);it=CALL(visit_Dataflowcb_16,1,bind); it=CALL(visit_Dataflowcb_17,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos8); ame_setlen(self,oldlen8);
	if(fail8) goto fail;
 break;case 4:;  it=CALL(visit_Dataflowcb_18,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_9,it); int oldpos9=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(join_1,it); it=CALL(visit_Dataflowcb_19,1,bind); 
 BSET(old_1,it); int oldpos10; while(1){oldpos10=ame_getpos(self); it=CALL(visit_Dataflowcb_20,1,bind);   it=Dataflow_traverse_item(self ); FAILTEST(break1);it=CALL(visit_Dataflowcb_21,1,bind);  if (IGET(stop)!=Qnil){{oldpos10=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos10); it=CALL(visit_Dataflowcb_22,1,bind); it=CALL(visit_Dataflowcb_23,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos9); ame_setlen(self,oldlen9);
	if(fail9) goto fail;
 break;case 5:;  it=CALL(visit_Dataflowcb_24,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_10,it); int oldpos11=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse(self ); FAILTEST(pass10);it=CALL(visit_Dataflowcb_25,1,bind); it=CALL(visit_Dataflowcb_26,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos11); ame_setlen(self,oldlen10);
	if(fail10) goto fail;
 break;case 6:;  it=CALL(visit_Dataflowcb_27,1,bind);  arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_11,it); int oldpos12=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse(self ); FAILTEST(pass11);
 BSET(this_1,it); it=CALL(visit_Dataflowcb_28,1,bind); 
 BSET(autovar_12,it); it=CALL(visit_Dataflowcb_29,1,bind); int oldpos13=ame_getpos(self); int oldlen12=ame_getlen(self); VALUE oldsrc12=ame_getsrc(self); int fail12=0;
ame_setsrc(self,BGET(autovar_12)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass12);
 BSET(autovar_13,it); int oldpos14=ame_getpos(self); int oldlen13=ame_getlen(self); VALUE oldsrc13=ame_getsrc(self); int fail13=0;
ame_setsrc(self,BGET(autovar_13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass13);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ame_setsrc(self,oldsrc13); ame_setpos(self,oldpos14); ame_setlen(self,oldlen13);
	if(fail13) goto pass12;

	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ame_setsrc(self,oldsrc12); ame_setpos(self,oldpos13); ame_setlen(self,oldlen12);
	if(fail12) goto pass11;

	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos12); ame_setlen(self,oldlen11);
	if(fail11) goto fail;
it=CALL(visit_Dataflowcb_30,1,bind); 
 BSET(_result_1,it);  break;default: goto fail;}it=BGET(_result_1);
return it;
fail: return failobj; }VALUE cls_Dead_Code_Deleter3;
VALUE Dead_Code_Deleter3_clas(VALUE self ,VALUE a0);
VALUE Dead_Code_Deleter3_root(VALUE self );
VALUE Dead_Code_Deleter3_traverse(VALUE self );
VALUE Dead_Code_Deleter3_traverse_item(VALUE self );
VALUE Dead_Code_Deleter3_visit(VALUE self );
VALUE Dead_Code_Deleter3_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_Dead_Code_Deleter3cb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Dead_Code_Deleter3cb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(root_Dead_Code_Deleter3cb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(root_Dead_Code_Deleter3cb_3,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Dead_Code_Deleter3cb_4,1,bind); it=CALL(root_Dead_Code_Deleter3cb_5,1,bind);   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2);it=CALL(root_Dead_Code_Deleter3cb_6,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;

	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Dead_Code_Deleter3cb_1,1,bind); 
 BSET(this_1,it); it=CALL(traverse_Dead_Code_Deleter3cb_2,1,bind); 
 BSET(autovar_1,it); it=CALL(traverse_Dead_Code_Deleter3cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(key_1,it);   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(pass3);
 BSET(it_1,it); it=CALL(traverse_Dead_Code_Deleter3cb_4,1,bind); 
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
it=CALL(traverse_Dead_Code_Deleter3cb_5,1,bind); 
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt1_2);
 BSET(a_1,it); it=CALL(traverse_item_Dead_Code_Deleter3cb_1,1,bind); it=BGET(a_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dead_Code_Deleter3cb_2,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(traverse_item_Dead_Code_Deleter3cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dead_Code_Deleter3cb_4,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2);
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
VALUE Dead_Code_Deleter3_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcb4,1,ame_curobj(self)));  switch(chr1){case 0:; char chr2=FIX2INT(CALL(switchcb3,1,ame_curobj(self)));  switch(chr2){case 0:;  it=CALL(visit_Dead_Code_Deleter3cb_1,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it);  break;case 1:;  it=CALL(visit_Dead_Code_Deleter3cb_2,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it);  break;case 2:;  it=CALL(visit_Dead_Code_Deleter3cb_3,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it);  break;default: goto fail;}int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter3cb_4,1,bind); 
 BSET(this_1,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(visit_Dead_Code_Deleter3cb_5,1,bind); 
 BSET(_result_1,it);  break;case 1:;  it=CALL(visit_Dead_Code_Deleter3cb_6,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2);it=CALL(visit_Dead_Code_Deleter3cb_7,1,bind); 
 BSET(expr_1,it); it=CALL(visit_Dead_Code_Deleter3cb_8,1,bind); 
 BSET(this_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto fail;
it=CALL(visit_Dead_Code_Deleter3cb_9,1,bind); 
 BSET(_result_1,it);  break;case 2:; char chr3=FIX2INT(CALL(switchcb3,1,ame_curobj(self)));  switch(chr3){case 0:;  it=CALL(visit_Dead_Code_Deleter3cb_10,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it);  break;case 1:;  it=CALL(visit_Dead_Code_Deleter3cb_11,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it);  break;case 2:;  it=CALL(visit_Dead_Code_Deleter3cb_12,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it);  break;default: goto fail;}int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter3cb_13,1,bind); 
 BSET(this_1,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=CALL(visit_Dead_Code_Deleter3cb_14,1,bind); 
 BSET(_result_1,it);  break;case 3:;  it=CALL(visit_Dead_Code_Deleter3cb_15,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_3,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=CALL(visit_Dead_Code_Deleter3cb_16,1,bind); 
 BSET(this_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto fail;
it=CALL(visit_Dead_Code_Deleter3cb_17,1,bind); 
 BSET(_result_1,it);  break;case 4:; char chr4=FIX2INT(CALL(switchcb3,1,ame_curobj(self)));  switch(chr4){case 0:;  it=CALL(visit_Dead_Code_Deleter3cb_18,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it);  break;case 1:;  it=CALL(visit_Dead_Code_Deleter3cb_19,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it);  break;case 2:;  it=CALL(visit_Dead_Code_Deleter3cb_20,1,bind);  arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it);  break;default: goto fail;}int oldpos8=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter3cb_21,1,bind); 
 BSET(this_1,it); int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (IGET(stop)!=Qnil){{oldpos9=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos9); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos8); ame_setlen(self,oldlen5);
	if(fail5) goto fail;
it=CALL(visit_Dead_Code_Deleter3cb_22,1,bind); 
 BSET(_result_1,it);  break;default: goto fail;}it=BGET(_result_1);
return it;
fail: return failobj; }
void Init_dataflow_ssa_c(){ 
 cls_Dataflow=rb_define_class("Dataflow",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Dataflow,"clas",Dataflow_clas,1);
rb_define_method(cls_Dataflow,"root",Dataflow_root,0);
rb_define_method(cls_Dataflow,"traverse",Dataflow_traverse,0);
rb_define_method(cls_Dataflow,"traverse_item",Dataflow_traverse_item,0);
rb_define_method(cls_Dataflow,"vars_in",Dataflow_vars_in,0);
rb_define_method(cls_Dataflow,"visit",Dataflow_visit,0);

 cls_Dead_Code_Deleter3=rb_define_class("Dead_Code_Deleter3",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Dead_Code_Deleter3,"clas",Dead_Code_Deleter3_clas,1);
rb_define_method(cls_Dead_Code_Deleter3,"root",Dead_Code_Deleter3_root,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse",Dead_Code_Deleter3_traverse,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse_item",Dead_Code_Deleter3_traverse_item,0);
rb_define_method(cls_Dead_Code_Deleter3,"visit",Dead_Code_Deleter3_visit,0);
 rb_eval_string("testversion('cf7bc37f5cdd3e94e63d6dc15e39a065')");}
