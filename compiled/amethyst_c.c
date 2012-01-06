#include "cthyst.h"
VALUE cls_Amethyst;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst__(VALUE self );
VALUE Amethyst_alnum(VALUE self );
VALUE Amethyst_alpha(VALUE self );
VALUE Amethyst_char(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE a0);
VALUE Amethyst_digit(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_endline(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_false(VALUE self );
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_lower(VALUE self );
VALUE Amethyst_member(VALUE self ,VALUE a0);
VALUE Amethyst_nil(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_range_ex(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_range_in(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_regch(VALUE self ,VALUE a0);
VALUE Amethyst_regch(VALUE self ,VALUE);
VALUE Amethyst_replace(VALUE self ,VALUE a0);
VALUE Amethyst_seq(VALUE self ,VALUE a0);
VALUE Amethyst_space(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE a0);
VALUE Amethyst_true(VALUE self );
VALUE Amethyst_upper(VALUE self );
VALUE Amethyst_word(VALUE self );
VALUE Amethyst_xdigit(VALUE self );
static VALUE s___b14a;
static VALUE s__bs_n_1d78;
static VALUE s__bs_r_8ce5;
static VALUE s__bs_r_bs_n_bdb2;
static VALUE sy_Amethyst__append_lp__29a3;
static VALUE sy_Amethyst__append_lp__6948;
static VALUE sy_Amethyst__append_lp__6ac6;
static VALUE sy_Amethyst__append_lp__cbd1;
static VALUE sy_Amethyst__di__lb_0_mi_9_rb__di__7072;
static VALUE sy_Amethyst__di__lb_0_mi_9a_mi_f_7b9a;
static VALUE sy_Amethyst__di__lb_A_mi_Z_rb__di__05b6;
static VALUE sy_Amethyst__di__lb__bs_s_bs_t_bs_r_9a56;
static VALUE sy_Amethyst__di__lb_a_mi_z_rb__di__8807;
static VALUE sy_Amethyst__lb__rb_;
static VALUE sy_Amethyst__lp_bind_lb_0_rb__9f45;
static VALUE sy_Amethyst__lp_bind_lb_0_rb__b1f4;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__4329;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__abc3;
static VALUE sy_Amethyst__lp_bind_lb_2_rb__7d6d;
static VALUE sy_Amethyst__lp_bind_lb_3_rb__71bb;
static VALUE sy_Amethyst__lp_false_rp__sp__c3c5;
static VALUE sy_Amethyst_bind_lb_0_rb_;
static VALUE sy_Amethyst_bind_lb_0_rb__dot__6a2a;
static VALUE sy_Amethyst_bind_lb_0_rb__dot__ddb4;
static VALUE sy_Amethyst_bind_lb_1_rb__ti__cfcb;
static VALUE sy_Amethyst_nil;
static VALUE sy_apply;
VALUE Amethyst__(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=rb_funcall(self,sy_Amethyst__di__lb__bs_s_bs_t_bs_r_9a56,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_alnum(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_alpha(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_digit(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_alpha(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_lower(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_upper(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_char(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*c*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__9f45,1,bind); FAILTEST(fail);it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb_,1,bind);  bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(5); bind_aset(bind,0/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*cls*/); bind_aset(bind,1/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind); FAILTEST(fail);it=bind_aget(bind,2/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_digit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=rb_funcall(self,sy_Amethyst__di__lb_0_mi_9_rb__di__7072,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_empty(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Amethyst_nil,1,bind);  bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_endline(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(10) ... UC(10):; if (strncmp(ame_curstr(self),"\n",1)) goto fail; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__bs_n_1d78); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 break;case UC(13) ... UC(13):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"\r\n",2)) goto alt1_2; else ame_setpos(self,ame_getpos(self)+2);it=rb_obj_clone(s__bs_r_bs_n_bdb2); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"\r",1)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s__bs_r_8ce5); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;default:;   it=Amethyst_fails(self ); FAILTEST(fail); break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_eof(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_fails(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Amethyst__lp_false_rp__sp__c3c5,1,bind); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_false(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qfalse; bind_aset(bind,0/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__b1f4,1,bind); FAILTEST(fail);it=bind_aget(bind,1/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(9); bind_aset(bind,1/*rule*/,a0);bind_aset(bind,4/*delim*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*f*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__29a3,1,bind); it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self); it=bind_aget(bind,4/*delim*/); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=bind_aget(bind,5/*s*/); it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__6948,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__6ac6,1,bind); it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb_,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Amethyst__lb__rb_,1,bind);  bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,8/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_lower(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=rb_funcall(self,sy_Amethyst__di__lb_a_mi_z_rb__di__8807,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_member(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3); bind_aset(bind,1/*x*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__4329,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_nil(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qnil; bind_aset(bind,0/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__b1f4,1,bind); FAILTEST(fail);it=bind_aget(bind,1/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_number(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
  it=Amethyst_digit(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__cbd1,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Amethyst_digit(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__29a3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_3_rb__71bb,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(5); bind_aset(bind,2/*rule*/,a0);bind_aset(bind,0/*obj*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*obj*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
  it=bind_aget(bind,2/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_range_ex(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(6); bind_aset(bind,0/*a*/,a0);bind_aset(bind,1/*b*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb__dot__6a2a,1,bind);  bind_aset(bind,2/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_2_rb__7d6d,1,bind); FAILTEST(fail);it=bind_aget(bind,3/*a*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_range_in(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(6); bind_aset(bind,0/*a*/,a0);bind_aset(bind,1/*b*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb__dot__ddb4,1,bind);  bind_aset(bind,2/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_2_rb__7d6d,1,bind); FAILTEST(fail);it=bind_aget(bind,3/*a*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(5); bind_aset(bind,0/*regex*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*regex*/); bind_aset(bind,1/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind); FAILTEST(fail);it=bind_aget(bind,2/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_replace(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3); bind_aset(bind,0/*exp*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=bind_aget(bind,0/*exp*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*it*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*it*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__ti__cfcb,1,bind);  bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=bind_aget(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_space(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=rb_funcall(self,sy_Amethyst__di__lb__bs_s_bs_t_bs_r_9a56,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_spaces(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_funcall(self,sy_Amethyst__di__lb__bs_s_bs_t_bs_r_9a56,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(break1); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__29a3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_spaces(self ); FAILTEST(fail);it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_true(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qtrue; bind_aset(bind,0/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__b1f4,1,bind); FAILTEST(fail);it=bind_aget(bind,1/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_upper(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=rb_funcall(self,sy_Amethyst__di__lb_A_mi_Z_rb__di__05b6,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_word(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=*ame_curstr(self);  switch(chr1){case UC(0) ... UC(94):;case UC(96) ... UC(255):;   it=Amethyst_alpha(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;case UC(95) ... UC(95):; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_alpha(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 if (strncmp(ame_curstr(self),"_",1)) goto alt1_3; else ame_setpos(self,ame_getpos(self)+1);it=rb_obj_clone(s___b14a); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Amethyst_xdigit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=rb_funcall(self,sy_Amethyst__di__lb_0_mi_9a_mi_f_7b9a,1,bind);  arg0=it; it=Amethyst_regch(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_amethyst_c(){ 
 cls_Amethyst=rb_define_class("Amethyst",rb_const_get(rb_cObject,rb_intern("AmethystCore"))); 
failobj=rb_eval_string("FAIL");
s___b14a=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s___b14a);
s__bs_n_1d78=rb_str_new2("\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs_n_1d78);
s__bs_r_8ce5=rb_str_new2("\r");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs_r_8ce5);
s__bs_r_bs_n_bdb2=rb_str_new2("\r\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs_r_bs_n_bdb2);
sy_Amethyst__append_lp__29a3=rb_intern("Amethyst__append_lp__29a3");
sy_Amethyst__append_lp__6948=rb_intern("Amethyst__append_lp__6948");
sy_Amethyst__append_lp__6ac6=rb_intern("Amethyst__append_lp__6ac6");
sy_Amethyst__append_lp__cbd1=rb_intern("Amethyst__append_lp__cbd1");
sy_Amethyst__di__lb_0_mi_9_rb__di__7072=rb_intern("Amethyst__di__lb_0_mi_9_rb__di__7072");
sy_Amethyst__di__lb_0_mi_9a_mi_f_7b9a=rb_intern("Amethyst__di__lb_0_mi_9a_mi_f_7b9a");
sy_Amethyst__di__lb_A_mi_Z_rb__di__05b6=rb_intern("Amethyst__di__lb_A_mi_Z_rb__di__05b6");
sy_Amethyst__di__lb__bs_s_bs_t_bs_r_9a56=rb_intern("Amethyst__di__lb__bs_s_bs_t_bs_r_9a56");
sy_Amethyst__di__lb_a_mi_z_rb__di__8807=rb_intern("Amethyst__di__lb_a_mi_z_rb__di__8807");
sy_Amethyst__lb__rb_=rb_intern("Amethyst__lb__rb_");
sy_Amethyst__lp_bind_lb_0_rb__9f45=rb_intern("Amethyst__lp_bind_lb_0_rb__9f45");
sy_Amethyst__lp_bind_lb_0_rb__b1f4=rb_intern("Amethyst__lp_bind_lb_0_rb__b1f4");
sy_Amethyst__lp_bind_lb_1_rb__4329=rb_intern("Amethyst__lp_bind_lb_1_rb__4329");
sy_Amethyst__lp_bind_lb_1_rb__abc3=rb_intern("Amethyst__lp_bind_lb_1_rb__abc3");
sy_Amethyst__lp_bind_lb_2_rb__7d6d=rb_intern("Amethyst__lp_bind_lb_2_rb__7d6d");
sy_Amethyst__lp_bind_lb_3_rb__71bb=rb_intern("Amethyst__lp_bind_lb_3_rb__71bb");
sy_Amethyst__lp_false_rp__sp__c3c5=rb_intern("Amethyst__lp_false_rp__sp__c3c5");
sy_Amethyst_bind_lb_0_rb_=rb_intern("Amethyst_bind_lb_0_rb_");
sy_Amethyst_bind_lb_0_rb__dot__6a2a=rb_intern("Amethyst_bind_lb_0_rb__dot__6a2a");
sy_Amethyst_bind_lb_0_rb__dot__ddb4=rb_intern("Amethyst_bind_lb_0_rb__dot__ddb4");
sy_Amethyst_bind_lb_1_rb__ti__cfcb=rb_intern("Amethyst_bind_lb_1_rb__ti__cfcb");
sy_Amethyst_nil=rb_intern("Amethyst_nil");
sy_apply=rb_intern("apply");
rb_define_method(cls_Amethyst,"_",Amethyst__,0);
rb_define_method(cls_Amethyst,"alnum",Amethyst_alnum,0);
rb_define_method(cls_Amethyst,"alpha",Amethyst_alpha,0);
rb_define_method(cls_Amethyst,"char",Amethyst_char,0);
rb_define_method(cls_Amethyst,"clas",Amethyst_clas,1);
rb_define_method(cls_Amethyst,"digit",Amethyst_digit,0);
rb_define_method(cls_Amethyst,"empty",Amethyst_empty,0);
rb_define_method(cls_Amethyst,"endline",Amethyst_endline,0);
rb_define_method(cls_Amethyst,"eof",Amethyst_eof,0);
rb_define_method(cls_Amethyst,"fails",Amethyst_fails,0);
rb_define_method(cls_Amethyst,"false",Amethyst_false,0);
rb_define_method(cls_Amethyst,"listOf",Amethyst_listOf,2);
rb_define_method(cls_Amethyst,"lower",Amethyst_lower,0);
rb_define_method(cls_Amethyst,"member",Amethyst_member,1);
rb_define_method(cls_Amethyst,"nil",Amethyst_nil,0);
rb_define_method(cls_Amethyst,"number",Amethyst_number,0);
rb_define_method(cls_Amethyst,"parse",Amethyst_parse,2);
rb_define_method(cls_Amethyst,"range_ex",Amethyst_range_ex,2);
rb_define_method(cls_Amethyst,"range_in",Amethyst_range_in,2);
rb_define_method(cls_Amethyst,"regch",Amethyst_regch,1);
rb_define_method(cls_Amethyst,"replace",Amethyst_replace,1);
rb_define_method(cls_Amethyst,"seq",Amethyst_seq,1);
rb_define_method(cls_Amethyst,"space",Amethyst_space,0);
rb_define_method(cls_Amethyst,"spaces",Amethyst_spaces,0);
rb_define_method(cls_Amethyst,"token",Amethyst_token,1);
rb_define_method(cls_Amethyst,"true",Amethyst_true,0);
rb_define_method(cls_Amethyst,"upper",Amethyst_upper,0);
rb_define_method(cls_Amethyst,"word",Amethyst_word,0);
rb_define_method(cls_Amethyst,"xdigit",Amethyst_xdigit,0);
 rb_eval_string("testversionamethyst('52aebb6edcbc8ec8d036245fb2b0907d')");}
