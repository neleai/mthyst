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
static VALUE sy_Normalize_Apply_lb_bi_b806;
static VALUE sy_Normalize_Bind_lb_bin_bff4;
static VALUE sy_Normalize_CAct_lb_eva_559c;
static VALUE sy_Normalize_Or_dot_creat_fbdf;
static VALUE sy_Normalize_Placehol_6875;
static VALUE sy_Normalize_Placehol_a03d;
static VALUE sy_Normalize_Seq_lb_Bind_8f10;
static VALUE sy_Normalize_Seq_lb_bind_b52b;
static VALUE sy_Normalize_Seq_lb_bind_b71c;
static VALUE sy_Normalize_Switch_C_059f;
static VALUE sy_Normalize_Switch_C_09b7;
static VALUE sy_Normalize__append_lp__0eeb;
static VALUE sy_Normalize__append_lp__4297;
static VALUE sy_Normalize__append_lp__4f82;
static VALUE sy_Normalize__append_lp__653e;
static VALUE sy_Normalize__append_lp__6ac6;
static VALUE sy_Normalize__append_lp__7140;
static VALUE sy_Normalize__append_lp__81ec;
static VALUE sy_Normalize__append_lp__984f;
static VALUE sy_Normalize__lp_bind_lb_10_612c;
static VALUE sy_Normalize__lp_bind_lb_11_4586;
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
static VALUE sy_Normalize_src_dot_free_00b9;
static VALUE sy_Normalize_src_dot_free_3d49;
static VALUE sy_Normalize_src_dot_name_80f3;
VALUE Normalize_act(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_12,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_13,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Local*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 3/*Lambda*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_Act_dot_crea_e434,1,bind);  bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 4/*String*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... '/':;case ':' ... '@':;case '[' ... UC(255):; int oldpos1=ptr->pos;
alt1_1:;  it=Amethyst_spaces(self ); FAILTEST(alt1_2);int oldpos2=ptr->pos;
alt2_1:;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; goto alt2_2; break;
case '[' ... '[':;   it=AmethystCore_anything(self ); FAILTEST(alt2_2);if (strncmp(ame_curstr2(ptr),"]",1)) goto alt2_2; else ptr->pos+=1; break;
}
;goto accept2;
alt2_2: ptr->pos=oldpos2;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... 'm':;case 'o' ... 's':;case 'u' ... UC(255):; goto alt2_3; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(alt2_3);if (strncmp(ame_curstr2(ptr),"alse",4)) goto alt2_3; else ptr->pos+=4; break;
case 'n' ... 'n':;   it=AmethystCore_anything(self ); FAILTEST(alt2_3);if (strncmp(ame_curstr2(ptr),"il",2)) goto alt2_3; else ptr->pos+=2; break;
case 't' ... 't':;   it=AmethystCore_anything(self ); FAILTEST(alt2_3);if (strncmp(ame_curstr2(ptr),"rue",3)) goto alt2_3; else ptr->pos+=3; break;
}
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_3);it=bind_aget(bind,5/*s*/);int oldpos3; while(1){oldpos3=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '$' ... '[':;case ']' ... UC(255):; int oldpos4=ptr->pos;
alt3_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt3_2;
;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);
;goto accept3;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept3:;
 break;
case UC(34) ... '#':; int oldpos5=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept4;
alt4_2: ptr->pos=oldpos5;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt4_3;
;goto accept4;
alt4_3: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt4_4);
;goto accept4;
alt4_4: ptr->pos=oldpos5;goto break1;
 accept4:;
 break;
case UC(92) ... UC(92):; int oldpos6=ptr->pos;
alt5_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt5_2);  it=AmethystCore_anything(self ); FAILTEST(alt5_2);
;goto accept5;
alt5_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);
;goto accept5;
alt5_3: ptr->pos=oldpos6;goto break1;
 accept5:;
 break;
} if (ame_getstop(self)!=Qnil){oldpos3=ptr->pos;goto break1;} } break1: ame_setstop(self,Qnil); ptr->pos=oldpos3; 
;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_obj_clone(s__qu__3590); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=bind_aget(bind,5/*s*/);int oldpos7; while(1){oldpos7=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(34):;case '$' ... '&':;case '(' ... '[':;case ']' ... UC(255):; int oldpos8=ptr->pos;
alt6_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt6_2;
;goto accept6;
alt6_2: ptr->pos=oldpos8;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);
;goto accept6;
alt6_3: ptr->pos=oldpos8;goto break2;
 accept6:;
 break;
