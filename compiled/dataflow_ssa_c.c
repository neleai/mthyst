#include "cthyst.h"
VALUE cls_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Dataflow_root(VALUE self );
VALUE Dataflow_traverse(VALUE self );
VALUE Dataflow_traverse_item(VALUE self );
VALUE Dataflow_vars_in(VALUE self );
VALUE Dataflow_visit(VALUE self );
static VALUE c_Act;
static VALUE c_AmethystAST;
static VALUE c_Apply;
static VALUE c_Args;
static VALUE c_Array;
static VALUE c_Bind;
static VALUE c_CAct;
static VALUE c_Global;
static VALUE c_Key;
static VALUE c_Local;
static VALUE c_Lookahead;
static VALUE c_Many;
static VALUE c_Or;
static VALUE c_Pass;
static VALUE c_Result;
static VALUE c_Rule;
static VALUE c_Switch;
static VALUE sy_Dataflow_Act_lb_bind_9896;
static VALUE sy_Dataflow_Apply_lb__ti__lp__911e;
static VALUE sy_Dataflow_Lookahea_1748;
static VALUE sy_Dataflow_Many_dot_cre_2065;
static VALUE sy_Dataflow_Or_lb__ti_bind_2fd2;
static VALUE sy_Dataflow_Pass_dot_cre_8dc6;
static VALUE sy_Dataflow_Switch_lb__le__c402;
static VALUE sy_Dataflow__append_lp__0605;
static VALUE sy_Dataflow__append_lp__0eeb;
static VALUE sy_Dataflow__append_lp__29a3;
static VALUE sy_Dataflow__append_lp__4297;
static VALUE sy_Dataflow__append_lp__4b67;
static VALUE sy_Dataflow__append_lp__4de3;
static VALUE sy_Dataflow__append_lp__66a2;
static VALUE sy_Dataflow__append_lp__6f56;
static VALUE sy_Dataflow__append_lp__73f1;
static VALUE sy_Dataflow__append_lp__89bf;
static VALUE sy_Dataflow__append_lp__b2a5;
static VALUE sy_Dataflow__append_lp__b494;
static VALUE sy_Dataflow__append_lp__bd27;
static VALUE sy_Dataflow__append_lp__c323;
static VALUE sy_Dataflow__append_lp__f794;
static VALUE sy_Dataflow__at_bnding_eq__b94a;
static VALUE sy_Dataflow__at_changed_5352;
static VALUE sy_Dataflow__at_changed_b885;
static VALUE sy_Dataflow__at_changed_c681;
static VALUE sy_Dataflow__at_marked_lt__3574;
static VALUE sy_Dataflow__at_marked_lt__59bb;
static VALUE sy_Dataflow__at_marked_lt__b14c;
static VALUE sy_Dataflow__at_oldssan_1798;
static VALUE sy_Dataflow__at_oldssan_3a2b;
static VALUE sy_Dataflow__lp_bind_lb_2_rb__6693;
static VALUE sy_Dataflow__lp_src_dot_ins_6a75;
static VALUE sy_Dataflow_bind_end_6e13;
static VALUE sy_Dataflow_bind_lb_0_rb_;
static VALUE sy_Dataflow_bind_lb_0_rb__eq__943e;
static VALUE sy_Dataflow_bind_lb_11_rb__61a6;
static VALUE sy_Dataflow_bind_lb_16_rb__5e8e;
static VALUE sy_Dataflow_bind_lb_36_rb__1777;
static VALUE sy_Dataflow_bind_lb_3_rb__lt__bb51;
static VALUE sy_Dataflow_bind_lb_7_rb__dot__55b0;
static VALUE sy_Dataflow_bind_lb_7_rb__dot__abd8;
static VALUE sy_Dataflow_bind_lb_7_rb__dot__d52a;
static VALUE sy_Dataflow_if_sp_bind_lb__f1e9;
static VALUE sy_Dataflow_many_end_47fa;
static VALUE sy_Dataflow_n_eq_Result_194d;
static VALUE sy_Dataflow_oldssanu_073d;
static VALUE sy_Dataflow_or_end_lp_b_184e;
static VALUE sy_Dataflow_src_25d9;
static VALUE sy_Dataflow_src_dot_args_2df5;
static VALUE sy_Dataflow_src_dot_body_519e;
static VALUE sy_Dataflow_src_dot_body_e931;
static VALUE sy_Dataflow_src_dot_reac_e743;
static VALUE sy_Dataflow_src_dot_to_5e99;
static VALUE sy_Dataflow_src_dot_var_3a88;
static VALUE sy_Dataflow_src_dot_vars_2db1;
static VALUE sy_Dataflow_ssanum_lp_s_3920;
static VALUE sy_Dataflow_ssanums_dot__ae08;
VALUE Dataflow_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow__at_bnding_eq__b94a,1,bind); it=rb_funcall(self,sy_Dataflow_src_dot_args_2df5,1,bind);  bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,3/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__6f56,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*var*/,it);
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
it=rb_funcall(self,sy_Dataflow_bind_lb_7_rb__dot__abd8,1,bind); it=rb_funcall(self,sy_Dataflow_src_dot_body_519e,1,bind);  bind_aset(bind,8/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,8/*autovar*/);ptr->len=1;
   it=Dataflow_traverse_item(self ); FAILTEST(pass5); bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto pass2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*body*/,it);
