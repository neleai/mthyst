#include "cthyst.h"
VALUE cls_AmethystCTranslator;
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
static VALUE sy_AmethystCTranslator__append_lp__d113;
static VALUE sy_AmethystCTranslator__at_bindno_eq__e294;
static VALUE sy_AmethystCTranslator__at_binds_dot_m_4c7b;
static VALUE sy_AmethystCTranslator__at_callbac_2d11;
static VALUE sy_AmethystCTranslator__at_callbac_e37c;
static VALUE sy_AmethystCTranslator__at_cutlabe_7393;
static VALUE sy_AmethystCTranslator__at_cutlabe_d8d6;
static VALUE sy_AmethystCTranslator__at_cuts_7bbc;
static VALUE sy_AmethystCTranslator__at_cuts_eq_ni_f875;
static VALUE sy_AmethystCTranslator__at_cuts_eq_tr_13c6;
static VALUE sy_AmethystCTranslator__at_defmeth_456b;
static VALUE sy_AmethystCTranslator__at_defs_eq__lb__rb__188f;
static VALUE sy_AmethystCTranslator__at_faillab_1610;
static VALUE sy_AmethystCTranslator__at_faillab_8142;
static VALUE sy_AmethystCTranslator__at_faillab_e174;
static VALUE sy_AmethystCTranslator__at_faillab_e643;
static VALUE sy_AmethystCTranslator__at_grammar_1337;
static VALUE sy_AmethystCTranslator__at_header_eq__7aa9;
static VALUE sy_AmethystCTranslator__at_header_lt__92e2;
static VALUE sy_AmethystCTranslator__at_init_eq__lb__rb__47da;
static VALUE sy_AmethystCTranslator__at_init_sp__sp__lt__aac8;
static VALUE sy_AmethystCTranslator__at_lambdas_ecda;
static VALUE sy_AmethystCTranslator__at_rulenam_f912;
static VALUE sy_AmethystCTranslator__at_stoplab_2ba4;
static VALUE sy_AmethystCTranslator__at_stoplab_a14e;
static VALUE sy_AmethystCTranslator__at_stops_e2b4;
static VALUE sy_AmethystCTranslator__at_stops_eq_n_588d;
static VALUE sy_AmethystCTranslator__at_stops_eq_t_c6ab;
static VALUE sy_AmethystCTranslator__dq_Amethys_2ed8;
static VALUE sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf;
static VALUE sy_AmethystCTranslator__dq__at__sh__le_bind_3d2b;
static VALUE sy_AmethystCTranslator__dq__sh__le__at_gram_5de9;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__3bec;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__9630;
static VALUE sy_AmethystCTranslator__dq__sh__le_bind_lb__9cfd;
static VALUE sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf;
static VALUE sy_AmethystCTranslator__dq_class_sp__sh__0b62;
static VALUE sy_AmethystCTranslator__dq_cstruct_0673;
static VALUE sy_AmethystCTranslator__dq_def_sp__sh__le_b_b73d;
static VALUE sy_AmethystCTranslator__dq_goto_sp__sh__le__f772;
static VALUE sy_AmethystCTranslator__dq_if_lp_ptr_mi__033b;
static VALUE sy_AmethystCTranslator__dq_if_sp__lp__sh__le_a_0233;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_0a35;
static VALUE sy_AmethystCTranslator__dq_int_sp__sh__le_b_0b60;
static VALUE sy_AmethystCTranslator__dq_it_eq_Qnil_8464;
static VALUE sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f;
static VALUE sy_AmethystCTranslator__dq_switch_lp__f722;
static VALUE sy_AmethystCTranslator__dq_switchh_f207;
static VALUE sy_AmethystCTranslator__lb_bind_lb_1_rb__8fa4;
static VALUE sy_AmethystCTranslator__lp_Current_bc00;
static VALUE sy_AmethystCTranslator__lp_bind_lb_1_rb__a948;
static VALUE sy_AmethystCTranslator__lp_bind_lb_1_rb__d1fd;
static VALUE sy_AmethystCTranslator_addcallb_0461;
static VALUE sy_AmethystCTranslator_addcallb_2cf7;
static VALUE sy_AmethystCTranslator_ar_eq__ti_src_dot__efea;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb_;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__dot__1364;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__eq__2d82;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__98f3;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__acb7;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__lt__c72d;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__1b5e;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__1dcb;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__22c0;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__252c;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__4da1;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__4db9;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__891b;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__pl__916b;
static VALUE sy_AmethystCTranslator_bind_lb_1_rb__ti__cfcb;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_3d5e;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_c505;
static VALUE sy_AmethystCTranslator_h_eq__dq_VALUE_c6bd;
static VALUE sy_AmethystCTranslator_label_lp__dq_a_f49c;
static VALUE sy_AmethystCTranslator_label_lp__dq_b_6df7;
static VALUE sy_AmethystCTranslator_label_lp__dq_o_c187;
static VALUE sy_AmethystCTranslator_label_lp__dq_r_95b2;
static VALUE sy_AmethystCTranslator_mktable_lp__ea79;
static VALUE sy_AmethystCTranslator_r_eq__dq__sp__sh__le_bi_10a8;
static VALUE sy_AmethystCTranslator_raise_sp__dq_T_0ab1;
static VALUE sy_AmethystCTranslator_rbbget_lp_s_68a8;
static VALUE sy_AmethystCTranslator_src_25d9;
static VALUE sy_AmethystCTranslator_src_dot_body_519e;
static VALUE sy_AmethystCTranslator_src_dot_name_80f3;
static VALUE sy_AmethystCTranslator_src_dot_rule_5acf;
static VALUE sy_AmethystCTranslator_src_dot_to_5e99;
static VALUE sy_apply;
static VALUE sy_label;
VALUE AmethystCTranslator_addcallback(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16); var0/*s*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=var0/*s*/; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var1/*autovar*/;ptr->len=1;
                     it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass1); var2/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var2/*autovar*/; var0/*s*/=it;;
