#include "cthyst.h"
VALUE cls_Dataflow;
VALUE Dataflow_clas(VALUE self ,VALUE a0);
VALUE Dataflow_empty(VALUE self );
VALUE Dataflow_eof(VALUE self );
VALUE Dataflow_fails(VALUE self );
VALUE Dataflow_root(VALUE self );
VALUE Dataflow_traverse(VALUE self );
VALUE Dataflow_traverse_item(VALUE self );
VALUE Dataflow_vars_in(VALUE self );
VALUE Dataflow_visit(VALUE self );
VALUE c_315;
VALUE switchhashDataflow1;
VALUE switchhashDataflow2;
VALUE switchhashDataflow3;
VALUE Dataflow_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Dataflowcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Dataflow_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Dataflow_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dataflow_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Dataflowcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(vars_in_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,0/*autovar*/,it); it=CALL(root_Dataflowcb_1,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=c_315; arg0=it; it=Dataflow_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Dataflowcb_2,1,bind); it=CALL(root_Dataflowcb_3,1,bind); 
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(root_Dataflowcb_4,1,bind); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,5/*autovar*/,it); it=CALL(root_Dataflowcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,6/*var*/,it);   it=Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos4); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
  it=Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
it=CALL(root_Dataflowcb_6,1,bind); it=CALL(root_Dataflowcb_7,1,bind); 
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(root_Dataflowcb_8,1,bind); int oldpos6=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse_item(self ); FAILTEST(pass5);
 rb_ary_store(bind,8/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos6); ame_setlen(self,oldlen5);
	if(fail5) goto pass2;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,9/*body*/,it); it=CALL(root_Dataflowcb_9,1,bind); it=CALL(root_Dataflowcb_10,1,bind); it=CALL(vars_in_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,10/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,10/*autovar*/);
 rb_ary_store(bind,11/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,11/*autovar*/);
 rb_ary_store(bind,12/*_result*/,it); it=rb_ary_entry(bind,12/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,0/*oldchanged*/,it); it=CALL(vars_in_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,1/*this*/,it); it=Qnil;
 rb_ary_store(bind,2/*clon*/,it); it=Qfalse;
 rb_ary_store(bind,3/*changed*/,it); it=CALL(traverse_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(traverse_Dataflowcb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7/*key*/,it); it=CALL(traverse_Dataflowcb_4,1,bind);   it=Dataflow_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*val*/,it); it=CALL(traverse_Dataflowcb_5,1,bind);   it=Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Dataflowcb_6,1,bind); 
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDataflow3,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dataflow_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Dataflowcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,3/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dataflow_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Dataflowcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,5/*ar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*it*/,it); it=CALL(traverse_item_Dataflowcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,5/*ar*/);
 rb_ary_store(bind,7/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dataflow_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Dataflowcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
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
VALUE Dataflow_vars_in(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(21);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*ary*/,it); it=CALL(vars_in_Dataflowcb_1,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(vars_in_Dataflowcb_3,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Dataflow_eof(self ); FAILTEST(pass1);
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
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos6=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass2);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(vars_in_Dataflowcb_4,1,bind);   it=Dataflow_eof(self ); FAILTEST(pass2);
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
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos8=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_5,1,bind); 
 rb_ary_store(bind,6/*autovar*/,it); it=CALL(vars_in_Dataflowcb_6,1,bind); int oldpos9=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass4);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(vars_in_Dataflowcb_7,1,bind);   it=Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos9); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
  it=Dataflow_eof(self ); FAILTEST(pass3);
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
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);
 rb_ary_store(bind,8/*autovar*/,it); int oldpos11=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,9/*autovar*/,it); it=CALL(vars_in_Dataflowcb_8,1,bind); int oldpos12; while(1){oldpos12=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldpos12=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos12);   it=Dataflow_eof(self ); FAILTEST(pass5);
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
   it=AmethystCore_anything(self ); FAILTEST(alt5_2);
 rb_ary_store(bind,10/*autovar*/,it); int oldpos14=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,11/*autovar*/,it); it=CALL(vars_in_Dataflowcb_9,1,bind); it=CALL(vars_in_Dataflowcb_10,1,bind); int oldpos15; while(1){oldpos15=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (IGET(stop)!=Qnil){{oldpos15=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos15);   it=Dataflow_eof(self ); FAILTEST(pass6);
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
   it=AmethystCore_anything(self ); FAILTEST(alt6_2);
 rb_ary_store(bind,12/*autovar*/,it); int oldpos17=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,13/*autovar*/,it); it=CALL(vars_in_Dataflowcb_11,1,bind); it=CALL(vars_in_Dataflowcb_10,1,bind); int oldpos18; while(1){oldpos18=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); if (IGET(stop)!=Qnil){{oldpos18=ame_getpos(self);goto break5;} } } break5: ISET(stop,Qnil);  ame_setpos(self,oldpos18);   it=Dataflow_eof(self ); FAILTEST(pass7);
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
   it=AmethystCore_anything(self ); FAILTEST(alt7_2);
 rb_ary_store(bind,14/*autovar*/,it); int oldpos20=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,rb_ary_entry(bind,14/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass8);it=CALL(vars_in_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,15/*autovar*/,it); it=CALL(vars_in_Dataflowcb_12,1,bind);   it=Dataflow_eof(self ); FAILTEST(pass8);
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
   it=AmethystCore_anything(self ); FAILTEST(alt8_2);
 rb_ary_store(bind,16/*autovar*/,it); int oldpos22=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,rb_ary_entry(bind,16/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(vars_in_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,17/*autovar*/,it); it=CALL(vars_in_Dataflowcb_13,1,bind);   it=Dataflow_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos22); ame_setlen(self,oldlen9);
	if(fail9) goto alt8_2;
 
