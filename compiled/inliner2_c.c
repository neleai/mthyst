#include "cthyst.h"
VALUE cls_DetectCalls;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE DetectCalls_root(VALUE self );
VALUE DetectCalls_traverse(VALUE self );
VALUE DetectCalls_traverse_item(VALUE self );
VALUE DetectCalls_visit(VALUE self );
VALUE c_313;
VALUE c_315;
VALUE s_root_DetectCallscb_1DetectCalls;
VALUE s_root_DetectCallscb_2DetectCalls;
VALUE s_sizeDetectCalls;
VALUE s_traverse_DetectCallscb_1DetectCalls;
VALUE s_traverse_DetectCallscb_2DetectCalls;
VALUE s_traverse_DetectCallscb_3DetectCalls;
VALUE s_traverse_item_DetectCallscb_1DetectCalls;
VALUE s_visit_DetectCallscb_1DetectCalls;
VALUE switchhashDetectCalls1;
VALUE DetectCalls_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=c_315; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeDetectCalls,0)));
 it=rb_funcall(self,s_root_DetectCallscb_1DetectCalls,1,bind);   it=DetectCalls_traverse(self ); FAILTEST(pass1);it=rb_funcall(self,s_root_DetectCallscb_2DetectCalls,1,bind); 
 bind_aset(bind,1/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,s_traverse_DetectCallscb_1DetectCalls,1,bind); 
 bind_aset(bind,0/*autovar*/,it); it=rb_funcall(self,s_traverse_DetectCallscb_2DetectCalls,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeDetectCalls,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,1/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeDetectCalls,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=DetectCalls_traverse_item(self ); FAILTEST(break2);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_traverse_DetectCallscb_3DetectCalls,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,4/*autovar*/);
 bind_aset(bind,5/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDetectCalls1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=DetectCalls_visit(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeDetectCalls,0)));
   it=DetectCalls_traverse(self ); FAILTEST(pass1);
 bind_aset(bind,2/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=DetectCalls_visit(self ); FAILTEST(alt2_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 bind_aset(bind,3/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeDetectCalls,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,4/*autovar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=DetectCalls_traverse_item(self ); FAILTEST(break1);
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_traverse_item_DetectCallscb_1DetectCalls,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,4/*autovar*/);
 bind_aset(bind,6/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=bind_aget(bind,6/*autovar*/);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=DetectCalls_visit(self ); FAILTEST(alt3_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=c_313; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeDetectCalls,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,1/*name*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,s_visit_DetectCallscb_1DetectCalls,1,bind); 
 bind_aset(bind,2/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }VALUE cls_Inliner2;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Inliner2_root(VALUE self );
VALUE Inliner2_traverse(VALUE self );
VALUE Inliner2_traverse_item(VALUE self );
VALUE Inliner2_visit(VALUE self );
VALUE c_317;
VALUE c_320;
VALUE c_321;
VALUE s_root_Inliner2cb_1Inliner2;
VALUE s_root_Inliner2cb_2Inliner2;
VALUE s_root_Inliner2cb_3Inliner2;
VALUE s_root_Inliner2cb_4Inliner2;
VALUE s_root_Inliner2cb_5Inliner2;
VALUE s_root_Inliner2cb_6Inliner2;
VALUE s_root_Inliner2cb_7Inliner2;
VALUE s_sizeInliner2;
VALUE s_traverse_Inliner2cb_1Inliner2;
VALUE s_traverse_Inliner2cb_2Inliner2;
VALUE s_traverse_Inliner2cb_3Inliner2;
VALUE s_traverse_Inliner2cb_4Inliner2;
VALUE s_traverse_Inliner2cb_5Inliner2;
VALUE s_traverse_Inliner2cb_6Inliner2;
VALUE s_traverse_Inliner2cb_7Inliner2;
VALUE s_traverse_item_Inliner2cb_1Inliner2;
VALUE s_traverse_item_Inliner2cb_2Inliner2;
VALUE s_visit_Inliner2cb_1Inliner2;
VALUE s_visit_Inliner2cb_2Inliner2;
VALUE s_visit_Inliner2cb_3Inliner2;
VALUE switchhashInliner22;
VALUE Inliner2_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,0/*from*/,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,1/*to*/,it); it=bind_aget(bind,0/*from*/);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_root_Inliner2cb_1Inliner2,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeInliner2,0)));
  it=c_320; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1);
 bind_aset(bind,3/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeInliner2,0)));
 it=rb_funcall(self,s_root_Inliner2cb_2Inliner2,1,bind); 
 bind_aset(bind,4/*name*/,it); it=rb_funcall(self,s_root_Inliner2cb_3Inliner2,1,bind); 
 bind_aset(bind,5/*args*/,it); it=rb_funcall(self,s_root_Inliner2cb_4Inliner2,1,bind); it=rb_funcall(self,s_root_Inliner2cb_5Inliner2,1,bind); 
 bind_aset(bind,6/*body*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_funcall(self,s_root_Inliner2cb_6Inliner2,1,bind); it=bind_aget(bind,1/*to*/);
 bind_aset(bind,7/*autovar*/,it); it=rb_funcall(self,s_root_Inliner2cb_7Inliner2,1,bind); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeInliner2,0)));
  it=c_321; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass3);
 bind_aset(bind,8/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeInliner2,0)));
   it=Inliner2_traverse(self ); FAILTEST(pass4);
 bind_aset(bind,9/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos4); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=bind_aget(bind,9/*autovar*/);
 bind_aset(bind,10/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=bind_aget(bind,10/*autovar*/);
 bind_aset(bind,11/*_result*/,it); it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,s_traverse_Inliner2cb_1Inliner2,1,bind); 
 bind_aset(bind,0/*oldchanged*/,it); it=rb_funcall(self,s_traverse_Inliner2cb_2Inliner2,1,bind); 
 bind_aset(bind,1/*this*/,it); it=Qnil;
 bind_aset(bind,2/*clon*/,it); it=Qfalse;
 bind_aset(bind,3/*changed*/,it); it=rb_funcall(self,s_traverse_Inliner2cb_3Inliner2,1,bind); 
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_traverse_Inliner2cb_4Inliner2,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeInliner2,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeInliner2,0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 bind_aset(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeInliner2,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 bind_aset(bind,7/*key*/,it); it=rb_funcall(self,s_traverse_Inliner2cb_5Inliner2,1,bind);   it=Inliner2_traverse_item(self ); FAILTEST(pass3);
 bind_aset(bind,8/*val*/,it); it=rb_funcall(self,s_traverse_Inliner2cb_6Inliner2,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
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
it=rb_funcall(self,s_traverse_Inliner2cb_7Inliner2,1,bind); 
 bind_aset(bind,9/*_result*/,it); it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashInliner22,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Inliner2_visit(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Inliner2cb_1Inliner2,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeInliner2,0)));
   it=Inliner2_traverse(self ); FAILTEST(pass1);
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
   it=Inliner2_visit(self ); FAILTEST(alt2_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Inliner2cb_1Inliner2,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 bind_aset(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeInliner2,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,5/*ar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Inliner2_traverse_item(self ); FAILTEST(break1);
 bind_aset(bind,6/*it*/,it); it=rb_funcall(self,s_traverse_item_Inliner2cb_2Inliner2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,5/*ar*/);
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
   it=Inliner2_visit(self ); FAILTEST(alt3_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Inliner2cb_1Inliner2,1,bind); it=bind_aget(bind,0/*a*/);
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
VALUE Inliner2_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=c_317; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeInliner2,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,1/*name*/,it); it=rb_funcall(self,s_visit_Inliner2cb_1Inliner2,1,bind); FAILTEST(pass1);it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_visit_Inliner2cb_2Inliner2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*args*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_funcall(self,s_visit_Inliner2cb_3Inliner2,1,bind); 
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }VALUE cls_Replace_Super;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Replace_Super_root(VALUE self );
VALUE Replace_Super_traverse(VALUE self );
VALUE Replace_Super_traverse_item(VALUE self );
VALUE Replace_Super_visit(VALUE self );
VALUE c_324;
VALUE c_327;
VALUE s_root_Replace_Supercb_1Replace_Super;
VALUE s_root_Replace_Supercb_2Replace_Super;
VALUE s_sizeReplace_Super;
VALUE s_traverse_Replace_Supercb_1Replace_Super;
VALUE s_traverse_Replace_Supercb_2Replace_Super;
VALUE s_traverse_Replace_Supercb_3Replace_Super;
VALUE s_traverse_Replace_Supercb_4Replace_Super;
VALUE s_traverse_Replace_Supercb_5Replace_Super;
VALUE s_traverse_Replace_Supercb_6Replace_Super;
VALUE s_traverse_Replace_Supercb_7Replace_Super;
VALUE s_traverse_item_Replace_Supercb_1Replace_Super;
VALUE s_traverse_item_Replace_Supercb_2Replace_Super;
VALUE s_visit_Replace_Supercb_1Replace_Super;
VALUE s_visit_Replace_Supercb_2Replace_Super;
VALUE s_visit_Replace_Supercb_3Replace_Super;
VALUE switchhashReplace_Super3;
VALUE Replace_Super_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,0/*name*/,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,1/*to*/,it); it=rb_funcall(self,s_root_Replace_Supercb_1Replace_Super,1,bind); it=bind_aget(bind,1/*to*/);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_root_Replace_Supercb_2Replace_Super,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeReplace_Super,0)));
  it=c_327; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1);
 bind_aset(bind,3/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeReplace_Super,0)));
   it=Replace_Super_traverse(self ); FAILTEST(pass2);
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
VALUE Replace_Super_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,s_traverse_Replace_Supercb_1Replace_Super,1,bind); 
 bind_aset(bind,0/*oldchanged*/,it); it=rb_funcall(self,s_traverse_Replace_Supercb_2Replace_Super,1,bind); 
 bind_aset(bind,1/*this*/,it); it=Qnil;
 bind_aset(bind,2/*clon*/,it); it=Qfalse;
 bind_aset(bind,3/*changed*/,it); it=rb_funcall(self,s_traverse_Replace_Supercb_3Replace_Super,1,bind); 
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_traverse_Replace_Supercb_4Replace_Super,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeReplace_Super,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,5/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,5/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeReplace_Super,0)));
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 bind_aset(bind,6/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeReplace_Super,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 bind_aset(bind,7/*key*/,it); it=rb_funcall(self,s_traverse_Replace_Supercb_5Replace_Super,1,bind);   it=Replace_Super_traverse_item(self ); FAILTEST(pass3);
 bind_aset(bind,8/*val*/,it); it=rb_funcall(self,s_traverse_Replace_Supercb_6Replace_Super,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
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
it=rb_funcall(self,s_traverse_Replace_Supercb_7Replace_Super,1,bind); 
 bind_aset(bind,9/*_result*/,it); it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Replace_Super_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashReplace_Super3,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Replace_Super_visit(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Replace_Supercb_1Replace_Super,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeReplace_Super,0)));
   it=Replace_Super_traverse(self ); FAILTEST(pass1);
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
   it=Replace_Super_visit(self ); FAILTEST(alt2_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Replace_Supercb_1Replace_Super,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 bind_aset(bind,4/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeReplace_Super,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,5/*ar*/,it); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Replace_Super_traverse_item(self ); FAILTEST(break1);
 bind_aset(bind,6/*it*/,it); it=rb_funcall(self,s_traverse_item_Replace_Supercb_2Replace_Super,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,5/*ar*/);
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
   it=Replace_Super_visit(self ); FAILTEST(alt3_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Replace_Supercb_1Replace_Super,1,bind); it=bind_aget(bind,0/*a*/);
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
VALUE Replace_Super_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=c_324; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeReplace_Super,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,1/*name*/,it); it=rb_funcall(self,s_visit_Replace_Supercb_1Replace_Super,1,bind); FAILTEST(pass1);it=rb_ary_new3(0);
 bind_aset(bind,2/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_visit_Replace_Supercb_2Replace_Super,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/);
 bind_aset(bind,4/*args*/,it); it=rb_funcall(self,s_visit_Replace_Supercb_3Replace_Super,1,bind); 
 bind_aset(bind,5/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,5/*autovar*/);
 bind_aset(bind,6/*_result*/,it); it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
