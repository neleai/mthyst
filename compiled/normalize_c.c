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
static VALUE sy_Normalize_Apply_lb_bi_4b34;
static VALUE sy_Normalize_Bind_lb_bin_8a31;
static VALUE sy_Normalize_CAct_lb_eva_559c;
static VALUE sy_Normalize_Or_dot_creat_49b2;
static VALUE sy_Normalize_Placehol_6875;
static VALUE sy_Normalize_Placehol_a03d;
static VALUE sy_Normalize_Seq_lb_Bind_1036;
static VALUE sy_Normalize_Seq_lb_bind_b819;
static VALUE sy_Normalize_Seq_lb_bind_c98f;
static VALUE sy_Normalize__append_lp__d113;
static VALUE sy_Normalize__lp_bind_lb_1_rb__abc3;
static VALUE sy_Normalize__lp_cant_fa_17ef;
static VALUE sy_Normalize__lp_eval_lp_sr_3f78;
static VALUE sy_Normalize__lp_must_em_43e9;
static VALUE sy_Normalize_bind_lb_1_rb_;
static VALUE sy_Normalize_bind_lb_1_rb__dot__30f4;
static VALUE sy_Normalize_bind_lb_1_rb__dot__f29b;
static VALUE sy_Normalize_bind_lb_1_rb__lb__64e3;
static VALUE sy_Normalize_bind_lb_1_rb__lb__79d7;
static VALUE sy_Normalize_bind_lb_1_rb__lt__f738;
static VALUE sy_Normalize_src_25d9;
static VALUE sy_Normalize_src_dot_ary_d5cf;
static VALUE sy_Normalize_src_dot_clas_68f9;
static VALUE sy_Normalize_src_dot_free_00b9;
static VALUE sy_Normalize_src_dot_free_3d49;
static VALUE sy_Normalize_src_dot_name_80f3;
VALUE Normalize_act(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_12,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_13,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Local*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 3/*Lambda*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);
;goto accept1;
alt1_2: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass2;
 accept1:;
 } it=rb_funcall(self,sy_Normalize_Act_dot_crea_e434,1,bind2); var3/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=var3/*autovar*/; var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 4/*String*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var4/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... '/':;case ':' ... '@':;case '[' ... UC(255):; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Amethyst_spaces(self );int oldpos3=ptr->pos;int cut3=0;
alt3_1:;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; goto alt3_2; break;
case '[' ... '[':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else goto alt3_2; break;
}
;goto accept3;
alt3_2: ptr->pos=oldpos3;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... 'm':;case 'o' ... 's':;case 'u' ... UC(255):; goto alt3_3; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='l'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='e')  ptr->pos+=4; else goto alt3_3; break;
case 'n' ... 'n':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='i'&&ame_curstr2(ptr)[1]=='l')  ptr->pos+=2; else goto alt3_3; break;
case 't' ... 't':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='u'&&ame_curstr2(ptr)[2]=='e')  ptr->pos+=3; else goto alt3_3; break;
}
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto alt2_2;
 accept3:;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=rb_obj_clone(s__bs__dq__3bd8); var5/*s*/=it;;
 it=var5/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_3);it=var5/*s*/;int stop2=0; while(!stop2){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... '[':;case ']' ... UC(255):; int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
goto alt4_2;
;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);
;goto accept4;
alt4_3: ptr->pos=oldpos4;goto alt2_3;
 accept4:;
 break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut2=1;stop2=1; break;
case UC(92) ... UC(92):; int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystCore_anything(self ); FAILTEST(alt5_2);
;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);
;goto accept5;
alt5_3: ptr->pos=oldpos5;goto alt2_3;
 accept5:;
 break;
} } 
;goto accept2;
alt2_3: ptr->pos=oldpos2;if (cut2) goto pass3;it=rb_obj_clone(s__qu__3590); var5/*s*/=it;;
 it=var5/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_4);it=var5/*s*/;int stop3=0; while(!stop3){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... '[':;case ']' ... UC(255):; int oldpos6=ptr->pos;int cut6=0;
alt6_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
goto alt6_2;
;goto accept6;
alt6_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);
;goto accept6;
alt6_3: ptr->pos=oldpos6;goto alt2_4;
 accept6:;
 break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut2=1;stop3=1; break;
case UC(92) ... UC(92):; int oldpos7=ptr->pos;int cut7=0;
alt7_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystCore_anything(self ); FAILTEST(alt7_2);
;goto accept7;
alt7_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt7_3);
;goto accept7;
alt7_3: ptr->pos=oldpos7;goto alt2_4;
 accept7:;
 break;
} } 
;goto accept2;
alt2_4: ptr->pos=oldpos2;if (cut2) goto pass3;goto pass3;
 accept2:;
  it=Amethyst_spaces(self );it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case '-' ... '-':;case '0' ... '9':; int oldpos8=ptr->pos;int cut8=0;
