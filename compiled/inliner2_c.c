#include "cthyst.h"
VALUE cls_DetectCalls;
VALUE DetectCalls_clas(VALUE self ,VALUE a0);
VALUE DetectCalls_empty(VALUE self );
VALUE DetectCalls_eof(VALUE self );
VALUE DetectCalls_fails(VALUE self );
VALUE DetectCalls_root(VALUE self );
VALUE DetectCalls_traverse(VALUE self );
VALUE DetectCalls_traverse_item(VALUE self );
VALUE DetectCalls_visit(VALUE self );
VALUE DetectCalls_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_DetectCallscb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE DetectCalls_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=DetectCalls_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=DetectCalls_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_DetectCallscb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_const_get(rb_cObject, rb_intern("Rule")); arg0=it; it=DetectCalls_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_DetectCallscb_1,1,bind);   it=DetectCalls_traverse(self ); FAILTEST(pass1);it=CALL(root_DetectCallscb_2,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it);   it=DetectCalls_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_DetectCallscb_1,1,bind); 
 rb_ary_store(bind,0/*autovar*/,it); it=CALL(traverse_DetectCallscb_2,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=DetectCalls_traverse_item(self ); FAILTEST(break2);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(traverse_item_DetectCallscb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it);   it=DetectCalls_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,5/*autovar*/,it);   it=DetectCalls_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(CALL(switchcbDetectCalls1,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=DetectCalls_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=DetectCalls_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(traverse_item_DetectCallscb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it);   it=DetectCalls_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=DetectCalls_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=DetectCalls_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,6/*autovar*/,it);   it=DetectCalls_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=DetectCalls_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_const_get(rb_cObject, rb_intern("Apply")); arg0=it; it=DetectCalls_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,1/*name*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=CALL(visit_DetectCallscb_1,1,bind); 
 rb_ary_store(bind,2/*autovar*/,it);   it=DetectCalls_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }VALUE cls_Inliner2;
VALUE Inliner2_clas(VALUE self ,VALUE a0);
VALUE Inliner2_empty(VALUE self );
VALUE Inliner2_eof(VALUE self );
VALUE Inliner2_fails(VALUE self );
VALUE Inliner2_root(VALUE self );
VALUE Inliner2_traverse(VALUE self );
VALUE Inliner2_traverse_item(VALUE self );
VALUE Inliner2_visit(VALUE self );
VALUE Inliner2_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Inliner2cb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Inliner2_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Inliner2_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Inliner2_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Inliner2cb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*from*/,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*to*/,it); it=rb_ary_entry(bind,0/*from*/);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(root_Inliner2cb_1,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_const_get(rb_cObject, rb_intern("Rule")); arg0=it; it=Inliner2_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Inliner2cb_2,1,bind); 
 rb_ary_store(bind,4/*name*/,it); it=CALL(root_Inliner2cb_3,1,bind); 
 rb_ary_store(bind,5/*args*/,it); it=CALL(root_Inliner2cb_4,1,bind); it=CALL(root_Inliner2cb_5,1,bind); 
 rb_ary_store(bind,6/*body*/,it);   it=Inliner2_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Inliner2_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(root_Inliner2cb_6,1,bind); it=rb_ary_entry(bind,1/*to*/);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(root_Inliner2cb_7,1,bind); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_const_get(rb_cObject, rb_intern("Rule")); arg0=it; it=Inliner2_clas(self ,arg0); FAILTEST(pass3);
 rb_ary_store(bind,8/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Inliner2_traverse(self ); FAILTEST(pass4);
 rb_ary_store(bind,9/*autovar*/,it);   it=Inliner2_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos4); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);   it=Inliner2_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=rb_ary_entry(bind,10/*autovar*/);
 rb_ary_store(bind,11/*_result*/,it); it=rb_ary_entry(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Inliner2cb_1,1,bind); 
 rb_ary_store(bind,0/*oldchanged*/,it); it=CALL(traverse_Inliner2cb_2,1,bind); 
 rb_ary_store(bind,1/*this*/,it); it=Qnil;
 rb_ary_store(bind,2/*clon*/,it); it=Qfalse;
 rb_ary_store(bind,3/*changed*/,it); it=CALL(traverse_Inliner2cb_3,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(traverse_Inliner2cb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7/*key*/,it); it=CALL(traverse_Inliner2cb_5,1,bind);   it=Inliner2_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*val*/,it); it=CALL(traverse_Inliner2cb_6,1,bind);   it=Inliner2_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Inliner2_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Inliner2_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Inliner2cb_7,1,bind); 
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(CALL(switchcbInliner22,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Inliner2_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Inliner2cb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3/*ar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Inliner2_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4/*it*/,it); it=CALL(traverse_item_Inliner2cb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3/*ar*/);
 rb_ary_store(bind,5/*autovar*/,it);   it=Inliner2_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Inliner2_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Inliner2cb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Inliner2_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,7/*autovar*/,it);   it=Inliner2_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Inliner2_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Inliner2cb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_const_get(rb_cObject, rb_intern("Apply")); arg0=it; it=Inliner2_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,1/*name*/,it); it=CALL(visit_Inliner2cb_1,1,bind); FAILTEST(pass1);it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(visit_Inliner2cb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*args*/,it);   it=Inliner2_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(visit_Inliner2cb_3,1,bind); 
 rb_ary_store(bind,5/*_result*/,it); it=rb_ary_entry(bind,5/*_result*/);
