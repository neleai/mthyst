#include "cthyst.h"
VALUE cls_Dead_Code_Detector2;
VALUE Dead_Code_Detector2_clas(VALUE self ,VALUE a0);
VALUE Dead_Code_Detector2_root(VALUE self );
VALUE Dead_Code_Detector2_traverse(VALUE self );
VALUE Dead_Code_Detector2_traverse_item(VALUE self );
VALUE Dead_Code_Detector2_vars_in(VALUE self );
VALUE Dead_Code_Detector2_visit(VALUE self );
VALUE Dead_Code_Detector2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Dead_Code_Detector2cb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Dead_Code_Detector2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Dead_Code_Detector2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(root_Dead_Code_Detector2cb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(root_Dead_Code_Detector2cb_3,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,1,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Dead_Code_Detector2cb_4,1,bind); it=CALL(root_Dead_Code_Detector2cb_5,1,bind);   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass2);it=CALL(root_Dead_Code_Detector2cb_6,1,bind); 
 rb_ary_store(bind,2,it); it=CALL(root_Dead_Code_Detector2cb_7,1,bind); it=CALL(root_Dead_Code_Detector2cb_8,1,bind); 
 rb_ary_store(bind,3,it); 
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
it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }
VALUE Dead_Code_Detector2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Dead_Code_Detector2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Dead_Code_Detector2cb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Dead_Code_Detector2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Dead_Code_Detector2_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Dead_Code_Detector2cb_4,1,bind); 
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
it=CALL(traverse_Dead_Code_Detector2cb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Dead_Code_Detector2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dead_Code_Detector2_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Dead_Code_Detector2cb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dead_Code_Detector2cb_2,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Dead_Code_Detector2_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Dead_Code_Detector2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dead_Code_Detector2cb_4,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Dead_Code_Detector2_vars_in(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(19);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); it=CALL(vars_in_Dead_Code_Detector2cb_1,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); char chr1=FIX2INT(CALL(switchcb2,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_2,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,1,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dead_Code_Detector2cb_3,1,bind); 
 rb_ary_store(bind,2,it); it=CALL(vars_in_Dead_Code_Detector2cb_4,1,bind); it=CALL(vars_in_Dead_Code_Detector2cb_5,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); 
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
  it=CALL(vars_in_Dead_Code_Detector2cb_6,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt2_2);
 rb_ary_store(bind,3,it); int oldpos6=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dead_Code_Detector2cb_7,1,bind); 
 rb_ary_store(bind,4,it); it=CALL(vars_in_Dead_Code_Detector2cb_8,1,bind); int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos7); 
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
 break;case 2:; int oldpos8=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_9,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt3_2);
 rb_ary_store(bind,5,it); int oldpos9=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dead_Code_Detector2cb_10,1,bind); 
 rb_ary_store(bind,6,it); it=CALL(vars_in_Dead_Code_Detector2cb_11,1,bind); it=CALL(vars_in_Dead_Code_Detector2cb_12,1,bind); int oldpos10; while(1){oldpos10=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (IGET(stop)!=Qnil){{oldpos10=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos10); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos9); ame_setlen(self,oldlen3);
	if(fail3) goto alt3_2;
 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos8); goto break1;
 accept3:;
 break;case 3:; int oldpos11=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_13,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt4_2);
 rb_ary_store(bind,7,it); int oldpos12=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dead_Code_Detector2cb_14,1,bind); 
 rb_ary_store(bind,8,it); it=CALL(vars_in_Dead_Code_Detector2cb_15,1,bind); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos12); ame_setlen(self,oldlen4);
	if(fail4) goto alt4_2;
 
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3); 
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos11); goto break1;
 accept4:;
 break;case 4:; int oldpos13=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_16,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt5_2);
 rb_ary_store(bind,9,it); int oldpos14=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass5);
 rb_ary_store(bind,10,it); it=CALL(vars_in_Dead_Code_Detector2cb_17,1,bind); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos14); ame_setlen(self,oldlen5);
	if(fail5) goto alt5_2;
 
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos13);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_3); 
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos13); goto break1;
 accept5:;
 break;case 5:; int oldpos15=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos15);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_18,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt6_2);
 rb_ary_store(bind,11,it); int oldpos16=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass6);
 rb_ary_store(bind,12,it); it=CALL(vars_in_Dead_Code_Detector2cb_19,1,bind); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos16); ame_setlen(self,oldlen6);
	if(fail6) goto alt6_2;
 
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos15);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3); 
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos15); goto break1;
 accept6:;
 break;case 6:; int oldpos17=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_20,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt7_2);
 rb_ary_store(bind,13,it); int oldpos18=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dead_Code_Detector2cb_21,1,bind); 
 rb_ary_store(bind,14,it); it=CALL(vars_in_Dead_Code_Detector2cb_22,1,bind); int oldpos19=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,rb_ary_entry(bind,14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass8);
 rb_ary_store(bind,15,it); it=CALL(vars_in_Dead_Code_Detector2cb_23,1,bind); 
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos19); ame_setlen(self,oldlen8);
	if(fail8) goto pass7;

	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos18); ame_setlen(self,oldlen7);
	if(fail7) goto alt7_2;
 
