#include "cthyst.h"
VALUE cls_Renamer2;
VALUE Renamer2_clas(VALUE self ,VALUE a0);
VALUE Renamer2_root(VALUE self );
VALUE Renamer2_traverse(VALUE self );
VALUE Renamer2_traverse_item(VALUE self );
VALUE Renamer2_visit(VALUE self );
VALUE Renamer2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Renamer2cb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Renamer2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(root_Renamer2cb_1,1,bind);  arg0=it; it=Renamer2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Renamer2cb_2,1,bind);   it=Renamer2_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE Renamer2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Renamer2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Renamer2cb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Renamer2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Renamer2_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Renamer2cb_4,1,bind); 
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
it=CALL(traverse_Renamer2cb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Renamer2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Renamer2_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Renamer2cb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Renamer2cb_2,1,bind);  arg0=it; it=Renamer2_clas(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Renamer2_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Renamer2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Renamer2cb_4,1,bind);  arg0=it; it=Renamer2_clas(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Renamer2_traverse(self ); FAILTEST(pass2);
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
VALUE Renamer2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Renamer2cb_1,1,bind);  arg0=it; it=Renamer2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,1,it); it=CALL(visit_Renamer2cb_2,1,bind); 
 rb_ary_store(bind,2,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(visit_Renamer2cb_3,1,bind); 
 rb_ary_store(bind,3,it); it=rb_ary_entry(bind,3);
return it;
fail: return failobj; }VALUE cls_DetectCalls;
VALUE DetectCalls_clas(VALUE self ,VALUE a0);
VALUE DetectCalls_root(VALUE self );
VALUE DetectCalls_traverse(VALUE self );
VALUE DetectCalls_traverse_item(VALUE self );
VALUE DetectCalls_visit(VALUE self );
VALUE DetectCalls_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_DetectCallscb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE DetectCalls_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(root_DetectCallscb_1,1,bind);  arg0=it; it=DetectCalls_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_DetectCallscb_2,1,bind);   it=DetectCalls_traverse(self ); FAILTEST(pass1);it=CALL(root_DetectCallscb_3,1,bind); 
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,1);
return it;
fail: return failobj; }
VALUE DetectCalls_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_DetectCallscb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_DetectCallscb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_DetectCallscb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=DetectCalls_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_DetectCallscb_4,1,bind); 
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
it=CALL(traverse_DetectCallscb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE DetectCalls_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=DetectCalls_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_DetectCallscb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_DetectCallscb_2,1,bind);  arg0=it; it=DetectCalls_clas(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=DetectCalls_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_DetectCallscb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_DetectCallscb_4,1,bind);  arg0=it; it=DetectCalls_clas(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=DetectCalls_traverse(self ); FAILTEST(pass2);
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
VALUE DetectCalls_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_DetectCallscb_1,1,bind);  arg0=it; it=DetectCalls_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,1,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=CALL(visit_DetectCallscb_2,1,bind); it=CALL(visit_DetectCallscb_3,1,bind); 
 rb_ary_store(bind,2,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }VALUE cls_Inliner2;
VALUE Inliner2_clas(VALUE self ,VALUE a0);
VALUE Inliner2_root(VALUE self );
VALUE Inliner2_traverse(VALUE self );
VALUE Inliner2_traverse_item(VALUE self );
VALUE Inliner2_visit(VALUE self );
VALUE Inliner2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it); it=CALL(clas_Inliner2cb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=rb_ary_entry(bind,2);
return it;
fail: return failobj; }
VALUE Inliner2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1,it); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,2,it); it=CALL(root_Inliner2cb_1,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(root_Inliner2cb_2,1,bind);  arg0=it; it=Inliner2_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,3,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Inliner2cb_3,1,bind); 
 rb_ary_store(bind,4,it); it=CALL(root_Inliner2cb_4,1,bind); 
 rb_ary_store(bind,5,it); it=CALL(root_Inliner2cb_5,1,bind); it=CALL(root_Inliner2cb_6,1,bind); 
 rb_ary_store(bind,6,it); 
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
it=CALL(root_Inliner2cb_7,1,bind); it=rb_ary_entry(bind,1);
 rb_ary_store(bind,7,it); it=CALL(root_Inliner2cb_8,1,bind); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,7)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(root_Inliner2cb_9,1,bind);  arg0=it; it=Inliner2_clas(self ,arg0); FAILTEST(pass3);
 rb_ary_store(bind,8,it); int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,8)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Inliner2_traverse(self ); FAILTEST(pass4);
 rb_ary_store(bind,9,it); 
	if (CALL(eof,0)==failobj) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos4); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;

	if (CALL(eof,0)==failobj) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=rb_ary_entry(bind,9);