ISET(cut,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt8_3); 
ISET(cut,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos21); goto break1;
 accept8:;
 break;case 8:; int oldpos23=ame_getpos(self);
alt9_1: ame_setpos(self,oldpos23);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_2);
 rb_ary_store(bind,18/*autovar*/,it); int oldpos24=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,rb_ary_entry(bind,18/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass10);
 rb_ary_store(bind,19/*autovar*/,it); it=CALL(vars_in_Dataflowcb_14,1,bind);   it=Dataflow_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos24); ame_setlen(self,oldlen10);
	if(fail10) goto alt9_2;
 
ISET(cut,Qnil);goto accept9;
alt9_2: ame_setpos(self,oldpos23);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt9_3); 
ISET(cut,Qnil);goto accept9;
  alt9_3:  ame_setpos(self,oldpos23); goto break1;
 accept9:;
 break;case 9:;   it=AmethystCore_anything(self ); FAILTEST(break1); break;} if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*ary*/);
 rb_ary_store(bind,20/*_result*/,it); it=rb_ary_entry(bind,20/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(47);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*t*/,it); unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDataflow1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse_item(self ); FAILTEST(pass1);
 rb_ary_store(bind,0/*t*/,it); it=CALL(visit_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,2/*act*/,it); it=CALL(visit_Dataflowcb_2,1,bind); it=CALL(visit_Dataflowcb_3,1,bind); 
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(visit_Dataflowcb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass3);
 rb_ary_store(bind,5/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,6/*var*/,it);   it=Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(visit_Dataflowcb_5,1,bind); 
 rb_ary_store(bind,7/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it);  break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,9/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,10/*autovar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,11/*autovar*/,it); it=CALL(visit_Dataflowcb_6,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,10/*autovar*/);
 rb_ary_store(bind,0/*t*/,it); it=CALL(visit_Dataflowcb_7,1,bind); 
 rb_ary_store(bind,12/*app*/,it); it=rb_ary_entry(bind,12/*app*/);
 rb_ary_store(bind,13/*autovar*/,it); it=CALL(visit_Dataflowcb_8,1,bind); int oldpos6=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,13/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass5);
 rb_ary_store(bind,14/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,14/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_vars_in(self ); FAILTEST(pass6);
 rb_ary_store(bind,6/*var*/,it);   it=Dataflow_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos7); ame_setlen(self,oldlen6);
	if(fail6) goto pass5;
  it=Dataflow_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos6); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=CALL(visit_Dataflowcb_9,1,bind); it=rb_ary_entry(bind,12/*app*/);
 rb_ary_store(bind,15/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos4); ame_setlen(self,oldlen4);
	if(fail4) goto fail;