case '#' ... '#':;case UC(39) ... UC(39):; int oldpos9=ptr->pos;
alt7_1:;  it=AmethystCore_anything(self ); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt7_3;
;goto accept7;
alt7_3: ptr->pos=oldpos9;  it=AmethystCore_anything(self ); FAILTEST(alt7_4);
;goto accept7;
alt7_4: ptr->pos=oldpos9;goto break2;
 accept7:;
 break;
case UC(92) ... UC(92):; int oldpos10=ptr->pos;
alt8_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt8_2);  it=AmethystCore_anything(self ); FAILTEST(alt8_2);
;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3);
;goto accept8;
alt8_3: ptr->pos=oldpos10;goto break2;
 accept8:;
 break;
} if (ame_getstop(self)!=Qnil){oldpos7=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos7; 
;goto accept1;
alt1_4: ptr->pos=oldpos1;goto pass3;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(pass3);it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case '-' ... '-':;case '0' ... '9':; int oldpos11=ptr->pos;
alt9_1:;  it=Amethyst_spaces(self ); FAILTEST(alt9_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; goto alt9_2; break;
case '[' ... '[':;   it=AmethystCore_anything(self ); FAILTEST(alt9_2);if (strncmp(ame_curstr2(ptr),"]",1)) goto alt9_2; else ptr->pos+=1; break;
}
;goto accept9;
alt9_2: ptr->pos=oldpos11;  it=Amethyst_number(self ); FAILTEST(alt9_3);
;goto accept9;
alt9_3: ptr->pos=oldpos11;  it=Amethyst_spaces(self ); FAILTEST(alt9_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... 'm':;case 'o' ... 's':;case 'u' ... UC(255):; goto alt9_4; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(alt9_4);if (strncmp(ame_curstr2(ptr),"alse",4)) goto alt9_4; else ptr->pos+=4; break;
case 'n' ... 'n':;   it=AmethystCore_anything(self ); FAILTEST(alt9_4);if (strncmp(ame_curstr2(ptr),"il",2)) goto alt9_4; else ptr->pos+=2; break;
case 't' ... 't':;   it=AmethystCore_anything(self ); FAILTEST(alt9_4);if (strncmp(ame_curstr2(ptr),"rue",3)) goto alt9_4; else ptr->pos+=3; break;
}
;goto accept9;
alt9_4: ptr->pos=oldpos11;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt9_5);it=bind_aget(bind,5/*s*/);int oldpos12; while(1){oldpos12=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '$' ... '[':;case ']' ... UC(255):; int oldpos13=ptr->pos;
alt10_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt10_2;
;goto accept10;
alt10_2: ptr->pos=oldpos13;  it=AmethystCore_anything(self ); FAILTEST(alt10_3);
;goto accept10;
alt10_3: ptr->pos=oldpos13;goto break3;
 accept10:;
 break;
case UC(34) ... '#':; int oldpos14=ptr->pos;
alt11_1:;  it=AmethystCore_anything(self ); FAILTEST(alt11_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept11;
alt11_2: ptr->pos=oldpos14;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break3;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt11_3;
;goto accept11;
alt11_3: ptr->pos=oldpos14;  it=AmethystCore_anything(self ); FAILTEST(alt11_4);
;goto accept11;
alt11_4: ptr->pos=oldpos14;goto break3;
 accept11:;
 break;
case UC(92) ... UC(92):; int oldpos15=ptr->pos;
alt12_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt12_2);  it=AmethystCore_anything(self ); FAILTEST(alt12_2);
;goto accept12;
alt12_2: ptr->pos=oldpos15;  it=AmethystCore_anything(self ); FAILTEST(alt12_3);
;goto accept12;
alt12_3: ptr->pos=oldpos15;goto break3;
 accept12:;
 break;
} if (ame_getstop(self)!=Qnil){oldpos12=ptr->pos;goto break3;} } break3: ame_setstop(self,Qnil); ptr->pos=oldpos12; 
;goto accept9;
alt9_5: ptr->pos=oldpos11;it=rb_obj_clone(s__qu__3590); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt9_6);it=bind_aget(bind,5/*s*/);int oldpos16; while(1){oldpos16=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(34):;case '$' ... '&':;case '(' ... '[':;case ']' ... UC(255):; int oldpos17=ptr->pos;
alt13_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt13_2;
;goto accept13;
alt13_2: ptr->pos=oldpos17;  it=AmethystCore_anything(self ); FAILTEST(alt13_3);
;goto accept13;
alt13_3: ptr->pos=oldpos17;goto break4;
 accept13:;
 break;
case '#' ... '#':;case UC(39) ... UC(39):; int oldpos18=ptr->pos;
alt14_1:;  it=AmethystCore_anything(self ); FAILTEST(alt14_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept14;
alt14_2: ptr->pos=oldpos18;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break4;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt14_3;
;goto accept14;
alt14_3: ptr->pos=oldpos18;  it=AmethystCore_anything(self ); FAILTEST(alt14_4);
;goto accept14;
alt14_4: ptr->pos=oldpos18;goto break4;
 accept14:;
 break;
case UC(92) ... UC(92):; int oldpos19=ptr->pos;
alt15_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt15_2);  it=AmethystCore_anything(self ); FAILTEST(alt15_2);
;goto accept15;
alt15_2: ptr->pos=oldpos19;  it=AmethystCore_anything(self ); FAILTEST(alt15_3);
;goto accept15;
alt15_3: ptr->pos=oldpos19;goto break4;
 accept15:;
 break;
} if (ame_getstop(self)!=Qnil){oldpos16=ptr->pos;goto break4;} } break4: ame_setstop(self,Qnil); ptr->pos=oldpos16; 
;goto accept9;
alt9_6: ptr->pos=oldpos11;goto pass3;
 accept9:;
  it=Amethyst_spaces(self ); FAILTEST(pass3);it=Qnil;if (ptr->pos<ptr->len) goto pass3; break;
