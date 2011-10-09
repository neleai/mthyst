#include "cthyst.h"
VALUE cls_First_Dataflow;
VALUE First_Dataflow_clas(VALUE self ,VALUE a0);
VALUE First_Dataflow_empty(VALUE self );
VALUE First_Dataflow_eof(VALUE self );
VALUE First_Dataflow_fails(VALUE self );
VALUE First_Dataflow_first(VALUE self );
VALUE First_Dataflow_root(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE switchhashFirst_Dataflow1;
VALUE switchhashFirst_Dataflow2;
VALUE First_Dataflow_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_First_Dataflowcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE First_Dataflow_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE First_Dataflow_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=First_Dataflow_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=First_Dataflow_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE First_Dataflow_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_First_Dataflowcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE First_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(26);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashFirst_Dataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 unsigned char chr2=FIX2INT(rb_hash_aref(switchhashFirst_Dataflow1,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it);  break;case 6:;   it=First_Dataflow_fails(self ); FAILTEST(alt1_2); break;}int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=CALL(first_First_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it);   it=First_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=CALL(first_First_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 10:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_First_Dataflowcb_3,1,bind); FAILTEST(pass2);int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=CALL(first_First_Dataflowcb_4,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it);   it=First_Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos8; while(1){oldpos8=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break3);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(first_First_Dataflowcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos8=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos8); it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,8/*it*/,it); it=CALL(first_First_Dataflowcb_6,1,bind); 
 rb_ary_store(bind,9/*autovar*/,it);   it=First_Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos7); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_3;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);it=CALL(first_First_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 1:; int oldpos9=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,10/*autovar*/,it); int oldpos10=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_First_Dataflowcb_7,1,bind); 
 rb_ary_store(bind,11/*autovar*/,it); it=CALL(first_First_Dataflowcb_8,1,bind); int oldpos11=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=First_Dataflow_value(self ); FAILTEST(pass5);
 rb_ary_store(bind,12/*autovar*/,it);   it=First_Dataflow_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos11); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,13/*autovar*/,it);   it=First_Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos10); ame_setlen(self,oldlen4);
	if(fail4) goto alt3_2;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=CALL(first_First_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos9); goto fail;
 accept3:;
 break;case 5:; int oldpos12=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);
 rb_ary_store(bind,14/*autovar*/,it); int oldpos13=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,14/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=First_Dataflow_value(self ); FAILTEST(pass6);
 rb_ary_store(bind,15/*val*/,it); it=CALL(first_First_Dataflowcb_9,1,bind); 
 rb_ary_store(bind,16/*autovar*/,it);   it=First_Dataflow_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos13); ame_setlen(self,oldlen6);
	if(fail6) goto alt4_2;
it=rb_ary_entry(bind,16/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=CALL(first_First_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos12); goto fail;
 accept4:;
 break;case 6:; int oldpos14=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2);
 rb_ary_store(bind,17/*autovar*/,it); int oldpos15=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,17/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,18/*autovar*/,it); int oldpos16; while(1){oldpos16=ame_getpos(self);   it=First_Dataflow_value(self ); FAILTEST(break4);
 rb_ary_store(bind,19/*autovar*/,it); it=CALL(first_First_Dataflowcb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos16=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos16); it=rb_ary_entry(bind,18/*autovar*/);
 rb_ary_store(bind,8/*it*/,it); it=CALL(first_First_Dataflowcb_6,1,bind); 
 rb_ary_store(bind,20/*autovar*/,it);   it=First_Dataflow_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos15); ame_setlen(self,oldlen7);
	if(fail7) goto alt5_2;
it=rb_ary_entry(bind,20/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=CALL(first_First_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos14); goto fail;
 accept5:;
 break;case 8:; int oldpos17=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2);
 rb_ary_store(bind,21/*autovar*/,it); int oldpos18=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,rb_ary_entry(bind,21/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_First_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,15/*val*/,it); int oldpos19; while(1){oldpos19=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5);
 rb_ary_store(bind,22/*el*/,it); it=rb_ary_entry(bind,22/*el*/);
 rb_ary_store(bind,23/*autovar*/,it); it=CALL(first_First_Dataflowcb_11,1,bind); int oldpos20=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,rb_ary_entry(bind,23/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=First_Dataflow_value(self ); FAILTEST(pass9);
 rb_ary_store(bind,24/*nev*/,it);   it=First_Dataflow_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos20); ame_setlen(self,oldlen9);
	if(fail9) goto break5;
it=CALL(first_First_Dataflowcb_12,1,bind); 
 rb_ary_store(bind,15/*val*/,it); int oldpos21=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break5;}
 int oldpos22=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt7_2;}
 it=CALL(first_First_Dataflowcb_13,1,bind); ISET(cut,Qtrue);  it=First_Dataflow_fails(self ); FAILTEST(alt8_2); 
ISET(cut,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt7_2;}
   it=First_Dataflow_empty(self ); FAILTEST(alt8_3); 
ISET(cut,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos22); goto alt7_2;
 accept8:;
  it=CALL(stop,0 ); FAILTEST(alt7_2); 
ISET(cut,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break5;}
   it=First_Dataflow_empty(self ); FAILTEST(alt7_3); 
ISET(cut,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos21); goto break5;
 accept7:;
 if (IGET(stop)!=Qnil){{oldpos19=ame_getpos(self);goto break5;} } } break5: ISET(stop,Qnil);  ame_setpos(self,oldpos19); int oldpos23; while(1){oldpos23=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (IGET(stop)!=Qnil){{oldpos23=ame_getpos(self);goto break6;} } } break6: ISET(stop,Qnil);  ame_setpos(self,oldpos23); it=rb_ary_entry(bind,15/*val*/);
 rb_ary_store(bind,25/*autovar*/,it);   it=First_Dataflow_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos18); ame_setlen(self,oldlen8);
	if(fail8) goto alt6_2;
it=rb_ary_entry(bind,25/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=CALL(first_First_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos17); goto fail;
 accept6:;
 break;}it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE First_Dataflow_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*x*/,it);  it=rb_ary_entry(bind,0/*x*/); arg0=it; it=CALL(analyze,1 ,arg0); FAILTEST(fail);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE First_Dataflow_value(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*x*/,it); it=CALL(value_First_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }VALUE cls_Sizes_Dataflow;