alt8_1:;  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; goto alt8_2; break;
case '[' ... '[':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else goto alt8_2; break;
}
;goto accept8;
alt8_2: ptr->pos=oldpos8;  it=Amethyst_number(self ); FAILTEST(alt8_3);
;goto accept8;
alt8_3: ptr->pos=oldpos8;  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... 'm':;case 'o' ... 's':;case 'u' ... UC(255):; goto alt8_4; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='l'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='e')  ptr->pos+=4; else goto alt8_4; break;
case 'n' ... 'n':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='i'&&ame_curstr2(ptr)[1]=='l')  ptr->pos+=2; else goto alt8_4; break;
case 't' ... 't':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='u'&&ame_curstr2(ptr)[2]=='e')  ptr->pos+=3; else goto alt8_4; break;
}
;goto accept8;
alt8_4: ptr->pos=oldpos8;it=rb_obj_clone(s__bs__dq__3bd8); var5/*s*/=it;;
 it=var5/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt8_5);it=var5/*s*/;int stop4=0; while(!stop4){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... '[':;case ']' ... UC(255):; int oldpos9=ptr->pos;int cut9=0;
alt9_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
goto alt9_2;
;goto accept9;
alt9_2: ptr->pos=oldpos9;  it=AmethystCore_anything(self ); FAILTEST(alt9_3);
;goto accept9;
alt9_3: ptr->pos=oldpos9;goto alt8_5;
 accept9:;
 break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut8=1;stop4=1; break;
case UC(92) ... UC(92):; int oldpos10=ptr->pos;int cut10=0;
alt10_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystCore_anything(self ); FAILTEST(alt10_2);
;goto accept10;
alt10_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt10_3);
;goto accept10;
alt10_3: ptr->pos=oldpos10;goto alt8_5;
 accept10:;
 break;
} } 
;goto accept8;
alt8_5: ptr->pos=oldpos8;if (cut8) goto pass3;it=rb_obj_clone(s__qu__3590); var5/*s*/=it;;
 it=var5/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt8_6);it=var5/*s*/;int stop5=0; while(!stop5){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... '[':;case ']' ... UC(255):; int oldpos11=ptr->pos;int cut11=0;
alt11_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
goto alt11_2;
;goto accept11;
alt11_2: ptr->pos=oldpos11;  it=AmethystCore_anything(self ); FAILTEST(alt11_3);
;goto accept11;
alt11_3: ptr->pos=oldpos11;goto alt8_6;
 accept11:;
 break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut8=1;stop5=1; break;
case UC(92) ... UC(92):; int oldpos12=ptr->pos;int cut12=0;
alt12_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystCore_anything(self ); FAILTEST(alt12_2);
;goto accept12;
alt12_2: ptr->pos=oldpos12;  it=AmethystCore_anything(self ); FAILTEST(alt12_3);
;goto accept12;
alt12_3: ptr->pos=oldpos12;goto alt8_6;
 accept12:;
 break;
} } 
;goto accept8;
alt8_6: ptr->pos=oldpos8;if (cut8) goto pass3;goto pass3;
 accept8:;
  it=Amethyst_spaces(self );it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case 'A' ... 'Z':; int oldpos13=ptr->pos;int cut13=0;