case 'A' ... 'Z':; int oldpos20=ptr->pos;
alt16_1:;  it=Amethyst_spaces(self ); FAILTEST(alt16_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; goto alt16_2; break;
case '[' ... '[':;   it=AmethystCore_anything(self ); FAILTEST(alt16_2);if (strncmp(ame_curstr2(ptr),"]",1)) goto alt16_2; else ptr->pos+=1; break;
}
;goto accept16;
alt16_2: ptr->pos=oldpos20;  it=AmethystCore_anything(self ); FAILTEST(alt16_3);int oldpos21; while(1){oldpos21=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto break5; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystCore_anything(self ); FAILTEST(break5); break;
}  } break5: ame_setstop(self,Qnil); ptr->pos=oldpos21; it=rb_funcall(self,sy_Normalize__lp_eval_lp_sr_3f78,1,bind); FAILTEST(alt16_3);
;goto accept16;
alt16_3: ptr->pos=oldpos20;  it=Amethyst_spaces(self ); FAILTEST(alt16_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... 'm':;case 'o' ... 's':;case 'u' ... UC(255):; goto alt16_4; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(alt16_4);if (strncmp(ame_curstr2(ptr),"alse",4)) goto alt16_4; else ptr->pos+=4; break;
case 'n' ... 'n':;   it=AmethystCore_anything(self ); FAILTEST(alt16_4);if (strncmp(ame_curstr2(ptr),"il",2)) goto alt16_4; else ptr->pos+=2; break;
case 't' ... 't':;   it=AmethystCore_anything(self ); FAILTEST(alt16_4);if (strncmp(ame_curstr2(ptr),"rue",3)) goto alt16_4; else ptr->pos+=3; break;
}
;goto accept16;
alt16_4: ptr->pos=oldpos20;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt16_5);it=bind_aget(bind,5/*s*/);int oldpos22; while(1){oldpos22=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '$' ... '[':;case ']' ... UC(255):; int oldpos23=ptr->pos;
alt17_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt17_2;
;goto accept17;
alt17_2: ptr->pos=oldpos23;  it=AmethystCore_anything(self ); FAILTEST(alt17_3);
;goto accept17;
alt17_3: ptr->pos=oldpos23;goto break6;
 accept17:;
 break;
case UC(34) ... '#':; int oldpos24=ptr->pos;
alt18_1:;  it=AmethystCore_anything(self ); FAILTEST(alt18_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept18;
alt18_2: ptr->pos=oldpos24;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break6;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt18_3;
;goto accept18;
alt18_3: ptr->pos=oldpos24;  it=AmethystCore_anything(self ); FAILTEST(alt18_4);
;goto accept18;
alt18_4: ptr->pos=oldpos24;goto break6;
 accept18:;
 break;
case UC(92) ... UC(92):; int oldpos25=ptr->pos;
alt19_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt19_2);  it=AmethystCore_anything(self ); FAILTEST(alt19_2);
;goto accept19;
alt19_2: ptr->pos=oldpos25;  it=AmethystCore_anything(self ); FAILTEST(alt19_3);
;goto accept19;
alt19_3: ptr->pos=oldpos25;goto break6;
 accept19:;
 break;
} if (ame_getstop(self)!=Qnil){oldpos22=ptr->pos;goto break6;} } break6: ame_setstop(self,Qnil); ptr->pos=oldpos22; 
;goto accept16;
alt16_5: ptr->pos=oldpos20;it=rb_obj_clone(s__qu__3590); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt16_6);it=bind_aget(bind,5/*s*/);int oldpos26; while(1){oldpos26=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(34):;case '$' ... '&':;case '(' ... '[':;case ']' ... UC(255):; int oldpos27=ptr->pos;
alt20_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt20_2;
;goto accept20;
alt20_2: ptr->pos=oldpos27;  it=AmethystCore_anything(self ); FAILTEST(alt20_3);
;goto accept20;
alt20_3: ptr->pos=oldpos27;goto break7;
 accept20:;
 break;
case '#' ... '#':;case UC(39) ... UC(39):; int oldpos28=ptr->pos;
alt21_1:;  it=AmethystCore_anything(self ); FAILTEST(alt21_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept21;
alt21_2: ptr->pos=oldpos28;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break7;}it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
goto alt21_3;
;goto accept21;
alt21_3: ptr->pos=oldpos28;  it=AmethystCore_anything(self ); FAILTEST(alt21_4);
;goto accept21;
alt21_4: ptr->pos=oldpos28;goto break7;
 accept21:;
 break;
case UC(92) ... UC(92):; int oldpos29=ptr->pos;
alt22_1:;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*s*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt22_2);  it=AmethystCore_anything(self ); FAILTEST(alt22_2);
;goto accept22;
alt22_2: ptr->pos=oldpos29;  it=AmethystCore_anything(self ); FAILTEST(alt22_3);
;goto accept22;
alt22_3: ptr->pos=oldpos29;goto break7;
 accept22:;
 break;
} if (ame_getstop(self)!=Qnil){oldpos26=ptr->pos;goto break7;} } break7: ame_setstop(self,Qnil); ptr->pos=oldpos26; 
;goto accept16;
alt16_6: ptr->pos=oldpos20;goto pass3;
 accept16:;
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
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ptr->pos;
alt2_1:;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass2; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass2; else ptr->pos+=3; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass2; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_2;
                   success2: *ptr=oldpass2;
                  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_11,rb_obj_class(ame_curobj2(ptr))))){case 0/*Lambda*/:;   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*autovar*/,it);
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
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass5; else ptr->pos+=4; break;
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
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass6);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass6; else ptr->pos+=3; break;
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
int oldpos3=ptr->pos;
alt3_1:;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass7; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass7; else ptr->pos+=3; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass7; else ptr->pos+=4; break;
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
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass8);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass8; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto alt3_3;
                   success8: *ptr=oldpass8;
                  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass9); bind_aset(bind,13/*name*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt3_3;
                   success9: *ptr=oldpass9;
                it=rb_funcall(self,sy_Normalize_Apply_lb_bi_b806,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;it=bind_aget(bind,11/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass10);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass10; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass10);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass10; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto alt3_4;
                   success10: *ptr=oldpass10;
                  it=AmethystCore_anything(self ); FAILTEST(alt3_4); bind_aset(bind,14/*autovar*/,it);
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
int oldpos4=ptr->pos;
alt4_1:;it=bind_aget(bind,16/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass13);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass13; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass13);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass13; else ptr->pos+=3; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass13);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass13; else ptr->pos+=4; break;
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
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass14);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass14; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass14;
                   goto success14;
                   pass14: *ptr=oldpass14; goto alt4_3;
                   success14: *ptr=oldpass14;
                goto alt4_3;