VALUE Sizes_Dataflow_clas(VALUE self ,VALUE a0);
VALUE Sizes_Dataflow_empty(VALUE self );
VALUE Sizes_Dataflow_eof(VALUE self );
VALUE Sizes_Dataflow_fails(VALUE self );
VALUE Sizes_Dataflow_first(VALUE self );
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self );
VALUE Sizes_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE Sizes_Dataflow_regch(VALUE self ,VALUE a0);
VALUE Sizes_Dataflow_spaces(VALUE self );
VALUE Sizes_Dataflow_token(VALUE self ,VALUE a0);
VALUE c_355;
VALUE c_356;
VALUE c_358;
VALUE c_359;
VALUE c_360;
VALUE c_361;
VALUE c_362;
VALUE c_363;
VALUE switchhashSizes_Dataflow3;
VALUE switchhashSizes_Dataflow4;
VALUE switchhashSizes_Dataflow5;
VALUE switchhashSizes_Dataflow6;
VALUE Sizes_Dataflow_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Sizes_Dataflowcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Sizes_Dataflow_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Sizes_Dataflow_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Sizes_Dataflowcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(9);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashSizes_Dataflow4,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,1/*autovar*/,it); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*autovar*/,it); unsigned char chr2=FIX2INT(rb_hash_aref(switchhashSizes_Dataflow3,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Sizes_Dataflow_spaces(self ); FAILTEST(pass2); it=rb_obj_clone(c_355); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(pass2);it=rb_obj_clone(c_356);  it=Sizes_Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
 it=rb_const_get(rb_cObject, rb_intern("CAct")); arg0=it; it=Sizes_Dataflow_clas(self ,arg0); FAILTEST(alt2_2);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,5/*str*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_2;
it=CALL(first_Sizes_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,6/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Sizes_Dataflow_spaces(self ); FAILTEST(pass4);unsigned char chr3=*ame_curstr(self);  switch(chr3){case UC('r') ... UC('r'):;  it=rb_obj_clone(c_358); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(pass4);it=rb_obj_clone(c_359); break;case UC('a') ... UC('a'):;  it=rb_obj_clone(c_360); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(pass4);it=rb_obj_clone(c_361); break;case UC('c') ... UC('c'):;  it=rb_obj_clone(c_362); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(pass4);it=rb_obj_clone(c_363); break;default:;   it=Sizes_Dataflow_fails(self ); FAILTEST(pass4); break;}  it=Sizes_Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto alt2_3;
it=CALL(first_Sizes_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,6/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;
 break;}  it=Sizes_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,8/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(fail);
 rb_ary_store(bind,8/*_result*/,it);  break;}it=rb_ary_entry(bind,8/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(26);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashSizes_Dataflow6,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 unsigned char chr2=FIX2INT(rb_hash_aref(switchhashSizes_Dataflow5,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it);  break;case 6:;   it=Sizes_Dataflow_fails(self ); FAILTEST(alt1_2); break;}int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 10:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_3,1,bind); FAILTEST(pass2);int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_4,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos8; while(1){oldpos8=ame_getpos(self);   it=CALL(value,0 ); FAILTEST(break3);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos8=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos8); it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,8/*it*/,it); it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_6,1,bind); 
 rb_ary_store(bind,9/*autovar*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos7); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_3;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 1:; int oldpos9=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,10/*autovar*/,it); int oldpos10=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_7,1,bind); 
 rb_ary_store(bind,11/*autovar*/,it); it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_8,1,bind); int oldpos11=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(value,0 ); FAILTEST(pass5);
 rb_ary_store(bind,12/*autovar*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos11); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,13/*autovar*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos10); ame_setlen(self,oldlen4);
	if(fail4) goto alt3_2;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos9); goto fail;
 accept3:;
 break;case 5:; int oldpos12=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);
 rb_ary_store(bind,14/*autovar*/,it); int oldpos13=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,14/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(value,0 ); FAILTEST(pass6);
 rb_ary_store(bind,15/*val*/,it); it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_9,1,bind); 
 rb_ary_store(bind,16/*autovar*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos13); ame_setlen(self,oldlen6);
	if(fail6) goto alt4_2;
it=rb_ary_entry(bind,16/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos12); goto fail;
 accept4:;
 break;case 6:; int oldpos14=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2);
 rb_ary_store(bind,17/*autovar*/,it); int oldpos15=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,17/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,18/*autovar*/,it); int oldpos16; while(1){oldpos16=ame_getpos(self);   it=CALL(value,0 ); FAILTEST(break4);
 rb_ary_store(bind,19/*autovar*/,it); it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos16=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos16); it=rb_ary_entry(bind,18/*autovar*/);
 rb_ary_store(bind,8/*it*/,it); it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_6,1,bind); 
 rb_ary_store(bind,20/*autovar*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos15); ame_setlen(self,oldlen7);
	if(fail7) goto alt5_2;
it=rb_ary_entry(bind,20/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos14); goto fail;
 accept5:;
 break;case 8:; int oldpos17=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2);
 rb_ary_store(bind,21/*autovar*/,it); int oldpos18=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,rb_ary_entry(bind,21/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,15/*val*/,it); int oldpos19; while(1){oldpos19=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5);
 rb_ary_store(bind,22/*el*/,it); it=rb_ary_entry(bind,22/*el*/);
 rb_ary_store(bind,23/*autovar*/,it); it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_11,1,bind); int oldpos20=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,rb_ary_entry(bind,23/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(value,0 ); FAILTEST(pass9);
 rb_ary_store(bind,24/*nev*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos20); ame_setlen(self,oldlen9);
	if(fail9) goto break5;
it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_12,1,bind); 
 rb_ary_store(bind,15/*val*/,it); int oldpos21=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break5;}
 int oldpos22=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt7_2;}
 it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_13,1,bind); ISET(cut,Qtrue);  it=Sizes_Dataflow_fails(self ); FAILTEST(alt8_2); 
ISET(cut,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt7_2;}
   it=Sizes_Dataflow_empty(self ); FAILTEST(alt8_3); 
ISET(cut,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos22); goto alt7_2;
 accept8:;
  it=CALL(stop,0 ); FAILTEST(alt7_2); 
ISET(cut,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break5;}
   it=Sizes_Dataflow_empty(self ); FAILTEST(alt7_3); 
ISET(cut,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos21); goto break5;
 accept7:;
 if (IGET(stop)!=Qnil){{oldpos19=ame_getpos(self);goto break5;} } } break5: ISET(stop,Qnil);  ame_setpos(self,oldpos19); int oldpos23; while(1){oldpos23=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (IGET(stop)!=Qnil){{oldpos23=ame_getpos(self);goto break6;} } } break6: ISET(stop,Qnil);  ame_setpos(self,oldpos23); it=rb_ary_entry(bind,15/*val*/);
 rb_ary_store(bind,25/*autovar*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos18); ame_setlen(self,oldlen8);
	if(fail8) goto alt6_2;
it=rb_ary_entry(bind,25/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=CALL(first_Sizes_Dataflow_Sizes_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos17); goto fail;
 accept6:;
 break;}it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(getvalue_Sizes_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(getvalue_Sizes_Dataflowcb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Sizes_Dataflow_first(self ); FAILTEST(pass1);
 rb_ary_store(bind,2/*autovar*/,it);   it=Sizes_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(5); rb_ary_store(bind,3/*regex*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*c*/,it); it=CALL(regch_Sizes_Dataflowcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
 rb_ary_store(bind,2/*c*/,it); it=CALL(regch_Sizes_Dataflowcb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,2/*c*/);
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=CALL(spaces_Sizes_Dataflowcb_1,1,bind);  arg0=it; it=Sizes_Dataflow_regch(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(spaces_Sizes_Dataflowcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Sizes_Dataflow_spaces(self ); FAILTEST(fail);it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }VALUE cls_Switch_Dataflow;
VALUE Switch_Dataflow_clas(VALUE self ,VALUE a0);
VALUE Switch_Dataflow_empty(VALUE self );
VALUE Switch_Dataflow_eof(VALUE self );
VALUE Switch_Dataflow_fails(VALUE self );
VALUE Switch_Dataflow_first(VALUE self );
VALUE Switch_Dataflow_first_Switch_Dataflow(VALUE self );
VALUE Switch_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE Switch_Dataflow_regch(VALUE self ,VALUE a0);
VALUE Switch_Dataflow_spaces(VALUE self );
VALUE Switch_Dataflow_token(VALUE self ,VALUE a0);
VALUE c_370;
VALUE c_371;
VALUE c_373;
VALUE c_374;
VALUE c_376;
VALUE c_377;
VALUE switchhashSwitch_Dataflow10;
VALUE switchhashSwitch_Dataflow7;
VALUE switchhashSwitch_Dataflow8;
VALUE switchhashSwitch_Dataflow9;
VALUE Switch_Dataflow_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Switch_Dataflowcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Switch_Dataflow_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Switch_Dataflow_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Switch_Dataflow_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Switch_Dataflowcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashSwitch_Dataflow10,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,1/*autovar*/,it); it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*autovar*/,it); unsigned char chr2=FIX2INT(rb_hash_aref(switchhashSwitch_Dataflow9,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Switch_Dataflow_spaces(self ); FAILTEST(pass2); it=rb_obj_clone(c_370); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(pass2);it=rb_obj_clone(c_371);  it=Switch_Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
 it=rb_const_get(rb_cObject, rb_intern("CAct")); arg0=it; it=Switch_Dataflow_clas(self ,arg0); FAILTEST(alt2_2);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,5/*str*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_2;
it=CALL(first_Switch_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,6/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos6=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Switch_Dataflow_spaces(self ); FAILTEST(pass4); it=rb_obj_clone(c_373); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(pass4);it=rb_obj_clone(c_374);  it=Switch_Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos6); ame_setlen(self,oldlen4);
	if(fail4) goto alt2_3;
 it=rb_const_get(rb_cObject, rb_intern("Act")); arg0=it; it=Switch_Dataflow_clas(self ,arg0); FAILTEST(alt2_3);
 rb_ary_store(bind,8/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass5);
 rb_ary_store(bind,5/*str*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos7); ame_setlen(self,oldlen5);
	if(fail5) goto alt2_3;
it=CALL(first_Switch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,6/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
 it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,9/*autovar*/,it); int oldpos8=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Switch_Dataflow_spaces(self ); FAILTEST(pass6); it=rb_obj_clone(c_376); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(pass6);it=rb_obj_clone(c_377);  it=Switch_Dataflow_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos8); ame_setlen(self,oldlen6);
	if(fail6) goto alt2_4;
