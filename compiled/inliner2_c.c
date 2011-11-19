#include "cthyst.h"
VALUE cls_DetectCalls;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE DetectCalls_root(VALUE self );
VALUE DetectCalls_traverse(VALUE self );
VALUE DetectCalls_traverse_item(VALUE self );
VALUE DetectCalls_visit(VALUE self );
VALUE switchhashVisitor1;
static VALUE c_Apply;
static VALUE c_Rule;
static VALUE sy_DetectCalls__append_lp_2;
static VALUE sy_DetectCalls__append_lp_3;
static VALUE sy_DetectCalls__append_lp_;
static VALUE sy_DetectCalls__at_calls;
static VALUE sy_DetectCalls__at_calls_eq_;
static VALUE sy_DetectCalls__at_calls_lb_b;
static VALUE sy_DetectCalls__lp_src_dot_ins;
static VALUE sy_DetectCalls_bind_lb_2_rb__eq_;
static VALUE sy_size;
VALUE DetectCalls_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_DetectCalls__at_calls_eq_,1,bind);   it=DetectCalls_traverse(self ); FAILTEST(pass1);it=rb_funcall(self,sy_DetectCalls__at_calls,1,bind);  bind_aset(bind,1/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(9);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_DetectCalls__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_DetectCalls__lp_src_dot_ins,1,bind);  bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_DetectCalls_bind_lb_2_rb__eq_,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=DetectCalls_traverse_item(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_DetectCalls__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashVisitor1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=DetectCalls_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*autovar*/,it);
int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=DetectCalls_traverse(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=DetectCalls_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*autovar*/,it);
int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=DetectCalls_traverse_item(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_DetectCalls__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=DetectCalls_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE DetectCalls_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*name*/,it);
it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_DetectCalls__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/);it=rb_funcall(self,sy_DetectCalls__at_calls_lb_b,1,bind);  bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }VALUE cls_Inliner2;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Inliner2_root(VALUE self );
VALUE Inliner2_traverse(VALUE self );
VALUE Inliner2_traverse_item(VALUE self );
VALUE Inliner2_visit(VALUE self );
VALUE switchhashTraverser_Clone21;
static VALUE c_Apply;
static VALUE c_Rule;
static VALUE sy_Inliner2__append_lp_2;
static VALUE sy_Inliner2__append_lp_3;
static VALUE sy_Inliner2__append_lp_4;
static VALUE sy_Inliner2__append_lp_;
static VALUE sy_Inliner2__at_changed2;
static VALUE sy_Inliner2__at_changed3;
static VALUE sy_Inliner2__at_changed;
static VALUE sy_Inliner2__at_name_eq_bi;
static VALUE sy_Inliner2__lp_bind_lb_1_rb_;
static VALUE sy_Inliner2__lp_bind_lb_4_rb_;
static VALUE sy_Inliner2__lp_src_dot_ins;
static VALUE sy_Inliner2_bind_lb_2_rb__eq_;
static VALUE sy_Inliner2_bind_lb_5_rb__lt_;
static VALUE sy_Inliner2_bind_lb_6_rb__eq_;
static VALUE sy_Inliner2_bind_lb_7_rb__eq_;
static VALUE sy_Inliner2_body_eq_dee;
static VALUE sy_Inliner2_if_sp_bind_lb_;
static VALUE sy_Inliner2_src;
static VALUE sy_Inliner2_src_dot_args;
static VALUE sy_Inliner2_src_dot_body;
static VALUE sy_Inliner2_src_dot_loca;
static VALUE sy_Inliner2_src_dot_name;
static VALUE sy_size;
VALUE Inliner2_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*from*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*to*/,it);
it=bind_aget(bind,0/*from*/); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Inliner2_bind_lb_2_rb__eq_,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_funcall(self,sy_Inliner2_src_dot_name,1,bind);  bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_Inliner2_src_dot_args,1,bind);  bind_aset(bind,5/*args*/,it);
it=rb_funcall(self,sy_Inliner2_src_dot_loca,1,bind); it=rb_funcall(self,sy_Inliner2_src_dot_body,1,bind);  bind_aset(bind,6/*body*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_funcall(self,sy_Inliner2__at_name_eq_bi,1,bind); it=bind_aget(bind,1/*to*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Inliner2_bind_lb_7_rb__eq_,1,bind); int oldpos3=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass3); bind_aset(bind,8/*autovar*/,it);
int oldpos4=ame_getpos(self); int oldlen4=ame_getlen(self); VALUE oldsrc4=ame_getsrc(self); int fail4=0;
ame_setsrc(self,bind_aget(bind,8/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Inliner2_traverse(self ); FAILTEST(pass4); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: ame_setsrc(self,oldsrc4); ame_setpos(self,oldpos4); ame_setlen(self,oldlen4);
	if(fail4) goto pass3;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos3); ame_setlen(self,oldlen3);
	if(fail3) goto fail;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Inliner2__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_Inliner2__at_changed2,1,bind);  bind_aset(bind,2/*oldchanged*/,it);