;goto accept4;
alt4_3: ptr->pos=oldpos4;it=bind_aget(bind,16/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass15);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass15; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass15);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass15; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass15;
                   goto success15;
                   pass15: *ptr=oldpass15; goto alt4_4;
                   success15: *ptr=oldpass15;
                  it=AmethystCore_anything(self ); FAILTEST(alt4_4); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass16); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=Qnil;if (ptr->pos<ptr->len) goto pass17;
                   goto success17;
                   pass17: *ptr=oldpass17; goto pass16;
                   success17: *ptr=oldpass17;
                it=Qnil;if (ptr->pos<ptr->len) goto pass16;
                   goto success16;
                   pass16: *ptr=oldpass16; goto alt4_4;
                   success16: *ptr=oldpass16;
                it=rb_funcall(self,sy_Normalize_Placehol_a03d,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept4;
alt4_4: ptr->pos=oldpos4;goto alt1_2;
 accept4:;
 break;
case 3/*CAct*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,17/*autovar*/,it);
int oldpos5=ptr->pos;
alt5_1:;it=bind_aget(bind,17/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass18);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass18; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass18);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass18; else ptr->pos+=3; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass18);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass18; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass18;
                   goto success18;
                   pass18: *ptr=oldpass18; goto alt5_2;
                   success18: *ptr=oldpass18;
                goto alt5_2;