it=rb_funcall(self,sy_Dataflow_src_dot_body_e931,1,bind); it=rb_funcall(self,sy_Dataflow_src_dot_reac_e743,1,bind); it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,11/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto fail;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*_result*/,it);
it=bind_aget(bind,12/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Dataflow__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Dataflow__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed_b885,1,bind);   it=Dataflow_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Dataflow__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
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
it=rb_funcall(self,sy_Dataflow_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Dataflow_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dataflow__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Array; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
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
   it=Dataflow_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
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
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_vars_in(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(18);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_0_rb__eq__943e,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_Global; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__29a3,1,bind); it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind); int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__b2a5,1,bind); int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4);   it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_3;
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__4297,1,bind); int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5);   it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_4;
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_Key; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_5); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__0eeb,1,bind); it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind); int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6);   it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt1_5;
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_Result; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_6); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__b494,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt1_6;
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_Args; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_7); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Dataflow_vars_in(self ); FAILTEST(pass6); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__66a2,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt1_7;
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_Bind; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_8); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Dataflow_vars_in(self ); FAILTEST(pass7); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__4b67,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt1_8;
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_9); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass8);it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind);  bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__0605,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt1_9;
 
ame_setcut(self,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_10); 
ame_setcut(self,Qnil);goto accept1;
  alt1_10:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Dataflow_bind_lb_0_rb_,1,bind);  bind_aset(bind,17/*_result*/,it);
it=bind_aget(bind,17/*_result*/);
return it;
fail: return failobj; }
VALUE Dataflow_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(58);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*t*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__4de3,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,0/*t*/,it);
it=rb_funcall(self,sy_Dataflow_Apply_lb__ti__lp__911e,1,bind);  bind_aset(bind,4/*app*/,it);
it=bind_aget(bind,4/*app*/); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Dataflow_vars_in(self ); FAILTEST(pass3); bind_aset(bind,7/*var*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=rb_funcall(self,sy_Dataflow_bind_lb_7_rb__dot__55b0,1,bind); it=bind_aget(bind,4/*app*/); bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Or; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,11/*join*/,it);
it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind);  bind_aset(bind,12/*old*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self); it=rb_funcall(self,sy_Dataflow__at_oldssan_3a2b,1,bind);   it=Dataflow_traverse_item(self ); FAILTEST(break2); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__73f1,1,bind); it=rb_funcall(self,sy_Dataflow_bind_lb_11_rb__61a6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=rb_funcall(self,sy_Dataflow_or_end_lp_b_184e,1,bind); it=rb_funcall(self,sy_Dataflow_Or_lb__ti_bind_2fd2,1,bind);  bind_aset(bind,14/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt1_3;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Switch; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,16/*alts*/,it);
it=rb_ary_new3(0); bind_aset(bind,11/*join*/,it);
it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind);  bind_aset(bind,12/*old*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self); it=rb_funcall(self,sy_Dataflow__at_oldssan_3a2b,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,18/*pred*/,it);
  it=Dataflow_traverse_item(self ); FAILTEST(pass6); bind_aset(bind,19/*a*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_16_rb__5e8e,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto break3;
it=rb_funcall(self,sy_Dataflow_bind_lb_11_rb__61a6,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=rb_funcall(self,sy_Dataflow_or_end_lp_b_184e,1,bind); it=rb_funcall(self,sy_Dataflow_Switch_lb__le__c402,1,bind);  bind_aset(bind,20/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt1_4;
it=bind_aget(bind,20/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Many; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_5); bind_aset(bind,21/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,21/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_ssanums_dot__ae08,1,bind);  bind_aset(bind,22/*prev*/,it);
it=rb_ary_new3(0); bind_aset(bind,23/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break4); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__89bf,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,23/*autovar*/); bind_aset(bind,0/*t*/,it);
it=rb_funcall(self,sy_Dataflow_many_end_47fa,1,bind); it=rb_funcall(self,sy_Dataflow_Many_dot_cre_2065,1,bind);  bind_aset(bind,25/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt1_5;
it=bind_aget(bind,25/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Pass; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_6); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src_dot_to_5e99,1,bind);  bind_aset(bind,27/*autovar*/,it);
cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,27/*autovar*/);ptr->len=1;
   it=Dataflow_traverse_item(self ); FAILTEST(pass9); bind_aset(bind,28/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto pass8;
it=bind_aget(bind,28/*autovar*/); bind_aset(bind,29/*to*/,it);
it=rb_funcall(self,sy_Dataflow_src_dot_var_3a88,1,bind);  bind_aset(bind,30/*autovar*/,it);
cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,30/*autovar*/);ptr->len=1;
   it=Dataflow_traverse_item(self ); FAILTEST(pass10); bind_aset(bind,31/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto pass8;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,7/*var*/,it);