bind_aset(bind2,1,var0/*s*/);it=rb_funcall(self,sy_AmethystCTranslator_addcallb_2cf7,1,bind2);var0/*s*/=bind_aget(bind2,1);; var3/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystCTranslator_addlambda(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le__at_gram_5de9,1,bind2); var0/*lambd*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2); var1/*rwo*/=it;;
it=rb_obj_clone(s_fail_e111); var2/*word*/=it;;
bind_aset(bind2,1,var2/*word*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);var2/*word*/=bind_aget(bind2,1);;  it=AmethystCTranslator_trans(self ); FAILTEST(fail); var3/*body*/=it;;
 var4/*x*/=it;;
bind_aset(bind2,1,var1/*rwo*/);bind_aset(bind2,2,var4/*x*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);var1/*rwo*/=bind_aget(bind2,1);;var4/*x*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*lambd*/);bind_aset(bind2,2,var3/*body*/);it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_3d5e,1,bind2);var0/*lambd*/=bind_aget(bind2,1);;var3/*body*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*lambd*/);it=rb_funcall(self,sy_AmethystCTranslator__dq_Amethys_2ed8,1,bind2);var0/*lambd*/=bind_aget(bind2,1);; var5/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystCTranslator_itrans(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); var0/*ruby*/=it;;
it=rb_ary_new3(0); var1/*c*/=it;;
it=rb_ary_new3(0); var2/*init*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); var3/*c*/=it;;
bind_aset(bind2,1,var3/*c*/);it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_1_rb__a948,1,bind2);var3/*c*/=bind_aget(bind2,1);;FAILTEST(alt1_2);bind_aset(bind2,1,var3/*c*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb_,1,bind2);var3/*c*/=bind_aget(bind2,1);; var4/*_result*/=it;;
it=var4/*_result*/; var5/*autovar*/=it;;
bind_aset(bind2,1,var0/*ruby*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d113,1,bind2);var0/*ruby*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);;
;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystCTranslator_trans(self ); FAILTEST(alt1_3); var6/*it*/=it;;
bind_aset(bind2,1,var1/*c*/);bind_aset(bind2,2,var6/*it*/);bind_aset(bind2,3,var2/*init*/);bind_aset(bind2,4,var0/*ruby*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lt__98f3,1,bind2);var1/*c*/=bind_aget(bind2,1);;var6/*it*/=bind_aget(bind2,2);;var2/*init*/=bind_aget(bind2,3);;var0/*ruby*/=bind_aget(bind2,4);;
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 } break1: ptr->pos=oldpos1;   bind_aset(bind2,1,var1/*c*/);bind_aset(bind2,2,var2/*init*/);bind_aset(bind2,3,var0/*ruby*/);it=rb_funcall(self,sy_AmethystCTranslator__lb_bind_lb_1_rb__8fa4,1,bind2);var1/*c*/=bind_aget(bind2,1);;var2/*init*/=bind_aget(bind2,2);;var0/*ruby*/=bind_aget(bind2,3);; var7/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbcode(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystCTranslator__dq_class_sp__sh__0b62,1,bind2); var0/*s*/=it;;
bind_aset(bind2,1,var0/*s*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lt__acb7,1,bind2);var0/*s*/=bind_aget(bind2,1);;it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_2d11,1,bind2); var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var1/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var2/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var3/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); var4/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var5/*k*/=it;;
  it=AmethystCore_anything(self ); FAILTEST(pass3); var6/*v*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto break1;
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,var5/*k*/);bind_aset(bind2,2,var6/*v*/);it=rb_funcall(self,sy_AmethystCTranslator__dq_def_sp__sh__le_b_b73d,1,bind2);var5/*k*/=bind_aget(bind2,1);;var6/*v*/=bind_aget(bind2,2);; var7/*autovar*/=it;;
bind_aset(bind2,1,var3/*autovar*/);bind_aset(bind2,2,var7/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d113,1,bind2);var3/*autovar*/=bind_aget(bind2,1);;var7/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var3/*autovar*/; var8/*x*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,var0/*s*/);bind_aset(bind2,2,var8/*x*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__1b5e,1,bind2);var0/*s*/=bind_aget(bind2,1);;var8/*x*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*s*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__916b,1,bind2);var0/*s*/=bind_aget(bind2,1);; var9/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass1); var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var2/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); var2/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_rbtrans2(self ); FAILTEST(pass2); var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=var4/*autovar*/; var2/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); var2/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Global*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var6/*name*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt3_2;
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,var6/*name*/);it=rb_funcall(self,sy_AmethystCTranslator__dq__at__sh__le_bind_3d2b,1,bind2);var6/*name*/=bind_aget(bind2,1);; var2/*_result*/=it;;

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); var2/*_result*/=it;;

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 3/*Key*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var7/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var7/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); var6/*name*/=it;;
  it=AmethystCTranslator_rbtrans(self ); FAILTEST(pass4); var8/*args*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt4_2;
                   success4: *ptr=oldpass4;
                bind_aset(bind2,1,var6/*name*/);bind_aset(bind2,2,var8/*args*/);it=rb_funcall(self,sy_AmethystCTranslator__lp_bind_lb_1_rb__d1fd,1,bind2);var6/*name*/=bind_aget(bind2,1);;var8/*args*/=bind_aget(bind2,2);; var2/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); var2/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 4/*Lambda*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var9/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_addlambda(self ); FAILTEST(pass5); var10/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt5_2;
                   success5: *ptr=oldpass5;
                it=var10/*autovar*/; var2/*_result*/=it;;

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); var2/*_result*/=it;;

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 5/*Local*/:; int oldpos6=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var11/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var11/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator_rbbget_lp_s_68a8,1,bind2); var12/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt6_2;
                   success6: *ptr=oldpass6;
                it=var12/*autovar*/; var2/*_result*/=it;;

;goto accept6;
alt6_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt6_3); var2/*_result*/=it;;

;goto accept6;
alt6_3: ptr->pos=oldpos6;goto fail;
 accept6:;
 break;
case 6/*Result*/:; int oldpos7=ptr->pos;int cut7=0;
alt7_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var13/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf,1,bind2); var14/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt7_2;
                   success7: *ptr=oldpass7;
                it=var14/*autovar*/; var2/*_result*/=it;;

;goto accept7;
alt7_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt7_3); var2/*_result*/=it;;

;goto accept7;
alt7_3: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
case 7/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); var2/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystCTranslator_rbtrans2(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); var0/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCTranslator_rbtrans(self ); FAILTEST(break1); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var0/*autovar*/; var2/*it*/=it;;
bind_aset(bind2,1,var2/*it*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__ti__cfcb,1,bind2);var2/*it*/=bind_aget(bind2,1);; var3/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystCTranslator_rw(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4; ;VALUE bind2=bind_new2(16); var1/*word*/=a0;;var2/*prc*/=a1;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2); var0/*rwo*/=it;;
bind_aset(bind2,1,var1/*word*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);var1/*word*/=bind_aget(bind2,1);; it=var2/*prc*/; arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(fail); var3/*x*/=it;;
bind_aset(bind2,1,var0/*rwo*/);bind_aset(bind2,2,var3/*x*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);var0/*rwo*/=bind_aget(bind2,1);;var3/*x*/=bind_aget(bind2,2);; var4/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystCTranslator_trans(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24;VALUE var25;VALUE var26;VALUE var27;VALUE var28;VALUE var29;VALUE var30;VALUE var31;VALUE var32;VALUE var33;VALUE var34;VALUE var35;VALUE var36;VALUE var37;VALUE var38;VALUE var39;VALUE var40;VALUE var41;VALUE var42;VALUE var43;VALUE var44;VALUE var45;VALUE var46;VALUE var47;VALUE var48;VALUE var49;VALUE var50;VALUE var51;VALUE var52;VALUE var53;VALUE var54;VALUE var55;VALUE var56;VALUE var57;VALUE var58;VALUE var59;VALUE var60;VALUE var61;VALUE var62;VALUE var63;VALUE var64;VALUE var65;VALUE var66;VALUE var67;VALUE var68;VALUE var69;VALUE var70;VALUE var71;VALUE var72;VALUE var73;VALUE var74;VALUE var75;VALUE var76;VALUE var77;VALUE var78;VALUE var79;VALUE var80;VALUE var81;VALUE var82;VALUE var83;VALUE var84;VALUE var85;VALUE var86;VALUE var87;VALUE var88;VALUE var89;VALUE var90;VALUE var91;VALUE var92;VALUE var93;VALUE var94;VALUE var95;VALUE var96;VALUE var97;VALUE var98;VALUE var99;VALUE var100;VALUE var101;VALUE var102;VALUE var103;VALUE var104;VALUE var105;VALUE var106;VALUE var107;VALUE var108;VALUE var109;VALUE var110;VALUE var111;VALUE var112;VALUE var113;VALUE var114;VALUE var115;VALUE var116;VALUE var117;VALUE var118;VALUE var119;VALUE var120; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator__at_bindno_eq__e294,1,bind2);it=rb_ary_new3(0); var1/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); var2/*autovar*/=it;;
bind_aset(bind2,1,var1/*autovar*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d113,1,bind2);var1/*autovar*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var1/*autovar*/; var3/*it*/=it;;
bind_aset(bind2,1,var3/*it*/);it=rb_funcall(self,sy_AmethystCTranslator_addcallb_0461,1,bind2);var3/*it*/=bind_aget(bind2,1);; var4/*cbno*/=it;;
bind_aset(bind2,1,var4/*cbno*/);it=rb_funcall(self,sy_AmethystCTranslator__at_binds_dot_m_4c7b,1,bind2);var4/*cbno*/=bind_aget(bind2,1);; var5/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var5/*autovar*/; var6/*_result*/=it;;
 break;
case 1/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var7/*autovar*/=it;;
it=var7/*autovar*/; var8/*autovar*/=it;;
it=var8/*autovar*/; var9/*autovar*/=it;;
int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=var9/*autovar*/; var10/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var11/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var11/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass3; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='f'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='n'&&ame_curstr2(ptr)[3]=='d')  ptr->pos+=4; else goto pass3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_AmethystCTranslator_raise_sp__dq_T_0ab1,1,bind2); var12/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                it=var12/*autovar*/; var6/*_result*/=it;;

;goto accept2;
alt1_2: ptr->pos=oldpos2;it=var9/*autovar*/; var13/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var13/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); var14/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var14/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass5; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='t'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='t'&&ame_curstr2(ptr)[4]=='_'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='i'&&ame_curstr2(ptr)[7]=='z'&&ame_curstr2(ptr)[8]=='e')  ptr->pos+=9; else goto pass5; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto pass4;
                   success5: *ptr=oldpass5;
                switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var15/*autovar*/=it;;
 break;