void Init_inliner2_c(){ 
 cls_DetectCalls=rb_define_class("DetectCalls",rb_const_get(rb_cObject,rb_intern("Visitor"))); 
failobj=rb_eval_string("FAIL");
c_313=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_313);
c_315=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_315);
s_root_DetectCallscb_1DetectCalls=rb_intern("root_DetectCallscb_1");
s_root_DetectCallscb_2DetectCalls=rb_intern("root_DetectCallscb_2");
s_sizeDetectCalls=rb_intern("size");
s_traverse_DetectCallscb_1DetectCalls=rb_intern("traverse_DetectCallscb_1");
s_traverse_DetectCallscb_2DetectCalls=rb_intern("traverse_DetectCallscb_2");
s_traverse_DetectCallscb_3DetectCalls=rb_intern("traverse_DetectCallscb_3");
s_traverse_item_DetectCallscb_1DetectCalls=rb_intern("traverse_item_DetectCallscb_1");
s_visit_DetectCallscb_1DetectCalls=rb_intern("visit_DetectCallscb_1");
switchhashDetectCalls1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDetectCalls1);
rb_define_method(cls_DetectCalls,"root",DetectCalls_root,0);
rb_define_method(cls_DetectCalls,"traverse",DetectCalls_traverse,0);
rb_define_method(cls_DetectCalls,"traverse_item",DetectCalls_traverse_item,0);
rb_define_method(cls_DetectCalls,"visit",DetectCalls_visit,0);

 cls_Inliner2=rb_define_class("Inliner2",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_317=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_317);
