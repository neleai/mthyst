#include "cthyst.h"
VALUE cls_Remove_Left_Recursion;
VALUE AmethystCore_anything(VALUE self );
VALUE Remove_Left_Recursion_rec(VALUE self ,VALUE a0,VALUE a1);
VALUE Remove_Left_Recursion_rec(VALUE self ,VALUE,VALUE);
VALUE Remove_Left_Recursion_root(VALUE self );
VALUE Remove_Left_Recursion_start(VALUE self );
VALUE switchhash_Remove_Left_Recursion_1;
VALUE switchhash_Remove_Left_Recursion_2;
VALUE switchhash_Remove_Left_Recursion_3;
VALUE switchhash_Remove_Left_Recursion_4;
VALUE switchhash_Remove_Left_Recursion_5;
VALUE switchhash_Remove_Left_Recursion_6;
VALUE switchhash_Remove_Left_Recursion_7;
VALUE switchhash_Remove_Left_Recursion_8;
static VALUE sy_Remove_Left_Recursion_Bind_lb_bin_3e0d;
static VALUE sy_Remove_Left_Recursion_Bind_lb_bin_d522;
static VALUE sy_Remove_Left_Recursion_Seq_lb_Seq_lb__f6ac;
static VALUE sy_Remove_Left_Recursion_Seq_lb__ti__lp__lb_b_e705;
static VALUE sy_Remove_Left_Recursion__append_lp__05b0;
static VALUE sy_Remove_Left_Recursion__append_lp__50f6;
static VALUE sy_Remove_Left_Recursion__append_lp__769c;
static VALUE sy_Remove_Left_Recursion__append_lp__b375;
static VALUE sy_Remove_Left_Recursion__append_lp__fedd;
static VALUE sy_Remove_Left_Recursion__lp_src_dot_nam_5024;
static VALUE sy_Remove_Left_Recursion__lp_src_dot_nam_58e8;
static VALUE sy_Remove_Left_Recursion_src_25d9;
static VALUE sy_Remove_Left_Recursion_src_dot_ary_lb__d09f;
static VALUE sy_Remove_Left_Recursion_src_dot_body_519e;
static VALUE sy_Remove_Left_Recursion_src_dot_expr_ef77;
static VALUE sy_Remove_Left_Recursion_src_dot_name_80f3;
VALUE Remove_Left_Recursion_rec(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(11); bind_aset(bind,1/*name*/,a0);bind_aset(bind,2/*a*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_8,rb_obj_class(ame_curobj(self))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Remove_Left_Recursion__lp_src_dot_nam_58e8,1,bind); FAILTEST(pass1);  it=AmethystCore_anything(self ); FAILTEST(pass1);it=bind_aget(bind,2/*a*/); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);
 break;
case 1/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_name_80f3,1,bind);  bind_aset(bind,6/*n*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_expr_ef77,1,bind);  bind_aset(bind,7/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,7/*autovar*/);ptr->len=1;
  it=bind_aget(bind,1/*name*/); arg0=it;it=bind_aget(bind,2/*a*/); arg1=it; it=Remove_Left_Recursion_rec(self ,arg0,arg1); FAILTEST(pass3); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*expr*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_bin_3e0d,1,bind);  bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto fail;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,4/*_result*/,it);
 break;
case 2/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Remove_Left_Recursion_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(34);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_1,rb_obj_class(ame_curobj(self))))){case 0/*Rule*/:; it=rb_ary_new3(0); bind_aset(bind,0/*next*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*first*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_name_80f3,1,bind);  bind_aset(bind,3/*name*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_body_519e,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
 switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_2,rb_obj_class(ame_curobj(self))))){case 0/*Seq*/:;   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2; break;
case 1/*Object*/:; goto pass2; break;
}
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_ary_lb__d09f,1,bind);  bind_aset(bind,7/*result*/,it);
it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Remove_Left_Recursion_start(self ); FAILTEST(break1); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__b375,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,8/*autovar*/); bind_aset(bind,10/*init*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_3,rb_obj_class(ame_curobj(self))))){case 0/*Or*/:;   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,11/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass3; break;
}cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos2; while(1){oldpos2=ame_getpos(self); switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_4,rb_obj_class(ame_curobj(self))))){case 0/*Seq*/:; int oldpos3=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=bind_aget(bind,7/*result*/); bind_aset(bind,13/*a*/,it);
it=bind_aget(bind,3/*name*/); bind_aset(bind,14/*name*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_5,rb_obj_class(ame_curobj(self))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Remove_Left_Recursion__lp_src_dot_nam_5024,1,bind); FAILTEST(pass6);  it=AmethystCore_anything(self ); FAILTEST(pass6);it=bind_aget(bind,13/*a*/); bind_aset(bind,16/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto pass5;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,17/*_result*/,it);
 break;
case 1/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_name_80f3,1,bind);  bind_aset(bind,19/*n*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_expr_ef77,1,bind);  bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; int fail8=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
  it=bind_aget(bind,14/*name*/); arg0=it;it=bind_aget(bind,13/*a*/); arg1=it; it=Remove_Left_Recursion_rec(self ,arg0,arg1); FAILTEST(pass8); bind_aset(bind,21/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
	goto success8;
	pass8: fail8=1;
	success8: *ptr=oldpass8;
	if(fail8) goto pass7;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*expr*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion_Bind_lb_bin_d522,1,bind);  bind_aset(bind,23/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto pass5;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,17/*_result*/,it);
 break;