;goto accept5;
alt5_2: ptr->pos=oldpos5;it=bind_aget(bind,17/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass19);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass19; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass19);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass19; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass19;
                   goto success19;
                   pass19: *ptr=oldpass19; goto alt5_3;
                   success19: *ptr=oldpass19;
                  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,12/*autovar*/,it);
cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass20); bind_aset(bind,13/*name*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass20;
                   goto success20;
                   pass20: *ptr=oldpass20; goto alt5_3;
                   success20: *ptr=oldpass20;
                it=rb_funcall(self,sy_Normalize_Apply_lb_bi_b806,1,bind);  bind_aset(bind,8/*autovar*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;it=bind_aget(bind,17/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass21=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass21);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass21; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass21);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass21; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass21;
                   goto success21;
                   pass21: *ptr=oldpass21; goto alt5_4;
                   success21: *ptr=oldpass21;
                goto alt5_4;
;goto accept5;
alt5_4: ptr->pos=oldpos5;goto alt1_2;
 accept5:;
 break;
case 4/*Object*/:; it=bind_aget(bind,2/*autovar*/); bind_aset(bind,18/*autovar*/,it);
int oldpos6=ptr->pos;
alt6_1:;it=bind_aget(bind,18/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass22=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass22);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... '`':;case 'b' ... UC(255):; goto pass22; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass22);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass22; else ptr->pos+=3; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass22);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass22; else ptr->pos+=4; break;
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
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass23);if (strncmp(ame_curstr2(ptr),"pply",4)) goto pass23; else ptr->pos+=4; break;
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
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass24);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass24; else ptr->pos+=3; break;
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
VALUE Normalize_bind(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(26);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind); int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass3; else ptr->pos+=4; break;
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
int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,7/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,8/*it*/,it);
it=rb_funcall(self,sy_Normalize_Bind_lb_bin_bff4,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__4f82,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,7/*autovar*/); bind_aset(bind,10/*ary*/,it);
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
int oldpos4=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,12/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__7140,1,bind); int oldpos5; while(1){oldpos5=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__984f,1,bind);   } break2: ame_setstop(self,Qnil); ptr->pos=oldpos5; it=bind_aget(bind,12/*autovar*/); bind_aset(bind,10/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt3_2;
                   success5: *ptr=oldpass5;
                it=rb_funcall(self,sy_Normalize_Seq_lb_bind_b52b,1,bind);  bind_aset(bind,15/*first*/,it);
it=rb_funcall(self,sy_Normalize_bind_lb_10_rb__c855,1,bind);  bind_aset(bind,16/*last*/,it);
it=bind_aget(bind,16/*last*/); bind_aset(bind,17/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,17/*autovar*/);ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Comment*/:case 1/*Cut*/:case 2/*Stop*/:; int oldpos6=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2);it=rb_funcall(self,sy_Normalize_Seq_lb_Bind_8f10,1,bind);  bind_aset(bind,18/*autovar*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt4_3);it=rb_funcall(self,sy_Normalize_Seq_lb_bind_b71c,1,bind);  bind_aset(bind,18/*autovar*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos6;goto pass6;
 accept4:;
it=Qnil;if (ptr->pos<ptr->len) goto pass6; break;
case 3/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(pass6);it=rb_funcall(self,sy_Normalize_Seq_lb_bind_b71c,1,bind);  bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6; break;
}
                   goto success6;
                   pass6: *ptr=oldpass6; goto alt3_2;
                   success6: *ptr=oldpass6;
                it=bind_aget(bind,18/*autovar*/); bind_aset(bind,4/*autovar*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos4;goto pass1;
 accept3:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 3/*Switch_Char*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind);  bind_aset(bind,5/*name*/,it);