alt13_1:;  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; goto alt13_2; break;
case '[' ... '[':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else goto alt13_2; break;
}
;goto accept13;
alt13_2: ptr->pos=oldpos13;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int stop6=0; while(!stop6){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; stop6=1; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; int oldpos14=ptr->pos;int cut14=0;
alt14_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;
;goto accept14;
alt14_2: ptr->pos=oldpos14;stop6=1;
;goto accept14;
alt14_3: ptr->pos=oldpos14;goto alt13_3;
 accept14:;
 break;
} } it=rb_funcall(self,sy_Normalize__lp_eval_lp_sr_3f78,1,bind2);FAILTEST(alt13_3);
;goto accept13;
alt13_3: ptr->pos=oldpos13;  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... 'm':;case 'o' ... 's':;case 'u' ... UC(255):; goto alt13_4; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='l'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='e')  ptr->pos+=4; else goto alt13_4; break;
case 'n' ... 'n':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='i'&&ame_curstr2(ptr)[1]=='l')  ptr->pos+=2; else goto alt13_4; break;
case 't' ... 't':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='u'&&ame_curstr2(ptr)[2]=='e')  ptr->pos+=3; else goto alt13_4; break;
}
;goto accept13;
alt13_4: ptr->pos=oldpos13;it=rb_obj_clone(s__bs__dq__3bd8); var5/*s*/=it;;
 it=var5/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt13_5);it=var5/*s*/;int stop7=0; while(!stop7){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... '[':;case ']' ... UC(255):; int oldpos15=ptr->pos;int cut15=0;
alt15_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
goto alt15_2;
;goto accept15;
alt15_2: ptr->pos=oldpos15;  it=AmethystCore_anything(self ); FAILTEST(alt15_3);
;goto accept15;
alt15_3: ptr->pos=oldpos15;goto alt13_5;
 accept15:;
 break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut13=1;stop7=1; break;
case UC(92) ... UC(92):; int oldpos16=ptr->pos;int cut16=0;
alt16_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystCore_anything(self ); FAILTEST(alt16_2);
;goto accept16;
alt16_2: ptr->pos=oldpos16;  it=AmethystCore_anything(self ); FAILTEST(alt16_3);
;goto accept16;
alt16_3: ptr->pos=oldpos16;goto alt13_5;
 accept16:;
 break;
} } 
;goto accept13;
alt13_5: ptr->pos=oldpos13;if (cut13) goto pass3;it=rb_obj_clone(s__qu__3590); var5/*s*/=it;;
 it=var5/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt13_6);it=var5/*s*/;int stop8=0; while(!stop8){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... '[':;case ']' ... UC(255):; int oldpos17=ptr->pos;int cut17=0;
alt17_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
goto alt17_2;
;goto accept17;
alt17_2: ptr->pos=oldpos17;  it=AmethystCore_anything(self ); FAILTEST(alt17_3);
;goto accept17;
alt17_3: ptr->pos=oldpos17;goto alt13_6;
 accept17:;
 break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut13=1;stop8=1; break;
case UC(92) ... UC(92):; int oldpos18=ptr->pos;int cut18=0;
alt18_1:;it=rb_obj_clone(s__bs__bs__7f81); var5/*s*/=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystCore_anything(self ); FAILTEST(alt18_2);
;goto accept18;
alt18_2: ptr->pos=oldpos18;  it=AmethystCore_anything(self ); FAILTEST(alt18_3);
;goto accept18;
alt18_3: ptr->pos=oldpos18;goto alt13_6;
 accept18:;
 break;
} } 
;goto accept13;
alt13_6: ptr->pos=oldpos13;if (cut13) goto pass3;goto pass3;
 accept13:;
  it=Amethyst_spaces(self );it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
}
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass1;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Normalize_CAct_lb_eva_559c,1,bind2); var1/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 5/*Object*/:; goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var1/*autovar*/; var6/*_result*/=it;;
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_apply2(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); var1/*autovar*/=it;;
it=var1/*autovar*/; var2/*autovar*/=it;;
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=var2/*autovar*/; var3/*autovar*/=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=var3/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass2; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass2; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass2; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                it=ame_curobj2(ptr)               ;ptr->pos++; var5/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_11,rb_obj_class(ame_curobj2(ptr))))){case 0/*Lambda*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var6/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass4); var7/*x*/=it;;
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
                bind_aset(bind2,1,var7/*x*/);it=rb_funcall(self,sy_Normalize_bind_lb_1_rb_,1,bind2);var7/*x*/=bind_aget(bind2,1);; var8/*autovar*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=var3/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass5; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass5; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt2_3;
                   success5: *ptr=oldpass5;
                goto alt2_3;
;goto accept2;
alt2_3: ptr->pos=oldpos2;it=var3/*autovar*/; var10/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass6; break;
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
case 1/*CAct*/:; it=var2/*autovar*/; var11/*autovar*/=it;;
int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=var11/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass7; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass7; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass7; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt3_2;
                   success7: *ptr=oldpass7;
                goto alt3_2;
;goto accept3;
alt3_2: ptr->pos=oldpos3;it=var11/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass8; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass8; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt3_3;
                   success8: *ptr=oldpass8;
                it=ame_curobj2(ptr)               ;ptr->pos++; var12/*autovar*/=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var12/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass9); var13/*name*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt3_3;
                   success9: *ptr=oldpass9;
                bind_aset(bind2,1,var13/*name*/);it=rb_funcall(self,sy_Normalize_Apply_lb_bi_4b34,1,bind2);var13/*name*/=bind_aget(bind2,1);; var8/*autovar*/=it;;

;goto accept3;
alt3_3: ptr->pos=oldpos3;it=var11/*autovar*/; var10/*autovar*/=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass10; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass10; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto alt3_4;
                   success10: *ptr=oldpass10;
                it=ame_curobj2(ptr)               ;ptr->pos++; var14/*autovar*/=it;;
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var14/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass11); var15/*autovar*/=it;;
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var15/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass12;
                   goto success12;
                   pass12: *ptr=oldpass12; goto pass11;
                   success12: *ptr=oldpass12;
                it=Qnil;if (ptr->pos<ptr->len) goto pass11;
                   goto success11;
                   pass11: *ptr=oldpass11; goto alt3_4;
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_Normalize_Placehol_a03d,1,bind2); var8/*autovar*/=it;;

;goto accept3;
alt3_4: ptr->pos=oldpos3;goto alt1_2;
 accept3:;
 break;
case 2/*CAct*/:; it=var2/*autovar*/; var16/*autovar*/=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=var16/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass13; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass13; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass13; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass13;
                   goto success13;
                   pass13: *ptr=oldpass13; goto alt4_2;
                   success13: *ptr=oldpass13;
                goto alt4_2;
