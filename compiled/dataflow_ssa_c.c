#include "cthyst.h"
VALUE cls_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Dataflow_root(VALUE self );
VALUE Dataflow_traverse(VALUE self );
VALUE Dataflow_traverse_item(VALUE self );
VALUE Dataflow_vars_in(VALUE self );
VALUE Dataflow_visit(VALUE self );
VALUE switchhashDataflow1;
VALUE switchhashDataflow2;
VALUE switchhashTraverser_Clone21;
static VALUE c_Rule;
static VALUE sy_Dataflow_Act_lb_bind;
static VALUE sy_Dataflow_Apply_lb__ti_b;
static VALUE sy_Dataflow_Lookahea;
static VALUE sy_Dataflow_Many_dot_cre;
static VALUE sy_Dataflow_Or_lb__ti_bind;
static VALUE sy_Dataflow_Pass_dot_cre;
static VALUE sy_Dataflow_Switch_lb_;
static VALUE sy_Dataflow__append_lp_10;
static VALUE sy_Dataflow__append_lp_11;
static VALUE sy_Dataflow__append_lp_12;
static VALUE sy_Dataflow__append_lp_13;
static VALUE sy_Dataflow__append_lp_14;
static VALUE sy_Dataflow__append_lp_15;
static VALUE sy_Dataflow__append_lp_16;
static VALUE sy_Dataflow__append_lp_17;
static VALUE sy_Dataflow__append_lp_18;
static VALUE sy_Dataflow__append_lp_19;
static VALUE sy_Dataflow__append_lp_20;
static VALUE sy_Dataflow__append_lp_21;
static VALUE sy_Dataflow__append_lp_22;
static VALUE sy_Dataflow__append_lp_23;
static VALUE sy_Dataflow__append_lp_24;
static VALUE sy_Dataflow__append_lp_25;
static VALUE sy_Dataflow__append_lp_26;
static VALUE sy_Dataflow__append_lp_27;
static VALUE sy_Dataflow__append_lp_2;
static VALUE sy_Dataflow__append_lp_3;
static VALUE sy_Dataflow__append_lp_4;
static VALUE sy_Dataflow__append_lp_5;
static VALUE sy_Dataflow__append_lp_6;
static VALUE sy_Dataflow__append_lp_7;
static VALUE sy_Dataflow__append_lp_8;
static VALUE sy_Dataflow__append_lp_9;
static VALUE sy_Dataflow__append_lp_;
static VALUE sy_Dataflow__at_bnding_eq_;
static VALUE sy_Dataflow__at_changed2;
static VALUE sy_Dataflow__at_changed3;
static VALUE sy_Dataflow__at_changed;
static VALUE sy_Dataflow__at_marked_lt_2;
static VALUE sy_Dataflow__at_marked_lt_3;
static VALUE sy_Dataflow__at_marked_lt_;
static VALUE sy_Dataflow__at_oldssan2;
static VALUE sy_Dataflow__at_oldssan;
static VALUE sy_Dataflow__lp_bind_lb_4_rb_;
static VALUE sy_Dataflow__lp_src_dot_ins;
static VALUE sy_Dataflow_bind_end;
static VALUE sy_Dataflow_bind_lb_0_rb__eq_;
static VALUE sy_Dataflow_bind_lb_41_rb_;
static VALUE sy_Dataflow_bind_lb_4_rb__dot_;
static VALUE sy_Dataflow_bind_lb_58_rb_;
static VALUE sy_Dataflow_bind_lb_5_rb__lt_;
static VALUE sy_Dataflow_bind_lb_6_rb__dot_;
static VALUE sy_Dataflow_bind_lb_8_rb__dot_2;
static VALUE sy_Dataflow_bind_lb_8_rb__dot_;
static VALUE sy_Dataflow_if_sp_bind_lb_;
static VALUE sy_Dataflow_many_end;
static VALUE sy_Dataflow_n_eq_Result;
static VALUE sy_Dataflow_oldssanu;
static VALUE sy_Dataflow_or_end_lp_b;
static VALUE sy_Dataflow_src;
static VALUE sy_Dataflow_src_dot_args;
static VALUE sy_Dataflow_src_dot_body2;
static VALUE sy_Dataflow_src_dot_body;
static VALUE sy_Dataflow_src_dot_reac;
static VALUE sy_Dataflow_src_dot_to;
static VALUE sy_Dataflow_src_dot_var;
static VALUE sy_Dataflow_src_dot_vars;
static VALUE sy_Dataflow_ssanum_lp_s;
static VALUE sy_Dataflow_ssanums_dot_;
VALUE Dataflow_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Dataflow_src,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow__at_bnding_eq_,1,bind); it=rb_funcall(self,sy_Dataflow_src_dot_args,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,6/*var*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto pass3;
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
it=rb_funcall(self,sy_Dataflow_bind_lb_6_rb__dot_,1,bind); it=rb_funcall(self,sy_Dataflow_src_dot_body,1,bind);  bind_aset(bind,7/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,7/*autovar*/);ptr->len=1;
   it=Dataflow_traverse_item(self ); FAILTEST(pass5); bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto pass2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*body*/,it);