c_320=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_320);
c_321=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_321);
s_root_Inliner2cb_1Inliner2=rb_intern("root_Inliner2cb_1");
s_root_Inliner2cb_2Inliner2=rb_intern("root_Inliner2cb_2");
s_root_Inliner2cb_3Inliner2=rb_intern("root_Inliner2cb_3");
s_root_Inliner2cb_4Inliner2=rb_intern("root_Inliner2cb_4");
s_root_Inliner2cb_5Inliner2=rb_intern("root_Inliner2cb_5");
s_root_Inliner2cb_6Inliner2=rb_intern("root_Inliner2cb_6");
s_root_Inliner2cb_7Inliner2=rb_intern("root_Inliner2cb_7");
s_sizeInliner2=rb_intern("size");
s_traverse_Inliner2cb_1Inliner2=rb_intern("traverse_Inliner2cb_1");
s_traverse_Inliner2cb_2Inliner2=rb_intern("traverse_Inliner2cb_2");
s_traverse_Inliner2cb_3Inliner2=rb_intern("traverse_Inliner2cb_3");
s_traverse_Inliner2cb_4Inliner2=rb_intern("traverse_Inliner2cb_4");
s_traverse_Inliner2cb_5Inliner2=rb_intern("traverse_Inliner2cb_5");
s_traverse_Inliner2cb_6Inliner2=rb_intern("traverse_Inliner2cb_6");
s_traverse_Inliner2cb_7Inliner2=rb_intern("traverse_Inliner2cb_7");
s_traverse_item_Inliner2cb_1Inliner2=rb_intern("traverse_item_Inliner2cb_1");
s_traverse_item_Inliner2cb_2Inliner2=rb_intern("traverse_item_Inliner2cb_2");
s_visit_Inliner2cb_1Inliner2=rb_intern("visit_Inliner2cb_1");
s_visit_Inliner2cb_2Inliner2=rb_intern("visit_Inliner2cb_2");
s_visit_Inliner2cb_3Inliner2=rb_intern("visit_Inliner2cb_3");
switchhashInliner22=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashInliner22);
rb_define_method(cls_Inliner2,"root",Inliner2_root,0);
rb_define_method(cls_Inliner2,"traverse",Inliner2_traverse,0);
rb_define_method(cls_Inliner2,"traverse_item",Inliner2_traverse_item,0);
rb_define_method(cls_Inliner2,"visit",Inliner2_visit,0);

 cls_Replace_Super=rb_define_class("Replace_Super",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_324=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_324);