it=rb_funcall(self,sy_Dataflow__at_marked_lt__b14c,1,bind); it=rb_funcall(self,sy_Dataflow_Pass_dot_cre_8dc6,1,bind);  bind_aset(bind,32/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto alt1_6;
it=bind_aget(bind,32/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_6: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_7); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,34/*autovar*/,it);
int oldpos6; while(1){oldpos6=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break5); bind_aset(bind,35/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__bd27,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=bind_aget(bind,34/*autovar*/); bind_aset(bind,0/*t*/,it);
it=rb_funcall(self,sy_Dataflow_Act_lb_bind_9896,1,bind);  bind_aset(bind,36/*act*/,it);
it=rb_funcall(self,sy_Dataflow__at_marked_lt__3574,1,bind); it=rb_funcall(self,sy_Dataflow_bind_lb_36_rb__1777,1,bind);  bind_aset(bind,37/*autovar*/,it);
cstruct oldpass12=*ptr; int fail12=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,37/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass12); bind_aset(bind,38/*autovar*/,it);
cstruct oldpass13=*ptr; int fail13=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,38/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Dataflow_vars_in(self ); FAILTEST(pass13); bind_aset(bind,39/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass13);
	goto success13;
	pass13: fail13=1;
	success13: *ptr=oldpass13;
	if(fail13) goto pass12;
it=bind_aget(bind,39/*autovar*/); bind_aset(bind,40/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass12);
	goto success12;
	pass12: fail12=1;
	success12: *ptr=oldpass12;
	if(fail12) goto pass11;
it=bind_aget(bind,40/*autovar*/); bind_aset(bind,7/*var*/,it);
it=rb_funcall(self,sy_Dataflow_bind_lb_7_rb__dot__d52a,1,bind);  bind_aset(bind,41/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto alt1_7;
it=bind_aget(bind,41/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_7: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Bind; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_8); bind_aset(bind,42/*autovar*/,it);
cstruct oldpass14=*ptr; int fail14=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,42/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break6); if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break6;} } } break6: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7);   it=Dataflow_traverse(self ); FAILTEST(pass14); bind_aset(bind,43/*autovar*/,it);
cstruct oldpass15=*ptr; int fail15=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,43/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos8; while(1){oldpos8=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break7); if (ame_getstop(self)!=Qnil){{oldpos8=ame_getpos(self);goto break7;} } } break7: ame_setstop(self,Qnil);  ame_setpos(self,oldpos8); it=rb_funcall(self,sy_Dataflow_bind_end_6e13,1,bind);  bind_aset(bind,44/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass15);
	goto success15;
	pass15: fail15=1;
	success15: *ptr=oldpass15;
	if(fail15) goto pass14;
it=bind_aget(bind,44/*autovar*/); bind_aset(bind,45/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass14);
	goto success14;
	pass14: fail14=1;
	success14: *ptr=oldpass14;
	if(fail14) goto alt1_8;