;goto accept4;
alt4_2: ptr->pos=oldpos4;it=var16/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass14; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass14; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto alt4_3;
                   success14: *ptr=oldpass14;
                it=ame_curobj2(ptr)               ;ptr->pos++; var12/*autovar*/=it;;
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var12/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass15); var13/*name*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto alt4_3;
                   success15: *ptr=oldpass15;
                bind_aset(bind2,1,var13/*name*/);it=rb_funcall(self,sy_Normalize_Apply_lb_bi_4b34,1,bind2);var13/*name*/=bind_aget(bind2,1);; var8/*autovar*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;it=var16/*autovar*/; var10/*autovar*/=it;;
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass16; break;
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
case 3/*CAct*/:; it=var2/*autovar*/; var17/*autovar*/=it;;
int oldpos5=ptr->pos;int cut5=0;
alt5_1:;it=var17/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass17; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass17; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass17; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass17;
                   goto success17;
                   pass17: *ptr=oldpass17; goto alt5_2;
                   success17: *ptr=oldpass17;
                goto alt5_2;
;goto accept5;
alt5_2: ptr->pos=oldpos5;it=var17/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass18; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass18; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto alt5_3;
                   success18: *ptr=oldpass18;
                goto alt5_3;
;goto accept5;
alt5_3: ptr->pos=oldpos5;it=var17/*autovar*/; var10/*autovar*/=it;;
cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass19; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass19; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass19;
                   goto success19;
                   pass19: *ptr=oldpass19; goto alt5_4;
                   success19: *ptr=oldpass19;
                it=ame_curobj2(ptr)               ;ptr->pos++; var14/*autovar*/=it;;
cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var14/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass20); var15/*autovar*/=it;;
cstruct oldpass21=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var15/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass21;
                   goto success21;
                   pass21: *ptr=oldpass21; goto pass20;
                   success21: *ptr=oldpass21;
                it=Qnil;if (ptr->pos<ptr->len) goto pass20;
                   goto success20;
                   pass20: *ptr=oldpass20; goto alt5_4;
                   success20: *ptr=oldpass20;
                it=rb_funcall(self,sy_Normalize_Placehol_a03d,1,bind2); var8/*autovar*/=it;;

;goto accept5;
alt5_4: ptr->pos=oldpos5;goto alt1_2;
 accept5:;
 break;
case 4/*Object*/:; it=var2/*autovar*/; var18/*autovar*/=it;;
int oldpos6=ptr->pos;int cut6=0;
alt6_1:;it=var18/*autovar*/; var4/*autovar*/=it;;
cstruct oldpass22=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass22; break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else goto pass22; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass22; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass22;
                   goto success22;
                   pass22: *ptr=oldpass22; goto alt6_2;
                   success22: *ptr=oldpass22;
                goto alt6_2;
;goto accept6;
alt6_2: ptr->pos=oldpos6;it=var18/*autovar*/; var9/*autovar*/=it;;
cstruct oldpass23=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var9/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass23; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4; else goto pass23; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass23;
                   goto success23;
                   pass23: *ptr=oldpass23; goto alt6_3;
                   success23: *ptr=oldpass23;
                goto alt6_3;
;goto accept6;
alt6_3: ptr->pos=oldpos6;it=var18/*autovar*/; var10/*autovar*/=it;;
cstruct oldpass24=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var10/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass24; break;
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
alt1_2: ptr->pos=oldpos1;int stop1=0; while(!stop1){ int oldpos7=ptr->pos;int cut7=0;
alt7_1:;  it=AmethystCore_anything(self ); FAILTEST(alt7_2);
;goto accept7;
alt7_2: ptr->pos=oldpos7;stop1=1;
;goto accept7;
alt7_3: ptr->pos=oldpos7;goto alt1_3;
 accept7:;
 } it=rb_funcall(self,sy_Normalize_src_dot_free_3d49,1,bind2); var8/*autovar*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var8/*autovar*/; var19/*_result*/=it;;
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_bind(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Bind*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind2);int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var2/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Normalize_src_25d9,1,bind2); var3/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                it=var3/*autovar*/; var4/*autovar*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind2); var4/*autovar*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Or*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind2); var5/*name*/=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var6/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var7/*autovar*/=it;;
int stop1=0; while(!stop1){ int oldpos3=ptr->pos;int cut3=0;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); var8/*it*/=it;;
bind_aset(bind2,1,var5/*name*/);bind_aset(bind2,2,var8/*it*/);it=rb_funcall(self,sy_Normalize_Bind_lb_bin_8a31,1,bind2);var5/*name*/=bind_aget(bind2,1);;var8/*it*/=bind_aget(bind2,2);; var9/*autovar*/=it;;
bind_aset(bind2,1,var7/*autovar*/);bind_aset(bind2,2,var9/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var7/*autovar*/=bind_aget(bind2,1);;var9/*autovar*/=bind_aget(bind2,2);;
;goto accept3;
alt3_2: ptr->pos=oldpos3;stop1=1;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto pass4;
 accept3:;
 } it=var7/*autovar*/; var10/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_2;
                   success4: *ptr=oldpass4;
                bind_aset(bind2,1,var10/*ary*/);it=rb_funcall(self,sy_Normalize_Or_dot_creat_49b2,1,bind2);var10/*ary*/=bind_aget(bind2,1);; var4/*autovar*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind2); var4/*autovar*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto pass1;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 2/*Seq*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind2); var5/*name*/=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var11/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var11/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var12/*autovar*/=it;;
  it=AmethystCore_anything(self ); FAILTEST(pass5); var13/*autovar*/=it;;
