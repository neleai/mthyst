#include "cthyst.h"
VALUE cls_Analyze_Variables2;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Analyze_Variables2_flat(VALUE self );
VALUE Analyze_Variables2_itrans(VALUE self );
VALUE Analyze_Variables2_root(VALUE self );
VALUE Analyze_Variables2_traverse(VALUE self );
VALUE Analyze_Variables2_traverse_item(VALUE self );
VALUE Analyze_Variables2_visit(VALUE self );
VALUE switchhash_Analyze_Variables2_10;
VALUE switchhash_Analyze_Variables2_11;
VALUE switchhash_Analyze_Variables2_12;
VALUE switchhash_Analyze_Variables2_13;
VALUE switchhash_Analyze_Variables2_1;
VALUE switchhash_Analyze_Variables2_2;
VALUE switchhash_Analyze_Variables2_3;
VALUE switchhash_Analyze_Variables2_4;
VALUE switchhash_Analyze_Variables2_5;
VALUE switchhash_Analyze_Variables2_6;
VALUE switchhash_Analyze_Variables2_7;
VALUE switchhash_Analyze_Variables2_8;
VALUE switchhash_Analyze_Variables2_9;
static VALUE sy_Analyze_Variables2_Act_lb_bind_14b8;
static VALUE sy_Analyze_Variables2_Placehol_6875;
static VALUE sy_Analyze_Variables2__append_lp__7352;
static VALUE sy_Analyze_Variables2__append_lp__835a;
static VALUE sy_Analyze_Variables2__append_lp__b494;
static VALUE sy_Analyze_Variables2__append_lp__f8f8;
static VALUE sy_Analyze_Variables2__at_bnding_eq__b94a;
static VALUE sy_Analyze_Variables2__at_changed_5352;
static VALUE sy_Analyze_Variables2__at_changed_b885;
static VALUE sy_Analyze_Variables2__at_changed_c681;
static VALUE sy_Analyze_Variables2__at_locals_eq__02ce;
static VALUE sy_Analyze_Variables2__at_variabl_f612;
static VALUE sy_Analyze_Variables2__lp_;
static VALUE sy_Analyze_Variables2__lp_bind_lb_2_rb__6693;
static VALUE sy_Analyze_Variables2__lp_bind_lb_5_rb__0a18;
static VALUE sy_Analyze_Variables2__lp_src_dot_ins_6a75;
static VALUE sy_Analyze_Variables2_bind_lb_3_rb__lt__bb51;
static VALUE sy_Analyze_Variables2_connects_942c;
static VALUE sy_Analyze_Variables2_if_sp_bind_lb__f1e9;
static VALUE sy_Analyze_Variables2_src_25d9;
static VALUE sy_Analyze_Variables2_src_dot_ary_d5cf;
static VALUE sy_Analyze_Variables2_src_dot_ary_dot__dd8c;
static VALUE sy_Analyze_Variables2_src_dot_loca_ab74;
static VALUE sy_Analyze_Variables2_src_dot_pred_56d4;
static VALUE sy_Analyze_Variables2_src_dot_pure_41d4;
static VALUE sy_Analyze_Variables2_src_dot_rule_5acf;
static VALUE sy_Analyze_Variables2_src_dot_rule_d270;
static VALUE sy_Analyze_Variables2_vars_eq__at_lo_cf02;
VALUE Analyze_Variables2_flat(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_10,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
 break;
case 1: goto alt1_2; break;
}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Analyze_Variables2_flat(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_11,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,4/*autovar*/,it);
 break;
case 1: goto alt1_3; break;
}cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Analyze_Variables2_flat(self ); FAILTEST(pass2); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,3/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,3/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,sy_Analyze_Variables2__append_lp__f8f8,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE Analyze_Variables2_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_1,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
 break;
case 1: goto alt1_2; break;
}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Analyze_Variables2_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ame_getpos(self); switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_2,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
 break;