it=CALL(first_Switch_Dataflowcb_3,1,bind); 
 rb_ary_store(bind,6/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;
 break;}  it=Switch_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,10/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Switch_Dataflow_first_Switch_Dataflow(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,10/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=Switch_Dataflow_first_Switch_Dataflow(self ); FAILTEST(fail);
 rb_ary_store(bind,10/*_result*/,it);  break;}it=rb_ary_entry(bind,10/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_first_Switch_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(26);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashSwitch_Dataflow8,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 unsigned char chr2=FIX2INT(rb_hash_aref(switchhashSwitch_Dataflow7,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it);  break;case 6:;   it=Switch_Dataflow_fails(self ); FAILTEST(alt1_2); break;}int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 10:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_3,1,bind); FAILTEST(pass2);int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_4,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos8; while(1){oldpos8=ame_getpos(self);   it=CALL(value,0 ); FAILTEST(break3);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos8=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos8); it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,8/*it*/,it); it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_6,1,bind); 
 rb_ary_store(bind,9/*autovar*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos7); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_3;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 1:; int oldpos9=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,10/*autovar*/,it); int oldpos10=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_7,1,bind); 
 rb_ary_store(bind,11/*autovar*/,it); it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_8,1,bind); int oldpos11=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(value,0 ); FAILTEST(pass5);
 rb_ary_store(bind,12/*autovar*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos11); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,13/*autovar*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos10); ame_setlen(self,oldlen4);
	if(fail4) goto alt3_2;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos9); goto fail;
 accept3:;
 break;case 5:; int oldpos12=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);
 rb_ary_store(bind,14/*autovar*/,it); int oldpos13=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,14/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(value,0 ); FAILTEST(pass6);
 rb_ary_store(bind,15/*val*/,it); it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_9,1,bind); 
 rb_ary_store(bind,16/*autovar*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos13); ame_setlen(self,oldlen6);
	if(fail6) goto alt4_2;
it=rb_ary_entry(bind,16/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos12); goto fail;
 accept4:;
 break;case 6:; int oldpos14=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2);
 rb_ary_store(bind,17/*autovar*/,it); int oldpos15=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,17/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,18/*autovar*/,it); int oldpos16; while(1){oldpos16=ame_getpos(self);   it=CALL(value,0 ); FAILTEST(break4);
 rb_ary_store(bind,19/*autovar*/,it); it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos16=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos16); it=rb_ary_entry(bind,18/*autovar*/);
 rb_ary_store(bind,8/*it*/,it); it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_6,1,bind); 
 rb_ary_store(bind,20/*autovar*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos15); ame_setlen(self,oldlen7);
	if(fail7) goto alt5_2;
it=rb_ary_entry(bind,20/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos14); goto fail;
 accept5:;
 break;case 8:; int oldpos17=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2);
 rb_ary_store(bind,21/*autovar*/,it); int oldpos18=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,rb_ary_entry(bind,21/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,15/*val*/,it); int oldpos19; while(1){oldpos19=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5);
 rb_ary_store(bind,22/*el*/,it); it=rb_ary_entry(bind,22/*el*/);
 rb_ary_store(bind,23/*autovar*/,it); it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_11,1,bind); int oldpos20=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,rb_ary_entry(bind,23/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=CALL(value,0 ); FAILTEST(pass9);
 rb_ary_store(bind,24/*nev*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos20); ame_setlen(self,oldlen9);
	if(fail9) goto break5;
it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_12,1,bind); 
 rb_ary_store(bind,15/*val*/,it); int oldpos21=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break5;}
 int oldpos22=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt7_2;}
 it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_13,1,bind); ISET(cut,Qtrue);  it=Switch_Dataflow_fails(self ); FAILTEST(alt8_2); 
ISET(cut,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt7_2;}
   it=Switch_Dataflow_empty(self ); FAILTEST(alt8_3); 
ISET(cut,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos22); goto alt7_2;
 accept8:;
  it=CALL(stop,0 ); FAILTEST(alt7_2); 
ISET(cut,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break5;}
   it=Switch_Dataflow_empty(self ); FAILTEST(alt7_3); 
ISET(cut,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos21); goto break5;
 accept7:;
 if (IGET(stop)!=Qnil){{oldpos19=ame_getpos(self);goto break5;} } } break5: ISET(stop,Qnil);  ame_setpos(self,oldpos19); int oldpos23; while(1){oldpos23=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (IGET(stop)!=Qnil){{oldpos23=ame_getpos(self);goto break6;} } } break6: ISET(stop,Qnil);  ame_setpos(self,oldpos23); it=rb_ary_entry(bind,15/*val*/);
 rb_ary_store(bind,25/*autovar*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos18); ame_setlen(self,oldlen8);
	if(fail8) goto alt6_2;
it=rb_ary_entry(bind,25/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=CALL(first_Switch_Dataflow_Switch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos17); goto fail;
 accept6:;
 break;}it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(getvalue_Switch_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(getvalue_Switch_Dataflowcb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Switch_Dataflow_first(self ); FAILTEST(pass1);
 rb_ary_store(bind,2/*autovar*/,it);   it=Switch_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(5); rb_ary_store(bind,3/*regex*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*c*/,it); it=CALL(regch_Switch_Dataflowcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
 rb_ary_store(bind,2/*c*/,it); it=CALL(regch_Switch_Dataflowcb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,2/*c*/);
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=CALL(spaces_Switch_Dataflowcb_1,1,bind);  arg0=it; it=Switch_Dataflow_regch(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(spaces_Switch_Dataflowcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Switch_Dataflow_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Switch_Dataflow_spaces(self ); FAILTEST(fail);it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }VALUE cls_ClasSwitch_Dataflow;
VALUE ClasSwitch_Dataflow_clas(VALUE self ,VALUE a0);
VALUE ClasSwitch_Dataflow_empty(VALUE self );
VALUE ClasSwitch_Dataflow_eof(VALUE self );
VALUE ClasSwitch_Dataflow_fails(VALUE self );
VALUE ClasSwitch_Dataflow_first(VALUE self );
VALUE ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(VALUE self );
VALUE ClasSwitch_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE ClasSwitch_Dataflow_regch(VALUE self ,VALUE a0);
VALUE ClasSwitch_Dataflow_spaces(VALUE self );
VALUE ClasSwitch_Dataflow_token(VALUE self ,VALUE a0);
VALUE ClasSwitch_Dataflow_value(VALUE self );
VALUE c_382;
VALUE c_383;
VALUE switchhashClasSwitch_Dataflow11;
VALUE switchhashClasSwitch_Dataflow12;
VALUE switchhashClasSwitch_Dataflow13;
VALUE ClasSwitch_Dataflow_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_ClasSwitch_Dataflowcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=ClasSwitch_Dataflow_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=ClasSwitch_Dataflow_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_ClasSwitch_Dataflowcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashClasSwitch_Dataflow13,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=ClasSwitch_Dataflow_spaces(self ); FAILTEST(pass2); it=rb_obj_clone(c_382); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(pass2);it=rb_obj_clone(c_383);  it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
 it=rb_const_get(rb_cObject, rb_intern("CAct")); arg0=it; it=ClasSwitch_Dataflow_clas(self ,arg0); FAILTEST(pass1);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,3/*cls*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto pass1;
it=CALL(first_ClasSwitch_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,5/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass4);
 rb_ary_store(bind,7/*name*/,it); it=CALL(first_ClasSwitch_Dataflowcb_2,1,bind); FAILTEST(pass4);int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=CALL(first_ClasSwitch_Dataflowcb_3,1,bind); 
 rb_ary_store(bind,8/*autovar*/,it); it=CALL(first_ClasSwitch_Dataflowcb_4,1,bind); int oldpos7=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=ClasSwitch_Dataflow_value(self ); FAILTEST(pass5);
 rb_ary_store(bind,9/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos7); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos5); ame_setlen(self,oldlen4);
	if(fail4) goto alt1_4;
