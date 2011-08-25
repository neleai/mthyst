#include "cthyst.h"
VALUE cls_Dead_Code_Detector2;
VALUE Dead_Code_Detector2_clas(VALUE self ,VALUE a0);
VALUE Dead_Code_Detector2_root(VALUE self );
VALUE Dead_Code_Detector2_traverse(VALUE self );
VALUE Dead_Code_Detector2_traverse_item(VALUE self );
VALUE Dead_Code_Detector2_vars_in(VALUE self );
VALUE Dead_Code_Detector2_visit(VALUE self );
VALUE Dead_Code_Detector2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_Dead_Code_Detector2cb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dead_Code_Detector2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Dead_Code_Detector2cb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(root_Dead_Code_Detector2cb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(root_Dead_Code_Detector2cb_3,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Dead_Code_Detector2cb_4,1,bind); it=CALL(root_Dead_Code_Detector2cb_5,1,bind);   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass2);it=CALL(root_Dead_Code_Detector2cb_6,1,bind); 
 BSET(reachable_1,it); it=CALL(root_Dead_Code_Detector2cb_7,1,bind); it=CALL(root_Dead_Code_Detector2cb_8,1,bind); 
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
VALUE Dead_Code_Detector2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Dead_Code_Detector2cb_1,1,bind); 
 BSET(this_1,it); it=CALL(traverse_Dead_Code_Detector2cb_2,1,bind); 
 BSET(autovar_1,it); it=CALL(traverse_Dead_Code_Detector2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(key_1,it);   it=Dead_Code_Detector2_traverse_item(self ); FAILTEST(pass3);
 BSET(it_1,it); it=CALL(traverse_Dead_Code_Detector2cb_4,1,bind); 
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
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dead_Code_Detector2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dead_Code_Detector2_visit(self ); FAILTEST(alt1_2);
 BSET(a_1,it); it=CALL(traverse_item_Dead_Code_Detector2cb_1,1,bind); it=BGET(a_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dead_Code_Detector2cb_2,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Dead_Code_Detector2_traverse_item(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(traverse_item_Dead_Code_Detector2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dead_Code_Detector2cb_4,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass2);
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
VALUE Dead_Code_Detector2_vars_in(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 BSET(ary_1,it); it=CALL(vars_in_Dead_Code_Detector2cb_1,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_2,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dead_Code_Detector2cb_3,1,bind); 
 BSET(autovar_2,it); it=CALL(vars_in_Dead_Code_Detector2cb_4,1,bind); it=CALL(vars_in_Dead_Code_Detector2cb_5,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_6,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dead_Code_Detector2cb_7,1,bind); 
 BSET(autovar_4,it); it=CALL(vars_in_Dead_Code_Detector2cb_8,1,bind); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos6); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_9,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_5,it); int oldpos7=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dead_Code_Detector2cb_10,1,bind); 
 BSET(autovar_6,it); it=CALL(vars_in_Dead_Code_Detector2cb_11,1,bind); it=CALL(vars_in_Dead_Code_Detector2cb_12,1,bind); int oldpos8; while(1){oldpos8=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (IGET(stop)!=Qnil){{oldpos8=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos8); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos7); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_13,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_5);
 BSET(autovar_7,it); int oldpos9=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dead_Code_Detector2cb_14,1,bind); 
 BSET(autovar_8,it); it=CALL(vars_in_Dead_Code_Detector2cb_15,1,bind); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos9); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_5;
 
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_16,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_6);
 BSET(autovar_9,it); int oldpos10=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass5);
 BSET(autovar_10,it); it=CALL(vars_in_Dead_Code_Detector2cb_17,1,bind); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos10); ame_setlen(self,oldlen5);
	if(fail5) goto alt1_6;
 
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_18,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_7);
 BSET(autovar_11,it); int oldpos11=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass6);
 BSET(autovar_12,it); it=CALL(vars_in_Dead_Code_Detector2cb_19,1,bind); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos11); ame_setlen(self,oldlen6);
	if(fail6) goto alt1_7;
 
ISET(cut,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_20,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_8);
 BSET(autovar_13,it); int oldpos12=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dead_Code_Detector2cb_21,1,bind); 
 BSET(autovar_14,it); it=CALL(vars_in_Dead_Code_Detector2cb_22,1,bind); int oldpos13=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass8);
 BSET(autovar_15,it); it=CALL(vars_in_Dead_Code_Detector2cb_23,1,bind); 
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos13); ame_setlen(self,oldlen8);
	if(fail8) goto pass7;

	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos12); ame_setlen(self,oldlen7);
	if(fail7) goto alt1_8;
 
