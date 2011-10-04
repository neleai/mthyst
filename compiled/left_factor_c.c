#include "cthyst.h"
VALUE cls_Left_Factor;
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_clas(VALUE self ,VALUE a0);
VALUE Left_Factor_empty(VALUE self );
VALUE Left_Factor_eof(VALUE self );
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
VALUE Left_Factor_fails(VALUE self );
VALUE Left_Factor_first(VALUE self ,VALUE a0);
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_root(VALUE self );
VALUE Left_Factor_traverse(VALUE self );
VALUE Left_Factor_traverse_item(VALUE self );
VALUE Left_Factor_visit(VALUE self );
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(11); rb_ary_store(bind,0/*s*/,a0);rb_ary_store(bind,3/*a*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(binds_Left_Factorcb_1,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 unsigned char chr1=FIX2INT(CALL(switchcbLeft_Factor1,1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(binds_Left_Factorcb_2,1,bind);  arg0=it;it=rb_ary_entry(bind,3/*a*/); arg1=it; it=Left_Factor_binds(self ,arg0,arg1); FAILTEST(pass2);
 rb_ary_store(bind,4/*nexp*/,it); it=CALL(binds_Left_Factorcb_3,1,bind); 
 rb_ary_store(bind,5/*autovar*/,it);   it=Left_Factor_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_2;