case 1/*Object*/:; goto pass4; break;
}cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var15/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass6); var16/*s*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto pass4;
                   success6: *ptr=oldpass6;
                it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt1_3;
                   success4: *ptr=oldpass4;
                bind_aset(bind2,1,var16/*s*/);it=rb_funcall(self,sy_AmethystCTranslator__dq_if_lp_ptr_mi__033b,1,bind2);var16/*s*/=bind_aget(bind2,1);; var6/*_result*/=it;;

;goto accept2;
alt1_3: ptr->pos=oldpos2;it=var9/*autovar*/; var17/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var17/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass7); var18/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var18/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass8);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass8; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass8; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto pass7;
                   success8: *ptr=oldpass8;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_goto_sp__sh__le__f772,1,bind2); var19/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt1_4;
                   success7: *ptr=oldpass7;
                it=var19/*autovar*/; var6/*_result*/=it;;

;goto accept2;
alt1_4: ptr->pos=oldpos2;it=var9/*autovar*/; var20/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var20/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass9); var21/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var21/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass10);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'd':;case 'f' ... UC(255):; goto pass10; break;
case 'e' ... 'e':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='o'&&ame_curstr2(ptr)[1]=='f')  ptr->pos+=2; else goto pass10; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto pass9;
                   success10: *ptr=oldpass10;
                it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq_Qnil_8464,1,bind2); var22/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt1_5;
                   success9: *ptr=oldpass9;
                it=var22/*autovar*/; var6/*_result*/=it;;

;goto accept2;
alt1_5: ptr->pos=oldpos2;it=var9/*autovar*/; var23/*autovar*/=it;;
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var23/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass11); var24/*autovar*/=it;;
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var24/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
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
                it=rb_obj_clone(s_it_eq_Qnil); var6/*_result*/=it;;

;goto accept2;
alt1_6: ptr->pos=oldpos2;it=var9/*autovar*/; var25/*autovar*/=it;;
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var25/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass13); var26/*autovar*/=it;;
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var26/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
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
                it=rb_obj_clone(s_it_eq_rb_st_ee66); var6/*_result*/=it;;

;goto accept2;
alt1_7: ptr->pos=oldpos2;it=var9/*autovar*/; var27/*autovar*/=it;;
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var27/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass15); var28/*autovar*/=it;;
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var28/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
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
                it=rb_obj_clone(s_it_eq_ame_c_4b8d); var6/*_result*/=it;;

;goto accept2;
alt1_8: ptr->pos=oldpos2;it=var9/*autovar*/; var29/*autovar*/=it;;
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var29/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass17); var30/*autovar*/=it;;
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var30/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass18);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass18; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass18; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto pass17;
                   success18: *ptr=oldpass18;
                switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var31/*autovar*/=it;;
 break;
case 1/*Object*/:; goto pass17; break;
}cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var31/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass19); var16/*s*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass19;
                   goto success19;
                   pass19: *ptr=oldpass19; goto pass17;
                   success19: *ptr=oldpass19;
                bind_aset(bind2,1,var16/*s*/);it=rb_funcall(self,sy_AmethystCTranslator__dq_if_sp__lp__sh__le_a_0233,1,bind2);var16/*s*/=bind_aget(bind2,1);; var32/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass17;
                   goto success17;
                   pass17: *ptr=oldpass17; goto alt1_9;
                   success17: *ptr=oldpass17;
                it=var32/*autovar*/; var6/*_result*/=it;;

;goto accept2;
alt1_9: ptr->pos=oldpos2;it=var9/*autovar*/; var33/*autovar*/=it;;
cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var33/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass20); var34/*name*/=it;;
it=i_0; var35/*ii*/=it;;
it=rb_ary_new3(0); var36/*autovar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos;   it=AmethystCTranslator_trans(self ); FAILTEST(break2); var37/*aa*/=it;;
bind_aset(bind2,1,var35/*ii*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__891b,1,bind2);var35/*ii*/=bind_aget(bind2,1);;bind_aset(bind2,1,var37/*aa*/);bind_aset(bind2,2,var35/*ii*/);it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__3bec,1,bind2);var37/*aa*/=bind_aget(bind2,1);;var35/*ii*/=bind_aget(bind2,2);; var38/*autovar*/=it;;
bind_aset(bind2,1,var36/*autovar*/);bind_aset(bind2,2,var38/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d113,1,bind2);var36/*autovar*/=bind_aget(bind2,1);;var38/*autovar*/=bind_aget(bind2,2);; } break2: ptr->pos=oldpos3;   it=var36/*autovar*/; var39/*args*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator_src_25d9,1,bind2); var40/*app*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass20;
                   goto success20;
                   pass20: *ptr=oldpass20; goto alt1_10;
                   success20: *ptr=oldpass20;
                bind_aset(bind2,1,var39/*args*/);bind_aset(bind2,2,var34/*name*/);bind_aset(bind2,3,var35/*ii*/);bind_aset(bind2,4,var40/*app*/);it=rb_funcall(self,sy_AmethystCTranslator_r_eq__dq__sp__sh__le_bi_10a8,1,bind2);var39/*args*/=bind_aget(bind2,1);;var34/*name*/=bind_aget(bind2,2);;var35/*ii*/=bind_aget(bind2,3);;var40/*app*/=bind_aget(bind2,4);; var6/*_result*/=it;;

;goto accept2;
alt1_10: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Bind*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var41/*autovar*/=it;;
cstruct oldpass21=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var41/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCTranslator_trans(self ); FAILTEST(pass21); var42/*e*/=it;;
bind_aset(bind2,1,var42/*e*/);it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__9cfd,1,bind2);var42/*e*/=bind_aget(bind2,1);; var43/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass21;
                   goto success21;
                   pass21: *ptr=oldpass21; goto fail;
                   success21: *ptr=oldpass21;
                it=var43/*autovar*/; var6/*_result*/=it;;
 break;
case 3/*CAct*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var44/*autovar*/=it;;
cstruct oldpass22=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var44/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator_ar_eq__ti_src_dot__efea,1,bind2); var45/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass22;
                   goto success22;
                   pass22: *ptr=oldpass22; goto fail;
                   success22: *ptr=oldpass22;
                it=var45/*autovar*/; var6/*_result*/=it;;
 break;
