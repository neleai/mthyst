#include "cthyst.h"
VALUE cls_AmethystCTranslator;
VALUE AmethystCTranslator_add_c_global(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0);
VALUE AmethystCTranslator_addlambda(VALUE self );
VALUE AmethystCTranslator_itrans(VALUE self );
VALUE AmethystCTranslator_rbcode(VALUE self );
VALUE AmethystCTranslator_rbtrans(VALUE self );
VALUE AmethystCTranslator_rbtrans2(VALUE self );
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystCTranslator_trans(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE switchhash_AmethystCTranslator_1;
VALUE switchhash_AmethystCTranslator_2;
VALUE switchhash_AmethystCTranslator_3;
VALUE switchhash_AmethystCTranslator_4;
VALUE switchhash_AmethystCTranslator_5;
static VALUE i_0;
static VALUE i_1;
static VALUE s__d41d;
static VALUE s_alt_3482;
static VALUE s_fail_e111;
static VALUE s_it_eq_Qnil;
static VALUE s_it_eq_ame_c_4b8d;
static VALUE s_it_eq_rb_st_ee66;
static VALUE s_oldpass_6559;
static VALUE s_pass_1a1d;
static VALUE s_ptr_mi__gt_pos_db4c;
static VALUE s_success_260c;
static VALUE s_switch_lp__lp__a839;
static VALUE sy_AmethystCTranslator__append_lp__3a29;
static VALUE sy_AmethystCTranslator__append_lp__3d0f;
static VALUE sy_AmethystCTranslator__append_lp__5e3c;
static VALUE sy_AmethystCTranslator__append_lp__7ec6;
static VALUE sy_AmethystCTranslator__append_lp__81ec;
static VALUE sy_AmethystCTranslator__append_lp__cbd1;
static VALUE sy_AmethystCTranslator__append_lp__d113;
static VALUE sy_AmethystCTranslator__at_callbac_2d11;
static VALUE sy_AmethystCTranslator__at_callbac_e37c;
static VALUE sy_AmethystCTranslator__at_cutlabe_7393;
static VALUE sy_AmethystCTranslator__at_cutlabe_b3fd;
static VALUE sy_AmethystCTranslator__at_cuts_7bbc;
static VALUE sy_AmethystCTranslator__at_cuts_eq_ni_f875;
static VALUE sy_AmethystCTranslator__at_cuts_eq_tr_13c6;
static VALUE sy_AmethystCTranslator__at_defmeth_456b;
static VALUE sy_AmethystCTranslator__at_defs_eq__lb__rb__188f;
static VALUE sy_AmethystCTranslator__at_faillab_1610;
static VALUE sy_AmethystCTranslator__at_faillab_37e7;
static VALUE sy_AmethystCTranslator__at_faillab_4a73;
static VALUE sy_AmethystCTranslator__at_faillab_5f0a;
static VALUE sy_AmethystCTranslator__at_faillab_74ee;
static VALUE sy_AmethystCTranslator__at_faillab_8142;
static VALUE sy_AmethystCTranslator__at_faillab_e643;
static VALUE sy_AmethystCTranslator__at_grammar_1337;
static VALUE sy_AmethystCTranslator__at_header_eq__7aa9;
static VALUE sy_AmethystCTranslator__at_header_lt__09ca;
static VALUE sy_AmethystCTranslator__at_header_lt__62d2;
static VALUE sy_AmethystCTranslator__at_init_eq__lb__rb__47da;
static VALUE sy_AmethystCTranslator__at_init_sp__sp__lt__ea5b;
static VALUE sy_AmethystCTranslator__at_lambdas_ecda;
static VALUE sy_AmethystCTranslator__at_rulenam_d72e;
static VALUE sy_AmethystCTranslator__at_stoplab_2ba4;
static VALUE sy_AmethystCTranslator__at_stoplab_a14e;
static VALUE sy_AmethystCTranslator__at_stops_e2b4;
static VALUE sy_AmethystCTranslator__at_stops_eq_n_588d;
static VALUE sy_AmethystCTranslator__at_stops_eq_t_c6ab;
static VALUE sy_AmethystCTranslator__dq_Amethys_8b00;
static VALUE sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf;
static VALUE sy_AmethystCTranslator__dq__at__sh__le_bind_f173;
static VALUE sy_AmethystCTranslator__dq__sh__le__at_gram_5de9;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__1eef;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__4c59;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__965a;
static VALUE sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf;
static VALUE sy_AmethystCTranslator__dq_class_sp__sh__0b62;
static VALUE sy_AmethystCTranslator__dq_cstruct_061f;
static VALUE sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b;
static VALUE sy_AmethystCTranslator__dq_goto_sp__sh__le__f772;
static VALUE sy_AmethystCTranslator__dq_if_lp_ptr_mi__6e29;
static VALUE sy_AmethystCTranslator__dq_if_sp__lp__sh__le_a_11e0;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_127b;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_88ff;
static VALUE sy_AmethystCTranslator__dq_it_eq_Qnil_8464;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_rb_79a3;
static VALUE sy_AmethystCTranslator__dq_switch_lp__e906;
static VALUE sy_AmethystCTranslator__dq_switchh_f207;
static VALUE sy_AmethystCTranslator__lb_bind_lb_1_rb__8404;
static VALUE sy_AmethystCTranslator__lp_Current_4bd3;
static VALUE sy_AmethystCTranslator__lp_bind_lb_3_rb__e49d;
static VALUE sy_AmethystCTranslator__lp_bind_lb_6_rb__79e0;
static VALUE sy_AmethystCTranslator_addcallb_68bb;
static VALUE sy_AmethystCTranslator_addcallb_dcd7;
static VALUE sy_AmethystCTranslator_ar_eq__ti_src_dot__efea;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__lt__cac1;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__pl__40f3;
static VALUE sy_AmethystCTranslator_bind_lb_0_rb__pl__c1a5;
static VALUE sy_AmethystCTranslator_bind_lb_115_c115;
static VALUE sy_AmethystCTranslator_bind_lb_16_rb__1922;
static VALUE sy_AmethystCTranslator_bind_lb_16_rb__24cb;
static VALUE sy_AmethystCTranslator_bind_lb_16_rb__2732;
static VALUE sy_AmethystCTranslator_bind_lb_16_rb__4555;
static VALUE sy_AmethystCTranslator_bind_lb_16_rb__6742;
static VALUE sy_AmethystCTranslator_bind_lb_16_rb__878f;
static VALUE sy_AmethystCTranslator_bind_lb_16_rb__b2cf;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50;
static VALUE sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8;
static VALUE sy_AmethystCTranslator_bind_lb_35_rb__2567;
static VALUE sy_AmethystCTranslator_bind_lb_3_rb_;
static VALUE sy_AmethystCTranslator_bind_lb_54_rb__06ed;
static VALUE sy_AmethystCTranslator_bind_lb_83_rb__7cae;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_0b24;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_5d11;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_f86b;
static VALUE sy_AmethystCTranslator_label_lp__dq_a_f49c;
static VALUE sy_AmethystCTranslator_label_lp__dq_b_6df7;
static VALUE sy_AmethystCTranslator_label_lp__dq_o_c187;
static VALUE sy_AmethystCTranslator_label_lp__dq_r_95b2;
static VALUE sy_AmethystCTranslator_mktable_lp__ea79;
static VALUE sy_AmethystCTranslator_r_eq__dq__sp__sh__le_bi_39fa;
static VALUE sy_AmethystCTranslator_raise_sp__dq_T_0ab1;
static VALUE sy_AmethystCTranslator_rbbget_lp_s_68a8;
static VALUE sy_AmethystCTranslator_src_25d9;
static VALUE sy_AmethystCTranslator_src_dot_body_519e;
static VALUE sy_AmethystCTranslator_src_dot_name_80f3;
static VALUE sy_AmethystCTranslator_src_dot_rule_5acf;
static VALUE sy_AmethystCTranslator_src_dot_to_5e99;
static VALUE sy_apply;
static VALUE sy_label;
VALUE AmethystCTranslator_add_c_global(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(3); bind_aset(bind,0/*name*/,a0);bind_aset(bind,1/*expr*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__09ca,1,bind);  bind_aset(bind,2/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                     it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,2/*autovar*/); bind_aset(bind,0/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_addcallb_dcd7,1,bind);  bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_addlambda(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le__at_gram_5de9,1,bind);  bind_aset(bind,0/*lambd*/,it);
it=rb_obj_clone(s_fail_e111); bind_aset(bind,1/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,2/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(fail); bind_aset(bind,3/*body*/,it);
 bind_aset(bind,4/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_74ee,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_f86b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_Amethys_8b00,1,bind);  bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*ruby*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*c*/,it);
it=rb_ary_new3(0); bind_aset(bind,2/*init*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,3/*c*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_3_rb__e49d,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_3_rb_,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__81ec,1,bind); 
;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystCTranslator_trans(self ); FAILTEST(alt1_3); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50,1,bind); 
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 } break1: ptr->pos=oldpos1;   it=rb_funcall(self,sy_AmethystCTranslator__lb_bind_lb_1_rb__8404,1,bind);  bind_aset(bind,7/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbcode(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystCTranslator__dq_class_sp__sh__0b62,1,bind);  bind_aset(bind,0/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__lt__cac1,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_2d11,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,5/*k*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*v*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto break1;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__5e3c,1,bind);  } break1: ptr->pos=oldpos1;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,8/*x*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__pl__c1a5,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_0_rb__pl__40f3,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Global*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*name*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt3_2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_AmethystCTranslator__dq__at__sh__le_bind_f173,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 3/*Key*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,6/*name*/,it);
  it=AmethystCTranslator_rbtrans(self ); FAILTEST(pass4); bind_aset(bind,8/*args*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt4_2;
                   success4: *ptr=oldpass4;
                it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_6_rb__79e0,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 4/*Lambda*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_addlambda(self ); FAILTEST(pass5); bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt5_2;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,10/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 5/*Local*/:; int oldpos6=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,11/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator_rbbget_lp_s_68a8,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt6_2;
                   success6: *ptr=oldpass6;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos6;goto fail;
 accept6:;
 break;
case 6/*Result*/:; int oldpos7=ptr->pos;int cut7=0;
alt7_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,13/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf,1,bind);  bind_aset(bind,14/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt7_2;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,14/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept7;
alt7_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,2/*_result*/,it);

;goto accept7;
alt7_3: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
case 7/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCTranslator_rbtrans(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__cbd1,1,bind);  } break1: ptr->pos=oldpos1;   it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8,1,bind);  bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(5); bind_aset(bind,1/*word*/,a0);bind_aset(bind,2/*prc*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,0/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind);  it=bind_aget(bind,2/*prc*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(fail); bind_aset(bind,3/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_37e7,1,bind);  bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystCTranslator_trans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(121);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d113,1,bind);  } break1: ptr->pos=oldpos1;   it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_addcallb_68bb,1,bind);  bind_aset(bind,4/*cbno*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_rb_79a3,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 1/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,7/*autovar*/,it);
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*autovar*/,it);
int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass3; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='f'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='n'&&ame_curstr2(ptr)[3]=='d')  ptr->pos+=4; else goto pass3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_AmethystCTranslator_raise_sp__dq_T_0ab1,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt1_2: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,13/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,13/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass5; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='t'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='t'&&ame_curstr2(ptr)[4]=='_'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='i'&&ame_curstr2(ptr)[7]=='z'&&ame_curstr2(ptr)[8]=='e')  ptr->pos+=9; else goto pass5; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass4;
                   success5: *ptr=oldpass5;
                switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,15/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass4; break;
}cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,16/*s*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto pass4;
                   success6: *ptr=oldpass6;
                it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt1_3;
                   success4: *ptr=oldpass4;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_if_lp_ptr_mi__6e29,1,bind);  bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt1_3: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,17/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass7); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass8);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass8; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass8; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto pass7;
                   success8: *ptr=oldpass8;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_goto_sp__sh__le__f772,1,bind);  bind_aset(bind,19/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt1_4;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,19/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt1_4: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,20/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass9); bind_aset(bind,21/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,21/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass10);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'd':;case 'f' ... UC(255):; goto pass10; break;
case 'e' ... 'e':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='o'&&ame_curstr2(ptr)[1]=='f')  ptr->pos+=2; else goto pass10; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto pass9;
                   success10: *ptr=oldpass10;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq_Qnil_8464,1,bind);  bind_aset(bind,22/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt1_5;
                   success9: *ptr=oldpass9;
                it=bind_aget(bind,22/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt1_5: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass11); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass12);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'd':;case 'f' ... UC(255):; goto pass12; break;
case 'e' ... 'e':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass12; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto pass11;
                   success12: *ptr=oldpass12;
                it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt1_6;
                   success11: *ptr=oldpass11;
                it=rb_obj_clone(s_it_eq_Qnil); bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt1_6: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,25/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,25/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass13); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass14);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass14; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='h'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='r')  ptr->pos+=11; else goto pass14; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto pass13;
                   success14: *ptr=oldpass14;
                it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto alt1_7;
                   success13: *ptr=oldpass13;
                it=rb_obj_clone(s_it_eq_rb_st_ee66); bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt1_7: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,27/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,27/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass15); bind_aset(bind,28/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,28/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass16);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass16; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='d'&&ame_curstr2(ptr)[1]=='v'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='n'&&ame_curstr2(ptr)[4]=='c'&&ame_curstr2(ptr)[5]=='e'&&ame_curstr2(ptr)[6]=='_'&&ame_curstr2(ptr)[7]=='c'&&ame_curstr2(ptr)[8]=='l'&&ame_curstr2(ptr)[9]=='a'&&ame_curstr2(ptr)[10]=='s')  ptr->pos+=11; else goto pass16; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass16;
                   goto success16;
                   pass16: *ptr=oldpass16; goto pass15;
                   success16: *ptr=oldpass16;
                it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto alt1_8;
                   success15: *ptr=oldpass15;
                it=rb_obj_clone(s_it_eq_ame_c_4b8d); bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt1_8: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,29/*autovar*/,it);
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,29/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass17); bind_aset(bind,30/*autovar*/,it);
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,30/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass18);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass18; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass18; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto pass17;
                   success18: *ptr=oldpass18;
                switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,31/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass17; break;
}cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,31/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass19); bind_aset(bind,16/*s*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass19;
                   goto success19;
                   pass19: *ptr=oldpass19; goto pass17;
                   success19: *ptr=oldpass19;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_if_sp__lp__sh__le_a_11e0,1,bind);  bind_aset(bind,32/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass17;
                   goto success17;
                   pass17: *ptr=oldpass17; goto alt1_9;
                   success17: *ptr=oldpass17;
                it=bind_aget(bind,32/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt1_9: ptr->pos=oldpos2;it=bind_aget(bind,9/*autovar*/); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass20); bind_aset(bind,34/*name*/,it);
