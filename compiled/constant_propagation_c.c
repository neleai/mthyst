#include "cthyst.h"
VALUE cls_Constant_Propagator;
VALUE AmethystCore_anything(VALUE self );
VALUE Constant_Propagator_root(VALUE self );
VALUE Constant_Propagator_step(VALUE self ,VALUE a0);
VALUE switchhash_Constant_Propagator_1;
VALUE switchhash_Constant_Propagator_2;
static VALUE sy_Constant_Propagator_Constant_8840;
static VALUE sy_Constant_Propagator_Constant_ab63;
static VALUE sy_Constant_Propagator_Constant_bf42;
static VALUE sy_Constant_Propagator__at_depend_eq__f9fc;
static VALUE sy_Constant_Propagator_a_eq_Consta_dc3b;
static VALUE sy_Constant_Propagator_src_25d9;
static VALUE sy_valof;
VALUE Constant_Propagator_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*it*/,it);
it=rb_funcall(self,sy_Constant_Propagator__at_depend_eq__f9fc,1,bind);  bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Constant_Propagator_step(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(18); bind_aset(bind,0/*el*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*el*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_1,rb_obj_class(ame_curobj(self))))){case 0/*Act*/:; int oldpos1=ptr->pos;
alt1_1: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_2,rb_obj_class(ame_curobj(self))))){case 0/*Lambda*/:;   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Constant_Propagator_Constant_8840,1,bind);  bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto pass2;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2; break;
case 1/*Local*/:;   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len; it=rb_funcall(self,sy_Constant_Propagator_src_25d9,1,bind);  arg0=it; it=rb_funcall(self,sy_valof,1,arg0); FAILTEST(pass4); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto pass2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2; break;
case 2/*Object*/:; goto pass2; break;
}
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt1_2;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,8/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept1;
  alt1_3:  ptr->pos=oldpos1; goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Bind*/:; int oldpos2=ptr->pos;
alt2_1: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; int fail5=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,10/*expr*/,it);
 it=bind_aget(bind,10/*expr*/); arg0=it; it=rb_funcall(self,sy_valof,1,arg0); FAILTEST(pass5); bind_aset(bind,11/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: fail5=1;
	success5: *ptr=oldpass5;
	if(fail5) goto alt2_2;
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,8/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept2;
  alt2_3:  ptr->pos=oldpos2; goto pass1;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 2/*CAct*/:; int oldpos3=ptr->pos;
alt3_1: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass6=*ptr; int fail6=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Constant_Propagator_src_25d9,1,bind);  bind_aset(bind,13/*val*/,it);
it=rb_funcall(self,sy_Constant_Propagator_Constant_ab63,1,bind);  bind_aset(bind,14/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
	goto success6;
	pass6: fail6=1;
	success6: *ptr=oldpass6;
	if(fail6) goto alt3_2;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,8/*autovar*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept3;
  alt3_3:  ptr->pos=oldpos3; goto pass1;
 accept3:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 3/*Local*/:; int oldpos4=ptr->pos;
alt4_1: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass7=*ptr; int fail7=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Constant_Propagator_a_eq_Consta_dc3b,1,bind);  bind_aset(bind,16/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
	goto success7;
	pass7: fail7=1;
	success7: *ptr=oldpass7;
	if(fail7) goto alt4_2;
it=bind_aget(bind,16/*autovar*/); bind_aset(bind,8/*autovar*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept4;
  alt4_3:  ptr->pos=oldpos4; goto pass1;
 accept4:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 4/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1);it=rb_funcall(self,sy_Constant_Propagator_Constant_bf42,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
}
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,17/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Constant_Traverser;
VALUE AmethystCore_anything(VALUE self );
VALUE Constant_Traverser_root(VALUE self );
VALUE Constant_Traverser_traverse(VALUE self );
VALUE Constant_Traverser_traverse_item(VALUE self );
VALUE Constant_Traverser_visit(VALUE self );
VALUE switchhash_Constant_Traverser_1;
VALUE switchhash_Constant_Traverser_2;
static VALUE sy_Constant_Traverser_Bind_lb_src_41c9;
static VALUE sy_Constant_Traverser__at_changed_5352;
static VALUE sy_Constant_Traverser__at_changed_b885;
static VALUE sy_Constant_Traverser__at_changed_c681;
static VALUE sy_Constant_Traverser__at_consts_eq__b621;
static VALUE sy_Constant_Traverser__lp__at_consts_080b;
static VALUE sy_Constant_Traverser__lp_bind_lb_2_rb__6693;
static VALUE sy_Constant_Traverser__lp_src_dot_ins_6a75;
static VALUE sy_Constant_Traverser_bind_lb_5_rb__lt__1671;
static VALUE sy_Constant_Traverser_if_sp_bind_lb__f1e9;
static VALUE sy_Constant_Traverser_src_25d9;
static VALUE sy_Constant_Traverser_src_dot_cfg_eq__15aa;
VALUE Constant_Traverser_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Constant_Traverser__at_consts_eq__b621,1,bind); it=rb_funcall(self,sy_Constant_Traverser_src_dot_cfg_eq__15aa,1,bind);   it=Constant_Traverser_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Constant_Traverser_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

ptr->pos=ptr->len;it=rb_funcall(self,sy_Constant_Traverser__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Constant_Traverser_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Constant_Traverser__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos1; while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Constant_Traverser__at_changed_b885,1,bind);   it=Constant_Traverser_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Constant_Traverser__lp_bind_lb_2_rb__6693,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto break1;
  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto pass1;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=rb_funcall(self,sy_Constant_Traverser_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Constant_Traverser_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_2,rb_obj_class(ame_curobj(self))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;
alt1_1: ptr->pos=oldpos1;  it=Constant_Traverser_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Constant_Traverser__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Constant_Traverser_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto alt1_3;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);

;goto accept1;
  alt1_4:  ptr->pos=oldpos1; goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;
alt2_1: ptr->pos=oldpos2;  it=Constant_Traverser_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Constant_Traverser__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos;   it=Constant_Traverser_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Constant_Traverser_bind_lb_5_rb__lt__1671,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto alt2_3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);

;goto accept2;
  alt2_4:  ptr->pos=oldpos2; goto fail;
 accept2:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;
alt3_1: ptr->pos=oldpos4;  it=Constant_Traverser_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Constant_Traverser__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept3;
  alt3_3:  ptr->pos=oldpos4; goto fail;
 accept3:;
 break;
}
return it;
fail: return failobj; }
VALUE Constant_Traverser_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_1,rb_obj_class(ame_curobj(self))))){case 0/*Act*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; int fail1=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Constant_Traverser_src_25d9,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: fail1=1;
	success1: *ptr=oldpass1;
	if(fail1) goto fail;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);
 break;
case 1/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; int fail2=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Constant_Traverser_traverse_item(self ); FAILTEST(pass2); bind_aset(bind,4/*expr*/,it);
it=rb_funcall(self,sy_Constant_Traverser_Bind_lb_src_41c9,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: fail2=1;
	success2: *ptr=oldpass2;
	if(fail2) goto fail;
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,2/*_result*/,it);
 break;
case 2/*Local*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; int fail3=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Constant_Traverser__lp__at_consts_080b,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: fail3=1;
	success3: *ptr=oldpass3;
	if(fail3) goto fail;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,2/*_result*/,it);
 break;