it=rb_ary_entry(bind,15/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it);  break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,16/*autovar*/,it); int oldpos8=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,16/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse(self ); FAILTEST(pass7);
 rb_ary_store(bind,17/*autovar*/,it); int oldpos9=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,rb_ary_entry(bind,17/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos10; while(1){oldpos10=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos10=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos10); it=CALL(visit_Dataflowcb_10,1,bind); 
 rb_ary_store(bind,18/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos9); ame_setlen(self,oldlen8);
	if(fail8) goto pass7;
it=rb_ary_entry(bind,18/*autovar*/);
 rb_ary_store(bind,19/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos8); ame_setlen(self,oldlen7);
	if(fail7) goto fail;
it=rb_ary_entry(bind,19/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it);  break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,20/*autovar*/,it); int oldpos11=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,rb_ary_entry(bind,20/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos12; while(1){oldpos12=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldpos12=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos12); it=CALL(visit_Dataflowcb_11,1,bind); 
 rb_ary_store(bind,21/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos11); ame_setlen(self,oldlen9);
	if(fail9) goto fail;
it=rb_ary_entry(bind,21/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it);  break;case 4:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,22/*autovar*/,it); int oldpos13=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,rb_ary_entry(bind,22/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,23/*autovar*/,it); int oldpos14; while(1){oldpos14=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break4);
 rb_ary_store(bind,24/*autovar*/,it); it=CALL(visit_Dataflowcb_12,1,bind);  if (IGET(stop)!=Qnil){{oldpos14=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos14); it=rb_ary_entry(bind,23/*autovar*/);
 rb_ary_store(bind,0/*t*/,it); it=CALL(visit_Dataflowcb_13,1,bind); 
 rb_ary_store(bind,25/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos13); ame_setlen(self,oldlen10);
	if(fail10) goto fail;
it=rb_ary_entry(bind,25/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it);  break;case 5:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,26/*autovar*/,it); int oldpos15=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,rb_ary_entry(bind,26/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dataflowcb_14,1,bind); 
 rb_ary_store(bind,27/*prev*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,28/*autovar*/,it); int oldpos16; while(1){oldpos16=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break5);
 rb_ary_store(bind,29/*autovar*/,it); it=CALL(visit_Dataflowcb_15,1,bind);  if (IGET(stop)!=Qnil){{oldpos16=ame_getpos(self);goto break5;} } } break5: ISET(stop,Qnil);  ame_setpos(self,oldpos16); it=rb_ary_entry(bind,28/*autovar*/);
 rb_ary_store(bind,0/*t*/,it); it=CALL(visit_Dataflowcb_16,1,bind); it=CALL(visit_Dataflowcb_17,1,bind); 
 rb_ary_store(bind,30/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos15); ame_setlen(self,oldlen11);
	if(fail11) goto fail;