c_327=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_327);
s_root_Replace_Supercb_1Replace_Super=rb_intern("root_Replace_Supercb_1");
s_root_Replace_Supercb_2Replace_Super=rb_intern("root_Replace_Supercb_2");
s_sizeReplace_Super=rb_intern("size");
s_traverse_Replace_Supercb_1Replace_Super=rb_intern("traverse_Replace_Supercb_1");
s_traverse_Replace_Supercb_2Replace_Super=rb_intern("traverse_Replace_Supercb_2");
s_traverse_Replace_Supercb_3Replace_Super=rb_intern("traverse_Replace_Supercb_3");
s_traverse_Replace_Supercb_4Replace_Super=rb_intern("traverse_Replace_Supercb_4");
s_traverse_Replace_Supercb_5Replace_Super=rb_intern("traverse_Replace_Supercb_5");
s_traverse_Replace_Supercb_6Replace_Super=rb_intern("traverse_Replace_Supercb_6");
s_traverse_Replace_Supercb_7Replace_Super=rb_intern("traverse_Replace_Supercb_7");
s_traverse_item_Replace_Supercb_1Replace_Super=rb_intern("traverse_item_Replace_Supercb_1");
s_traverse_item_Replace_Supercb_2Replace_Super=rb_intern("traverse_item_Replace_Supercb_2");
s_visit_Replace_Supercb_1Replace_Super=rb_intern("visit_Replace_Supercb_1");
s_visit_Replace_Supercb_2Replace_Super=rb_intern("visit_Replace_Supercb_2");
s_visit_Replace_Supercb_3Replace_Super=rb_intern("visit_Replace_Supercb_3");
switchhashReplace_Super3=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashReplace_Super3);
rb_define_method(cls_Replace_Super,"root",Replace_Super_root,0);
rb_define_method(cls_Replace_Super,"traverse",Replace_Super_traverse,0);
rb_define_method(cls_Replace_Super,"traverse_item",Replace_Super_traverse_item,0);
rb_define_method(cls_Replace_Super,"visit",Replace_Super_visit,0);
 rb_eval_string("testversioninliner2('d217d1e9793af332777c7338711b03b4')");}