case 4/*Cut*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var46/*autovar*/=it;;
cstruct oldpass23=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var46/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass23;
                   goto success23;
                   pass23: *ptr=oldpass23; goto fail;
                   success23: *ptr=oldpass23;
                it=rb_funcall(self,sy_AmethystCTranslator__at_cuts_eq_tr_13c6,1,bind2); var6/*_result*/=it;;
 break;
case 5/*Grammar*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var47/*autovar*/=it;;
cstruct oldpass24=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var47/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator__at_grammar_1337,1,bind2);it=rb_funcall(self,sy_AmethystCTranslator__at_lambdas_ecda,1,bind2);it=rb_funcall(self,sy_AmethystCTranslator__at_defs_eq__lb__rb__188f,1,bind2);it=rb_funcall(self,sy_AmethystCTranslator__at_defmeth_456b,1,bind2);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_8142,1,bind2);it=rb_funcall(self,sy_AmethystCTranslator__at_callbac_e37c,1,bind2);it=rb_funcall(self,sy_AmethystCTranslator_mktable_lp__ea79,1,bind2);it=rb_funcall(self,sy_AmethystCTranslator__at_header_eq__7aa9,1,bind2);it=rb_funcall(self,sy_AmethystCTranslator__at_init_eq__lb__rb__47da,1,bind2);it=rb_funcall(self,sy_AmethystCTranslator_src_dot_rule_5acf,1,bind2); var48/*autovar*/=it;;
cstruct oldpass25=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var48/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass25); var49/*autovar*/=it;;
cstruct oldpass26=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var49/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var50/*autovar*/=it;;
int oldpos4;  while(1){oldpos4=ptr->pos;   it=AmethystCTranslator_trans(self ); FAILTEST(break3); var51/*autovar*/=it;;
bind_aset(bind2,1,var50/*autovar*/);bind_aset(bind2,2,var51/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d113,1,bind2);var50/*autovar*/=bind_aget(bind2,1);;var51/*autovar*/=bind_aget(bind2,2);; } break3: ptr->pos=oldpos4;   it=var50/*autovar*/; var52/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass26;
                   goto success26;
                   pass26: *ptr=oldpass26; goto pass25;
                   success26: *ptr=oldpass26;
                it=var52/*autovar*/; var53/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass25;
                   goto success25;
                   pass25: *ptr=oldpass25; goto pass24;
                   success25: *ptr=oldpass25;
                it=var53/*autovar*/; var54/*t*/=it;;
  it=AmethystCTranslator_rbcode(self ); FAILTEST(pass24); var55/*rbcode*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf,1,bind2); var16/*s*/=it;;
bind_aset(bind2,1,var16/*s*/);bind_aset(bind2,2,var54/*t*/);bind_aset(bind2,3,var56/*init*/);bind_aset(bind2,4,var55/*rbcode*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__lt__c72d,1,bind2);var16/*s*/=bind_aget(bind2,1);;var54/*t*/=bind_aget(bind2,2);;var56/*init*/=bind_aget(bind2,3);;var55/*rbcode*/=bind_aget(bind2,4);; var57/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass24;
                   goto success24;
                   pass24: *ptr=oldpass24; goto fail;
                   success24: *ptr=oldpass24;
                it=var57/*autovar*/; var6/*_result*/=it;;
 break;
case 6/*Local*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var58/*autovar*/=it;;
cstruct oldpass27=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var58/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f,1,bind2); var59/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass27;
                   goto success27;
                   pass27: *ptr=oldpass27; goto fail;
                   success27: *ptr=oldpass27;
                it=var59/*autovar*/; var6/*_result*/=it;;
 break;
case 7/*Lookahead*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var60/*autovar*/=it;;
cstruct oldpass28=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var60/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind2); var61/*accept*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_r_95b2,1,bind2); var62/*reject*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind2); var63/*oldpos*/=it;;
it=var62/*reject*/; var64/*word*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2); var65/*rwo*/=it;;
bind_aset(bind2,1,var64/*word*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);var64/*word*/=bind_aget(bind2,1);;  it=AmethystCTranslator_trans(self ); FAILTEST(pass28); var54/*t*/=it;;
 var66/*x*/=it;;
bind_aset(bind2,1,var65/*rwo*/);bind_aset(bind2,2,var66/*x*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);var65/*rwo*/=bind_aget(bind2,1);;var66/*x*/=bind_aget(bind2,2);;bind_aset(bind2,1,var63/*oldpos*/);bind_aset(bind2,2,var54/*t*/);bind_aset(bind2,3,var61/*accept*/);bind_aset(bind2,4,var62/*reject*/);it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_0a35,1,bind2);var63/*oldpos*/=bind_aget(bind2,1);;var54/*t*/=bind_aget(bind2,2);;var61/*accept*/=bind_aget(bind2,3);;var62/*reject*/=bind_aget(bind2,4);; var67/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass28;
                   goto success28;
                   pass28: *ptr=oldpass28; goto fail;
                   success28: *ptr=oldpass28;
                it=var67/*autovar*/; var6/*_result*/=it;;
 break;
case 8/*Many*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var68/*autovar*/=it;;
it=var68/*autovar*/; var69/*autovar*/=it;;
it=var69/*autovar*/; var70/*autovar*/=it;;
int oldpos5=ptr->pos;int cut2=0;
alt2_1:;it=var70/*autovar*/; var71/*autovar*/=it;;
cstruct oldpass29=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var71/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_AmethystCTranslator_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var72/*autovar*/=it;;
cstruct oldpass30=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var72/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass30); var73/*autovar*/=it;;
cstruct oldpass31=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var73/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
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
                it=rb_obj_clone(s_ptr_mi__gt_pos_db4c); var6/*_result*/=it;;

;goto accept5;
alt2_2: ptr->pos=oldpos5;it=var70/*autovar*/; var74/*autovar*/=it;;
cstruct oldpass32=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var74/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_b_6df7,1,bind2); var75/*brk*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind2); var63/*oldpos*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind2); var61/*accept*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_stops_e2b4,1,bind2); var76/*oldstops*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_stoplab_2ba4,1,bind2); var77/*oldstoplabel*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_stops_eq_n_588d,1,bind2);it=rb_funcall(self,sy_AmethystCTranslator__at_stoplab_a14e,1,bind2);it=var75/*brk*/; var64/*word*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2); var65/*rwo*/=it;;
bind_aset(bind2,1,var64/*word*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);var64/*word*/=bind_aget(bind2,1);;  it=AmethystCTranslator_trans(self ); FAILTEST(pass32); var54/*t*/=it;;
 var66/*x*/=it;;
bind_aset(bind2,1,var65/*rwo*/);bind_aset(bind2,2,var66/*x*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);var65/*rwo*/=bind_aget(bind2,1);;var66/*x*/=bind_aget(bind2,2);;bind_aset(bind2,1,var16/*s*/);bind_aset(bind2,2,var63/*oldpos*/);bind_aset(bind2,3,var54/*t*/);bind_aset(bind2,4,var61/*accept*/);bind_aset(bind2,5,var75/*brk*/);bind_aset(bind2,6,var76/*oldstops*/);bind_aset(bind2,7,var77/*oldstoplabel*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__eq__2d82,1,bind2);var16/*s*/=bind_aget(bind2,1);;var63/*oldpos*/=bind_aget(bind2,2);;var54/*t*/=bind_aget(bind2,3);;var61/*accept*/=bind_aget(bind2,4);;var75/*brk*/=bind_aget(bind2,5);;var76/*oldstops*/=bind_aget(bind2,6);;var77/*oldstoplabel*/=bind_aget(bind2,7);; var78/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass32;
                   goto success32;
                   pass32: *ptr=oldpass32; goto alt2_3;
                   success32: *ptr=oldpass32;
                it=var78/*autovar*/; var6/*_result*/=it;;

;goto accept5;
alt2_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 9/*Memo*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var79/*autovar*/=it;;
cstruct oldpass33=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var79/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_AmethystCTranslator_raise_sp__dq_T_0ab1,1,bind2); var80/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass33;
                   goto success33;
                   pass33: *ptr=oldpass33; goto fail;
                   success33: *ptr=oldpass33;
                it=var80/*autovar*/; var6/*_result*/=it;;
 break;
case 10/*Or*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var81/*autovar*/=it;;
cstruct oldpass34=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var81/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_a_f49c,1,bind2); var61/*accept*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator_label_lp__dq_o_c187,1,bind2); var63/*oldpos*/=it;;
 it=rb_obj_clone(s_alt_3482); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass34); var82/*alt*/=it;;