it=i_0; bind_aset(bind,35/*ii*/,it);
it=rb_ary_new3(0); bind_aset(bind,36/*autovar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=AmethystCTranslator_trans(self ); FAILTEST(break2); bind_aset(bind,37/*aa*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_35_rb__2567,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__1eef,1,bind);  bind_aset(bind,38/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__7ec6,1,bind);  } break2: ptr->pos=oldpos3;   it=bind_aget(bind,36/*autovar*/); bind_aset(bind,39/*args*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_src_25d9,1,bind);  bind_aset(bind,40/*app*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass20;
                   goto success20;
                   pass20: *ptr=oldpass20; goto alt1_10;
                   success20: *ptr=oldpass20;
                it=rb_funcall(self,sy_AmethystCTranslator_r_eq__dq__sp__sh__le_bi_39fa,1,bind);  bind_aset(bind,6/*_result*/,it);

;goto accept2;
alt1_10: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Bind*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,41/*autovar*/,it);
cstruct oldpass21=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,41/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_trans(self ); FAILTEST(pass21); bind_aset(bind,42/*e*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__4c59,1,bind);  bind_aset(bind,43/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass21;
                   goto success21;
                   pass21: *ptr=oldpass21; goto fail;
                   success21: *ptr=oldpass21;
                it=bind_aget(bind,43/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 3/*CAct*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,44/*autovar*/,it);
