#include "cthyst.h"
VALUE cls_Normalize;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE);
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Normalize_act(VALUE self );
VALUE Normalize_apply2(VALUE self );
VALUE Normalize_bind(VALUE self );
VALUE Normalize_cant_fail(VALUE self );
VALUE Normalize_must_empty(VALUE self );
VALUE Normalize_or(VALUE self );
VALUE Normalize_seq2(VALUE self );
VALUE switchhash_Normalize_10;
VALUE switchhash_Normalize_11;
VALUE switchhash_Normalize_12;
VALUE switchhash_Normalize_13;
VALUE switchhash_Normalize_1;
VALUE switchhash_Normalize_2;
VALUE switchhash_Normalize_3;
VALUE switchhash_Normalize_4;
VALUE switchhash_Normalize_5;
VALUE switchhash_Normalize_6;
VALUE switchhash_Normalize_7;
VALUE switchhash_Normalize_8;
VALUE switchhash_Normalize_9;
static VALUE i_0;
static VALUE i_1;
static VALUE s__bs__bs__7f81;
static VALUE s__bs__dq__3bd8;
static VALUE s__qu__3590;
static VALUE sy_Normalize_Act_dot_crea_e434;
static VALUE sy_Normalize_Apply_lb__dq_f_3881;
static VALUE sy_Normalize_Apply_lb_bi_8afb;
static VALUE sy_Normalize_Bind_lb_bin_bff4;
static VALUE sy_Normalize_CAct_lb_eva_559c;
static VALUE sy_Normalize_Or_dot_creat_fbdf;
static VALUE sy_Normalize_Placehol_6875;
static VALUE sy_Normalize_Placehol_a03d;
static VALUE sy_Normalize_Seq_lb_Bind_8f10;
static VALUE sy_Normalize_Seq_lb_bind_b52b;
static VALUE sy_Normalize_Seq_lb_bind_b71c;
static VALUE sy_Normalize__append_lp__0eeb;
static VALUE sy_Normalize__append_lp__4297;
static VALUE sy_Normalize__append_lp__4f82;
static VALUE sy_Normalize__append_lp__653e;
static VALUE sy_Normalize__append_lp__6ac6;
static VALUE sy_Normalize__append_lp__7140;
static VALUE sy_Normalize__append_lp__81ec;
static VALUE sy_Normalize__append_lp__984f;
static VALUE sy_Normalize__lp_bind_lb_13_59f8;
static VALUE sy_Normalize__lp_bind_lb_14_ee3d;
static VALUE sy_Normalize__lp_cant_fa_6b5d;
static VALUE sy_Normalize__lp_eval_lp_sr_3f78;
static VALUE sy_Normalize__lp_must_em_e2d0;
static VALUE sy_Normalize_bind_lb_0_rb__dot__263e;
static VALUE sy_Normalize_bind_lb_0_rb__lb__1f45;
static VALUE sy_Normalize_bind_lb_10_rb__46f2;
static VALUE sy_Normalize_bind_lb_10_rb__c855;
static VALUE sy_Normalize_bind_lb_2_rb__dot__e24b;
static VALUE sy_Normalize_bind_lb_7_rb_;
static VALUE sy_Normalize_src_25d9;
static VALUE sy_Normalize_src_dot_ary_d5cf;
static VALUE sy_Normalize_src_dot_clas_b345;
static VALUE sy_Normalize_src_dot_free_00b9;
static VALUE sy_Normalize_src_dot_free_3d49;
static VALUE sy_Normalize_src_dot_name_80f3;
VALUE Normalize_act(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_12,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_13,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Local*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 3/*Lambda*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_Act_dot_crea_e434,1,bind);  bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 4/*String*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Amethyst_spaces(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; goto alt1_2; break;
case '[' ... '[':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else goto alt1_2; break;
}
;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Amethyst_number(self ); FAILTEST(alt1_3);
;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=Amethyst_spaces(self ); FAILTEST(alt1_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... 'm':;case 'o' ... 's':;case 'u' ... UC(255):; goto alt1_4; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='l'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='e')  ptr->pos+=4; else goto alt1_4; break;
case 'n' ... 'n':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='i'&&ame_curstr2(ptr)[1]=='l')  ptr->pos+=2; else goto alt1_4; break;
case 't' ... 't':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='u'&&ame_curstr2(ptr)[2]=='e')  ptr->pos+=3; else goto alt1_4; break;
}
;goto accept1;
alt1_4: ptr->pos=oldpos1;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_5);it=bind_aget(bind,5/*s*/);int oldpos2; int stop1=0; while(1){oldpos2=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... '[':;case ']' ... UC(255):; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt2_2;
;goto accept3;
alt2_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);
;goto accept3;
alt2_3: ptr->pos=oldpos3;goto break1;
 accept3:;
 break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut1=1;stop1=1; break;