it=i_1; var83/*altno*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_cutlabe_7393,1,bind2); var84/*oldcutlabel*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_cuts_7bbc,1,bind2); var85/*oldcuts*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_cuts_eq_ni_f875,1,bind2);bind_aset(bind2,1,var63/*oldpos*/);bind_aset(bind2,2,var82/*alt*/);bind_aset(bind2,3,var83/*altno*/);it=rb_funcall(self,sy_AmethystCTranslator__dq_int_sp__sh__le_b_0b60,1,bind2);var63/*oldpos*/=bind_aget(bind2,1);;var82/*alt*/=bind_aget(bind2,2);;var83/*altno*/=bind_aget(bind2,3);; var16/*s*/=it;;
int oldpos6;  while(1){oldpos6=ptr->pos; int oldpos7=ptr->pos;
   it=AmethystCore_anything(self ); FAILTEST(reject1); x=1; goto accept7;  reject1: x=0; accept7: it=Qnil; ptr->pos=oldpos7; if (x==0) goto break4;bind_aset(bind2,1,var83/*altno*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__891b,1,bind2);var83/*altno*/=bind_aget(bind2,1);;bind_aset(bind2,1,var82/*alt*/);bind_aset(bind2,2,var83/*altno*/);it=rb_funcall(self,sy_AmethystCTranslator__dq__sh__le_bind_lb__9630,1,bind2);var82/*alt*/=bind_aget(bind2,1);;var83/*altno*/=bind_aget(bind2,2);; var64/*word*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2); var65/*rwo*/=it;;
bind_aset(bind2,1,var64/*word*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);var64/*word*/=bind_aget(bind2,1);;  it=AmethystCTranslator_trans(self ); FAILTEST(break4); var6/*_result*/=it;;
 var66/*x*/=it;;
bind_aset(bind2,1,var65/*rwo*/);bind_aset(bind2,2,var66/*x*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);var65/*rwo*/=bind_aget(bind2,1);;var66/*x*/=bind_aget(bind2,2);; var86/*_result*/=it;;
it=var86/*_result*/; var54/*t*/=it;;
bind_aset(bind2,1,var16/*s*/);bind_aset(bind2,2,var54/*t*/);bind_aset(bind2,3,var61/*accept*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__4da1,1,bind2);var16/*s*/=bind_aget(bind2,1);;var54/*t*/=bind_aget(bind2,2);;var61/*accept*/=bind_aget(bind2,3);;bind_aset(bind2,1,var16/*s*/);bind_aset(bind2,2,var82/*alt*/);bind_aset(bind2,3,var83/*altno*/);bind_aset(bind2,4,var63/*oldpos*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__22c0,1,bind2);var16/*s*/=bind_aget(bind2,1);;var82/*alt*/=bind_aget(bind2,2);;var83/*altno*/=bind_aget(bind2,3);;var63/*oldpos*/=bind_aget(bind2,4);; } break4: ptr->pos=oldpos6;   bind_aset(bind2,1,var84/*oldcutlabel*/);bind_aset(bind2,2,var85/*oldcuts*/);bind_aset(bind2,3,var16/*s*/);bind_aset(bind2,4,var61/*accept*/);it=rb_funcall(self,sy_AmethystCTranslator__at_cutlabe_d8d6,1,bind2);var84/*oldcutlabel*/=bind_aget(bind2,1);;var85/*oldcuts*/=bind_aget(bind2,2);;var16/*s*/=bind_aget(bind2,3);;var61/*accept*/=bind_aget(bind2,4);; var87/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass34;
                   goto success34;
                   pass34: *ptr=oldpass34; goto fail;
                   success34: *ptr=oldpass34;
                it=var87/*autovar*/; var6/*_result*/=it;;
 break;
case 11/*Pass*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var88/*autovar*/=it;;
cstruct oldpass35=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var88/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                    it=rb_obj_clone(s_pass_1a1d); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass35); var89/*pass*/=it;;
 it=rb_obj_clone(s_oldpass_6559); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass35); var90/*oldpass*/=it;;
 it=rb_obj_clone(s_success_260c); arg0=it; it=rb_funcall(self,sy_label,1,arg0); FAILTEST(pass35); var91/*success*/=it;;
it=var89/*pass*/; var64/*word*/=it;;
it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_1610,1,bind2); var65/*rwo*/=it;;
bind_aset(bind2,1,var64/*word*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e643,1,bind2);var64/*word*/=bind_aget(bind2,1);;it=rb_funcall(self,sy_AmethystCTranslator_src_dot_to_5e99,1,bind2); var92/*autovar*/=it;;
cstruct oldpass36=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var92/*autovar*/;ptr->len=1;
                     it=AmethystCTranslator_trans(self ); FAILTEST(pass36); var93/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass36;
                   goto success36;
                   pass36: *ptr=oldpass36; goto pass35;
                   success36: *ptr=oldpass36;
                it=var93/*autovar*/; var94/*to*/=it;;
 var66/*x*/=it;;
bind_aset(bind2,1,var65/*rwo*/);bind_aset(bind2,2,var66/*x*/);it=rb_funcall(self,sy_AmethystCTranslator__at_faillab_e174,1,bind2);var65/*rwo*/=bind_aget(bind2,1);;var66/*x*/=bind_aget(bind2,2);;bind_aset(bind2,1,var90/*oldpass*/);bind_aset(bind2,2,var94/*to*/);bind_aset(bind2,3,var91/*success*/);bind_aset(bind2,4,var89/*pass*/);it=rb_funcall(self,sy_AmethystCTranslator__dq_cstruct_0673,1,bind2);var90/*oldpass*/=bind_aget(bind2,1);;var94/*to*/=bind_aget(bind2,2);;var91/*success*/=bind_aget(bind2,3);;var89/*pass*/=bind_aget(bind2,4);; var95/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass35;
                   goto success35;
                   pass35: *ptr=oldpass35; goto fail;
                   success35: *ptr=oldpass35;
                it=var95/*autovar*/; var6/*_result*/=it;;
 break;
case 12/*Rule*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var96/*autovar*/=it;;
it=var96/*autovar*/; var97/*autovar*/=it;;
it=var97/*autovar*/; var98/*autovar*/=it;;
int oldpos8=ptr->pos;int cut3=0;
alt3_1:;it=var98/*autovar*/; var99/*autovar*/=it;;
cstruct oldpass37=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var99/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_src_dot_name_80f3,1,bind2); var34/*name*/=it;;
bind_aset(bind2,1,var34/*name*/);it=rb_funcall(self,sy_AmethystCTranslator__lp_Current_bc00,1,bind2);var34/*name*/=bind_aget(bind2,1);;FAILTEST(pass37);bind_aset(bind2,1,var34/*name*/);it=rb_funcall(self,sy_AmethystCTranslator__at_rulenam_f912,1,bind2);var34/*name*/=bind_aget(bind2,1);;it=rb_funcall(self,sy_AmethystCTranslator_src_dot_body_519e,1,bind2); var100/*autovar*/=it;;
cstruct oldpass38=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var100/*autovar*/;ptr->len=1;
                     it=AmethystCTranslator_trans(self ); FAILTEST(pass38); var101/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass38;
                   goto success38;
                   pass38: *ptr=oldpass38; goto pass37;
                   success38: *ptr=oldpass38;
                it=var101/*autovar*/; var102/*body*/=it;;
bind_aset(bind2,1,var34/*name*/);bind_aset(bind2,2,var16/*s*/);bind_aset(bind2,3,var102/*body*/);it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_c6bd,1,bind2);var34/*name*/=bind_aget(bind2,1);;var16/*s*/=bind_aget(bind2,2);;var102/*body*/=bind_aget(bind2,3);; var103/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass37;
                   goto success37;
                   pass37: *ptr=oldpass37; goto alt3_2;
                   success37: *ptr=oldpass37;
                it=var103/*autovar*/; var6/*_result*/=it;;

;goto accept8;
alt3_2: ptr->pos=oldpos8;it=var98/*autovar*/; var104/*autovar*/=it;;
cstruct oldpass39=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var104/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator_src_dot_name_80f3,1,bind2); var34/*name*/=it;;
bind_aset(bind2,1,var34/*name*/);it=rb_funcall(self,sy_AmethystCTranslator__at_rulenam_f912,1,bind2);var34/*name*/=bind_aget(bind2,1);;it=rb_funcall(self,sy_AmethystCTranslator_src_dot_body_519e,1,bind2); var105/*autovar*/=it;;
cstruct oldpass40=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var105/*autovar*/;ptr->len=1;
                     it=AmethystCTranslator_trans(self ); FAILTEST(pass40); var106/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass40;
                   goto success40;
                   pass40: *ptr=oldpass40; goto pass39;
                   success40: *ptr=oldpass40;
                it=var106/*autovar*/; var102/*body*/=it;;
