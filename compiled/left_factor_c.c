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
VALUE switchhashLeft_Factor1;
VALUE switchhashLeft_Factor2;
VALUE switchhashLeft_Factor3;
VALUE switchhashTraverser_Clone21;
static VALUE c_Or;
static VALUE sy_Left_Factor_Bind_lb_src_4a7e;
static VALUE sy_Left_Factor_Or_lb__ti__lp_bin_1272;
static VALUE sy_Left_Factor_Or_lb__ti__lp_bin_c6d5;
static VALUE sy_Left_Factor_Seq_lb__lb_bin_f9f4;
static VALUE sy_Left_Factor__append_lp__088f;
static VALUE sy_Left_Factor__append_lp__324d;
static VALUE sy_Left_Factor__append_lp__37c5;
static VALUE sy_Left_Factor__append_lp__473a;
static VALUE sy_Left_Factor__append_lp__be78;
static VALUE sy_Left_Factor__append_lp__cbd1;
static VALUE sy_Left_Factor__at_changed_5352;
static VALUE sy_Left_Factor__at_changed_b885;
static VALUE sy_Left_Factor__at_changed_c681;
static VALUE sy_Left_Factor__lb_bind_lb_0_rb__fb2d;
static VALUE sy_Left_Factor__lb_bind_lb_2_rb__5b5d;
static VALUE sy_Left_Factor__lb_bind_lb_6_rb__ef11;
static VALUE sy_Left_Factor__lp_bind_lb_1_rb__68a2;
static VALUE sy_Left_Factor__lp_bind_lb_4_rb__ba59;
static VALUE sy_Left_Factor__lp_bind_lb_4_rb__d863;
static VALUE sy_Left_Factor__lp_src_dot_ins_6a75;
static VALUE sy_Left_Factor_bind_lb_1_rb__eq__7142;
static VALUE sy_Left_Factor_bind_lb_2_rb__pl__9bc3;
static VALUE sy_Left_Factor_bind_lb_3_rb__pl__4c4b;
static VALUE sy_Left_Factor_bind_lb_3_rb__pl__a9ae;
static VALUE sy_Left_Factor_bind_lb_4_rb__eq__07a6;
static VALUE sy_Left_Factor_bind_lb_5_rb__lt__dccc;
static VALUE sy_Left_Factor_bind_lb_5_rb__pl__1ee4;
static VALUE sy_Left_Factor_first_lp_bi_16f8;
static VALUE sy_Left_Factor_first_lp_bi_80ce;
static VALUE sy_Left_Factor_first_lp_bi_a16c;
static VALUE sy_Left_Factor_if_sp_bind_lb__b5ce;
static VALUE sy_Left_Factor_src_25d9;
static VALUE sy_Left_Factor_src_dot_expr_ef77;
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(17); bind_aset(bind,0/*s*/,a0);bind_aset(bind,6/*a*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
 unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashLeft_Factor3,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Left_Factor__append_lp__088f,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,4/*autovar*/); it=rb_funcall(self,sy_Left_Factor_src_dot_expr_ef77,1,bind);  arg0=it;it=bind_aget(bind,6/*a*/); arg1=it; it=Left_Factor_binds(self ,arg0,arg1); FAILTEST(pass2); bind_aset(bind,7/*nexp*/,it);
it=rb_funcall(self,sy_Left_Factor_Bind_lb_src_4a7e,1,bind);  bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/);it=bind_aget(bind,6/*a*/); bind_aset(bind,9/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto pass1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,10/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,12/*f*/,it);
it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Left_Factor__append_lp__473a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,13/*autovar*/); it=bind_aget(bind,12/*f*/); arg0=it;it=bind_aget(bind,6/*a*/); arg1=it; it=Left_Factor_binds(self ,arg0,arg1); FAILTEST(pass3); bind_aset(bind,15/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_2;
it=bind_aget(bind,15/*autovar*/); bind_aset(bind,9/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,10/*autovar*/);it=bind_aget(bind,6/*a*/); bind_aset(bind,9/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(pass1);it=bind_aget(bind,6/*a*/); bind_aset(bind,9/*autovar*/,it);
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,16/*_result*/,it);
it=bind_aget(bind,16/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2){VALUE vals[3]; VALUE bind=bind_new2(5); bind_aset(bind,2/*prev*/,a0);bind_aset(bind,1/*start*/,a1);bind_aset(bind,3/*cur*/,a2); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*next*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__68a2,1,bind); FAILTEST(alt2_2); it=bind_aget(bind,2/*prev*/); arg0=it;it=bind_aget(bind,1/*start*/); arg1=it;it=rb_funcall(self,sy_Left_Factor_bind_lb_3_rb__pl__a9ae,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_2); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
 it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__eq__7142,1,bind); ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt2_3;
 accept3:;
 it=rb_funcall(self,sy_Left_Factor_bind_lb_2_rb__pl__9bc3,1,bind);  arg0=it;it=rb_funcall(self,sy_Left_Factor_first_lp_bi_16f8,1,bind);  arg1=it;it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_0_rb__fb2d,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_3); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Amethyst_eof(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Left_Factor_Or_lb__ti__lp_bin_1272,1,bind);  bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_first(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(15); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
 unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashLeft_Factor1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Left_Factor__append_lp__088f,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,4/*autovar*/); it=rb_funcall(self,sy_Left_Factor_src_dot_expr_ef77,1,bind);  arg0=it; it=Left_Factor_first(self ,arg0); FAILTEST(pass2); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto pass1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,8/*autovar*/,it);