cstruct oldpass22=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,44/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator_ar_eq__ti_src_dot__efea,1,bind);  bind_aset(bind,45/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass22;
                   goto success22;
                   pass22: *ptr=oldpass22; goto fail;
                   success22: *ptr=oldpass22;
                it=bind_aget(bind,45/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 4/*Cut*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,46/*autovar*/,it);
cstruct oldpass23=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,46/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass23;
                   goto success23;
                   pass23: *ptr=oldpass23; goto fail;
                   success23: *ptr=oldpass23;
                it=rb_funcall(self,sy_AmethystCTranslator__at_cuts_eq_tr_13c6,1,bind);  bind_aset(bind,6/*_result*/,it);
 break;
case 5/*Grammar*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,47/*autovar*/,it);
cstruct oldpass24=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,47/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator__at_grammar_1337,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_lambdas_ecda,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_defs_eq__lb__rb__188f,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_defmeth_456b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_8142,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_e37c,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_mktable_lp__ea79,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_header_eq__7aa9,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_init_eq__lb__rb__47da,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_rule_5acf,1,bind);  bind_aset(bind,48/*autovar*/,it);
cstruct oldpass25=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,48/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass25); bind_aset(bind,49/*autovar*/,it);
cstruct oldpass26=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,49/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,50/*autovar*/,it);
int oldpos4;  while(1){oldpos4=ptr->pos;   it=AmethystCTranslator_trans(self ); FAILTEST(break3); bind_aset(bind,51/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__3d0f,1,bind);  } break3: ptr->pos=oldpos4;   it=bind_aget(bind,50/*autovar*/); bind_aset(bind,52/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass26;
                   goto success26;
                   pass26: *ptr=oldpass26; goto pass25;
                   success26: *ptr=oldpass26;
                it=bind_aget(bind,52/*autovar*/); bind_aset(bind,53/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass25;
                   goto success25;
                   pass25: *ptr=oldpass25; goto pass24;
                   success25: *ptr=oldpass25;
                it=bind_aget(bind,53/*autovar*/); bind_aset(bind,54/*t*/,it);
  it=AmethystCTranslator_rbcode(self ); FAILTEST(pass24); bind_aset(bind,55/*rbcode*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf,1,bind);  bind_aset(bind,16/*s*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_16_rb__b2cf,1,bind);  bind_aset(bind,57/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass24;
                   goto success24;
                   pass24: *ptr=oldpass24; goto fail;
                   success24: *ptr=oldpass24;
                it=bind_aget(bind,57/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 6/*Local*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,58/*autovar*/,it);
cstruct oldpass27=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,58/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f,1,bind);  bind_aset(bind,59/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass27;
                   goto success27;
                   pass27: *ptr=oldpass27; goto fail;
                   success27: *ptr=oldpass27;
                it=bind_aget(bind,59/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 7/*Lookahead*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,60/*autovar*/,it);
cstruct oldpass28=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,60/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind);  bind_aset(bind,61/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_r_95b2,1,bind);  bind_aset(bind,62/*reject*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,63/*oldpos*/,it);
it=bind_aget(bind,62/*reject*/); bind_aset(bind,64/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,65/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_4a73,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass28); bind_aset(bind,54/*t*/,it);
 bind_aset(bind,66/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_5f0a,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_127b,1,bind);  bind_aset(bind,67/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass28;
                   goto success28;
                   pass28: *ptr=oldpass28; goto fail;
                   success28: *ptr=oldpass28;
                it=bind_aget(bind,67/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 8/*Many*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,68/*autovar*/,it);
it=bind_aget(bind,68/*autovar*/); bind_aset(bind,69/*autovar*/,it);
it=bind_aget(bind,69/*autovar*/); bind_aset(bind,70/*autovar*/,it);
int oldpos5=ptr->pos;int cut2=0;
alt2_1:;it=bind_aget(bind,70/*autovar*/); bind_aset(bind,71/*autovar*/,it);
cstruct oldpass29=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,71/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,72/*autovar*/,it);
cstruct oldpass30=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,72/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass30); bind_aset(bind,73/*autovar*/,it);
cstruct oldpass31=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,73/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass31);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass31; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7; else goto pass31; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass31;
                   goto success31;
                   pass31: *ptr=oldpass31; goto pass30;
                   success31: *ptr=oldpass31;
                it=Qnil;if (ptr->pos<ptr->len) goto pass30;
                   goto success30;
                   pass30: *ptr=oldpass30; goto pass29;
                   success30: *ptr=oldpass30;
                it=Qnil;if (ptr->pos<ptr->len) goto pass29; break;
