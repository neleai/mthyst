#include "cthyst.h"
VALUE cls_Detect_Implicit_Variables;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Detect_Implicit_Variables_root(VALUE self );
VALUE Detect_Implicit_Variables_traverse(VALUE self );
VALUE Detect_Implicit_Variables_traverse_item(VALUE self );
VALUE Detect_Implicit_Variables_visit(VALUE self );
static VALUE c_AmethystAST;
static VALUE c_Apply;
static VALUE c_Array;
static VALUE sy_Detect_Implicit_Variables__append_lp__4de3;
static VALUE sy_Detect_Implicit_Variables__at_vars_a187;
static VALUE sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8;
static VALUE sy_Detect_Implicit_Variables__at_vars_lb_bi_edce;
static VALUE sy_Detect_Implicit_Variables__lp_src_dot_ins_a413;
VALUE Detect_Implicit_Variables_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8,1,bind);   it=Detect_Implicit_Variables_traverse(self ); FAILTEST(fail);it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_a187,1,bind);  bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Implicit_Variables_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Detect_Implicit_Variables__lp_src_dot_ins_a413,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_Implicit_Variables_traverse_item(self ); FAILTEST(break2); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Implicit_Variables_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Detect_Implicit_Variables_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Array; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Detect_Implicit_Variables_traverse_item(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_AmethystAST; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Implicit_Variables_traverse(self ); FAILTEST(pass2); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_4;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5); bind_aset(bind,0/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Detect_Implicit_Variables_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*name*/,it);
it=rb_funcall(self,sy_Detect_Implicit_Variables__at_vars_lb_bi_edce,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Implicit_Variables__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Add_Implicit_Variables;
VALUE Add_Implicit_Variables_root(VALUE self );
VALUE Add_Implicit_Variables_traverse(VALUE self );
VALUE Add_Implicit_Variables_traverse_item(VALUE self );
VALUE Add_Implicit_Variables_visit(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
static VALUE c_AmethystAST;
static VALUE c_Apply;
static VALUE c_Array;
static VALUE c_Rule;
static VALUE sy_Add_Implicit_Variables_Append_lb_b_e8d4;
static VALUE sy_Add_Implicit_Variables__Bind_lp_bi_d3b8;
static VALUE sy_Add_Implicit_Variables__at_changed_5352;
static VALUE sy_Add_Implicit_Variables__at_changed_b885;
static VALUE sy_Add_Implicit_Variables__at_changed_c681;
static VALUE sy_Add_Implicit_Variables__at_locals_eq__545d;
static VALUE sy_Add_Implicit_Variables__at_vars_eq_bi_4318;
static VALUE sy_Add_Implicit_Variables__lp__at_vars_lb_b_2b5e;
static VALUE sy_Add_Implicit_Variables__lp__at_vars_lb_b_bb92;
static VALUE sy_Add_Implicit_Variables__lp_bind_lb_2_rb__6693;
static VALUE sy_Add_Implicit_Variables__lp_src_dot_ins_6a75;
static VALUE sy_Add_Implicit_Variables_bind_lb_2_rb__dot__bd50;
static VALUE sy_Add_Implicit_Variables_bind_lb_3_rb__lt__bb51;
static VALUE sy_Add_Implicit_Variables_if_sp_bind_lb__f1e9;
static VALUE sy_Add_Implicit_Variables_src_25d9;
VALUE Add_Implicit_Variables_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__at_vars_eq_bi_4318,1,bind);  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Add_Implicit_Variables__at_locals_eq__545d,1,bind);   it=Add_Implicit_Variables_traverse(self ); FAILTEST(pass1); bind_aset(bind,2/*t*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_2_rb__dot__bd50,1,bind);  bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Add_Implicit_Variables_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_b885,1,bind);   it=Add_Implicit_Variables_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break2;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Add_Implicit_Variables_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Add_Implicit_Variables_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Add_Implicit_Variables_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Array; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Add_Implicit_Variables_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_AmethystAST; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Add_Implicit_Variables_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_4;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_5); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Add_Implicit_Variables_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*name*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Add_Implicit_Variables__lp__at_vars_lb_b_bb92,1,bind); FAILTEST(pass1);it=rb_funcall(self,sy_Add_Implicit_Variables__Bind_lp_bi_d3b8,1,bind);  bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,0/*autovar*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,2/*name*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=rb_funcall(self,sy_Add_Implicit_Variables__lp__at_vars_lb_b_2b5e,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Add_Implicit_Variables_Append_lb_b_e8d4,1,bind);  bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_3;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,4/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

return it;
fail: return failobj; }
void Init_implicit_variables_c(){ 
 cls_Detect_Implicit_Variables=rb_define_class("Detect_Implicit_Variables",rb_const_get(rb_cObject,rb_intern("Visitor"))); 
failobj=rb_eval_string("FAIL");
c_AmethystAST=rb_const_get(rb_cObject, rb_intern("AmethystAST"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_AmethystAST);
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Array=rb_const_get(rb_cObject, rb_intern("Array"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Array);
sy_Detect_Implicit_Variables__append_lp__4de3=rb_intern("Detect_Implicit_Variables__append_lp__4de3");
sy_Detect_Implicit_Variables__at_vars_a187=rb_intern("Detect_Implicit_Variables__at_vars_a187");
sy_Detect_Implicit_Variables__at_vars_eq_Ha_dec8=rb_intern("Detect_Implicit_Variables__at_vars_eq_Ha_dec8");
sy_Detect_Implicit_Variables__at_vars_lb_bi_edce=rb_intern("Detect_Implicit_Variables__at_vars_lb_bi_edce");
sy_Detect_Implicit_Variables__lp_src_dot_ins_a413=rb_intern("Detect_Implicit_Variables__lp_src_dot_ins_a413");
rb_define_method(cls_Detect_Implicit_Variables,"root",Detect_Implicit_Variables_root,0);
rb_define_method(cls_Detect_Implicit_Variables,"traverse",Detect_Implicit_Variables_traverse,0);
rb_define_method(cls_Detect_Implicit_Variables,"traverse_item",Detect_Implicit_Variables_traverse_item,0);
rb_define_method(cls_Detect_Implicit_Variables,"visit",Detect_Implicit_Variables_visit,0);

 cls_Add_Implicit_Variables=rb_define_class("Add_Implicit_Variables",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_AmethystAST=rb_const_get(rb_cObject, rb_intern("AmethystAST"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_AmethystAST);
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Array=rb_const_get(rb_cObject, rb_intern("Array"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Array);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
sy_Add_Implicit_Variables_Append_lb_b_e8d4=rb_intern("Add_Implicit_Variables_Append_lb_b_e8d4");
sy_Add_Implicit_Variables__Bind_lp_bi_d3b8=rb_intern("Add_Implicit_Variables__Bind_lp_bi_d3b8");
sy_Add_Implicit_Variables__at_changed_5352=rb_intern("Add_Implicit_Variables__at_changed_5352");
sy_Add_Implicit_Variables__at_changed_b885=rb_intern("Add_Implicit_Variables__at_changed_b885");
sy_Add_Implicit_Variables__at_changed_c681=rb_intern("Add_Implicit_Variables__at_changed_c681");
sy_Add_Implicit_Variables__at_locals_eq__545d=rb_intern("Add_Implicit_Variables__at_locals_eq__545d");
sy_Add_Implicit_Variables__at_vars_eq_bi_4318=rb_intern("Add_Implicit_Variables__at_vars_eq_bi_4318");
sy_Add_Implicit_Variables__lp__at_vars_lb_b_2b5e=rb_intern("Add_Implicit_Variables__lp__at_vars_lb_b_2b5e");
sy_Add_Implicit_Variables__lp__at_vars_lb_b_bb92=rb_intern("Add_Implicit_Variables__lp__at_vars_lb_b_bb92");
sy_Add_Implicit_Variables__lp_bind_lb_2_rb__6693=rb_intern("Add_Implicit_Variables__lp_bind_lb_2_rb__6693");
sy_Add_Implicit_Variables__lp_src_dot_ins_6a75=rb_intern("Add_Implicit_Variables__lp_src_dot_ins_6a75");
sy_Add_Implicit_Variables_bind_lb_2_rb__dot__bd50=rb_intern("Add_Implicit_Variables_bind_lb_2_rb__dot__bd50");
sy_Add_Implicit_Variables_bind_lb_3_rb__lt__bb51=rb_intern("Add_Implicit_Variables_bind_lb_3_rb__lt__bb51");
sy_Add_Implicit_Variables_if_sp_bind_lb__f1e9=rb_intern("Add_Implicit_Variables_if_sp_bind_lb__f1e9");
sy_Add_Implicit_Variables_src_25d9=rb_intern("Add_Implicit_Variables_src_25d9");
rb_define_method(cls_Add_Implicit_Variables,"root",Add_Implicit_Variables_root,0);
rb_define_method(cls_Add_Implicit_Variables,"traverse",Add_Implicit_Variables_traverse,0);
rb_define_method(cls_Add_Implicit_Variables,"traverse_item",Add_Implicit_Variables_traverse_item,0);
rb_define_method(cls_Add_Implicit_Variables,"visit",Add_Implicit_Variables_visit,0);
 rb_eval_string("testversionimplicit_variables('6657ca87f358913d0b7d45d649a8407d')");}