it=rb_funcall(self,sy_Dataflow_src_dot_body2,1,bind); it=rb_funcall(self,sy_Dataflow_src_dot_reac,1,bind); it=rb_funcall(self,sy_Dataflow_src,1,bind);  bind_aset(bind,10/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*_result*/,it);
it=bind_aget(bind,12/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_26,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_Dataflow__at_changed2,1,bind);  bind_aset(bind,2/*oldchanged*/,it);
it=rb_funcall(self,sy_Dataflow_src,1,bind);  bind_aset(bind,3/*this*/,it);
it=Qnil; bind_aset(bind,4/*clon*/,it);
it=Qfalse; bind_aset(bind,5/*changed*/,it);
it=rb_funcall(self,sy_Dataflow__lp_src_dot_ins,1,bind);  bind_aset(bind,6/*autovar*/,it);
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
it=rb_funcall(self,sy_Dataflow__at_changed3,1,bind);   it=Dataflow_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Dataflow__lp_bind_lb_4_rb_,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_27,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Dataflow_if_sp_bind_lb_,1,bind);  bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Dataflow_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Dataflow_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
   it=Dataflow_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_5_rb__lt_,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_25,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/);it=bind_aget(bind,5/*ar*/); bind_aset(bind,9/*autovar*/,it);
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
   it=Dataflow_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_vars_in(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(44);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_0_rb__eq_,1,bind); it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDataflow1,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src,1,bind);  bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_13,1,bind); it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_14,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,2/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,9/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Dataflow_vars_in(self ); FAILTEST(pass2); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_15,1,bind); it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,9/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto break1;
 accept2:;
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,13/*autovar*/,it);
int oldpos5=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,13/*autovar*/); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Dataflow_vars_in(self ); FAILTEST(pass3); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_16,1,bind); it=bind_aget(bind,15/*autovar*/); bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt3_2;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos5);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos5); goto break1;
 accept3:;
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,17/*autovar*/,it);
int oldpos6=ame_getpos(self);
alt4_1: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,17/*autovar*/); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src,1,bind);  bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_17,1,bind); it=rb_ary_new3(0); bind_aset(bind,20/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_18,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,20/*autovar*/); bind_aset(bind,22/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt4_2;
it=bind_aget(bind,22/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
alt4_2: ame_setpos(self,oldpos6);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,17/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept4;
  alt4_3:  ame_setpos(self,oldpos6); goto break1;
 accept4:;
 break;case 4:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,23/*autovar*/,it);
int oldpos8=ame_getpos(self);
alt5_1: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,23/*autovar*/); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src,1,bind);  bind_aset(bind,25/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_19,1,bind); it=rb_funcall(self,sy_Dataflow__at_marked_lt_3,1,bind); it=rb_ary_new3(0); bind_aset(bind,26/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,27/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_20,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,26/*autovar*/); bind_aset(bind,28/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt5_2;
it=bind_aget(bind,28/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
alt5_2: ame_setpos(self,oldpos8);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,23/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept5;
  alt5_3:  ame_setpos(self,oldpos8); goto break1;
 accept5:;
 break;case 5:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,29/*autovar*/,it);
int oldpos10=ame_getpos(self);
alt6_1: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,29/*autovar*/); bind_aset(bind,30/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,30/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src,1,bind);  bind_aset(bind,31/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_21,1,bind); it=rb_funcall(self,sy_Dataflow__at_marked_lt_3,1,bind); it=rb_ary_new3(0); bind_aset(bind,32/*autovar*/,it);
int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,33/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=bind_aget(bind,32/*autovar*/); bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt6_2;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept6;
alt6_2: ame_setpos(self,oldpos10);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,29/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept6;
  alt6_3:  ame_setpos(self,oldpos10); goto break1;
 accept6:;
 break;case 6:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,35/*autovar*/,it);