case UC(92) ... UC(92):; int oldpos4=ptr->pos;int cut3=0;
alt3_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystCore_anything(self ); FAILTEST(alt3_2);
;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);
;goto accept4;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept4:;
 break;
} if (stop1) goto accept2; } break1: goto alt1_5; accept2:;   
;goto accept1;
alt1_5: ptr->pos=oldpos1;if (cut1) goto pass3;it=rb_obj_clone(s__qu__3590); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_6);it=bind_aget(bind,5/*s*/);int oldpos5; int stop2=0; while(1){oldpos5=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... '[':;case ']' ... UC(255):; int oldpos6=ptr->pos;int cut4=0;
alt4_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt4_2;
;goto accept6;
alt4_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);
;goto accept6;
alt4_3: ptr->pos=oldpos6;goto break2;
 accept6:;
 break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut1=1;stop2=1; break;
case UC(92) ... UC(92):; int oldpos7=ptr->pos;int cut5=0;
alt5_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystCore_anything(self ); FAILTEST(alt5_2);
;goto accept7;
alt5_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);
;goto accept7;
alt5_3: ptr->pos=oldpos7;goto break2;
 accept7:;
 break;
} if (stop2) goto accept5; } break2: goto alt1_6; accept5:;   
;goto accept1;
alt1_6: ptr->pos=oldpos1;if (cut1) goto pass3;goto pass3;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(pass3);it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case 'A' ... 'Z':; int oldpos8=ptr->pos;int cut6=0;
alt6_1:;  it=Amethyst_spaces(self ); FAILTEST(alt6_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; goto alt6_2; break;
case '[' ... '[':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else goto alt6_2; break;
}
;goto accept8;
alt6_2: ptr->pos=oldpos8;  it=Amethyst_number(self ); FAILTEST(alt6_3);
;goto accept8;
alt6_3: ptr->pos=oldpos8;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos9;  while(1){oldpos9=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto break3; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} } break3: ptr->pos=oldpos9;   it=rb_funcall(self,sy_Normalize__lp_eval_lp_sr_3f78,1,bind); FAILTEST(alt6_4);
;goto accept8;
alt6_4: ptr->pos=oldpos8;  it=Amethyst_spaces(self ); FAILTEST(alt6_5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... 'm':;case 'o' ... 's':;case 'u' ... UC(255):; goto alt6_5; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='l'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='e')  ptr->pos+=4; else goto alt6_5; break;
case 'n' ... 'n':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='i'&&ame_curstr2(ptr)[1]=='l')  ptr->pos+=2; else goto alt6_5; break;
case 't' ... 't':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='u'&&ame_curstr2(ptr)[2]=='e')  ptr->pos+=3; else goto alt6_5; break;
}
;goto accept8;
alt6_5: ptr->pos=oldpos8;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_6);it=bind_aget(bind,5/*s*/);int oldpos10; int stop4=0; while(1){oldpos10=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... '[':;case ']' ... UC(255):; int oldpos11=ptr->pos;int cut7=0;
alt7_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt7_2;
;goto accept11;
alt7_2: ptr->pos=oldpos11;  it=AmethystCore_anything(self ); FAILTEST(alt7_3);
;goto accept11;
alt7_3: ptr->pos=oldpos11;goto break4;
 accept11:;
 break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut6=1;stop4=1; break;
case UC(92) ... UC(92):; int oldpos12=ptr->pos;int cut8=0;
alt8_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystCore_anything(self ); FAILTEST(alt8_2);
;goto accept12;
alt8_2: ptr->pos=oldpos12;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);
;goto accept12;
alt8_3: ptr->pos=oldpos12;goto break4;
 accept12:;
 break;
} if (stop4) goto accept10; } break4: goto alt6_6; accept10:;   
;goto accept8;
alt6_6: ptr->pos=oldpos8;if (cut6) goto pass3;it=rb_obj_clone(s__qu__3590); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_7);it=bind_aget(bind,5/*s*/);int oldpos13; int stop5=0; while(1){oldpos13=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... '[':;case ']' ... UC(255):; int oldpos14=ptr->pos;int cut9=0;
alt9_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt9_2;
;goto accept14;
alt9_2: ptr->pos=oldpos14;  it=AmethystCore_anything(self ); FAILTEST(alt9_3);
;goto accept14;
alt9_3: ptr->pos=oldpos14;goto break5;
 accept14:;
 break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut6=1;stop5=1; break;
case UC(92) ... UC(92):; int oldpos15=ptr->pos;int cut10=0;
alt10_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystCore_anything(self ); FAILTEST(alt10_2);
;goto accept15;
alt10_2: ptr->pos=oldpos15;  it=AmethystCore_anything(self ); FAILTEST(alt10_3);
;goto accept15;
alt10_3: ptr->pos=oldpos15;goto break5;
 accept15:;
 break;
} if (stop5) goto accept13; } break5: goto alt6_7; accept13:;   
;goto accept8;
alt6_7: ptr->pos=oldpos8;if (cut6) goto pass3;goto pass3;
 accept8:;
  it=Amethyst_spaces(self ); FAILTEST(pass3);it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
}
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass1;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Normalize_CAct_lb_eva_559c,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 5/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,1/*autovar*/); bind_aset(bind,6/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_apply2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(20);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass2; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass2; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_11,rb_obj_class(ame_curobj2(ptr))))){case 0/*Lambda*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,7/*x*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto pass3;
                   success4: *ptr=oldpass4;
                it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case 1/*Object*/:; goto pass3; break;
}
                   goto success3;
                   pass3: *ptr=oldpass3; goto alt2_2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Normalize_bind_lb_7_rb_,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass5; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass5; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt2_3;
                   success5: *ptr=oldpass5;
                goto alt2_3;