case 1: goto break2; break;
}cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Analyze_Variables2_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto break2;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__append_lp__7352,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
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
it=rb_funcall(self,sy_Analyze_Variables2_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
it=rb_funcall(self,sy_Analyze_Variables2__append_lp__b494,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Analyze_Variables2_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind);  bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_3,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
 break;
case 1: goto pass1; break;
}  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Analyze_Variables2__at_bnding_eq__b94a,1,bind); it=rb_funcall(self,sy_Analyze_Variables2__at_variabl_f612,1,bind); it=rb_funcall(self,sy_Analyze_Variables2__at_locals_eq__02ce,1,bind);   it=Analyze_Variables2_traverse(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Analyze_Variables2_src_dot_loca_ab74,1,bind); it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind);  bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto fail;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE Analyze_Variables2_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Analyze_Variables2__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Analyze_Variables2_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__at_changed_b885,1,bind);   it=Analyze_Variables2_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
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
it=rb_funcall(self,sy_Analyze_Variables2_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Analyze_Variables2_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Analyze_Variables2_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_12,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
 break;
case 1: goto alt1_3; break;
}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Analyze_Variables2_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Analyze_Variables2_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_13,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,6/*autovar*/,it);
 break;
case 1: goto alt1_4; break;
}cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Analyze_Variables2_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
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
VALUE Analyze_Variables2_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(27);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_4,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
 break;
case 1: goto alt1_2; break;
}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Analyze_Variables2_traverse(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Analyze_Variables2_src_dot_ary_dot__dd8c,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Analyze_Variables2_flat(self ); FAILTEST(pass4); bind_aset(bind,4/*a*/,it);
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
it=rb_funcall(self,sy_Analyze_Variables2_connects_942c,1,bind);  bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__lp_bind_lb_5_rb__0a18,1,bind);  bind_aset(bind,6/*autovar*/,it);
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
	if(fail1) goto alt1_2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_5,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,9/*autovar*/,it);
 break;
case 1: goto alt1_3; break;
}cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Analyze_Variables2_src_dot_pred_56d4,1,bind);  bind_aset(bind,10/*pred*/,it);
it=rb_funcall(self,sy_Analyze_Variables2_src_dot_pure_41d4,1,bind);  bind_aset(bind,11/*pure*/,it);
  it=Analyze_Variables2_traverse(self ); FAILTEST(pass5); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos3; while(1){oldpos3=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos3=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos3); it=rb_funcall(self,sy_Analyze_Variables2_src_dot_ary_d5cf,1,bind);  bind_aset(bind,13/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,13/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass7); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos4=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass8;}
 it=rb_funcall(self,sy_Analyze_Variables2__lp_,1,bind); FAILTEST(alt2_2);switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_6,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,15/*autovar*/,it);
 break;
case 1: goto alt2_2; break;
} 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto pass8;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_7,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,16/*autovar*/,it);
 break;
case 1: goto alt2_3; break;
}cstruct oldpass9=*ptr; int fail9=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,17/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,18/*autovar*/,it);
it=rb_funcall(self,sy_Analyze_Variables2__append_lp__835a,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,17/*autovar*/); bind_aset(bind,5/*ary*/,it);
it=rb_funcall(self,sy_Analyze_Variables2_Act_lb_bind_14b8,1,bind);  bind_aset(bind,19/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass9);
	goto success9;
	pass9: fail9=1;
	success9: *ptr=oldpass9;
	if(fail9) goto alt2_3;
it=bind_aget(bind,19/*autovar*/); bind_aset(bind,15/*autovar*/,it);
 
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos4); goto pass8;
 accept2:;
  it=Amethyst_eof(self ); FAILTEST(pass8);
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto pass7;
it=bind_aget(bind,15/*autovar*/); bind_aset(bind,20/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass7);
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto pass6;
it=bind_aget(bind,20/*autovar*/); bind_aset(bind,21/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass6);
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto pass5;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass5);
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt1_3;
it=bind_aget(bind,22/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_8,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,23/*autovar*/,it);
 break;
case 1: goto alt1_4; break;
}cstruct oldpass10=*ptr; int fail10=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Analyze_Variables2_vars_eq__at_lo_cf02,1,bind);  bind_aset(bind,24/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass10);
	goto success10;
	pass10: fail10=1;
	success10: *ptr=oldpass10;
	if(fail10) goto alt1_4;
it=bind_aget(bind,24/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Analyze_Variables2_9,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_5); bind_aset(bind,25/*autovar*/,it);
 break;
