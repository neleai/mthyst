#include "cthyst.h"
VALUE cls_Analyze_Variables2;
VALUE Analyze_Variables2_clas(VALUE self ,VALUE a0);
VALUE Analyze_Variables2_flat(VALUE self );
VALUE Analyze_Variables2_itrans(VALUE self );
VALUE Analyze_Variables2_root(VALUE self );
VALUE Analyze_Variables2_traverse(VALUE self );
VALUE Analyze_Variables2_traverse_item(VALUE self );
VALUE Analyze_Variables2_visit(VALUE self );
VALUE Analyze_Variables2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Analyze_Variables2cb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_flat(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self); char chr1=FIX2INT(CALL(switchcb3,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(flat_Analyze_Variables2cb_1,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,1,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Analyze_Variables2_flat(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(flat_Analyze_Variables2cb_2,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(alt2_2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Analyze_Variables2_flat(self ); FAILTEST(pass2);
 rb_ary_store(bind,2,it); 
	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
 
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,2,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto break1;
 accept2:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,2,it);  break;default: goto break1;}it=CALL(flat_Analyze_Variables2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,4,it); it=rb_ary_entry(bind,4);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0,it); int oldpos1; while(1){oldpos1=ame_getpos(self); char chr1=FIX2INT(CALL(switchcb2,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
  it=CALL(itrans_Analyze_Variables2cb_1,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(alt1_2);
 rb_ary_store(bind,1,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(itrans_Analyze_Variables2cb_2,1,bind); 
 rb_ary_store(bind,2,it); it=CALL(itrans_Analyze_Variables2cb_3,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,4,it); int oldpos6; while(1){oldpos6=ame_getpos(self);  it=CALL(itrans_Analyze_Variables2cb_4,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(break2);
 rb_ary_store(bind,5,it); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Analyze_Variables2_root(self ); FAILTEST(pass4);
 rb_ary_store(bind,6,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto break2;
it=CALL(itrans_Analyze_Variables2cb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,4);
 rb_ary_store(bind,7,it); 
	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;

	if (CALL(eof,0)==failobj) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(itrans_Analyze_Variables2cb_6,1,bind); it=CALL(itrans_Analyze_Variables2cb_7,1,bind); 
 rb_ary_store(bind,8,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,8,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,8,it);  break;default: goto break1;}it=CALL(itrans_Analyze_Variables2cb_8,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,9,it); it=rb_ary_entry(bind,9);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Analyze_Variables2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(root_Analyze_Variables2cb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(root_Analyze_Variables2cb_3,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,1,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Analyze_Variables2cb_4,1,bind); it=CALL(root_Analyze_Variables2cb_5,1,bind); it=CALL(root_Analyze_Variables2cb_6,1,bind);   it=Analyze_Variables2_traverse(self ); FAILTEST(pass2);it=CALL(root_Analyze_Variables2cb_7,1,bind); it=CALL(root_Analyze_Variables2cb_8,1,bind); 
 rb_ary_store(bind,2,it); 
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
it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Analyze_Variables2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Analyze_Variables2cb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Analyze_Variables2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Analyze_Variables2_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Analyze_Variables2cb_4,1,bind); 
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
it=CALL(traverse_Analyze_Variables2cb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Analyze_Variables2_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Analyze_Variables2cb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Analyze_Variables2cb_2,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Analyze_Variables2_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Analyze_Variables2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Analyze_Variables2cb_4,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Analyze_Variables2_traverse(self ); FAILTEST(pass2);
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
VALUE Analyze_Variables2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(9);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcb1,1,ame_curobj(self)));  switch(chr1){case 0:;  it=CALL(visit_Analyze_Variables2cb_1,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Analyze_Variables2_traverse(self ); FAILTEST(pass1);it=CALL(visit_Analyze_Variables2cb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(visit_Analyze_Variables2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Analyze_Variables2_flat(self ); FAILTEST(pass3);
 rb_ary_store(bind,3,it); 
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
it=CALL(visit_Analyze_Variables2cb_4,1,bind); it=CALL(visit_Analyze_Variables2cb_5,1,bind); 
 rb_ary_store(bind,4,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
 break;case 1:;  it=CALL(visit_Analyze_Variables2cb_6,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Analyze_Variables2_traverse(self ); FAILTEST(pass4);it=CALL(visit_Analyze_Variables2cb_7,1,bind); 
 rb_ary_store(bind,6,it); it=CALL(visit_Analyze_Variables2cb_8,1,bind); int oldpos5=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,6)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass5);
 rb_ary_store(bind,7,it); int oldpos6=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(visit_Analyze_Variables2cb_9,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(pass6);
 rb_ary_store(bind,4,it); 
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

	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos4); ame_setlen(self,oldlen4);
	if(fail4) goto fail;
 break;case 2:;  it=CALL(visit_Analyze_Variables2cb_10,1,bind);  arg0=it; it=Analyze_Variables2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,8,it); int oldpos7=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Analyze_Variables2cb_11,1,bind); it=CALL(visit_Analyze_Variables2cb_12,1,bind); 
 rb_ary_store(bind,4,it); 
	if (CALL(eof,0)==failobj) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos7); ame_setlen(self,oldlen7);
	if(fail7) goto fail;
 break;default: goto fail;}it=rb_ary_entry(bind,4);
return it;
fail: return failobj; }VALUE cls_Remap_Acts;
VALUE Remap_Acts_clas(VALUE self ,VALUE a0);
VALUE Remap_Acts_root(VALUE self );
VALUE Remap_Acts_traverse(VALUE self );
VALUE Remap_Acts_traverse_item(VALUE self );
VALUE Remap_Acts_visit(VALUE self );
VALUE Remap_Acts_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Remap_Actscb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Remap_Acts_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Remap_Acts_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=rb_ary_entry(bind,0);
return it;
fail: return failobj; }
VALUE Remap_Acts_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Remap_Actscb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Remap_Actscb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Remap_Actscb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Remap_Acts_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Remap_Actscb_4,1,bind); 
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
it=CALL(traverse_Remap_Actscb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Remap_Acts_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Remap_Acts_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Remap_Actscb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Remap_Actscb_2,1,bind);  arg0=it; it=Remap_Acts_clas(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Remap_Acts_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Remap_Actscb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Remap_Actscb_4,1,bind);  arg0=it; it=Remap_Acts_clas(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Remap_Acts_traverse(self ); FAILTEST(pass2);
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
VALUE Remap_Acts_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Remap_Actscb_1,1,bind);  arg0=it; it=Remap_Acts_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Remap_Acts_traverse(self ); FAILTEST(pass1);it=CALL(visit_Remap_Actscb_2,1,bind); 
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
void Init_detect_variables2_c(){ 
 cls_Analyze_Variables2=rb_define_class("Analyze_Variables2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Analyze_Variables2,"clas",Analyze_Variables2_clas,1);
rb_define_method(cls_Analyze_Variables2,"flat",Analyze_Variables2_flat,0);
rb_define_method(cls_Analyze_Variables2,"itrans",Analyze_Variables2_itrans,0);
rb_define_method(cls_Analyze_Variables2,"root",Analyze_Variables2_root,0);
rb_define_method(cls_Analyze_Variables2,"traverse",Analyze_Variables2_traverse,0);
rb_define_method(cls_Analyze_Variables2,"traverse_item",Analyze_Variables2_traverse_item,0);
rb_define_method(cls_Analyze_Variables2,"visit",Analyze_Variables2_visit,0);

 cls_Remap_Acts=rb_define_class("Remap_Acts",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Remap_Acts,"clas",Remap_Acts_clas,1);
rb_define_method(cls_Remap_Acts,"root",Remap_Acts_root,0);
rb_define_method(cls_Remap_Acts,"traverse",Remap_Acts_traverse,0);
rb_define_method(cls_Remap_Acts,"traverse_item",Remap_Acts_traverse_item,0);
rb_define_method(cls_Remap_Acts,"visit",Remap_Acts_visit,0);
 rb_eval_string("testversion('757f0e3c91ab5b0a22011db0099f87c7')");}