it=rb_ary_entry(bind,30/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it);  break;case 6:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,31/*autovar*/,it); int oldpos17=ame_getpos(self); int oldlen12=ame_getlen(self); VALUE oldsrc12=ame_getsrc(self); int fail12=0;
ame_setsrc(self,rb_ary_entry(bind,31/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,32/*join*/,it); it=CALL(visit_Dataflowcb_18,1,bind); 
 rb_ary_store(bind,33/*old*/,it); int oldpos18; while(1){oldpos18=ame_getpos(self); it=CALL(visit_Dataflowcb_19,1,bind);   it=Dataflow_traverse_item(self ); FAILTEST(break6);
 rb_ary_store(bind,34/*autovar*/,it); it=CALL(visit_Dataflowcb_20,1,bind); it=CALL(visit_Dataflowcb_21,1,bind);  if (IGET(stop)!=Qnil){{oldpos18=ame_getpos(self);goto break6;} } } break6: ISET(stop,Qnil);  ame_setpos(self,oldpos18); it=CALL(visit_Dataflowcb_22,1,bind); it=CALL(visit_Dataflowcb_23,1,bind); 
 rb_ary_store(bind,35/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: ame_setsrc(self,oldsrc12); ame_setpos(self,oldpos17); ame_setlen(self,oldlen12);
	if(fail12) goto fail;
it=rb_ary_entry(bind,35/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it);  break;case 7:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,36/*autovar*/,it); int oldpos19=ame_getpos(self); int oldlen13=ame_getlen(self); VALUE oldsrc13=ame_getsrc(self); int fail13=0;
ame_setsrc(self,rb_ary_entry(bind,36/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dataflowcb_24,1,bind); 
 rb_ary_store(bind,37/*autovar*/,it); it=CALL(visit_Dataflowcb_25,1,bind); int oldpos20=ame_getpos(self); int oldlen14=ame_getlen(self); VALUE oldsrc14=ame_getsrc(self); int fail14=0;
ame_setsrc(self,rb_ary_entry(bind,37/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse_item(self ); FAILTEST(pass14);
 rb_ary_store(bind,38/*to*/,it);   it=Dataflow_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: ame_setsrc(self,oldsrc14); ame_setpos(self,oldpos20); ame_setlen(self,oldlen14);
	if(fail14) goto pass13;
it=CALL(visit_Dataflowcb_26,1,bind); 
 rb_ary_store(bind,39/*autovar*/,it); it=CALL(visit_Dataflowcb_27,1,bind); int oldpos21=ame_getpos(self); int oldlen15=ame_getlen(self); VALUE oldsrc15=ame_getsrc(self); int fail15=0;
ame_setsrc(self,rb_ary_entry(bind,39/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dataflow_traverse_item(self ); FAILTEST(pass15);
 rb_ary_store(bind,6/*var*/,it);   it=Dataflow_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: ame_setsrc(self,oldsrc15); ame_setpos(self,oldpos21); ame_setlen(self,oldlen15);
	if(fail15) goto pass13;
it=CALL(visit_Dataflowcb_28,1,bind); it=CALL(visit_Dataflowcb_29,1,bind); 
 rb_ary_store(bind,40/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: ame_setsrc(self,oldsrc13); ame_setpos(self,oldpos19); ame_setlen(self,oldlen13);
	if(fail13) goto fail;
it=rb_ary_entry(bind,40/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it);  break;case 8:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,41/*autovar*/,it); int oldpos22=ame_getpos(self); int oldlen16=ame_getlen(self); VALUE oldsrc16=ame_getsrc(self); int fail16=0;
ame_setsrc(self,rb_ary_entry(bind,41/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dataflowcb_30,1,bind); 
 rb_ary_store(bind,42/*autovar*/,it); it=CALL(visit_Dataflowcb_31,1,bind); int oldpos23=ame_getpos(self); int oldlen17=ame_getlen(self); VALUE oldsrc17=ame_getsrc(self); int fail17=0;
ame_setsrc(self,rb_ary_entry(bind,42/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass17);
 rb_ary_store(bind,43/*autovar*/,it); int oldpos24=ame_getpos(self); int oldlen18=ame_getlen(self); VALUE oldsrc18=ame_getsrc(self); int fail18=0;
ame_setsrc(self,rb_ary_entry(bind,43/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,44/*autovar*/,it); int oldpos25; while(1){oldpos25=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break7);
 rb_ary_store(bind,45/*autovar*/,it); it=CALL(visit_Dataflowcb_32,1,bind);  if (IGET(stop)!=Qnil){{oldpos25=ame_getpos(self);goto break7;} } } break7: ISET(stop,Qnil);  ame_setpos(self,oldpos25); it=rb_ary_entry(bind,44/*autovar*/);
 rb_ary_store(bind,6/*var*/,it);   it=Dataflow_eof(self ); FAILTEST(pass18);
	goto success18;
	pass18: fail18=1;
	success18: ame_setsrc(self,oldsrc18); ame_setpos(self,oldpos24); ame_setlen(self,oldlen18);
	if(fail18) goto pass17;
  it=Dataflow_eof(self ); FAILTEST(pass17);
	goto success17;
	pass17: fail17=1;
	success17: ame_setsrc(self,oldsrc17); ame_setpos(self,oldpos23); ame_setlen(self,oldlen17);
	if(fail17) goto pass16;
it=CALL(visit_Dataflowcb_33,1,bind); 
 rb_ary_store(bind,46/*autovar*/,it);   it=Dataflow_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: ame_setsrc(self,oldsrc16); ame_setpos(self,oldpos22); ame_setlen(self,oldlen16);
	if(fail16) goto fail;
it=rb_ary_entry(bind,46/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it);  break;case 9:;   it=Dataflow_fails(self ); FAILTEST(fail); break;}it=rb_ary_entry(bind,8/*_result*/);
return it;
fail: return failobj; }VALUE cls_Dead_Code_Deleter3;
VALUE Dead_Code_Deleter3_clas(VALUE self ,VALUE a0);
VALUE Dead_Code_Deleter3_empty(VALUE self );
VALUE Dead_Code_Deleter3_eof(VALUE self );
VALUE Dead_Code_Deleter3_fails(VALUE self );
VALUE Dead_Code_Deleter3_root(VALUE self );
VALUE Dead_Code_Deleter3_traverse(VALUE self );
VALUE Dead_Code_Deleter3_traverse_item(VALUE self );
VALUE Dead_Code_Deleter3_visit(VALUE self );
VALUE c_321;
VALUE switchhashDead_Code_Deleter34;
VALUE switchhashDead_Code_Deleter35;
VALUE switchhashDead_Code_Deleter36;
VALUE Dead_Code_Deleter3_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Dead_Code_Deleter3cb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Dead_Code_Deleter3_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dead_Code_Deleter3_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Dead_Code_Deleter3cb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(visit_Dead_Code_Deleter3cb_1,1,bind); 
 rb_ary_store(bind,0/*autovar*/,it); it=CALL(root_Dead_Code_Deleter3cb_1,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=c_321; arg0=it; it=Dead_Code_Deleter3_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(root_Dead_Code_Deleter3cb_2,1,bind); it=CALL(root_Dead_Code_Deleter3cb_3,1,bind);   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,2/*autovar*/,it);   it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,3/*autovar*/,it);   it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Dead_Code_Deleter3cb_1,1,bind); 
 rb_ary_store(bind,0/*oldchanged*/,it); it=CALL(visit_Dead_Code_Deleter3cb_1,1,bind); 
 rb_ary_store(bind,1/*this*/,it); it=Qnil;
 rb_ary_store(bind,2/*clon*/,it); it=Qfalse;
 rb_ary_store(bind,3/*changed*/,it); it=CALL(traverse_Dead_Code_Deleter3cb_2,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(traverse_Dead_Code_Deleter3cb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7/*key*/,it); it=CALL(traverse_Dead_Code_Deleter3cb_4,1,bind);   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*val*/,it); it=CALL(traverse_Dead_Code_Deleter3cb_5,1,bind);   it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Dead_Code_Deleter3cb_6,1,bind); 
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDead_Code_Deleter36,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Dead_Code_Deleter3cb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,3/*autovar*/,it);   it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Dead_Code_Deleter3cb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,5/*ar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*it*/,it); it=CALL(traverse_item_Dead_Code_Deleter3cb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,5/*ar*/);
 rb_ary_store(bind,7/*autovar*/,it);   it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Dead_Code_Deleter3cb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
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
VALUE Dead_Code_Deleter3_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDead_Code_Deleter35,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 2:;case 4:;case 5:; unsigned char chr2=FIX2INT(rb_hash_aref(switchhashDead_Code_Deleter34,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it);  break;case 3:;   it=Dead_Code_Deleter3_fails(self ); FAILTEST(fail); break;}int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter3cb_1,1,bind); 
 rb_ary_store(bind,1/*this*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2);   it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(visit_Dead_Code_Deleter3cb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Dead_Code_Deleter3cb_1,1,bind); 
 rb_ary_store(bind,4/*b*/,it);   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=CALL(visit_Dead_Code_Deleter3cb_3,1,bind); 
 rb_ary_store(bind,6/*expr*/,it); it=CALL(visit_Dead_Code_Deleter3cb_4,1,bind); 
 rb_ary_store(bind,7/*autovar*/,it);   it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,8/*autovar*/,it);   it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto fail;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,9/*autovar*/,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos7); it=CALL(visit_Dead_Code_Deleter3cb_1,1,bind); 
 rb_ary_store(bind,1/*this*/,it);   it=Dead_Code_Deleter3_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto fail;