it=rb_ary_entry(bind,10/*autovar*/);
 rb_ary_store(bind,5/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:;   it=ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(self ); FAILTEST(fail);
 rb_ary_store(bind,5/*_result*/,it);  break;}it=rb_ary_entry(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_first_ClasSwitch_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(26);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashClasSwitch_Dataflow12,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 11:;case 2:;case 3:;case 4:;case 7:;case 9:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 unsigned char chr2=FIX2INT(rb_hash_aref(switchhashClasSwitch_Dataflow11,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;case 3:;case 4:;case 5:;   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it);  break;case 6:;   it=ClasSwitch_Dataflow_fails(self ); FAILTEST(alt1_2); break;}int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos3); it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,1/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 10:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_3,1,bind); FAILTEST(pass2);int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_4,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos8; while(1){oldpos8=ame_getpos(self);   it=ClasSwitch_Dataflow_value(self ); FAILTEST(break3);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos8=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos8); it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,8/*it*/,it); it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_6,1,bind); 
 rb_ary_store(bind,9/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos7); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_3;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 1:; int oldpos9=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,10/*autovar*/,it); int oldpos10=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_7,1,bind); 
 rb_ary_store(bind,11/*autovar*/,it); it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_8,1,bind); int oldpos11=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=ClasSwitch_Dataflow_value(self ); FAILTEST(pass5);
 rb_ary_store(bind,12/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos11); ame_setlen(self,oldlen5);
	if(fail5) goto pass4;
it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,13/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos10); ame_setlen(self,oldlen4);
	if(fail4) goto alt3_2;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos9); goto fail;
 accept3:;
 break;case 5:; int oldpos12=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);
 rb_ary_store(bind,14/*autovar*/,it); int oldpos13=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,14/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=ClasSwitch_Dataflow_value(self ); FAILTEST(pass6);
 rb_ary_store(bind,15/*val*/,it); it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_9,1,bind); 
 rb_ary_store(bind,16/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos13); ame_setlen(self,oldlen6);
	if(fail6) goto alt4_2;
it=rb_ary_entry(bind,16/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos12);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos12); goto fail;
 accept4:;
 break;case 6:; int oldpos14=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2);
 rb_ary_store(bind,17/*autovar*/,it); int oldpos15=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,rb_ary_entry(bind,17/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,18/*autovar*/,it); int oldpos16; while(1){oldpos16=ame_getpos(self);   it=ClasSwitch_Dataflow_value(self ); FAILTEST(break4);
 rb_ary_store(bind,19/*autovar*/,it); it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_10,1,bind);  if (IGET(stop)!=Qnil){{oldpos16=ame_getpos(self);goto break4;} } } break4: ISET(stop,Qnil);  ame_setpos(self,oldpos16); it=rb_ary_entry(bind,18/*autovar*/);
 rb_ary_store(bind,8/*it*/,it); it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_6,1,bind); 
 rb_ary_store(bind,20/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos15); ame_setlen(self,oldlen7);
	if(fail7) goto alt5_2;
it=rb_ary_entry(bind,20/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos14);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos14); goto fail;
 accept5:;
 break;case 8:; int oldpos17=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_2);
 rb_ary_store(bind,21/*autovar*/,it); int oldpos18=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,rb_ary_entry(bind,21/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,15/*val*/,it); int oldpos19; while(1){oldpos19=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5);
 rb_ary_store(bind,22/*el*/,it); it=rb_ary_entry(bind,22/*el*/);
 rb_ary_store(bind,23/*autovar*/,it); it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_11,1,bind); int oldpos20=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,rb_ary_entry(bind,23/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=ClasSwitch_Dataflow_value(self ); FAILTEST(pass9);
 rb_ary_store(bind,24/*nev*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos20); ame_setlen(self,oldlen9);
	if(fail9) goto break5;
it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_12,1,bind); 
 rb_ary_store(bind,15/*val*/,it); int oldpos21=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break5;}
 int oldpos22=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt7_2;}
 it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_13,1,bind); ISET(cut,Qtrue);  it=ClasSwitch_Dataflow_fails(self ); FAILTEST(alt8_2); 
ISET(cut,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos22);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt7_2;}
   it=ClasSwitch_Dataflow_empty(self ); FAILTEST(alt8_3); 
ISET(cut,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos22); goto alt7_2;
 accept8:;
  it=CALL(stop,0 ); FAILTEST(alt7_2); 
ISET(cut,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos21);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break5;}
   it=ClasSwitch_Dataflow_empty(self ); FAILTEST(alt7_3); 
ISET(cut,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos21); goto break5;
 accept7:;
 if (IGET(stop)!=Qnil){{oldpos19=ame_getpos(self);goto break5;} } } break5: ISET(stop,Qnil);  ame_setpos(self,oldpos19); int oldpos23; while(1){oldpos23=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (IGET(stop)!=Qnil){{oldpos23=ame_getpos(self);goto break6;} } } break6: ISET(stop,Qnil);  ame_setpos(self,oldpos23); it=rb_ary_entry(bind,15/*val*/);
 rb_ary_store(bind,25/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos18); ame_setlen(self,oldlen8);
	if(fail8) goto alt6_2;