int oldpos12=ame_getpos(self);
alt7_1: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,35/*autovar*/); bind_aset(bind,36/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,36/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass7);it=rb_funcall(self,sy_Dataflow_src,1,bind);  bind_aset(bind,37/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_22,1,bind); it=bind_aget(bind,37/*autovar*/); bind_aset(bind,38/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt7_2;
it=bind_aget(bind,38/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept7;
alt7_2: ame_setpos(self,oldpos12);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,35/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept7;
  alt7_3:  ame_setpos(self,oldpos12); goto break1;
 accept7:;
 break;case 7:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,39/*autovar*/,it);
int oldpos13=ame_getpos(self);
alt8_1: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,39/*autovar*/); bind_aset(bind,40/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,40/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src,1,bind);  bind_aset(bind,41/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_23,1,bind); it=bind_aget(bind,41/*autovar*/); bind_aset(bind,42/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt8_2;
it=bind_aget(bind,42/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept8;
alt8_2: ame_setpos(self,oldpos13);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 it=bind_aget(bind,39/*autovar*/); bind_aset(bind,8/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept8;
  alt8_3:  ame_setpos(self,oldpos13); goto break1;
 accept8:;
 break;case 8:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,8/*autovar*/,it);
 break;}it=rb_funcall(self,sy_Dataflow__append_lp_24,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,1/*autovar*/);it=bind_aget(bind,0/*ary*/); bind_aset(bind,43/*_result*/,it);
it=bind_aget(bind,43/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(65);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*t*/,it);
unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDataflow2,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,0/*t*/,it);
it=rb_funcall(self,sy_Dataflow_Act_lb_bind,1,bind);  bind_aset(bind,4/*act*/,it);
it=rb_funcall(self,sy_Dataflow__at_marked_lt_,1,bind); it=rb_funcall(self,sy_Dataflow_bind_lb_4_rb__dot_,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Dataflow_vars_in(self ); FAILTEST(pass3); bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*var*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=rb_funcall(self,sy_Dataflow_bind_lb_8_rb__dot_,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;case 10:;   it=Amethyst_fails(self ); FAILTEST(fail); break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,12/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break2); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,12/*autovar*/); bind_aset(bind,0/*t*/,it);
it=rb_funcall(self,sy_Dataflow_Apply_lb__ti_b,1,bind);  bind_aset(bind,14/*app*/,it);
it=bind_aget(bind,14/*app*/); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,15/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Dataflow_vars_in(self ); FAILTEST(pass6); bind_aset(bind,8/*var*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto pass5;
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto pass4;
it=rb_funcall(self,sy_Dataflow_bind_lb_8_rb__dot_2,1,bind); it=bind_aget(bind,14/*app*/); bind_aset(bind,17/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto fail;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,19/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,19/*autovar*/);  it=Dataflow_traverse(self ); FAILTEST(pass7); bind_aset(bind,21/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,21/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,22/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,23/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,22/*autovar*/);it=rb_funcall(self,sy_Dataflow_bind_end,1,bind);  bind_aset(bind,24/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto pass7;
it=bind_aget(bind,24/*autovar*/); bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto fail;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;case 3:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,27/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,28/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,27/*autovar*/);it=rb_funcall(self,sy_Dataflow_ssanum_lp_s,1,bind);  bind_aset(bind,29/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto fail;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;case 4:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,30/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,30/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_oldssanu,1,bind);  bind_aset(bind,31/*old*/,it);
it=rb_ary_new3(0); bind_aset(bind,32/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break6); bind_aset(bind,33/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,32/*autovar*/); bind_aset(bind,0/*t*/,it);
it=rb_funcall(self,sy_Dataflow__at_oldssan,1,bind); it=rb_funcall(self,sy_Dataflow_Lookahea,1,bind);  bind_aset(bind,34/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto fail;
it=bind_aget(bind,34/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;case 5:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,35/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,35/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_ssanums_dot_,1,bind);  bind_aset(bind,36/*prev*/,it);
it=rb_ary_new3(0); bind_aset(bind,37/*autovar*/,it);
int oldpos7; while(1){oldpos7=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break7); bind_aset(bind,38/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_8,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=bind_aget(bind,37/*autovar*/); bind_aset(bind,0/*t*/,it);
it=rb_funcall(self,sy_Dataflow_many_end,1,bind); it=rb_funcall(self,sy_Dataflow_Many_dot_cre,1,bind);  bind_aset(bind,39/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto fail;
it=bind_aget(bind,39/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;case 6:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,40/*autovar*/,it);
cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,40/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,41/*join*/,it);
it=rb_funcall(self,sy_Dataflow_oldssanu,1,bind);  bind_aset(bind,31/*old*/,it);
it=rb_ary_new3(0); bind_aset(bind,42/*autovar*/,it);
int oldpos8; while(1){oldpos8=ame_getpos(self); it=rb_funcall(self,sy_Dataflow__at_oldssan2,1,bind);   it=Dataflow_traverse_item(self ); FAILTEST(break8); bind_aset(bind,43/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_9,1,bind); it=rb_funcall(self,sy_Dataflow_bind_lb_41_rb_,1,bind);  bind_aset(bind,44/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_10,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=bind_aget(bind,42/*autovar*/);it=rb_funcall(self,sy_Dataflow_or_end_lp_b,1,bind); it=rb_funcall(self,sy_Dataflow_Or_lb__ti_bind,1,bind);  bind_aset(bind,45/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto fail;
it=bind_aget(bind,45/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;case 7:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,46/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,46/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src_dot_to,1,bind);  bind_aset(bind,47/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,47/*autovar*/);ptr->len=1;
   it=Dataflow_traverse_item(self ); FAILTEST(pass14); bind_aset(bind,48/*to*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto pass13;
it=rb_funcall(self,sy_Dataflow_src_dot_var,1,bind);  bind_aset(bind,49/*autovar*/,it);
cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,49/*autovar*/);ptr->len=1;
   it=Dataflow_traverse_item(self ); FAILTEST(pass15); bind_aset(bind,8/*var*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto pass13;
it=rb_funcall(self,sy_Dataflow__at_marked_lt_2,1,bind); it=rb_funcall(self,sy_Dataflow_Pass_dot_cre,1,bind);  bind_aset(bind,50/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto fail;
it=bind_aget(bind,50/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;case 8:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,51/*autovar*/,it);
cstruct oldpass16=*ptr; int fail16=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,51/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src_dot_vars,1,bind);  bind_aset(bind,52/*autovar*/,it);
cstruct oldpass17=*ptr; int fail17=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,52/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass17); bind_aset(bind,53/*autovar*/,it);
cstruct oldpass18=*ptr; int fail18=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,53/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,54/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break9); bind_aset(bind,55/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_11,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,54/*autovar*/); bind_aset(bind,8/*var*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass18);
	goto success18;
	pass18: fail18=1;
	success18: *ptr=oldpass18;
	if(fail18) goto pass17;
  it=Amethyst_eof(self ); FAILTEST(pass17);
	goto success17;
	pass17: fail17=1;
	success17: *ptr=oldpass17;
	if(fail17) goto pass16;
it=rb_funcall(self,sy_Dataflow_n_eq_Result,1,bind);  bind_aset(bind,56/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: *ptr=oldpass16;
	if(fail16) goto fail;
it=bind_aget(bind,56/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;case 9:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,57/*autovar*/,it);
cstruct oldpass19=*ptr; int fail19=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,57/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,58/*alts*/,it);
it=rb_ary_new3(0); bind_aset(bind,41/*join*/,it);
it=rb_funcall(self,sy_Dataflow_oldssanu,1,bind);  bind_aset(bind,31/*old*/,it);
it=rb_ary_new3(0); bind_aset(bind,59/*autovar*/,it);
int oldpos10; while(1){oldpos10=ame_getpos(self); it=rb_funcall(self,sy_Dataflow__at_oldssan2,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break10); bind_aset(bind,60/*autovar*/,it);
cstruct oldpass20=*ptr; int fail20=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,60/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass20); bind_aset(bind,61/*pred*/,it);
  it=Dataflow_traverse_item(self ); FAILTEST(pass20); bind_aset(bind,62/*a*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_58_rb_,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass20);
	goto success20;
	pass20: fail20=1;
	success20: *ptr=oldpass20;
	if(fail20) goto break10;
it=rb_funcall(self,sy_Dataflow_bind_lb_41_rb_,1,bind);  bind_aset(bind,63/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp_12,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos10=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos10); it=bind_aget(bind,59/*autovar*/);it=rb_funcall(self,sy_Dataflow_or_end_lp_b,1,bind); it=rb_funcall(self,sy_Dataflow_Switch_lb_,1,bind);  bind_aset(bind,64/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass19);
	goto success19;
	pass19: fail19=1;
	success19: *ptr=oldpass19;
	if(fail19) goto fail;