bind_aset(bind2,1,var12/*autovar*/);bind_aset(bind2,2,var13/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var12/*autovar*/=bind_aget(bind2,1);;var13/*autovar*/=bind_aget(bind2,2);;int stop2=0; while(!stop2){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); var14/*autovar*/=it;;
bind_aset(bind2,1,var12/*autovar*/);bind_aset(bind2,2,var14/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var12/*autovar*/=bind_aget(bind2,1);;var14/*autovar*/=bind_aget(bind2,2);;
;goto accept5;
alt5_2: ptr->pos=oldpos5;stop2=1;
;goto accept5;
alt5_3: ptr->pos=oldpos5;goto pass5;
 accept5:;
 } it=var12/*autovar*/; var10/*ary*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_2;
                   success5: *ptr=oldpass5;
                bind_aset(bind2,1,var10/*ary*/);it=rb_funcall(self,sy_Normalize_Seq_lb_bind_c98f,1,bind2);var10/*ary*/=bind_aget(bind2,1);; var15/*first*/=it;;
bind_aset(bind2,1,var10/*ary*/);it=rb_funcall(self,sy_Normalize_bind_lb_1_rb__lb__64e3,1,bind2);var10/*ary*/=bind_aget(bind2,1);; var16/*last*/=it;;
it=var16/*last*/; var17/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var17/*autovar*/;ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Comment*/:case 1/*Cut*/:case 2/*Stop*/:; it=ame_curobj2(ptr)               ;ptr->pos++;bind_aset(bind2,1,var5/*name*/);bind_aset(bind2,2,var15/*first*/);bind_aset(bind2,3,var16/*last*/);it=rb_funcall(self,sy_Normalize_Seq_lb_Bind_1036,1,bind2);var5/*name*/=bind_aget(bind2,1);;var15/*first*/=bind_aget(bind2,2);;var16/*last*/=bind_aget(bind2,3);; var18/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6; break;
case 3/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(pass6);bind_aset(bind2,1,var15/*first*/);bind_aset(bind2,2,var5/*name*/);bind_aset(bind2,3,var16/*last*/);it=rb_funcall(self,sy_Normalize_Seq_lb_bind_b819,1,bind2);var15/*first*/=bind_aget(bind2,1);;var5/*name*/=bind_aget(bind2,2);;var16/*last*/=bind_aget(bind2,3);; var18/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass6; break;
}
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt4_2;
                   success6: *ptr=oldpass6;
                it=var18/*autovar*/; var4/*autovar*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind2); var4/*autovar*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto pass1;
 accept4:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 3/*Switch*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind2); var5/*name*/=it;;
int oldpos6=ptr->pos;int cut6=0;
alt6_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var19/*autovar*/=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var19/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var10/*ary*/=it;;
int stop3=0; while(!stop3){ int oldpos7=ptr->pos;int cut7=0;
alt7_1:;  it=AmethystCore_anything(self ); FAILTEST(alt7_2); var20/*autovar*/=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var20/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass8); var21/*p*/=it;;
  it=AmethystCore_anything(self ); FAILTEST(pass8); var22/*a*/=it;;
bind_aset(bind2,1,var10/*ary*/);bind_aset(bind2,2,var21/*p*/);bind_aset(bind2,3,var5/*name*/);bind_aset(bind2,4,var22/*a*/);it=rb_funcall(self,sy_Normalize_bind_lb_1_rb__lt__f738,1,bind2);var10/*ary*/=bind_aget(bind2,1);;var21/*p*/=bind_aget(bind2,2);;var5/*name*/=bind_aget(bind2,3);;var22/*a*/=bind_aget(bind2,4);;it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt7_2;
                   success8: *ptr=oldpass8;
                
;goto accept7;
alt7_2: ptr->pos=oldpos7;stop3=1;
;goto accept7;
alt7_3: ptr->pos=oldpos7;goto pass7;
 accept7:;
 } bind_aset(bind2,1,var10/*ary*/);it=rb_funcall(self,sy_Normalize_src_dot_clas_68f9,1,bind2);var10/*ary*/=bind_aget(bind2,1);; var23/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt6_2;
                   success7: *ptr=oldpass7;
                it=var23/*autovar*/; var4/*autovar*/=it;;