;goto accept2;
alt2_3: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass6);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass6; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass6; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt2_4;
                   success6: *ptr=oldpass6;
                goto alt2_4;
;goto accept2;
alt2_4: ptr->pos=oldpos2;goto alt1_2;
 accept2:;
 break;
case 1/*CAct*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,11/*autovar*/,it);
int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass7; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass7; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass7; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt3_2;
                   success7: *ptr=oldpass7;
                goto alt3_2;
;goto accept3;
alt3_2: ptr->pos=oldpos3;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass8);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass8; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass8; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt3_3;
                   success8: *ptr=oldpass8;
                it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,12/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass9); bind_aset(bind,13/*name*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt3_3;
                   success9: *ptr=oldpass9;
                it=rb_funcall(self,sy_Normalize_Apply_lb_bi_8afb,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass10);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass10; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass10; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto alt3_4;
                   success10: *ptr=oldpass10;
                it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,14/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass11); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto pass11;
                   success12: *ptr=oldpass12;
                it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt3_4;
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_Normalize_Placehol_a03d,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept3;
alt3_4: ptr->pos=oldpos3;goto alt1_2;
 accept3:;
 break;
case 2/*CAct*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,16/*autovar*/,it);
int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=bind_aget(bind,16/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass13);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass13; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass13; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass13; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto alt4_2;
                   success13: *ptr=oldpass13;
                goto alt4_2;
;goto accept4;
alt4_2: ptr->pos=oldpos4;it=bind_aget(bind,16/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass14);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass14; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass14; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto alt4_3;
                   success14: *ptr=oldpass14;
                it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,12/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass15); bind_aset(bind,13/*name*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto alt4_3;
                   success15: *ptr=oldpass15;
                it=rb_funcall(self,sy_Normalize_Apply_lb_bi_8afb,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;it=bind_aget(bind,16/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass16);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass16; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass16; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass16;
                   goto success16;
                   pass16: *ptr=oldpass16; goto alt4_4;
                   success16: *ptr=oldpass16;
                goto alt4_4;
;goto accept4;
alt4_4: ptr->pos=oldpos4;goto alt1_2;
 accept4:;
 break;
case 3/*CAct*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,17/*autovar*/,it);
int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=bind_aget(bind,17/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass17);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass17; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass17; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass17; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass17;
                   goto success17;
                   pass17: *ptr=oldpass17; goto alt5_2;
                   success17: *ptr=oldpass17;
                goto alt5_2;
