#include "cthyst.h"
VALUE cls_Detect_Implicit_Variables;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Detect_Implicit_Variables_root(VALUE self );
VALUE Detect_Implicit_Variables_traverse(VALUE self );
VALUE Detect_Implicit_Variables_traverse_item(VALUE self );
VALUE Detect_Implicit_Variables_visit(VALUE self );
VALUE switchhashVisitor1;
static VALUE c_Apply;
static VALUE sy_Detect_Implicit_Variables__append_lp_bind2;
static VALUE sy_Detect_Implicit_Variables__append_lp_bind3;
static VALUE sy_Detect_Implicit_Variables__append_lp_bind;
static VALUE sy_Detect_Implicit_Variables__at_vars;
static VALUE sy_Detect_Implicit_Variables__at_vars_eq_Hash_dot_n;
static VALUE sy_Detect_Implicit_Variables__at_vars_lb_bind_lb_1;
static VALUE sy_Detect_Implicit_Variables__lp_src_dot_instanc;
VALUE Detect_Implicit_Variables_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_eq_Hash_dot_n,1,bind);   it=Detect_Implicit_Variables_traverse(self ); FAILTEST(fail);it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars,1,bind);  bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Implicit_Variables_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(9);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp_bind3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_Detect_Implicit_Variables__lp_src_dot_instanc,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_Implicit_Variables_traverse_item(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp_bind2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Implicit_Variables_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashVisitor1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Implicit_Variables_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Implicit_Variables_traverse(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
 break;case 1:; int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Implicit_Variables_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Detect_Implicit_Variables_traverse_item(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp_bind2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_3;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto fail;
 accept2:;
 break;case 2:; int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Implicit_Variables_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;}it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Detect_Implicit_Variables_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*name*/,it);
it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_lb_bind_lb_1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp_bind,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }VALUE cls_Add_Implicit_Variables;
VALUE Add_Implicit_Variables_root(VALUE self );
VALUE Add_Implicit_Variables_traverse(VALUE self );
VALUE Add_Implicit_Variables_traverse_item(VALUE self );
VALUE Add_Implicit_Variables_visit(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE switchhashTraverser_Clone21;
static VALUE c_Apply;
static VALUE c_Rule;
static VALUE sy_Add_Implicit_Variables_Append_lb_bind_lb_;
static VALUE sy_Add_Implicit_Variables__Bind_lp_bind_lb_3;
static VALUE sy_Add_Implicit_Variables__append_lp_bind2;
static VALUE sy_Add_Implicit_Variables__append_lp_bind3;
static VALUE sy_Add_Implicit_Variables__append_lp_bind4;
static VALUE sy_Add_Implicit_Variables__append_lp_bind5;
static VALUE sy_Add_Implicit_Variables__append_lp_bind;
static VALUE sy_Add_Implicit_Variables__at_changed;
static VALUE sy_Add_Implicit_Variables__at_changed_eq_fal;
static VALUE sy_Add_Implicit_Variables__at_changed_eq_tru;
static VALUE sy_Add_Implicit_Variables__at_vars_eq_bind_lb_0;
static VALUE sy_Add_Implicit_Variables__lp__at_vars_lb_bind_lb_2;
static VALUE sy_Add_Implicit_Variables__lp__at_vars_lb_bind_lb_;
static VALUE sy_Add_Implicit_Variables__lp_bind_lb_4_rb_;
static VALUE sy_Add_Implicit_Variables__lp_src_dot_instanc;
static VALUE sy_Add_Implicit_Variables_bind_lb_5_rb__lt__lt_bin;
static VALUE sy_Add_Implicit_Variables_if_sp_bind_lb_5_rb_;
static VALUE sy_Add_Implicit_Variables_src;
VALUE Add_Implicit_Variables_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__at_vars_eq_bind_lb_0,1,bind);  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Add_Implicit_Variables_traverse(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Add_Implicit_Variables_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__append_lp_bind4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed,1,bind);  bind_aset(bind,2/*oldchanged*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables_src,1,bind);  bind_aset(bind,3/*this*/,it);
it=Qnil; bind_aset(bind,4/*clon*/,it);
it=Qfalse; bind_aset(bind,5/*changed*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__lp_src_dot_instanc,1,bind);  bind_aset(bind,6/*autovar*/,it);
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
it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_eq_fal,1,bind);   it=Add_Implicit_Variables_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__lp_bind_lb_4_rb_,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__append_lp_bind5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Add_Implicit_Variables_if_sp_bind_lb_5_rb_,1,bind);  bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Add_Implicit_Variables_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Add_Implicit_Variables_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_eq_tru,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Add_Implicit_Variables_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
   it=Add_Implicit_Variables_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_eq_tru,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Add_Implicit_Variables_traverse_item(self ); FAILTEST(break1); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_5_rb__lt__lt_bin,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__append_lp_bind3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/);it=bind_aget(bind,5/*ar*/); bind_aset(bind,9/*autovar*/,it);
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
   it=Add_Implicit_Variables_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_eq_tru,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Add_Implicit_Variables_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*name*/,it);