it=rb_funcall(self,sy_Inliner2_src,1,bind);  bind_aset(bind,3/*this*/,it);
it=Qnil; bind_aset(bind,4/*clon*/,it);
it=Qfalse; bind_aset(bind,5/*changed*/,it);
it=rb_funcall(self,sy_Inliner2__lp_src_dot_ins,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Inliner2_bind_lb_6_rb__eq_,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,7/*autovar*/,it);
int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,9/*autovar*/,it);
int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,10/*key*/,it);
it=rb_funcall(self,sy_Inliner2__at_changed3,1,bind);   it=Inliner2_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Inliner2__lp_bind_lb_4_rb_,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Inliner2__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_funcall(self,sy_Inliner2_if_sp_bind_lb_,1,bind);  bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Inliner2_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Inliner2__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Inliner2_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Inliner2_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Inliner2__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Inliner2_traverse_item(self ); FAILTEST(break1); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_Inliner2_bind_lb_5_rb__lt_,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Inliner2__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,6/*autovar*/);it=bind_aget(bind,5/*ar*/); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Inliner2_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Inliner2__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Inliner2_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*name*/,it);
it=rb_funcall(self,sy_Inliner2__lp_bind_lb_1_rb_,1,bind); FAILTEST(pass1);it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Inliner2__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*args*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_funcall(self,sy_Inliner2_body_eq_dee,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }VALUE cls_Replace_Super;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Replace_Super_root(VALUE self );
VALUE Replace_Super_traverse(VALUE self );
VALUE Replace_Super_traverse_item(VALUE self );
VALUE Replace_Super_visit(VALUE self );
VALUE switchhashTraverser_Clone21;
static VALUE c_Apply;
static VALUE c_Rule;
static VALUE sy_Replace_Super_Apply_lb__ti__lp_;
static VALUE sy_Replace_Super__append_lp_2;
static VALUE sy_Replace_Super__append_lp_3;
static VALUE sy_Replace_Super__append_lp_4;
static VALUE sy_Replace_Super__append_lp_;
static VALUE sy_Replace_Super__at_changed2;
static VALUE sy_Replace_Super__at_changed3;
static VALUE sy_Replace_Super__at_changed;
static VALUE sy_Replace_Super__at_name_eq_bi;
static VALUE sy_Replace_Super__lp_bind_lb_1_rb_;
static VALUE sy_Replace_Super__lp_bind_lb_4_rb_;
static VALUE sy_Replace_Super__lp_src_dot_ins;
static VALUE sy_Replace_Super_bind_lb_2_rb__eq_;
static VALUE sy_Replace_Super_bind_lb_5_rb__lt_;
static VALUE sy_Replace_Super_bind_lb_6_rb__eq_;
static VALUE sy_Replace_Super_if_sp_bind_lb_;
static VALUE sy_Replace_Super_src;
static VALUE sy_size;
VALUE Replace_Super_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*name*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*to*/,it);
it=rb_funcall(self,sy_Replace_Super__at_name_eq_bi,1,bind); it=bind_aget(bind,1/*to*/); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Replace_Super_bind_lb_2_rb__eq_,1,bind); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,3/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Replace_Super_traverse(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos2); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
VALUE Replace_Super_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Replace_Super__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_Replace_Super__at_changed2,1,bind);  bind_aset(bind,2/*oldchanged*/,it);
it=rb_funcall(self,sy_Replace_Super_src,1,bind);  bind_aset(bind,3/*this*/,it);
it=Qnil; bind_aset(bind,4/*clon*/,it);
it=Qfalse; bind_aset(bind,5/*changed*/,it);
it=rb_funcall(self,sy_Replace_Super__lp_src_dot_ins,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Replace_Super_bind_lb_6_rb__eq_,1,bind); int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,6/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,7/*autovar*/,it);
int oldpos3=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,7/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,9/*autovar*/,it);
int oldpos5=ame_getpos(self); int oldlen3=ame_getlen(self); VALUE oldsrc3=ame_getsrc(self); int fail3=0;
ame_setsrc(self,bind_aget(bind,9/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,10/*key*/,it);
it=rb_funcall(self,sy_Replace_Super__at_changed3,1,bind);   it=Replace_Super_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Replace_Super__lp_bind_lb_4_rb_,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: ame_setsrc(self,oldsrc3); ame_setpos(self,oldpos5); ame_setlen(self,oldlen3);
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Replace_Super__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos3); ame_setlen(self,oldlen2);
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=rb_funcall(self,sy_Replace_Super_if_sp_bind_lb_,1,bind);  bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Replace_Super_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Replace_Super_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Replace_Super__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,2/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=Replace_Super_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos2); ame_setlen(self,oldlen1);
	if(fail1) goto alt1_3;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Replace_Super_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Replace_Super__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