case 3/*Result*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; int fail4=0; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Constant_Traverser_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: fail4=1;
	success4: *ptr=oldpass4;
	if(fail4) goto fail;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,2/*_result*/,it);
 break;
case 4/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_constant_propagation_c(){ 
 cls_Constant_Propagator=rb_define_class("Constant_Propagator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
switchhash_Constant_Propagator_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Propagator_1);;
switchhash_Constant_Propagator_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Lambda\nnext h[k]=1 if k<=Local\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Propagator_2);;
sy_Constant_Propagator_Constant_8840=rb_intern("Constant_Propagator_Constant_8840");
sy_Constant_Propagator_Constant_ab63=rb_intern("Constant_Propagator_Constant_ab63");
sy_Constant_Propagator_Constant_bf42=rb_intern("Constant_Propagator_Constant_bf42");
sy_Constant_Propagator__at_depend_eq__f9fc=rb_intern("Constant_Propagator__at_depend_eq__f9fc");
sy_Constant_Propagator_a_eq_Consta_dc3b=rb_intern("Constant_Propagator_a_eq_Consta_dc3b");
sy_Constant_Propagator_src_25d9=rb_intern("Constant_Propagator_src_25d9");
sy_valof=rb_intern("valof");
rb_define_method(cls_Constant_Propagator,"root",Constant_Propagator_root,0);
rb_define_method(cls_Constant_Propagator,"step",Constant_Propagator_step,1);

 cls_Constant_Traverser=rb_define_class("Constant_Traverser",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
switchhash_Constant_Traverser_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Local\nnext h[k]=3 if k<=Result\nnext h[k]=4 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Traverser_1);;
switchhash_Constant_Traverser_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Constant_Traverser_2);;
sy_Constant_Traverser_Bind_lb_src_41c9=rb_intern("Constant_Traverser_Bind_lb_src_41c9");
sy_Constant_Traverser__at_changed_5352=rb_intern("Constant_Traverser__at_changed_5352");
sy_Constant_Traverser__at_changed_b885=rb_intern("Constant_Traverser__at_changed_b885");
sy_Constant_Traverser__at_changed_c681=rb_intern("Constant_Traverser__at_changed_c681");
sy_Constant_Traverser__at_consts_eq__b621=rb_intern("Constant_Traverser__at_consts_eq__b621");
sy_Constant_Traverser__lp__at_consts_080b=rb_intern("Constant_Traverser__lp__at_consts_080b");
sy_Constant_Traverser__lp_bind_lb_2_rb__6693=rb_intern("Constant_Traverser__lp_bind_lb_2_rb__6693");
sy_Constant_Traverser__lp_src_dot_ins_6a75=rb_intern("Constant_Traverser__lp_src_dot_ins_6a75");
sy_Constant_Traverser_bind_lb_5_rb__lt__1671=rb_intern("Constant_Traverser_bind_lb_5_rb__lt__1671");
sy_Constant_Traverser_if_sp_bind_lb__f1e9=rb_intern("Constant_Traverser_if_sp_bind_lb__f1e9");
sy_Constant_Traverser_src_25d9=rb_intern("Constant_Traverser_src_25d9");
sy_Constant_Traverser_src_dot_cfg_eq__15aa=rb_intern("Constant_Traverser_src_dot_cfg_eq__15aa");
rb_define_method(cls_Constant_Traverser,"root",Constant_Traverser_root,0);
rb_define_method(cls_Constant_Traverser,"traverse",Constant_Traverser_traverse,0);
rb_define_method(cls_Constant_Traverser,"traverse_item",Constant_Traverser_traverse_item,0);
rb_define_method(cls_Constant_Traverser,"visit",Constant_Traverser_visit,0);
 rb_eval_string("testversionconstant_propagation('6fc765530f93fbd98ea7ed3708f48f54')");}
