#include "cthyst.h"
VALUE cls_Switch_Dataflow;
VALUE Switch_Dataflow_clas(VALUE self ,VALUE a0);
VALUE Switch_Dataflow_empty(VALUE self );
VALUE Switch_Dataflow_eof(VALUE self );
VALUE Switch_Dataflow_fails(VALUE self );
VALUE Switch_Dataflow_first(VALUE self );
VALUE Switch_Dataflow_spaces(VALUE self );
VALUE Switch_Dataflow_token(VALUE self ,VALUE a0);
VALUE Switch_Dataflow_value(VALUE self );
VALUE Switch_Dataflow_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Switch_Dataflowcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Switch_Dataflowcb_1,1,bind); 
return it;
fail: return failobj; }
VALUE Switch_Dataflow_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Switch_Dataflow_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Switch_Dataflow_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Switch_Dataflowcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(28);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcbSwitch_Dataflow1,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,1,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Switch_Dataflow_value(self ); FAILTEST(break1);
 rb_ary_store(bind,2,it); it=CALL(first_Switch_Dataflowcb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,3,it); it=CALL(first_Switch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,5,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,5);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=CALL(first_Switch_Dataflowcb_3,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,7,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,8,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=Switch_Dataflow_value(self ); FAILTEST(break2);
 rb_ary_store(bind,9,it); it=CALL(first_Switch_Dataflowcb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,8);
 rb_ary_store(bind,3,it); it=CALL(first_Switch_Dataflowcb_5,1,bind); 
 rb_ary_store(bind,10,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=rb_ary_entry(bind,10);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=CALL(first_Switch_Dataflowcb_6,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 2:; int oldpos7=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,11,it); int oldpos8=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,12,it); int oldpos9; while(1){oldpos9=ame_getpos(self);   it=Switch_Dataflow_value(self ); FAILTEST(break3);
 rb_ary_store(bind,13,it); it=CALL(first_Switch_Dataflowcb_7,1,bind);  if (IGET(stop)!=Qnil){{oldpos9=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos9); it=rb_ary_entry(bind,12);
 rb_ary_store(bind,3,it); it=CALL(first_Switch_Dataflowcb_8,1,bind); 
 rb_ary_store(bind,14,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos8); ame_setlen(self,oldlen3);
	if(fail3) goto alt3_2;
it=rb_ary_entry(bind,14);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=CALL(first_Switch_Dataflowcb_9,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos7); goto fail;
 accept3:;
 break;case 3:; int oldpos10=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);
 rb_ary_store(bind,15,it); int oldpos11=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,15)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_Switch_Dataflowcb_10,1,bind); 
 rb_ary_store(bind,16,it); it=CALL(first_Switch_Dataflowcb_11,1,bind); int oldpos12=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,16)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Switch_Dataflow_value(self ); FAILTEST(pass5);
 rb_ary_store(bind,17,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos12); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=rb_ary_entry(bind,17);
 rb_ary_store(bind,18,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos11); ame_setlen(self,oldlen4);
	if(fail4) goto alt4_2;
it=rb_ary_entry(bind,18);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=CALL(first_Switch_Dataflowcb_12,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos10); goto fail;
 accept4:;
 break;case 4:; int oldpos13=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2);
 rb_ary_store(bind,19,it); int oldpos14=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,19)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Switch_Dataflow_value(self ); FAILTEST(pass6);
 rb_ary_store(bind,4,it); it=CALL(first_Switch_Dataflowcb_13,1,bind); 
 rb_ary_store(bind,20,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos14); ame_setlen(self,oldlen6);
	if(fail6) goto alt5_2;