ISET(cut,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt7_3); 
ISET(cut,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos17); goto break1;
 accept7:;
 break;case 7:; int oldpos20=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos20);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_24,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt8_2);
 rb_ary_store(bind,16,it); int oldpos21=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,rb_ary_entry(bind,16)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass9);it=CALL(vars_in_Dead_Code_Detector2cb_25,1,bind); 
 rb_ary_store(bind,17,it); it=CALL(vars_in_Dead_Code_Detector2cb_26,1,bind); 
	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos21); ame_setlen(self,oldlen9);
	if(fail9) goto alt8_2;
 
ISET(cut,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos20);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_3); 
ISET(cut,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos20); goto break1;
 accept8:;
 break;case 8:;   it=AmethystCore_anything(self ); FAILTEST(break1); break;default: goto break1;} if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,18,it); it=rb_ary_entry(bind,18);
return it;
fail: return failobj; }
VALUE Dead_Code_Detector2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(18);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcb1,1,ame_curobj(self)));  switch(chr1){case 0:;  it=CALL(visit_Dead_Code_Detector2cb_1,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);  it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass1);
 rb_ary_store(bind,1,it); it=CALL(visit_Dead_Code_Detector2cb_2,1,bind);   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
 break;case 1:;  it=CALL(visit_Dead_Code_Detector2cb_3,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,3,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,4,it); it=CALL(visit_Dead_Code_Detector2cb_4,1,bind); it=CALL(visit_Dead_Code_Detector2cb_5,1,bind); 
 rb_ary_store(bind,5,it); it=CALL(visit_Dead_Code_Detector2cb_6,1,bind); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,6,it); int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass4);
 rb_ary_store(bind,1,it); 
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

	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto fail;
it=CALL(visit_Dead_Code_Detector2cb_7,1,bind); 
 rb_ary_store(bind,2,it);  break;case 2:;  it=CALL(visit_Dead_Code_Detector2cb_8,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,8,it); int oldpos5=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Detector2cb_9,1,bind); 
 rb_ary_store(bind,9,it); it=CALL(visit_Dead_Code_Detector2cb_10,1,bind); int oldpos6=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass6);
 rb_ary_store(bind,7,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos6); ame_setlen(self,oldlen6);
	if(fail6) goto pass5;
it=CALL(visit_Dead_Code_Detector2cb_11,1,bind);   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass5);
 rb_ary_store(bind,4,it); it=CALL(visit_Dead_Code_Detector2cb_12,1,bind); 
 rb_ary_store(bind,10,it); it=CALL(visit_Dead_Code_Detector2cb_13,1,bind); int oldpos7=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass7);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos7); ame_setlen(self,oldlen7);
	if(fail7) goto pass5;

	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos5); ame_setlen(self,oldlen5);
	if(fail5) goto fail;