;goto accept5;
alt5_2: ptr->pos=oldpos5;it=bind_aget(bind,17/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass18);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass18; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass18; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto alt5_3;
                   success18: *ptr=oldpass18;
                goto alt5_3;
;goto accept5;
alt5_3: ptr->pos=oldpos5;it=bind_aget(bind,17/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass19);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass19; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass19; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass19;
                   goto success19;
                   pass19: *ptr=oldpass19; goto alt5_4;
                   success19: *ptr=oldpass19;
                it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,14/*autovar*/,it);
cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass20); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass21=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass21;
                   goto success21;
                   pass21: *ptr=oldpass21; goto pass20;
                   success21: *ptr=oldpass21;
                it=Qnil;if (ptr->pos<ptr->len) goto pass20;
                   goto success20;
                   pass20: *ptr=oldpass20; goto alt5_4;
                   success20: *ptr=oldpass20;
                it=rb_funcall(self,sy_Normalize_Placehol_a03d,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept5;
alt5_4: ptr->pos=oldpos5;goto alt1_2;
 accept5:;
 break;
case 4/*Object*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,18/*autovar*/,it);
int oldpos6=ptr->pos;int cut6=0;
alt6_1:;it=bind_aget(bind,18/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass22=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass22);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass22; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass22; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass22; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass22;
                   goto success22;
                   pass22: *ptr=oldpass22; goto alt6_2;
                   success22: *ptr=oldpass22;
                goto alt6_2;
;goto accept6;
alt6_2: ptr->pos=oldpos6;it=bind_aget(bind,18/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass23=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass23);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass23; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass23; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass23;
                   goto success23;
                   pass23: *ptr=oldpass23; goto alt6_3;
                   success23: *ptr=oldpass23;
                goto alt6_3;
;goto accept6;
alt6_3: ptr->pos=oldpos6;it=bind_aget(bind,18/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass24=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass24);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass24; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass24; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass24;
                   goto success24;
                   pass24: *ptr=oldpass24; goto alt6_4;
                   success24: *ptr=oldpass24;
                goto alt6_4;
;goto accept6;
alt6_4: ptr->pos=oldpos6;goto alt1_2;
 accept6:;
 break;
}
;goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_dot_free_3d49,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,8/*autovar*/); bind_aset(bind,19/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_bind(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(25);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Bind*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind); int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Or*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind);  bind_aset(bind,5/*name*/,it);
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,7/*autovar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,8/*it*/,it);
it=rb_funcall(self,sy_Normalize_Bind_lb_bin_bff4,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__4f82,1,bind);  } break1: ptr->pos=oldpos3;   it=bind_aget(bind,7/*autovar*/); bind_aset(bind,10/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_2;
                   success4: *ptr=oldpass4;
                it=rb_funcall(self,sy_Normalize_Or_dot_creat_fbdf,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass1;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 2/*Seq*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind);  bind_aset(bind,5/*name*/,it);
int oldpos4=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,11/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,12/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__7140,1,bind); int oldpos5;  while(1){oldpos5=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__984f,1,bind);  } break2: ptr->pos=oldpos5;   it=bind_aget(bind,12/*autovar*/); bind_aset(bind,10/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt3_2;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Normalize_Seq_lb_bind_b52b,1,bind);  bind_aset(bind,15/*first*/,it);
it=rb_funcall(self,sy_Normalize_bind_lb_10_rb__c855,1,bind);  bind_aset(bind,16/*last*/,it);
it=bind_aget(bind,16/*last*/); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,17/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Comment*/:case 1/*Cut*/:case 2/*Stop*/:; it=ame_curobj2(ptr)               ;ptr->pos++;it=rb_funcall(self,sy_Normalize_Seq_lb_Bind_8f10,1,bind);  bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6; break;
case 3/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(pass6);it=rb_funcall(self,sy_Normalize_Seq_lb_bind_b71c,1,bind);  bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6; break;
}
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt3_2;
                   success6: *ptr=oldpass6;
                it=bind_aget(bind,18/*autovar*/); bind_aset(bind,4/*autovar*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto pass1;
 accept4:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 3/*Switch*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind);  bind_aset(bind,5/*name*/,it);