ISET(cut,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(vars_in_Dead_Code_Detector2cb_24,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_9);
 BSET(autovar_16,it); int oldpos14=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,BGET(autovar_16)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass9);it=CALL(vars_in_Dead_Code_Detector2cb_25,1,bind); 
 BSET(autovar_17,it); it=CALL(vars_in_Dead_Code_Detector2cb_26,1,bind); 
	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos14); ame_setlen(self,oldlen9);
	if(fail9) goto alt1_9;
 
ISET(cut,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_10); 
ISET(cut,Qnil);goto accept1;
  alt1_10:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=BGET(ary_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dead_Code_Detector2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(visit_Dead_Code_Detector2cb_1,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);  it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass1);
 BSET(var_1,it); it=CALL(visit_Dead_Code_Detector2cb_2,1,bind);   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass1);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(visit_Dead_Code_Detector2cb_3,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Detector2cb_4,1,bind); 
 BSET(autovar_3,it); it=CALL(visit_Dead_Code_Detector2cb_5,1,bind); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass3);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
it=CALL(visit_Dead_Code_Detector2cb_6,1,bind);   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(visit_Dead_Code_Detector2cb_7,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_4,it); int oldpos5=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Detector2cb_8,1,bind); 
 BSET(autovar_5,it); it=CALL(visit_Dead_Code_Detector2cb_9,1,bind); int oldpos6=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass5);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos6); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=CALL(visit_Dead_Code_Detector2cb_10,1,bind);   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass4);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos5); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_4;
 
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(visit_Dead_Code_Detector2cb_11,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_5);
 BSET(autovar_6,it); int oldpos7=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass6);
 BSET(this_1,it); it=CALL(visit_Dead_Code_Detector2cb_12,1,bind); it=CALL(visit_Dead_Code_Detector2cb_13,1,bind); 
 BSET(autovar_7,it); it=CALL(visit_Dead_Code_Detector2cb_14,1,bind); int oldpos8=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass7);
 BSET(autovar_8,it); int oldpos9=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass8);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos9); ame_setlen(self,oldlen8);
	if(fail8) goto pass7;

	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos8); ame_setlen(self,oldlen7);
	if(fail7) goto pass6;

	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos7); ame_setlen(self,oldlen6);
	if(fail6) goto alt1_5;
it=CALL(visit_Dead_Code_Detector2cb_15,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(visit_Dead_Code_Detector2cb_16,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_6);
 BSET(autovar_9,it); int oldpos10=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Detector2cb_17,1,bind); 
 BSET(autovar_10,it); it=CALL(visit_Dead_Code_Detector2cb_18,1,bind); int oldpos11=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass10);
 BSET(v_1,it); 
	if (CALL(eof,0)==failobj) goto pass10;
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos11); ame_setlen(self,oldlen10);
	if(fail10) goto pass9;
it=CALL(visit_Dead_Code_Detector2cb_19,1,bind);   it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass9);
 BSET(this_1,it); it=CALL(visit_Dead_Code_Detector2cb_20,1,bind); 
 BSET(autovar_11,it); it=CALL(visit_Dead_Code_Detector2cb_21,1,bind); int oldpos12=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass11);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass11;
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos12); ame_setlen(self,oldlen11);
	if(fail11) goto pass9;

	if (CALL(eof,0)==failobj) goto pass9;
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos10); ame_setlen(self,oldlen9);
	if(fail9) goto alt1_6;