case 1/*Object*/:; goto pass29; break;
}
                   goto success29;
                   pass29: *ptr=oldpass29; goto alt2_2;
                   success29: *ptr=oldpass29;
                it=rb_obj_clone(s_ptr_mi__gt_pos_db4c); bind_aset(bind,6/*_result*/,it);

;goto accept5;
alt2_2: ptr->pos=oldpos5;it=bind_aget(bind,70/*autovar*/); bind_aset(bind,74/*autovar*/,it);
cstruct oldpass32=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,74/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_b_6df7,1,bind);  bind_aset(bind,75/*brk*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,63/*oldpos*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind);  bind_aset(bind,61/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_stops_e2b4,1,bind);  bind_aset(bind,76/*oldstops*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_stoplab_2ba4,1,bind);  bind_aset(bind,77/*oldstoplabel*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_stops_eq_n_588d,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__at_stoplab_a14e,1,bind); it=bind_aget(bind,75/*brk*/); bind_aset(bind,64/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,65/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_4a73,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(pass32); bind_aset(bind,54/*t*/,it);
 bind_aset(bind,66/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_5f0a,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_16_rb__6742,1,bind);  bind_aset(bind,78/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass32;
                   goto success32;
                   pass32: *ptr=oldpass32; goto alt2_3;
                   success32: *ptr=oldpass32;
                it=bind_aget(bind,78/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept5;
alt2_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 9/*Memo*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,79/*autovar*/,it);
cstruct oldpass33=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,79/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator_raise_sp__dq_T_0ab1,1,bind);  bind_aset(bind,80/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass33;
                   goto success33;
                   pass33: *ptr=oldpass33; goto fail;
                   success33: *ptr=oldpass33;
                it=bind_aget(bind,80/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 10/*Or*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,81/*autovar*/,it);
cstruct oldpass34=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,81/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind);  bind_aset(bind,61/*accept*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind);  bind_aset(bind,63/*oldpos*/,it);
 it=rb_obj_clone(s_alt_3482); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass34); bind_aset(bind,82/*alt*/,it);
it=i_1; bind_aset(bind,83/*altno*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_cutlabe_7393,1,bind);  bind_aset(bind,84/*oldcutlabel*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_cuts_7bbc,1,bind);  bind_aset(bind,85/*oldcuts*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_cuts_eq_ni_f875,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_88ff,1,bind);  bind_aset(bind,16/*s*/,it);
int oldpos6;  while(1){oldpos6=ptr->pos; int oldpos7=ptr->pos;
   it=AmethystCore_anything(self ); FAILTEST(reject1); x=1; goto accept7;  reject1: x=0; accept7: it=Qnil; ptr->pos=oldpos7; if (x==0) goto break4;it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_83_rb__7cae,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__965a,1,bind);  bind_aset(bind,64/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,65/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_4a73,1,bind);   it=AmethystCTranslator_trans(self ); FAILTEST(break4); bind_aset(bind,6/*_result*/,it);
 bind_aset(bind,66/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_5f0a,1,bind);  bind_aset(bind,86/*_result*/,it);