case 1: goto alt1_5; break;
}cstruct oldpass11=*ptr; int fail11=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,25/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos6; while(1){oldpos6=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); if (ame_getstop(self)!=Qnil){{oldpos6=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos6); it=rb_funcall(self,sy_Analyze_Variables2_Placehol_6875,1,bind);  bind_aset(bind,26/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass11);
	goto success11;
	pass11: fail11=1;
	success11: *ptr=oldpass11;
	if(fail11) goto alt1_5;
it=bind_aget(bind,26/*autovar*/); bind_aset(bind,8/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

return it;
fail: return failobj; }VALUE cls_Resolve_Calls;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Resolve_Calls_root(VALUE self );
VALUE Resolve_Calls_traverse(VALUE self );
VALUE Resolve_Calls_traverse_item(VALUE self );
VALUE Resolve_Calls_visit(VALUE self );
VALUE switchhash_Resolve_Calls_1;
VALUE switchhash_Resolve_Calls_2;
VALUE switchhash_Resolve_Calls_3;
VALUE switchhash_Resolve_Calls_4;
VALUE switchhash_Resolve_Calls_5;
static VALUE sy_Resolve_Calls__at_changed_5352;
static VALUE sy_Resolve_Calls__at_changed_b885;
static VALUE sy_Resolve_Calls__at_changed_c681;
static VALUE sy_Resolve_Calls__at_grammar_8783;
static VALUE sy_Resolve_Calls__at_name_eq_bi_f53d;
static VALUE sy_Resolve_Calls__lp_bind_lb_2_rb__6693;
static VALUE sy_Resolve_Calls__lp_src_dot_ins_6a75;
static VALUE sy_Resolve_Calls_a_eq_Apply_lb__17e8;
static VALUE sy_Resolve_Calls_a_eq_Apply_lb__bd30;
static VALUE sy_Resolve_Calls_bind_lb_3_rb__lt__bb51;
static VALUE sy_Resolve_Calls_if_sp_bind_lb__f1e9;
static VALUE sy_Resolve_Calls_src_25d9;
static VALUE sy_Resolve_Calls_src_dot_name_80f3;
static VALUE sy_Resolve_Calls_super_na_3133;
VALUE Resolve_Calls_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=rb_funcall(self,sy_Resolve_Calls__at_grammar_8783,1,bind); switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_1,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
 break;
case 1: goto fail; break;
}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Resolve_Calls_src_dot_name_80f3,1,bind);  bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Resolve_Calls__at_name_eq_bi_f53d,1,bind);   it=Resolve_Calls_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Resolve_Calls_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1; while(1){oldpos1=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break1); if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Resolve_Calls__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Resolve_Calls_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Resolve_Calls__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Resolve_Calls__at_changed_b885,1,bind);   it=Resolve_Calls_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Resolve_Calls__lp_bind_lb_2_rb__6693,1,bind);   it=Amethyst_eof(self ); FAILTEST(pass3);
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
it=rb_funcall(self,sy_Resolve_Calls_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Resolve_Calls_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Resolve_Calls_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Resolve_Calls__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_4,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
 break;
case 1: goto alt1_3; break;
}cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,3/*ar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=Resolve_Calls_traverse_item(self ); FAILTEST(break1); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_Resolve_Calls_bind_lb_3_rb__lt__bb51,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,3/*ar*/); bind_aset(bind,5/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,1/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_5,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,6/*autovar*/,it);
 break;
case 1: goto alt1_4; break;
}cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Resolve_Calls_traverse(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
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
VALUE Resolve_Calls_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_2,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
 break;
case 1: goto fail; break;
}it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr(self)){case 's' ... 's':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr(self),"uper",4)) goto pass2; else ame_setpos(self,ame_getpos(self)+4); break;
case UC(0) ... 'r':;case 't' ... UC(255):; goto pass2; break;
}  it=Amethyst_eof(self ); FAILTEST(pass2);
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=rb_funcall(self,sy_Resolve_Calls_super_na_3133,1,bind);  bind_aset(bind,4/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass1);
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_2;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_3,rb_obj_class(ame_curobj(self))))){case 0:   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*name*/,it);
 break;
case 1: goto pass3; break;
}it=rb_funcall(self,sy_Resolve_Calls_a_eq_Apply_lb__17e8,1,bind);  bind_aset(bind,8/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass3);
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto alt1_3;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
 it=bind_aget(bind,1/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,7/*name*/,it);