it=CALL(visit_Dead_Code_Detector2cb_22,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(visit_Dead_Code_Detector2cb_23,1,bind);  arg0=it; it=Dead_Code_Detector2_clas(self ,arg0); FAILTEST(alt1_7);
 BSET(autovar_12,it); int oldpos13=ame_getpos(self); int oldlen12=ame_getlen(self); VALUE oldsrc12=ame_getsrc(self); int fail12=0;
ame_setsrc(self,BGET(autovar_12)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Detector2cb_24,1,bind); 
 BSET(autovar_13,it); it=CALL(visit_Dead_Code_Detector2cb_25,1,bind); int oldpos14=ame_getpos(self); int oldlen13=ame_getlen(self); VALUE oldsrc13=ame_getsrc(self); int fail13=0;
ame_setsrc(self,BGET(autovar_13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass13);
 BSET(autovar_14,it); int oldpos15=ame_getpos(self); int oldlen14=ame_getlen(self); VALUE oldsrc14=ame_getsrc(self); int fail14=0;
ame_setsrc(self,BGET(autovar_14)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Detector2_vars_in(self ); FAILTEST(pass14);
 BSET(var_1,it); 
	if (CALL(eof,0)==failobj) goto pass14;
	goto success14;
	pass14: fail14=1;
	success14: ame_setsrc(self,oldsrc14); ame_setpos(self,oldpos15); ame_setlen(self,oldlen14);
	if(fail14) goto pass13;

	if (CALL(eof,0)==failobj) goto pass13;
	goto success13;
	pass13: fail13=1;
	success13: ame_setsrc(self,oldsrc13); ame_setpos(self,oldpos14); ame_setlen(self,oldlen13);
	if(fail13) goto pass12;
  it=Dead_Code_Detector2_traverse(self ); FAILTEST(pass12);
 BSET(this_1,it); 
	if (CALL(eof,0)==failobj) goto pass12;
	goto success12;
	pass12: fail12=1;
	success12: ame_setsrc(self,oldsrc12); ame_setpos(self,oldpos13); ame_setlen(self,oldlen12);
	if(fail12) goto alt1_7;
it=CALL(visit_Dead_Code_Detector2cb_26,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_7:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }VALUE cls_Dead_Code_Deleter2;
VALUE Dead_Code_Deleter2_clas(VALUE self ,VALUE a0);
VALUE Dead_Code_Deleter2_root(VALUE self );
VALUE Dead_Code_Deleter2_traverse(VALUE self );
VALUE Dead_Code_Deleter2_traverse_item(VALUE self );
VALUE Dead_Code_Deleter2_visit(VALUE self );
VALUE Dead_Code_Deleter2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_Dead_Code_Deleter2cb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Dead_Code_Deleter2cb_1,1,bind); 
 BSET(autovar_1,it); it=CALL(root_Dead_Code_Deleter2cb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(root_Dead_Code_Deleter2cb_3,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Dead_Code_Deleter2cb_4,1,bind); 
 BSET(it_1,it); it=CALL(root_Dead_Code_Deleter2cb_5,1,bind);   it=Dead_Code_Deleter2_traverse(self ); FAILTEST(pass2);it=CALL(root_Dead_Code_Deleter2cb_6,1,bind); it=CALL(root_Dead_Code_Deleter2cb_7,1,bind); 
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
VALUE Dead_Code_Deleter2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Dead_Code_Deleter2cb_1,1,bind); 
 BSET(this_1,it); it=CALL(traverse_Dead_Code_Deleter2cb_2,1,bind); 
 BSET(autovar_1,it); it=CALL(traverse_Dead_Code_Deleter2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(key_1,it);   it=Dead_Code_Deleter2_traverse_item(self ); FAILTEST(pass3);
 BSET(it_1,it); it=CALL(traverse_Dead_Code_Deleter2cb_4,1,bind); 
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
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dead_Code_Deleter2_visit(self ); FAILTEST(alt1_2);
 BSET(a_1,it); it=CALL(traverse_item_Dead_Code_Deleter2cb_1,1,bind); it=BGET(a_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dead_Code_Deleter2cb_2,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Dead_Code_Deleter2_traverse_item(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(traverse_item_Dead_Code_Deleter2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Dead_Code_Deleter2cb_4,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Deleter2_traverse(self ); FAILTEST(pass2);
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
VALUE Dead_Code_Deleter2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(visit_Dead_Code_Deleter2cb_1,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter2cb_2,1,bind); 
 BSET(this_1,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(visit_Dead_Code_Deleter2cb_3,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(visit_Dead_Code_Deleter2cb_4,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_2,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter2cb_5,1,bind); 
 BSET(name_1,it);   it=Dead_Code_Deleter2_traverse(self ); FAILTEST(pass2);it=CALL(visit_Dead_Code_Deleter2cb_6,1,bind); 
 BSET(expr_1,it); it=CALL(visit_Dead_Code_Deleter2cb_7,1,bind); 
 BSET(this_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
it=CALL(visit_Dead_Code_Deleter2cb_8,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(visit_Dead_Code_Deleter2cb_9,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter2cb_10,1,bind); 
 BSET(this_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_4;
it=CALL(visit_Dead_Code_Deleter2cb_11,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(visit_Dead_Code_Deleter2cb_12,1,bind);  arg0=it; it=Dead_Code_Deleter2_clas(self ,arg0); FAILTEST(alt1_5);
 BSET(autovar_4,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=CALL(visit_Dead_Code_Deleter2cb_13,1,bind); 
 BSET(this_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_5;
it=CALL(visit_Dead_Code_Deleter2cb_14,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
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
VALUE Communize_Or2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_Communize_Or2cb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Communize_Or2_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Communize_Or2cb_1,1,bind); 
return it;
fail: return failobj; }
VALUE Communize_Or2_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Communize_Or2_fails(self ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Communize_Or2_empty(self ); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Communize_Or2_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Communize_Or2cb_1,1,bind); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Communize_Or2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Communize_Or2_traverse(self ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Communize_Or2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Communize_Or2cb_1,1,bind); 
 BSET(this_1,it); it=CALL(traverse_Communize_Or2cb_2,1,bind); 
 BSET(autovar_1,it); it=CALL(traverse_Communize_Or2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(key_1,it);   it=Communize_Or2_traverse_item(self ); FAILTEST(pass3);
 BSET(it_1,it); it=CALL(traverse_Communize_Or2cb_4,1,bind); 
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
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Communize_Or2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Communize_Or2_visit(self ); FAILTEST(alt1_2);
 BSET(a_1,it); it=CALL(traverse_item_Communize_Or2cb_1,1,bind); it=BGET(a_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Communize_Or2cb_2,1,bind);  arg0=it; it=Communize_Or2_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Communize_Or2_traverse_item(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(traverse_item_Communize_Or2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Communize_Or2cb_4,1,bind);  arg0=it; it=Communize_Or2_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or2_traverse(self ); FAILTEST(pass2);
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
VALUE Communize_Or2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Communize_Or2cb_1,1,bind);  arg0=it; it=Communize_Or2_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it);  it=CALL(visit_Communize_Or2cb_2,1,bind);  arg0=it; it=Communize_Or2_clas(self ,arg0); FAILTEST(pass1);
 BSET(autovar_3,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or2_traverse(self ); FAILTEST(pass2);
 BSET(autovar_4,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(visit_Communize_Or2cb_3,1,bind); int oldpos3; while(1){oldpos3=ame_getpos(self);  it=CALL(visit_Communize_Or2cb_4,1,bind);  arg0=it; it=Communize_Or2_clas(self ,arg0); FAILTEST(break1);
 BSET(autovar_3,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or2_traverse(self ); FAILTEST(pass3);
 BSET(autovar_5,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto break1;
it=CALL(visit_Communize_Or2cb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(ands_1,it);   it=Communize_Or2_eof(self ); FAILTEST(pass1);it=CALL(visit_Communize_Or2cb_6,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(_result_1);
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
VALUE Communize_Or3_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_Communize_Or3cb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Communize_Or3_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Communize_Or3cb_1,1,bind); 
return it;
fail: return failobj; }
VALUE Communize_Or3_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Communize_Or3_fails(self ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Communize_Or3_empty(self ); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Communize_Or3_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Communize_Or3cb_1,1,bind); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Communize_Or3_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Communize_Or3_traverse(self ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Communize_Or3_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Communize_Or3cb_1,1,bind); 
 BSET(this_1,it); it=CALL(traverse_Communize_Or3cb_2,1,bind); 
 BSET(autovar_1,it); it=CALL(traverse_Communize_Or3cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(key_1,it);   it=Communize_Or3_traverse_item(self ); FAILTEST(pass3);
 BSET(it_1,it); it=CALL(traverse_Communize_Or3cb_4,1,bind); 
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
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Communize_Or3_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Communize_Or3_visit(self ); FAILTEST(alt1_2);
 BSET(a_1,it); it=CALL(traverse_item_Communize_Or3cb_1,1,bind); it=BGET(a_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Communize_Or3cb_2,1,bind);  arg0=it; it=Communize_Or3_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Communize_Or3_traverse_item(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(traverse_item_Communize_Or3cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Communize_Or3cb_4,1,bind);  arg0=it; it=Communize_Or3_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or3_traverse(self ); FAILTEST(pass2);
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
VALUE Communize_Or3_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Communize_Or3cb_1,1,bind);  arg0=it; it=Communize_Or3_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it);  it=CALL(visit_Communize_Or3cb_2,1,bind);  arg0=it; it=Communize_Or3_clas(self ,arg0); FAILTEST(pass1);
 BSET(autovar_3,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or3_traverse(self ); FAILTEST(pass2);
 BSET(autovar_4,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(visit_Communize_Or3cb_3,1,bind); int oldpos3; while(1){oldpos3=ame_getpos(self);  it=CALL(visit_Communize_Or3cb_4,1,bind);  arg0=it; it=Communize_Or3_clas(self ,arg0); FAILTEST(break1);
 BSET(autovar_3,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Communize_Or3_traverse(self ); FAILTEST(pass3);
 BSET(autovar_5,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto break1;
it=CALL(visit_Communize_Or3cb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(ands_1,it);   it=Communize_Or3_eof(self ); FAILTEST(pass1);it=CALL(visit_Communize_Or3cb_6,1,bind); 
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=BGET(_result_1);
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
VALUE Move_Assignments2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_hash_new(); BSET(cls_1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 BSET(i_1,it); it=CALL(clas_Move_Assignments2cb_1,1,bind); FAILTEST(fail);it=BGET(i_1);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Move_Assignments2_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(empty_Move_Assignments2cb_1,1,bind); 
return it;
fail: return failobj; }
VALUE Move_Assignments2_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Move_Assignments2_fails(self ); FAILTEST(alt1_2);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Move_Assignments2_empty(self ); FAILTEST(alt1_3);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Move_Assignments2_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Move_Assignments2cb_1,1,bind); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Move_Assignments2_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Move_Assignments2_root(self ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Move_Assignments2_move(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_hash_new(); BSET(append_1,a0);BSET(name_1,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(move_Move_Assignments2cb_1,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_2);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);  it=BGET(append_1); arg0=it;it=BGET(name_1); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(move_Move_Assignments2cb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=CALL(move_Move_Assignments2cb_3,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(move_Move_Assignments2cb_4,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_5,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(el_1,it); int oldpos6=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 int oldpos7=ame_getpos(self);
   it=Move_Assignments2_eof(self ); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos7); if (x==0) goto alt2_2;it=BGET(el_1);
 BSET(autovar_6,it); it=CALL(move_Move_Assignments2cb_5,1,bind); int oldpos8=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=BGET(append_1); arg0=it;it=BGET(name_1); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(pass3);
 BSET(autovar_7,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos8); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_2;
 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 it=BGET(el_1);
 BSET(autovar_7,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos6); goto break2;
 accept2:;
it=CALL(move_Move_Assignments2cb_6,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=BGET(autovar_5);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_3;
it=CALL(move_Move_Assignments2cb_7,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(move_Move_Assignments2cb_8,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_8,it); int oldpos9=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(move_Move_Assignments2cb_9,1,bind); 
 BSET(var_1,it); it=CALL(move_Move_Assignments2cb_10,1,bind); 
 BSET(autovar_9,it); it=CALL(move_Move_Assignments2cb_11,1,bind); int oldpos10=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_9)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=BGET(append_1); arg0=it;it=BGET(name_1); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(pass5);
 BSET(to_1,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos10); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=CALL(move_Move_Assignments2cb_12,1,bind); 
 BSET(enter_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos9); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_4;
it=CALL(move_Move_Assignments2cb_13,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 BSET(it_1,it); it=CALL(move_Move_Assignments2cb_14,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Move_Assignments2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Move_Assignments2_traverse(self ); FAILTEST(fail);
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Move_Assignments2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Move_Assignments2cb_1,1,bind); 
 BSET(this_1,it); it=CALL(traverse_Move_Assignments2cb_2,1,bind); 
 BSET(autovar_1,it); it=CALL(traverse_Move_Assignments2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 BSET(autovar_2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(autovar_3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 BSET(key_1,it);   it=Move_Assignments2_traverse_item(self ); FAILTEST(pass3);
 BSET(it_1,it); it=CALL(traverse_Move_Assignments2cb_4,1,bind); 
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
 BSET(_result_1,it); it=BGET(_result_1);
return it;
fail: return failobj; }
VALUE Move_Assignments2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Move_Assignments2_visit(self ); FAILTEST(alt1_2);
 BSET(a_1,it); it=CALL(traverse_item_Move_Assignments2cb_1,1,bind); it=BGET(a_1);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Move_Assignments2cb_2,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_1,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_2,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Move_Assignments2_traverse_item(self ); FAILTEST(break1);
 BSET(autovar_3,it); it=CALL(traverse_item_Move_Assignments2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=BGET(autovar_2);
 BSET(_result_1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Move_Assignments2cb_4,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_4,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Move_Assignments2_traverse(self ); FAILTEST(pass2);
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
VALUE Move_Assignments2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_hash_new();  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Move_Assignments2cb_1,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(fail);
 BSET(autovar_1,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,BGET(autovar_1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Move_Assignments2cb_2,1,bind); 
 BSET(name_1,it);   it=Move_Assignments2_traverse(self ); FAILTEST(pass1);it=CALL(visit_Move_Assignments2cb_3,1,bind); 
 BSET(expr_1,it); it=CALL(visit_Move_Assignments2cb_4,1,bind); 
 BSET(append_1,it); it=BGET(expr_1);
 BSET(autovar_2,it); it=CALL(visit_Move_Assignments2cb_5,1,bind); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,BGET(autovar_2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=BGET(name_1);
 BSET(name_2,it); it=BGET(append_1);
 BSET(append_2,it); int oldpos3=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
  it=CALL(visit_Move_Assignments2cb_6,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_2);
 BSET(autovar_3,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,BGET(autovar_3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_4,it); int oldpos5; while(1){oldpos5=ame_getpos(self);  it=BGET(append_2); arg0=it;it=BGET(name_2); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(break1);
 BSET(autovar_5,it); it=CALL(visit_Move_Assignments2cb_7,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=BGET(autovar_4);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_2;
it=CALL(visit_Move_Assignments2cb_8,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
  it=CALL(visit_Move_Assignments2cb_9,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_3);
 BSET(autovar_6,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,BGET(autovar_6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 BSET(autovar_7,it); int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 BSET(el_1,it); int oldpos8=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 int oldpos9=ame_getpos(self);
   it=Move_Assignments2_eof(self ); FAILTEST(reject1); x=1; goto accept3;  reject1: x=0; accept3: it=Qnil; ame_setpos(self,oldpos9); if (x==0) goto alt2_2;it=BGET(el_1);
 BSET(autovar_8,it); it=CALL(visit_Move_Assignments2cb_10,1,bind); int oldpos10=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,BGET(autovar_8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=BGET(append_2); arg0=it;it=BGET(name_2); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(pass5);
 BSET(autovar_9,it); 
	if (CALL(eof,0)==failobj) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos10); ame_setlen(self,oldlen5);
	if(fail5) goto alt2_2;
 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 it=BGET(el_1);
 BSET(autovar_9,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos8); goto break2;
 accept2:;
it=CALL(visit_Move_Assignments2cb_11,1,bind);  if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=BGET(autovar_7);
 BSET(ary_1,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_3;
it=CALL(visit_Move_Assignments2cb_12,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
  it=CALL(visit_Move_Assignments2cb_13,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(alt1_4);
 BSET(autovar_10,it); int oldpos11=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,BGET(autovar_10)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Move_Assignments2cb_14,1,bind); 
 BSET(var_1,it); it=CALL(visit_Move_Assignments2cb_15,1,bind); 
 BSET(autovar_11,it); it=CALL(visit_Move_Assignments2cb_16,1,bind); int oldpos12=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,BGET(autovar_11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=BGET(append_2); arg0=it;it=BGET(name_2); arg1=it; it=Move_Assignments2_move(self ,arg0,arg1); FAILTEST(pass7);
 BSET(to_1,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos12); ame_setlen(self,oldlen7);
	if(fail7) goto pass6;
it=CALL(visit_Move_Assignments2cb_17,1,bind); 
 BSET(enter_1,it); 
	if (CALL(eof,0)==failobj) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos11); ame_setlen(self,oldlen6);
	if(fail6) goto alt1_4;
it=CALL(visit_Move_Assignments2cb_18,1,bind);
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 BSET(it_1,it); it=CALL(visit_Move_Assignments2cb_19,1,bind); 
 BSET(_result_1,it);  
ISET(cut,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos3); goto pass2;
 accept1:;
it=BGET(_result_1);
 BSET(_result_2,it); 
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
it=BGET(_result_2);
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
 rb_eval_string("testversion('f8456c45909d4c7912865449600809df')");}