;goto accept6;
alt6_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind2); var4/*autovar*/=it;;

;goto accept6;
alt6_3: ptr->pos=oldpos6;goto pass1;
 accept6:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 4/*Object*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind2);  it=AmethystCore_anything(self ); FAILTEST(pass1);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind2); var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var4/*autovar*/; var24/*_result*/=it;;
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_cant_fail(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); var0/*e*/=it;;
bind_aset(bind2,1,var0/*e*/);it=rb_funcall(self,sy_Normalize__lp_cant_fa_17ef,1,bind2);var0/*e*/=bind_aget(bind2,1);;FAILTEST(fail);it=var0/*e*/; var1/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Normalize_must_empty(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); var0/*e*/=it;;
bind_aset(bind2,1,var0/*e*/);it=rb_funcall(self,sy_Normalize__lp_must_em_43e9,1,bind2);var0/*e*/=bind_aget(bind2,1);;FAILTEST(fail);it=var0/*e*/; var1/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Normalize_or(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; it=rb_ary_new3(0); var0/*ary*/=it;;
it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Normalize_src_25d9,1,bind2); var2/*or*/=it;;
int stop1=0; while(!stop1){ switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var4/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                
;goto accept1;
alt1_2: ptr->pos=oldpos1; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind2); arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3);
;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); var5/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);;
;goto accept1;
alt1_4: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_5: ptr->pos=oldpos1;goto pass1;
 accept1:;
 break;
case 1/*Or*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var6/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop2=0; while(!stop2){ int oldpos3=ptr->pos;int cut3=0;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2);
;goto accept3;
alt3_2: ptr->pos=oldpos3;stop2=1;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto pass4;
 accept3:;
 } it=rb_funcall(self,sy_Normalize_src_dot_ary_d5cf,1,bind2); var7/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var7/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var7/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_2;
                   success4: *ptr=oldpass4;
                
;goto accept2;
alt2_2: ptr->pos=oldpos2; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind2); arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_3);
;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); var5/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);;
;goto accept2;
alt2_4: ptr->pos=oldpos2;stop1=1;
;goto accept2;
alt2_5: ptr->pos=oldpos2;goto pass1;
 accept2:;
 break;
case 2/*Seq*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind2); arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt4_2);
;goto accept4;
alt4_2: ptr->pos=oldpos4;it=ame_curobj2(ptr)               ;ptr->pos++; var8/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var8/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop3=0; while(!stop3){ switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Cut*/:; it=ame_curobj2(ptr)               ;ptr->pos++;int stop4=0; while(!stop4){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2);
;goto accept5;
alt5_2: ptr->pos=oldpos5;stop4=1;
;goto accept5;
alt5_3: ptr->pos=oldpos5;goto pass5;
 accept5:;
 }  break;
case 1/*Object*/:; int oldpos6=ptr->pos;int cut6=0;
alt6_1:;  it=Normalize_cant_fail(self ); FAILTEST(alt6_2);
;goto accept6;
alt6_2: ptr->pos=oldpos6;stop3=1;
;goto accept6;
alt6_3: ptr->pos=oldpos6;goto pass5;
 accept6:;
 break;
} } it=Qnil;if (ptr->pos<ptr->len) goto pass5;it=rb_funcall(self,sy_Normalize_src_25d9,1,bind2); var9/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var9/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var9/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt4_3;
                   success5: *ptr=oldpass5;
                int stop5=0; while(!stop5){ int oldpos7=ptr->pos;int cut7=0;
alt7_1:;  it=AmethystCore_anything(self ); FAILTEST(alt7_2);
;goto accept7;
alt7_2: ptr->pos=oldpos7;stop5=1;
;goto accept7;
alt7_3: ptr->pos=oldpos7;goto alt4_3;
 accept7:;
 } 
;goto accept4;
alt4_3: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_4); var5/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);;
;goto accept4;
alt4_4: ptr->pos=oldpos4;stop1=1;
;goto accept4;
alt4_5: ptr->pos=oldpos4;goto pass1;
 accept4:;
 break;
case 3/*Object*/:; int oldpos8=ptr->pos;int cut8=0;
alt8_1:; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind2); arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt8_2);
;goto accept8;
alt8_2: ptr->pos=oldpos8;  it=AmethystCore_anything(self ); FAILTEST(alt8_3); var5/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);;
;goto accept8;
alt8_3: ptr->pos=oldpos8;stop1=1;
;goto accept8;
alt8_4: ptr->pos=oldpos8;goto pass1;
 accept8:;
 break;
} } it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,var0/*ary*/);it=rb_funcall(self,sy_Normalize_bind_lb_1_rb__dot__30f4,1,bind2);var0/*ary*/=bind_aget(bind2,1);; var10/*autovar*/=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var10/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass6); var11/*autovar*/=it;;
it=var11/*autovar*/; var12/*autovar*/=it;;
int oldpos9=ptr->pos;int cut9=0;
alt9_1:;it=var12/*autovar*/; var13/*a*/=it;;
it=i_0; var14/*x*/=it;;
bind_aset(bind2,1,var14/*x*/);bind_aset(bind2,2,var13/*a*/);it=rb_funcall(self,sy_Normalize__lp_bind_lb_1_rb__abc3,1,bind2);var14/*x*/=bind_aget(bind2,1);;var13/*a*/=bind_aget(bind2,2);;FAILTEST(alt9_2);it=rb_funcall(self,sy_Normalize_Apply_lb__dq_f_3881,1,bind2); var15/*autovar*/=it;;