int oldpos7=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,10/*ary*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,20/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,21/*p*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass8); bind_aset(bind,22/*a*/,it);
it=rb_funcall(self,sy_Normalize_bind_lb_10_rb__46f2,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass8;
                   goto success8;
                   pass8: *ptr=oldpass8; goto break3;
                   success8: *ptr=oldpass8;
                  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos8; it=Qnil;if (ptr->pos<ptr->len) goto pass7;
                   goto success7;
                   pass7: *ptr=oldpass7; goto alt5_2;
                   success7: *ptr=oldpass7;
                it=rb_funcall(self,sy_Normalize_Switch_C_059f,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt5_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos7;goto pass1;
 accept5:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 4/*Switch_Clas*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind);  bind_aset(bind,5/*name*/,it);
int oldpos9=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,10/*ary*/,it);
int oldpos10; while(1){oldpos10=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,21/*p*/,it);
  it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,22/*a*/,it);
it=rb_funcall(self,sy_Normalize_bind_lb_10_rb__46f2,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
                   goto success10;
                   pass10: *ptr=oldpass10; goto break4;
                   success10: *ptr=oldpass10;
                  } break4: ame_setstop(self,Qnil); ptr->pos=oldpos10; it=Qnil;if (ptr->pos<ptr->len) goto pass9;
                   goto success9;
                   pass9: *ptr=oldpass9; goto alt6_2;
                   success9: *ptr=oldpass9;
                it=rb_funcall(self,sy_Normalize_Switch_C_09b7,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos9;  it=AmethystCore_anything(self ); FAILTEST(alt6_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos9;goto pass1;
 accept6:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 5/*Object*/:; it=rb_funcall(self,sy_Normalize_src_dot_name_80f3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(pass1);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
}
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,25/*_result*/,it);
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
VALUE Normalize_or(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,2/*or*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass3; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto pass2;
                   success3: *ptr=oldpass3;
                it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt1_2;
                   success2: *ptr=oldpass2;
                
;goto accept1;
alt1_2: ptr->pos=oldpos2; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3);
;goto accept1;
alt1_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); 
;goto accept1;
alt1_4: ptr->pos=oldpos2;goto break1;
 accept1:;
 break;
case 1/*Or*/:; int oldpos3=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_dot_ary_d5cf,1,bind);  bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__6ac6,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_2;
                   success4: *ptr=oldpass4;
                
;goto accept2;
alt2_2: ptr->pos=oldpos3; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_3);
;goto accept2;
alt2_3: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); 
;goto accept2;
alt2_4: ptr->pos=oldpos3;goto break1;
 accept2:;
 break;
