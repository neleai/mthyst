#include "cthyst.h"
VALUE cls_Left_Factor;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_binds(VALUE self ,VALUE,VALUE);
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
VALUE Left_Factor_factor(VALUE self ,VALUE,VALUE,VALUE);
VALUE Left_Factor_first(VALUE self ,VALUE a0);
VALUE Left_Factor_first(VALUE self ,VALUE);
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_root(VALUE self );
VALUE Left_Factor_traverse(VALUE self );
VALUE Left_Factor_traverse_item(VALUE self );
VALUE Left_Factor_visit(VALUE self );
static VALUE c_453;
static VALUE c_455;
static VALUE c_457;
static VALUE c_459;
static VALUE c_461;
static VALUE c_463;
static VALUE c_466;
static VALUE c_469;
static VALUE s_binds_Left_Factorcb_1Left_Factor;
static VALUE s_binds_Left_Factorcb_2Left_Factor;
static VALUE s_factor_Left_Factorcb_1Left_Factor;
static VALUE s_factor_Left_Factorcb_2Left_Factor;
static VALUE s_factor_Left_Factorcb_3Left_Factor;
static VALUE s_factor_Left_Factorcb_4Left_Factor;
static VALUE s_factor_Left_Factorcb_5Left_Factor;
static VALUE s_factor_Left_Factorcb_6Left_Factor;
static VALUE s_factor_Left_Factorcb_7Left_Factor;
static VALUE s_first_Left_Factorcb_1Left_Factor;
static VALUE s_first_Left_Factorcb_2Left_Factor;
static VALUE s_first_Left_Factorcb_3Left_Factor;
static VALUE s_first_Left_Factorcb_4Left_Factor;
static VALUE s_rest_Left_Factorcb_1Left_Factor;
static VALUE s_rest_Left_Factorcb_2Left_Factor;
static VALUE s_sizeLeft_Factor;
static VALUE s_traverse_Left_Factorcb_1Left_Factor;
static VALUE s_traverse_Left_Factorcb_2Left_Factor;
static VALUE s_traverse_Left_Factorcb_3Left_Factor;
static VALUE s_traverse_Left_Factorcb_4Left_Factor;
static VALUE s_traverse_Left_Factorcb_5Left_Factor;
static VALUE s_traverse_Left_Factorcb_6Left_Factor;
static VALUE s_traverse_Left_Factorcb_7Left_Factor;
static VALUE s_traverse_Left_Factorcb_8Left_Factor;
static VALUE s_traverse_Left_Factorcb_9Left_Factor;
static VALUE s_traverse_item_Left_Factorcb_1Left_Factor;
static VALUE s_traverse_item_Left_Factorcb_2Left_Factor;
static VALUE s_traverse_item_Left_Factorcb_3Left_Factor;
static VALUE s_visit_Left_Factorcb_1Left_Factor;
static VALUE s_visit_Left_Factorcb_2Left_Factor;
static VALUE s_visit_Left_Factorcb_3Left_Factor;
static VALUE s_visit_Left_Factorcb_4Left_Factor;
static VALUE s_visit_Left_Factorcb_5Left_Factor;
static VALUE s_visit_Left_Factorcb_6Left_Factor;
static VALUE s_visit_Left_Factorcb_7Left_Factor;
static VALUE s_visit_Left_Factorcb_8Left_Factor;
static VALUE s_visit_Left_Factorcb_9Left_Factor;
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(15); bind_aset(bind,0/*s*/,a0);bind_aset(bind,6/*a*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*s*/);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_first_Left_Factorcb_1Left_Factor,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
 int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
  it=c_459; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2);
 bind_aset(bind,2/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 bind_aset(bind,3/*f*/,it); it=rb_ary_new3(0);
 bind_aset(bind,4/*autovar*/,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_first_Left_Factorcb_2Left_Factor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,4/*autovar*/); it=bind_aget(bind,3/*f*/); arg0=it;it=bind_aget(bind,6/*a*/); arg1=it; it=Left_Factor_binds(self ,arg0,arg1); FAILTEST(pass2);
 bind_aset(bind,7/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_2;
it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,8/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
  it=c_461; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3);
 bind_aset(bind,9/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,10/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 bind_aset(bind,11/*autovar*/,it); it=rb_funcall(self,s_binds_Left_Factorcb_1Left_Factor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,10/*autovar*/); it=rb_funcall(self,s_first_Left_Factorcb_4Left_Factor,1,bind);  arg0=it;it=bind_aget(bind,6/*a*/); arg1=it; it=Left_Factor_binds(self ,arg0,arg1); FAILTEST(pass3);
 bind_aset(bind,12/*nexp*/,it); it=rb_funcall(self,s_binds_Left_Factorcb_2Left_Factor,1,bind); 
 bind_aset(bind,13/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_3;
it=bind_aget(bind,13/*autovar*/);
 bind_aset(bind,8/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);it=bind_aget(bind,6/*a*/);
 bind_aset(bind,8/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos2); goto pass1;
 accept1:;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,8/*autovar*/);
 bind_aset(bind,14/*_result*/,it); it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2){VALUE vals[3]; VALUE bind=bind_new2(5); bind_aset(bind,2/*prev*/,a0);bind_aset(bind,1/*start*/,a1);bind_aset(bind,3/*cur*/,a2); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*next*/,it); int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=rb_funcall(self,s_factor_Left_Factorcb_1Left_Factor,1,bind); FAILTEST(alt2_2); it=bind_aget(bind,2/*prev*/); arg0=it;it=bind_aget(bind,1/*start*/); arg1=it;it=rb_funcall(self,s_factor_Left_Factorcb_2Left_Factor,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_2);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
 it=rb_funcall(self,s_factor_Left_Factorcb_3Left_Factor,1,bind); ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt2_3;
 accept3:;
 it=rb_funcall(self,s_factor_Left_Factorcb_4Left_Factor,1,bind);  arg0=it;it=rb_funcall(self,s_factor_Left_Factorcb_5Left_Factor,1,bind);  arg1=it;it=rb_funcall(self,s_factor_Left_Factorcb_6Left_Factor,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_3);
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_eof(self ); FAILTEST(alt1_3);it=rb_funcall(self,s_factor_Left_Factorcb_7Left_Factor,1,bind); 
 bind_aset(bind,4/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_first(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(13); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*s*/);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_first_Left_Factorcb_1Left_Factor,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
 int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
  it=c_453; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2);
 bind_aset(bind,2/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 bind_aset(bind,3/*f*/,it); it=rb_ary_new3(0);
 bind_aset(bind,4/*autovar*/,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_first_Left_Factorcb_2Left_Factor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,4/*autovar*/); it=bind_aget(bind,3/*f*/); arg0=it; it=Left_Factor_first(self ,arg0); FAILTEST(pass2);
 bind_aset(bind,6/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_2;
it=bind_aget(bind,6/*autovar*/);
 bind_aset(bind,7/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
  it=c_455; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3);
 bind_aset(bind,8/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,9/*autovar*/,it); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 bind_aset(bind,10/*autovar*/,it); it=rb_funcall(self,s_first_Left_Factorcb_3Left_Factor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,9/*autovar*/); it=rb_funcall(self,s_first_Left_Factorcb_4Left_Factor,1,bind);  arg0=it; it=Left_Factor_first(self ,arg0); FAILTEST(pass3);
 bind_aset(bind,11/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto alt1_3;
it=bind_aget(bind,11/*autovar*/);
 bind_aset(bind,7/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4);
 bind_aset(bind,7/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos2); goto pass1;
 accept1:;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,12/*_result*/,it); it=bind_aget(bind,12/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(10); bind_aset(bind,0/*s*/,a0);bind_aset(bind,6/*bin*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*s*/);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_first_Left_Factorcb_1Left_Factor,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
 int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
  it=c_457; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2);
 bind_aset(bind,2/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);it=rb_ary_new3(0);
 bind_aset(bind,3/*autovar*/,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_rest_Left_Factorcb_1Left_Factor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,3/*autovar*/);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_rest_Left_Factorcb_2Left_Factor,1,bind); 
 bind_aset(bind,7/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_2;
it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,8/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=bind_aget(bind,6/*bin*/);
 bind_aset(bind,8/*autovar*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto pass1;
 accept1:;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,8/*autovar*/);
 bind_aset(bind,9/*_result*/,it); it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Left_Factor_traverse(self ); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_traverse_Left_Factorcb_1Left_Factor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,s_traverse_Left_Factorcb_2Left_Factor,1,bind); 
 bind_aset(bind,2/*oldchanged*/,it); it=rb_funcall(self,s_traverse_Left_Factorcb_3Left_Factor,1,bind); 
 bind_aset(bind,3/*this*/,it); it=Qnil;
 bind_aset(bind,4/*clon*/,it); it=Qfalse;
 bind_aset(bind,5/*changed*/,it); it=rb_funcall(self,s_traverse_Left_Factorcb_4Left_Factor,1,bind); 
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_traverse_Left_Factorcb_5Left_Factor,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1);
 bind_aset(bind,7/*autovar*/,it); int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,8/*autovar*/,it); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2);
 bind_aset(bind,9/*autovar*/,it); int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3);
 bind_aset(bind,10/*key*/,it); it=rb_funcall(self,s_traverse_Left_Factorcb_6Left_Factor,1,bind);   it=Left_Factor_traverse_item(self ); FAILTEST(pass3);
 bind_aset(bind,11/*val*/,it); it=rb_funcall(self,s_traverse_Left_Factorcb_7Left_Factor,1,bind); 
 bind_aset(bind,12/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/);
 bind_aset(bind,13/*autovar*/,it); it=rb_funcall(self,s_traverse_Left_Factorcb_8Left_Factor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_funcall(self,s_traverse_Left_Factorcb_9Left_Factor,1,bind); 
 bind_aset(bind,14/*_result*/,it); it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Left_Factor_visit(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*a*/,it); it=rb_funcall(self,s_traverse_item_Left_Factorcb_1Left_Factor,1,bind); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_466; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3);
 bind_aset(bind,2/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
 it=rb_ary_new3(0);
 bind_aset(bind,3/*ar*/,it); it=rb_ary_new3(0);
 bind_aset(bind,4/*autovar*/,it); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Left_Factor_traverse_item(self ); FAILTEST(break1);
 bind_aset(bind,5/*it*/,it); it=rb_funcall(self,s_traverse_item_Left_Factorcb_2Left_Factor,1,bind); 
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_traverse_item_Left_Factorcb_3Left_Factor,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,4/*autovar*/);it=bind_aget(bind,3/*ar*/);
 bind_aset(bind,7/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=bind_aget(bind,7/*autovar*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_469; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4);
 bind_aset(bind,8/*autovar*/,it); int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
   it=Left_Factor_traverse(self ); FAILTEST(pass2);
 bind_aset(bind,9/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt1_4;
it=bind_aget(bind,9/*autovar*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=c_463; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
   it=Left_Factor_traverse(self ); FAILTEST(pass1);
 bind_aset(bind,1/*autovar*/,it); int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeLeft_Factor,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass2);
 bind_aset(bind,2/*x*/,it); it=rb_funcall(self,s_visit_Left_Factorcb_1Left_Factor,1,bind); 
 bind_aset(bind,3/*cur*/,it); it=rb_funcall(self,s_visit_Left_Factorcb_2Left_Factor,1,bind); 
 bind_aset(bind,4/*start*/,it); it=rb_ary_new3(0);
 bind_aset(bind,5/*prev*/,it); int oldpos3=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass2;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);
 bind_aset(bind,6/*next*/,it); int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=rb_funcall(self,s_visit_Left_Factorcb_3Left_Factor,1,bind); FAILTEST(alt2_2); it=rb_ary_new3(0); arg0=it;it=bind_aget(bind,4/*start*/); arg1=it;it=rb_funcall(self,s_visit_Left_Factorcb_4Left_Factor,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_2);
 bind_aset(bind,7/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
 it=rb_funcall(self,s_visit_Left_Factorcb_5Left_Factor,1,bind); ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto alt2_3;
 accept3:;
 it=rb_funcall(self,s_visit_Left_Factorcb_6Left_Factor,1,bind);  arg0=it;it=rb_funcall(self,s_visit_Left_Factorcb_7Left_Factor,1,bind);  arg1=it;it=rb_funcall(self,s_visit_Left_Factorcb_8Left_Factor,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_3);
 bind_aset(bind,7/*_result*/,it);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass2;}
   it=Amethyst_eof(self ); FAILTEST(alt1_3);it=rb_funcall(self,s_visit_Left_Factorcb_9Left_Factor,1,bind); 
 bind_aset(bind,7/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos3); goto pass2;
 accept1:;