it=CALL(visit_Dead_Code_Detector2cb_14,1,bind); 
 rb_ary_store(bind,2,it);  break;case 3:;  it=CALL(visit_Dead_Code_Detector2cb_15,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,11,it); int oldpos8=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,rb_ary_entry(bind,11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Detector2cb_16,1,bind); 
 rb_ary_store(bind,12,it); it=CALL(visit_Dead_Code_Detector2cb_17,1,bind); int oldpos9=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,rb_ary_entry(bind,12)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass9);
 rb_ary_store(bind,13,it); int oldpos10=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,rb_ary_entry(bind,13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass10);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos10); ame_setlen(self,oldlen10);
	if(fail10) goto pass9;

	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos9); ame_setlen(self,oldlen9);
	if(fail9) goto pass8;
  it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass8);
 rb_ary_store(bind,4,it); 
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos8); ame_setlen(self,oldlen8);
	if(fail8) goto fail;
it=CALL(visit_Dead_Code_Detector2cb_18,1,bind); 
 rb_ary_store(bind,2,it);  break;case 4:;  it=CALL(visit_Dead_Code_Detector2cb_19,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,14,it); int oldpos11=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,rb_ary_entry(bind,14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Detector2cb_20,1,bind); 
 rb_ary_store(bind,15,it); it=CALL(visit_Dead_Code_Detector2cb_21,1,bind); int oldpos12=ame_getpos(self); int oldlen12=ame_getlen(self); VALUE oldsrc12=ame_getsrc(self); int fail12=0;
ame_setsrc(self,rb_ary_entry(bind,15)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass12);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ame_setsrc(self,oldsrc12); ame_setpos(self,oldpos12); ame_setlen(self,oldlen12);
	if(fail12) goto pass11;
it=CALL(visit_Dead_Code_Detector2cb_22,1,bind);   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass11);
 rb_ary_store(bind,2,it); 
	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos11); ame_setlen(self,oldlen11);
	if(fail11) goto fail;
 break;case 5:;  it=CALL(visit_Dead_Code_Detector2cb_23,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,16,it); int oldpos13=ame_getpos(self); int oldlen13=ame_getlen(self); VALUE oldsrc13=ame_getsrc(self); int fail13=0;
ame_setsrc(self,rb_ary_entry(bind,16)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Detector2cb_24,1,bind); 
 rb_ary_store(bind,17,it); it=CALL(visit_Dead_Code_Detector2cb_25,1,bind); int oldpos14=ame_getpos(self); int oldlen14=ame_getlen(self); VALUE oldsrc14=ame_getsrc(self); int fail14=0;
ame_setsrc(self,rb_ary_entry(bind,17)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass14);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success14;
	pass14: fail14=1;
	success14: ame_setsrc(self,oldsrc14); ame_setpos(self,oldpos14); ame_setlen(self,oldlen14);
	if(fail14) goto pass13;
it=CALL(visit_Dead_Code_Detector2cb_26,1,bind);   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass13);
 rb_ary_store(bind,2,it); 
	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ame_setsrc(self,oldsrc13); ame_setpos(self,oldpos13); ame_setlen(self,oldlen13);
	if(fail13) goto fail;
 break;default: goto fail;}it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }VALUE cls_Dead_Code_Deleter2;