it=bind_aget(bind,86/*_result*/); bind_aset(bind,54/*t*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_16_rb__878f,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_16_rb__2732,1,bind);  } break4: ptr->pos=oldpos6;   it=rb_funcall(self,sy_AmethystCTranslator__at_cutlabe_b3fd,1,bind);  bind_aset(bind,87/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass34;
                   goto success34;
                   pass34: *ptr=oldpass34; goto fail;
                   success34: *ptr=oldpass34;
                it=bind_aget(bind,87/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 11/*Pass*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,88/*autovar*/,it);
cstruct oldpass35=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,88/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                    it=rb_obj_clone(s_pass_1a1d); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass35); bind_aset(bind,89/*pass*/,it);
 it=rb_obj_clone(s_oldpass_6559); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass35); bind_aset(bind,90/*oldpass*/,it);
 it=rb_obj_clone(s_success_260c); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass35); bind_aset(bind,91/*success*/,it);
it=bind_aget(bind,89/*pass*/); bind_aset(bind,64/*word*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind);  bind_aset(bind,65/*rwo*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_4a73,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_to_5e99,1,bind);  bind_aset(bind,92/*autovar*/,it);
cstruct oldpass36=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,92/*autovar*/);ptr->len=1;
                     it=AmethystCTranslator_trans(self ); FAILTEST(pass36); bind_aset(bind,93/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass36;
                   goto success36;
                   pass36: *ptr=oldpass36; goto pass35;
                   success36: *ptr=oldpass36;
                it=bind_aget(bind,93/*autovar*/); bind_aset(bind,94/*to*/,it);
 bind_aset(bind,66/*x*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_5f0a,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_cstruct_061f,1,bind);  bind_aset(bind,95/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass35;
                   goto success35;
                   pass35: *ptr=oldpass35; goto fail;
                   success35: *ptr=oldpass35;
                it=bind_aget(bind,95/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 12/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,96/*autovar*/,it);
it=bind_aget(bind,96/*autovar*/); bind_aset(bind,97/*autovar*/,it);
it=bind_aget(bind,97/*autovar*/); bind_aset(bind,98/*autovar*/,it);
int oldpos8=ptr->pos;int cut3=0;
alt3_1:;it=bind_aget(bind,98/*autovar*/); bind_aset(bind,99/*autovar*/,it);
cstruct oldpass37=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,99/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_src_dot_name_80f3,1,bind);  bind_aset(bind,34/*name*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__lp_Current_4bd3,1,bind); FAILTEST(pass37);it=rb_funcall(self,sy_AmethystCTranslator__at_rulenam_d72e,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_body_519e,1,bind);  bind_aset(bind,100/*autovar*/,it);
cstruct oldpass38=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,100/*autovar*/);ptr->len=1;
                     it=AmethystCTranslator_trans(self ); FAILTEST(pass38); bind_aset(bind,101/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass38;
                   goto success38;
                   pass38: *ptr=oldpass38; goto pass37;
                   success38: *ptr=oldpass38;
                it=bind_aget(bind,101/*autovar*/); bind_aset(bind,102/*body*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_0b24,1,bind);  bind_aset(bind,103/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass37;
                   goto success37;
                   pass37: *ptr=oldpass37; goto alt3_2;
                   success37: *ptr=oldpass37;
                it=bind_aget(bind,103/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept8;
alt3_2: ptr->pos=oldpos8;it=bind_aget(bind,98/*autovar*/); bind_aset(bind,104/*autovar*/,it);
cstruct oldpass39=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,104/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_src_dot_name_80f3,1,bind);  bind_aset(bind,34/*name*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_rulenam_d72e,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_src_dot_body_519e,1,bind);  bind_aset(bind,105/*autovar*/,it);
cstruct oldpass40=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,105/*autovar*/);ptr->len=1;
                     it=AmethystCTranslator_trans(self ); FAILTEST(pass40); bind_aset(bind,106/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass40;
                   goto success40;
                   pass40: *ptr=oldpass40; goto pass39;
                   success40: *ptr=oldpass40;
                it=bind_aget(bind,106/*autovar*/); bind_aset(bind,102/*body*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_5d11,1,bind);  bind_aset(bind,107/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass39;
                   goto success39;
                   pass39: *ptr=oldpass39; goto alt3_3;
                   success39: *ptr=oldpass39;
                it=bind_aget(bind,107/*autovar*/); bind_aset(bind,6/*_result*/,it);

;goto accept8;
alt3_3: ptr->pos=oldpos8;goto fail;
 accept8:;
 break;
case 13/*Seq*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,108/*autovar*/,it);
cstruct oldpass41=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,108/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,109/*autovar*/,it);
int oldpos9;  while(1){oldpos9=ptr->pos;   it=AmethystCTranslator_trans(self ); FAILTEST(break5); bind_aset(bind,110/*autovar*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__append_lp__3a29,1,bind);  } break5: ptr->pos=oldpos9;   it=bind_aget(bind,109/*autovar*/); bind_aset(bind,54/*t*/,it);
it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_54_rb__06ed,1,bind);  bind_aset(bind,111/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass41;
                   goto success41;
                   pass41: *ptr=oldpass41; goto fail;
                   success41: *ptr=oldpass41;
                it=bind_aget(bind,111/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 14/*Stop*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,112/*autovar*/,it);
cstruct oldpass42=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,112/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass42;
                   goto success42;
                   pass42: *ptr=oldpass42; goto fail;
                   success42: *ptr=oldpass42;
                it=rb_funcall(self,sy_AmethystCTranslator__at_stops_eq_t_c6ab,1,bind);  bind_aset(bind,6/*_result*/,it);
 break;
case 15/*Switch_Char*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,113/*autovar*/,it);
cstruct oldpass43=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,113/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_obj_clone(s_switch_lp__lp__a839); bind_aset(bind,16/*s*/,it);
int oldpos10;  while(1){oldpos10=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,114/*autovar*/,it);
cstruct oldpass44=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,114/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass44); bind_aset(bind,115/*c*/,it);
  it=AmethystCTranslator_trans(self ); FAILTEST(pass44); bind_aset(bind,54/*t*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass44;
                   goto success44;
                   pass44: *ptr=oldpass44; goto break6;
                   success44: *ptr=oldpass44;
                it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_16_rb__4555,1,bind);  } break6: ptr->pos=oldpos10;   it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_16_rb__1922,1,bind);  bind_aset(bind,116/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass43;
                   goto success43;
                   pass43: *ptr=oldpass43; goto fail;
                   success43: *ptr=oldpass43;
                it=bind_aget(bind,116/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 16/*Switch_Clas*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,117/*autovar*/,it);