it=bind_aget(bind,64/*autovar*/); bind_aset(bind,10/*_result*/,it);
 break;}it=bind_aget(bind,10/*_result*/);
return it;
fail: return failobj; }VALUE cls_Dead_Code_Deleter3;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Dead_Code_Deleter3_root(VALUE self );
VALUE Dead_Code_Deleter3_traverse(VALUE self );
VALUE Dead_Code_Deleter3_traverse_item(VALUE self );
VALUE Dead_Code_Deleter3_visit(VALUE self );
VALUE switchhashDead_Code_Deleter31;
VALUE switchhashDead_Code_Deleter32;
VALUE switchhashTraverser_Clone21;
static VALUE c_Rule;
static VALUE sy_Dead_Code_Deleter3__append_lp_2;
static VALUE sy_Dead_Code_Deleter3__append_lp_3;
static VALUE sy_Dead_Code_Deleter3__append_lp_4;
static VALUE sy_Dead_Code_Deleter3__append_lp_5;
static VALUE sy_Dead_Code_Deleter3__append_lp_6;
static VALUE sy_Dead_Code_Deleter3__append_lp_7;
static VALUE sy_Dead_Code_Deleter3__append_lp_8;
static VALUE sy_Dead_Code_Deleter3__append_lp_;
static VALUE sy_Dead_Code_Deleter3__at_bounded2;
static VALUE sy_Dead_Code_Deleter3__at_bounded;
static VALUE sy_Dead_Code_Deleter3__at_changed2;
static VALUE sy_Dead_Code_Deleter3__at_changed3;
static VALUE sy_Dead_Code_Deleter3__at_changed;
static VALUE sy_Dead_Code_Deleter3__at_reachab2;
static VALUE sy_Dead_Code_Deleter3__at_reachab3;
static VALUE sy_Dead_Code_Deleter3__at_reachab;
static VALUE sy_Dead_Code_Deleter3__lp_;
static VALUE sy_Dead_Code_Deleter3__lp_bind_lb_4_rb_;
static VALUE sy_Dead_Code_Deleter3__lp_src_dot_ins;
static VALUE sy_Dead_Code_Deleter3_bind_lb_5_rb__lt_;
static VALUE sy_Dead_Code_Deleter3_if_sp_bind_lb_;
static VALUE sy_Dead_Code_Deleter3_src;
static VALUE sy_Dead_Code_Deleter3_src_dot_reac;
VALUE Dead_Code_Deleter3_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Dead_Code_Deleter3_src,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab,1,bind); it=rb_funcall(self,sy_Dead_Code_Deleter3_src_dot_reac,1,bind);   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__append_lp_7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed2,1,bind);  bind_aset(bind,2/*oldchanged*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3_src,1,bind);  bind_aset(bind,3/*this*/,it);
it=Qnil; bind_aset(bind,4/*clon*/,it);
it=Qfalse; bind_aset(bind,5/*changed*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_src_dot_ins,1,bind);  bind_aset(bind,6/*autovar*/,it);
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
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed3,1,bind);   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_bind_lb_4_rb_,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__append_lp_8,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Dead_Code_Deleter3_if_sp_bind_lb_,1,bind);  bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
   it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(break1); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3_bind_lb_5_rb__lt_,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__append_lp_6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/);it=bind_aget(bind,5/*ar*/); bind_aset(bind,9/*autovar*/,it);
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
   it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(20);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashDead_Code_Deleter32,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:;case 3:;case 5:;case 6:; unsigned char chr2=FIX2LONG(rb_hash_aref(switchhashDead_Code_Deleter31,rb_obj_class(ame_curobj(self))));  switch(chr2){case 0:;case 1:;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
 break;case 3:;   it=Amethyst_fails(self ); FAILTEST(fail); break;}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dead_Code_Deleter3_src,1,bind);  bind_aset(bind,1/*this*/,it);
