#include "cthyst.h"
VALUE cls_Analyze_Variables2;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Analyze_Variables2_flat(VALUE self );
VALUE Analyze_Variables2_itrans(VALUE self );
VALUE Analyze_Variables2_root(VALUE self );
VALUE Analyze_Variables2_traverse(VALUE self );
VALUE Analyze_Variables2_traverse_item(VALUE self );
VALUE Analyze_Variables2_visit(VALUE self );
VALUE switchhashAnalyze_Variables21;
VALUE switchhashAnalyze_Variables22;
VALUE switchhashAnalyze_Variables23;
VALUE switchhashAnalyze_Variables24;
static VALUE c_30;
static VALUE c_35;
static VALUE c_38;
static VALUE s_flat_Analyze_Variables2cb_1Analyze_Variables2;
static VALUE s_itrans_Analyze_Variables2cb_1Analyze_Variables2;
static VALUE s_itrans_Analyze_Variables2cb_2Analyze_Variables2;
static VALUE s_itrans_Analyze_Variables2cb_3Analyze_Variables2;
static VALUE s_itrans_Analyze_Variables2cb_4Analyze_Variables2;
static VALUE s_itrans_Analyze_Variables2cb_5Analyze_Variables2;
static VALUE s_root_Analyze_Variables2cb_1Analyze_Variables2;
static VALUE s_root_Analyze_Variables2cb_2Analyze_Variables2;
static VALUE s_root_Analyze_Variables2cb_3Analyze_Variables2;
static VALUE s_root_Analyze_Variables2cb_4Analyze_Variables2;
static VALUE s_root_Analyze_Variables2cb_5Analyze_Variables2;
static VALUE s_sizeAnalyze_Variables2;
static VALUE s_traverse_Analyze_Variables2cb_1Analyze_Variables2;
static VALUE s_traverse_Analyze_Variables2cb_2Analyze_Variables2;
static VALUE s_traverse_Analyze_Variables2cb_3Analyze_Variables2;
static VALUE s_traverse_Analyze_Variables2cb_4Analyze_Variables2;
static VALUE s_traverse_Analyze_Variables2cb_5Analyze_Variables2;
static VALUE s_traverse_Analyze_Variables2cb_6Analyze_Variables2;
static VALUE s_traverse_item_Analyze_Variables2cb_1Analyze_Variables2;
static VALUE s_traverse_item_Analyze_Variables2cb_2Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_10Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_11Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_1Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_2Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_3Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_4Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_5Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_6Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_7Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_8Analyze_Variables2;
static VALUE s_visit_Analyze_Variables2cb_9Analyze_Variables2;
VALUE Analyze_Variables2_flat(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashAnalyze_Variables23,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,1/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=Analyze_Variables2_flat(self ); FAILTEST(pass1);
 bind_aset(bind,2/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,3/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,3/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:; int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_2);
 bind_aset(bind,4/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=Analyze_Variables2_flat(self ); FAILTEST(pass2);
 bind_aset(bind,5/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos5); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_2;
it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,3/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 bind_aset(bind,3/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto break1;
 accept2:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it);  break;}it=rb_funcall(self,s_flat_Analyze_Variables2cb_1Analyze_Variables2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashAnalyze_Variables22,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,1/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 it=rb_funcall(self,s_itrans_Analyze_Variables2cb_1Analyze_Variables2,1,bind); 
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_visit_Analyze_Variables2cb_2Analyze_Variables2,1,bind); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 bind_aset(bind,3/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,4/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self);  it=c_35; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(break2);
 bind_aset(bind,5/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=Analyze_Variables2_root(self ); FAILTEST(pass4);
 bind_aset(bind,6/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos7); ame_setlen(self,oldlen4);
	if(fail4) goto break2;
it=bind_aget(bind,6/*autovar*/);
 bind_aset(bind,7/*autovar*/,it); it=rb_funcall(self,s_itrans_Analyze_Variables2cb_2Analyze_Variables2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,4/*autovar*/);
 bind_aset(bind,8/*rules*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=rb_funcall(self,s_itrans_Analyze_Variables2cb_3Analyze_Variables2,1,bind); it=rb_funcall(self,s_itrans_Analyze_Variables2cb_4Analyze_Variables2,1,bind); 
 bind_aset(bind,9/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos3); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_2;
it=bind_aget(bind,9/*autovar*/);
 bind_aset(bind,10/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,10/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,10/*autovar*/,it);  break;}it=rb_funcall(self,s_itrans_Analyze_Variables2cb_5Analyze_Variables2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,11/*_result*/,it); it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_itrans_Analyze_Variables2cb_4Analyze_Variables2,1,bind); 
 bind_aset(bind,0/*autovar*/,it); it=rb_funcall(self,s_root_Analyze_Variables2cb_1Analyze_Variables2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
  it=c_38; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1);
 bind_aset(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 it=rb_funcall(self,s_root_Analyze_Variables2cb_2Analyze_Variables2,1,bind); it=rb_funcall(self,s_root_Analyze_Variables2cb_3Analyze_Variables2,1,bind); it=rb_funcall(self,s_root_Analyze_Variables2cb_4Analyze_Variables2,1,bind);   it=Analyze_Variables2_traverse(self ); FAILTEST(pass2);
 bind_aset(bind,2/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=rb_funcall(self,s_root_Analyze_Variables2cb_5Analyze_Variables2,1,bind); it=rb_funcall(self,s_itrans_Analyze_Variables2cb_4Analyze_Variables2,1,bind); 
 bind_aset(bind,3/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
it=bind_aget(bind,3/*autovar*/);
 bind_aset(bind,4/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,4/*autovar*/);
 bind_aset(bind,5/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,s_traverse_Analyze_Variables2cb_1Analyze_Variables2,1,bind); 
 bind_aset(bind,0/*oldchanged*/,it); it=rb_funcall(self,s_itrans_Analyze_Variables2cb_4Analyze_Variables2,1,bind); 
 bind_aset(bind,1/*this*/,it); it=Qnil;
 bind_aset(bind,2/*clon*/,it); it=Qfalse;
 bind_aset(bind,3/*changed*/,it); it=rb_funcall(self,s_traverse_Analyze_Variables2cb_2Analyze_Variables2,1,bind); 
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_traverse_Analyze_Variables2cb_3Analyze_Variables2,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 bind_aset(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 bind_aset(bind,7/*key*/,it); it=rb_funcall(self,s_traverse_Analyze_Variables2cb_4Analyze_Variables2,1,bind);   it=Analyze_Variables2_traverse_item(self ); FAILTEST(pass3);
 bind_aset(bind,8/*val*/,it); it=rb_funcall(self,s_traverse_Analyze_Variables2cb_5Analyze_Variables2,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
 if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_funcall(self,s_traverse_Analyze_Variables2cb_6Analyze_Variables2,1,bind); 
 bind_aset(bind,9/*_result*/,it); it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashAnalyze_Variables24,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Analyze_Variables2_visit(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Analyze_Variables2cb_1Analyze_Variables2,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=Analyze_Variables2_traverse(self ); FAILTEST(pass1);
 bind_aset(bind,3/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=bind_aget(bind,3/*autovar*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Analyze_Variables2_visit(self ); FAILTEST(alt2_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Analyze_Variables2cb_1Analyze_Variables2,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 bind_aset(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,5/*ar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Analyze_Variables2_traverse_item(self ); FAILTEST(break1);
 bind_aset(bind,6/*it*/,it); it=rb_funcall(self,s_traverse_item_Analyze_Variables2cb_2Analyze_Variables2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,5/*ar*/);
 bind_aset(bind,7/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Analyze_Variables2_visit(self ); FAILTEST(alt3_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Analyze_Variables2cb_1Analyze_Variables2,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Analyze_Variables2_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(28);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashAnalyze_Variables21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=Analyze_Variables2_traverse(self ); FAILTEST(pass1);
 bind_aset(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=rb_funcall(self,s_visit_Analyze_Variables2cb_1Analyze_Variables2,1,bind); 
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_visit_Analyze_Variables2cb_2Analyze_Variables2,1,bind); int oldpos4=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 bind_aset(bind,3/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
  it=c_30; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass4);
 bind_aset(bind,4/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos5); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=bind_aget(bind,4/*autovar*/);
 bind_aset(bind,5/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos4); ame_setlen(self,oldlen3);
	if(fail3) goto pass2;
it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,6/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,6/*autovar*/);
 bind_aset(bind,7/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,8/*_result*/,it);  break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,9/*autovar*/,it); int oldpos6=ame_getpos(self); int oldlen5=ame_getlen(self); VALUE oldsrc5=ame_getsrc(self); int fail5=0;
ame_setsrc(self,bind_aget(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=Analyze_Variables2_traverse(self ); FAILTEST(pass5);
 bind_aset(bind,10/*autovar*/,it); int oldpos7=ame_getpos(self); int oldlen6=ame_getlen(self); VALUE oldsrc6=ame_getsrc(self); int fail6=0;
ame_setsrc(self,bind_aget(bind,10/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 int oldpos8; while(1){oldpos8=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=rb_funcall(self,s_visit_Analyze_Variables2cb_3Analyze_Variables2,1,bind); 
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_visit_Analyze_Variables2cb_4Analyze_Variables2,1,bind); int oldpos9=ame_getpos(self); int oldlen7=ame_getlen(self); VALUE oldsrc7=ame_getsrc(self); int fail7=0;
ame_setsrc(self,bind_aget(bind,11/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass7);
 bind_aset(bind,12/*autovar*/,it); int oldpos10=ame_getpos(self); int oldlen8=ame_getlen(self); VALUE oldsrc8=ame_getsrc(self); int fail8=0;
ame_setsrc(self,bind_aget(bind,12/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
   it=Analyze_Variables2_flat(self ); FAILTEST(pass8);
 bind_aset(bind,13/*a*/,it);   it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: ame_setsrc(self,oldsrc8); ame_setpos(self,oldpos10); ame_setlen(self,oldlen8);
	if(fail8) goto pass7;
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: ame_setsrc(self,oldsrc7); ame_setpos(self,oldpos9); ame_setlen(self,oldlen7);
	if(fail7) goto pass6;
it=rb_funcall(self,s_visit_Analyze_Variables2cb_5Analyze_Variables2,1,bind); 
 bind_aset(bind,14/*ary*/,it); it=rb_funcall(self,s_visit_Analyze_Variables2cb_6Analyze_Variables2,1,bind); 
 bind_aset(bind,15/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: ame_setsrc(self,oldsrc6); ame_setpos(self,oldpos7); ame_setlen(self,oldlen6);
	if(fail6) goto pass5;
it=bind_aget(bind,15/*autovar*/);
 bind_aset(bind,16/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: ame_setsrc(self,oldsrc5); ame_setpos(self,oldpos6); ame_setlen(self,oldlen5);
	if(fail5) goto fail;
it=bind_aget(bind,16/*autovar*/);
 bind_aset(bind,8/*_result*/,it);  break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,17/*autovar*/,it); int oldpos11=ame_getpos(self); int oldlen9=ame_getlen(self); VALUE oldsrc9=ame_getsrc(self); int fail9=0;
ame_setsrc(self,bind_aget(bind,17/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,18/*autovar*/,it); int oldpos12; while(1){oldpos12=ame_getpos(self);   it=Analyze_Variables2_traverse_item(self ); FAILTEST(break3);
 bind_aset(bind,19/*autovar*/,it); it=rb_funcall(self,s_visit_Analyze_Variables2cb_7Analyze_Variables2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos12=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos12); it=bind_aget(bind,18/*autovar*/);
 bind_aset(bind,20/*t*/,it); it=rb_funcall(self,s_visit_Analyze_Variables2cb_8Analyze_Variables2,1,bind); 
 bind_aset(bind,21/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: ame_setsrc(self,oldsrc9); ame_setpos(self,oldpos11); ame_setlen(self,oldlen9);
	if(fail9) goto fail;
it=bind_aget(bind,21/*autovar*/);
 bind_aset(bind,8/*_result*/,it);  break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,22/*autovar*/,it); int oldpos13=ame_getpos(self); int oldlen10=ame_getlen(self); VALUE oldsrc10=ame_getsrc(self); int fail10=0;
ame_setsrc(self,bind_aget(bind,22/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 it=rb_funcall(self,s_visit_Analyze_Variables2cb_9Analyze_Variables2,1,bind); 
 bind_aset(bind,23/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: ame_setsrc(self,oldsrc10); ame_setpos(self,oldpos13); ame_setlen(self,oldlen10);
	if(fail10) goto fail;
it=bind_aget(bind,23/*autovar*/);
 bind_aset(bind,8/*_result*/,it);  break;case 4:;   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,24/*autovar*/,it); int oldpos14=ame_getpos(self); int oldlen11=ame_getlen(self); VALUE oldsrc11=ame_getsrc(self); int fail11=0;
ame_setsrc(self,bind_aget(bind,24/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAnalyze_Variables2,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,25/*autovar*/,it); int oldpos15; while(1){oldpos15=ame_getpos(self);   it=Analyze_Variables2_traverse_item(self ); FAILTEST(break4);
 bind_aset(bind,26/*autovar*/,it); it=rb_funcall(self,s_visit_Analyze_Variables2cb_10Analyze_Variables2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos15=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos15); it=bind_aget(bind,25/*autovar*/);
 bind_aset(bind,20/*t*/,it); it=rb_funcall(self,s_visit_Analyze_Variables2cb_11Analyze_Variables2,1,bind); 
 bind_aset(bind,27/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: ame_setsrc(self,oldsrc11); ame_setpos(self,oldpos14); ame_setlen(self,oldlen11);
	if(fail11) goto fail;
it=bind_aget(bind,27/*autovar*/);
 bind_aset(bind,8/*_result*/,it);  break;case 5:;   it=Amethyst_fails(self ); FAILTEST(fail); break;}it=bind_aget(bind,8/*_result*/);
return it;
fail: return failobj; }
void Init_detect_variables2_c(){ 
 cls_Analyze_Variables2=rb_define_class("Analyze_Variables2",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_30=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_30);
c_35=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_35);
c_38=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_38);
s_flat_Analyze_Variables2cb_1Analyze_Variables2=rb_intern("flat_Analyze_Variables2cb_1");
s_itrans_Analyze_Variables2cb_1Analyze_Variables2=rb_intern("itrans_Analyze_Variables2cb_1");
s_itrans_Analyze_Variables2cb_2Analyze_Variables2=rb_intern("itrans_Analyze_Variables2cb_2");
s_itrans_Analyze_Variables2cb_3Analyze_Variables2=rb_intern("itrans_Analyze_Variables2cb_3");
s_itrans_Analyze_Variables2cb_4Analyze_Variables2=rb_intern("itrans_Analyze_Variables2cb_4");
s_itrans_Analyze_Variables2cb_5Analyze_Variables2=rb_intern("itrans_Analyze_Variables2cb_5");
s_root_Analyze_Variables2cb_1Analyze_Variables2=rb_intern("root_Analyze_Variables2cb_1");
s_root_Analyze_Variables2cb_2Analyze_Variables2=rb_intern("root_Analyze_Variables2cb_2");
s_root_Analyze_Variables2cb_3Analyze_Variables2=rb_intern("root_Analyze_Variables2cb_3");
s_root_Analyze_Variables2cb_4Analyze_Variables2=rb_intern("root_Analyze_Variables2cb_4");
s_root_Analyze_Variables2cb_5Analyze_Variables2=rb_intern("root_Analyze_Variables2cb_5");
s_sizeAnalyze_Variables2=rb_intern("size");
s_traverse_Analyze_Variables2cb_1Analyze_Variables2=rb_intern("traverse_Analyze_Variables2cb_1");
s_traverse_Analyze_Variables2cb_2Analyze_Variables2=rb_intern("traverse_Analyze_Variables2cb_2");
s_traverse_Analyze_Variables2cb_3Analyze_Variables2=rb_intern("traverse_Analyze_Variables2cb_3");
s_traverse_Analyze_Variables2cb_4Analyze_Variables2=rb_intern("traverse_Analyze_Variables2cb_4");
s_traverse_Analyze_Variables2cb_5Analyze_Variables2=rb_intern("traverse_Analyze_Variables2cb_5");
s_traverse_Analyze_Variables2cb_6Analyze_Variables2=rb_intern("traverse_Analyze_Variables2cb_6");
s_traverse_item_Analyze_Variables2cb_1Analyze_Variables2=rb_intern("traverse_item_Analyze_Variables2cb_1");
s_traverse_item_Analyze_Variables2cb_2Analyze_Variables2=rb_intern("traverse_item_Analyze_Variables2cb_2");
s_visit_Analyze_Variables2cb_10Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_10");
s_visit_Analyze_Variables2cb_11Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_11");
s_visit_Analyze_Variables2cb_1Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_1");
s_visit_Analyze_Variables2cb_2Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_2");
s_visit_Analyze_Variables2cb_3Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_3");
s_visit_Analyze_Variables2cb_4Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_4");
s_visit_Analyze_Variables2cb_5Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_5");
s_visit_Analyze_Variables2cb_6Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_6");
s_visit_Analyze_Variables2cb_7Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_7");
s_visit_Analyze_Variables2cb_8Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_8");
s_visit_Analyze_Variables2cb_9Analyze_Variables2=rb_intern("visit_Analyze_Variables2cb_9");
switchhashAnalyze_Variables21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Args\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Result\nnext h[k]=4 if k<=Seq\nnext h[k]=5 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAnalyze_Variables21);
switchhashAnalyze_Variables22=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAnalyze_Variables22);
switchhashAnalyze_Variables23=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Args\nnext h[k]=1 if k<=Strin\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAnalyze_Variables23);
switchhashAnalyze_Variables24=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashAnalyze_Variables24);
rb_define_method(cls_Analyze_Variables2,"flat",Analyze_Variables2_flat,0);
rb_define_method(cls_Analyze_Variables2,"itrans",Analyze_Variables2_itrans,0);
rb_define_method(cls_Analyze_Variables2,"root",Analyze_Variables2_root,0);
rb_define_method(cls_Analyze_Variables2,"traverse",Analyze_Variables2_traverse,0);
rb_define_method(cls_Analyze_Variables2,"traverse_item",Analyze_Variables2_traverse_item,0);
rb_define_method(cls_Analyze_Variables2,"visit",Analyze_Variables2_visit,0);
 rb_eval_string("testversiondetect_variables2('9db30fabb5255209f5f332de278b0a90')");}