int oldpos4=ame_getpos(self); int oldlen2=ame_getlen(self); VALUE oldsrc2=ame_getsrc(self); int fail2=0;
ame_setsrc(self,bind_aget(bind,4/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Replace_Super_traverse_item(self ); FAILTEST(break1); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_Replace_Super_bind_lb_5_rb__lt_,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Replace_Super__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,6/*autovar*/);it=bind_aget(bind,5/*ar*/); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: ame_setsrc(self,oldsrc2); ame_setpos(self,oldpos4); ame_setlen(self,oldlen2);
	if(fail2) goto alt2_3;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos3); goto fail;
 accept2:;
 break;case 2:; int oldpos6=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Replace_Super_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Replace_Super__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos6); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Replace_Super_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,0/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),sy_size,0)));
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*name*/,it);
it=rb_funcall(self,sy_Replace_Super__lp_bind_lb_1_rb_,1,bind); FAILTEST(pass1);it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Replace_Super__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*args*/,it);
it=rb_funcall(self,sy_Replace_Super_Apply_lb__ti__lp_,1,bind);  bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/);
return it;
fail: return failobj; }
void Init_inliner2_c(){ 
 cls_DetectCalls=rb_define_class("DetectCalls",rb_const_get(rb_cObject,rb_intern("Visitor"))); 
failobj=rb_eval_string("FAIL");
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashVisitor1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashVisitor1);
sy_DetectCalls__append_lp_2=rb_intern("DetectCalls__append_lp_2");
sy_DetectCalls__append_lp_3=rb_intern("DetectCalls__append_lp_3");
sy_DetectCalls__append_lp_=rb_intern("DetectCalls__append_lp_");
sy_DetectCalls__at_calls=rb_intern("DetectCalls__at_calls");
sy_DetectCalls__at_calls_eq_=rb_intern("DetectCalls__at_calls_eq_");
sy_DetectCalls__at_calls_lb_b=rb_intern("DetectCalls__at_calls_lb_b");
sy_DetectCalls__lp_src_dot_ins=rb_intern("DetectCalls__lp_src_dot_ins");
sy_DetectCalls_bind_lb_2_rb__eq_=rb_intern("DetectCalls_bind_lb_2_rb__eq_");
sy_size=rb_intern("size");
rb_define_method(cls_DetectCalls,"root",DetectCalls_root,0);
rb_define_method(cls_DetectCalls,"traverse",DetectCalls_traverse,0);
rb_define_method(cls_DetectCalls,"traverse_item",DetectCalls_traverse_item,0);
rb_define_method(cls_DetectCalls,"visit",DetectCalls_visit,0);

 cls_Inliner2=rb_define_class("Inliner2",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashTraverser_Clone21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashTraverser_Clone21);