VALUE Dead_Code_Deleter2_clas(VALUE self ,VALUE a0);
VALUE Dead_Code_Deleter2_root(VALUE self );
VALUE Dead_Code_Deleter2_traverse(VALUE self );
VALUE Dead_Code_Deleter2_traverse_item(VALUE self );
VALUE Dead_Code_Deleter2_visit(VALUE self );
VALUE Dead_Code_Deleter2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Dead_Code_Deleter2cb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Dead_Code_Deleter2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(root_Dead_Code_Deleter2cb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(root_Dead_Code_Deleter2cb_3,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,1,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Dead_Code_Deleter2cb_4,1,bind); 
 rb_ary_store(bind,2,it); it=CALL(root_Dead_Code_Deleter2cb_5,1,bind);   it=Dead_Code_Deleter2_traverse(self ); FAILTEST(pass2);it=CALL(root_Dead_Code_Deleter2cb_6,1,bind); it=CALL(root_Dead_Code_Deleter2cb_7,1,bind); 
 rb_ary_store(bind,3,it); 
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
it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Dead_Code_Deleter2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Dead_Code_Deleter2cb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Dead_Code_Deleter2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Dead_Code_Deleter2_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Dead_Code_Deleter2cb_4,1,bind); 
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
it=CALL(traverse_Dead_Code_Deleter2cb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dead_Code_Deleter2_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Dead_Code_Deleter2cb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dead_Code_Deleter2cb_2,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Dead_Code_Deleter2_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Dead_Code_Deleter2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dead_Code_Deleter2cb_4,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Deleter2_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcb3,1,ame_curobj(self)));  switch(chr1){case 0:;  it=CALL(visit_Dead_Code_Deleter2cb_1,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=CALL(visit_Dead_Code_Deleter2cb_2,1,bind); 
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(visit_Dead_Code_Deleter2cb_3,1,bind); 
 rb_ary_store(bind,2,it);  break;case 1:;  it=CALL(visit_Dead_Code_Deleter2cb_4,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,3,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter2cb_5,1,bind); 
 rb_ary_store(bind,1,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto fail;
it=CALL(visit_Dead_Code_Deleter2cb_6,1,bind); 
 rb_ary_store(bind,2,it);  break;case 2:;  it=CALL(visit_Dead_Code_Deleter2cb_7,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,4,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter2cb_8,1,bind); 
 rb_ary_store(bind,5,it);   it=Dead_Code_Deleter2_traverse(self ); FAILTEST(pass3);it=CALL(visit_Dead_Code_Deleter2cb_9,1,bind); 
 rb_ary_store(bind,6,it); it=CALL(visit_Dead_Code_Deleter2cb_10,1,bind); 
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=CALL(visit_Dead_Code_Deleter2cb_11,1,bind); 
 rb_ary_store(bind,2,it);  break;case 3:;  it=CALL(visit_Dead_Code_Deleter2cb_12,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,7,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter2cb_13,1,bind); 
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto fail;
it=CALL(visit_Dead_Code_Deleter2cb_14,1,bind); 
 rb_ary_store(bind,2,it);  break;default: goto fail;}it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }VALUE cls_Constant_Propagator2;

VALUE cls_Communize_Or2;
VALUE Communize_Or2_clas(VALUE self ,VALUE a0);
VALUE Communize_Or2_empty(VALUE self );
VALUE Communize_Or2_eof(VALUE self );
VALUE Communize_Or2_fails(VALUE self );
VALUE Communize_Or2_root(VALUE self );
VALUE Communize_Or2_traverse(VALUE self );
VALUE Communize_Or2_traverse_item(VALUE self );
VALUE Communize_Or2_visit(VALUE self );
VALUE Communize_Or2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Communize_Or2cb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Communize_Or2_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Communize_Or2cb_1,1,bind); 
return it;
fail: return failobj; }
VALUE Communize_Or2_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Communize_Or2_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Communize_Or2_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Communize_Or2_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Communize_Or2cb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Communize_Or2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Communize_Or2_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Communize_Or2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Communize_Or2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Communize_Or2cb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Communize_Or2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Communize_Or2_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Communize_Or2cb_4,1,bind); 
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
it=CALL(traverse_Communize_Or2cb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Communize_Or2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Communize_Or2_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Communize_Or2cb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Communize_Or2cb_2,1,bind);  arg0=it; it=Communize_Or2_clas(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Communize_Or2_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Communize_Or2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Communize_Or2cb_4,1,bind);  arg0=it; it=Communize_Or2_clas(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or2_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Communize_Or2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Communize_Or2cb_1,1,bind);  arg0=it; it=Communize_Or2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,1,it);  it=CALL(visit_Communize_Or2cb_2,1,bind);  arg0=it; it=Communize_Or2_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or2_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,3,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(visit_Communize_Or2cb_3,1,bind); int oldpos3; while(1){oldpos3=ame_getpos(self);  it=CALL(visit_Communize_Or2cb_4,1,bind);  arg0=it; it=Communize_Or2_clas(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,2,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or2_traverse(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto break1;
it=CALL(visit_Communize_Or2cb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,5,it);   it=Communize_Or2_eof(self ); FAILTEST(pass1);it=CALL(visit_Communize_Or2cb_6,1,bind); 
 rb_ary_store(bind,6,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }VALUE cls_Communize_Or3;
VALUE Communize_Or3_clas(VALUE self ,VALUE a0);
VALUE Communize_Or3_empty(VALUE self );
VALUE Communize_Or3_eof(VALUE self );
VALUE Communize_Or3_fails(VALUE self );
VALUE Communize_Or3_root(VALUE self );
VALUE Communize_Or3_traverse(VALUE self );
VALUE Communize_Or3_traverse_item(VALUE self );
VALUE Communize_Or3_visit(VALUE self );
VALUE Communize_Or3_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Communize_Or3cb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Communize_Or3_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Communize_Or3cb_1,1,bind); 
return it;
fail: return failobj; }
VALUE Communize_Or3_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Communize_Or3_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Communize_Or3_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Communize_Or3_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Communize_Or3cb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Communize_Or3_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Communize_Or3_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Communize_Or3_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Communize_Or3cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Communize_Or3cb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Communize_Or3cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Communize_Or3_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Communize_Or3cb_4,1,bind); 
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
it=CALL(traverse_Communize_Or3cb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Communize_Or3_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Communize_Or3_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Communize_Or3cb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Communize_Or3cb_2,1,bind);  arg0=it; it=Communize_Or3_clas(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Communize_Or3_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Communize_Or3cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Communize_Or3cb_4,1,bind);  arg0=it; it=Communize_Or3_clas(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or3_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Communize_Or3_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Communize_Or3cb_1,1,bind);  arg0=it; it=Communize_Or3_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,1,it);  it=CALL(visit_Communize_Or3cb_2,1,bind);  arg0=it; it=Communize_Or3_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or3_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,3,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(visit_Communize_Or3cb_3,1,bind); int oldpos3; while(1){oldpos3=ame_getpos(self);  it=CALL(visit_Communize_Or3cb_4,1,bind);  arg0=it; it=Communize_Or3_clas(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,2,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or3_traverse(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto break1;
it=CALL(visit_Communize_Or3cb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,5,it);   it=Communize_Or3_eof(self ); FAILTEST(pass1);it=CALL(visit_Communize_Or3cb_6,1,bind); 
 rb_ary_store(bind,6,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }VALUE cls_Move_Assignments2;
VALUE Move_Assignments2_clas(VALUE self ,VALUE a0);
VALUE Move_Assignments2_empty(VALUE self );
VALUE Move_Assignments2_eof(VALUE self );
VALUE Move_Assignments2_fails(VALUE self );
VALUE Move_Assignments2_itrans(VALUE self );
VALUE Move_Assignments2_move(VALUE self ,VALUE a0,VALUE a1);
VALUE Move_Assignments2_root(VALUE self );
VALUE Move_Assignments2_traverse(VALUE self );
VALUE Move_Assignments2_traverse_item(VALUE self );
VALUE Move_Assignments2_visit(VALUE self );
VALUE Move_Assignments2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Move_Assignments2cb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Move_Assignments2_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Move_Assignments2cb_1,1,bind); 
return it;
fail: return failobj; }
VALUE Move_Assignments2_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Move_Assignments2_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Move_Assignments2_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Move_Assignments2_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Move_Assignments2cb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Move_Assignments2_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Move_Assignments2_root(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Move_Assignments2_move(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(18); rb_ary_store(bind,2,a0);rb_ary_store(bind,3,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcb5,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(move_Move_Assignments2cb_1,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,1,it); int oldpos3; while(1){oldpos3=ame_getpos(self);  it=rb_ary_entry(bind,2); arg0=it;it=rb_ary_entry(bind,3); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(move_Move_Assignments2cb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,5,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(move_Move_Assignments2cb_3,1,bind);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,7,it); it=CALL(move_Move_Assignments2cb_4,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(move_Move_Assignments2cb_5,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt2_2);
 rb_ary_store(bind,8,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,9,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,10,it); int oldpos7=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 int oldpos8=ame_getpos(self);
   it=Move_Assignments2_eof(self ); FAILTEST(reject1); x=1; goto accept4;  reject1: x=0; accept4: it=Qnil; ame_setpos(self,oldpos8); if (x==0) goto alt3_2;it=rb_ary_entry(bind,10);
 rb_ary_store(bind,11,it); it=CALL(move_Move_Assignments2cb_6,1,bind); int oldpos9=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_ary_entry(bind,2); arg0=it;it=rb_ary_entry(bind,3); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(pass3);
 rb_ary_store(bind,12,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos9); ame_setlen(self,oldlen3);
	if(fail3) goto alt3_2;
 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 it=rb_ary_entry(bind,10);
 rb_ary_store(bind,12,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos7); goto break2;
 accept3:;
it=CALL(move_Move_Assignments2cb_7,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,9);
 rb_ary_store(bind,5,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=CALL(move_Move_Assignments2cb_8,1,bind);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,7,it); it=CALL(move_Move_Assignments2cb_9,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 2:; int oldpos10=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(move_Move_Assignments2cb_10,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt4_2);
 rb_ary_store(bind,13,it); int oldpos11=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(move_Move_Assignments2cb_11,1,bind); 
 rb_ary_store(bind,14,it); it=CALL(move_Move_Assignments2cb_12,1,bind); 
 rb_ary_store(bind,15,it); it=CALL(move_Move_Assignments2cb_13,1,bind); int oldpos12=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,15)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_ary_entry(bind,2); arg0=it;it=rb_ary_entry(bind,3); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(pass5);
 rb_ary_store(bind,16,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos12); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=CALL(move_Move_Assignments2cb_14,1,bind); 
 rb_ary_store(bind,17,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos11); ame_setlen(self,oldlen4);
	if(fail4) goto alt4_2;
it=CALL(move_Move_Assignments2cb_15,1,bind);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,7,it); it=CALL(move_Move_Assignments2cb_16,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos10); goto fail;
 accept5:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,7,it); it=CALL(move_Move_Assignments2cb_17,1,bind); 
 rb_ary_store(bind,6,it);  break;default: goto fail;}it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Move_Assignments2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Move_Assignments2_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Move_Assignments2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Move_Assignments2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Move_Assignments2cb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Move_Assignments2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Move_Assignments2_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Move_Assignments2cb_4,1,bind); 
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
it=CALL(traverse_Move_Assignments2cb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Move_Assignments2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Move_Assignments2_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Move_Assignments2cb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Move_Assignments2cb_2,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Move_Assignments2_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Move_Assignments2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Move_Assignments2cb_4,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Move_Assignments2_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Move_Assignments2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(24);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Move_Assignments2cb_1,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Move_Assignments2cb_2,1,bind); 
 rb_ary_store(bind,1,it);   it=Move_Assignments2_traverse(self ); FAILTEST(pass1);it=CALL(visit_Move_Assignments2cb_3,1,bind); 
 rb_ary_store(bind,2,it); it=CALL(visit_Move_Assignments2cb_4,1,bind); 
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,4,it); it=CALL(visit_Move_Assignments2cb_5,1,bind); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_entry(bind,1);
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,6,it); char chr1=FIX2INT(CALL(switchcb4,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos3=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
  it=CALL(visit_Move_Assignments2cb_6,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,7,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,8,it); int oldpos5; while(1){oldpos5=ame_getpos(self);  it=rb_ary_entry(bind,6); arg0=it;it=rb_ary_entry(bind,5); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(break1);
 rb_ary_store(bind,9,it); it=CALL(visit_Move_Assignments2cb_7,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,8);
 rb_ary_store(bind,10,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_2;
it=CALL(visit_Move_Assignments2cb_8,1,bind);
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,12,it); it=CALL(visit_Move_Assignments2cb_9,1,bind); 
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos3); goto pass2;
 accept1:;
 break;case 1:; int oldpos6=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
  it=CALL(visit_Move_Assignments2cb_10,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt2_2);
 rb_ary_store(bind,13,it); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,14,it); int oldpos8; while(1){oldpos8=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,15,it); int oldpos9=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 int oldpos10=ame_getpos(self);
   it=Move_Assignments2_eof(self ); FAILTEST(reject1); x=1; goto accept4;  reject1: x=0; accept4: it=Qnil; ame_setpos(self,oldpos10); if (x==0) goto alt3_2;it=rb_ary_entry(bind,15);
 rb_ary_store(bind,16,it); it=CALL(visit_Move_Assignments2cb_11,1,bind); int oldpos11=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,16)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_ary_entry(bind,6); arg0=it;it=rb_ary_entry(bind,5); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(pass5);
 rb_ary_store(bind,17,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos11); ame_setlen(self,oldlen5);
	if(fail5) goto alt3_2;
 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 it=rb_ary_entry(bind,15);
 rb_ary_store(bind,17,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos9); goto break2;
 accept3:;