it=bind_aget(bind,45/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_8: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Result; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_9); bind_aset(bind,46/*autovar*/,it);
cstruct oldpass16=*ptr; int fail16=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,46/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_src_dot_vars_2db1,1,bind);  bind_aset(bind,47/*autovar*/,it);
cstruct oldpass17=*ptr; int fail17=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,47/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass17); bind_aset(bind,48/*autovar*/,it);
cstruct oldpass18=*ptr; int fail18=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,48/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,49/*autovar*/,it);
int oldpos9; while(1){oldpos9=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break8); bind_aset(bind,50/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__f794,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos9=ame_getpos(self);goto break8;} } } break8: ame_setstop(self,Qnil);  ame_setpos(self,oldpos9); it=bind_aget(bind,49/*autovar*/); bind_aset(bind,7/*var*/,it);
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
it=rb_funcall(self,sy_Dataflow_n_eq_Result_194d,1,bind);  bind_aset(bind,51/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass16);
	goto success16;
	pass16: fail16=1;
	success16: *ptr=oldpass16;
	if(fail16) goto alt1_9;
it=bind_aget(bind,51/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_9: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Lookahead; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_10); bind_aset(bind,52/*autovar*/,it);
cstruct oldpass19=*ptr; int fail19=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,52/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind);  bind_aset(bind,12/*old*/,it);
it=rb_ary_new3(0); bind_aset(bind,53/*autovar*/,it);
int oldpos10; while(1){oldpos10=ame_getpos(self);   it=Dataflow_traverse_item(self ); FAILTEST(break9); bind_aset(bind,54/*autovar*/,it);
it=rb_funcall(self,sy_Dataflow__append_lp__c323,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos10=ame_getpos(self);goto break9;} } } break9: ame_setstop(self,Qnil);  ame_setpos(self,oldpos10); it=bind_aget(bind,53/*autovar*/); bind_aset(bind,0/*t*/,it);
it=rb_funcall(self,sy_Dataflow__at_oldssan_1798,1,bind); it=rb_funcall(self,sy_Dataflow_Lookahea_1748,1,bind);  bind_aset(bind,55/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass19);
	goto success19;
	pass19: fail19=1;
	success19: *ptr=oldpass19;
	if(fail19) goto alt1_10;
it=bind_aget(bind,55/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_10: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_11); bind_aset(bind,56/*autovar*/,it);
cstruct oldpass20=*ptr; int fail20=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,56/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos11; while(1){oldpos11=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break10); if (ame_getstop(self)!=Qnil){{oldpos11=ame_getpos(self);goto break10;} } } break10: ame_setstop(self,Qnil);  ame_setpos(self,oldpos11); it=rb_funcall(self,sy_Dataflow_ssanum_lp_s_3920,1,bind);  bind_aset(bind,57/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass20);
	goto success20;
	pass20: fail20=1;
	success20: *ptr=oldpass20;
	if(fail20) goto alt1_11;