case 2/*Seq*/:; int oldpos4=ptr->pos;
alt3_1:; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2);
;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos5; while(1){oldpos5=ptr->pos;   it=Normalize_cant_fail(self ); FAILTEST(break2);  } break2: ame_setstop(self,Qnil); ptr->pos=oldpos5; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Cut*/:;   it=AmethystCore_anything(self ); FAILTEST(pass5); break;
case 1/*Object*/:; goto pass5; break;
}ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__653e,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto alt3_3;
                   success5: *ptr=oldpass5;
                ptr->pos=ptr->len;
;goto accept3;
alt3_3: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_4); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); 
;goto accept3;
alt3_4: ptr->pos=oldpos4;goto break1;
 accept3:;
 break;
case 3/*Object*/:; int oldpos6=ptr->pos;
alt4_1:; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt4_2);
;goto accept4;
alt4_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); 
;goto accept4;
alt4_3: ptr->pos=oldpos6;goto break1;
 accept4:;
 break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__dot__263e,1,bind);  bind_aset(bind,10/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,10/*autovar*/);ptr->len=1;
                   int oldpos7=ptr->pos;
alt5_1:;it=i_0; bind_aset(bind,11/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,12/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_11_4586,1,bind); FAILTEST(alt5_2);it=rb_funcall(self,sy_Normalize_Apply_lb__dq_f_3881,1,bind);  bind_aset(bind,13/*autovar*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos7;it=i_1; bind_aset(bind,11/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,12/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_11_4586,1,bind); FAILTEST(alt5_3);it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__lb__1f45,1,bind);  bind_aset(bind,13/*autovar*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt5_4);it=rb_funcall(self,sy_Normalize_bind_lb_2_rb__dot__e24b,1,bind);  bind_aset(bind,13/*autovar*/,it);

;goto accept5;
alt5_4: ptr->pos=oldpos7;goto pass6;
 accept5:;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
                   goto success6;
                   pass6: *ptr=oldpass6; goto fail;
                   success6: *ptr=oldpass6;
                it=bind_aget(bind,13/*autovar*/); bind_aset(bind,14/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_seq2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(14);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Seq*/:; it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,2/*seq*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass3; else ptr->pos+=4; break;
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
;goto accept1;
alt1_2: ptr->pos=oldpos2; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt1_3);
;goto accept1;
alt1_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__4297,1,bind); 
;goto accept1;
alt1_4: ptr->pos=oldpos2;goto break1;
 accept1:;
 break;
case 1/*Seq*/:; int oldpos3=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,7/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,7/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_dot_ary_d5cf,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__0eeb,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass4;
                   goto success4;
                   pass4: *ptr=oldpass4; goto alt2_2;
                   success4: *ptr=oldpass4;
                
;goto accept2;
alt2_2: ptr->pos=oldpos3; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt2_3);
;goto accept2;
alt2_3: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__4297,1,bind); 
;goto accept2;
alt2_4: ptr->pos=oldpos3;goto break1;
 accept2:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;
alt3_1:; it=rb_funcall(self,sy_Normalize_Placehol_6875,1,bind);  arg0=it; it=Amethyst_clas(self ,arg0); FAILTEST(alt3_2);
;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__4297,1,bind); 
;goto accept3;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept3:;
 break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__dot__263e,1,bind);  bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,9/*autovar*/);ptr->len=1;
                   int oldpos5=ptr->pos;
alt4_1:;it=i_0; bind_aset(bind,10/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,11/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_10_612c,1,bind); FAILTEST(alt4_2);it=rb_funcall(self,sy_Normalize_Placehol_a03d,1,bind);  bind_aset(bind,12/*autovar*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos5;it=i_1; bind_aset(bind,10/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,11/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_10_612c,1,bind); FAILTEST(alt4_3);it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__lb__1f45,1,bind);  bind_aset(bind,12/*autovar*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt4_4);it=rb_funcall(self,sy_Normalize_bind_lb_2_rb__dot__e24b,1,bind);  bind_aset(bind,12/*autovar*/,it);