it=rb_ary_entry(bind,20);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=CALL(first_Switch_Dataflowcb_14,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos13); goto fail;
 accept5:;
 break;case 5:; int oldpos15=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos15);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2);
 rb_ary_store(bind,21,it); int oldpos16=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,21)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos17; while(1){oldpos17=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (IGET(stop)!=Qnil){{oldpos17=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos17); it=CALL(first_Switch_Dataflowcb_15,1,bind); 
 rb_ary_store(bind,22,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos16); ame_setlen(self,oldlen7);
	if(fail7) goto alt6_2;
it=rb_ary_entry(bind,22);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos15);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=CALL(first_Switch_Dataflowcb_16,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos15); goto fail;
 accept6:;
 break;case 6:; int oldpos18=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_2);
 rb_ary_store(bind,23,it); int oldpos19=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,rb_ary_entry(bind,23)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass8);
 rb_ary_store(bind,24,it); int oldpos20=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,rb_ary_entry(bind,24)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Switch_Dataflow_spaces(self ); FAILTEST(pass9); it=rb_str_new2("seq"); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(pass9);  it=Switch_Dataflow_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos20); ame_setlen(self,oldlen9);
	if(fail9) goto pass8;
 it=CALL(first_Switch_Dataflowcb_17,1,bind);  arg0=it; it=Switch_Dataflow_clas(self ,arg0); FAILTEST(pass8);
 rb_ary_store(bind,25,it); int oldpos21=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,rb_ary_entry(bind,25)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass10);
 rb_ary_store(bind,26,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos21); ame_setlen(self,oldlen10);
	if(fail10) goto pass8;
it=CALL(first_Switch_Dataflowcb_18,1,bind); 
 rb_ary_store(bind,27,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos19); ame_setlen(self,oldlen8);
	if(fail8) goto alt7_2;
it=rb_ary_entry(bind,27);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos18);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_3);it=CALL(first_Switch_Dataflowcb_19,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos18); goto fail;
 accept7:;
 break;case 7:;   it=AmethystCore_anything(self ); FAILTEST(fail);it=CALL(first_Switch_Dataflowcb_20,1,bind); 
 rb_ary_store(bind,6,it);  break;default:;   it=Switch_Dataflow_fails(self ); FAILTEST(fail); break;}it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(9);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self); it=CALL(spaces_Switch_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,1,it);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,2,it); it=CALL(spaces_Switch_Dataflowcb_2,1,bind); FAILTEST(break1);it=rb_ary_entry(bind,2);
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=CALL(spaces_Switch_Dataflowcb_3,1,bind); FAILTEST(break1);it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
 rb_ary_store(bind,7,it); it=CALL(spaces_Switch_Dataflowcb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,8,it); it=rb_ary_entry(bind,8);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(2); rb_ary_store(bind,0,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Switch_Dataflow_spaces(self ); FAILTEST(fail); it=rb_ary_entry(bind,0); arg0=it; it=AmethystCore_seq(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_value(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Switch_Dataflow_first(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }VALUE cls_Detect_Switch;
VALUE Detect_Switch_clas(VALUE self ,VALUE a0);
VALUE Detect_Switch_empty(VALUE self );
VALUE Detect_Switch_eof(VALUE self );
VALUE Detect_Switch_fails(VALUE self );
VALUE Detect_Switch_itrans(VALUE self );
VALUE Detect_Switch_root(VALUE self );
VALUE Detect_Switch_traverse(VALUE self );
VALUE Detect_Switch_traverse_item(VALUE self );
VALUE Detect_Switch_visit(VALUE self );
VALUE Detect_Switch_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Detect_Switchcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Detect_Switch_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Detect_Switchcb_1,1,bind); 
return it;
fail: return failobj; }
VALUE Detect_Switch_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Detect_Switch_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Detect_Switch_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Detect_Switch_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Detect_Switchcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Detect_Switch_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self); char chr1=FIX2INT(CALL(switchcbDetect_Switch2,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(itrans_Detect_Switchcb_1,1,bind); 
 rb_ary_store(bind,2,it); it=CALL(itrans_Detect_Switchcb_2,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,4,it); int oldpos6; while(1){oldpos6=ame_getpos(self);  it=CALL(itrans_Detect_Switchcb_3,1,bind);  arg0=it; it=Detect_Switch_clas(self ,arg0); FAILTEST(break2);
 rb_ary_store(bind,5,it); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_Switch_root(self ); FAILTEST(pass4);
 rb_ary_store(bind,6,it);   it=Detect_Switch_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto break2;
it=rb_ary_entry(bind,6);
 rb_ary_store(bind,7,it); it=CALL(itrans_Detect_Switchcb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,8,it);   it=Detect_Switch_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
  it=Detect_Switch_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(itrans_Detect_Switchcb_5,1,bind); it=CALL(itrans_Detect_Switchcb_6,1,bind); 
 rb_ary_store(bind,9,it);   it=Detect_Switch_eof(self ); FAILTEST(pass1);
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
 rb_ary_store(bind,10,it);  break;default:;   it=Detect_Switch_fails(self ); FAILTEST(break1); break;}it=CALL(itrans_Detect_Switchcb_7,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,11,it); it=rb_ary_entry(bind,11);
return it;
fail: return failobj; }
VALUE Detect_Switch_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Detect_Switch_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Detect_Switch_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Detect_Switchcb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Detect_Switchcb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Detect_Switchcb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Detect_Switch_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Detect_Switchcb_4,1,bind);   it=Detect_Switch_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Detect_Switch_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Detect_Switch_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Detect_Switchcb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Detect_Switch_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcbDetect_Switch3,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Detect_Switch_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Detect_Switchcb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Detect_Switch_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Detect_Switchcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,5,it);   it=Detect_Switch_eof(self ); FAILTEST(pass1);
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
   it=Detect_Switch_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Detect_Switchcb_3,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,6,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_Switch_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,7,it);   it=Detect_Switch_eof(self ); FAILTEST(pass2);
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
   it=Detect_Switch_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Detect_Switchcb_4,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;default:;   it=Detect_Switch_fails(self ); FAILTEST(fail); break;}it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Detect_Switch_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Detect_Switchcb_1,1,bind);  arg0=it; it=Detect_Switch_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Detect_Switchcb_2,1,bind); 
 rb_ary_store(bind,1,it); it=rb_ary_new3(0);
 rb_ary_store(bind,2,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_Switch_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,3,it); it=CALL(visit_Detect_Switchcb_3,1,bind); FAILTEST(break1);it=CALL(visit_Detect_Switchcb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); int oldpos3=ame_getpos(self);
   it=Detect_Switch_eof(self ); FAILTEST(reject1); x=1; goto accept1;  reject1: x=0; accept1: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto pass1;it=CALL(visit_Detect_Switchcb_5,1,bind); it=CALL(visit_Detect_Switchcb_6,1,bind); FAILTEST(pass1);it=CALL(visit_Detect_Switchcb_7,1,bind); it=CALL(visit_Detect_Switchcb_8,1,bind); it=CALL(visit_Detect_Switchcb_9,1,bind); it=CALL(visit_Detect_Switchcb_10,1,bind); FAILTEST(pass1);it=CALL(visit_Detect_Switchcb_11,1,bind); 
 rb_ary_store(bind,4,it);   it=Detect_Switch_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }VALUE cls_Detect_ClasSwitch;
