#include "cthyst.h"
VALUE cls_Amethyst;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst__(VALUE self );
VALUE Amethyst__false(VALUE self );
VALUE Amethyst__true(VALUE self );
VALUE Amethyst_alnum(VALUE self );
VALUE Amethyst_alpha(VALUE self );
VALUE Amethyst_char(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE a0);
VALUE Amethyst_digit(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_endline(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_exactly(VALUE self ,VALUE a0);
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_foo(VALUE self );
VALUE Amethyst_letter(VALUE self );
VALUE Amethyst_letterOrDigit(VALUE self );
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_lower(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_regch(VALUE self ,VALUE a0);
VALUE Amethyst_regch(VALUE self ,VALUE);
VALUE Amethyst_replace(VALUE self ,VALUE a0);
VALUE Amethyst_seq(VALUE self ,VALUE a0);
VALUE Amethyst_space(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE a0);
VALUE Amethyst_upper(VALUE self );
VALUE Amethyst_word(VALUE self );
VALUE Amethyst_xdigit(VALUE self );
static VALUE c_10;
static VALUE c_2;
static VALUE c_3;
static VALUE c_4;
static VALUE c_5;
static VALUE c_6;
static VALUE c_7;
static VALUE c_9;
static VALUE s_Amethyst__append_lp_1Amethyst;
static VALUE s_Amethyst__append_lp_2Amethyst;
static VALUE s_Amethyst__append_lp_3Amethyst;
static VALUE s_Amethyst__append_lp_4Amethyst;
static VALUE s_Amethyst__di__lb_0_mi_9_rb__di_1Amethyst;
static VALUE s_Amethyst__di__lb_0_mi_9a_mi_f1Amethyst;
static VALUE s_Amethyst__di__lb_1Amethyst;
static VALUE s_Amethyst__di__lb_2Amethyst;
static VALUE s_Amethyst__di__lb_A_mi_Z_rb__di_1Amethyst;
static VALUE s_Amethyst__di__lb_a_mi_z_rb__di_1Amethyst;
static VALUE s_Amethyst__di__lb_g_mi_i_rb__di_1Amethyst;
static VALUE s_Amethyst__lp_bind_lb_0_rb_1Amethyst;
static VALUE s_Amethyst__lp_bind_lb_0_rb_2Amethyst;
static VALUE s_Amethyst__lp_bind_lb_0_rb_3Amethyst;
static VALUE s_Amethyst__lp_bind_lb_1_rb_1Amethyst;
static VALUE s_Amethyst__lp_bind_lb_3_rb_1Amethyst;
static VALUE s_Amethyst__lp_bind_lb_3_rb_2Amethyst;
static VALUE s_Amethyst__lp_false_rp_1Amethyst;
static VALUE s_Amethyst_bind_lb_1_rb__ti_1Amethyst;
static VALUE s_applyAmethyst;
static VALUE s_sizeAmethyst;
VALUE Amethyst__(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_funcall(self,s_Amethyst__di__lb_2Amethyst,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst__false(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qfalse;
 bind_aset(bind,0/*wanted*/,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,1/*got*/,it); it=rb_funcall(self,s_Amethyst__lp_bind_lb_0_rb_2Amethyst,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*wanted*/);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst__true(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qtrue;
 bind_aset(bind,0/*wanted*/,it);   it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,1/*got*/,it); it=rb_funcall(self,s_Amethyst__lp_bind_lb_0_rb_2Amethyst,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*wanted*/);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_alnum(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_letterOrDigit(self ); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_alpha(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_letter(self ); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_char(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_Amethyst__lp_bind_lb_0_rb_1Amethyst,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*c*/);
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3); bind_aset(bind,1/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,0/*i*/,it); it=rb_funcall(self,s_Amethyst__lp_bind_lb_0_rb_3Amethyst,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*i*/);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_digit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_funcall(self,s_Amethyst__di__lb_0_mi_9_rb__di_1Amethyst,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_empty(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=Qnil;
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_endline(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(10) ... UC(10):;  it=rb_obj_clone(c_2); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=rb_obj_clone(c_3);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  break;case UC(13) ... UC(13):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_4); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=rb_obj_clone(c_5);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_6); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_7);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
 bind_aset(bind,1/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;default:;   it=Amethyst_fails(self ); FAILTEST(fail); break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_eof(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_exactly(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3); bind_aset(bind,1/*wanted*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,0/*got*/,it); it=rb_funcall(self,s_Amethyst__lp_bind_lb_1_rb_1Amethyst,1,bind); FAILTEST(fail);it=bind_aget(bind,1/*wanted*/);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_fails(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_funcall(self,s_Amethyst__lp_false_rp_1Amethyst,1,bind); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_foo(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,s_Amethyst__di__lb_1Amethyst,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_funcall(self,s_Amethyst__di__lb_g_mi_i_rb__di_1Amethyst,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(alt1_3);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_letter(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_lower(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_upper(self ); FAILTEST(alt1_3);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_letterOrDigit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_letter(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_digit(self ); FAILTEST(alt1_3);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(8); bind_aset(bind,1/*rule*/,a0);bind_aset(bind,4/*delim*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*f*/,it); int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,s_applyAmethyst,1,arg0); FAILTEST(alt1_2);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_Amethyst__append_lp_1Amethyst,1,bind); it=rb_ary_new3(0);
 bind_aset(bind,3/*autovar*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);  it=bind_aget(bind,4/*delim*/); arg0=it; it=rb_funcall(self,s_applyAmethyst,1,arg0); FAILTEST(break1); it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,s_applyAmethyst,1,arg0); FAILTEST(break1);
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_Amethyst__append_lp_3Amethyst,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/);
 bind_aset(bind,6/*autovar*/,it); it=rb_funcall(self,s_Amethyst__append_lp_4Amethyst,1,bind); it=bind_aget(bind,0/*f*/);
 bind_aset(bind,7/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0);
 bind_aset(bind,7/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_lower(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_funcall(self,s_Amethyst__di__lb_a_mi_z_rb__di_1Amethyst,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_number(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it);   it=Amethyst_digit(self ); FAILTEST(fail);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_Amethyst__append_lp_2Amethyst,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Amethyst_digit(self ); FAILTEST(break1);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_Amethyst__append_lp_1Amethyst,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,3/*it*/,it); it=rb_funcall(self,s_Amethyst__lp_bind_lb_3_rb_2Amethyst,1,bind); 
 bind_aset(bind,4/*_result*/,it); it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(5); bind_aset(bind,2/*rule*/,a0);bind_aset(bind,0/*obj*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=bind_aget(bind,0/*obj*/);
 bind_aset(bind,1/*autovar*/,it); int oldpos1=ame_getpos(self); int oldlen1=ame_getlen(self); VALUE oldsrc1=ame_getsrc(self); int fail1=0;
ame_setsrc(self,bind_aget(bind,1/*autovar*/)); ame_setpos(self,0); ame_setlen(self,FIX2LONG(rb_funcall(ame_getsrc(self),s_sizeAmethyst,0)));
  it=bind_aget(bind,2/*rule*/); arg0=it; it=rb_funcall(self,s_applyAmethyst,1,arg0); FAILTEST(pass1);
 bind_aset(bind,3/*autovar*/,it);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: ame_setsrc(self,oldsrc1); ame_setpos(self,oldpos1); ame_setlen(self,oldlen1);
	if(fail1) goto fail;
it=bind_aget(bind,3/*autovar*/);
 bind_aset(bind,4/*_result*/,it); it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(5); bind_aset(bind,3/*regex*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=AmethystCore_anything(self ); FAILTEST(fail);
 bind_aset(bind,0/*c*/,it); it=rb_funcall(self,s_Amethyst__lp_bind_lb_0_rb_1Amethyst,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*c*/);
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
 bind_aset(bind,2/*c*/,it); it=rb_funcall(self,s_Amethyst__lp_bind_lb_3_rb_1Amethyst,1,bind); FAILTEST(fail);it=bind_aget(bind,2/*c*/);
 bind_aset(bind,4/*_result*/,it); it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_replace(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3); bind_aset(bind,0/*exp*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=bind_aget(bind,0/*exp*/); arg0=it; it=rb_funcall(self,s_applyAmethyst,1,arg0); FAILTEST(alt1_2);
 bind_aset(bind,1/*it*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,1/*it*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_funcall(self,s_Amethyst_bind_lb_1_rb__ti_1Amethyst,1,bind); 
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=bind_aget(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,0/*s*/);
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_space(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_funcall(self,s_Amethyst__di__lb_2Amethyst,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_spaces(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_funcall(self,s_Amethyst__di__lb_2Amethyst,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(break1);
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_Amethyst__append_lp_1Amethyst,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Amethyst_spaces(self ); FAILTEST(fail);it=bind_aget(bind,0/*s*/);
 bind_aset(bind,1/*s*/,it);  it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_upper(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_funcall(self,s_Amethyst__di__lb_A_mi_Z_rb__di_1Amethyst,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_word(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(94):;case UC(96) ... UC(255):;   it=Amethyst_alpha(self ); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it);  break;case UC(95) ... UC(95):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_alpha(self ); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_9); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=rb_obj_clone(c_10);
 bind_aset(bind,1/*_result*/,it); it=bind_aget(bind,1/*_result*/);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_xdigit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_funcall(self,s_Amethyst__di__lb_0_mi_9a_mi_f1Amethyst,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_amethyst_c(){ 
 cls_Amethyst=rb_define_class("Amethyst",rb_const_get(rb_cObject,rb_intern("AmethystCore"))); 
failobj=rb_eval_string("FAIL");
c_10=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_10);
c_2=rb_str_new2("\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_2);
c_3=rb_str_new2("\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_3);
c_4=rb_str_new2("\r\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_4);
c_5=rb_str_new2("\r\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_5);
c_6=rb_str_new2("\r");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_6);
c_7=rb_str_new2("\r");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_7);
c_9=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_9);
s_Amethyst__append_lp_1Amethyst=rb_intern("Amethyst__append_lp_1");
s_Amethyst__append_lp_2Amethyst=rb_intern("Amethyst__append_lp_2");
s_Amethyst__append_lp_3Amethyst=rb_intern("Amethyst__append_lp_3");
s_Amethyst__append_lp_4Amethyst=rb_intern("Amethyst__append_lp_4");
s_Amethyst__di__lb_0_mi_9_rb__di_1Amethyst=rb_intern("Amethyst__di__lb_0_mi_9_rb__di_1");
s_Amethyst__di__lb_0_mi_9a_mi_f1Amethyst=rb_intern("Amethyst__di__lb_0_mi_9a_mi_f1");
s_Amethyst__di__lb_1Amethyst=rb_intern("Amethyst__di__lb_1");
s_Amethyst__di__lb_2Amethyst=rb_intern("Amethyst__di__lb_2");
s_Amethyst__di__lb_A_mi_Z_rb__di_1Amethyst=rb_intern("Amethyst__di__lb_A_mi_Z_rb__di_1");
s_Amethyst__di__lb_a_mi_z_rb__di_1Amethyst=rb_intern("Amethyst__di__lb_a_mi_z_rb__di_1");
s_Amethyst__di__lb_g_mi_i_rb__di_1Amethyst=rb_intern("Amethyst__di__lb_g_mi_i_rb__di_1");
s_Amethyst__lp_bind_lb_0_rb_1Amethyst=rb_intern("Amethyst__lp_bind_lb_0_rb_1");
s_Amethyst__lp_bind_lb_0_rb_2Amethyst=rb_intern("Amethyst__lp_bind_lb_0_rb_2");
s_Amethyst__lp_bind_lb_0_rb_3Amethyst=rb_intern("Amethyst__lp_bind_lb_0_rb_3");
s_Amethyst__lp_bind_lb_1_rb_1Amethyst=rb_intern("Amethyst__lp_bind_lb_1_rb_1");
s_Amethyst__lp_bind_lb_3_rb_1Amethyst=rb_intern("Amethyst__lp_bind_lb_3_rb_1");
s_Amethyst__lp_bind_lb_3_rb_2Amethyst=rb_intern("Amethyst__lp_bind_lb_3_rb_2");
s_Amethyst__lp_false_rp_1Amethyst=rb_intern("Amethyst__lp_false_rp_1");
s_Amethyst_bind_lb_1_rb__ti_1Amethyst=rb_intern("Amethyst_bind_lb_1_rb__ti_1");
s_applyAmethyst=rb_intern("apply");
s_sizeAmethyst=rb_intern("size");
rb_define_method(cls_Amethyst,"_",Amethyst__,0);
rb_define_method(cls_Amethyst,"_false",Amethyst__false,0);
rb_define_method(cls_Amethyst,"_true",Amethyst__true,0);
rb_define_method(cls_Amethyst,"alnum",Amethyst_alnum,0);
rb_define_method(cls_Amethyst,"alpha",Amethyst_alpha,0);
rb_define_method(cls_Amethyst,"char",Amethyst_char,0);
rb_define_method(cls_Amethyst,"clas",Amethyst_clas,1);
rb_define_method(cls_Amethyst,"digit",Amethyst_digit,0);
rb_define_method(cls_Amethyst,"empty",Amethyst_empty,0);
rb_define_method(cls_Amethyst,"endline",Amethyst_endline,0);
rb_define_method(cls_Amethyst,"eof",Amethyst_eof,0);
rb_define_method(cls_Amethyst,"exactly",Amethyst_exactly,1);
rb_define_method(cls_Amethyst,"fails",Amethyst_fails,0);
rb_define_method(cls_Amethyst,"foo",Amethyst_foo,0);
rb_define_method(cls_Amethyst,"letter",Amethyst_letter,0);
rb_define_method(cls_Amethyst,"letterOrDigit",Amethyst_letterOrDigit,0);
rb_define_method(cls_Amethyst,"listOf",Amethyst_listOf,2);
rb_define_method(cls_Amethyst,"lower",Amethyst_lower,0);
rb_define_method(cls_Amethyst,"number",Amethyst_number,0);
rb_define_method(cls_Amethyst,"parse",Amethyst_parse,2);
rb_define_method(cls_Amethyst,"regch",Amethyst_regch,1);
rb_define_method(cls_Amethyst,"replace",Amethyst_replace,1);
rb_define_method(cls_Amethyst,"seq",Amethyst_seq,1);
rb_define_method(cls_Amethyst,"space",Amethyst_space,0);
rb_define_method(cls_Amethyst,"spaces",Amethyst_spaces,0);
rb_define_method(cls_Amethyst,"token",Amethyst_token,1);
rb_define_method(cls_Amethyst,"upper",Amethyst_upper,0);
rb_define_method(cls_Amethyst,"word",Amethyst_word,0);
rb_define_method(cls_Amethyst,"xdigit",Amethyst_xdigit,0);
 rb_eval_string("testversionamethyst('bb5406dc41d83188015cdb0a5e101007')");}