it=rb_ary_entry(bind,5/*autovar*/);
 rb_ary_store(bind,6/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_ary_entry(bind,3/*a*/);
 rb_ary_store(bind,6/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto pass1;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,7/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*f*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos6);  it=rb_ary_entry(bind,8/*f*/); arg0=it;it=rb_ary_entry(bind,3/*a*/); arg1=it; it=Left_Factor_binds(self ,arg0,arg1); FAILTEST(pass3);
 rb_ary_store(bind,9/*autovar*/,it);   it=Left_Factor_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_2;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,6/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_ary_entry(bind,3/*a*/);
 rb_ary_store(bind,6/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto pass1;
 accept2:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(pass1);it=rb_ary_entry(bind,3/*a*/);
 rb_ary_store(bind,6/*autovar*/,it);  break;}  it=Left_Factor_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,6/*autovar*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(3); rb_ary_store(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*i*/,it); it=CALL(clas_Left_Factorcb_1,1,bind); FAILTEST(fail);it=rb_ary_entry(bind,0/*i*/);
 rb_ary_store(bind,2/*_result*/,it); it=rb_ary_entry(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_empty(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(0);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
return it;
fail: return failobj; }
VALUE Left_Factor_eof(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ISET(cut,Qtrue);  it=Left_Factor_fails(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Left_Factor_empty(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,0/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2){VALUE vals[3]; VALUE bind=rb_ary_new2(5); rb_ary_store(bind,2/*prev*/,a0);rb_ary_store(bind,1/*start*/,a1);rb_ary_store(bind,3/*cur*/,a2); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*next*/,it); int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
 it=CALL(factor_Left_Factorcb_1,1,bind); FAILTEST(alt2_2); it=rb_ary_entry(bind,2/*prev*/); arg0=it;it=rb_ary_entry(bind,1/*start*/); arg1=it;it=CALL(factor_Left_Factorcb_2,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_2);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
 int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt2_3;}
 it=CALL(factor_Left_Factorcb_3,1,bind); ISET(cut,Qtrue);  it=Left_Factor_fails(self ); FAILTEST(alt3_2); 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt2_3;}
   it=Left_Factor_empty(self ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt2_3;
 accept3:;
 it=CALL(factor_Left_Factorcb_4,1,bind);  arg0=it;it=CALL(factor_Left_Factorcb_5,1,bind);  arg1=it;it=CALL(factor_Left_Factorcb_6,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_3);
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Left_Factor_eof(self ); FAILTEST(alt1_3);it=CALL(factor_Left_Factorcb_7,1,bind); 
 rb_ary_store(bind,4/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_entry(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_fails(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=CALL(fails_Left_Factorcb_1,1,bind); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_first(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=rb_ary_new2(9); rb_ary_store(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(binds_Left_Factorcb_1,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 unsigned char chr1=FIX2INT(CALL(switchcbLeft_Factor4,1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
  it=CALL(binds_Left_Factorcb_2,1,bind);  arg0=it; it=Left_Factor_first(self ,arg0); FAILTEST(pass2);
 rb_ary_store(bind,3/*autovar*/,it);   it=Left_Factor_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_2;
it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,4/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto pass1;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,6/*f*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos6=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos6);  it=rb_ary_entry(bind,6/*f*/); arg0=it; it=Left_Factor_first(self ,arg0); FAILTEST(pass3);
 rb_ary_store(bind,7/*autovar*/,it);   it=Left_Factor_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt2_2;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,4/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,4/*autovar*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto pass1;
 accept2:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,4/*autovar*/,it);  break;}  it=Left_Factor_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,4/*autovar*/);
 rb_ary_store(bind,8/*_result*/,it); it=rb_ary_entry(bind,8/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=rb_ary_new2(10); rb_ary_store(bind,0/*s*/,a0);rb_ary_store(bind,6/*bin*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_entry(bind,0/*s*/);
 rb_ary_store(bind,1/*autovar*/,it); it=CALL(binds_Left_Factorcb_1,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 unsigned char chr1=FIX2INT(CALL(switchcbLeft_Factor2,1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);it=rb_ary_new3(0);
 rb_ary_store(bind,3/*autovar*/,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(rest_Left_Factorcb_1,1,bind);  if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos4); it=rb_ary_entry(bind,3/*autovar*/);
 rb_ary_store(bind,5/*it*/,it); it=CALL(rest_Left_Factorcb_2,1,bind); 
 rb_ary_store(bind,7/*autovar*/,it);   it=Left_Factor_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_2;
it=rb_ary_entry(bind,7/*autovar*/);
 rb_ary_store(bind,8/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_ary_entry(bind,6/*bin*/);
 rb_ary_store(bind,8/*autovar*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto pass1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(pass1);it=rb_ary_entry(bind,6/*bin*/);
 rb_ary_store(bind,8/*autovar*/,it);  break;}  it=Left_Factor_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_root(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Left_Factor_traverse(self ); FAILTEST(fail);
 rb_ary_store(bind,0/*_result*/,it); it=rb_ary_entry(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_traverse(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (IGET(stop)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos1); it=CALL(traverse_Left_Factorcb_1,1,bind); 
 rb_ary_store(bind,0/*oldchanged*/,it); it=CALL(traverse_Left_Factorcb_2,1,bind); 
 rb_ary_store(bind,1/*this*/,it); it=Qnil;
 rb_ary_store(bind,2/*clon*/,it); it=Qfalse;
 rb_ary_store(bind,3/*changed*/,it); it=CALL(traverse_Left_Factorcb_3,1,bind); 
 rb_ary_store(bind,4/*autovar*/,it); it=CALL(traverse_Left_Factorcb_4,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 rb_ary_store(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 rb_ary_store(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,rb_ary_entry(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 rb_ary_store(bind,7/*key*/,it); it=CALL(traverse_Left_Factorcb_5,1,bind);   it=Left_Factor_traverse_item(self ); FAILTEST(pass3);
 rb_ary_store(bind,8/*val*/,it); it=CALL(traverse_Left_Factorcb_6,1,bind);   it=Left_Factor_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (IGET(stop)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ISET(stop,Qnil);  ame_setpos(self,oldpos4);   it=Left_Factor_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Left_Factor_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=CALL(traverse_Left_Factorcb_7,1,bind); 
 rb_ary_store(bind,9/*_result*/,it); it=rb_ary_entry(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2INT(CALL(switchcbLeft_Factor3,1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=Left_Factor_visit(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Left_Factorcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 rb_ary_store(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Left_Factor_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,3/*autovar*/,it);   it=Left_Factor_eof(self ); FAILTEST(pass1);
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
   it=Left_Factor_visit(self ); FAILTEST(alt2_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Left_Factorcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
 rb_ary_store(bind,1/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 rb_ary_store(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
 it=rb_ary_new3(0);
 rb_ary_store(bind,5/*ar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Left_Factor_traverse_item(self ); FAILTEST(break1);
 rb_ary_store(bind,6/*it*/,it); it=CALL(traverse_item_Left_Factorcb_2,1,bind);  if (IGET(stop)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ISET(stop,Qnil);  ame_setpos(self,oldpos5); it=rb_ary_entry(bind,5/*ar*/);
 rb_ary_store(bind,7/*autovar*/,it);   it=Left_Factor_eof(self ); FAILTEST(pass2);
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
   it=Left_Factor_visit(self ); FAILTEST(alt3_2);
 rb_ary_store(bind,0/*a*/,it); it=CALL(traverse_item_Left_Factorcb_1,1,bind); it=rb_ary_entry(bind,0/*a*/);
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
VALUE Left_Factor_visit(VALUE self ){VALUE vals[0]; VALUE bind=rb_ary_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_const_get(rb_cObject, rb_intern("Or")); arg0=it; it=Left_Factor_clas(self ,arg0); FAILTEST(fail);
 rb_ary_store(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,rb_ary_entry(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=Left_Factor_traverse(self ); FAILTEST(pass1);
 rb_ary_store(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,rb_ary_entry(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2INT(rb_funcall(ame_getsrc(self),rb_intern("size"),0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 rb_ary_store(bind,2/*x*/,it); it=CALL(visit_Left_Factorcb_1,1,bind); 
 rb_ary_store(bind,3/*cur*/,it); it=CALL(visit_Left_Factorcb_2,1,bind); 
 rb_ary_store(bind,4/*start*/,it); it=rb_ary_new3(0);
 rb_ary_store(bind,5/*prev*/,it); int oldpos3=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 rb_ary_store(bind,6/*next*/,it); int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
 it=CALL(visit_Left_Factorcb_3,1,bind); FAILTEST(alt2_2); it=rb_ary_new3(0); arg0=it;it=rb_ary_entry(bind,4/*start*/); arg1=it;it=CALL(visit_Left_Factorcb_4,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_2);
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt1_2;}
 int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt2_3;}
 it=CALL(visit_Left_Factorcb_5,1,bind); ISET(cut,Qtrue);  it=Left_Factor_fails(self ); FAILTEST(alt3_2); 
ISET(cut,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto alt2_3;}
   it=Left_Factor_empty(self ); FAILTEST(alt3_3); 
ISET(cut,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto alt2_3;
 accept3:;
 it=CALL(visit_Left_Factorcb_6,1,bind);  arg0=it;it=CALL(visit_Left_Factorcb_7,1,bind);  arg1=it;it=CALL(visit_Left_Factorcb_8,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_3);
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto alt1_2;
 accept2:;
 
ISET(cut,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos3);if (IGET(cut)!=Qnil) {ISET(cut,Qnil); goto pass2;}
   it=Left_Factor_eof(self ); FAILTEST(alt1_3);it=CALL(visit_Left_Factorcb_9,1,bind); 
 rb_ary_store(bind,7/*_result*/,it);  
ISET(cut,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos3); goto pass2;
 accept1:;
it=rb_ary_entry(bind,7/*_result*/);
 rb_ary_store(bind,8/*autovar*/,it);   it=Left_Factor_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_ary_entry(bind,8/*autovar*/);
 rb_ary_store(bind,9/*autovar*/,it);   it=Left_Factor_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_ary_entry(bind,9/*autovar*/);
 rb_ary_store(bind,10/*_result*/,it); it=rb_ary_entry(bind,10/*_result*/);
return it;
fail: return failobj; }
void Init_left_factor_c(){ 
 cls_Left_Factor=rb_define_class("Left_Factor",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
rb_define_method(cls_Left_Factor,"binds",Left_Factor_binds,2);
rb_define_method(cls_Left_Factor,"clas",Left_Factor_clas,1);
rb_define_method(cls_Left_Factor,"empty",Left_Factor_empty,0);
rb_define_method(cls_Left_Factor,"eof",Left_Factor_eof,0);
rb_define_method(cls_Left_Factor,"factor",Left_Factor_factor,3);
rb_define_method(cls_Left_Factor,"fails",Left_Factor_fails,0);
rb_define_method(cls_Left_Factor,"first",Left_Factor_first,1);
rb_define_method(cls_Left_Factor,"rest",Left_Factor_rest,2);
rb_define_method(cls_Left_Factor,"root",Left_Factor_root,0);
rb_define_method(cls_Left_Factor,"traverse",Left_Factor_traverse,0);
rb_define_method(cls_Left_Factor,"traverse_item",Left_Factor_traverse_item,0);
rb_define_method(cls_Left_Factor,"visit",Left_Factor_visit,0);
 rb_eval_string("testversionleft_factor('e79e5a3d5c4ceb87160da8b329c5a27a')");}