int oldpos6=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,19/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,10/*ary*/,it);
int oldpos7;  while(1){oldpos7=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,20/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,21/*p*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,22/*a*/,it);
it=rb_funcall(self,sy_Normalize_bind_lb_10_rb__46f2,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break3;
                   success8: *ptr=oldpass8;
                 } break3: ptr->pos=oldpos7;   it=rb_funcall(self,sy_Normalize_src_dot_clas_b345,1,bind);  bind_aset(bind,23/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt4_2;
                   success7: *ptr=oldpass7;
                it=bind_aget(bind,23/*autovar*/); bind_aset(bind,4/*autovar*/,it);

;goto accept6;
alt4_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept6;
alt4_3: ptr->pos=oldpos6;goto pass1;
 accept6:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 4/*Object*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(pass1);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,24/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_cant_fail(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*e*/,it);
it=rb_funcall(self,sy_Normalize__lp_cant_fa_6b5d,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*e*/); bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Normalize_must_empty(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*e*/,it);
it=rb_funcall(self,sy_Normalize__lp_must_em_e2d0,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*e*/); bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Normalize_or(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(17);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,2/*or*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                
;goto accept2;
alt1_2: ptr->pos=oldpos2; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3);
;goto accept2;
alt1_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); 
;goto accept2;
alt1_4: ptr->pos=oldpos2;goto break1;
 accept2:;
 break;
case 1/*Or*/:; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_dot_ary_d5cf,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__6ac6,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_2;
                   success4: *ptr=oldpass4;
                
;goto accept3;
alt2_2: ptr->pos=oldpos3; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_3);
;goto accept3;
alt2_3: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); 
;goto accept3;
alt2_4: ptr->pos=oldpos3;goto break1;
 accept3:;
 break;
case 2/*Seq*/:; int oldpos4=ptr->pos;int cut3=0;
alt3_1:; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2);
;goto accept4;
alt3_2: ptr->pos=oldpos4;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,8/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos5;  while(1){oldpos5=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Cut*/:; int oldpos6=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++;ptr->pos=ptr->len;
;goto accept6;
alt4_2: ptr->pos=oldpos6;  it=Normalize_cant_fail(self ); FAILTEST(alt4_3);
;goto accept6;
alt4_3: ptr->pos=oldpos6;goto break2;
 accept6:;
 break;
case 1/*Object*/:;   it=Normalize_cant_fail(self ); FAILTEST(break2); break;
} } break2: ptr->pos=oldpos5;   it=Qnil;if (ptr->pos<ptr->len) goto pass5;it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__653e,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt3_3;
                   success5: *ptr=oldpass5;
                ptr->pos=ptr->len;
;goto accept4;
alt3_3: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_4); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); 
;goto accept4;
alt3_4: ptr->pos=oldpos4;goto break1;
 accept4:;
 break;
case 3/*Object*/:; int oldpos7=ptr->pos;int cut5=0;
alt5_1:; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt5_2);
;goto accept7;
alt5_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); 
;goto accept7;
alt5_3: ptr->pos=oldpos7;goto break1;
 accept7:;
 break;
} } break1: ptr->pos=oldpos1;   it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__dot__263e,1,bind);  bind_aset(bind,10/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,10/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,11/*autovar*/,it);
it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*autovar*/,it);
int oldpos8=ptr->pos;int cut6=0;
alt6_1:;it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*a*/,it);
it=i_0; bind_aset(bind,14/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_14_ee3d,1,bind); FAILTEST(alt6_2);it=rb_funcall(self,sy_Normalize_Apply_lb__dq_f_3881,1,bind);  bind_aset(bind,15/*autovar*/,it);

;goto accept8;
alt6_2: ptr->pos=oldpos8;it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*a*/,it);
it=i_1; bind_aset(bind,14/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_14_ee3d,1,bind); FAILTEST(alt6_3);it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__lb__1f45,1,bind);  bind_aset(bind,15/*autovar*/,it);

;goto accept8;
alt6_3: ptr->pos=oldpos8;it=bind_aget(bind,12/*autovar*/);it=rb_funcall(self,sy_Normalize_bind_lb_2_rb__dot__e24b,1,bind);  bind_aset(bind,15/*autovar*/,it);