it=rb_ary_entry(bind,25/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos17);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=CALL(first_ClasSwitch_Dataflow_ClasSwitch_Dataflowcb_2,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos17); goto fail;
 accept6:;
 break;}it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(getvalue_ClasSwitch_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(getvalue_ClasSwitch_Dataflowcb_2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=ClasSwitch_Dataflow_first(self ); FAILTEST(pass1);
 rb_ary_store(bind,2/*autovar*/,it);   it=ClasSwitch_Dataflow_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(5); rb_ary_store(bind,3/*regex*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*c*/,it); it=CALL(regch_ClasSwitch_Dataflowcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*c*/);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
 rb_ary_store(bind,2/*c*/,it); it=CALL(regch_ClasSwitch_Dataflowcb_2,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,2/*c*/);
 rb_ary_store(bind,4/*_result*/,it); it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_spaces(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=CALL(spaces_ClasSwitch_Dataflowcb_1,1,bind);  arg0=it; it=ClasSwitch_Dataflow_regch(self ,arg0); FAILTEST(break1);
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(spaces_ClasSwitch_Dataflowcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(4); rb_ary_store(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=ClasSwitch_Dataflow_spaces(self ); FAILTEST(fail);it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*s*/,it);  it=rb_ary_entry(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_ary_entry(bind,1/*s*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
 rb_ary_store(bind,3/*_result*/,it); it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE ClasSwitch_Dataflow_value(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*x*/,it); it=CALL(value_ClasSwitch_Dataflowcb_1,1,bind); 
 rb_ary_store(bind,1/*_result*/,it); it=rb_ary_entry(bind,1/*_result*/);
return it;
fail: return failobj; }VALUE cls_Detect_First;
VALUE Detect_First_clas(VALUE self ,VALUE a0);
VALUE Detect_First_empty(VALUE self );
VALUE Detect_First_eof(VALUE self );
VALUE Detect_First_fails(VALUE self );
VALUE Detect_First_itrans(VALUE self );
VALUE Detect_First_root(VALUE self );
VALUE Detect_First_traverse(VALUE self );
VALUE Detect_First_traverse_item(VALUE self );
VALUE switchhashDetect_First14;
VALUE switchhashDetect_First15;
VALUE Detect_First_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Detect_Firstcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_First_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Detect_First_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Detect_First_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Detect_First_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_First_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Detect_Firstcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_First_itrans(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDetect_First14,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(itrans_Detect_Firstcb_1,1,bind); it=CALL(itrans_Detect_Firstcb_2,1,bind); it=CALL(itrans_Detect_Firstcb_3,1,bind); 
 rb_ary_store(bind,2/*autovar*/,it); it=CALL(itrans_Detect_Firstcb_4,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self);  it=rb_const_get(rb_cObject, rb_intern("Rule")); arg0=it; it=Detect_First_clas(self ,arg0); FAILTEST(break2);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_First_root(self ); FAILTEST(pass4);
 rb_ary_store(bind,6/*autovar*/,it);   it=Detect_First_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto break2;
it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(itrans_Detect_Firstcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,8/*rules*/,it);   it=Detect_First_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
  it=Detect_First_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(itrans_Detect_Firstcb_6,1,bind); it=CALL(itrans_Detect_Firstcb_7,1,bind); 
 rb_ary_store(bind,9/*autovar*/,it);   it=Detect_First_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,10/*autovar*/,it);  break;}it=CALL(itrans_Detect_Firstcb_8,1,bind);  if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=rb_ary_entry(bind,0/*autovar*/);
 rb_ary_store(bind,11/*_result*/,it); it=rb_ary_entry(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_First_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Detect_First_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_First_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Detect_Firstcb_1,1,bind); 
 rb_ary_store(bind,0/*oldchanged*/,it); it=CALL(itrans_Detect_Firstcb_7,1,bind); 
 rb_ary_store(bind,1/*this*/,it); it=Qnil;
 rb_ary_store(bind,2/*clon*/,it); it=Qfalse;
 rb_ary_store(bind,3/*changed*/,it); it=CALL(traverse_Detect_Firstcb_2,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(traverse_Detect_Firstcb_3,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7/*key*/,it); it=CALL(traverse_Detect_Firstcb_4,1,bind);   it=Detect_First_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*val*/,it); it=CALL(traverse_Detect_Firstcb_5,1,bind);   it=Detect_First_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Detect_First_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Detect_First_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Detect_Firstcb_6,1,bind); 
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_First_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDetect_First15,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=CALL(visit,0 ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Detect_Firstcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_First_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,3/*autovar*/,it);   it=Detect_First_eof(self ); FAILTEST(pass1);
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
   it=CALL(visit,0 ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Detect_Firstcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,5/*ar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Detect_First_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*it*/,it); it=CALL(traverse_item_Detect_Firstcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,5/*ar*/);
 rb_ary_store(bind,7/*autovar*/,it);   it=Detect_First_eof(self ); FAILTEST(pass2);
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
   it=CALL(visit,0 ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Detect_Firstcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
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
fail: return failobj; }VALUE cls_Detect_Switch;
VALUE Detect_Switch_clas(VALUE self ,VALUE a0);
VALUE Detect_Switch_empty(VALUE self );
VALUE Detect_Switch_eof(VALUE self );
VALUE Detect_Switch_fails(VALUE self );
VALUE Detect_Switch_predicate(VALUE self ,VALUE a0,VALUE a1);
VALUE Detect_Switch_split(VALUE self );
VALUE Detect_Switch_traverse(VALUE self );
VALUE Detect_Switch_traverse_item(VALUE self );
VALUE Detect_Switch_visit(VALUE self );
VALUE switchhashDetect_Switch17;
VALUE switchhashDetect_Switch18;
VALUE switchhashDetect_Switch19;
VALUE Detect_Switch_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Detect_Switchcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Detect_Switch_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Detect_Switch_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Detect_Switch_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Detect_Switchcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_predicate(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(19); rb_ary_store(bind,0/*chr*/,a0);rb_ary_store(bind,1/*p*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(predicate_Detect_Switchcb_1,1,bind); FAILTEST(alt1_2);it=rb_ary_entry(bind,1/*p*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(predicate_Detect_Switchcb_2,1,bind); FAILTEST(alt1_3);it=CALL(predicate_Detect_Switchcb_3,1,bind); 
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_entry(bind,1/*p*/);
 rb_ary_store(bind,3/*autovar*/,it); it=CALL(predicate_Detect_Switchcb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDetect_Switch17,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*e*/,it);  it=rb_ary_entry(bind,0/*chr*/); arg0=it;it=rb_ary_entry(bind,6/*e*/); arg1=it; it=Detect_Switch_predicate(self ,arg0,arg1); FAILTEST(break1);
 rb_ary_store(bind,7/*autovar*/,it); it=CALL(predicate_Detect_Switchcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,8/*ary*/,it); it=CALL(predicate_Detect_Switchcb_6,1,bind); 
 rb_ary_store(bind,9/*autovar*/,it);   it=Detect_Switch_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;
 break;case 1:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,11/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,6/*e*/,it);  it=rb_ary_entry(bind,0/*chr*/); arg0=it;it=rb_ary_entry(bind,6/*e*/); arg1=it; it=Detect_Switch_predicate(self ,arg0,arg1); FAILTEST(pass3);
 rb_ary_store(bind,12/*f*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,13/*autovar*/,it); int oldpos8; while(1){oldpos8=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,14/*autovar*/,it); it=CALL(predicate_Detect_Switchcb_7,1,bind);  if (IGET(stop)!=Qnil){{oldpos8=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos8); it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,15/*rest*/,it); it=CALL(predicate_Detect_Switchcb_8,1,bind); 
 rb_ary_store(bind,16/*autovar*/,it);   it=Detect_Switch_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos7); ame_setlen(self,oldlen3);
	if(fail3) goto alt3_2;
it=rb_ary_entry(bind,16/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto pass1;
 accept3:;
 break;case 2:; int oldpos9=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);
 rb_ary_store(bind,17/*autovar*/,it); int oldpos10=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,17/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (IGET(stop)!=Qnil){{oldpos11=ame_getpos(self);goto break3;} } } break3: ISET(stop,Qnil);  ame_setpos(self,oldpos11); it=CALL(predicate_Detect_Switchcb_9,1,bind); 
 rb_ary_store(bind,18/*autovar*/,it);   it=Detect_Switch_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos10); ame_setlen(self,oldlen4);
	if(fail4) goto alt4_2;
it=rb_ary_entry(bind,18/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos9);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos9); goto pass1;
 accept4:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,10/*autovar*/,it);  break;}  it=Detect_Switch_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_4;
it=rb_ary_entry(bind,10/*autovar*/);
 rb_ary_store(bind,2/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_split(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDetect_Switch18,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(split_Detect_Switchcb_1,1,bind); 
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(split_Detect_Switchcb_2,1,bind); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_Switch_split(self ); FAILTEST(pass2);
 rb_ary_store(bind,2/*autovar*/,it);   it=Detect_Switch_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,2/*autovar*/);
 rb_ary_store(bind,3/*autovar*/,it);   it=Detect_Switch_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,5/*el*/,it);  it=rb_ary_entry(bind,5/*el*/); arg0=it; it=CALL(first,1 ,arg0); FAILTEST(alt1_3);
 rb_ary_store(bind,6/*f*/,it); it=CALL(split_Detect_Switchcb_3,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,8/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=Detect_Switch_split(self ); FAILTEST(break1);
 rb_ary_store(bind,9/*autovar*/,it); it=CALL(split_Detect_Switchcb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos6); it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);   it=Detect_Switch_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_2;