it=CALL(visit_Move_Assignments2cb_12,1,bind);  if (IGET(stop)!=Qnil){{oldpos8=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos8); it=rb_ary_entry(bind,14);
 rb_ary_store(bind,10,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto alt2_2;
it=CALL(visit_Move_Assignments2cb_13,1,bind);
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,12,it); it=CALL(visit_Move_Assignments2cb_14,1,bind); 
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos6); goto pass2;
 accept2:;
 break;case 2:; int oldpos12=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
  it=CALL(visit_Move_Assignments2cb_15,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt4_2);
 rb_ary_store(bind,18,it); int oldpos13=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,18)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Move_Assignments2cb_16,1,bind); 
 rb_ary_store(bind,19,it); it=CALL(visit_Move_Assignments2cb_17,1,bind); 
 rb_ary_store(bind,20,it); it=CALL(visit_Move_Assignments2cb_18,1,bind); int oldpos14=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,20)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_ary_entry(bind,6); arg0=it;it=rb_ary_entry(bind,5); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(pass7);
 rb_ary_store(bind,21,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos14); ame_setlen(self,oldlen7);
	if(fail7) goto pass6;
it=CALL(visit_Move_Assignments2cb_19,1,bind); 
 rb_ary_store(bind,22,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos13); ame_setlen(self,oldlen6);
	if(fail6) goto alt4_2;