return it;
fail: return failobj; }VALUE cls_Replace_Super;
VALUE Replace_Super_clas(VALUE self ,VALUE a0);
VALUE Replace_Super_empty(VALUE self );
VALUE Replace_Super_eof(VALUE self );
VALUE Replace_Super_fails(VALUE self );
VALUE Replace_Super_root(VALUE self );
VALUE Replace_Super_traverse(VALUE self );
VALUE Replace_Super_traverse_item(VALUE self );
VALUE Replace_Super_visit(VALUE self );
VALUE Replace_Super_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Replace_Supercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Replace_Super_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Replace_Super_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Replace_Super_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Replace_Super_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Replace_Super_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Replace_Supercb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Replace_Super_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*name*/,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*to*/,it); it=CALL(root_Replace_Supercb_1,1,bind); it=rb_ary_entry(bind,1/*to*/);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(root_Replace_Supercb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=rb_const_get(rb_cObject, rb_intern("Rule")); arg0=it; it=Replace_Super_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Replace_Super_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,4/*autovar*/,it);   it=Replace_Super_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,5/*autovar*/,it);   it=Replace_Super_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE Replace_Super_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Replace_Supercb_1,1,bind); 
 rb_ary_store(bind,0/*oldchanged*/,it); it=CALL(traverse_Replace_Supercb_2,1,bind); 
 rb_ary_store(bind,1/*this*/,it); it=Qnil;
 rb_ary_store(bind,2/*clon*/,it); it=Qfalse;
 rb_ary_store(bind,3/*changed*/,it); it=CALL(traverse_Replace_Supercb_3,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(traverse_Replace_Supercb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7/*key*/,it); it=CALL(traverse_Replace_Supercb_5,1,bind);   it=Replace_Super_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*val*/,it); it=CALL(traverse_Replace_Supercb_6,1,bind);   it=Replace_Super_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Replace_Super_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Replace_Super_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Replace_Supercb_7,1,bind); 
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Replace_Super_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(CALL(switchcbReplace_Super3,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Replace_Super_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Replace_Supercb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3/*ar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Replace_Super_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4/*it*/,it); it=CALL(traverse_item_Replace_Supercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3/*ar*/);
 rb_ary_store(bind,5/*autovar*/,it);   it=Replace_Super_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Replace_Super_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Replace_Supercb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Replace_Super_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,7/*autovar*/,it);   it=Replace_Super_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Replace_Super_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Replace_Supercb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Replace_Super_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_const_get(rb_cObject, rb_intern("Apply")); arg0=it; it=Replace_Super_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,1/*name*/,it); it=CALL(visit_Replace_Supercb_1,1,bind); FAILTEST(pass1);it=rb_ary_new3(0);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(visit_Replace_Supercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,4/*args*/,it); it=CALL(visit_Replace_Supercb_3,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it);   it=Replace_Super_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,6/*_result*/,it); it=rb_ary_entry(bind,6/*_result*/);
return it;
fail: return failobj; }
void Init_inliner2_c(){ 
 cls_DetectCalls=rb_define_class("DetectCalls",rb_const_get(rb_cObject,rb_intern("Visitor"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_DetectCalls,"clas",DetectCalls_clas,1);
rb_define_method(cls_DetectCalls,"empty",DetectCalls_empty,0);
rb_define_method(cls_DetectCalls,"eof",DetectCalls_eof,0);
rb_define_method(cls_DetectCalls,"fails",DetectCalls_fails,0);
rb_define_method(cls_DetectCalls,"root",DetectCalls_root,0);
rb_define_method(cls_DetectCalls,"traverse",DetectCalls_traverse,0);
rb_define_method(cls_DetectCalls,"traverse_item",DetectCalls_traverse_item,0);
rb_define_method(cls_DetectCalls,"visit",DetectCalls_visit,0);

 cls_Inliner2=rb_define_class("Inliner2",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Inliner2,"clas",Inliner2_clas,1);
rb_define_method(cls_Inliner2,"empty",Inliner2_empty,0);
rb_define_method(cls_Inliner2,"eof",Inliner2_eof,0);
rb_define_method(cls_Inliner2,"fails",Inliner2_fails,0);
rb_define_method(cls_Inliner2,"root",Inliner2_root,0);
rb_define_method(cls_Inliner2,"traverse",Inliner2_traverse,0);
rb_define_method(cls_Inliner2,"traverse_item",Inliner2_traverse_item,0);
rb_define_method(cls_Inliner2,"visit",Inliner2_visit,0);

 cls_Replace_Super=rb_define_class("Replace_Super",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Replace_Super,"clas",Replace_Super_clas,1);
rb_define_method(cls_Replace_Super,"empty",Replace_Super_empty,0);
rb_define_method(cls_Replace_Super,"eof",Replace_Super_eof,0);
rb_define_method(cls_Replace_Super,"fails",Replace_Super_fails,0);
rb_define_method(cls_Replace_Super,"root",Replace_Super_root,0);
rb_define_method(cls_Replace_Super,"traverse",Replace_Super_traverse,0);
rb_define_method(cls_Replace_Super,"traverse_item",Replace_Super_traverse_item,0);
rb_define_method(cls_Replace_Super,"visit",Replace_Super_visit,0);
 rb_eval_string("testversioninliner2('ba4b474585834ce727b76845d7737713')");}