it=rb_ary_entry(bind,10/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,5/*el*/,it);  it=rb_ary_entry(bind,5/*el*/); arg0=it; it=CALL(first,1 ,arg0); FAILTEST(alt2_3);
 rb_ary_store(bind,6/*f*/,it); it=CALL(split_Detect_Switchcb_3,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto fail;
 accept2:;
 break;case 2:; int oldpos7=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,11/*autovar*/,it); int oldpos8=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_Switch_split(self ); FAILTEST(pass4);it=rb_ary_new3(0);
 rb_ary_store(bind,12/*autovar*/,it); int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,13/*autovar*/,it); it=CALL(split_Detect_Switchcb_5,1,bind);  if (IGET(stop)!=Qnil){{oldpos9=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos9); it=rb_ary_entry(bind,12/*autovar*/);
 rb_ary_store(bind,14/*autovar*/,it);   it=Detect_Switch_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos8); ame_setlen(self,oldlen4);
	if(fail4) goto alt3_2;
it=rb_ary_entry(bind,14/*autovar*/);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos7);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,5/*el*/,it);  it=rb_ary_entry(bind,5/*el*/); arg0=it; it=CALL(first,1 ,arg0); FAILTEST(alt3_3);
 rb_ary_store(bind,6/*f*/,it); it=CALL(split_Detect_Switchcb_3,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos7); goto fail;
 accept3:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,5/*el*/,it);  it=rb_ary_entry(bind,5/*el*/); arg0=it; it=CALL(first,1 ,arg0); FAILTEST(fail);
 rb_ary_store(bind,6/*f*/,it); it=CALL(split_Detect_Switchcb_3,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  break;}it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Detect_Switchcb_1,1,bind); 
 rb_ary_store(bind,0/*oldchanged*/,it); it=CALL(traverse_Detect_Switchcb_2,1,bind); 
 rb_ary_store(bind,1/*this*/,it); it=Qnil;
 rb_ary_store(bind,2/*clon*/,it); it=Qfalse;
 rb_ary_store(bind,3/*changed*/,it); it=CALL(traverse_Detect_Switchcb_3,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(traverse_Detect_Switchcb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7/*key*/,it); it=CALL(traverse_Detect_Switchcb_5,1,bind);   it=Detect_Switch_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*val*/,it); it=CALL(traverse_Detect_Switchcb_6,1,bind);   it=Detect_Switch_eof(self ); FAILTEST(pass3);
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
it=CALL(traverse_Detect_Switchcb_7,1,bind); 
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Switch_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDetect_Switch19,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Detect_Switch_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Detect_Switchcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_Switch_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,3/*autovar*/,it);   it=Detect_Switch_eof(self ); FAILTEST(pass1);
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
   it=Detect_Switch_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Detect_Switchcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,5/*ar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Detect_Switch_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*it*/,it); it=CALL(traverse_item_Detect_Switchcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,5/*ar*/);
 rb_ary_store(bind,7/*autovar*/,it);   it=Detect_Switch_eof(self ); FAILTEST(pass2);
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
   it=Detect_Switch_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Detect_Switchcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
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
VALUE Detect_Switch_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_const_get(rb_cObject, rb_intern("Or")); arg0=it; it=Detect_Switch_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Detect_Switchcb_1,1,bind); 
 rb_ary_store(bind,1/*ary2*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*ary3*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,3/*els*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_Switch_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4/*e*/,it); it=CALL(visit_Detect_Switchcb_2,1,bind); FAILTEST(break1);it=rb_ary_entry(bind,4/*e*/);
 rb_ary_store(bind,5/*autovar*/,it); it=CALL(visit_Detect_Switchcb_3,1,bind); it=CALL(visit_Detect_Switchcb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); int oldpos3=ame_getpos(self);
   it=Detect_Switch_eof(self ); FAILTEST(reject1); x=1; goto accept1;  reject1: x=0; accept1: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto pass1;it=rb_ary_entry(bind,1/*ary2*/);
 rb_ary_store(bind,6/*firs*/,it); it=CALL(visit_Detect_Switchcb_5,1,bind); it=CALL(visit_Detect_Switchcb_6,1,bind); FAILTEST(pass1);it=CALL(visit_Detect_Switchcb_7,1,bind); 
 rb_ary_store(bind,7/*new_or*/,it); it=CALL(visit_Detect_Switchcb_8,1,bind); FAILTEST(pass1);it=CALL(visit_Detect_Switchcb_9,1,bind); it=CALL(visit_Detect_Switchcb_10,1,bind); it=rb_ary_entry(bind,7/*new_or*/);
 rb_ary_store(bind,8/*autovar*/,it); it=CALL(visit_Detect_Switchcb_11,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_Switch_split(self ); FAILTEST(pass2);  it=Detect_Switch_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=CALL(visit_Detect_Switchcb_12,1,bind); it=CALL(visit_Detect_Switchcb_13,1,bind); it=CALL(visit_Detect_Switchcb_14,1,bind); it=CALL(visit_Detect_Switchcb_15,1,bind); FAILTEST(pass1);it=CALL(visit_Detect_Switchcb_16,1,bind); 
 rb_ary_store(bind,9/*autovar*/,it);   it=Detect_Switch_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
return it;
fail: return failobj; }VALUE cls_Detect_ClasSwitch;
VALUE Detect_ClasSwitch_clas(VALUE self ,VALUE a0);
VALUE Detect_ClasSwitch_empty(VALUE self );
VALUE Detect_ClasSwitch_eof(VALUE self );
VALUE Detect_ClasSwitch_fails(VALUE self );
VALUE Detect_ClasSwitch_predicate(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
VALUE Detect_ClasSwitch_traverse(VALUE self );
VALUE Detect_ClasSwitch_traverse_item(VALUE self );
VALUE Detect_ClasSwitch_visit(VALUE self );
VALUE switchhashDetect_ClasSwitch21;
VALUE switchhashDetect_ClasSwitch22;
VALUE Detect_ClasSwitch_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Detect_ClasSwitchcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Detect_ClasSwitch_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Detect_ClasSwitch_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Detect_ClasSwitchcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_predicate(VALUE self ,VALUE a0,VALUE a1,VALUE a2){VALUE vals[3]; VALUE bind=rb_ary_new2(26); rb_ary_store(bind,0/*clas*/,a0);rb_ary_store(bind,1/*i*/,a1);rb_ary_store(bind,2/*p*/,a2); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(predicate_Detect_ClasSwitchcb_1,1,bind); FAILTEST(alt1_2);it=rb_ary_entry(bind,2/*p*/);
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=CALL(predicate_Detect_ClasSwitchcb_2,1,bind); FAILTEST(alt1_3);it=CALL(predicate_Detect_ClasSwitchcb_3,1,bind); 
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
 it=rb_ary_entry(bind,2/*p*/);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(predicate_Detect_ClasSwitchcb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDetect_ClasSwitch21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,6/*name*/,it); it=CALL(predicate_Detect_ClasSwitchcb_5,1,bind); FAILTEST(pass2); it=rb_const_get(rb_cObject, rb_intern("CAct")); arg0=it; it=Detect_ClasSwitch_clas(self ,arg0); FAILTEST(pass2);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*match*/,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
it=CALL(predicate_Detect_ClasSwitchcb_6,1,bind); FAILTEST(pass2);it=CALL(predicate_Detect_ClasSwitchcb_7,1,bind); 
 rb_ary_store(bind,9/*autovar*/,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;
 break;case 1:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,11/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,rb_ary_entry(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(predicate_Detect_ClasSwitchcb_8,1,bind); 
 rb_ary_store(bind,6/*name*/,it); it=CALL(predicate_Detect_ClasSwitchcb_9,1,bind); 
 rb_ary_store(bind,12/*expr*/,it); it=CALL(predicate_Detect_ClasSwitchcb_10,1,bind); 
 rb_ary_store(bind,13/*autovar*/,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto alt3_2;
it=rb_ary_entry(bind,13/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto pass1;
 accept3:;
 break;case 2:; int oldpos8=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_2);
 rb_ary_store(bind,14/*autovar*/,it); int oldpos9=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,rb_ary_entry(bind,14/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,15/*autovar*/,it); int oldpos10; while(1){oldpos10=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,16/*e*/,it);  it=rb_ary_entry(bind,0/*clas*/); arg0=it;it=rb_ary_entry(bind,1/*i*/); arg1=it;it=rb_ary_entry(bind,16/*e*/); arg2=it; it=Detect_ClasSwitch_predicate(self ,arg0,arg1,arg2); FAILTEST(break1);
 rb_ary_store(bind,17/*autovar*/,it); it=CALL(predicate_Detect_ClasSwitchcb_11,1,bind);  if (IGET(stop)!=Qnil){{oldpos10=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos10); it=rb_ary_entry(bind,15/*autovar*/);
 rb_ary_store(bind,18/*ary*/,it); it=CALL(predicate_Detect_ClasSwitchcb_12,1,bind); 
 rb_ary_store(bind,19/*autovar*/,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos9); ame_setlen(self,oldlen5);
	if(fail5) goto alt4_2;
it=rb_ary_entry(bind,19/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos8);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt4_3);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos8); goto pass1;
 accept4:;
 break;case 3:; int oldpos11=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_2);
 rb_ary_store(bind,20/*autovar*/,it); int oldpos12=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,rb_ary_entry(bind,20/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass6);
 rb_ary_store(bind,16/*e*/,it);  it=rb_ary_entry(bind,0/*clas*/); arg0=it;it=rb_ary_entry(bind,1/*i*/); arg1=it;it=rb_ary_entry(bind,16/*e*/); arg2=it; it=Detect_ClasSwitch_predicate(self ,arg0,arg1,arg2); FAILTEST(pass6);
 rb_ary_store(bind,21/*f*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,22/*autovar*/,it); int oldpos13; while(1){oldpos13=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,23/*autovar*/,it); it=CALL(predicate_Detect_ClasSwitchcb_13,1,bind);  if (IGET(stop)!=Qnil){{oldpos13=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos13); it=rb_ary_entry(bind,22/*autovar*/);
 rb_ary_store(bind,24/*rest*/,it); it=CALL(predicate_Detect_ClasSwitchcb_14,1,bind); 
 rb_ary_store(bind,25/*autovar*/,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos12); ame_setlen(self,oldlen6);
	if(fail6) goto alt5_2;
it=rb_ary_entry(bind,25/*autovar*/);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos11);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt5_3);
 rb_ary_store(bind,10/*autovar*/,it);  
ISET(cut,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos11); goto pass1;
 accept5:;
 break;case 4:;   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,10/*autovar*/,it);  break;}  it=Detect_ClasSwitch_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_4;