it=rb_funcall(self,sy_Resolve_Calls_a_eq_Apply_lb__bd30,1,bind);  bind_aset(bind,10/*autovar*/,it);
  it=Amethyst_eof(self ); FAILTEST(pass4);
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto alt1_4;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,5/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos1); goto fail;
 accept1:;

return it;
fail: return failobj; }
void Init_detect_variables2_c(){ 
 cls_Analyze_Variables2=rb_define_class("Analyze_Variables2",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
switchhash_Analyze_Variables2_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_10);;
switchhash_Analyze_Variables2_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Strin\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_11);;
switchhash_Analyze_Variables2_12=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Array\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_12);;
switchhash_Analyze_Variables2_13=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_13);;
switchhash_Analyze_Variables2_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_1);;
switchhash_Analyze_Variables2_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_2);;
switchhash_Analyze_Variables2_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_3);;
switchhash_Analyze_Variables2_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_4);;
switchhash_Analyze_Variables2_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_5);;
switchhash_Analyze_Variables2_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_6);;
switchhash_Analyze_Variables2_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_7);;
switchhash_Analyze_Variables2_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Result\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_8);;
switchhash_Analyze_Variables2_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Comment\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Analyze_Variables2_9);;
sy_Analyze_Variables2_Act_lb_bind_14b8=rb_intern("Analyze_Variables2_Act_lb_bind_14b8");
sy_Analyze_Variables2_Placehol_6875=rb_intern("Analyze_Variables2_Placehol_6875");
sy_Analyze_Variables2__append_lp__7352=rb_intern("Analyze_Variables2__append_lp__7352");
sy_Analyze_Variables2__append_lp__835a=rb_intern("Analyze_Variables2__append_lp__835a");
sy_Analyze_Variables2__append_lp__b494=rb_intern("Analyze_Variables2__append_lp__b494");
sy_Analyze_Variables2__append_lp__f8f8=rb_intern("Analyze_Variables2__append_lp__f8f8");
sy_Analyze_Variables2__at_bnding_eq__b94a=rb_intern("Analyze_Variables2__at_bnding_eq__b94a");
sy_Analyze_Variables2__at_changed_5352=rb_intern("Analyze_Variables2__at_changed_5352");
sy_Analyze_Variables2__at_changed_b885=rb_intern("Analyze_Variables2__at_changed_b885");
sy_Analyze_Variables2__at_changed_c681=rb_intern("Analyze_Variables2__at_changed_c681");
sy_Analyze_Variables2__at_locals_eq__02ce=rb_intern("Analyze_Variables2__at_locals_eq__02ce");
sy_Analyze_Variables2__at_variabl_f612=rb_intern("Analyze_Variables2__at_variabl_f612");
sy_Analyze_Variables2__lp_=rb_intern("Analyze_Variables2__lp_");
sy_Analyze_Variables2__lp_bind_lb_2_rb__6693=rb_intern("Analyze_Variables2__lp_bind_lb_2_rb__6693");
sy_Analyze_Variables2__lp_bind_lb_5_rb__0a18=rb_intern("Analyze_Variables2__lp_bind_lb_5_rb__0a18");
sy_Analyze_Variables2__lp_src_dot_ins_6a75=rb_intern("Analyze_Variables2__lp_src_dot_ins_6a75");
sy_Analyze_Variables2_bind_lb_3_rb__lt__bb51=rb_intern("Analyze_Variables2_bind_lb_3_rb__lt__bb51");
sy_Analyze_Variables2_connects_942c=rb_intern("Analyze_Variables2_connects_942c");
sy_Analyze_Variables2_if_sp_bind_lb__f1e9=rb_intern("Analyze_Variables2_if_sp_bind_lb__f1e9");
sy_Analyze_Variables2_src_25d9=rb_intern("Analyze_Variables2_src_25d9");
sy_Analyze_Variables2_src_dot_ary_d5cf=rb_intern("Analyze_Variables2_src_dot_ary_d5cf");
sy_Analyze_Variables2_src_dot_ary_dot__dd8c=rb_intern("Analyze_Variables2_src_dot_ary_dot__dd8c");
sy_Analyze_Variables2_src_dot_loca_ab74=rb_intern("Analyze_Variables2_src_dot_loca_ab74");
sy_Analyze_Variables2_src_dot_pred_56d4=rb_intern("Analyze_Variables2_src_dot_pred_56d4");
sy_Analyze_Variables2_src_dot_pure_41d4=rb_intern("Analyze_Variables2_src_dot_pure_41d4");
sy_Analyze_Variables2_src_dot_rule_5acf=rb_intern("Analyze_Variables2_src_dot_rule_5acf");
sy_Analyze_Variables2_src_dot_rule_d270=rb_intern("Analyze_Variables2_src_dot_rule_d270");
sy_Analyze_Variables2_vars_eq__at_lo_cf02=rb_intern("Analyze_Variables2_vars_eq__at_lo_cf02");
rb_define_method(cls_Analyze_Variables2,"flat",Analyze_Variables2_flat,0);
rb_define_method(cls_Analyze_Variables2,"itrans",Analyze_Variables2_itrans,0);
rb_define_method(cls_Analyze_Variables2,"root",Analyze_Variables2_root,0);
rb_define_method(cls_Analyze_Variables2,"traverse",Analyze_Variables2_traverse,0);
rb_define_method(cls_Analyze_Variables2,"traverse_item",Analyze_Variables2_traverse_item,0);
rb_define_method(cls_Analyze_Variables2,"visit",Analyze_Variables2_visit,0);

 cls_Resolve_Calls=rb_define_class("Resolve_Calls",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
switchhash_Resolve_Calls_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Resolve_Calls_1);;
switchhash_Resolve_Calls_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Resolve_Calls_2);;
switchhash_Resolve_Calls_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Array\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Resolve_Calls_3);;
switchhash_Resolve_Calls_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Array\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Resolve_Calls_4);;
switchhash_Resolve_Calls_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Resolve_Calls_5);;
sy_Resolve_Calls__at_changed_5352=rb_intern("Resolve_Calls__at_changed_5352");
sy_Resolve_Calls__at_changed_b885=rb_intern("Resolve_Calls__at_changed_b885");
sy_Resolve_Calls__at_changed_c681=rb_intern("Resolve_Calls__at_changed_c681");
sy_Resolve_Calls__at_grammar_8783=rb_intern("Resolve_Calls__at_grammar_8783");
sy_Resolve_Calls__at_name_eq_bi_f53d=rb_intern("Resolve_Calls__at_name_eq_bi_f53d");
sy_Resolve_Calls__lp_bind_lb_2_rb__6693=rb_intern("Resolve_Calls__lp_bind_lb_2_rb__6693");
sy_Resolve_Calls__lp_src_dot_ins_6a75=rb_intern("Resolve_Calls__lp_src_dot_ins_6a75");
sy_Resolve_Calls_a_eq_Apply_lb__17e8=rb_intern("Resolve_Calls_a_eq_Apply_lb__17e8");
sy_Resolve_Calls_a_eq_Apply_lb__bd30=rb_intern("Resolve_Calls_a_eq_Apply_lb__bd30");
sy_Resolve_Calls_bind_lb_3_rb__lt__bb51=rb_intern("Resolve_Calls_bind_lb_3_rb__lt__bb51");
sy_Resolve_Calls_if_sp_bind_lb__f1e9=rb_intern("Resolve_Calls_if_sp_bind_lb__f1e9");
sy_Resolve_Calls_src_25d9=rb_intern("Resolve_Calls_src_25d9");
sy_Resolve_Calls_src_dot_name_80f3=rb_intern("Resolve_Calls_src_dot_name_80f3");
sy_Resolve_Calls_super_na_3133=rb_intern("Resolve_Calls_super_na_3133");
rb_define_method(cls_Resolve_Calls,"root",Resolve_Calls_root,0);
rb_define_method(cls_Resolve_Calls,"traverse",Resolve_Calls_traverse,0);
rb_define_method(cls_Resolve_Calls,"traverse_item",Resolve_Calls_traverse_item,0);
rb_define_method(cls_Resolve_Calls,"visit",Resolve_Calls_visit,0);
 rb_eval_string("testversiondetect_variables2('021a5ab70f291672308250f46a44a436')");}