it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,2/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_,1,bind);  bind_aset(bind,4/*_result*/,it);
 break;case 1:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,6/*autovar*/);it=rb_funcall(self,sy_Dead_Code_Deleter3_src,1,bind);  bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto fail;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,4/*_result*/,it);
 break;case 2:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,10/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,10/*autovar*/);it=rb_funcall(self,sy_Dead_Code_Deleter3_src,1,bind); it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded,1,bind);   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass3); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,13/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,13/*autovar*/);it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded2,1,bind); it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab2,1,bind);  bind_aset(bind,15/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto pass3;
it=bind_aget(bind,15/*autovar*/); bind_aset(bind,16/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto fail;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,4/*_result*/,it);
 break;case 4:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__append_lp_5,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,18/*autovar*/);it=rb_funcall(self,sy_Dead_Code_Deleter3_src,1,bind);  bind_aset(bind,1/*this*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto fail;
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab3,1,bind);  bind_aset(bind,4/*_result*/,it);
 break;}it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }VALUE cls_Forget_SSA;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Forget_SSA_root(VALUE self );
VALUE Forget_SSA_traverse(VALUE self );
VALUE Forget_SSA_traverse_item(VALUE self );
VALUE Forget_SSA_visit(VALUE self );
VALUE switchhashTraverser_Clone21;
static VALUE c_Local;
static VALUE c_Rule;
static VALUE sy_Forget_SSA__append_lp_2;
static VALUE sy_Forget_SSA__append_lp_3;
static VALUE sy_Forget_SSA__append_lp_4;
static VALUE sy_Forget_SSA__append_lp_;
static VALUE sy_Forget_SSA__at_changed2;
static VALUE sy_Forget_SSA__at_changed3;
static VALUE sy_Forget_SSA__at_changed;
static VALUE sy_Forget_SSA__lp_bind_lb_4_rb_;
static VALUE sy_Forget_SSA__lp_src_dot_ins;
static VALUE sy_Forget_SSA_bind_lb_5_rb__lt_;
static VALUE sy_Forget_SSA_if_sp_bind_lb_;
static VALUE sy_Forget_SSA_src;
static VALUE sy_Forget_SSA_src_dot_unss;
VALUE Forget_SSA_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Forget_SSA_src,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Forget_SSA_traverse(self ); FAILTEST(pass2); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Forget_SSA__append_lp_3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);it=rb_funcall(self,sy_Forget_SSA__at_changed2,1,bind);  bind_aset(bind,2/*oldchanged*/,it);
it=rb_funcall(self,sy_Forget_SSA_src,1,bind);  bind_aset(bind,3/*this*/,it);
it=Qnil; bind_aset(bind,4/*clon*/,it);
it=Qfalse; bind_aset(bind,5/*changed*/,it);
it=rb_funcall(self,sy_Forget_SSA__lp_src_dot_ins,1,bind);  bind_aset(bind,6/*autovar*/,it);
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
it=rb_funcall(self,sy_Forget_SSA__at_changed3,1,bind);   it=Forget_SSA_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,11/*val*/,it);
it=rb_funcall(self,sy_Forget_SSA__lp_bind_lb_4_rb_,1,bind);  bind_aset(bind,12/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break2;
it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Forget_SSA__append_lp_4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,8/*autovar*/);  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Forget_SSA_if_sp_bind_lb_,1,bind);  bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