it=CALL(visit_Dead_Code_Deleter3cb_5,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  break;}it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }VALUE cls_Forget_SSA;
VALUE Forget_SSA_clas(VALUE self ,VALUE a0);
VALUE Forget_SSA_empty(VALUE self );
VALUE Forget_SSA_eof(VALUE self );
VALUE Forget_SSA_fails(VALUE self );
VALUE Forget_SSA_root(VALUE self );
VALUE Forget_SSA_traverse(VALUE self );
VALUE Forget_SSA_traverse_item(VALUE self );
VALUE Forget_SSA_visit(VALUE self );
VALUE c_324;
VALUE c_327;
VALUE switchhashForget_SSA7;
VALUE Forget_SSA_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Forget_SSAcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Forget_SSA_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Forget_SSA_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Forget_SSA_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Forget_SSAcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(root_Forget_SSAcb_1,1,bind); 
 rb_ary_store(bind,0/*autovar*/,it); it=CALL(root_Forget_SSAcb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=c_327; arg0=it; it=Forget_SSA_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Forget_SSA_traverse(self ); FAILTEST(pass2);
 rb_ary_store(bind,2/*autovar*/,it);   it=Forget_SSA_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,3/*autovar*/,it);   it=Forget_SSA_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Forget_SSAcb_1,1,bind); 
 rb_ary_store(bind,0/*oldchanged*/,it); it=CALL(root_Forget_SSAcb_1,1,bind); 
 rb_ary_store(bind,1/*this*/,it); it=Qnil;
 rb_ary_store(bind,2/*clon*/,it); it=Qfalse;
 rb_ary_store(bind,3/*changed*/,it); it=CALL(traverse_Forget_SSAcb_2,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(traverse_Forget_SSAcb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7/*key*/,it); it=CALL(traverse_Forget_SSAcb_4,1,bind);   it=Forget_SSA_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*val*/,it); it=CALL(traverse_Forget_SSAcb_5,1,bind);   it=Forget_SSA_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Forget_SSA_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Forget_SSA_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Forget_SSAcb_6,1,bind); 
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashForget_SSA7,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Forget_SSA_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Forget_SSAcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Forget_SSA_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,3/*autovar*/,it);   it=Forget_SSA_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Forget_SSA_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Forget_SSAcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,5/*ar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Forget_SSA_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*it*/,it); it=CALL(traverse_item_Forget_SSAcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,5/*ar*/);
 rb_ary_store(bind,7/*autovar*/,it);   it=Forget_SSA_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Forget_SSA_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Forget_SSAcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
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
VALUE Forget_SSA_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=c_324; arg0=it; it=Forget_SSA_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); it=CALL(visit_Forget_SSAcb_1,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it);   it=Forget_SSA_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
void Init_dataflow_ssa_c(){ 
 cls_Dataflow=rb_define_class("Dataflow",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
switchhashDataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Pass\nnext h[k]=8 if k<=Result\nnext h[k]=9 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDataflow1);
switchhashDataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Args\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Global\nnext h[k]=5 if k<=Key\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Strin\nnext h[k]=9 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDataflow2);
switchhashDataflow3=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDataflow3);
c_315=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_315);
rb_define_method(cls_Dataflow,"clas",Dataflow_clas,1);
rb_define_method(cls_Dataflow,"empty",Dataflow_empty,0);
rb_define_method(cls_Dataflow,"eof",Dataflow_eof,0);
rb_define_method(cls_Dataflow,"fails",Dataflow_fails,0);
rb_define_method(cls_Dataflow,"root",Dataflow_root,0);
rb_define_method(cls_Dataflow,"traverse",Dataflow_traverse,0);
rb_define_method(cls_Dataflow,"traverse_item",Dataflow_traverse_item,0);
rb_define_method(cls_Dataflow,"vars_in",Dataflow_vars_in,0);
rb_define_method(cls_Dataflow,"visit",Dataflow_visit,0);

 cls_Dead_Code_Deleter3=rb_define_class("Dead_Code_Deleter3",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
switchhashDead_Code_Deleter35=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDead_Code_Deleter35);
switchhashDead_Code_Deleter34=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Result\nnext h[k]=3 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDead_Code_Deleter34);
switchhashDead_Code_Deleter36=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDead_Code_Deleter36);
c_321=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_321);
rb_define_method(cls_Dead_Code_Deleter3,"clas",Dead_Code_Deleter3_clas,1);
rb_define_method(cls_Dead_Code_Deleter3,"empty",Dead_Code_Deleter3_empty,0);
rb_define_method(cls_Dead_Code_Deleter3,"eof",Dead_Code_Deleter3_eof,0);
rb_define_method(cls_Dead_Code_Deleter3,"fails",Dead_Code_Deleter3_fails,0);
rb_define_method(cls_Dead_Code_Deleter3,"root",Dead_Code_Deleter3_root,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse",Dead_Code_Deleter3_traverse,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse_item",Dead_Code_Deleter3_traverse_item,0);
rb_define_method(cls_Dead_Code_Deleter3,"visit",Dead_Code_Deleter3_visit,0);

 cls_Forget_SSA=rb_define_class("Forget_SSA",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_324=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_324);
switchhashForget_SSA7=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashForget_SSA7);
c_327=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_327);
rb_define_method(cls_Forget_SSA,"clas",Forget_SSA_clas,1);
rb_define_method(cls_Forget_SSA,"empty",Forget_SSA_empty,0);
rb_define_method(cls_Forget_SSA,"eof",Forget_SSA_eof,0);
rb_define_method(cls_Forget_SSA,"fails",Forget_SSA_fails,0);
rb_define_method(cls_Forget_SSA,"root",Forget_SSA_root,0);
rb_define_method(cls_Forget_SSA,"traverse",Forget_SSA_traverse,0);
rb_define_method(cls_Forget_SSA,"traverse_item",Forget_SSA_traverse_item,0);
rb_define_method(cls_Forget_SSA,"visit",Forget_SSA_visit,0);
 rb_eval_string("testversiondataflow_ssa('8badfdf6c25a6488589112eea1c67c09')");}