return it;
fail: return failobj; }
VALUE Inliner2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Inliner2cb_1,1,bind); 
 rb_ary_store(bind,0,it); it=CALL(traverse_Inliner2cb_2,1,bind); 
 rb_ary_store(bind,1,it); it=CALL(traverse_Inliner2cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,2,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,3,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,4,it);   it=Inliner2_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,5,it); it=CALL(traverse_Inliner2cb_4,1,bind); 
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
it=CALL(traverse_Inliner2cb_5,1,bind); 
 rb_ary_store(bind,6,it); it=rb_ary_entry(bind,6);
return it;
fail: return failobj; }
VALUE Inliner2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Inliner2_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0,it); it=CALL(traverse_item_Inliner2cb_1,1,bind); it=rb_ary_entry(bind,0);
 rb_ary_store(bind,1,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Inliner2cb_2,1,bind);  arg0=it; it=Inliner2_clas(self ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,2,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Inliner2_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4,it); it=CALL(traverse_item_Inliner2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3);
 rb_ary_store(bind,1,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
 
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
  it=CALL(traverse_item_Inliner2cb_4,1,bind);  arg0=it; it=Inliner2_clas(self ,arg0); FAILTEST(alt1_4);
 rb_ary_store(bind,5,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Inliner2_traverse(self ); FAILTEST(pass2);
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
VALUE Inliner2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=CALL(visit_Inliner2cb_1,1,bind);  arg0=it; it=Inliner2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,1,it); it=CALL(visit_Inliner2cb_2,1,bind); FAILTEST(pass1);it=rb_ary_new3(0);
 rb_ary_store(bind,2,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,3,it); it=CALL(visit_Inliner2cb_3,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2);
 rb_ary_store(bind,4,it); 
	if (CALL(eof,0)==failobj) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(visit_Inliner2cb_4,1,bind); 
 rb_ary_store(bind,5,it); it=rb_ary_entry(bind,5);
return it;
fail: return failobj; }
void Init_inliner2_c(){ 
 cls_Renamer2=rb_define_class("Renamer2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Renamer2,"clas",Renamer2_clas,1);
rb_define_method(cls_Renamer2,"root",Renamer2_root,0);
rb_define_method(cls_Renamer2,"traverse",Renamer2_traverse,0);
rb_define_method(cls_Renamer2,"traverse_item",Renamer2_traverse_item,0);
rb_define_method(cls_Renamer2,"visit",Renamer2_visit,0);

 cls_DetectCalls=rb_define_class("DetectCalls",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_DetectCalls,"clas",DetectCalls_clas,1);
rb_define_method(cls_DetectCalls,"root",DetectCalls_root,0);
rb_define_method(cls_DetectCalls,"traverse",DetectCalls_traverse,0);
rb_define_method(cls_DetectCalls,"traverse_item",DetectCalls_traverse_item,0);
rb_define_method(cls_DetectCalls,"visit",DetectCalls_visit,0);

 cls_Inliner2=rb_define_class("Inliner2",rb_const_get(rb_cObject,rb_intern("Traverser"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Inliner2,"clas",Inliner2_clas,1);
rb_define_method(cls_Inliner2,"root",Inliner2_root,0);
rb_define_method(cls_Inliner2,"traverse",Inliner2_traverse,0);
rb_define_method(cls_Inliner2,"traverse_item",Inliner2_traverse_item,0);
rb_define_method(cls_Inliner2,"visit",Inliner2_visit,0);
 rb_eval_string("testversion('9e31f0721ed6a26f0e10d731fdf72689')");}