unsigned char chr1=FIX2LONG(rb_hash_aref(switchhashTraverser_Clone21,rb_obj_class(ame_curobj(self))));  switch(chr1){case 0:; int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Forget_SSA_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Forget_SSA_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
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
   it=Forget_SSA_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=Forget_SSA_traverse_item(self ); FAILTEST(break1); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_Forget_SSA_bind_lb_5_rb__lt_,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Forget_SSA__append_lp_2,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,6/*autovar*/);it=bind_aget(bind,5/*ar*/); bind_aset(bind,9/*autovar*/,it);
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
   it=Forget_SSA_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto fail;
 accept3:;
 break;}it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Forget_SSA__append_lp_,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,1/*autovar*/);it=rb_funcall(self,sy_Forget_SSA_src_dot_unss,1,bind);  bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
void Init_dataflow_ssa_c(){ 
 cls_Dataflow=rb_define_class("Dataflow",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashDataflow1=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Args\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Global\nnext h[k]=5 if k<=Key\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDataflow1);
switchhashDataflow2=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Pass\nnext h[k]=8 if k<=Result\nnext h[k]=9 if k<=Switch\nnext h[k]=10 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDataflow2);
switchhashTraverser_Clone21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashTraverser_Clone21);
sy_Dataflow_Act_lb_bind=rb_intern("Dataflow_Act_lb_bind");
sy_Dataflow_Apply_lb__ti_b=rb_intern("Dataflow_Apply_lb__ti_b");
sy_Dataflow_Lookahea=rb_intern("Dataflow_Lookahea");
sy_Dataflow_Many_dot_cre=rb_intern("Dataflow_Many_dot_cre");
sy_Dataflow_Or_lb__ti_bind=rb_intern("Dataflow_Or_lb__ti_bind");
sy_Dataflow_Pass_dot_cre=rb_intern("Dataflow_Pass_dot_cre");
sy_Dataflow_Switch_lb_=rb_intern("Dataflow_Switch_lb_");
sy_Dataflow__append_lp_10=rb_intern("Dataflow__append_lp_10");
sy_Dataflow__append_lp_11=rb_intern("Dataflow__append_lp_11");
sy_Dataflow__append_lp_12=rb_intern("Dataflow__append_lp_12");
sy_Dataflow__append_lp_13=rb_intern("Dataflow__append_lp_13");
sy_Dataflow__append_lp_14=rb_intern("Dataflow__append_lp_14");
sy_Dataflow__append_lp_15=rb_intern("Dataflow__append_lp_15");
sy_Dataflow__append_lp_16=rb_intern("Dataflow__append_lp_16");
sy_Dataflow__append_lp_17=rb_intern("Dataflow__append_lp_17");
sy_Dataflow__append_lp_18=rb_intern("Dataflow__append_lp_18");
sy_Dataflow__append_lp_19=rb_intern("Dataflow__append_lp_19");
sy_Dataflow__append_lp_20=rb_intern("Dataflow__append_lp_20");
sy_Dataflow__append_lp_21=rb_intern("Dataflow__append_lp_21");
sy_Dataflow__append_lp_22=rb_intern("Dataflow__append_lp_22");
sy_Dataflow__append_lp_23=rb_intern("Dataflow__append_lp_23");
sy_Dataflow__append_lp_24=rb_intern("Dataflow__append_lp_24");
sy_Dataflow__append_lp_25=rb_intern("Dataflow__append_lp_25");
sy_Dataflow__append_lp_26=rb_intern("Dataflow__append_lp_26");
sy_Dataflow__append_lp_27=rb_intern("Dataflow__append_lp_27");
sy_Dataflow__append_lp_2=rb_intern("Dataflow__append_lp_2");
sy_Dataflow__append_lp_3=rb_intern("Dataflow__append_lp_3");
sy_Dataflow__append_lp_4=rb_intern("Dataflow__append_lp_4");
sy_Dataflow__append_lp_5=rb_intern("Dataflow__append_lp_5");
sy_Dataflow__append_lp_6=rb_intern("Dataflow__append_lp_6");
sy_Dataflow__append_lp_7=rb_intern("Dataflow__append_lp_7");
sy_Dataflow__append_lp_8=rb_intern("Dataflow__append_lp_8");
sy_Dataflow__append_lp_9=rb_intern("Dataflow__append_lp_9");
sy_Dataflow__append_lp_=rb_intern("Dataflow__append_lp_");
sy_Dataflow__at_bnding_eq_=rb_intern("Dataflow__at_bnding_eq_");
sy_Dataflow__at_changed2=rb_intern("Dataflow__at_changed2");
sy_Dataflow__at_changed3=rb_intern("Dataflow__at_changed3");
sy_Dataflow__at_changed=rb_intern("Dataflow__at_changed");
sy_Dataflow__at_marked_lt_2=rb_intern("Dataflow__at_marked_lt_2");
sy_Dataflow__at_marked_lt_3=rb_intern("Dataflow__at_marked_lt_3");
sy_Dataflow__at_marked_lt_=rb_intern("Dataflow__at_marked_lt_");
sy_Dataflow__at_oldssan2=rb_intern("Dataflow__at_oldssan2");
sy_Dataflow__at_oldssan=rb_intern("Dataflow__at_oldssan");
sy_Dataflow__lp_bind_lb_4_rb_=rb_intern("Dataflow__lp_bind_lb_4_rb_");
sy_Dataflow__lp_src_dot_ins=rb_intern("Dataflow__lp_src_dot_ins");
sy_Dataflow_bind_end=rb_intern("Dataflow_bind_end");
sy_Dataflow_bind_lb_0_rb__eq_=rb_intern("Dataflow_bind_lb_0_rb__eq_");
sy_Dataflow_bind_lb_41_rb_=rb_intern("Dataflow_bind_lb_41_rb_");
sy_Dataflow_bind_lb_4_rb__dot_=rb_intern("Dataflow_bind_lb_4_rb__dot_");
sy_Dataflow_bind_lb_58_rb_=rb_intern("Dataflow_bind_lb_58_rb_");
sy_Dataflow_bind_lb_5_rb__lt_=rb_intern("Dataflow_bind_lb_5_rb__lt_");
sy_Dataflow_bind_lb_6_rb__dot_=rb_intern("Dataflow_bind_lb_6_rb__dot_");
sy_Dataflow_bind_lb_8_rb__dot_2=rb_intern("Dataflow_bind_lb_8_rb__dot_2");
sy_Dataflow_bind_lb_8_rb__dot_=rb_intern("Dataflow_bind_lb_8_rb__dot_");
sy_Dataflow_if_sp_bind_lb_=rb_intern("Dataflow_if_sp_bind_lb_");
sy_Dataflow_many_end=rb_intern("Dataflow_many_end");
sy_Dataflow_n_eq_Result=rb_intern("Dataflow_n_eq_Result");
sy_Dataflow_oldssanu=rb_intern("Dataflow_oldssanu");
sy_Dataflow_or_end_lp_b=rb_intern("Dataflow_or_end_lp_b");
sy_Dataflow_src=rb_intern("Dataflow_src");
sy_Dataflow_src_dot_args=rb_intern("Dataflow_src_dot_args");
sy_Dataflow_src_dot_body2=rb_intern("Dataflow_src_dot_body2");
sy_Dataflow_src_dot_body=rb_intern("Dataflow_src_dot_body");
sy_Dataflow_src_dot_reac=rb_intern("Dataflow_src_dot_reac");
sy_Dataflow_src_dot_to=rb_intern("Dataflow_src_dot_to");
sy_Dataflow_src_dot_var=rb_intern("Dataflow_src_dot_var");
sy_Dataflow_src_dot_vars=rb_intern("Dataflow_src_dot_vars");
sy_Dataflow_ssanum_lp_s=rb_intern("Dataflow_ssanum_lp_s");
sy_Dataflow_ssanums_dot_=rb_intern("Dataflow_ssanums_dot_");
rb_define_method(cls_Dataflow,"root",Dataflow_root,0);
rb_define_method(cls_Dataflow,"traverse",Dataflow_traverse,0);
rb_define_method(cls_Dataflow,"traverse_item",Dataflow_traverse_item,0);
rb_define_method(cls_Dataflow,"vars_in",Dataflow_vars_in,0);
rb_define_method(cls_Dataflow,"visit",Dataflow_visit,0);

 cls_Dead_Code_Deleter3=rb_define_class("Dead_Code_Deleter3",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashDead_Code_Deleter31=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Result\nnext h[k]=3 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDead_Code_Deleter31);