it=bind_aget(bind,7/*_result*/);
 bind_aset(bind,8/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,8/*autovar*/);
 bind_aset(bind,9/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,9/*autovar*/);
 bind_aset(bind,10/*_result*/,it); it=bind_aget(bind,10/*_result*/);
return it;
fail: return failobj; }
void Init_left_factor_c(){ 
 cls_Left_Factor=rb_define_class("Left_Factor",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_453=rb_const_get(rb_cObject, rb_intern("Seq"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_453);
c_455=rb_const_get(rb_cObject, rb_intern("Bind"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_455);
c_457=rb_const_get(rb_cObject, rb_intern("Seq"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_457);
c_459=rb_const_get(rb_cObject, rb_intern("Seq"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_459);
c_461=rb_const_get(rb_cObject, rb_intern("Bind"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_461);
c_463=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_463);
c_466=rb_const_get(rb_cObject, rb_intern("Array"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_466);
c_469=rb_const_get(rb_cObject, rb_intern("AmethystAST"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_469);
s_binds_Left_Factorcb_1Left_Factor=rb_intern("binds_Left_Factorcb_1");
s_binds_Left_Factorcb_2Left_Factor=rb_intern("binds_Left_Factorcb_2");
s_factor_Left_Factorcb_1Left_Factor=rb_intern("factor_Left_Factorcb_1");
s_factor_Left_Factorcb_2Left_Factor=rb_intern("factor_Left_Factorcb_2");
s_factor_Left_Factorcb_3Left_Factor=rb_intern("factor_Left_Factorcb_3");
s_factor_Left_Factorcb_4Left_Factor=rb_intern("factor_Left_Factorcb_4");
s_factor_Left_Factorcb_5Left_Factor=rb_intern("factor_Left_Factorcb_5");
s_factor_Left_Factorcb_6Left_Factor=rb_intern("factor_Left_Factorcb_6");
s_factor_Left_Factorcb_7Left_Factor=rb_intern("factor_Left_Factorcb_7");
s_first_Left_Factorcb_1Left_Factor=rb_intern("first_Left_Factorcb_1");
s_first_Left_Factorcb_2Left_Factor=rb_intern("first_Left_Factorcb_2");
s_first_Left_Factorcb_3Left_Factor=rb_intern("first_Left_Factorcb_3");
s_first_Left_Factorcb_4Left_Factor=rb_intern("first_Left_Factorcb_4");
s_rest_Left_Factorcb_1Left_Factor=rb_intern("rest_Left_Factorcb_1");
s_rest_Left_Factorcb_2Left_Factor=rb_intern("rest_Left_Factorcb_2");
s_sizeLeft_Factor=rb_intern("size");
s_traverse_Left_Factorcb_1Left_Factor=rb_intern("traverse_Left_Factorcb_1");
s_traverse_Left_Factorcb_2Left_Factor=rb_intern("traverse_Left_Factorcb_2");
s_traverse_Left_Factorcb_3Left_Factor=rb_intern("traverse_Left_Factorcb_3");
s_traverse_Left_Factorcb_4Left_Factor=rb_intern("traverse_Left_Factorcb_4");
s_traverse_Left_Factorcb_5Left_Factor=rb_intern("traverse_Left_Factorcb_5");
s_traverse_Left_Factorcb_6Left_Factor=rb_intern("traverse_Left_Factorcb_6");
s_traverse_Left_Factorcb_7Left_Factor=rb_intern("traverse_Left_Factorcb_7");
s_traverse_Left_Factorcb_8Left_Factor=rb_intern("traverse_Left_Factorcb_8");
s_traverse_Left_Factorcb_9Left_Factor=rb_intern("traverse_Left_Factorcb_9");
s_traverse_item_Left_Factorcb_1Left_Factor=rb_intern("traverse_item_Left_Factorcb_1");
s_traverse_item_Left_Factorcb_2Left_Factor=rb_intern("traverse_item_Left_Factorcb_2");
s_traverse_item_Left_Factorcb_3Left_Factor=rb_intern("traverse_item_Left_Factorcb_3");
s_visit_Left_Factorcb_1Left_Factor=rb_intern("visit_Left_Factorcb_1");
s_visit_Left_Factorcb_2Left_Factor=rb_intern("visit_Left_Factorcb_2");
s_visit_Left_Factorcb_3Left_Factor=rb_intern("visit_Left_Factorcb_3");
s_visit_Left_Factorcb_4Left_Factor=rb_intern("visit_Left_Factorcb_4");
s_visit_Left_Factorcb_5Left_Factor=rb_intern("visit_Left_Factorcb_5");
s_visit_Left_Factorcb_6Left_Factor=rb_intern("visit_Left_Factorcb_6");
s_visit_Left_Factorcb_7Left_Factor=rb_intern("visit_Left_Factorcb_7");
s_visit_Left_Factorcb_8Left_Factor=rb_intern("visit_Left_Factorcb_8");
s_visit_Left_Factorcb_9Left_Factor=rb_intern("visit_Left_Factorcb_9");
rb_define_method(cls_Left_Factor,"binds",Left_Factor_binds,2);
rb_define_method(cls_Left_Factor,"factor",Left_Factor_factor,3);
rb_define_method(cls_Left_Factor,"first",Left_Factor_first,1);
rb_define_method(cls_Left_Factor,"rest",Left_Factor_rest,2);
rb_define_method(cls_Left_Factor,"root",Left_Factor_root,0);
rb_define_method(cls_Left_Factor,"traverse",Left_Factor_traverse,0);
rb_define_method(cls_Left_Factor,"traverse_item",Left_Factor_traverse_item,0);
rb_define_method(cls_Left_Factor,"visit",Left_Factor_visit,0);
 rb_eval_string("testversionleft_factor('768955d62b5797b812926c9bb3cd46c2')");}