it=rb_ary_entry(bind,10/*autovar*/);
 rb_ary_store(bind,3/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Detect_ClasSwitchcb_1,1,bind); 
 rb_ary_store(bind,0/*oldchanged*/,it); it=CALL(traverse_Detect_ClasSwitchcb_2,1,bind); 
 rb_ary_store(bind,1/*this*/,it); it=Qnil;
 rb_ary_store(bind,2/*clon*/,it); it=Qfalse;
 rb_ary_store(bind,3/*changed*/,it); it=CALL(traverse_Detect_ClasSwitchcb_3,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(predicate_Detect_ClasSwitchcb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7/*key*/,it); it=CALL(traverse_Detect_ClasSwitchcb_4,1,bind);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*val*/,it); it=CALL(traverse_Detect_ClasSwitchcb_5,1,bind);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass3);
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
it=CALL(traverse_Detect_ClasSwitchcb_6,1,bind); 
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_ClasSwitch_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(rb_hash_aref(switchhashDetect_ClasSwitch22,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Detect_ClasSwitchcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Detect_ClasSwitch_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,3/*autovar*/,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass1);
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
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Detect_ClasSwitchcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,5/*ar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*it*/,it); it=CALL(traverse_item_Detect_ClasSwitchcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,5/*ar*/);
 rb_ary_store(bind,7/*autovar*/,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass2);
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
   it=Detect_ClasSwitch_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Detect_ClasSwitchcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
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
VALUE Detect_ClasSwitch_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_const_get(rb_cObject, rb_intern("Or")); arg0=it; it=Detect_ClasSwitch_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=CALL(visit_Detect_ClasSwitchcb_1,1,bind); 
 rb_ary_store(bind,1/*ary2*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,2/*ary3*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,3/*els*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_ClasSwitch_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,4/*e*/,it); it=CALL(visit_Detect_ClasSwitchcb_2,1,bind); FAILTEST(break1);it=rb_ary_entry(bind,4/*e*/);
 rb_ary_store(bind,5/*autovar*/,it); it=CALL(visit_Detect_ClasSwitchcb_3,1,bind); it=CALL(visit_Detect_ClasSwitchcb_4,1,bind);  if (IGET(stop)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos2); int oldpos3=ame_getpos(self);
   it=Detect_ClasSwitch_eof(self ); FAILTEST(reject1); x=1; goto accept1;  reject1: x=0; accept1: it=Qnil; ame_setpos(self,oldpos3); if (x==0) goto pass1;it=rb_ary_entry(bind,1/*ary2*/);
 rb_ary_store(bind,6/*firs*/,it); it=CALL(visit_Detect_ClasSwitchcb_5,1,bind); it=CALL(visit_Detect_ClasSwitchcb_6,1,bind); FAILTEST(pass1);it=CALL(visit_Detect_ClasSwitchcb_7,1,bind); 
 rb_ary_store(bind,7/*new_or*/,it); it=CALL(visit_Detect_ClasSwitchcb_8,1,bind); it=CALL(visit_Detect_ClasSwitchcb_9,1,bind); it=CALL(visit_Detect_ClasSwitchcb_10,1,bind); it=CALL(visit_Detect_ClasSwitchcb_11,1,bind); it=CALL(visit_Detect_ClasSwitchcb_12,1,bind); 
 rb_ary_store(bind,8/*autovar*/,it);   it=Detect_ClasSwitch_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