switchhashDead_Code_Deleter32=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Local\nnext h[k]=5 if k<=Result\nnext h[k]=6 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashDead_Code_Deleter32);
switchhashTraverser_Clone21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashTraverser_Clone21);
sy_Dead_Code_Deleter3__append_lp_2=rb_intern("Dead_Code_Deleter3__append_lp_2");
sy_Dead_Code_Deleter3__append_lp_3=rb_intern("Dead_Code_Deleter3__append_lp_3");
sy_Dead_Code_Deleter3__append_lp_4=rb_intern("Dead_Code_Deleter3__append_lp_4");
sy_Dead_Code_Deleter3__append_lp_5=rb_intern("Dead_Code_Deleter3__append_lp_5");
sy_Dead_Code_Deleter3__append_lp_6=rb_intern("Dead_Code_Deleter3__append_lp_6");
sy_Dead_Code_Deleter3__append_lp_7=rb_intern("Dead_Code_Deleter3__append_lp_7");
sy_Dead_Code_Deleter3__append_lp_8=rb_intern("Dead_Code_Deleter3__append_lp_8");
sy_Dead_Code_Deleter3__append_lp_=rb_intern("Dead_Code_Deleter3__append_lp_");
sy_Dead_Code_Deleter3__at_bounded2=rb_intern("Dead_Code_Deleter3__at_bounded2");
sy_Dead_Code_Deleter3__at_bounded=rb_intern("Dead_Code_Deleter3__at_bounded");
sy_Dead_Code_Deleter3__at_changed2=rb_intern("Dead_Code_Deleter3__at_changed2");
sy_Dead_Code_Deleter3__at_changed3=rb_intern("Dead_Code_Deleter3__at_changed3");
sy_Dead_Code_Deleter3__at_changed=rb_intern("Dead_Code_Deleter3__at_changed");
sy_Dead_Code_Deleter3__at_reachab2=rb_intern("Dead_Code_Deleter3__at_reachab2");
sy_Dead_Code_Deleter3__at_reachab3=rb_intern("Dead_Code_Deleter3__at_reachab3");
sy_Dead_Code_Deleter3__at_reachab=rb_intern("Dead_Code_Deleter3__at_reachab");
sy_Dead_Code_Deleter3__lp_=rb_intern("Dead_Code_Deleter3__lp_");
sy_Dead_Code_Deleter3__lp_bind_lb_4_rb_=rb_intern("Dead_Code_Deleter3__lp_bind_lb_4_rb_");
sy_Dead_Code_Deleter3__lp_src_dot_ins=rb_intern("Dead_Code_Deleter3__lp_src_dot_ins");
sy_Dead_Code_Deleter3_bind_lb_5_rb__lt_=rb_intern("Dead_Code_Deleter3_bind_lb_5_rb__lt_");
sy_Dead_Code_Deleter3_if_sp_bind_lb_=rb_intern("Dead_Code_Deleter3_if_sp_bind_lb_");
sy_Dead_Code_Deleter3_src=rb_intern("Dead_Code_Deleter3_src");
sy_Dead_Code_Deleter3_src_dot_reac=rb_intern("Dead_Code_Deleter3_src_dot_reac");
rb_define_method(cls_Dead_Code_Deleter3,"root",Dead_Code_Deleter3_root,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse",Dead_Code_Deleter3_traverse,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse_item",Dead_Code_Deleter3_traverse_item,0);
rb_define_method(cls_Dead_Code_Deleter3,"visit",Dead_Code_Deleter3_visit,0);

 cls_Forget_SSA=rb_define_class("Forget_SSA",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Local=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Local);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
