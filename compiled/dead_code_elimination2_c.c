#include "cthyst.h"
VALUE cls_Move_Assignments2;
VALUE Move_Assignments2_clas(VALUE self ,VALUE a0);
VALUE Move_Assignments2_empty(VALUE self );
VALUE Move_Assignments2_eof(VALUE self );
VALUE Move_Assignments2_fails(VALUE self );
VALUE Move_Assignments2_itrans(VALUE self );
VALUE Move_Assignments2_move(VALUE self ,VALUE a0);
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

it=Qnil;it=Qnil;
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
VALUE Move_Assignments2_move(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(20); rb_ary_store(bind,2,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);it=rb_ary_new3(0);char chr1=FIX2INT(CALL(switchcbMove_Assignments23,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,1,it); int oldpos3; while(1){oldpos3=ame_getpos(self);  it=rb_ary_entry(bind,2); arg0=it; it=Move_Assignments2_move(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,3,it); it=CALL(move_Move_Assignments2cb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,4,it); it=CALL(move_Move_Assignments2cb_2,1,bind); 
 rb_ary_store(bind,5,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,5);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,7,it); it=CALL(move_Move_Assignments2cb_3,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,8,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,9,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,10,it); int oldpos7=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 int oldpos8=ame_getpos(self);
   it=Move_Assignments2_eof(self ); FAILTEST(reject1); x=1; goto accept4;  reject1: x=0; accept4: it=Qnil; ame_setpos(self,oldpos8); if (x==0) goto alt3_2;it=rb_ary_entry(bind,10);
 rb_ary_store(bind,11,it); it=CALL(move_Move_Assignments2cb_4,1,bind); int oldpos9=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,11)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_ary_entry(bind,2); arg0=it; it=Move_Assignments2_move(self ,arg0); FAILTEST(pass3);
 rb_ary_store(bind,12,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos9); ame_setlen(self,oldlen3);
	if(fail3) goto alt3_2;
it=rb_ary_entry(bind,12);
 rb_ary_store(bind,13,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break2;}
 it=rb_ary_entry(bind,10);
 rb_ary_store(bind,13,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos7); goto break2;
 accept3:;
it=CALL(move_Move_Assignments2cb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,9);
 rb_ary_store(bind,4,it); it=CALL(move_Move_Assignments2cb_6,1,bind); 
 rb_ary_store(bind,14,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=rb_ary_entry(bind,14);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,7,it); it=CALL(move_Move_Assignments2cb_7,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 2:; int oldpos10=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);
 rb_ary_store(bind,15,it); int oldpos11=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,15)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(move_Move_Assignments2cb_8,1,bind); 
 rb_ary_store(bind,16,it); it=CALL(move_Move_Assignments2cb_9,1,bind); 
 rb_ary_store(bind,17,it); it=CALL(move_Move_Assignments2cb_10,1,bind); int oldpos12=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,17)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_ary_entry(bind,2); arg0=it; it=Move_Assignments2_move(self ,arg0); FAILTEST(pass5);
 rb_ary_store(bind,18,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos12); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=CALL(move_Move_Assignments2cb_11,1,bind); 
 rb_ary_store(bind,19,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos11); ame_setlen(self,oldlen4);
	if(fail4) goto alt4_2;
it=CALL(move_Move_Assignments2cb_12,1,bind);
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos10);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,7,it); it=CALL(move_Move_Assignments2cb_13,1,bind); 
 rb_ary_store(bind,6,it);  
ISET(cut,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos10); goto fail;
 accept5:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,7,it); it=CALL(move_Move_Assignments2cb_14,1,bind); 
 rb_ary_store(bind,6,it);  break;}it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Move_Assignments2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Move_Assignments2_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Move_Assignments2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Move_Assignments2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Move_Assignments2cb_2,1,bind); 
 rb_ary_store(bind,1,it); it=Qnil;
 rb_ary_store(bind,2,it); it=Qfalse;
 rb_ary_store(bind,3,it); it=CALL(traverse_Move_Assignments2cb_3,1,bind); 
 rb_ary_store(bind,4,it); it=CALL(traverse_Move_Assignments2cb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7,it); it=CALL(traverse_Move_Assignments2cb_5,1,bind);   it=Move_Assignments2_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8,it); it=CALL(traverse_Move_Assignments2cb_6,1,bind);   it=Move_Assignments2_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Move_Assignments2_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Move_Assignments2_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Move_Assignments2cb_7,1,bind); 
 rb_ary_store(bind,9,it); it=rb_ary_entry(bind,9);