void Init_detect_switch_c(){ 
 cls_First_Dataflow=rb_define_class("First_Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
switchhashFirst_Dataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow2);
switchhashFirst_Dataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashFirst_Dataflow1);
rb_define_method(cls_First_Dataflow,"clas",First_Dataflow_clas,1);
rb_define_method(cls_First_Dataflow,"empty",First_Dataflow_empty,0);
rb_define_method(cls_First_Dataflow,"eof",First_Dataflow_eof,0);
rb_define_method(cls_First_Dataflow,"fails",First_Dataflow_fails,0);
rb_define_method(cls_First_Dataflow,"first",First_Dataflow_first,0);
rb_define_method(cls_First_Dataflow,"root",First_Dataflow_root,0);
rb_define_method(cls_First_Dataflow,"value",First_Dataflow_value,0);

 cls_Sizes_Dataflow=rb_define_class("Sizes_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
switchhashSizes_Dataflow4=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSizes_Dataflow4);
switchhashSizes_Dataflow3=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSizes_Dataflow3);
c_355=rb_str_new2("_seq");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_355);
c_356=rb_str_new2("_seq");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_356);
c_358=rb_str_new2("regch");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_358);
c_359=rb_str_new2("regch");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_359);
c_360=rb_str_new2("anything");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_360);
c_361=rb_str_new2("anything");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_361);
c_362=rb_str_new2("clas");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_362);
c_363=rb_str_new2("clas");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_363);
switchhashSizes_Dataflow6=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSizes_Dataflow6);
switchhashSizes_Dataflow5=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSizes_Dataflow5);
rb_define_method(cls_Sizes_Dataflow,"clas",Sizes_Dataflow_clas,1);
rb_define_method(cls_Sizes_Dataflow,"empty",Sizes_Dataflow_empty,0);
rb_define_method(cls_Sizes_Dataflow,"eof",Sizes_Dataflow_eof,0);
rb_define_method(cls_Sizes_Dataflow,"fails",Sizes_Dataflow_fails,0);
rb_define_method(cls_Sizes_Dataflow,"first",Sizes_Dataflow_first,0);
rb_define_method(cls_Sizes_Dataflow,"first_Sizes_Dataflow",Sizes_Dataflow_first_Sizes_Dataflow,0);
rb_define_method(cls_Sizes_Dataflow,"getvalue",Sizes_Dataflow_getvalue,1);
rb_define_method(cls_Sizes_Dataflow,"regch",Sizes_Dataflow_regch,1);
rb_define_method(cls_Sizes_Dataflow,"spaces",Sizes_Dataflow_spaces,0);
rb_define_method(cls_Sizes_Dataflow,"token",Sizes_Dataflow_token,1);

 cls_Switch_Dataflow=rb_define_class("Switch_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
switchhashSwitch_Dataflow8=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSwitch_Dataflow8);
switchhashSwitch_Dataflow7=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSwitch_Dataflow7);
switchhashSwitch_Dataflow10=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSwitch_Dataflow10);
switchhashSwitch_Dataflow9=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashSwitch_Dataflow9);
c_370=rb_str_new2("_seq");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_370);
c_371=rb_str_new2("_seq");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_371);
c_373=rb_str_new2("regch");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_373);
c_374=rb_str_new2("regch");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_374);
c_376=rb_str_new2("anything");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_376);
c_377=rb_str_new2("anything");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_377);
rb_define_method(cls_Switch_Dataflow,"clas",Switch_Dataflow_clas,1);
rb_define_method(cls_Switch_Dataflow,"empty",Switch_Dataflow_empty,0);
rb_define_method(cls_Switch_Dataflow,"eof",Switch_Dataflow_eof,0);
rb_define_method(cls_Switch_Dataflow,"fails",Switch_Dataflow_fails,0);
rb_define_method(cls_Switch_Dataflow,"first",Switch_Dataflow_first,0);
rb_define_method(cls_Switch_Dataflow,"first_Switch_Dataflow",Switch_Dataflow_first_Switch_Dataflow,0);
rb_define_method(cls_Switch_Dataflow,"getvalue",Switch_Dataflow_getvalue,1);
rb_define_method(cls_Switch_Dataflow,"regch",Switch_Dataflow_regch,1);
rb_define_method(cls_Switch_Dataflow,"spaces",Switch_Dataflow_spaces,0);
rb_define_method(cls_Switch_Dataflow,"token",Switch_Dataflow_token,1);

 cls_ClasSwitch_Dataflow=rb_define_class("ClasSwitch_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
switchhashClasSwitch_Dataflow12=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Cut\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Seq\nnext h[k]=9 if k<=Stop\nnext h[k]=10 if k<=Switch\nnext h[k]=11 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashClasSwitch_Dataflow12);
switchhashClasSwitch_Dataflow11=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Result\nnext h[k]=5 if k<=Stop\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashClasSwitch_Dataflow11);
switchhashClasSwitch_Dataflow13=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashClasSwitch_Dataflow13);
c_382=rb_str_new2("clas");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_382);
c_383=rb_str_new2("clas");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_383);
rb_define_method(cls_ClasSwitch_Dataflow,"clas",ClasSwitch_Dataflow_clas,1);
rb_define_method(cls_ClasSwitch_Dataflow,"empty",ClasSwitch_Dataflow_empty,0);
rb_define_method(cls_ClasSwitch_Dataflow,"eof",ClasSwitch_Dataflow_eof,0);
rb_define_method(cls_ClasSwitch_Dataflow,"fails",ClasSwitch_Dataflow_fails,0);
rb_define_method(cls_ClasSwitch_Dataflow,"first",ClasSwitch_Dataflow_first,0);
rb_define_method(cls_ClasSwitch_Dataflow,"first_ClasSwitch_Dataflow",ClasSwitch_Dataflow_first_ClasSwitch_Dataflow,0);
rb_define_method(cls_ClasSwitch_Dataflow,"getvalue",ClasSwitch_Dataflow_getvalue,1);
rb_define_method(cls_ClasSwitch_Dataflow,"regch",ClasSwitch_Dataflow_regch,1);
rb_define_method(cls_ClasSwitch_Dataflow,"spaces",ClasSwitch_Dataflow_spaces,0);
rb_define_method(cls_ClasSwitch_Dataflow,"token",ClasSwitch_Dataflow_token,1);
rb_define_method(cls_ClasSwitch_Dataflow,"value",ClasSwitch_Dataflow_value,0);

 cls_Detect_First=rb_define_class("Detect_First",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
switchhashDetect_First14=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_First14);
switchhashDetect_First15=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_First15);
rb_define_method(cls_Detect_First,"clas",Detect_First_clas,1);
rb_define_method(cls_Detect_First,"empty",Detect_First_empty,0);
rb_define_method(cls_Detect_First,"eof",Detect_First_eof,0);
rb_define_method(cls_Detect_First,"fails",Detect_First_fails,0);
rb_define_method(cls_Detect_First,"itrans",Detect_First_itrans,0);
rb_define_method(cls_Detect_First,"root",Detect_First_root,0);
rb_define_method(cls_Detect_First,"traverse",Detect_First_traverse,0);
rb_define_method(cls_Detect_First,"traverse_item",Detect_First_traverse_item,0);

 cls_Detect_Switch=rb_define_class("Detect_Switch",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
failobj=rb_eval_string("FAIL");
switchhashDetect_Switch17=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Or\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Switch\nnext h[k]=3 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_Switch17);
switchhashDetect_Switch18=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_Switch18);
switchhashDetect_Switch19=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_Switch19);
rb_define_method(cls_Detect_Switch,"clas",Detect_Switch_clas,1);
rb_define_method(cls_Detect_Switch,"empty",Detect_Switch_empty,0);
rb_define_method(cls_Detect_Switch,"eof",Detect_Switch_eof,0);
rb_define_method(cls_Detect_Switch,"fails",Detect_Switch_fails,0);
rb_define_method(cls_Detect_Switch,"predicate",Detect_Switch_predicate,2);
rb_define_method(cls_Detect_Switch,"split",Detect_Switch_split,0);
rb_define_method(cls_Detect_Switch,"traverse",Detect_Switch_traverse,0);
rb_define_method(cls_Detect_Switch,"traverse_item",Detect_Switch_traverse_item,0);
rb_define_method(cls_Detect_Switch,"visit",Detect_Switch_visit,0);

 cls_Detect_ClasSwitch=rb_define_class("Detect_ClasSwitch",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
failobj=rb_eval_string("FAIL");
switchhashDetect_ClasSwitch21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Seq\nnext h[k]=4 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_ClasSwitch21);
switchhashDetect_ClasSwitch22=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetect_ClasSwitch22);
rb_define_method(cls_Detect_ClasSwitch,"clas",Detect_ClasSwitch_clas,1);
rb_define_method(cls_Detect_ClasSwitch,"empty",Detect_ClasSwitch_empty,0);
rb_define_method(cls_Detect_ClasSwitch,"eof",Detect_ClasSwitch_eof,0);
rb_define_method(cls_Detect_ClasSwitch,"fails",Detect_ClasSwitch_fails,0);
rb_define_method(cls_Detect_ClasSwitch,"predicate",Detect_ClasSwitch_predicate,3);
rb_define_method(cls_Detect_ClasSwitch,"traverse",Detect_ClasSwitch_traverse,0);
rb_define_method(cls_Detect_ClasSwitch,"traverse_item",Detect_ClasSwitch_traverse_item,0);
rb_define_method(cls_Detect_ClasSwitch,"visit",Detect_ClasSwitch_visit,0);
 rb_eval_string("testversiondetect_switch('04a66fc3d422ab7c8a5d9f2f30708073')");}