VALUE Detect_ClasSwitch_clas(VALUE self ,VALUE a0);
VALUE Detect_ClasSwitch_empty(VALUE self );
VALUE Detect_ClasSwitch_eof(VALUE self );
VALUE Detect_ClasSwitch_fails(VALUE self );
VALUE Detect_ClasSwitch_itrans(VALUE self );
VALUE Detect_ClasSwitch_predicate(VALUE self ,VALUE a0,VALUE a1);
VALUE Detect_ClasSwitch_root(VALUE self );
VALUE Detect_ClasSwitch_traverse(VALUE self );
VALUE Detect_ClasSwitch_traverse_item(VALUE self );
VALUE Detect_ClasSwitch_visit(VALUE self );
VALUE Detect_ClasSwitch_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Detect_ClasSwitchcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Detect_ClasSwitchcb_1,1,bind); 
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Detect_ClasSwitch_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Detect_ClasSwitch_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Detect_ClasSwitchcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self); char chr1=FIX2INT(CALL(switchcbDetect_ClasSwitch5,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(itrans_Detect_ClasSwitchcb_1,1,bind); it=CALL(itrans_Detect_ClasSwitchcb_2,1,bind); 
 rb_ary_store(bind,2,it); it=CALL(itrans_Detect_ClasSwitchcb_3,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,4,it); int oldpos6; while(1){oldpos6=ame_getpos(self);  it=CALL(itrans_Detect_ClasSwitchcb_4,1,bind);  arg0=it; it=Detect_ClasSwitch_clas(self ,arg0); FAILTEST(break2);
 rb_ary_store(bind,5,it); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_ClasSwitch_root(self ); FAILTEST(pass4);
 rb_ary_store(bind,6,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto break2;
it=rb_ary_entry(bind,6);
 rb_ary_store(bind,7,it); it=CALL(itrans_Detect_ClasSwitchcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,8,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
  it=Detect_ClasSwitch_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(itrans_Detect_ClasSwitchcb_6,1,bind); it=CALL(itrans_Detect_ClasSwitchcb_7,1,bind); 
 rb_ary_store(bind,9,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass1);
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
 rb_ary_store(bind,10,it);  break;default:;   it=Detect_ClasSwitch_fails(self ); FAILTEST(break1); break;}it=CALL(itrans_Detect_ClasSwitchcb_8,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,11,it); it=rb_ary_entry(bind,11);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_predicate(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(19); rb_ary_store(bind,7,a0);rb_ary_store(bind,0,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it); it=CALL(predicate_Detect_ClasSwitchcb_1,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 char chr1=FIX2INT(CALL(switchcbDetect_ClasSwitch4,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,3,it); it=rb_ary_new3(0);
 rb_ary_store(bind,4,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,5,it); it=CALL(predicate_Detect_ClasSwitchcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,6,it); it=CALL(predicate_Detect_ClasSwitchcb_3,1,bind); 
 rb_ary_store(bind,8,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_2;
it=rb_ary_entry(bind,8);
 rb_ary_store(bind,9,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,9,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto pass1;
 accept1:;
 break;case 1:; int oldpos5=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,10,it); int oldpos6=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,11,it); it=CALL(predicate_Detect_ClasSwitchcb_4,1,bind); FAILTEST(pass3); it=CALL(predicate_Detect_ClasSwitchcb_5,1,bind);  arg0=it; it=Detect_ClasSwitch_clas(self ,arg0); FAILTEST(pass3);
 rb_ary_store(bind,12,it); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,12)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass4);
 rb_ary_store(bind,13,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=CALL(predicate_Detect_ClasSwitchcb_6,1,bind); FAILTEST(pass3);it=CALL(predicate_Detect_ClasSwitchcb_7,1,bind); 
 rb_ary_store(bind,14,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos6); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_2;
it=rb_ary_entry(bind,14);
 rb_ary_store(bind,9,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,9,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos5); goto pass1;
 accept2:;
 break;case 2:; int oldpos8=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,15,it); int oldpos9=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,15)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(predicate_Detect_ClasSwitchcb_8,1,bind); 
 rb_ary_store(bind,11,it); it=CALL(predicate_Detect_ClasSwitchcb_9,1,bind); 
 rb_ary_store(bind,16,it); it=CALL(predicate_Detect_ClasSwitchcb_10,1,bind);
 rb_ary_store(bind,17,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos9); ame_setlen(self,oldlen5);
	if(fail5) goto alt3_2;
it=rb_ary_entry(bind,17);
 rb_ary_store(bind,9,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,9,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos8); goto pass1;
 accept3:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,9,it);  break;default:;   it=Detect_ClasSwitch_fails(self ); FAILTEST(pass1); break;}  it=Detect_ClasSwitch_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,9);
 rb_ary_store(bind,18,it); it=rb_ary_entry(bind,18);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Detect_ClasSwitch_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Detect_ClasSwitchcb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Detect_ClasSwitchcb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Detect_ClasSwitchcb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Detect_ClasSwitchcb_4,1,bind);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Detect_ClasSwitch_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Detect_ClasSwitchcb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcbDetect_ClasSwitch6,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Detect_ClasSwitchcb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Detect_ClasSwitchcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,5,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass1);
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
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Detect_ClasSwitchcb_3,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,6,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_ClasSwitch_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,7,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass2);
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
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Detect_ClasSwitchcb_4,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;default:;   it=Detect_ClasSwitch_fails(self ); FAILTEST(fail); break;}it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Detect_ClasSwitchcb_1,1,bind);  arg0=it; it=Detect_ClasSwitch_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,1,it); it=rb_ary_new3(0);
 rb_ary_store(bind,2,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,3,it); it=CALL(visit_Detect_ClasSwitchcb_2,1,bind); FAILTEST(break1);it=CALL(visit_Detect_ClasSwitchcb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); int oldpos3=ame_getpos(self);
   it=Detect_ClasSwitch_eof(self ); FAILTEST(reject1); x=1; goto accept1;  reject1: x=0; accept1: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto pass1;it=CALL(visit_Detect_ClasSwitchcb_4,1,bind); it=CALL(visit_Detect_ClasSwitchcb_5,1,bind); FAILTEST(pass1);it=CALL(visit_Detect_ClasSwitchcb_6,1,bind); it=CALL(visit_Detect_ClasSwitchcb_7,1,bind); it=CALL(visit_Detect_ClasSwitchcb_8,1,bind); it=CALL(visit_Detect_ClasSwitchcb_9,1,bind); 
 rb_ary_store(bind,4,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,4);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