;goto accept8;
alt6_4: ptr->pos=oldpos8;goto pass6;
 accept8:;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto fail;
                   success6: *ptr=oldpass6;
                it=bind_aget(bind,15/*autovar*/); bind_aset(bind,16/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_seq2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Seq*/:; it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,2/*seq*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                ptr->pos=ptr->len;
;goto accept2;
alt1_2: ptr->pos=oldpos2; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3);
;goto accept2;
alt1_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__4297,1,bind); 
;goto accept2;
alt1_4: ptr->pos=oldpos2;goto break1;
 accept2:;
 break;
case 1/*Seq*/:; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_dot_ary_d5cf,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__0eeb,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_2;
                   success4: *ptr=oldpass4;
                
;goto accept3;
alt2_2: ptr->pos=oldpos3; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_3);
;goto accept3;
alt2_3: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__4297,1,bind); 
;goto accept3;
alt2_4: ptr->pos=oldpos3;goto break1;
 accept3:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;int cut3=0;
alt3_1:; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2);
;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__4297,1,bind); 
;goto accept4;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept4:;
 break;
} } break1: ptr->pos=oldpos1;   it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__dot__263e,1,bind);  bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,9/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,10/*autovar*/,it);
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,11/*autovar*/,it);
int oldpos5=ptr->pos;int cut4=0;
alt4_1:;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*a*/,it);
it=i_0; bind_aset(bind,13/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_13_59f8,1,bind); FAILTEST(alt4_2);it=rb_funcall(self,sy_Normalize_Placehol_a03d,1,bind);  bind_aset(bind,14/*autovar*/,it);

;goto accept5;
alt4_2: ptr->pos=oldpos5;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,12/*a*/,it);
it=i_1; bind_aset(bind,13/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_13_59f8,1,bind); FAILTEST(alt4_3);it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__lb__1f45,1,bind);  bind_aset(bind,14/*autovar*/,it);

;goto accept5;
alt4_3: ptr->pos=oldpos5;it=bind_aget(bind,11/*autovar*/);it=rb_funcall(self,sy_Normalize_bind_lb_2_rb__dot__e24b,1,bind);  bind_aset(bind,14/*autovar*/,it);