;goto accept9;
alt9_2: ptr->pos=oldpos9;it=var12/*autovar*/; var13/*a*/=it;;
it=i_1; var14/*x*/=it;;
bind_aset(bind2,1,var14/*x*/);bind_aset(bind2,2,var13/*a*/);it=rb_funcall(self,sy_Normalize__lp_bind_lb_1_rb__abc3,1,bind2);var14/*x*/=bind_aget(bind2,1);;var13/*a*/=bind_aget(bind2,2);;FAILTEST(alt9_3);bind_aset(bind2,1,var0/*ary*/);it=rb_funcall(self,sy_Normalize_bind_lb_1_rb__lb__79d7,1,bind2);var0/*ary*/=bind_aget(bind2,1);; var15/*autovar*/=it;;

;goto accept9;
alt9_3: ptr->pos=oldpos9;it=var12/*autovar*/;bind_aset(bind2,1,var2/*or*/);bind_aset(bind2,2,var0/*ary*/);it=rb_funcall(self,sy_Normalize_bind_lb_1_rb__dot__f29b,1,bind2);var2/*or*/=bind_aget(bind2,1);;var0/*ary*/=bind_aget(bind2,2);; var15/*autovar*/=it;;

;goto accept9;
alt9_4: ptr->pos=oldpos9;goto pass6;
 accept9:;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto fail;
                   success6: *ptr=oldpass6;
                it=var15/*autovar*/; var16/*_result*/=it;;
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_seq2(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Seq*/:; it=rb_ary_new3(0); var0/*ary*/=it;;
it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Normalize_src_25d9,1,bind2); var2/*seq*/=it;;
int stop1=0; while(!stop1){ switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); var4/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else goto pass3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Normalize_src_25d9,1,bind2); var5/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                int stop2=0; while(!stop2){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2);
;goto accept2;
alt2_2: ptr->pos=oldpos2;stop2=1;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;
 } 
;goto accept1;
alt1_2: ptr->pos=oldpos1; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind2); arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3);
;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); var6/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var6/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var6/*autovar*/=bind_aget(bind2,2);;
;goto accept1;
alt1_4: ptr->pos=oldpos1;stop1=1;
;goto accept1;
alt1_5: ptr->pos=oldpos1;goto pass1;
 accept1:;
 break;
case 1/*Seq*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var7/*autovar*/=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var7/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int stop3=0; while(!stop3){ int oldpos4=ptr->pos;int cut4=0;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2);
;goto accept4;
alt4_2: ptr->pos=oldpos4;stop3=1;
;goto accept4;
alt4_3: ptr->pos=oldpos4;goto pass4;
 accept4:;
 } it=rb_funcall(self,sy_Normalize_src_dot_ary_d5cf,1,bind2); var8/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var8/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var8/*autovar*/=bind_aget(bind2,2);;it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt3_2;
                   success4: *ptr=oldpass4;
                
;goto accept3;
alt3_2: ptr->pos=oldpos3; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind2); arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_3);
;goto accept3;
alt3_3: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_4); var6/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var6/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var6/*autovar*/=bind_aget(bind2,2);;
;goto accept3;
alt3_4: ptr->pos=oldpos3;stop1=1;
;goto accept3;
alt3_5: ptr->pos=oldpos3;goto pass1;
 accept3:;
 break;
case 2/*Object*/:; int oldpos5=ptr->pos;int cut5=0;
alt5_1:; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind2); arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt5_2);
;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); var6/*autovar*/=it;;
bind_aset(bind2,1,var0/*ary*/);bind_aset(bind2,2,var6/*autovar*/);it=rb_funcall(self,sy_Normalize__append_lp__d113,1,bind2);var0/*ary*/=bind_aget(bind2,1);;var6/*autovar*/=bind_aget(bind2,2);;
;goto accept5;
alt5_3: ptr->pos=oldpos5;stop1=1;
;goto accept5;
alt5_4: ptr->pos=oldpos5;goto pass1;
 accept5:;
 break;
} } it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,var0/*ary*/);it=rb_funcall(self,sy_Normalize_bind_lb_1_rb__dot__30f4,1,bind2);var0/*ary*/=bind_aget(bind2,1);; var9/*autovar*/=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var9/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass5); var10/*autovar*/=it;;
it=var10/*autovar*/; var11/*autovar*/=it;;
int oldpos6=ptr->pos;int cut6=0;
alt6_1:;it=var11/*autovar*/; var12/*a*/=it;;
it=i_0; var13/*x*/=it;;
bind_aset(bind2,1,var13/*x*/);bind_aset(bind2,2,var12/*a*/);it=rb_funcall(self,sy_Normalize__lp_bind_lb_1_rb__abc3,1,bind2);var13/*x*/=bind_aget(bind2,1);;var12/*a*/=bind_aget(bind2,2);;FAILTEST(alt6_2);it=rb_funcall(self,sy_Normalize_Placehol_a03d,1,bind2); var14/*autovar*/=it;;