it=bind_aget(bind,57/*autovar*/); bind_aset(bind,9/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_11:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }VALUE cls_Dead_Code_Deleter3;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Dead_Code_Deleter3_root(VALUE self );
VALUE Dead_Code_Deleter3_traverse(VALUE self );
VALUE Dead_Code_Deleter3_traverse_item(VALUE self );
VALUE Dead_Code_Deleter3_visit(VALUE self );
static VALUE c_Act;
static VALUE c_AmethystAST;
static VALUE c_Apply;
static VALUE c_Array;
static VALUE c_Bind;
static VALUE c_CAct;
static VALUE c_Local;
static VALUE c_Result;
static VALUE c_Rule;
static VALUE sy_Dead_Code_Deleter3__at_bounded_6bb2;
static VALUE sy_Dead_Code_Deleter3__at_bounded_7c82;
static VALUE sy_Dead_Code_Deleter3__at_changed_5352;
static VALUE sy_Dead_Code_Deleter3__at_changed_b885;
static VALUE sy_Dead_Code_Deleter3__at_changed_c681;
static VALUE sy_Dead_Code_Deleter3__at_reachab_005c;
static VALUE sy_Dead_Code_Deleter3__at_reachab_725b;
static VALUE sy_Dead_Code_Deleter3__at_reachab_8588;
static VALUE sy_Dead_Code_Deleter3__lp_;
static VALUE sy_Dead_Code_Deleter3__lp_bind_lb_2_rb__6693;
static VALUE sy_Dead_Code_Deleter3__lp_src_dot_ins_6a75;
static VALUE sy_Dead_Code_Deleter3_bind_lb_3_rb__lt__bb51;
static VALUE sy_Dead_Code_Deleter3_if_sp_bind_lb__f1e9;
static VALUE sy_Dead_Code_Deleter3_src_25d9;
static VALUE sy_Dead_Code_Deleter3_src_dot_reac_cd39;
VALUE Dead_Code_Deleter3_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_8588,1,bind); it=rb_funcall(self,sy_Dead_Code_Deleter3_src_dot_reac_cd39,1,bind);   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_b885,1,bind);   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
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
it=rb_funcall(self,sy_Dead_Code_Deleter3_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Dead_Code_Deleter3_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Array; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Dead_Code_Deleter3_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Dead_Code_Deleter3_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
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
   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
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
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Dead_Code_Deleter3_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 int oldpos2=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
  it=c_Act; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,0/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
  it=c_CAct; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_3); bind_aset(bind,0/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
alt2_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_2;}
  it=c_Result; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_4); bind_aset(bind,0/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_4:  ame_setpos(self,oldpos2); goto alt1_2;
 accept2:;
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3);   it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=rb_funcall(self,sy_Dead_Code_Deleter3__lp_,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Apply; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind);  bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_3;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Bind; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_4); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind); it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded_6bb2,1,bind);   it=Dead_Code_Deleter3_traverse(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=rb_funcall(self,sy_Dead_Code_Deleter3__at_bounded_7c82,1,bind); it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_005c,1,bind);  bind_aset(bind,7/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto pass3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_4;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_5); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos7; while(1){oldpos7=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break5); if (ame_getstop(self)!=Qnil){{oldpos7=ame_getpos(self);goto break5;} } } break5: ame_setstop(self,Qnil);  ame_setpos(self,oldpos7); it=rb_funcall(self,sy_Dead_Code_Deleter3_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt1_5;
it=rb_funcall(self,sy_Dead_Code_Deleter3__at_reachab_725b,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }VALUE cls_Forget_SSA;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_eof(VALUE self );
VALUE Forget_SSA_root(VALUE self );
VALUE Forget_SSA_traverse(VALUE self );
VALUE Forget_SSA_traverse_item(VALUE self );
VALUE Forget_SSA_visit(VALUE self );
static VALUE c_AmethystAST;
static VALUE c_Array;
static VALUE c_Local;
static VALUE c_Rule;
static VALUE sy_Forget_SSA__at_changed_5352;
static VALUE sy_Forget_SSA__at_changed_b885;
static VALUE sy_Forget_SSA__at_changed_c681;
static VALUE sy_Forget_SSA__lp_bind_lb_2_rb__6693;
static VALUE sy_Forget_SSA__lp_src_dot_ins_6a75;
static VALUE sy_Forget_SSA_bind_lb_3_rb__lt__bb51;
static VALUE sy_Forget_SSA_if_sp_bind_lb__f1e9;
static VALUE sy_Forget_SSA_src_25d9;
static VALUE sy_Forget_SSA_src_dot_unss_5845;
VALUE Forget_SSA_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Forget_SSA_src_25d9,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
  it=c_Rule; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Forget_SSA_traverse(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Forget_SSA__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Forget_SSA_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Forget_SSA__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed_b885,1,bind);   it=Forget_SSA_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Forget_SSA__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
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
it=rb_funcall(self,sy_Forget_SSA_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Forget_SSA_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Forget_SSA__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=c_Array; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Forget_SSA_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Forget_SSA_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
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
   it=Forget_SSA_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
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
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Forget_SSA_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=c_Local; arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Forget_SSA_src_dot_unss_5845,1,bind);  bind_aset(bind,1/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
void Init_dataflow_ssa_c(){ 
 cls_Dataflow=rb_define_class("Dataflow",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Act=rb_const_get(rb_cObject, rb_intern("Act"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Act);
c_AmethystAST=rb_const_get(rb_cObject, rb_intern("AmethystAST"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_AmethystAST);
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Args=rb_const_get(rb_cObject, rb_intern("Args"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Args);
c_Array=rb_const_get(rb_cObject, rb_intern("Array"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Array);
c_Bind=rb_const_get(rb_cObject, rb_intern("Bind"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Bind);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
c_Global=rb_const_get(rb_cObject, rb_intern("Global"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Global);
c_Key=rb_const_get(rb_cObject, rb_intern("Key"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Key);
c_Local=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Local);
c_Lookahead=rb_const_get(rb_cObject, rb_intern("Lookahead"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Lookahead);
c_Many=rb_const_get(rb_cObject, rb_intern("Many"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Many);
c_Or=rb_const_get(rb_cObject, rb_intern("Or"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Or);
c_Pass=rb_const_get(rb_cObject, rb_intern("Pass"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Pass);
c_Result=rb_const_get(rb_cObject, rb_intern("Result"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Result);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
c_Switch=rb_const_get(rb_cObject, rb_intern("Switch"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Switch);
sy_Dataflow_Act_lb_bind_9896=rb_intern("Dataflow_Act_lb_bind_9896");
sy_Dataflow_Apply_lb__ti__lp__911e=rb_intern("Dataflow_Apply_lb__ti__lp__911e");
sy_Dataflow_Lookahea_1748=rb_intern("Dataflow_Lookahea_1748");
sy_Dataflow_Many_dot_cre_2065=rb_intern("Dataflow_Many_dot_cre_2065");
sy_Dataflow_Or_lb__ti_bind_2fd2=rb_intern("Dataflow_Or_lb__ti_bind_2fd2");
sy_Dataflow_Pass_dot_cre_8dc6=rb_intern("Dataflow_Pass_dot_cre_8dc6");
sy_Dataflow_Switch_lb__le__c402=rb_intern("Dataflow_Switch_lb__le__c402");
sy_Dataflow__append_lp__0605=rb_intern("Dataflow__append_lp__0605");
sy_Dataflow__append_lp__0eeb=rb_intern("Dataflow__append_lp__0eeb");
sy_Dataflow__append_lp__29a3=rb_intern("Dataflow__append_lp__29a3");
sy_Dataflow__append_lp__4297=rb_intern("Dataflow__append_lp__4297");
sy_Dataflow__append_lp__4b67=rb_intern("Dataflow__append_lp__4b67");
sy_Dataflow__append_lp__4de3=rb_intern("Dataflow__append_lp__4de3");
sy_Dataflow__append_lp__66a2=rb_intern("Dataflow__append_lp__66a2");
sy_Dataflow__append_lp__6f56=rb_intern("Dataflow__append_lp__6f56");
sy_Dataflow__append_lp__73f1=rb_intern("Dataflow__append_lp__73f1");
sy_Dataflow__append_lp__89bf=rb_intern("Dataflow__append_lp__89bf");
sy_Dataflow__append_lp__b2a5=rb_intern("Dataflow__append_lp__b2a5");
sy_Dataflow__append_lp__b494=rb_intern("Dataflow__append_lp__b494");
sy_Dataflow__append_lp__bd27=rb_intern("Dataflow__append_lp__bd27");
sy_Dataflow__append_lp__c323=rb_intern("Dataflow__append_lp__c323");
sy_Dataflow__append_lp__f794=rb_intern("Dataflow__append_lp__f794");
sy_Dataflow__at_bnding_eq__b94a=rb_intern("Dataflow__at_bnding_eq__b94a");
sy_Dataflow__at_changed_5352=rb_intern("Dataflow__at_changed_5352");
sy_Dataflow__at_changed_b885=rb_intern("Dataflow__at_changed_b885");
sy_Dataflow__at_changed_c681=rb_intern("Dataflow__at_changed_c681");
sy_Dataflow__at_marked_lt__3574=rb_intern("Dataflow__at_marked_lt__3574");
sy_Dataflow__at_marked_lt__59bb=rb_intern("Dataflow__at_marked_lt__59bb");
sy_Dataflow__at_marked_lt__b14c=rb_intern("Dataflow__at_marked_lt__b14c");
sy_Dataflow__at_oldssan_1798=rb_intern("Dataflow__at_oldssan_1798");
sy_Dataflow__at_oldssan_3a2b=rb_intern("Dataflow__at_oldssan_3a2b");
sy_Dataflow__lp_bind_lb_2_rb__6693=rb_intern("Dataflow__lp_bind_lb_2_rb__6693");
sy_Dataflow__lp_src_dot_ins_6a75=rb_intern("Dataflow__lp_src_dot_ins_6a75");
sy_Dataflow_bind_end_6e13=rb_intern("Dataflow_bind_end_6e13");
sy_Dataflow_bind_lb_0_rb_=rb_intern("Dataflow_bind_lb_0_rb_");
sy_Dataflow_bind_lb_0_rb__eq__943e=rb_intern("Dataflow_bind_lb_0_rb__eq__943e");
sy_Dataflow_bind_lb_11_rb__61a6=rb_intern("Dataflow_bind_lb_11_rb__61a6");
sy_Dataflow_bind_lb_16_rb__5e8e=rb_intern("Dataflow_bind_lb_16_rb__5e8e");
sy_Dataflow_bind_lb_36_rb__1777=rb_intern("Dataflow_bind_lb_36_rb__1777");
sy_Dataflow_bind_lb_3_rb__lt__bb51=rb_intern("Dataflow_bind_lb_3_rb__lt__bb51");
sy_Dataflow_bind_lb_7_rb__dot__55b0=rb_intern("Dataflow_bind_lb_7_rb__dot__55b0");
sy_Dataflow_bind_lb_7_rb__dot__abd8=rb_intern("Dataflow_bind_lb_7_rb__dot__abd8");
sy_Dataflow_bind_lb_7_rb__dot__d52a=rb_intern("Dataflow_bind_lb_7_rb__dot__d52a");
sy_Dataflow_if_sp_bind_lb__f1e9=rb_intern("Dataflow_if_sp_bind_lb__f1e9");
sy_Dataflow_many_end_47fa=rb_intern("Dataflow_many_end_47fa");
sy_Dataflow_n_eq_Result_194d=rb_intern("Dataflow_n_eq_Result_194d");
sy_Dataflow_oldssanu_073d=rb_intern("Dataflow_oldssanu_073d");
sy_Dataflow_or_end_lp_b_184e=rb_intern("Dataflow_or_end_lp_b_184e");
sy_Dataflow_src_25d9=rb_intern("Dataflow_src_25d9");
sy_Dataflow_src_dot_args_2df5=rb_intern("Dataflow_src_dot_args_2df5");
sy_Dataflow_src_dot_body_519e=rb_intern("Dataflow_src_dot_body_519e");
sy_Dataflow_src_dot_body_e931=rb_intern("Dataflow_src_dot_body_e931");
sy_Dataflow_src_dot_reac_e743=rb_intern("Dataflow_src_dot_reac_e743");
sy_Dataflow_src_dot_to_5e99=rb_intern("Dataflow_src_dot_to_5e99");
sy_Dataflow_src_dot_var_3a88=rb_intern("Dataflow_src_dot_var_3a88");
sy_Dataflow_src_dot_vars_2db1=rb_intern("Dataflow_src_dot_vars_2db1");
sy_Dataflow_ssanum_lp_s_3920=rb_intern("Dataflow_ssanum_lp_s_3920");
sy_Dataflow_ssanums_dot__ae08=rb_intern("Dataflow_ssanums_dot__ae08");
rb_define_method(cls_Dataflow,"root",Dataflow_root,0);
rb_define_method(cls_Dataflow,"traverse",Dataflow_traverse,0);
rb_define_method(cls_Dataflow,"traverse_item",Dataflow_traverse_item,0);
rb_define_method(cls_Dataflow,"vars_in",Dataflow_vars_in,0);
rb_define_method(cls_Dataflow,"visit",Dataflow_visit,0);

 cls_Dead_Code_Deleter3=rb_define_class("Dead_Code_Deleter3",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_Act=rb_const_get(rb_cObject, rb_intern("Act"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Act);
c_AmethystAST=rb_const_get(rb_cObject, rb_intern("AmethystAST"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_AmethystAST);
c_Apply=rb_const_get(rb_cObject, rb_intern("Apply"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Apply);
c_Array=rb_const_get(rb_cObject, rb_intern("Array"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Array);
c_Bind=rb_const_get(rb_cObject, rb_intern("Bind"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Bind);
c_CAct=rb_const_get(rb_cObject, rb_intern("CAct"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_CAct);
c_Local=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Local);
c_Result=rb_const_get(rb_cObject, rb_intern("Result"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Result);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
sy_Dead_Code_Deleter3__at_bounded_6bb2=rb_intern("Dead_Code_Deleter3__at_bounded_6bb2");
sy_Dead_Code_Deleter3__at_bounded_7c82=rb_intern("Dead_Code_Deleter3__at_bounded_7c82");
sy_Dead_Code_Deleter3__at_changed_5352=rb_intern("Dead_Code_Deleter3__at_changed_5352");
sy_Dead_Code_Deleter3__at_changed_b885=rb_intern("Dead_Code_Deleter3__at_changed_b885");
sy_Dead_Code_Deleter3__at_changed_c681=rb_intern("Dead_Code_Deleter3__at_changed_c681");
sy_Dead_Code_Deleter3__at_reachab_005c=rb_intern("Dead_Code_Deleter3__at_reachab_005c");
sy_Dead_Code_Deleter3__at_reachab_725b=rb_intern("Dead_Code_Deleter3__at_reachab_725b");
sy_Dead_Code_Deleter3__at_reachab_8588=rb_intern("Dead_Code_Deleter3__at_reachab_8588");
sy_Dead_Code_Deleter3__lp_=rb_intern("Dead_Code_Deleter3__lp_");
sy_Dead_Code_Deleter3__lp_bind_lb_2_rb__6693=rb_intern("Dead_Code_Deleter3__lp_bind_lb_2_rb__6693");
sy_Dead_Code_Deleter3__lp_src_dot_ins_6a75=rb_intern("Dead_Code_Deleter3__lp_src_dot_ins_6a75");
sy_Dead_Code_Deleter3_bind_lb_3_rb__lt__bb51=rb_intern("Dead_Code_Deleter3_bind_lb_3_rb__lt__bb51");
sy_Dead_Code_Deleter3_if_sp_bind_lb__f1e9=rb_intern("Dead_Code_Deleter3_if_sp_bind_lb__f1e9");
sy_Dead_Code_Deleter3_src_25d9=rb_intern("Dead_Code_Deleter3_src_25d9");
sy_Dead_Code_Deleter3_src_dot_reac_cd39=rb_intern("Dead_Code_Deleter3_src_dot_reac_cd39");
rb_define_method(cls_Dead_Code_Deleter3,"root",Dead_Code_Deleter3_root,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse",Dead_Code_Deleter3_traverse,0);
rb_define_method(cls_Dead_Code_Deleter3,"traverse_item",Dead_Code_Deleter3_traverse_item,0);
rb_define_method(cls_Dead_Code_Deleter3,"visit",Dead_Code_Deleter3_visit,0);

 cls_Forget_SSA=rb_define_class("Forget_SSA",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
c_AmethystAST=rb_const_get(rb_cObject, rb_intern("AmethystAST"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_AmethystAST);
c_Array=rb_const_get(rb_cObject, rb_intern("Array"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Array);
c_Local=rb_const_get(rb_cObject, rb_intern("Local"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Local);
c_Rule=rb_const_get(rb_cObject, rb_intern("Rule"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Rule);
sy_Forget_SSA__at_changed_5352=rb_intern("Forget_SSA__at_changed_5352");
sy_Forget_SSA__at_changed_b885=rb_intern("Forget_SSA__at_changed_b885");
sy_Forget_SSA__at_changed_c681=rb_intern("Forget_SSA__at_changed_c681");
sy_Forget_SSA__lp_bind_lb_2_rb__6693=rb_intern("Forget_SSA__lp_bind_lb_2_rb__6693");
sy_Forget_SSA__lp_src_dot_ins_6a75=rb_intern("Forget_SSA__lp_src_dot_ins_6a75");
sy_Forget_SSA_bind_lb_3_rb__lt__bb51=rb_intern("Forget_SSA_bind_lb_3_rb__lt__bb51");
sy_Forget_SSA_if_sp_bind_lb__f1e9=rb_intern("Forget_SSA_if_sp_bind_lb__f1e9");
sy_Forget_SSA_src_25d9=rb_intern("Forget_SSA_src_25d9");
sy_Forget_SSA_src_dot_unss_5845=rb_intern("Forget_SSA_src_dot_unss_5845");
rb_define_method(cls_Forget_SSA,"root",Forget_SSA_root,0);
rb_define_method(cls_Forget_SSA,"traverse",Forget_SSA_traverse,0);
rb_define_method(cls_Forget_SSA,"traverse_item",Forget_SSA_traverse_item,0);
rb_define_method(cls_Forget_SSA,"visit",Forget_SSA_visit,0);
 rb_eval_string("testversiondataflow_ssa('46d4273874a1bcbac1a10eef23d7ffbd')");}