it=CALL(visit_Move_Assignments2cb_20,1,bind);
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,12,it); it=CALL(visit_Move_Assignments2cb_21,1,bind); 
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos12); goto pass2;
 accept5:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,12,it); it=CALL(visit_Move_Assignments2cb_22,1,bind); 
 rb_ary_store(bind,11,it);  break;default: goto pass2;}it=rb_ary_entry(bind,11);
 rb_ary_store(bind,23,it); 
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
it=rb_ary_entry(bind,23);
return it;
fail: return failobj; }
void Init_dead_code_elimination2_c(){ 
 cls_Dead_Code_Detector2=rb_define_class("Dead_Code_Detector2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Dead_Code_Detector2,"clas",Dead_Code_Detector2_clas,1);
rb_define_method(cls_Dead_Code_Detector2,"root",Dead_Code_Detector2_root,0);
rb_define_method(cls_Dead_Code_Detector2,"traverse",Dead_Code_Detector2_traverse,0);
rb_define_method(cls_Dead_Code_Detector2,"traverse_item",Dead_Code_Detector2_traverse_item,0);
rb_define_method(cls_Dead_Code_Detector2,"vars_in",Dead_Code_Detector2_vars_in,0);
rb_define_method(cls_Dead_Code_Detector2,"visit",Dead_Code_Detector2_visit,0);

 cls_Dead_Code_Deleter2=rb_define_class("Dead_Code_Deleter2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Dead_Code_Deleter2,"clas",Dead_Code_Deleter2_clas,1);
rb_define_method(cls_Dead_Code_Deleter2,"root",Dead_Code_Deleter2_root,0);
rb_define_method(cls_Dead_Code_Deleter2,"traverse",Dead_Code_Deleter2_traverse,0);
rb_define_method(cls_Dead_Code_Deleter2,"traverse_item",Dead_Code_Deleter2_traverse_item,0);
rb_define_method(cls_Dead_Code_Deleter2,"visit",Dead_Code_Deleter2_visit,0);

 cls_Constant_Propagator2=rb_define_class("Constant_Propagator2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");


 cls_Communize_Or2=rb_define_class("Communize_Or2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Communize_Or2,"clas",Communize_Or2_clas,1);
rb_define_method(cls_Communize_Or2,"empty",Communize_Or2_empty,0);
rb_define_method(cls_Communize_Or2,"eof",Communize_Or2_eof,0);
rb_define_method(cls_Communize_Or2,"fails",Communize_Or2_fails,0);
rb_define_method(cls_Communize_Or2,"root",Communize_Or2_root,0);
rb_define_method(cls_Communize_Or2,"traverse",Communize_Or2_traverse,0);
rb_define_method(cls_Communize_Or2,"traverse_item",Communize_Or2_traverse_item,0);
rb_define_method(cls_Communize_Or2,"visit",Communize_Or2_visit,0);

 cls_Communize_Or3=rb_define_class("Communize_Or3",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Communize_Or3,"clas",Communize_Or3_clas,1);
rb_define_method(cls_Communize_Or3,"empty",Communize_Or3_empty,0);
rb_define_method(cls_Communize_Or3,"eof",Communize_Or3_eof,0);
rb_define_method(cls_Communize_Or3,"fails",Communize_Or3_fails,0);
rb_define_method(cls_Communize_Or3,"root",Communize_Or3_root,0);
rb_define_method(cls_Communize_Or3,"traverse",Communize_Or3_traverse,0);
rb_define_method(cls_Communize_Or3,"traverse_item",Communize_Or3_traverse_item,0);
rb_define_method(cls_Communize_Or3,"visit",Communize_Or3_visit,0);

 cls_Move_Assignments2=rb_define_class("Move_Assignments2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Move_Assignments2,"clas",Move_Assignments2_clas,1);
rb_define_method(cls_Move_Assignments2,"empty",Move_Assignments2_empty,0);
rb_define_method(cls_Move_Assignments2,"eof",Move_Assignments2_eof,0);
rb_define_method(cls_Move_Assignments2,"fails",Move_Assignments2_fails,0);
rb_define_method(cls_Move_Assignments2,"itrans",Move_Assignments2_itrans,0);
rb_define_method(cls_Move_Assignments2,"move",Move_Assignments2_move,2);
rb_define_method(cls_Move_Assignments2,"root",Move_Assignments2_root,0);
rb_define_method(cls_Move_Assignments2,"traverse",Move_Assignments2_traverse,0);
rb_define_method(cls_Move_Assignments2,"traverse_item",Move_Assignments2_traverse_item,0);
rb_define_method(cls_Move_Assignments2,"visit",Move_Assignments2_visit,0);
 rb_eval_string("testversion('e80f5b1452216225111d55622ffff64a')");}