switchhashTraverser_Clone21=rb_eval_string("Hash.new{|h,k|\nnext h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhashTraverser_Clone21);
sy_Forget_SSA__append_lp_2=rb_intern("Forget_SSA__append_lp_2");
sy_Forget_SSA__append_lp_3=rb_intern("Forget_SSA__append_lp_3");
sy_Forget_SSA__append_lp_4=rb_intern("Forget_SSA__append_lp_4");
sy_Forget_SSA__append_lp_=rb_intern("Forget_SSA__append_lp_");
sy_Forget_SSA__at_changed2=rb_intern("Forget_SSA__at_changed2");
sy_Forget_SSA__at_changed3=rb_intern("Forget_SSA__at_changed3");
sy_Forget_SSA__at_changed=rb_intern("Forget_SSA__at_changed");
sy_Forget_SSA__lp_bind_lb_4_rb_=rb_intern("Forget_SSA__lp_bind_lb_4_rb_");
sy_Forget_SSA__lp_src_dot_ins=rb_intern("Forget_SSA__lp_src_dot_ins");
sy_Forget_SSA_bind_lb_5_rb__lt_=rb_intern("Forget_SSA_bind_lb_5_rb__lt_");
sy_Forget_SSA_if_sp_bind_lb_=rb_intern("Forget_SSA_if_sp_bind_lb_");
sy_Forget_SSA_src=rb_intern("Forget_SSA_src");
sy_Forget_SSA_src_dot_unss=rb_intern("Forget_SSA_src_dot_unss");
rb_define_method(cls_Forget_SSA,"root",Forget_SSA_root,0);
rb_define_method(cls_Forget_SSA,"traverse",Forget_SSA_traverse,0);
rb_define_method(cls_Forget_SSA,"traverse_item",Forget_SSA_traverse_item,0);
rb_define_method(cls_Forget_SSA,"visit",Forget_SSA_visit,0);
 rb_eval_string("testversiondataflow_ssa('cdd5523e152cb348e7bd4222b0ec9e0b')");}