int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,10/*f*/,it);
it=rb_ary_new3(0); bind_aset(bind,11/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Left_Factor__append_lp__be78,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,11/*autovar*/); it=bind_aget(bind,10/*f*/); arg0=it; it=Left_Factor_first(self ,arg0); FAILTEST(pass3); bind_aset(bind,13/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt2_2;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,8/*autovar*/); bind_aset(bind,7/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto pass1;
 accept2:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,7/*autovar*/,it);
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(11); bind_aset(bind,0/*s*/,a0);bind_aset(bind,7/*bin*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
 unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashLeft_Factor2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2);it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Left_Factor__append_lp__088f,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Left_Factor_Seq_lb__lb_bin_f9f4,1,bind);  bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass1;}
 it=bind_aget(bind,2/*autovar*/);it=bind_aget(bind,7/*bin*/); bind_aset(bind,9/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto pass1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(pass1);it=bind_aget(bind,7/*bin*/); bind_aset(bind,9/*autovar*/,it);
 break;}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*_result*/,it);
it=bind_aget(bind,10/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Left_Factor_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Left_Factor__append_lp__cbd1,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_Left_Factor__at_changed_c681,1,bind);  bind_aset(bind,2/*oldchanged*/,it);
it=rb_funcall(self,sy_Left_Factor_src_25d9,1,bind);  bind_aset(bind,3/*this*/,it);
it=Qnil; bind_aset(bind,4/*clon*/,it);
it=Qfalse; bind_aset(bind,5/*changed*/,it);
it=rb_funcall(self,sy_Left_Factor__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,6/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,6/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,10/*key*/,it);
it=rb_funcall(self,sy_Left_Factor__at_changed_b885,1,bind);   it=Left_Factor_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_4_rb__d863,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Left_Factor__append_lp__324d,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Left_Factor_if_sp_bind_lb__b5ce,1,bind);  bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Left_Factor_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Left_Factor__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Left_Factor_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Left_Factor_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Left_Factor__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Left_Factor_traverse_item(self ); FAILTEST(break1); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_Left_Factor_bind_lb_5_rb__lt__dccc,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Left_Factor__append_lp__37c5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/);it=bind_aget(bind,5/*ar*/); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_3;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;case 2:; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Left_Factor_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Left_Factor__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Left_Factor_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Left_Factor_traverse(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,2/*x*/,it);
it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_2_rb__5b5d,1,bind);  bind_aset(bind,3/*cur*/,it);
it=rb_funcall(self,sy_Left_Factor_first_lp_bi_a16c,1,bind);  bind_aset(bind,4/*start*/,it);
it=rb_ary_new3(0); bind_aset(bind,5/*prev*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass2;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,6/*next*/,it);
int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_4_rb__ba59,1,bind); FAILTEST(alt2_2); it=rb_ary_new3(0); arg0=it;it=bind_aget(bind,4/*start*/); arg1=it;it=rb_funcall(self,sy_Left_Factor_bind_lb_3_rb__pl__4c4b,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_2); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
 int oldpos3=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
 it=rb_funcall(self,sy_Left_Factor_bind_lb_4_rb__eq__07a6,1,bind); ame_setcut(self,Qtrue);  it=Amethyst_fails(self ); FAILTEST(alt3_2); 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt2_3;}
   it=Amethyst_empty(self ); FAILTEST(alt3_3); 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos3); goto alt2_3;
 accept3:;
 it=rb_funcall(self,sy_Left_Factor_bind_lb_5_rb__pl__1ee4,1,bind);  arg0=it;it=rb_funcall(self,sy_Left_Factor_first_lp_bi_80ce,1,bind);  arg1=it;it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_6_rb__ef11,1,bind);  arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); FAILTEST(alt2_3); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass2;}
   it=Amethyst_eof(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Left_Factor_Or_lb__ti__lp_bin_c6d5,1,bind);  bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto pass2;
 accept1:;
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*_result*/,it);
it=bind_aget(bind,10/*_result*/);
return it;
fail: return failobj; }
void Init_left_factor_c(){ 
 cls_Left_Factor=rb_define_class("Left_Factor",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Or=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Or);
switchhashLeft_Factor1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashLeft_Factor1);
switchhashLeft_Factor2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashLeft_Factor2);
switchhashLeft_Factor3=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashLeft_Factor3);
switchhashTraverser_Clone21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashTraverser_Clone21);
sy_Left_Factor_Bind_lb_src_4a7e=rb_intern("Left_Factor_Bind_lb_src_4a7e");
sy_Left_Factor_Or_lb__ti__lp_bin_1272=rb_intern("Left_Factor_Or_lb__ti__lp_bin_1272");
sy_Left_Factor_Or_lb__ti__lp_bin_c6d5=rb_intern("Left_Factor_Or_lb__ti__lp_bin_c6d5");
sy_Left_Factor_Seq_lb__lb_bin_f9f4=rb_intern("Left_Factor_Seq_lb__lb_bin_f9f4");
sy_Left_Factor__append_lp__088f=rb_intern("Left_Factor__append_lp__088f");
sy_Left_Factor__append_lp__324d=rb_intern("Left_Factor__append_lp__324d");
sy_Left_Factor__append_lp__37c5=rb_intern("Left_Factor__append_lp__37c5");
sy_Left_Factor__append_lp__473a=rb_intern("Left_Factor__append_lp__473a");
sy_Left_Factor__append_lp__be78=rb_intern("Left_Factor__append_lp__be78");
sy_Left_Factor__append_lp__cbd1=rb_intern("Left_Factor__append_lp__cbd1");
sy_Left_Factor__at_changed_5352=rb_intern("Left_Factor__at_changed_5352");
sy_Left_Factor__at_changed_b885=rb_intern("Left_Factor__at_changed_b885");
sy_Left_Factor__at_changed_c681=rb_intern("Left_Factor__at_changed_c681");
sy_Left_Factor__lb_bind_lb_0_rb__fb2d=rb_intern("Left_Factor__lb_bind_lb_0_rb__fb2d");
sy_Left_Factor__lb_bind_lb_2_rb__5b5d=rb_intern("Left_Factor__lb_bind_lb_2_rb__5b5d");
sy_Left_Factor__lb_bind_lb_6_rb__ef11=rb_intern("Left_Factor__lb_bind_lb_6_rb__ef11");
sy_Left_Factor__lp_bind_lb_1_rb__68a2=rb_intern("Left_Factor__lp_bind_lb_1_rb__68a2");
sy_Left_Factor__lp_bind_lb_4_rb__ba59=rb_intern("Left_Factor__lp_bind_lb_4_rb__ba59");
sy_Left_Factor__lp_bind_lb_4_rb__d863=rb_intern("Left_Factor__lp_bind_lb_4_rb__d863");
sy_Left_Factor__lp_src_dot_ins_6a75=rb_intern("Left_Factor__lp_src_dot_ins_6a75");
sy_Left_Factor_bind_lb_1_rb__eq__7142=rb_intern("Left_Factor_bind_lb_1_rb__eq__7142");
sy_Left_Factor_bind_lb_2_rb__pl__9bc3=rb_intern("Left_Factor_bind_lb_2_rb__pl__9bc3");
sy_Left_Factor_bind_lb_3_rb__pl__4c4b=rb_intern("Left_Factor_bind_lb_3_rb__pl__4c4b");
sy_Left_Factor_bind_lb_3_rb__pl__a9ae=rb_intern("Left_Factor_bind_lb_3_rb__pl__a9ae");
sy_Left_Factor_bind_lb_4_rb__eq__07a6=rb_intern("Left_Factor_bind_lb_4_rb__eq__07a6");
sy_Left_Factor_bind_lb_5_rb__lt__dccc=rb_intern("Left_Factor_bind_lb_5_rb__lt__dccc");
sy_Left_Factor_bind_lb_5_rb__pl__1ee4=rb_intern("Left_Factor_bind_lb_5_rb__pl__1ee4");
sy_Left_Factor_first_lp_bi_16f8=rb_intern("Left_Factor_first_lp_bi_16f8");
sy_Left_Factor_first_lp_bi_80ce=rb_intern("Left_Factor_first_lp_bi_80ce");
sy_Left_Factor_first_lp_bi_a16c=rb_intern("Left_Factor_first_lp_bi_a16c");
sy_Left_Factor_if_sp_bind_lb__b5ce=rb_intern("Left_Factor_if_sp_bind_lb__b5ce");
sy_Left_Factor_src_25d9=rb_intern("Left_Factor_src_25d9");
sy_Left_Factor_src_dot_expr_ef77=rb_intern("Left_Factor_src_dot_expr_ef77");
rb_define_method(cls_Left_Factor,"binds",Left_Factor_binds,2);
rb_define_method(cls_Left_Factor,"factor",Left_Factor_factor,3);
rb_define_method(cls_Left_Factor,"first",Left_Factor_first,1);
rb_define_method(cls_Left_Factor,"rest",Left_Factor_rest,2);
rb_define_method(cls_Left_Factor,"root",Left_Factor_root,0);
rb_define_method(cls_Left_Factor,"traverse",Left_Factor_traverse,0);
rb_define_method(cls_Left_Factor,"traverse_item",Left_Factor_traverse_item,0);
rb_define_method(cls_Left_Factor,"visit",Left_Factor_visit,0);
 rb_eval_string("testversionleft_factor('352908f4d113c28e5a2819d1b9eee7d7')");}