;goto accept4;
alt4_4: ptr->pos=oldpos5;goto pass5;
 accept4:;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
                   goto success5;
                   pass5: *ptr=oldpass5; goto fail;
                   success5: *ptr=oldpass5;
                it=bind_aget(bind,12/*autovar*/); bind_aset(bind,13/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_normalize_c(){ 
 cls_Normalize=rb_define_class("Normalize",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    i_0=rb_funcall(rb_str_new2("0"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_0);
i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),i_1);
s__bs__bs__7f81=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__bs__7f81);
s__bs__dq__3bd8=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__dq__3bd8);
s__qu__3590=rb_str_new2("'");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__qu__3590);
switchhash_Normalize_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_10);;
switchhash_Normalize_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Lambda\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_11);;
switchhash_Normalize_12=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_12);;
switchhash_Normalize_13=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Local\nnext h[k]=3 if k<=Lambda\nnext h[k]=4 if k<=String\nnext h[k]=5 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_13);;
switchhash_Normalize_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_1);;
switchhash_Normalize_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_2);;
switchhash_Normalize_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Cut\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_3);;
switchhash_Normalize_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_4);;
switchhash_Normalize_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_5);;
switchhash_Normalize_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_6);;
switchhash_Normalize_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Switch_Char\nnext h[k]=4 if k<=Switch_Clas\nnext h[k]=5 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_7);;
switchhash_Normalize_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Comment\nnext h[k]=1 if k<=Cut\nnext h[k]=2 if k<=Stop\nnext h[k]=3 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_8);;
switchhash_Normalize_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_9);;
sy_Normalize_Act_dot_crea_e434=rb_intern("Normalize_Act_dot_crea_e434");
sy_Normalize_Apply_lb__dq_f_3881=rb_intern("Normalize_Apply_lb__dq_f_3881");
sy_Normalize_Apply_lb_bi_b806=rb_intern("Normalize_Apply_lb_bi_b806");
sy_Normalize_Bind_lb_bin_bff4=rb_intern("Normalize_Bind_lb_bin_bff4");
sy_Normalize_CAct_lb_eva_559c=rb_intern("Normalize_CAct_lb_eva_559c");
sy_Normalize_Or_dot_creat_fbdf=rb_intern("Normalize_Or_dot_creat_fbdf");
sy_Normalize_Placehol_6875=rb_intern("Normalize_Placehol_6875");
sy_Normalize_Placehol_a03d=rb_intern("Normalize_Placehol_a03d");
sy_Normalize_Seq_lb_Bind_8f10=rb_intern("Normalize_Seq_lb_Bind_8f10");
sy_Normalize_Seq_lb_bind_b52b=rb_intern("Normalize_Seq_lb_bind_b52b");
sy_Normalize_Seq_lb_bind_b71c=rb_intern("Normalize_Seq_lb_bind_b71c");
sy_Normalize_Switch_C_059f=rb_intern("Normalize_Switch_C_059f");
sy_Normalize_Switch_C_09b7=rb_intern("Normalize_Switch_C_09b7");
sy_Normalize__append_lp__0eeb=rb_intern("Normalize__append_lp__0eeb");
sy_Normalize__append_lp__4297=rb_intern("Normalize__append_lp__4297");
sy_Normalize__append_lp__4f82=rb_intern("Normalize__append_lp__4f82");
sy_Normalize__append_lp__653e=rb_intern("Normalize__append_lp__653e");
sy_Normalize__append_lp__6ac6=rb_intern("Normalize__append_lp__6ac6");
sy_Normalize__append_lp__7140=rb_intern("Normalize__append_lp__7140");
sy_Normalize__append_lp__81ec=rb_intern("Normalize__append_lp__81ec");
sy_Normalize__append_lp__984f=rb_intern("Normalize__append_lp__984f");
sy_Normalize__lp_bind_lb_10_612c=rb_intern("Normalize__lp_bind_lb_10_612c");
sy_Normalize__lp_bind_lb_11_4586=rb_intern("Normalize__lp_bind_lb_11_4586");
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
                    rb_eval_string("testversionnormalize('95958a159cba73bd964bca5cfc95d484')");}