it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__append_lp_bind,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,4/*autovar*/);it=rb_funcall(self,sy_Add_Implicit_Variables__lp__at_vars_lb_bind_lb_,1,bind); FAILTEST(pass1);it=rb_funcall(self,sy_Add_Implicit_Variables__Bind_lp_bind_lb_3,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*name*/,it);
it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__append_lp_bind2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,9/*autovar*/);it=rb_funcall(self,sy_Add_Implicit_Variables__lp__at_vars_lb_bind_lb_2,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Add_Implicit_Variables_Append_lb_bind_lb_,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_3;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,7/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,7/*_result*/);
return it;
fail: return failobj; }
void Init_implicit_variables_c(){ 
 cls_Detect_Implicit_Variables=rb_define_class("Detect_Implicit_Variables",rb_const_get(rb_cObject,rb_intern("Visitor"))); 
failobj=rb_eval_string("FAIL");
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
switchhashVisitor1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashVisitor1);
sy_Detect_Implicit_Variables__append_lp_bind2=rb_intern("Detect_Implicit_Variables__append_lp_bind2");
sy_Detect_Implicit_Variables__append_lp_bind3=rb_intern("Detect_Implicit_Variables__append_lp_bind3");
sy_Detect_Implicit_Variables__append_lp_bind=rb_intern("Detect_Implicit_Variables__append_lp_bind");
sy_Detect_Implicit_Variables__at_vars=rb_intern("Detect_Implicit_Variables__at_vars");
sy_Detect_Implicit_Variables__at_vars_eq_Hash_dot_n=rb_intern("Detect_Implicit_Variables__at_vars_eq_Hash_dot_n");
sy_Detect_Implicit_Variables__at_vars_lb_bind_lb_1=rb_intern("Detect_Implicit_Variables__at_vars_lb_bind_lb_1");
sy_Detect_Implicit_Variables__lp_src_dot_instanc=rb_intern("Detect_Implicit_Variables__lp_src_dot_instanc");
rb_define_method(cls_Detect_Implicit_Variables,"root",Detect_Implicit_Variables_root,0);
rb_define_method(cls_Detect_Implicit_Variables,"traverse",Detect_Implicit_Variables_traverse,0);
rb_define_method(cls_Detect_Implicit_Variables,"traverse_item",Detect_Implicit_Variables_traverse_item,0);
rb_define_method(cls_Detect_Implicit_Variables,"visit",Detect_Implicit_Variables_visit,0);

 cls_Add_Implicit_Variables=rb_define_class("Add_Implicit_Variables",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashTraverser_Clone21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashTraverser_Clone21);
sy_Add_Implicit_Variables_Append_lb_bind_lb_=rb_intern("Add_Implicit_Variables_Append_lb_bind_lb_");
sy_Add_Implicit_Variables__Bind_lp_bind_lb_3=rb_intern("Add_Implicit_Variables__Bind_lp_bind_lb_3");
sy_Add_Implicit_Variables__append_lp_bind2=rb_intern("Add_Implicit_Variables__append_lp_bind2");
sy_Add_Implicit_Variables__append_lp_bind3=rb_intern("Add_Implicit_Variables__append_lp_bind3");
sy_Add_Implicit_Variables__append_lp_bind4=rb_intern("Add_Implicit_Variables__append_lp_bind4");
sy_Add_Implicit_Variables__append_lp_bind5=rb_intern("Add_Implicit_Variables__append_lp_bind5");
sy_Add_Implicit_Variables__append_lp_bind=rb_intern("Add_Implicit_Variables__append_lp_bind");
sy_Add_Implicit_Variables__at_changed=rb_intern("Add_Implicit_Variables__at_changed");
sy_Add_Implicit_Variables__at_changed_eq_fal=rb_intern("Add_Implicit_Variables__at_changed_eq_fal");
sy_Add_Implicit_Variables__at_changed_eq_tru=rb_intern("Add_Implicit_Variables__at_changed_eq_tru");
sy_Add_Implicit_Variables__at_vars_eq_bind_lb_0=rb_intern("Add_Implicit_Variables__at_vars_eq_bind_lb_0");
sy_Add_Implicit_Variables__lp__at_vars_lb_bind_lb_2=rb_intern("Add_Implicit_Variables__lp__at_vars_lb_bind_lb_2");
sy_Add_Implicit_Variables__lp__at_vars_lb_bind_lb_=rb_intern("Add_Implicit_Variables__lp__at_vars_lb_bind_lb_");
sy_Add_Implicit_Variables__lp_bind_lb_4_rb_=rb_intern("Add_Implicit_Variables__lp_bind_lb_4_rb_");
sy_Add_Implicit_Variables__lp_src_dot_instanc=rb_intern("Add_Implicit_Variables__lp_src_dot_instanc");
sy_Add_Implicit_Variables_bind_lb_5_rb__lt__lt_bin=rb_intern("Add_Implicit_Variables_bind_lb_5_rb__lt__lt_bin");
sy_Add_Implicit_Variables_if_sp_bind_lb_5_rb_=rb_intern("Add_Implicit_Variables_if_sp_bind_lb_5_rb_");
sy_Add_Implicit_Variables_src=rb_intern("Add_Implicit_Variables_src");
rb_define_method(cls_Add_Implicit_Variables,"root",Add_Implicit_Variables_root,0);
rb_define_method(cls_Add_Implicit_Variables,"traverse",Add_Implicit_Variables_traverse,0);
rb_define_method(cls_Add_Implicit_Variables,"traverse_item",Add_Implicit_Variables_traverse_item,0);
rb_define_method(cls_Add_Implicit_Variables,"visit",Add_Implicit_Variables_visit,0);
 rb_eval_string("testversionimplicit_variables('727995f0265d4dcd629927ff58542659')");}