void Init_detect_switch_c(){ 
 cls_Switch_Dataflow=rb_define_class("Switch_Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Switch_Dataflow,"clas",Switch_Dataflow_clas,1);
rb_define_method(cls_Switch_Dataflow,"empty",Switch_Dataflow_empty,0);
rb_define_method(cls_Switch_Dataflow,"eof",Switch_Dataflow_eof,0);
rb_define_method(cls_Switch_Dataflow,"fails",Switch_Dataflow_fails,0);
rb_define_method(cls_Switch_Dataflow,"first",Switch_Dataflow_first,0);
rb_define_method(cls_Switch_Dataflow,"spaces",Switch_Dataflow_spaces,0);
rb_define_method(cls_Switch_Dataflow,"token",Switch_Dataflow_token,1);
rb_define_method(cls_Switch_Dataflow,"value",Switch_Dataflow_value,0);

 cls_Detect_Switch=rb_define_class("Detect_Switch",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Detect_Switch,"clas",Detect_Switch_clas,1);
rb_define_method(cls_Detect_Switch,"empty",Detect_Switch_empty,0);
rb_define_method(cls_Detect_Switch,"eof",Detect_Switch_eof,0);
rb_define_method(cls_Detect_Switch,"fails",Detect_Switch_fails,0);
rb_define_method(cls_Detect_Switch,"itrans",Detect_Switch_itrans,0);
rb_define_method(cls_Detect_Switch,"root",Detect_Switch_root,0);
rb_define_method(cls_Detect_Switch,"traverse",Detect_Switch_traverse,0);
rb_define_method(cls_Detect_Switch,"traverse_item",Detect_Switch_traverse_item,0);
rb_define_method(cls_Detect_Switch,"visit",Detect_Switch_visit,0);

 cls_Detect_ClasSwitch=rb_define_class("Detect_ClasSwitch",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Detect_ClasSwitch,"clas",Detect_ClasSwitch_clas,1);
rb_define_method(cls_Detect_ClasSwitch,"empty",Detect_ClasSwitch_empty,0);
rb_define_method(cls_Detect_ClasSwitch,"eof",Detect_ClasSwitch_eof,0);
rb_define_method(cls_Detect_ClasSwitch,"fails",Detect_ClasSwitch_fails,0);
rb_define_method(cls_Detect_ClasSwitch,"itrans",Detect_ClasSwitch_itrans,0);
rb_define_method(cls_Detect_ClasSwitch,"predicate",Detect_ClasSwitch_predicate,2);
rb_define_method(cls_Detect_ClasSwitch,"root",Detect_ClasSwitch_root,0);
rb_define_method(cls_Detect_ClasSwitch,"traverse",Detect_ClasSwitch_traverse,0);
rb_define_method(cls_Detect_ClasSwitch,"traverse_item",Detect_ClasSwitch_traverse_item,0);
rb_define_method(cls_Detect_ClasSwitch,"visit",Detect_ClasSwitch_visit,0);
 rb_eval_string("testversion('3041306e5e19bdcff8373ea152f8d370')");}