;goto accept5;
alt4_4: ptr->pos=oldpos5;goto pass5;
 accept5:;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto fail;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,14/*autovar*/); bind_aset(bind,15/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_normalize_c(){ 
 cls_Normalize=rb_define_class("Normalize",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    i_0=rb_funcall(rb_str_new2("0"),rb_intern("to_i"),0);rb_global_variable(&i_0);
i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);rb_global_variable(&i_1);
s__bs__bs__7f81=rb_str_new2("\\");rb_global_variable(&s__bs__bs__7f81);
s__bs__dq__3bd8=rb_str_new2("\"");rb_global_variable(&s__bs__dq__3bd8);
s__qu__3590=rb_str_new2("'");rb_global_variable(&s__qu__3590);
switchhash_Normalize_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_10);;
switchhash_Normalize_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Lambda\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_11);;
switchhash_Normalize_12=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_12);;
switchhash_Normalize_13=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Local\nnext h[k]=3 if k<=Lambda\nnext h[k]=4 if k<=String\nnext h[k]=5 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_13);;
switchhash_Normalize_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_1);;
switchhash_Normalize_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_2);;
switchhash_Normalize_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Cut\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_3);;
switchhash_Normalize_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_4);;
switchhash_Normalize_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_5);;
switchhash_Normalize_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_6);;
switchhash_Normalize_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Switch\nnext h[k]=4 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_7);;
switchhash_Normalize_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Comment\nnext h[k]=1 if k<=Cut\nnext h[k]=2 if k<=Stop\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_8);;
switchhash_Normalize_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Normalize_9);;
sy_Normalize_Act_dot_crea_e434=rb_intern("Normalize_Act_dot_crea_e434");
sy_Normalize_Apply_lb__dq_f_3881=rb_intern("Normalize_Apply_lb__dq_f_3881");
sy_Normalize_Apply_lb_bi_8afb=rb_intern("Normalize_Apply_lb_bi_8afb");
sy_Normalize_Bind_lb_bin_bff4=rb_intern("Normalize_Bind_lb_bin_bff4");
sy_Normalize_CAct_lb_eva_559c=rb_intern("Normalize_CAct_lb_eva_559c");
sy_Normalize_Or_dot_creat_fbdf=rb_intern("Normalize_Or_dot_creat_fbdf");
sy_Normalize_Placehol_6875=rb_intern("Normalize_Placehol_6875");
sy_Normalize_Placehol_a03d=rb_intern("Normalize_Placehol_a03d");
sy_Normalize_Seq_lb_Bind_8f10=rb_intern("Normalize_Seq_lb_Bind_8f10");
sy_Normalize_Seq_lb_bind_b52b=rb_intern("Normalize_Seq_lb_bind_b52b");
sy_Normalize_Seq_lb_bind_b71c=rb_intern("Normalize_Seq_lb_bind_b71c");
sy_Normalize__append_lp__0eeb=rb_intern("Normalize__append_lp__0eeb");
sy_Normalize__append_lp__4297=rb_intern("Normalize__append_lp__4297");
sy_Normalize__append_lp__4f82=rb_intern("Normalize__append_lp__4f82");
sy_Normalize__append_lp__653e=rb_intern("Normalize__append_lp__653e");
sy_Normalize__append_lp__6ac6=rb_intern("Normalize__append_lp__6ac6");
sy_Normalize__append_lp__7140=rb_intern("Normalize__append_lp__7140");
sy_Normalize__append_lp__81ec=rb_intern("Normalize__append_lp__81ec");
sy_Normalize__append_lp__984f=rb_intern("Normalize__append_lp__984f");
sy_Normalize__lp_bind_lb_13_59f8=rb_intern("Normalize__lp_bind_lb_13_59f8");
sy_Normalize__lp_bind_lb_14_ee3d=rb_intern("Normalize__lp_bind_lb_14_ee3d");
sy_Normalize__lp_cant_fa_6b5d=rb_intern("Normalize__lp_cant_fa_6b5d");
sy_Normalize__lp_eval_lp_sr_3f78=rb_intern("Normalize__lp_eval_lp_sr_3f78");
sy_Normalize__lp_must_em_e2d0=rb_intern("Normalize__lp_must_em_e2d0");
sy_Normalize_bind_lb_0_rb__dot__263e=rb_intern("Normalize_bind_lb_0_rb__dot__263e");
sy_Normalize_bind_lb_0_rb__lb__1f45=rb_intern("Normalize_bind_lb_0_rb__lb__1f45");
sy_Normalize_bind_lb_10_rb__46f2=rb_intern("Normalize_bind_lb_10_rb__46f2");
sy_Normalize_bind_lb_10_rb__c855=rb_intern("Normalize_bind_lb_10_rb__c855");
sy_Normalize_bind_lb_2_rb__dot__e24b=rb_intern("Normalize_bind_lb_2_rb__dot__e24b");
sy_Normalize_bind_lb_7_rb_=rb_intern("Normalize_bind_lb_7_rb_");
sy_Normalize_src_25d9=rb_intern("Normalize_src_25d9");
sy_Normalize_src_dot_ary_d5cf=rb_intern("Normalize_src_dot_ary_d5cf");
sy_Normalize_src_dot_clas_b345=rb_intern("Normalize_src_dot_clas_b345");
sy_Normalize_src_dot_free_00b9=rb_intern("Normalize_src_dot_free_00b9");
sy_Normalize_src_dot_free_3d49=rb_intern("Normalize_src_dot_free_3d49");
sy_Normalize_src_dot_name_80f3=rb_intern("Normalize_src_dot_name_80f3");
                    rb_define_method(cls_Normalize,"act",Normalize_act,0);
rb_define_method(cls_Normalize,"apply2",Normalize_apply2,0);
rb_define_method(cls_Normalize,"bind",Normalize_bind,0);
rb_define_method(cls_Normalize,"cant_fail",Normalize_cant_fail,0);
rb_define_method(cls_Normalize,"must_empty",Normalize_must_empty,0);
rb_define_method(cls_Normalize,"or",Normalize_or,0);
rb_define_method(cls_Normalize,"seq2",Normalize_seq2,0);
                    rb_eval_string("testversionnormalize('9a816a88a33a5de14a23521903b82f00')");}