case 2/*Object*/:; goto pass5; break;
}it=bind_aget(bind,17/*_result*/); bind_aset(bind,24/*r*/,it);
it=rb_ary_new3(0); bind_aset(bind,25/*autovar*/,it);
int oldpos4; while(1){oldpos4=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,26/*autovar*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__05b0,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos4=ame_getpos(self);goto break3;} } } break3: ame_setstop(self,Qnil);  ame_setpos(self,oldpos4); it=bind_aget(bind,25/*autovar*/); bind_aset(bind,27/*rest*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb__ti__lp__lb_b_e705,1,bind);  bind_aset(bind,28/*autovar*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__50f6,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt1_2;
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,29/*autovar*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__fedd,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos3); goto break2;
 accept1:;
 break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,29/*autovar*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__fedd,1,bind);  break;
} if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto pass3;
it=rb_ary_new3(0); bind_aset(bind,30/*autovar*/,it);
int oldpos5; while(1){oldpos5=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,31/*autovar*/,it);
it=rb_funcall(self,sy_Remove_Left_Recursion__append_lp__769c,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos5=ame_getpos(self);goto break4;} } } break4: ame_setstop(self,Qnil);  ame_setpos(self,oldpos5); it=bind_aget(bind,30/*autovar*/); bind_aset(bind,32/*finish*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass1;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Remove_Left_Recursion_Seq_lb_Seq_lb__f6ac,1,bind);  bind_aset(bind,33/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Remove_Left_Recursion_start(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_6,rb_obj_class(ame_curobj(self))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Local*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case 3/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Remove_Left_Recursion_src_dot_expr_ef77,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
 switch(FIX2LONG(rb_hash_aref(switchhash_Remove_Left_Recursion_7,rb_obj_class(ame_curobj(self))))){case 0/*Act*/:case 1/*Bind*/:case 2/*CAct*/:case 3/*Local*/:;   it=Remove_Left_Recursion_start(self ); FAILTEST(pass2);it=Qnil;if (ptr->pos<ptr->len) goto pass2; break;
case 4/*Object*/:; goto pass2; break;
}
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=rb_funcall(self,sy_Remove_Left_Recursion_src_25d9,1,bind);  bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,0/*_result*/,it);
 break;
case 4/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_remove_left_rigth_recursion_c(){ 
 cls_Remove_Left_Recursion=rb_define_class("Remove_Left_Recursion",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
switchhash_Remove_Left_Recursion_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Remove_Left_Recursion_1);;
switchhash_Remove_Left_Recursion_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Remove_Left_Recursion_2);;
switchhash_Remove_Left_Recursion_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Remove_Left_Recursion_3);;
switchhash_Remove_Left_Recursion_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Remove_Left_Recursion_4);;
switchhash_Remove_Left_Recursion_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Remove_Left_Recursion_5);;
switchhash_Remove_Left_Recursion_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Local\nnext h[k]=3 if k<=Bind\nnext h[k]=4 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Remove_Left_Recursion_6);;
switchhash_Remove_Left_Recursion_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Remove_Left_Recursion_7);;
switchhash_Remove_Left_Recursion_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Remove_Left_Recursion_8);;
sy_Remove_Left_Recursion_Bind_lb_bin_3e0d=rb_intern("Remove_Left_Recursion_Bind_lb_bin_3e0d");
sy_Remove_Left_Recursion_Bind_lb_bin_d522=rb_intern("Remove_Left_Recursion_Bind_lb_bin_d522");
sy_Remove_Left_Recursion_Seq_lb_Seq_lb__f6ac=rb_intern("Remove_Left_Recursion_Seq_lb_Seq_lb__f6ac");
sy_Remove_Left_Recursion_Seq_lb__ti__lp__lb_b_e705=rb_intern("Remove_Left_Recursion_Seq_lb__ti__lp__lb_b_e705");
sy_Remove_Left_Recursion__append_lp__05b0=rb_intern("Remove_Left_Recursion__append_lp__05b0");
sy_Remove_Left_Recursion__append_lp__50f6=rb_intern("Remove_Left_Recursion__append_lp__50f6");
sy_Remove_Left_Recursion__append_lp__769c=rb_intern("Remove_Left_Recursion__append_lp__769c");
sy_Remove_Left_Recursion__append_lp__b375=rb_intern("Remove_Left_Recursion__append_lp__b375");
sy_Remove_Left_Recursion__append_lp__fedd=rb_intern("Remove_Left_Recursion__append_lp__fedd");
sy_Remove_Left_Recursion__lp_src_dot_nam_5024=rb_intern("Remove_Left_Recursion__lp_src_dot_nam_5024");
sy_Remove_Left_Recursion__lp_src_dot_nam_58e8=rb_intern("Remove_Left_Recursion__lp_src_dot_nam_58e8");
sy_Remove_Left_Recursion_src_25d9=rb_intern("Remove_Left_Recursion_src_25d9");
sy_Remove_Left_Recursion_src_dot_ary_lb__d09f=rb_intern("Remove_Left_Recursion_src_dot_ary_lb__d09f");
sy_Remove_Left_Recursion_src_dot_body_519e=rb_intern("Remove_Left_Recursion_src_dot_body_519e");
sy_Remove_Left_Recursion_src_dot_expr_ef77=rb_intern("Remove_Left_Recursion_src_dot_expr_ef77");
sy_Remove_Left_Recursion_src_dot_name_80f3=rb_intern("Remove_Left_Recursion_src_dot_name_80f3");
rb_define_method(cls_Remove_Left_Recursion,"rec",Remove_Left_Recursion_rec,2);
rb_define_method(cls_Remove_Left_Recursion,"root",Remove_Left_Recursion_root,0);
rb_define_method(cls_Remove_Left_Recursion,"start",Remove_Left_Recursion_start,0);
 rb_eval_string("testversionremove_left_rigth_recursion('4a798110de1b15df32141c58c0f5e700')");}