;goto accept6;
alt6_2: ptr->pos=oldpos6;it=var11/*autovar*/; var12/*a*/=it;;
it=i_1; var13/*x*/=it;;
bind_aset(bind2,1,var13/*x*/);bind_aset(bind2,2,var12/*a*/);it=rb_funcall(self,sy_Normalize__lp_bind_lb_1_rb__abc3,1,bind2);var13/*x*/=bind_aget(bind2,1);;var12/*a*/=bind_aget(bind2,2);;FAILTEST(alt6_3);bind_aset(bind2,1,var0/*ary*/);it=rb_funcall(self,sy_Normalize_bind_lb_1_rb__lb__79d7,1,bind2);var0/*ary*/=bind_aget(bind2,1);; var14/*autovar*/=it;;

;goto accept6;
alt6_3: ptr->pos=oldpos6;it=var11/*autovar*/;bind_aset(bind2,1,var2/*seq*/);bind_aset(bind2,2,var0/*ary*/);it=rb_funcall(self,sy_Normalize_bind_lb_1_rb__dot__f29b,1,bind2);var2/*seq*/=bind_aget(bind2,1);;var0/*ary*/=bind_aget(bind2,2);; var14/*autovar*/=it;;

;goto accept6;
alt6_4: ptr->pos=oldpos6;goto pass5;
 accept6:;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto fail;
                   success5: *ptr=oldpass5;
                it=var14/*autovar*/; var15/*_result*/=it;;
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
sy_Normalize_Apply_lb_bi_4b34=rb_intern("Normalize_Apply_lb_bi_4b34");
sy_Normalize_Bind_lb_bin_8a31=rb_intern("Normalize_Bind_lb_bin_8a31");
sy_Normalize_CAct_lb_eva_559c=rb_intern("Normalize_CAct_lb_eva_559c");
sy_Normalize_Or_dot_creat_49b2=rb_intern("Normalize_Or_dot_creat_49b2");
sy_Normalize_Placehol_6875=rb_intern("Normalize_Placehol_6875");
sy_Normalize_Placehol_a03d=rb_intern("Normalize_Placehol_a03d");
sy_Normalize_Seq_lb_Bind_1036=rb_intern("Normalize_Seq_lb_Bind_1036");
sy_Normalize_Seq_lb_bind_b819=rb_intern("Normalize_Seq_lb_bind_b819");
sy_Normalize_Seq_lb_bind_c98f=rb_intern("Normalize_Seq_lb_bind_c98f");
sy_Normalize__append_lp__d113=rb_intern("Normalize__append_lp__d113");
sy_Normalize__lp_bind_lb_1_rb__abc3=rb_intern("Normalize__lp_bind_lb_1_rb__abc3");
sy_Normalize__lp_cant_fa_17ef=rb_intern("Normalize__lp_cant_fa_17ef");
sy_Normalize__lp_eval_lp_sr_3f78=rb_intern("Normalize__lp_eval_lp_sr_3f78");
sy_Normalize__lp_must_em_43e9=rb_intern("Normalize__lp_must_em_43e9");
sy_Normalize_bind_lb_1_rb_=rb_intern("Normalize_bind_lb_1_rb_");
sy_Normalize_bind_lb_1_rb__dot__30f4=rb_intern("Normalize_bind_lb_1_rb__dot__30f4");
sy_Normalize_bind_lb_1_rb__dot__f29b=rb_intern("Normalize_bind_lb_1_rb__dot__f29b");
sy_Normalize_bind_lb_1_rb__lb__64e3=rb_intern("Normalize_bind_lb_1_rb__lb__64e3");
sy_Normalize_bind_lb_1_rb__lb__79d7=rb_intern("Normalize_bind_lb_1_rb__lb__79d7");
sy_Normalize_bind_lb_1_rb__lt__f738=rb_intern("Normalize_bind_lb_1_rb__lt__f738");
sy_Normalize_src_25d9=rb_intern("Normalize_src_25d9");
sy_Normalize_src_dot_ary_d5cf=rb_intern("Normalize_src_dot_ary_d5cf");
sy_Normalize_src_dot_clas_68f9=rb_intern("Normalize_src_dot_clas_68f9");
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
                    rb_eval_string("testversionnormalize('7db0d6643e713742e29716eaf6879359')");}