sy_Inliner2__append_lp_2=rb_intern("Inliner2__append_lp_2");
sy_Inliner2__append_lp_3=rb_intern("Inliner2__append_lp_3");
sy_Inliner2__append_lp_4=rb_intern("Inliner2__append_lp_4");
sy_Inliner2__append_lp_=rb_intern("Inliner2__append_lp_");
sy_Inliner2__at_changed2=rb_intern("Inliner2__at_changed2");
sy_Inliner2__at_changed3=rb_intern("Inliner2__at_changed3");
sy_Inliner2__at_changed=rb_intern("Inliner2__at_changed");
sy_Inliner2__at_name_eq_bi=rb_intern("Inliner2__at_name_eq_bi");
sy_Inliner2__lp_bind_lb_1_rb_=rb_intern("Inliner2__lp_bind_lb_1_rb_");
sy_Inliner2__lp_bind_lb_4_rb_=rb_intern("Inliner2__lp_bind_lb_4_rb_");
sy_Inliner2__lp_src_dot_ins=rb_intern("Inliner2__lp_src_dot_ins");
sy_Inliner2_bind_lb_2_rb__eq_=rb_intern("Inliner2_bind_lb_2_rb__eq_");
sy_Inliner2_bind_lb_5_rb__lt_=rb_intern("Inliner2_bind_lb_5_rb__lt_");
sy_Inliner2_bind_lb_6_rb__eq_=rb_intern("Inliner2_bind_lb_6_rb__eq_");
sy_Inliner2_bind_lb_7_rb__eq_=rb_intern("Inliner2_bind_lb_7_rb__eq_");
sy_Inliner2_body_eq_dee=rb_intern("Inliner2_body_eq_dee");
sy_Inliner2_if_sp_bind_lb_=rb_intern("Inliner2_if_sp_bind_lb_");
sy_Inliner2_src=rb_intern("Inliner2_src");
sy_Inliner2_src_dot_args=rb_intern("Inliner2_src_dot_args");
sy_Inliner2_src_dot_body=rb_intern("Inliner2_src_dot_body");
sy_Inliner2_src_dot_loca=rb_intern("Inliner2_src_dot_loca");
sy_Inliner2_src_dot_name=rb_intern("Inliner2_src_dot_name");
sy_size=rb_intern("size");
rb_define_method(cls_Inliner2,"root",Inliner2_root,0);
rb_define_method(cls_Inliner2,"traverse",Inliner2_traverse,0);
rb_define_method(cls_Inliner2,"traverse_item",Inliner2_traverse_item,0);
rb_define_method(cls_Inliner2,"visit",Inliner2_visit,0);

 cls_Replace_Super=rb_define_class("Replace_Super",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashTraverser_Clone21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashTraverser_Clone21);
sy_Replace_Super_Apply_lb__ti__lp_=rb_intern("Replace_Super_Apply_lb__ti__lp_");
sy_Replace_Super__append_lp_2=rb_intern("Replace_Super__append_lp_2");
sy_Replace_Super__append_lp_3=rb_intern("Replace_Super__append_lp_3");
sy_Replace_Super__append_lp_4=rb_intern("Replace_Super__append_lp_4");
sy_Replace_Super__append_lp_=rb_intern("Replace_Super__append_lp_");
sy_Replace_Super__at_changed2=rb_intern("Replace_Super__at_changed2");
sy_Replace_Super__at_changed3=rb_intern("Replace_Super__at_changed3");
sy_Replace_Super__at_changed=rb_intern("Replace_Super__at_changed");
sy_Replace_Super__at_name_eq_bi=rb_intern("Replace_Super__at_name_eq_bi");
sy_Replace_Super__lp_bind_lb_1_rb_=rb_intern("Replace_Super__lp_bind_lb_1_rb_");
sy_Replace_Super__lp_bind_lb_4_rb_=rb_intern("Replace_Super__lp_bind_lb_4_rb_");
sy_Replace_Super__lp_src_dot_ins=rb_intern("Replace_Super__lp_src_dot_ins");
sy_Replace_Super_bind_lb_2_rb__eq_=rb_intern("Replace_Super_bind_lb_2_rb__eq_");
sy_Replace_Super_bind_lb_5_rb__lt_=rb_intern("Replace_Super_bind_lb_5_rb__lt_");
sy_Replace_Super_bind_lb_6_rb__eq_=rb_intern("Replace_Super_bind_lb_6_rb__eq_");
sy_Replace_Super_if_sp_bind_lb_=rb_intern("Replace_Super_if_sp_bind_lb_");
sy_Replace_Super_src=rb_intern("Replace_Super_src");
sy_size=rb_intern("size");
rb_define_method(cls_Replace_Super,"root",Replace_Super_root,0);
rb_define_method(cls_Replace_Super,"traverse",Replace_Super_traverse,0);
rb_define_method(cls_Replace_Super,"traverse_item",Replace_Super_traverse_item,0);
rb_define_method(cls_Replace_Super,"visit",Replace_Super_visit,0);
 rb_eval_string("testversioninliner2('1ab449df9c17217484040ce89e31962f')");}
