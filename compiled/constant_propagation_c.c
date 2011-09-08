#include "cthyst.h"
VALUE cls_Constant_Traverser;
VALUE Constant_Traverser_clas(VALUE self ,VALUE a0);
VALUE Constant_Traverser_empty(VALUE self );
VALUE Constant_Traverser_eof(VALUE self );
VALUE Constant_Traverser_fails(VALUE self );
VALUE Constant_Traverser_root(VALUE self );
VALUE Constant_Traverser_traverse(VALUE self );
VALUE Constant_Traverser_traverse_item(VALUE self );
VALUE Constant_Traverser_visit(VALUE self );
VALUE Constant_Traverser_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Constant_Traversercb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Constant_Traverser_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Constant_Traverser_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Constant_Traverser_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Constant_Traverser_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Constant_Traverser_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Constant_Traversercb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Constant_Traverser_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Constant_Traversercb_1,1,bind); it=CALL(root_Constant_Traversercb_2,1,bind);   it=Constant_Traverser_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Constant_Traverser_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Constant_Traversercb_1,1,bind); 
 rb_ary_store(bind,0/*oldchanged*/,it); it=CALL(visit_Constant_Traversercb_4,1,bind); 
 rb_ary_store(bind,1/*this*/,it); it=Qnil;
 rb_ary_store(bind,2/*clon*/,it); it=Qfalse;
 rb_ary_store(bind,3/*changed*/,it); it=CALL(traverse_Constant_Traversercb_2,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(traverse_Constant_Traversercb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7/*key*/,it); it=CALL(traverse_Constant_Traversercb_4,1,bind);   it=Constant_Traverser_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*val*/,it); it=CALL(traverse_Constant_Traversercb_5,1,bind);   it=Constant_Traverser_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Constant_Traverser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Constant_Traverser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Constant_Traversercb_6,1,bind); 
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Constant_Traverser_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcbConstant_Traverser2,1,ame_curobj(self)));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Constant_Traverser_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Constant_Traversercb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,3/*ar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Constant_Traverser_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4/*it*/,it); it=CALL(traverse_item_Constant_Traversercb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=rb_ary_entry(bind,3/*ar*/);
 rb_ary_store(bind,5/*autovar*/,it);   it=Constant_Traverser_eof(self ); FAILTEST(pass1);
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
   it=Constant_Traverser_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Constant_Traversercb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Constant_Traverser_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,7/*autovar*/,it);   it=Constant_Traverser_eof(self ); FAILTEST(pass2);
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
   it=Constant_Traverser_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Constant_Traversercb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
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
VALUE Constant_Traverser_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(9);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

char chr1=FIX2INT(CALL(switchcbConstant_Traverser1,1,ame_curobj(self)));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Constant_Traversercb_1,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(visit_Constant_Traversercb_2,1,bind); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Constant_Traverser_traverse_item(self ); FAILTEST(pass2);
 rb_ary_store(bind,2/*expr*/,it);   it=Constant_Traverser_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(visit_Constant_Traversercb_3,1,bind); 
 rb_ary_store(bind,3/*autovar*/,it);   it=Constant_Traverser_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it);  break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=CALL(visit_Constant_Traversercb_4,1,bind); 
 rb_ary_store(bind,6/*autovar*/,it);   it=Constant_Traverser_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it);  break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=CALL(visit_Constant_Traversercb_5,1,bind); 
 rb_ary_store(bind,8/*autovar*/,it);   it=Constant_Traverser_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos5); ame_setlen(self,oldlen4);
	if(fail4) goto fail;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it);  break;case 3:;   it=Constant_Traverser_fails(self ); FAILTEST(fail); break;}it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
void Init_constant_propagation_c(){ 
 cls_Constant_Traverser=rb_define_class("Constant_Traverser",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Constant_Traverser,"clas",Constant_Traverser_clas,1);
rb_define_method(cls_Constant_Traverser,"empty",Constant_Traverser_empty,0);
rb_define_method(cls_Constant_Traverser,"eof",Constant_Traverser_eof,0);
rb_define_method(cls_Constant_Traverser,"fails",Constant_Traverser_fails,0);
rb_define_method(cls_Constant_Traverser,"root",Constant_Traverser_root,0);
rb_define_method(cls_Constant_Traverser,"traverse",Constant_Traverser_traverse,0);
rb_define_method(cls_Constant_Traverser,"traverse_item",Constant_Traverser_traverse_item,0);
rb_define_method(cls_Constant_Traverser,"visit",Constant_Traverser_visit,0);
 rb_eval_string("testversionconstant_propagation('fe4ef925c5d28c2b256caab545e6893e')");}