bind_aset(bind2,1,var34/*name*/);bind_aset(bind2,2,var102/*body*/);it=rb_funcall(self,sy_AmethystCTranslator_h_eq__dq_VALUE_c505,1,bind2);var34/*name*/=bind_aget(bind2,1);;var102/*body*/=bind_aget(bind2,2);; var107/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass39;
                   goto success39;
                   pass39: *ptr=oldpass39; goto alt3_3;
                   success39: *ptr=oldpass39;
                it=var107/*autovar*/; var6/*_result*/=it;;

;goto accept8;
alt3_3: ptr->pos=oldpos8;goto fail;
 accept8:;
 break;
case 13/*Seq*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var108/*autovar*/=it;;
cstruct oldpass41=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var108/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var109/*autovar*/=it;;
int oldpos9;  while(1){oldpos9=ptr->pos;   it=AmethystCTranslator_trans(self ); FAILTEST(break5); var110/*autovar*/=it;;
bind_aset(bind2,1,var109/*autovar*/);bind_aset(bind2,2,var110/*autovar*/);it=rb_funcall(self,sy_AmethystCTranslator__append_lp__d113,1,bind2);var109/*autovar*/=bind_aget(bind2,1);;var110/*autovar*/=bind_aget(bind2,2);; } break5: ptr->pos=oldpos9;   it=var109/*autovar*/; var54/*t*/=it;;
bind_aset(bind2,1,var54/*t*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__ti__cfcb,1,bind2);var54/*t*/=bind_aget(bind2,1);; var111/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass41;
                   goto success41;
                   pass41: *ptr=oldpass41; goto fail;
                   success41: *ptr=oldpass41;
                it=var111/*autovar*/; var6/*_result*/=it;;
 break;
case 14/*Stop*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var112/*autovar*/=it;;
cstruct oldpass42=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var112/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass42;
                   goto success42;
                   pass42: *ptr=oldpass42; goto fail;
                   success42: *ptr=oldpass42;
                it=rb_funcall(self,sy_AmethystCTranslator__at_stops_eq_t_c6ab,1,bind2); var6/*_result*/=it;;
 break;
case 15/*Switch_Char*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var113/*autovar*/=it;;
cstruct oldpass43=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var113/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_obj_clone(s_switch_lp__lp__a839); var16/*s*/=it;;
int oldpos10;  while(1){oldpos10=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break6); var114/*autovar*/=it;;
cstruct oldpass44=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var114/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass44); var115/*c*/=it;;
  it=AmethystCTranslator_trans(self ); FAILTEST(pass44); var54/*t*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass44;
                   goto success44;
                   pass44: *ptr=oldpass44; goto break6;
                   success44: *ptr=oldpass44;
                bind_aset(bind2,1,var16/*s*/);bind_aset(bind2,2,var115/*c*/);bind_aset(bind2,3,var54/*t*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__252c,1,bind2);var16/*s*/=bind_aget(bind2,1);;var115/*c*/=bind_aget(bind2,2);;var54/*t*/=bind_aget(bind2,3);; } break6: ptr->pos=oldpos10;   bind_aset(bind2,1,var16/*s*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__4db9,1,bind2);var16/*s*/=bind_aget(bind2,1);; var116/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass43;
                   goto success43;
                   pass43: *ptr=oldpass43; goto fail;
                   success43: *ptr=oldpass43;
                it=var116/*autovar*/; var6/*_result*/=it;;
 break;
case 16/*Switch_Clas*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var117/*autovar*/=it;;
cstruct oldpass45=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var117/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_AmethystCTranslator__dq_switchh_f207,1,bind2); var118/*sh*/=it;;
it=i_0; var35/*ii*/=it;;
it=rb_obj_clone(s__d41d); var56/*init*/=it;;
bind_aset(bind2,1,var118/*sh*/);it=rb_funcall(self,sy_AmethystCTranslator__at_header_lt__92e2,1,bind2);var118/*sh*/=bind_aget(bind2,1);;bind_aset(bind2,1,var118/*sh*/);it=rb_funcall(self,sy_AmethystCTranslator__dq_switch_lp__f722,1,bind2);var118/*sh*/=bind_aget(bind2,1);; var16/*s*/=it;;
int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break7); var119/*autovar*/=it;;
cstruct oldpass46=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var119/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass46); var115/*c*/=it;;
  it=AmethystCTranslator_trans(self ); FAILTEST(pass46); var54/*t*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass46;
                   goto success46;
                   pass46: *ptr=oldpass46; goto break7;
                   success46: *ptr=oldpass46;
                bind_aset(bind2,1,var115/*c*/);bind_aset(bind2,2,var56/*init*/);bind_aset(bind2,3,var35/*ii*/);bind_aset(bind2,4,var16/*s*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__dot__1364,1,bind2);var115/*c*/=bind_aget(bind2,1);;var56/*init*/=bind_aget(bind2,2);;var35/*ii*/=bind_aget(bind2,3);;var16/*s*/=bind_aget(bind2,4);;bind_aset(bind2,1,var16/*s*/);bind_aset(bind2,2,var54/*t*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__1dcb,1,bind2);var16/*s*/=bind_aget(bind2,1);;var54/*t*/=bind_aget(bind2,2);; } break7: ptr->pos=oldpos11;   bind_aset(bind2,1,var118/*sh*/);bind_aset(bind2,2,var56/*init*/);it=rb_funcall(self,sy_AmethystCTranslator__at_init_sp__sp__lt__aac8,1,bind2);var118/*sh*/=bind_aget(bind2,1);;var56/*init*/=bind_aget(bind2,2);;bind_aset(bind2,1,var16/*s*/);it=rb_funcall(self,sy_AmethystCTranslator_bind_lb_1_rb__pl__4db9,1,bind2);var16/*s*/=bind_aget(bind2,1);; var120/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass45;
                   goto success45;
                   pass45: *ptr=oldpass45; goto fail;
                   success45: *ptr=oldpass45;
                it=var120/*autovar*/; var6/*_result*/=it;;
 break;
case 17/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_ctranslator2_c(){ 
 cls_AmethystCTranslator=rb_define_class("AmethystCTranslator",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    i_0=rb_funcall(rb_str_new2("0"),rb_intern("to_i"),0);rb_global_variable(&i_0);
i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);rb_global_variable(&i_1);
s__d41d=rb_str_new2("");rb_global_variable(&s__d41d);
s_alt_3482=rb_str_new2("alt");rb_global_variable(&s_alt_3482);
s_fail_e111=rb_str_new2("fail");rb_global_variable(&s_fail_e111);
s_it_eq_Qnil=rb_str_new2("it=Qnil;");rb_global_variable(&s_it_eq_Qnil);
s_it_eq_ame_c_4b8d=rb_str_new2("it=ame_curobj2(ptr)               ;ptr->pos++;");rb_global_variable(&s_it_eq_ame_c_4b8d);
s_it_eq_rb_st_ee66=rb_str_new2("it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;");rb_global_variable(&s_it_eq_rb_st_ee66);
s_oldpass_6559=rb_str_new2("oldpass");rb_global_variable(&s_oldpass_6559);
s_pass_1a1d=rb_str_new2("pass");rb_global_variable(&s_pass_1a1d);
s_ptr_mi__gt_pos_db4c=rb_str_new2("ptr->pos=ptr->len;");rb_global_variable(&s_ptr_mi__gt_pos_db4c);
s_success_260c=rb_str_new2("success");rb_global_variable(&s_success_260c);
s_switch_lp__lp__a839=rb_str_new2("switch((unsigned char)*ame_curstr2(ptr)){");rb_global_variable(&s_switch_lp__lp__a839);
switchhash_AmethystCTranslator_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Global\nnext h[k]=3 if k<=Key\nnext h[k]=4 if k<=Lambda\nnext h[k]=5 if k<=Local\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Object\n}");rb_global_variable(&switchhash_AmethystCTranslator_1);;
switchhash_AmethystCTranslator_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Cut\nnext h[k]=5 if k<=Grammar\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Lookahead\nnext h[k]=8 if k<=Many\nnext h[k]=9 if k<=Memo\nnext h[k]=10 if k<=Or\nnext h[k]=11 if k<=Pass\nnext h[k]=12 if k<=Rule\nnext h[k]=13 if k<=Seq\nnext h[k]=14 if k<=Stop\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_global_variable(&switchhash_AmethystCTranslator_2);;
switchhash_AmethystCTranslator_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_AmethystCTranslator_3);;
switchhash_AmethystCTranslator_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_AmethystCTranslator_4);;
switchhash_AmethystCTranslator_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_AmethystCTranslator_5);;
sy_AmethystCTranslator__append_lp__d113=rb_intern("AmethystCTranslator__append_lp__d113");
sy_AmethystCTranslator__at_bindno_eq__e294=rb_intern("AmethystCTranslator__at_bindno_eq__e294");
sy_AmethystCTranslator__at_binds_dot_m_4c7b=rb_intern("AmethystCTranslator__at_binds_dot_m_4c7b");
sy_AmethystCTranslator__at_callbac_2d11=rb_intern("AmethystCTranslator__at_callbac_2d11");
sy_AmethystCTranslator__at_callbac_e37c=rb_intern("AmethystCTranslator__at_callbac_e37c");
sy_AmethystCTranslator__at_cutlabe_7393=rb_intern("AmethystCTranslator__at_cutlabe_7393");
sy_AmethystCTranslator__at_cutlabe_d8d6=rb_intern("AmethystCTranslator__at_cutlabe_d8d6");
sy_AmethystCTranslator__at_cuts_7bbc=rb_intern("AmethystCTranslator__at_cuts_7bbc");
sy_AmethystCTranslator__at_cuts_eq_ni_f875=rb_intern("AmethystCTranslator__at_cuts_eq_ni_f875");
sy_AmethystCTranslator__at_cuts_eq_tr_13c6=rb_intern("AmethystCTranslator__at_cuts_eq_tr_13c6");
sy_AmethystCTranslator__at_defmeth_456b=rb_intern("AmethystCTranslator__at_defmeth_456b");
sy_AmethystCTranslator__at_defs_eq__lb__rb__188f=rb_intern("AmethystCTranslator__at_defs_eq__lb__rb__188f");
sy_AmethystCTranslator__at_faillab_1610=rb_intern("AmethystCTranslator__at_faillab_1610");
sy_AmethystCTranslator__at_faillab_8142=rb_intern("AmethystCTranslator__at_faillab_8142");
sy_AmethystCTranslator__at_faillab_e174=rb_intern("AmethystCTranslator__at_faillab_e174");
sy_AmethystCTranslator__at_faillab_e643=rb_intern("AmethystCTranslator__at_faillab_e643");
sy_AmethystCTranslator__at_grammar_1337=rb_intern("AmethystCTranslator__at_grammar_1337");
sy_AmethystCTranslator__at_header_eq__7aa9=rb_intern("AmethystCTranslator__at_header_eq__7aa9");
sy_AmethystCTranslator__at_header_lt__92e2=rb_intern("AmethystCTranslator__at_header_lt__92e2");
sy_AmethystCTranslator__at_init_eq__lb__rb__47da=rb_intern("AmethystCTranslator__at_init_eq__lb__rb__47da");
sy_AmethystCTranslator__at_init_sp__sp__lt__aac8=rb_intern("AmethystCTranslator__at_init_sp__sp__lt__aac8");
sy_AmethystCTranslator__at_lambdas_ecda=rb_intern("AmethystCTranslator__at_lambdas_ecda");
sy_AmethystCTranslator__at_rulenam_f912=rb_intern("AmethystCTranslator__at_rulenam_f912");
sy_AmethystCTranslator__at_stoplab_2ba4=rb_intern("AmethystCTranslator__at_stoplab_2ba4");
sy_AmethystCTranslator__at_stoplab_a14e=rb_intern("AmethystCTranslator__at_stoplab_a14e");
sy_AmethystCTranslator__at_stops_e2b4=rb_intern("AmethystCTranslator__at_stops_e2b4");
sy_AmethystCTranslator__at_stops_eq_n_588d=rb_intern("AmethystCTranslator__at_stops_eq_n_588d");
sy_AmethystCTranslator__at_stops_eq_t_c6ab=rb_intern("AmethystCTranslator__at_stops_eq_t_c6ab");
sy_AmethystCTranslator__dq_Amethys_2ed8=rb_intern("AmethystCTranslator__dq_Amethys_2ed8");
sy_AmethystCTranslator__dq_VALUE_sp_c_8bbf=rb_intern("AmethystCTranslator__dq_VALUE_sp_c_8bbf");
sy_AmethystCTranslator__dq__at__sh__le_bind_3d2b=rb_intern("AmethystCTranslator__dq__at__sh__le_bind_3d2b");
sy_AmethystCTranslator__dq__sh__le__at_gram_5de9=rb_intern("AmethystCTranslator__dq__sh__le__at_gram_5de9");
sy_AmethystCTranslator__dq__sh__le_bind_lb__3bec=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__3bec");
sy_AmethystCTranslator__dq__sh__le_bind_lb__9630=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__9630");
sy_AmethystCTranslator__dq__sh__le_bind_lb__9cfd=rb_intern("AmethystCTranslator__dq__sh__le_bind_lb__9cfd");
sy_AmethystCTranslator__dq__sh__le_src_dot_n_9acf=rb_intern("AmethystCTranslator__dq__sh__le_src_dot_n_9acf");
sy_AmethystCTranslator__dq_class_sp__sh__0b62=rb_intern("AmethystCTranslator__dq_class_sp__sh__0b62");
sy_AmethystCTranslator__dq_cstruct_0673=rb_intern("AmethystCTranslator__dq_cstruct_0673");
sy_AmethystCTranslator__dq_def_sp__sh__le_b_b73d=rb_intern("AmethystCTranslator__dq_def_sp__sh__le_b_b73d");
sy_AmethystCTranslator__dq_goto_sp__sh__le__f772=rb_intern("AmethystCTranslator__dq_goto_sp__sh__le__f772");
sy_AmethystCTranslator__dq_if_lp_ptr_mi__033b=rb_intern("AmethystCTranslator__dq_if_lp_ptr_mi__033b");
sy_AmethystCTranslator__dq_if_sp__lp__sh__le_a_0233=rb_intern("AmethystCTranslator__dq_if_sp__lp__sh__le_a_0233");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_0a35=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_0a35");
sy_AmethystCTranslator__dq_int_sp__sh__le_b_0b60=rb_intern("AmethystCTranslator__dq_int_sp__sh__le_b_0b60");
sy_AmethystCTranslator__dq_it_eq_Qnil_8464=rb_intern("AmethystCTranslator__dq_it_eq_Qnil_8464");
sy_AmethystCTranslator__dq_it_eq__sh__le_bg_281f=rb_intern("AmethystCTranslator__dq_it_eq__sh__le_bg_281f");
sy_AmethystCTranslator__dq_switch_lp__f722=rb_intern("AmethystCTranslator__dq_switch_lp__f722");
sy_AmethystCTranslator__dq_switchh_f207=rb_intern("AmethystCTranslator__dq_switchh_f207");
sy_AmethystCTranslator__lb_bind_lb_1_rb__8fa4=rb_intern("AmethystCTranslator__lb_bind_lb_1_rb__8fa4");
sy_AmethystCTranslator__lp_Current_bc00=rb_intern("AmethystCTranslator__lp_Current_bc00");
sy_AmethystCTranslator__lp_bind_lb_1_rb__a948=rb_intern("AmethystCTranslator__lp_bind_lb_1_rb__a948");
sy_AmethystCTranslator__lp_bind_lb_1_rb__d1fd=rb_intern("AmethystCTranslator__lp_bind_lb_1_rb__d1fd");
sy_AmethystCTranslator_addcallb_0461=rb_intern("AmethystCTranslator_addcallb_0461");
sy_AmethystCTranslator_addcallb_2cf7=rb_intern("AmethystCTranslator_addcallb_2cf7");
sy_AmethystCTranslator_ar_eq__ti_src_dot__efea=rb_intern("AmethystCTranslator_ar_eq__ti_src_dot__efea");
sy_AmethystCTranslator_bind_lb_1_rb_=rb_intern("AmethystCTranslator_bind_lb_1_rb_");
sy_AmethystCTranslator_bind_lb_1_rb__dot__1364=rb_intern("AmethystCTranslator_bind_lb_1_rb__dot__1364");
sy_AmethystCTranslator_bind_lb_1_rb__eq__2d82=rb_intern("AmethystCTranslator_bind_lb_1_rb__eq__2d82");
sy_AmethystCTranslator_bind_lb_1_rb__lt__98f3=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__98f3");
sy_AmethystCTranslator_bind_lb_1_rb__lt__acb7=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__acb7");
sy_AmethystCTranslator_bind_lb_1_rb__lt__c72d=rb_intern("AmethystCTranslator_bind_lb_1_rb__lt__c72d");
sy_AmethystCTranslator_bind_lb_1_rb__pl__1b5e=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__1b5e");
sy_AmethystCTranslator_bind_lb_1_rb__pl__1dcb=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__1dcb");
sy_AmethystCTranslator_bind_lb_1_rb__pl__22c0=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__22c0");
sy_AmethystCTranslator_bind_lb_1_rb__pl__252c=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__252c");
sy_AmethystCTranslator_bind_lb_1_rb__pl__4da1=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__4da1");
sy_AmethystCTranslator_bind_lb_1_rb__pl__4db9=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__4db9");
sy_AmethystCTranslator_bind_lb_1_rb__pl__891b=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__891b");
sy_AmethystCTranslator_bind_lb_1_rb__pl__916b=rb_intern("AmethystCTranslator_bind_lb_1_rb__pl__916b");
sy_AmethystCTranslator_bind_lb_1_rb__ti__cfcb=rb_intern("AmethystCTranslator_bind_lb_1_rb__ti__cfcb");
sy_AmethystCTranslator_h_eq__dq_VALUE_3d5e=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_3d5e");
sy_AmethystCTranslator_h_eq__dq_VALUE_c505=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_c505");
sy_AmethystCTranslator_h_eq__dq_VALUE_c6bd=rb_intern("AmethystCTranslator_h_eq__dq_VALUE_c6bd");
sy_AmethystCTranslator_label_lp__dq_a_f49c=rb_intern("AmethystCTranslator_label_lp__dq_a_f49c");
sy_AmethystCTranslator_label_lp__dq_b_6df7=rb_intern("AmethystCTranslator_label_lp__dq_b_6df7");
sy_AmethystCTranslator_label_lp__dq_o_c187=rb_intern("AmethystCTranslator_label_lp__dq_o_c187");
sy_AmethystCTranslator_label_lp__dq_r_95b2=rb_intern("AmethystCTranslator_label_lp__dq_r_95b2");
sy_AmethystCTranslator_mktable_lp__ea79=rb_intern("AmethystCTranslator_mktable_lp__ea79");
sy_AmethystCTranslator_r_eq__dq__sp__sh__le_bi_10a8=rb_intern("AmethystCTranslator_r_eq__dq__sp__sh__le_bi_10a8");
sy_AmethystCTranslator_raise_sp__dq_T_0ab1=rb_intern("AmethystCTranslator_raise_sp__dq_T_0ab1");
sy_AmethystCTranslator_rbbget_lp_s_68a8=rb_intern("AmethystCTranslator_rbbget_lp_s_68a8");
sy_AmethystCTranslator_src_25d9=rb_intern("AmethystCTranslator_src_25d9");
sy_AmethystCTranslator_src_dot_body_519e=rb_intern("AmethystCTranslator_src_dot_body_519e");
sy_AmethystCTranslator_src_dot_name_80f3=rb_intern("AmethystCTranslator_src_dot_name_80f3");
sy_AmethystCTranslator_src_dot_rule_5acf=rb_intern("AmethystCTranslator_src_dot_rule_5acf");
sy_AmethystCTranslator_src_dot_to_5e99=rb_intern("AmethystCTranslator_src_dot_to_5e99");
sy_apply=rb_intern("apply");
sy_label=rb_intern("label");
                    rb_define_method(cls_AmethystCTranslator,"addcallback",AmethystCTranslator_addcallback,1);
rb_define_method(cls_AmethystCTranslator,"addlambda",AmethystCTranslator_addlambda,0);
rb_define_method(cls_AmethystCTranslator,"itrans",AmethystCTranslator_itrans,0);
rb_define_method(cls_AmethystCTranslator,"rbcode",AmethystCTranslator_rbcode,0);
rb_define_method(cls_AmethystCTranslator,"rbtrans",AmethystCTranslator_rbtrans,0);
rb_define_method(cls_AmethystCTranslator,"rbtrans2",AmethystCTranslator_rbtrans2,0);
rb_define_method(cls_AmethystCTranslator,"rw",AmethystCTranslator_rw,2);
rb_define_method(cls_AmethystCTranslator,"trans",AmethystCTranslator_trans,0);
                    rb_eval_string("testversionctranslator2('1bfd0b2ee0407109dea603af2b3f8dc7')");}