return it;
fail: return failobj; }
VALUE Move_Assignments2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);char chr1=FIX2INT(CALL(switchcbMove_Assignments22,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Move_Assignments2_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Move_Assignments2cb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); it=rb_ary_new3(0);int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Move_Assignments2_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Move_Assignments2cb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,5,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass1);
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
   it=Move_Assignments2_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Move_Assignments2cb_3,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,6,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Move_Assignments2_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,7,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass2);
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
   it=Move_Assignments2_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Move_Assignments2cb_4,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Move_Assignments2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(29);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Move_Assignments2cb_1,1,bind);  arg0=it; it=Move_Assignments2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Move_Assignments2cb_2,1,bind); 
 rb_ary_store(bind,1,it);   it=Move_Assignments2_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=CALL(visit_Move_Assignments2cb_3,1,bind); 
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,4,it); it=CALL(visit_Move_Assignments2cb_4,1,bind); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,4)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_entry(bind,1);
 rb_ary_store(bind,5,it); it=rb_ary_new3(0);it=rb_ary_new3(0);char chr1=FIX2INT(CALL(switchcbMove_Assignments21,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos5=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass3;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,6,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,7,it); int oldpos7; while(1){oldpos7=ame_getpos(self);  it=rb_ary_entry(bind,5); arg0=it; it=Move_Assignments2_move(self ,arg0); FAILTEST(break2);
 rb_ary_store(bind,8,it); it=CALL(visit_Move_Assignments2cb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=rb_ary_entry(bind,7);
 rb_ary_store(bind,9,it); it=CALL(visit_Move_Assignments2cb_6,1,bind); 
 rb_ary_store(bind,10,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_2;
it=rb_ary_entry(bind,10);
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass3;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,12,it); it=CALL(visit_Move_Assignments2cb_7,1,bind); 
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos5); goto pass3;
 accept1:;
 break;case 1:; int oldpos8=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass3;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,13,it); int oldpos9=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,13)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,14,it); int oldpos10; while(1){oldpos10=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3);
 rb_ary_store(bind,15,it); int oldpos11=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
 int oldpos12=ame_getpos(self);
   it=Move_Assignments2_eof(self ); FAILTEST(reject1); x=1; goto accept4;  reject1: x=0; accept4: it=Qnil; ame_setpos(self,oldpos12); if (x==0) goto alt3_2;it=rb_ary_entry(bind,15);
 rb_ary_store(bind,16,it); it=CALL(visit_Move_Assignments2cb_8,1,bind); int oldpos13=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,16)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_ary_entry(bind,5); arg0=it; it=Move_Assignments2_move(self ,arg0); FAILTEST(pass6);
 rb_ary_store(bind,17,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos13); ame_setlen(self,oldlen6);
	if(fail6) goto alt3_2;
it=rb_ary_entry(bind,17);
 rb_ary_store(bind,18,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break3;}
 it=rb_ary_entry(bind,15);
 rb_ary_store(bind,18,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos11); goto break3;
 accept3:;
it=CALL(visit_Move_Assignments2cb_9,1,bind);  if (IGET(stop)!=Qnil){{oldpos10=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos10); it=rb_ary_entry(bind,14);
 rb_ary_store(bind,9,it); it=CALL(visit_Move_Assignments2cb_10,1,bind); 
 rb_ary_store(bind,19,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos9); ame_setlen(self,oldlen5);
	if(fail5) goto alt2_2;
it=rb_ary_entry(bind,19);
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass3;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,12,it); it=CALL(visit_Move_Assignments2cb_11,1,bind); 
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos8); goto pass3;
 accept2:;
 break;case 2:; int oldpos14=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass3;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);
 rb_ary_store(bind,20,it); int oldpos15=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,20)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Move_Assignments2cb_12,1,bind); 
 rb_ary_store(bind,21,it); it=CALL(visit_Move_Assignments2cb_13,1,bind); 
 rb_ary_store(bind,22,it); it=CALL(visit_Move_Assignments2cb_14,1,bind); int oldpos16=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,rb_ary_entry(bind,22)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_ary_entry(bind,5); arg0=it; it=Move_Assignments2_move(self ,arg0); FAILTEST(pass8);
 rb_ary_store(bind,23,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos16); ame_setlen(self,oldlen8);
	if(fail8) goto pass7;
it=CALL(visit_Move_Assignments2cb_15,1,bind); 
 rb_ary_store(bind,24,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos15); ame_setlen(self,oldlen7);
	if(fail7) goto alt4_2;
it=CALL(visit_Move_Assignments2cb_16,1,bind);
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept5;
alt4_2: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass3;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,12,it); it=CALL(visit_Move_Assignments2cb_17,1,bind); 
 rb_ary_store(bind,11,it);  
ISET(cut,Qnil);goto accept5;
  alt4_3:  ame_setpos(self,oldpos14); goto pass3;
 accept5:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,12,it); it=CALL(visit_Move_Assignments2cb_18,1,bind); 
 rb_ary_store(bind,11,it);  break;}it=rb_ary_entry(bind,11);
 rb_ary_store(bind,25,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
it=rb_ary_entry(bind,25);
 rb_ary_store(bind,26,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,26);
 rb_ary_store(bind,27,it);   it=Move_Assignments2_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,27);
 rb_ary_store(bind,28,it); it=rb_ary_entry(bind,28);
return it;
fail: return failobj; }
void Init_dead_code_elimination2_c(){ 
 cls_Move_Assignments2=rb_define_class("Move_Assignments2",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Move_Assignments2,"clas",Move_Assignments2_clas,1);
rb_define_method(cls_Move_Assignments2,"empty",Move_Assignments2_empty,0);
rb_define_method(cls_Move_Assignments2,"eof",Move_Assignments2_eof,0);
rb_define_method(cls_Move_Assignments2,"fails",Move_Assignments2_fails,0);
rb_define_method(cls_Move_Assignments2,"itrans",Move_Assignments2_itrans,0);
rb_define_method(cls_Move_Assignments2,"move",Move_Assignments2_move,1);
rb_define_method(cls_Move_Assignments2,"root",Move_Assignments2_root,0);
rb_define_method(cls_Move_Assignments2,"traverse",Move_Assignments2_traverse,0);
rb_define_method(cls_Move_Assignments2,"traverse_item",Move_Assignments2_traverse_item,0);
rb_define_method(cls_Move_Assignments2,"visit",Move_Assignments2_visit,0);
 rb_eval_string("testversiondead_code_elimination2('d427e7c79a2c20ed0cb4e03ed2bbec06')");}