cstruct oldpass45=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,117/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator__dq_switchh_f207,1,bind);  bind_aset(bind,118/*sh*/,it);
it=i_0; bind_aset(bind,35/*ii*/,it);
it=rb_obj_clone(s__d41d); bind_aset(bind,56/*init*/,it);
it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__62d2,1,bind); it=rb_funcall(self,sy_AmethystCTranslator__dq_switch_lp__e906,1,bind);  bind_aset(bind,16/*s*/,it);
int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,119/*autovar*/,it);
cstruct oldpass46=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,119/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass46); bind_aset(bind,115/*c*/,it);
  it=AmethystCTranslator_trans(self ); FAILTEST(pass46); bind_aset(bind,54/*t*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass46;
                   goto success46;
                   pass46: *ptr=oldpass46; goto break7;
                   success46: *ptr=oldpass46;
                it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_115_c115,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_16_rb__24cb,1,bind);  } break7: ptr->pos=oldpos11;   it=rb_funcall(self,sy_AmethystCTranslator__at_init_sp__sp__lt__ea5b,1,bind); it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_16_rb__1922,1,bind);  bind_aset(bind,120/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass45;
                   goto success45;
                   pass45: *ptr=oldpass45; goto fail;
                   success45: *ptr=oldpass45;
                it=bind_aget(bind,120/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 17/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_ctranslator2_c(){ 
 cls_AmethystCTranslator=rb_define_class("AmethystCTranslator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    i_0=rb_funcall(rb_str_new2("0"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_0);
i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_1);
s__d41d=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__d41d);
s_alt_3482=rb_str_new2("alt");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_alt_3482);
s_fail_e111=rb_str_new2("fail");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_fail_e111);
s_it_eq_Qnil=rb_str_new2("it=Qnil;");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_it_eq_Qnil);
s_it_eq_ame_c_4b8d=rb_str_new2("it=ame_curobj2(ptr)               ;ptr->pos++;");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_it_eq_ame_c_4b8d);
s_it_eq_rb_st_ee66=rb_str_new2("it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_it_eq_rb_st_ee66);
s_oldpass_6559=rb_str_new2("oldpass");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_oldpass_6559);
s_pass_1a1d=rb_str_new2("pass");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_pass_1a1d);
s_ptr_mi__gt_pos_db4c=rb_str_new2("ptr->pos=ptr->len;");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_ptr_mi__gt_pos_db4c);
s_success_260c=rb_str_new2("success");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_success_260c);
s_switch_lp__lp__a839=rb_str_new2("switch((unsigned char)*ame_curstr2(ptr)){");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_switch_lp__lp__a839);
switchhash_AmethystCTranslator_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Global\nnext h[k]=3 if k<=Key\nnext h[k]=4 if k<=Lambda\nnext h[k]=5 if k<=Local\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_1);;
switchhash_AmethystCTranslator_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_2);;
switchhash_AmethystCTranslator_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_3);;
switchhash_AmethystCTranslator_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_4);;
switchhash_AmethystCTranslator_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystCTranslator_5);;
sy_AmethystCTranslator__append_lp__3a29=rb_intern("AmethystCTranslator__append_lp__3a29");
sy_AmethystCTranslator__append_lp__3d0f=rb_intern("AmethystCTranslator__append_lp__3d0f");
sy_AmethystCTranslator__append_lp__5e3c=rb_intern("AmethystCTranslator__append_lp__5e3c");
sy_AmethystCTranslator__append_lp__7ec6=rb_intern("AmethystCTranslator__append_lp__7ec6");
sy_AmethystCTranslator__append_lp__81ec=rb_intern("AmethystCTranslator__append_lp__81ec");
sy_AmethystCTranslator__append_lp__cbd1=rb_intern("AmethystCTranslator__append_lp__cbd1");
sy_AmethystCTranslator__append_lp__d113=rb_intern("AmethystCTranslator__append_lp__d113");
sy_AmethystCTranslator__at_callbac_2d11=rb_intern("AmethystCTranslator__at_callbac_2d11");
sy_AmethystCTranslator__at_callbac_e37c=rb_intern("AmethystCTranslator__at_callbac_e37c");
sy_AmethystCTranslator__at_cutlabe_7393=rb_intern("AmethystCTranslator__at_cutlabe_7393");
sy_AmethystCTranslator__at_cutlabe_b3fd=rb_intern("AmethystCTranslator__at_cutlabe_b3fd");
sy_AmethystCTranslator__at_cuts_7bbc=rb_intern("AmethystCTranslator__at_cuts_7bbc");
sy_AmethystCTranslator__at_cuts_eq_ni_f875=rb_intern("AmethystCTranslator__at_cuts_eq_ni_f875");
sy_AmethystCTranslator__at_cuts_eq_tr_13c6=rb_intern("AmethystCTranslator__at_cuts_eq_tr_13c6");
sy_AmethystCTranslator__at_defmeth_456b=rb_intern("AmethystCTranslator__at_defmeth_456b");
sy_AmethystCTranslator__at_defs_eq__lb__rb__188f=rb_intern("AmethystCTranslator__at_defs_eq__lb__rb__188f");
sy_AmethystCTranslator__at_faillab_1610=rb_intern("AmethystCTranslator__at_faillab_1610");
sy_AmethystCTranslator__at_faillab_37e7=rb_intern("AmethystCTranslator__at_faillab_37e7");
sy_AmethystCTranslator__at_faillab_4a73=rb_intern("AmethystCTranslator__at_faillab_4a73");
sy_AmethystCTranslator__at_faillab_5f0a=rb_intern("AmethystCTranslator__at_faillab_5f0a");
sy_AmethystCTranslator__at_faillab_74ee=rb_intern("AmethystCTranslator__at_faillab_74ee");
sy_AmethystCTranslator__at_faillab_8142=rb_intern("AmethystCTranslator__at_faillab_8142");
sy_AmethystCTranslator__at_faillab_e643=rb_intern("AmethystCTranslator__at_faillab_e643");
sy_AmethystCTranslator__at_grammar_1337=rb_intern("AmethystCTranslator__at_grammar_1337");
sy_AmethystCTranslator__at_header_eq__7aa9=rb_intern("AmethystCTranslator__at_header_eq__7aa9");
sy_AmethystCTranslator__at_header_lt__09ca=rb_intern("AmethystCTranslator__at_header_lt__09ca");
sy_AmethystCTranslator__at_header_lt__62d2=rb_intern("AmethystCTranslator__at_header_lt__62d2");
sy_AmethystCTranslator__at_init_eq__lb__rb__47da=rb_intern("AmethystCTranslator__at_init_eq__lb__rb__47da");
sy_AmethystCTranslator__at_init_sp__sp__lt__ea5b=rb_intern("AmethystCTranslator__at_init_sp__sp__lt__ea5b");
sy_AmethystCTranslator__at_lambdas_ecda=rb_intern("AmethystCTranslator__at_lambdas_ecda");
sy_AmethystCTranslator__at_rulenam_d72e=rb_intern("AmethystCTranslator__at_rulenam_d72e");
sy_AmethystCTranslator__at_stoplab_2ba4=rb_intern("AmethystCTranslator__at_stoplab_2ba4");
sy_AmethystCTranslator__at_stoplab_a14e=rb_intern("AmethystCTranslator__at_stoplab_a14e");
sy_AmethystCTranslator__at_stops_e2b4=rb_intern("AmethystCTranslator__at_stops_e2b4");
sy_AmethystCTranslator__at_stops_eq_n_588d=rb_intern("AmethystCTranslator__at_stops_eq_n_588d");
sy_AmethystCTranslator__at_stops_eq_t_c6ab=rb_intern("AmethystCTranslator__at_stops_eq_t_c6ab");
sy_AmethystCTranslator__dq_Amethys_8b00=rb_intern("AmethystCTranslator__dq_Amethys_8b00");
sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf=rb_intern("AmethystCTranslator__dq_VALUE_sp_c_8bbf");
sy_AmethystCTranslator__dq__at__sh__le_bind_f173=rb_intern("AmethystCTranslator__dq__at__sh__le_bind_f173");
sy_AmethystCTranslator__dq__sh__le__at_gram_5de9=rb_intern("AmethystCTranslator__dq__sh__le__at_gram_5de9");
sy_AmethystCTranslator__dq__sh__le_bind_lb__1eef=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__1eef");
sy_AmethystCTranslator__dq__sh__le_bind_lb__4c59=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__4c59");
sy_AmethystCTranslator__dq__sh__le_bind_lb__965a=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__965a");
sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf=rb_intern("AmethystCTranslator__dq__sh__le_src_dot_n_9acf");
sy_AmethystCTranslator__dq_class_sp__sh__0b62=rb_intern("AmethystCTranslator__dq_class_sp__sh__0b62");
sy_AmethystCTranslator__dq_cstruct_061f=rb_intern("AmethystCTranslator__dq_cstruct_061f");
sy_AmethystCTranslator__dq_def_sp__sh__le_b_5b6b=rb_intern("AmethystCTranslator__dq_def_sp__sh__le_b_5b6b");
sy_AmethystCTranslator__dq_goto_sp__sh__le__f772=rb_intern("AmethystCTranslator__dq_goto_sp__sh__le__f772");
sy_AmethystCTranslator__dq_if_lp_ptr_mi__6e29=rb_intern("AmethystCTranslator__dq_if_lp_ptr_mi__6e29");
sy_AmethystCTranslator__dq_if_sp__lp__sh__le_a_11e0=rb_intern("AmethystCTranslator__dq_if_sp__lp__sh__le_a_11e0");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_127b=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_127b");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_88ff=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_88ff");
sy_AmethystCTranslator__dq_it_eq_Qnil_8464=rb_intern("AmethystCTranslator__dq_it_eq_Qnil_8464");
sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_bg_281f");
sy_AmethystCTranslator__dq_it_eq__sh__le_rb_79a3=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_rb_79a3");
sy_AmethystCTranslator__dq_switch_lp__e906=rb_intern("AmethystCTranslator__dq_switch_lp__e906");
sy_AmethystCTranslator__dq_switchh_f207=rb_intern("AmethystCTranslator__dq_switchh_f207");
sy_AmethystCTranslator__lb_bind_lb_1_rb__8404=rb_intern("AmethystCTranslator__lb_bind_lb_1_rb__8404");
sy_AmethystCTranslator__lp_Current_4bd3=rb_intern("AmethystCTranslator__lp_Current_4bd3");
sy_AmethystCTranslator__lp_bind_lb_3_rb__e49d=rb_intern("AmethystCTranslator__lp_bind_lb_3_rb__e49d");
sy_AmethystCTranslator__lp_bind_lb_6_rb__79e0=rb_intern("AmethystCTranslator__lp_bind_lb_6_rb__79e0");
sy_AmethystCTranslator_addcallb_68bb=rb_intern("AmethystCTranslator_addcallb_68bb");
sy_AmethystCTranslator_addcallb_dcd7=rb_intern("AmethystCTranslator_addcallb_dcd7");
sy_AmethystCTranslator_ar_eq__ti_src_dot__efea=rb_intern("AmethystCTranslator_ar_eq__ti_src_dot__efea");
sy_AmethystCTranslator_bind_lb_0_rb__lt__cac1=rb_intern("AmethystCTranslator_bind_lb_0_rb__lt__cac1");
sy_AmethystCTranslator_bind_lb_0_rb__pl__40f3=rb_intern("AmethystCTranslator_bind_lb_0_rb__pl__40f3");
sy_AmethystCTranslator_bind_lb_0_rb__pl__c1a5=rb_intern("AmethystCTranslator_bind_lb_0_rb__pl__c1a5");
sy_AmethystCTranslator_bind_lb_115_c115=rb_intern("AmethystCTranslator_bind_lb_115_c115");
sy_AmethystCTranslator_bind_lb_16_rb__1922=rb_intern("AmethystCTranslator_bind_lb_16_rb__1922");
sy_AmethystCTranslator_bind_lb_16_rb__24cb=rb_intern("AmethystCTranslator_bind_lb_16_rb__24cb");
sy_AmethystCTranslator_bind_lb_16_rb__2732=rb_intern("AmethystCTranslator_bind_lb_16_rb__2732");
sy_AmethystCTranslator_bind_lb_16_rb__4555=rb_intern("AmethystCTranslator_bind_lb_16_rb__4555");
sy_AmethystCTranslator_bind_lb_16_rb__6742=rb_intern("AmethystCTranslator_bind_lb_16_rb__6742");
sy_AmethystCTranslator_bind_lb_16_rb__878f=rb_intern("AmethystCTranslator_bind_lb_16_rb__878f");
sy_AmethystCTranslator_bind_lb_16_rb__b2cf=rb_intern("AmethystCTranslator_bind_lb_16_rb__b2cf");
sy_AmethystCTranslator_bind_lb_1_rb__lt__2f50=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__2f50");
sy_AmethystCTranslator_bind_lb_2_rb__ti__e7b8=rb_intern("AmethystCTranslator_bind_lb_2_rb__ti__e7b8");
sy_AmethystCTranslator_bind_lb_35_rb__2567=rb_intern("AmethystCTranslator_bind_lb_35_rb__2567");
sy_AmethystCTranslator_bind_lb_3_rb_=rb_intern("AmethystCTranslator_bind_lb_3_rb_");
sy_AmethystCTranslator_bind_lb_54_rb__06ed=rb_intern("AmethystCTranslator_bind_lb_54_rb__06ed");
sy_AmethystCTranslator_bind_lb_83_rb__7cae=rb_intern("AmethystCTranslator_bind_lb_83_rb__7cae");
sy_AmethystCTranslator_h_eq__dq_VALUE_0b24=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_0b24");
sy_AmethystCTranslator_h_eq__dq_VALUE_5d11=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_5d11");
sy_AmethystCTranslator_h_eq__dq_VALUE_f86b=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_f86b");
sy_AmethystCTranslator_label_lp__dq_a_f49c=rb_intern("AmethystCTranslator_label_lp__dq_a_f49c");
sy_AmethystCTranslator_label_lp__dq_b_6df7=rb_intern("AmethystCTranslator_label_lp__dq_b_6df7");
sy_AmethystCTranslator_label_lp__dq_o_c187=rb_intern("AmethystCTranslator_label_lp__dq_o_c187");
sy_AmethystCTranslator_label_lp__dq_r_95b2=rb_intern("AmethystCTranslator_label_lp__dq_r_95b2");
sy_AmethystCTranslator_mktable_lp__ea79=rb_intern("AmethystCTranslator_mktable_lp__ea79");
sy_AmethystCTranslator_r_eq__dq__sp__sh__le_bi_39fa=rb_intern("AmethystCTranslator_r_eq__dq__sp__sh__le_bi_39fa");
sy_AmethystCTranslator_raise_sp__dq_T_0ab1=rb_intern("AmethystCTranslator_raise_sp__dq_T_0ab1");
sy_AmethystCTranslator_rbbget_lp_s_68a8=rb_intern("AmethystCTranslator_rbbget_lp_s_68a8");
sy_AmethystCTranslator_src_25d9=rb_intern("AmethystCTranslator_src_25d9");
sy_AmethystCTranslator_src_dot_body_519e=rb_intern("AmethystCTranslator_src_dot_body_519e");
sy_AmethystCTranslator_src_dot_name_80f3=rb_intern("AmethystCTranslator_src_dot_name_80f3");
sy_AmethystCTranslator_src_dot_rule_5acf=rb_intern("AmethystCTranslator_src_dot_rule_5acf");
sy_AmethystCTranslator_src_dot_to_5e99=rb_intern("AmethystCTranslator_src_dot_to_5e99");
sy_apply=rb_intern("apply");
sy_label=rb_intern("label");
                    rb_define_method(cls_AmethystCTranslator,"add_c_global",AmethystCTranslator_add_c_global,2);
rb_define_method(cls_AmethystCTranslator,"addcallback",AmethystCTranslator_addcallback,1);
rb_define_method(cls_AmethystCTranslator,"addlambda",AmethystCTranslator_addlambda,0);
rb_define_method(cls_AmethystCTranslator,"itrans",AmethystCTranslator_itrans,0);
rb_define_method(cls_AmethystCTranslator,"rbcode",AmethystCTranslator_rbcode,0);
rb_define_method(cls_AmethystCTranslator,"rbtrans",AmethystCTranslator_rbtrans,0);
rb_define_method(cls_AmethystCTranslator,"rbtrans2",AmethystCTranslator_rbtrans2,0);
rb_define_method(cls_AmethystCTranslator,"rw",AmethystCTranslator_rw,2);
rb_define_method(cls_AmethystCTranslator,"trans",AmethystCTranslator_trans,0);
                    rb_eval_string("testversionctranslator2('21f1fc9ab4918ff7aa491c5d0cba9358')");}
